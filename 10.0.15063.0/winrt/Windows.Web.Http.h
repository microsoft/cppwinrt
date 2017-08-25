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
#include "winrt/impl/Windows.Security.Cryptography.Certificates.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Web.Http.Filters.2.h"
#include "winrt/impl/Windows.Web.Http.Headers.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Web.Http.2.h"
#include "winrt/Windows.Web.h"

namespace winrt::impl {

template <typename D> Windows::Web::Http::HttpBufferContent consume_Windows_Web_Http_IHttpBufferContentFactory<D>::CreateFromBuffer(Windows::Storage::Streams::IBuffer const& content) const
{
    Windows::Web::Http::HttpBufferContent bufferContent{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpBufferContentFactory)->CreateFromBuffer(get_abi(content), put_abi(bufferContent)));
    return bufferContent;
}

template <typename D> Windows::Web::Http::HttpBufferContent consume_Windows_Web_Http_IHttpBufferContentFactory<D>::CreateFromBufferWithOffset(Windows::Storage::Streams::IBuffer const& content, uint32_t offset, uint32_t count) const
{
    Windows::Web::Http::HttpBufferContent bufferContent{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpBufferContentFactory)->CreateFromBufferWithOffset(get_abi(content), offset, count, put_abi(bufferContent)));
    return bufferContent;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> consume_Windows_Web_Http_IHttpClient<D>::DeleteAsync(Windows::Foundation::Uri const& uri) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpClient)->DeleteAsync(get_abi(uri), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> consume_Windows_Web_Http_IHttpClient<D>::GetAsync(Windows::Foundation::Uri const& uri) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpClient)->GetAsync(get_abi(uri), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> consume_Windows_Web_Http_IHttpClient<D>::GetAsync(Windows::Foundation::Uri const& uri, Windows::Web::Http::HttpCompletionOption const& completionOption) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpClient)->GetWithOptionAsync(get_abi(uri), get_abi(completionOption), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer, Windows::Web::Http::HttpProgress> consume_Windows_Web_Http_IHttpClient<D>::GetBufferAsync(Windows::Foundation::Uri const& uri) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer, Windows::Web::Http::HttpProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpClient)->GetBufferAsync(get_abi(uri), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IInputStream, Windows::Web::Http::HttpProgress> consume_Windows_Web_Http_IHttpClient<D>::GetInputStreamAsync(Windows::Foundation::Uri const& uri) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IInputStream, Windows::Web::Http::HttpProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpClient)->GetInputStreamAsync(get_abi(uri), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<hstring, Windows::Web::Http::HttpProgress> consume_Windows_Web_Http_IHttpClient<D>::GetStringAsync(Windows::Foundation::Uri const& uri) const
{
    Windows::Foundation::IAsyncOperationWithProgress<hstring, Windows::Web::Http::HttpProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpClient)->GetStringAsync(get_abi(uri), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> consume_Windows_Web_Http_IHttpClient<D>::PostAsync(Windows::Foundation::Uri const& uri, Windows::Web::Http::IHttpContent const& content) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpClient)->PostAsync(get_abi(uri), get_abi(content), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> consume_Windows_Web_Http_IHttpClient<D>::PutAsync(Windows::Foundation::Uri const& uri, Windows::Web::Http::IHttpContent const& content) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpClient)->PutAsync(get_abi(uri), get_abi(content), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> consume_Windows_Web_Http_IHttpClient<D>::SendRequestAsync(Windows::Web::Http::HttpRequestMessage const& request) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpClient)->SendRequestAsync(get_abi(request), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> consume_Windows_Web_Http_IHttpClient<D>::SendRequestAsync(Windows::Web::Http::HttpRequestMessage const& request, Windows::Web::Http::HttpCompletionOption const& completionOption) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpClient)->SendRequestWithOptionAsync(get_abi(request), get_abi(completionOption), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Web::Http::Headers::HttpRequestHeaderCollection consume_Windows_Web_Http_IHttpClient<D>::DefaultRequestHeaders() const
{
    Windows::Web::Http::Headers::HttpRequestHeaderCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpClient)->get_DefaultRequestHeaders(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpClient consume_Windows_Web_Http_IHttpClientFactory<D>::Create(Windows::Web::Http::Filters::IHttpFilter const& filter) const
{
    Windows::Web::Http::HttpClient client{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpClientFactory)->Create(get_abi(filter), put_abi(client)));
    return client;
}

template <typename D> Windows::Web::Http::Headers::HttpContentHeaderCollection consume_Windows_Web_Http_IHttpContent<D>::Headers() const
{
    Windows::Web::Http::Headers::HttpContentHeaderCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpContent)->get_Headers(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> consume_Windows_Web_Http_IHttpContent<D>::BufferAllAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpContent)->BufferAllAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer, uint64_t> consume_Windows_Web_Http_IHttpContent<D>::ReadAsBufferAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer, uint64_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpContent)->ReadAsBufferAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IInputStream, uint64_t> consume_Windows_Web_Http_IHttpContent<D>::ReadAsInputStreamAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IInputStream, uint64_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpContent)->ReadAsInputStreamAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<hstring, uint64_t> consume_Windows_Web_Http_IHttpContent<D>::ReadAsStringAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<hstring, uint64_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpContent)->ReadAsStringAsync(put_abi(operation)));
    return operation;
}

template <typename D> bool consume_Windows_Web_Http_IHttpContent<D>::TryComputeLength(uint64_t& length) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpContent)->TryComputeLength(&length, &succeeded));
    return succeeded;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> consume_Windows_Web_Http_IHttpContent<D>::WriteToStreamAsync(Windows::Storage::Streams::IOutputStream const& outputStream) const
{
    Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpContent)->WriteToStreamAsync(get_abi(outputStream), put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_Web_Http_IHttpCookie<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpCookie)->get_Name(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Web_Http_IHttpCookie<D>::Domain() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpCookie)->get_Domain(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Web_Http_IHttpCookie<D>::Path() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpCookie)->get_Path(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_Web_Http_IHttpCookie<D>::Expires() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpCookie)->get_Expires(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_IHttpCookie<D>::Expires(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpCookie)->put_Expires(get_abi(value)));
}

template <typename D> bool consume_Windows_Web_Http_IHttpCookie<D>::HttpOnly() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpCookie)->get_HttpOnly(&value));
    return value;
}

template <typename D> void consume_Windows_Web_Http_IHttpCookie<D>::HttpOnly(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpCookie)->put_HttpOnly(value));
}

template <typename D> bool consume_Windows_Web_Http_IHttpCookie<D>::Secure() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpCookie)->get_Secure(&value));
    return value;
}

template <typename D> void consume_Windows_Web_Http_IHttpCookie<D>::Secure(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpCookie)->put_Secure(value));
}

template <typename D> hstring consume_Windows_Web_Http_IHttpCookie<D>::Value() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpCookie)->get_Value(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_IHttpCookie<D>::Value(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpCookie)->put_Value(get_abi(value)));
}

template <typename D> Windows::Web::Http::HttpCookie consume_Windows_Web_Http_IHttpCookieFactory<D>::Create(param::hstring const& name, param::hstring const& domain, param::hstring const& path) const
{
    Windows::Web::Http::HttpCookie cookie{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpCookieFactory)->Create(get_abi(name), get_abi(domain), get_abi(path), put_abi(cookie)));
    return cookie;
}

template <typename D> bool consume_Windows_Web_Http_IHttpCookieManager<D>::SetCookie(Windows::Web::Http::HttpCookie const& cookie) const
{
    bool replaced{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpCookieManager)->SetCookie(get_abi(cookie), &replaced));
    return replaced;
}

template <typename D> bool consume_Windows_Web_Http_IHttpCookieManager<D>::SetCookie(Windows::Web::Http::HttpCookie const& cookie, bool thirdParty) const
{
    bool replaced{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpCookieManager)->SetCookieWithThirdParty(get_abi(cookie), thirdParty, &replaced));
    return replaced;
}

template <typename D> void consume_Windows_Web_Http_IHttpCookieManager<D>::DeleteCookie(Windows::Web::Http::HttpCookie const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpCookieManager)->DeleteCookie(get_abi(cookie)));
}

template <typename D> Windows::Web::Http::HttpCookieCollection consume_Windows_Web_Http_IHttpCookieManager<D>::GetCookies(Windows::Foundation::Uri const& uri) const
{
    Windows::Web::Http::HttpCookieCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpCookieManager)->GetCookies(get_abi(uri), put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpFormUrlEncodedContent consume_Windows_Web_Http_IHttpFormUrlEncodedContentFactory<D>::Create(param::iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& content) const
{
    Windows::Web::Http::HttpFormUrlEncodedContent formUrlEncodedContent{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpFormUrlEncodedContentFactory)->Create(get_abi(content), put_abi(formUrlEncodedContent)));
    return formUrlEncodedContent;
}

template <typename D> hstring consume_Windows_Web_Http_IHttpMethod<D>::Method() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpMethod)->get_Method(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpMethod consume_Windows_Web_Http_IHttpMethodFactory<D>::Create(param::hstring const& method) const
{
    Windows::Web::Http::HttpMethod httpMethod{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpMethodFactory)->Create(get_abi(method), put_abi(httpMethod)));
    return httpMethod;
}

template <typename D> Windows::Web::Http::HttpMethod consume_Windows_Web_Http_IHttpMethodStatics<D>::Delete() const
{
    Windows::Web::Http::HttpMethod value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpMethodStatics)->get_Delete(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpMethod consume_Windows_Web_Http_IHttpMethodStatics<D>::Get() const
{
    Windows::Web::Http::HttpMethod value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpMethodStatics)->get_Get(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpMethod consume_Windows_Web_Http_IHttpMethodStatics<D>::Head() const
{
    Windows::Web::Http::HttpMethod value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpMethodStatics)->get_Head(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpMethod consume_Windows_Web_Http_IHttpMethodStatics<D>::Options() const
{
    Windows::Web::Http::HttpMethod value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpMethodStatics)->get_Options(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpMethod consume_Windows_Web_Http_IHttpMethodStatics<D>::Patch() const
{
    Windows::Web::Http::HttpMethod value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpMethodStatics)->get_Patch(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpMethod consume_Windows_Web_Http_IHttpMethodStatics<D>::Post() const
{
    Windows::Web::Http::HttpMethod value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpMethodStatics)->get_Post(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpMethod consume_Windows_Web_Http_IHttpMethodStatics<D>::Put() const
{
    Windows::Web::Http::HttpMethod value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpMethodStatics)->get_Put(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_IHttpMultipartContent<D>::Add(Windows::Web::Http::IHttpContent const& content) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpMultipartContent)->Add(get_abi(content)));
}

template <typename D> Windows::Web::Http::HttpMultipartContent consume_Windows_Web_Http_IHttpMultipartContentFactory<D>::CreateWithSubtype(param::hstring const& subtype) const
{
    Windows::Web::Http::HttpMultipartContent multipartContent{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpMultipartContentFactory)->CreateWithSubtype(get_abi(subtype), put_abi(multipartContent)));
    return multipartContent;
}

template <typename D> Windows::Web::Http::HttpMultipartContent consume_Windows_Web_Http_IHttpMultipartContentFactory<D>::CreateWithSubtypeAndBoundary(param::hstring const& subtype, param::hstring const& boundary) const
{
    Windows::Web::Http::HttpMultipartContent multipartContent{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpMultipartContentFactory)->CreateWithSubtypeAndBoundary(get_abi(subtype), get_abi(boundary), put_abi(multipartContent)));
    return multipartContent;
}

template <typename D> void consume_Windows_Web_Http_IHttpMultipartFormDataContent<D>::Add(Windows::Web::Http::IHttpContent const& content) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpMultipartFormDataContent)->Add(get_abi(content)));
}

template <typename D> void consume_Windows_Web_Http_IHttpMultipartFormDataContent<D>::Add(Windows::Web::Http::IHttpContent const& content, param::hstring const& name) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpMultipartFormDataContent)->AddWithName(get_abi(content), get_abi(name)));
}

template <typename D> void consume_Windows_Web_Http_IHttpMultipartFormDataContent<D>::Add(Windows::Web::Http::IHttpContent const& content, param::hstring const& name, param::hstring const& fileName) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpMultipartFormDataContent)->AddWithNameAndFileName(get_abi(content), get_abi(name), get_abi(fileName)));
}

template <typename D> Windows::Web::Http::HttpMultipartFormDataContent consume_Windows_Web_Http_IHttpMultipartFormDataContentFactory<D>::CreateWithBoundary(param::hstring const& boundary) const
{
    Windows::Web::Http::HttpMultipartFormDataContent multipartFormDataContent{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpMultipartFormDataContentFactory)->CreateWithBoundary(get_abi(boundary), put_abi(multipartFormDataContent)));
    return multipartFormDataContent;
}

template <typename D> Windows::Web::Http::IHttpContent consume_Windows_Web_Http_IHttpRequestMessage<D>::Content() const
{
    Windows::Web::Http::IHttpContent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpRequestMessage)->get_Content(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_IHttpRequestMessage<D>::Content(Windows::Web::Http::IHttpContent const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpRequestMessage)->put_Content(get_abi(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpRequestHeaderCollection consume_Windows_Web_Http_IHttpRequestMessage<D>::Headers() const
{
    Windows::Web::Http::Headers::HttpRequestHeaderCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpRequestMessage)->get_Headers(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpMethod consume_Windows_Web_Http_IHttpRequestMessage<D>::Method() const
{
    Windows::Web::Http::HttpMethod value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpRequestMessage)->get_Method(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_IHttpRequestMessage<D>::Method(Windows::Web::Http::HttpMethod const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpRequestMessage)->put_Method(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable> consume_Windows_Web_Http_IHttpRequestMessage<D>::Properties() const
{
    Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpRequestMessage)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_Http_IHttpRequestMessage<D>::RequestUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpRequestMessage)->get_RequestUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_IHttpRequestMessage<D>::RequestUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpRequestMessage)->put_RequestUri(get_abi(value)));
}

template <typename D> Windows::Web::Http::HttpTransportInformation consume_Windows_Web_Http_IHttpRequestMessage<D>::TransportInformation() const
{
    Windows::Web::Http::HttpTransportInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpRequestMessage)->get_TransportInformation(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpRequestMessage consume_Windows_Web_Http_IHttpRequestMessageFactory<D>::Create(Windows::Web::Http::HttpMethod const& method, Windows::Foundation::Uri const& uri) const
{
    Windows::Web::Http::HttpRequestMessage httpRequestMessage{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpRequestMessageFactory)->Create(get_abi(method), get_abi(uri), put_abi(httpRequestMessage)));
    return httpRequestMessage;
}

template <typename D> Windows::Web::Http::IHttpContent consume_Windows_Web_Http_IHttpResponseMessage<D>::Content() const
{
    Windows::Web::Http::IHttpContent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpResponseMessage)->get_Content(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_IHttpResponseMessage<D>::Content(Windows::Web::Http::IHttpContent const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpResponseMessage)->put_Content(get_abi(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpResponseHeaderCollection consume_Windows_Web_Http_IHttpResponseMessage<D>::Headers() const
{
    Windows::Web::Http::Headers::HttpResponseHeaderCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpResponseMessage)->get_Headers(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Web_Http_IHttpResponseMessage<D>::IsSuccessStatusCode() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpResponseMessage)->get_IsSuccessStatusCode(&value));
    return value;
}

template <typename D> hstring consume_Windows_Web_Http_IHttpResponseMessage<D>::ReasonPhrase() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpResponseMessage)->get_ReasonPhrase(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_IHttpResponseMessage<D>::ReasonPhrase(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpResponseMessage)->put_ReasonPhrase(get_abi(value)));
}

template <typename D> Windows::Web::Http::HttpRequestMessage consume_Windows_Web_Http_IHttpResponseMessage<D>::RequestMessage() const
{
    Windows::Web::Http::HttpRequestMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpResponseMessage)->get_RequestMessage(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_IHttpResponseMessage<D>::RequestMessage(Windows::Web::Http::HttpRequestMessage const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpResponseMessage)->put_RequestMessage(get_abi(value)));
}

template <typename D> Windows::Web::Http::HttpResponseMessageSource consume_Windows_Web_Http_IHttpResponseMessage<D>::Source() const
{
    Windows::Web::Http::HttpResponseMessageSource value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpResponseMessage)->get_Source(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_IHttpResponseMessage<D>::Source(Windows::Web::Http::HttpResponseMessageSource const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpResponseMessage)->put_Source(get_abi(value)));
}

template <typename D> Windows::Web::Http::HttpStatusCode consume_Windows_Web_Http_IHttpResponseMessage<D>::StatusCode() const
{
    Windows::Web::Http::HttpStatusCode value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpResponseMessage)->get_StatusCode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_IHttpResponseMessage<D>::StatusCode(Windows::Web::Http::HttpStatusCode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpResponseMessage)->put_StatusCode(get_abi(value)));
}

template <typename D> Windows::Web::Http::HttpVersion consume_Windows_Web_Http_IHttpResponseMessage<D>::Version() const
{
    Windows::Web::Http::HttpVersion value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpResponseMessage)->get_Version(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_IHttpResponseMessage<D>::Version(Windows::Web::Http::HttpVersion const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpResponseMessage)->put_Version(get_abi(value)));
}

template <typename D> Windows::Web::Http::HttpResponseMessage consume_Windows_Web_Http_IHttpResponseMessage<D>::EnsureSuccessStatusCode() const
{
    Windows::Web::Http::HttpResponseMessage httpResponseMessage{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpResponseMessage)->EnsureSuccessStatusCode(put_abi(httpResponseMessage)));
    return httpResponseMessage;
}

template <typename D> Windows::Web::Http::HttpResponseMessage consume_Windows_Web_Http_IHttpResponseMessageFactory<D>::Create(Windows::Web::Http::HttpStatusCode const& statusCode) const
{
    Windows::Web::Http::HttpResponseMessage httpResponseMessage{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpResponseMessageFactory)->Create(get_abi(statusCode), put_abi(httpResponseMessage)));
    return httpResponseMessage;
}

template <typename D> Windows::Web::Http::HttpStreamContent consume_Windows_Web_Http_IHttpStreamContentFactory<D>::CreateFromInputStream(Windows::Storage::Streams::IInputStream const& content) const
{
    Windows::Web::Http::HttpStreamContent streamContent{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpStreamContentFactory)->CreateFromInputStream(get_abi(content), put_abi(streamContent)));
    return streamContent;
}

template <typename D> Windows::Web::Http::HttpStringContent consume_Windows_Web_Http_IHttpStringContentFactory<D>::CreateFromString(param::hstring const& content) const
{
    Windows::Web::Http::HttpStringContent stringContent{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpStringContentFactory)->CreateFromString(get_abi(content), put_abi(stringContent)));
    return stringContent;
}

template <typename D> Windows::Web::Http::HttpStringContent consume_Windows_Web_Http_IHttpStringContentFactory<D>::CreateFromStringWithEncoding(param::hstring const& content, Windows::Storage::Streams::UnicodeEncoding const& encoding) const
{
    Windows::Web::Http::HttpStringContent stringContent{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpStringContentFactory)->CreateFromStringWithEncoding(get_abi(content), get_abi(encoding), put_abi(stringContent)));
    return stringContent;
}

template <typename D> Windows::Web::Http::HttpStringContent consume_Windows_Web_Http_IHttpStringContentFactory<D>::CreateFromStringWithEncodingAndMediaType(param::hstring const& content, Windows::Storage::Streams::UnicodeEncoding const& encoding, param::hstring const& mediaType) const
{
    Windows::Web::Http::HttpStringContent stringContent{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpStringContentFactory)->CreateFromStringWithEncodingAndMediaType(get_abi(content), get_abi(encoding), get_abi(mediaType), put_abi(stringContent)));
    return stringContent;
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate consume_Windows_Web_Http_IHttpTransportInformation<D>::ServerCertificate() const
{
    Windows::Security::Cryptography::Certificates::Certificate value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpTransportInformation)->get_ServerCertificate(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::SocketSslErrorSeverity consume_Windows_Web_Http_IHttpTransportInformation<D>::ServerCertificateErrorSeverity() const
{
    Windows::Networking::Sockets::SocketSslErrorSeverity value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpTransportInformation)->get_ServerCertificateErrorSeverity(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult> consume_Windows_Web_Http_IHttpTransportInformation<D>::ServerCertificateErrors() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpTransportInformation)->get_ServerCertificateErrors(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> consume_Windows_Web_Http_IHttpTransportInformation<D>::ServerIntermediateCertificates() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::IHttpTransportInformation)->get_ServerIntermediateCertificates(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Web::Http::IHttpBufferContentFactory> : produce_base<D, Windows::Web::Http::IHttpBufferContentFactory>
{
    HRESULT __stdcall CreateFromBuffer(::IUnknown* content, ::IUnknown** bufferContent) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bufferContent = detach_abi(this->shim().CreateFromBuffer(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&content)));
            return S_OK;
        }
        catch (...)
        {
            *bufferContent = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromBufferWithOffset(::IUnknown* content, uint32_t offset, uint32_t count, ::IUnknown** bufferContent) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bufferContent = detach_abi(this->shim().CreateFromBufferWithOffset(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&content), offset, count));
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
    HRESULT __stdcall DeleteAsync(::IUnknown* uri, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().DeleteAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAsync(::IUnknown* uri, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetWithOptionAsync(::IUnknown* uri, abi_t<Windows::Web::Http::HttpCompletionOption> completionOption, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Web::Http::HttpCompletionOption const*>(&completionOption)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetBufferAsync(::IUnknown* uri, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetBufferAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetInputStreamAsync(::IUnknown* uri, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetInputStreamAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStringAsync(::IUnknown* uri, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetStringAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PostAsync(::IUnknown* uri, ::IUnknown* content, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PostAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Web::Http::IHttpContent const*>(&content)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PutAsync(::IUnknown* uri, ::IUnknown* content, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PutAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Web::Http::IHttpContent const*>(&content)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall SendRequestWithOptionAsync(::IUnknown* request, abi_t<Windows::Web::Http::HttpCompletionOption> completionOption, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SendRequestAsync(*reinterpret_cast<Windows::Web::Http::HttpRequestMessage const*>(&request), *reinterpret_cast<Windows::Web::Http::HttpCompletionOption const*>(&completionOption)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultRequestHeaders(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DefaultRequestHeaders());
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
    HRESULT __stdcall Create(::IUnknown* filter, ::IUnknown** client) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *client = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Web::Http::Filters::IHttpFilter const*>(&filter)));
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
    HRESULT __stdcall get_Headers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Headers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall BufferAllAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().BufferAllAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadAsBufferAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ReadAsBufferAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadAsInputStreamAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ReadAsInputStreamAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadAsStringAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ReadAsStringAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryComputeLength(uint64_t* length, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryComputeLength(*length));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteToStreamAsync(::IUnknown* outputStream, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().WriteToStreamAsync(*reinterpret_cast<Windows::Storage::Streams::IOutputStream const*>(&outputStream)));
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
    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Domain(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Domain());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Path(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Path());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Expires(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Expires());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Expires(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Expires(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HttpOnly(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HttpOnly());
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
            typename D::abi_guard guard(this->shim());
            this->shim().HttpOnly(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Secure(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Secure());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Secure(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(*reinterpret_cast<hstring const*>(&value));
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
    HRESULT __stdcall Create(HSTRING name, HSTRING domain, HSTRING path, ::IUnknown** cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&domain), *reinterpret_cast<hstring const*>(&path)));
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
    HRESULT __stdcall SetCookie(::IUnknown* cookie, bool* replaced) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *replaced = detach_abi(this->shim().SetCookie(*reinterpret_cast<Windows::Web::Http::HttpCookie const*>(&cookie)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetCookieWithThirdParty(::IUnknown* cookie, bool thirdParty, bool* replaced) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *replaced = detach_abi(this->shim().SetCookie(*reinterpret_cast<Windows::Web::Http::HttpCookie const*>(&cookie), thirdParty));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteCookie(::IUnknown* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeleteCookie(*reinterpret_cast<Windows::Web::Http::HttpCookie const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCookies(::IUnknown* uri, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCookies(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
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
    HRESULT __stdcall Create(::IUnknown* content, ::IUnknown** formUrlEncodedContent) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *formUrlEncodedContent = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const*>(&content)));
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
    HRESULT __stdcall get_Method(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Method());
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
    HRESULT __stdcall Create(HSTRING method, ::IUnknown** httpMethod) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *httpMethod = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&method)));
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
    HRESULT __stdcall get_Delete(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Delete());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Get(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Get());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Head(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Head());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Options(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Options());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Patch(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Patch());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Post(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Post());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Put(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Put());
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
    HRESULT __stdcall Add(::IUnknown* content) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Add(*reinterpret_cast<Windows::Web::Http::IHttpContent const*>(&content));
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
    HRESULT __stdcall CreateWithSubtype(HSTRING subtype, ::IUnknown** multipartContent) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *multipartContent = detach_abi(this->shim().CreateWithSubtype(*reinterpret_cast<hstring const*>(&subtype)));
            return S_OK;
        }
        catch (...)
        {
            *multipartContent = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithSubtypeAndBoundary(HSTRING subtype, HSTRING boundary, ::IUnknown** multipartContent) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *multipartContent = detach_abi(this->shim().CreateWithSubtypeAndBoundary(*reinterpret_cast<hstring const*>(&subtype), *reinterpret_cast<hstring const*>(&boundary)));
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
    HRESULT __stdcall Add(::IUnknown* content) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Add(*reinterpret_cast<Windows::Web::Http::IHttpContent const*>(&content));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddWithName(::IUnknown* content, HSTRING name) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Add(*reinterpret_cast<Windows::Web::Http::IHttpContent const*>(&content), *reinterpret_cast<hstring const*>(&name));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddWithNameAndFileName(::IUnknown* content, HSTRING name, HSTRING fileName) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Add(*reinterpret_cast<Windows::Web::Http::IHttpContent const*>(&content), *reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&fileName));
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
    HRESULT __stdcall CreateWithBoundary(HSTRING boundary, ::IUnknown** multipartFormDataContent) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *multipartFormDataContent = detach_abi(this->shim().CreateWithBoundary(*reinterpret_cast<hstring const*>(&boundary)));
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
    HRESULT __stdcall get_Content(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Content());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Content(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Content(*reinterpret_cast<Windows::Web::Http::IHttpContent const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Headers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Headers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Method(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Method());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Method(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Method(*reinterpret_cast<Windows::Web::Http::HttpMethod const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestUri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RequestUri(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransportInformation(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransportInformation());
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
    HRESULT __stdcall Create(::IUnknown* method, ::IUnknown* uri, ::IUnknown** httpRequestMessage) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *httpRequestMessage = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Web::Http::HttpMethod const*>(&method), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
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
    HRESULT __stdcall get_Content(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Content());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Content(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Content(*reinterpret_cast<Windows::Web::Http::IHttpContent const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Headers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Headers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSuccessStatusCode(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSuccessStatusCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReasonPhrase(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReasonPhrase());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ReasonPhrase(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReasonPhrase(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall put_RequestMessage(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestMessage(*reinterpret_cast<Windows::Web::Http::HttpRequestMessage const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(abi_t<Windows::Web::Http::HttpResponseMessageSource>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(abi_t<Windows::Web::Http::HttpResponseMessageSource> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Web::Http::HttpResponseMessageSource const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StatusCode(abi_t<Windows::Web::Http::HttpStatusCode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StatusCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StatusCode(abi_t<Windows::Web::Http::HttpStatusCode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StatusCode(*reinterpret_cast<Windows::Web::Http::HttpStatusCode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Version(abi_t<Windows::Web::Http::HttpVersion>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Version());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Version(abi_t<Windows::Web::Http::HttpVersion> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Version(*reinterpret_cast<Windows::Web::Http::HttpVersion const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EnsureSuccessStatusCode(::IUnknown** httpResponseMessage) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *httpResponseMessage = detach_abi(this->shim().EnsureSuccessStatusCode());
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
    HRESULT __stdcall Create(abi_t<Windows::Web::Http::HttpStatusCode> statusCode, ::IUnknown** httpResponseMessage) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *httpResponseMessage = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Web::Http::HttpStatusCode const*>(&statusCode)));
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
    HRESULT __stdcall CreateFromInputStream(::IUnknown* content, ::IUnknown** streamContent) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *streamContent = detach_abi(this->shim().CreateFromInputStream(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&content)));
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
    HRESULT __stdcall CreateFromString(HSTRING content, ::IUnknown** stringContent) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *stringContent = detach_abi(this->shim().CreateFromString(*reinterpret_cast<hstring const*>(&content)));
            return S_OK;
        }
        catch (...)
        {
            *stringContent = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromStringWithEncoding(HSTRING content, abi_t<Windows::Storage::Streams::UnicodeEncoding> encoding, ::IUnknown** stringContent) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *stringContent = detach_abi(this->shim().CreateFromStringWithEncoding(*reinterpret_cast<hstring const*>(&content), *reinterpret_cast<Windows::Storage::Streams::UnicodeEncoding const*>(&encoding)));
            return S_OK;
        }
        catch (...)
        {
            *stringContent = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromStringWithEncodingAndMediaType(HSTRING content, abi_t<Windows::Storage::Streams::UnicodeEncoding> encoding, HSTRING mediaType, ::IUnknown** stringContent) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *stringContent = detach_abi(this->shim().CreateFromStringWithEncodingAndMediaType(*reinterpret_cast<hstring const*>(&content), *reinterpret_cast<Windows::Storage::Streams::UnicodeEncoding const*>(&encoding), *reinterpret_cast<hstring const*>(&mediaType)));
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
};

}

WINRT_EXPORT namespace winrt::Windows::Web::Http {

inline HttpBufferContent::HttpBufferContent(Windows::Storage::Streams::IBuffer const& content) :
    HttpBufferContent(get_activation_factory<HttpBufferContent, Windows::Web::Http::IHttpBufferContentFactory>().CreateFromBuffer(content))
{}

inline HttpBufferContent::HttpBufferContent(Windows::Storage::Streams::IBuffer const& content, uint32_t offset, uint32_t count) :
    HttpBufferContent(get_activation_factory<HttpBufferContent, Windows::Web::Http::IHttpBufferContentFactory>().CreateFromBufferWithOffset(content, offset, count))
{}

inline HttpClient::HttpClient() :
    HttpClient(activate_instance<HttpClient>())
{}

inline HttpClient::HttpClient(Windows::Web::Http::Filters::IHttpFilter const& filter) :
    HttpClient(get_activation_factory<HttpClient, Windows::Web::Http::IHttpClientFactory>().Create(filter))
{}

inline HttpCookie::HttpCookie(param::hstring const& name, param::hstring const& domain, param::hstring const& path) :
    HttpCookie(get_activation_factory<HttpCookie, Windows::Web::Http::IHttpCookieFactory>().Create(name, domain, path))
{}

inline HttpFormUrlEncodedContent::HttpFormUrlEncodedContent(param::iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& content) :
    HttpFormUrlEncodedContent(get_activation_factory<HttpFormUrlEncodedContent, Windows::Web::Http::IHttpFormUrlEncodedContentFactory>().Create(content))
{}

inline HttpMethod::HttpMethod(param::hstring const& method) :
    HttpMethod(get_activation_factory<HttpMethod, Windows::Web::Http::IHttpMethodFactory>().Create(method))
{}

inline Windows::Web::Http::HttpMethod HttpMethod::Delete()
{
    return get_activation_factory<HttpMethod, Windows::Web::Http::IHttpMethodStatics>().Delete();
}

inline Windows::Web::Http::HttpMethod HttpMethod::Get()
{
    return get_activation_factory<HttpMethod, Windows::Web::Http::IHttpMethodStatics>().Get();
}

inline Windows::Web::Http::HttpMethod HttpMethod::Head()
{
    return get_activation_factory<HttpMethod, Windows::Web::Http::IHttpMethodStatics>().Head();
}

inline Windows::Web::Http::HttpMethod HttpMethod::Options()
{
    return get_activation_factory<HttpMethod, Windows::Web::Http::IHttpMethodStatics>().Options();
}

inline Windows::Web::Http::HttpMethod HttpMethod::Patch()
{
    return get_activation_factory<HttpMethod, Windows::Web::Http::IHttpMethodStatics>().Patch();
}

inline Windows::Web::Http::HttpMethod HttpMethod::Post()
{
    return get_activation_factory<HttpMethod, Windows::Web::Http::IHttpMethodStatics>().Post();
}

inline Windows::Web::Http::HttpMethod HttpMethod::Put()
{
    return get_activation_factory<HttpMethod, Windows::Web::Http::IHttpMethodStatics>().Put();
}

inline HttpMultipartContent::HttpMultipartContent() :
    HttpMultipartContent(activate_instance<HttpMultipartContent>())
{}

inline HttpMultipartContent::HttpMultipartContent(param::hstring const& subtype) :
    HttpMultipartContent(get_activation_factory<HttpMultipartContent, Windows::Web::Http::IHttpMultipartContentFactory>().CreateWithSubtype(subtype))
{}

inline HttpMultipartContent::HttpMultipartContent(param::hstring const& subtype, param::hstring const& boundary) :
    HttpMultipartContent(get_activation_factory<HttpMultipartContent, Windows::Web::Http::IHttpMultipartContentFactory>().CreateWithSubtypeAndBoundary(subtype, boundary))
{}

inline HttpMultipartFormDataContent::HttpMultipartFormDataContent() :
    HttpMultipartFormDataContent(activate_instance<HttpMultipartFormDataContent>())
{}

inline HttpMultipartFormDataContent::HttpMultipartFormDataContent(param::hstring const& boundary) :
    HttpMultipartFormDataContent(get_activation_factory<HttpMultipartFormDataContent, Windows::Web::Http::IHttpMultipartFormDataContentFactory>().CreateWithBoundary(boundary))
{}

inline HttpRequestMessage::HttpRequestMessage() :
    HttpRequestMessage(activate_instance<HttpRequestMessage>())
{}

inline HttpRequestMessage::HttpRequestMessage(Windows::Web::Http::HttpMethod const& method, Windows::Foundation::Uri const& uri) :
    HttpRequestMessage(get_activation_factory<HttpRequestMessage, Windows::Web::Http::IHttpRequestMessageFactory>().Create(method, uri))
{}

inline HttpResponseMessage::HttpResponseMessage() :
    HttpResponseMessage(activate_instance<HttpResponseMessage>())
{}

inline HttpResponseMessage::HttpResponseMessage(Windows::Web::Http::HttpStatusCode const& statusCode) :
    HttpResponseMessage(get_activation_factory<HttpResponseMessage, Windows::Web::Http::IHttpResponseMessageFactory>().Create(statusCode))
{}

inline HttpStreamContent::HttpStreamContent(Windows::Storage::Streams::IInputStream const& content) :
    HttpStreamContent(get_activation_factory<HttpStreamContent, Windows::Web::Http::IHttpStreamContentFactory>().CreateFromInputStream(content))
{}

inline HttpStringContent::HttpStringContent(param::hstring const& content) :
    HttpStringContent(get_activation_factory<HttpStringContent, Windows::Web::Http::IHttpStringContentFactory>().CreateFromString(content))
{}

inline HttpStringContent::HttpStringContent(param::hstring const& content, Windows::Storage::Streams::UnicodeEncoding const& encoding) :
    HttpStringContent(get_activation_factory<HttpStringContent, Windows::Web::Http::IHttpStringContentFactory>().CreateFromStringWithEncoding(content, encoding))
{}

inline HttpStringContent::HttpStringContent(param::hstring const& content, Windows::Storage::Streams::UnicodeEncoding const& encoding, param::hstring const& mediaType) :
    HttpStringContent(get_activation_factory<HttpStringContent, Windows::Web::Http::IHttpStringContentFactory>().CreateFromStringWithEncodingAndMediaType(content, encoding, mediaType))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Web::Http::IHttpBufferContentFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::IHttpBufferContentFactory> {};

template<> struct hash<winrt::Windows::Web::Http::IHttpClient> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::IHttpClient> {};

template<> struct hash<winrt::Windows::Web::Http::IHttpClientFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::IHttpClientFactory> {};

template<> struct hash<winrt::Windows::Web::Http::IHttpContent> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::IHttpContent> {};

template<> struct hash<winrt::Windows::Web::Http::IHttpCookie> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::IHttpCookie> {};

template<> struct hash<winrt::Windows::Web::Http::IHttpCookieFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::IHttpCookieFactory> {};

template<> struct hash<winrt::Windows::Web::Http::IHttpCookieManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::IHttpCookieManager> {};

template<> struct hash<winrt::Windows::Web::Http::IHttpFormUrlEncodedContentFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::IHttpFormUrlEncodedContentFactory> {};

template<> struct hash<winrt::Windows::Web::Http::IHttpMethod> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::IHttpMethod> {};

template<> struct hash<winrt::Windows::Web::Http::IHttpMethodFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::IHttpMethodFactory> {};

template<> struct hash<winrt::Windows::Web::Http::IHttpMethodStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::IHttpMethodStatics> {};

template<> struct hash<winrt::Windows::Web::Http::IHttpMultipartContent> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::IHttpMultipartContent> {};

template<> struct hash<winrt::Windows::Web::Http::IHttpMultipartContentFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::IHttpMultipartContentFactory> {};

template<> struct hash<winrt::Windows::Web::Http::IHttpMultipartFormDataContent> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::IHttpMultipartFormDataContent> {};

template<> struct hash<winrt::Windows::Web::Http::IHttpMultipartFormDataContentFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::IHttpMultipartFormDataContentFactory> {};

template<> struct hash<winrt::Windows::Web::Http::IHttpRequestMessage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::IHttpRequestMessage> {};

template<> struct hash<winrt::Windows::Web::Http::IHttpRequestMessageFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::IHttpRequestMessageFactory> {};

template<> struct hash<winrt::Windows::Web::Http::IHttpResponseMessage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::IHttpResponseMessage> {};

template<> struct hash<winrt::Windows::Web::Http::IHttpResponseMessageFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::IHttpResponseMessageFactory> {};

template<> struct hash<winrt::Windows::Web::Http::IHttpStreamContentFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::IHttpStreamContentFactory> {};

template<> struct hash<winrt::Windows::Web::Http::IHttpStringContentFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::IHttpStringContentFactory> {};

template<> struct hash<winrt::Windows::Web::Http::IHttpTransportInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::IHttpTransportInformation> {};

template<> struct hash<winrt::Windows::Web::Http::HttpBufferContent> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::HttpBufferContent> {};

template<> struct hash<winrt::Windows::Web::Http::HttpClient> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::HttpClient> {};

template<> struct hash<winrt::Windows::Web::Http::HttpCookie> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::HttpCookie> {};

template<> struct hash<winrt::Windows::Web::Http::HttpCookieCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::HttpCookieCollection> {};

template<> struct hash<winrt::Windows::Web::Http::HttpCookieManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::HttpCookieManager> {};

template<> struct hash<winrt::Windows::Web::Http::HttpFormUrlEncodedContent> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::HttpFormUrlEncodedContent> {};

template<> struct hash<winrt::Windows::Web::Http::HttpMethod> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::HttpMethod> {};

template<> struct hash<winrt::Windows::Web::Http::HttpMultipartContent> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::HttpMultipartContent> {};

template<> struct hash<winrt::Windows::Web::Http::HttpMultipartFormDataContent> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::HttpMultipartFormDataContent> {};

template<> struct hash<winrt::Windows::Web::Http::HttpRequestMessage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::HttpRequestMessage> {};

template<> struct hash<winrt::Windows::Web::Http::HttpResponseMessage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::HttpResponseMessage> {};

template<> struct hash<winrt::Windows::Web::Http::HttpStreamContent> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::HttpStreamContent> {};

template<> struct hash<winrt::Windows::Web::Http::HttpStringContent> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::HttpStringContent> {};

template<> struct hash<winrt::Windows::Web::Http::HttpTransportInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::HttpTransportInformation> {};

}

WINRT_WARNING_POP
