// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Globalization.2.h"
#include "winrt/impl/Windows.Networking.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Web.Http.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Web.Http.Headers.2.h"
#include "winrt/Windows.Web.Http.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Web_Http_Headers_IHttpCacheDirectiveHeaderValueCollection<D>::MaxAge() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection)->get_MaxAge(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpCacheDirectiveHeaderValueCollection<D>::MaxAge(optional<Windows::Foundation::TimeSpan> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection)->put_MaxAge(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Web_Http_Headers_IHttpCacheDirectiveHeaderValueCollection<D>::MaxStale() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection)->get_MaxStale(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpCacheDirectiveHeaderValueCollection<D>::MaxStale(optional<Windows::Foundation::TimeSpan> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection)->put_MaxStale(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Web_Http_Headers_IHttpCacheDirectiveHeaderValueCollection<D>::MinFresh() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection)->get_MinFresh(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpCacheDirectiveHeaderValueCollection<D>::MinFresh(optional<Windows::Foundation::TimeSpan> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection)->put_MinFresh(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Web_Http_Headers_IHttpCacheDirectiveHeaderValueCollection<D>::SharedMaxAge() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection)->get_SharedMaxAge(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpCacheDirectiveHeaderValueCollection<D>::SharedMaxAge(optional<Windows::Foundation::TimeSpan> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection)->put_SharedMaxAge(get_abi(value)));
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpCacheDirectiveHeaderValueCollection<D>::ParseAdd(param::hstring const& input) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection)->ParseAdd(get_abi(input)));
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpCacheDirectiveHeaderValueCollection<D>::TryParseAdd(param::hstring const& input) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection)->TryParseAdd(get_abi(input), &succeeded));
    return succeeded;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue> consume_Windows_Web_Http_Headers_IHttpChallengeHeaderValue<D>::Parameters() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpChallengeHeaderValue)->get_Parameters(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Web_Http_Headers_IHttpChallengeHeaderValue<D>::Scheme() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpChallengeHeaderValue)->get_Scheme(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Web_Http_Headers_IHttpChallengeHeaderValue<D>::Token() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpChallengeHeaderValue)->get_Token(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpChallengeHeaderValueCollection<D>::ParseAdd(param::hstring const& input) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpChallengeHeaderValueCollection)->ParseAdd(get_abi(input)));
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpChallengeHeaderValueCollection<D>::TryParseAdd(param::hstring const& input) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpChallengeHeaderValueCollection)->TryParseAdd(get_abi(input), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpChallengeHeaderValue consume_Windows_Web_Http_Headers_IHttpChallengeHeaderValueFactory<D>::CreateFromScheme(param::hstring const& scheme) const
{
    Windows::Web::Http::Headers::HttpChallengeHeaderValue challengeHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpChallengeHeaderValueFactory)->CreateFromScheme(get_abi(scheme), put_abi(challengeHeaderValue)));
    return challengeHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpChallengeHeaderValue consume_Windows_Web_Http_Headers_IHttpChallengeHeaderValueFactory<D>::CreateFromSchemeWithToken(param::hstring const& scheme, param::hstring const& token) const
{
    Windows::Web::Http::Headers::HttpChallengeHeaderValue challengeHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpChallengeHeaderValueFactory)->CreateFromSchemeWithToken(get_abi(scheme), get_abi(token), put_abi(challengeHeaderValue)));
    return challengeHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpChallengeHeaderValue consume_Windows_Web_Http_Headers_IHttpChallengeHeaderValueStatics<D>::Parse(param::hstring const& input) const
{
    Windows::Web::Http::Headers::HttpChallengeHeaderValue challengeHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpChallengeHeaderValueStatics)->Parse(get_abi(input), put_abi(challengeHeaderValue)));
    return challengeHeaderValue;
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpChallengeHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpChallengeHeaderValue& challengeHeaderValue) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpChallengeHeaderValueStatics)->TryParse(get_abi(input), put_abi(challengeHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> hstring consume_Windows_Web_Http_Headers_IHttpConnectionOptionHeaderValue<D>::Token() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValue)->get_Token(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpConnectionOptionHeaderValueCollection<D>::ParseAdd(param::hstring const& input) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueCollection)->ParseAdd(get_abi(input)));
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpConnectionOptionHeaderValueCollection<D>::TryParseAdd(param::hstring const& input) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueCollection)->TryParseAdd(get_abi(input), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue consume_Windows_Web_Http_Headers_IHttpConnectionOptionHeaderValueFactory<D>::Create(param::hstring const& token) const
{
    Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue connectionOptionHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueFactory)->Create(get_abi(token), put_abi(connectionOptionHeaderValue)));
    return connectionOptionHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue consume_Windows_Web_Http_Headers_IHttpConnectionOptionHeaderValueStatics<D>::Parse(param::hstring const& input) const
{
    Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue connectionOptionHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueStatics)->Parse(get_abi(input), put_abi(connectionOptionHeaderValue)));
    return connectionOptionHeaderValue;
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpConnectionOptionHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue& connectionOptionHeaderValue) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueStatics)->TryParse(get_abi(input), put_abi(connectionOptionHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> hstring consume_Windows_Web_Http_Headers_IHttpContentCodingHeaderValue<D>::ContentCoding() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentCodingHeaderValue)->get_ContentCoding(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpContentCodingHeaderValueCollection<D>::ParseAdd(param::hstring const& input) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentCodingHeaderValueCollection)->ParseAdd(get_abi(input)));
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpContentCodingHeaderValueCollection<D>::TryParseAdd(param::hstring const& input) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentCodingHeaderValueCollection)->TryParseAdd(get_abi(input), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpContentCodingHeaderValue consume_Windows_Web_Http_Headers_IHttpContentCodingHeaderValueFactory<D>::Create(param::hstring const& contentCoding) const
{
    Windows::Web::Http::Headers::HttpContentCodingHeaderValue contentCodingHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentCodingHeaderValueFactory)->Create(get_abi(contentCoding), put_abi(contentCodingHeaderValue)));
    return contentCodingHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpContentCodingHeaderValue consume_Windows_Web_Http_Headers_IHttpContentCodingHeaderValueStatics<D>::Parse(param::hstring const& input) const
{
    Windows::Web::Http::Headers::HttpContentCodingHeaderValue contentCodingHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentCodingHeaderValueStatics)->Parse(get_abi(input), put_abi(contentCodingHeaderValue)));
    return contentCodingHeaderValue;
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpContentCodingHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpContentCodingHeaderValue& contentCodingHeaderValue) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentCodingHeaderValueStatics)->TryParse(get_abi(input), put_abi(contentCodingHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> hstring consume_Windows_Web_Http_Headers_IHttpContentCodingWithQualityHeaderValue<D>::ContentCoding() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValue)->get_ContentCoding(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Web_Http_Headers_IHttpContentCodingWithQualityHeaderValue<D>::Quality() const
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValue)->get_Quality(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpContentCodingWithQualityHeaderValueCollection<D>::ParseAdd(param::hstring const& input) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueCollection)->ParseAdd(get_abi(input)));
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpContentCodingWithQualityHeaderValueCollection<D>::TryParseAdd(param::hstring const& input) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueCollection)->TryParseAdd(get_abi(input), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue consume_Windows_Web_Http_Headers_IHttpContentCodingWithQualityHeaderValueFactory<D>::CreateFromValue(param::hstring const& contentCoding) const
{
    Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue contentCodingWithQualityHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueFactory)->CreateFromValue(get_abi(contentCoding), put_abi(contentCodingWithQualityHeaderValue)));
    return contentCodingWithQualityHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue consume_Windows_Web_Http_Headers_IHttpContentCodingWithQualityHeaderValueFactory<D>::CreateFromValueWithQuality(param::hstring const& contentCoding, double quality) const
{
    Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue contentCodingWithQualityHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueFactory)->CreateFromValueWithQuality(get_abi(contentCoding), quality, put_abi(contentCodingWithQualityHeaderValue)));
    return contentCodingWithQualityHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue consume_Windows_Web_Http_Headers_IHttpContentCodingWithQualityHeaderValueStatics<D>::Parse(param::hstring const& input) const
{
    Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue contentCodingWithQualityHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueStatics)->Parse(get_abi(input), put_abi(contentCodingWithQualityHeaderValue)));
    return contentCodingWithQualityHeaderValue;
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpContentCodingWithQualityHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue& contentCodingWithQualityHeaderValue) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueStatics)->TryParse(get_abi(input), put_abi(contentCodingWithQualityHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> hstring consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValue<D>::DispositionType() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue)->get_DispositionType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValue<D>::DispositionType(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue)->put_DispositionType(get_abi(value)));
}

template <typename D> hstring consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValue<D>::FileName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue)->get_FileName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValue<D>::FileName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue)->put_FileName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValue<D>::FileNameStar() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue)->get_FileNameStar(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValue<D>::FileNameStar(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue)->put_FileNameStar(get_abi(value)));
}

template <typename D> hstring consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValue<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue)->get_Name(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValue<D>::Name(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue)->put_Name(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue> consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValue<D>::Parameters() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue)->get_Parameters(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint64_t> consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValue<D>::Size() const
{
    Windows::Foundation::IReference<uint64_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue)->get_Size(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValue<D>::Size(optional<uint64_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue)->put_Size(get_abi(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpContentDispositionHeaderValue consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValueFactory<D>::Create(param::hstring const& dispositionType) const
{
    Windows::Web::Http::Headers::HttpContentDispositionHeaderValue contentDispositionHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueFactory)->Create(get_abi(dispositionType), put_abi(contentDispositionHeaderValue)));
    return contentDispositionHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpContentDispositionHeaderValue consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValueStatics<D>::Parse(param::hstring const& input) const
{
    Windows::Web::Http::Headers::HttpContentDispositionHeaderValue contentDispositionHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueStatics)->Parse(get_abi(input), put_abi(contentDispositionHeaderValue)));
    return contentDispositionHeaderValue;
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpContentDispositionHeaderValue& contentDispositionHeaderValue) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueStatics)->TryParse(get_abi(input), put_abi(contentDispositionHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpContentDispositionHeaderValue consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::ContentDisposition() const
{
    Windows::Web::Http::Headers::HttpContentDispositionHeaderValue value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->get_ContentDisposition(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::ContentDisposition(Windows::Web::Http::Headers::HttpContentDispositionHeaderValue const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->put_ContentDisposition(get_abi(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpContentCodingHeaderValueCollection consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::ContentEncoding() const
{
    Windows::Web::Http::Headers::HttpContentCodingHeaderValueCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->get_ContentEncoding(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpLanguageHeaderValueCollection consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::ContentLanguage() const
{
    Windows::Web::Http::Headers::HttpLanguageHeaderValueCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->get_ContentLanguage(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint64_t> consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::ContentLength() const
{
    Windows::Foundation::IReference<uint64_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->get_ContentLength(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::ContentLength(optional<uint64_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->put_ContentLength(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::ContentLocation() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->get_ContentLocation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::ContentLocation(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->put_ContentLocation(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::ContentMD5() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->get_ContentMD5(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::ContentMD5(Windows::Storage::Streams::IBuffer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->put_ContentMD5(get_abi(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpContentRangeHeaderValue consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::ContentRange() const
{
    Windows::Web::Http::Headers::HttpContentRangeHeaderValue value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->get_ContentRange(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::ContentRange(Windows::Web::Http::Headers::HttpContentRangeHeaderValue const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->put_ContentRange(get_abi(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpMediaTypeHeaderValue consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::ContentType() const
{
    Windows::Web::Http::Headers::HttpMediaTypeHeaderValue value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->get_ContentType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::ContentType(Windows::Web::Http::Headers::HttpMediaTypeHeaderValue const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->put_ContentType(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::Expires() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->get_Expires(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::Expires(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->put_Expires(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::LastModified() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->get_LastModified(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::LastModified(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->put_LastModified(get_abi(value)));
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::Append(param::hstring const& name, param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->Append(get_abi(name), get_abi(value)));
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpContentHeaderCollection<D>::TryAppendWithoutValidation(param::hstring const& name, param::hstring const& value) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentHeaderCollection)->TryAppendWithoutValidation(get_abi(name), get_abi(value), &succeeded));
    return succeeded;
}

template <typename D> Windows::Foundation::IReference<uint64_t> consume_Windows_Web_Http_Headers_IHttpContentRangeHeaderValue<D>::FirstBytePosition() const
{
    Windows::Foundation::IReference<uint64_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentRangeHeaderValue)->get_FirstBytePosition(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint64_t> consume_Windows_Web_Http_Headers_IHttpContentRangeHeaderValue<D>::LastBytePosition() const
{
    Windows::Foundation::IReference<uint64_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentRangeHeaderValue)->get_LastBytePosition(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint64_t> consume_Windows_Web_Http_Headers_IHttpContentRangeHeaderValue<D>::Length() const
{
    Windows::Foundation::IReference<uint64_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentRangeHeaderValue)->get_Length(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Web_Http_Headers_IHttpContentRangeHeaderValue<D>::Unit() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentRangeHeaderValue)->get_Unit(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpContentRangeHeaderValue<D>::Unit(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentRangeHeaderValue)->put_Unit(get_abi(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpContentRangeHeaderValue consume_Windows_Web_Http_Headers_IHttpContentRangeHeaderValueFactory<D>::CreateFromLength(uint64_t length) const
{
    Windows::Web::Http::Headers::HttpContentRangeHeaderValue contentRangeHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentRangeHeaderValueFactory)->CreateFromLength(length, put_abi(contentRangeHeaderValue)));
    return contentRangeHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpContentRangeHeaderValue consume_Windows_Web_Http_Headers_IHttpContentRangeHeaderValueFactory<D>::CreateFromRange(uint64_t from, uint64_t to) const
{
    Windows::Web::Http::Headers::HttpContentRangeHeaderValue contentRangeHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentRangeHeaderValueFactory)->CreateFromRange(from, to, put_abi(contentRangeHeaderValue)));
    return contentRangeHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpContentRangeHeaderValue consume_Windows_Web_Http_Headers_IHttpContentRangeHeaderValueFactory<D>::CreateFromRangeWithLength(uint64_t from, uint64_t to, uint64_t length) const
{
    Windows::Web::Http::Headers::HttpContentRangeHeaderValue contentRangeHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentRangeHeaderValueFactory)->CreateFromRangeWithLength(from, to, length, put_abi(contentRangeHeaderValue)));
    return contentRangeHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpContentRangeHeaderValue consume_Windows_Web_Http_Headers_IHttpContentRangeHeaderValueStatics<D>::Parse(param::hstring const& input) const
{
    Windows::Web::Http::Headers::HttpContentRangeHeaderValue contentRangeHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentRangeHeaderValueStatics)->Parse(get_abi(input), put_abi(contentRangeHeaderValue)));
    return contentRangeHeaderValue;
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpContentRangeHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpContentRangeHeaderValue& contentRangeHeaderValue) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpContentRangeHeaderValueStatics)->TryParse(get_abi(input), put_abi(contentRangeHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> hstring consume_Windows_Web_Http_Headers_IHttpCookiePairHeaderValue<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpCookiePairHeaderValue)->get_Name(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Web_Http_Headers_IHttpCookiePairHeaderValue<D>::Value() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpCookiePairHeaderValue)->get_Value(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpCookiePairHeaderValue<D>::Value(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpCookiePairHeaderValue)->put_Value(get_abi(value)));
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpCookiePairHeaderValueCollection<D>::ParseAdd(param::hstring const& input) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpCookiePairHeaderValueCollection)->ParseAdd(get_abi(input)));
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpCookiePairHeaderValueCollection<D>::TryParseAdd(param::hstring const& input) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpCookiePairHeaderValueCollection)->TryParseAdd(get_abi(input), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpCookiePairHeaderValue consume_Windows_Web_Http_Headers_IHttpCookiePairHeaderValueFactory<D>::CreateFromName(param::hstring const& name) const
{
    Windows::Web::Http::Headers::HttpCookiePairHeaderValue cookiePairHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpCookiePairHeaderValueFactory)->CreateFromName(get_abi(name), put_abi(cookiePairHeaderValue)));
    return cookiePairHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpCookiePairHeaderValue consume_Windows_Web_Http_Headers_IHttpCookiePairHeaderValueFactory<D>::CreateFromNameWithValue(param::hstring const& name, param::hstring const& value) const
{
    Windows::Web::Http::Headers::HttpCookiePairHeaderValue cookiePairHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpCookiePairHeaderValueFactory)->CreateFromNameWithValue(get_abi(name), get_abi(value), put_abi(cookiePairHeaderValue)));
    return cookiePairHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpCookiePairHeaderValue consume_Windows_Web_Http_Headers_IHttpCookiePairHeaderValueStatics<D>::Parse(param::hstring const& input) const
{
    Windows::Web::Http::Headers::HttpCookiePairHeaderValue cookiePairHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpCookiePairHeaderValueStatics)->Parse(get_abi(input), put_abi(cookiePairHeaderValue)));
    return cookiePairHeaderValue;
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpCookiePairHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpCookiePairHeaderValue& cookiePairHeaderValue) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpCookiePairHeaderValueStatics)->TryParse(get_abi(input), put_abi(cookiePairHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue> consume_Windows_Web_Http_Headers_IHttpCredentialsHeaderValue<D>::Parameters() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpCredentialsHeaderValue)->get_Parameters(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Web_Http_Headers_IHttpCredentialsHeaderValue<D>::Scheme() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpCredentialsHeaderValue)->get_Scheme(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Web_Http_Headers_IHttpCredentialsHeaderValue<D>::Token() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpCredentialsHeaderValue)->get_Token(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpCredentialsHeaderValue consume_Windows_Web_Http_Headers_IHttpCredentialsHeaderValueFactory<D>::CreateFromScheme(param::hstring const& scheme) const
{
    Windows::Web::Http::Headers::HttpCredentialsHeaderValue credentialsHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpCredentialsHeaderValueFactory)->CreateFromScheme(get_abi(scheme), put_abi(credentialsHeaderValue)));
    return credentialsHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpCredentialsHeaderValue consume_Windows_Web_Http_Headers_IHttpCredentialsHeaderValueFactory<D>::CreateFromSchemeWithToken(param::hstring const& scheme, param::hstring const& token) const
{
    Windows::Web::Http::Headers::HttpCredentialsHeaderValue credentialsHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpCredentialsHeaderValueFactory)->CreateFromSchemeWithToken(get_abi(scheme), get_abi(token), put_abi(credentialsHeaderValue)));
    return credentialsHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpCredentialsHeaderValue consume_Windows_Web_Http_Headers_IHttpCredentialsHeaderValueStatics<D>::Parse(param::hstring const& input) const
{
    Windows::Web::Http::Headers::HttpCredentialsHeaderValue credentialsHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpCredentialsHeaderValueStatics)->Parse(get_abi(input), put_abi(credentialsHeaderValue)));
    return credentialsHeaderValue;
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpCredentialsHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpCredentialsHeaderValue& credentialsHeaderValue) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpCredentialsHeaderValueStatics)->TryParse(get_abi(input), put_abi(credentialsHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_Web_Http_Headers_IHttpDateOrDeltaHeaderValue<D>::Date() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValue)->get_Date(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Web_Http_Headers_IHttpDateOrDeltaHeaderValue<D>::Delta() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValue)->get_Delta(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue consume_Windows_Web_Http_Headers_IHttpDateOrDeltaHeaderValueStatics<D>::Parse(param::hstring const& input) const
{
    Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue dateOrDeltaHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValueStatics)->Parse(get_abi(input), put_abi(dateOrDeltaHeaderValue)));
    return dateOrDeltaHeaderValue;
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpDateOrDeltaHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue& dateOrDeltaHeaderValue) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValueStatics)->TryParse(get_abi(input), put_abi(dateOrDeltaHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> hstring consume_Windows_Web_Http_Headers_IHttpExpectationHeaderValue<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpExpectationHeaderValue)->get_Name(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Web_Http_Headers_IHttpExpectationHeaderValue<D>::Value() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpExpectationHeaderValue)->get_Value(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpExpectationHeaderValue<D>::Value(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpExpectationHeaderValue)->put_Value(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue> consume_Windows_Web_Http_Headers_IHttpExpectationHeaderValue<D>::Parameters() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpExpectationHeaderValue)->get_Parameters(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpExpectationHeaderValueCollection<D>::ParseAdd(param::hstring const& input) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpExpectationHeaderValueCollection)->ParseAdd(get_abi(input)));
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpExpectationHeaderValueCollection<D>::TryParseAdd(param::hstring const& input) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpExpectationHeaderValueCollection)->TryParseAdd(get_abi(input), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpExpectationHeaderValue consume_Windows_Web_Http_Headers_IHttpExpectationHeaderValueFactory<D>::CreateFromName(param::hstring const& name) const
{
    Windows::Web::Http::Headers::HttpExpectationHeaderValue expectationHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpExpectationHeaderValueFactory)->CreateFromName(get_abi(name), put_abi(expectationHeaderValue)));
    return expectationHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpExpectationHeaderValue consume_Windows_Web_Http_Headers_IHttpExpectationHeaderValueFactory<D>::CreateFromNameWithValue(param::hstring const& name, param::hstring const& value) const
{
    Windows::Web::Http::Headers::HttpExpectationHeaderValue expectationHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpExpectationHeaderValueFactory)->CreateFromNameWithValue(get_abi(name), get_abi(value), put_abi(expectationHeaderValue)));
    return expectationHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpExpectationHeaderValue consume_Windows_Web_Http_Headers_IHttpExpectationHeaderValueStatics<D>::Parse(param::hstring const& input) const
{
    Windows::Web::Http::Headers::HttpExpectationHeaderValue expectationHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpExpectationHeaderValueStatics)->Parse(get_abi(input), put_abi(expectationHeaderValue)));
    return expectationHeaderValue;
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpExpectationHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpExpectationHeaderValue& expectationHeaderValue) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpExpectationHeaderValueStatics)->TryParse(get_abi(input), put_abi(expectationHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpLanguageHeaderValueCollection<D>::ParseAdd(param::hstring const& input) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpLanguageHeaderValueCollection)->ParseAdd(get_abi(input)));
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpLanguageHeaderValueCollection<D>::TryParseAdd(param::hstring const& input) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpLanguageHeaderValueCollection)->TryParseAdd(get_abi(input), &succeeded));
    return succeeded;
}

template <typename D> hstring consume_Windows_Web_Http_Headers_IHttpLanguageRangeWithQualityHeaderValue<D>::LanguageRange() const
{
    hstring languageRange{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValue)->get_LanguageRange(put_abi(languageRange)));
    return languageRange;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Web_Http_Headers_IHttpLanguageRangeWithQualityHeaderValue<D>::Quality() const
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValue)->get_Quality(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpLanguageRangeWithQualityHeaderValueCollection<D>::ParseAdd(param::hstring const& input) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueCollection)->ParseAdd(get_abi(input)));
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpLanguageRangeWithQualityHeaderValueCollection<D>::TryParseAdd(param::hstring const& input) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueCollection)->TryParseAdd(get_abi(input), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue consume_Windows_Web_Http_Headers_IHttpLanguageRangeWithQualityHeaderValueFactory<D>::CreateFromLanguageRange(param::hstring const& languageRange) const
{
    Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue languageRangeWithQualityHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueFactory)->CreateFromLanguageRange(get_abi(languageRange), put_abi(languageRangeWithQualityHeaderValue)));
    return languageRangeWithQualityHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue consume_Windows_Web_Http_Headers_IHttpLanguageRangeWithQualityHeaderValueFactory<D>::CreateFromLanguageRangeWithQuality(param::hstring const& languageRange, double quality) const
{
    Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue languageRangeWithQualityHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueFactory)->CreateFromLanguageRangeWithQuality(get_abi(languageRange), quality, put_abi(languageRangeWithQualityHeaderValue)));
    return languageRangeWithQualityHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue consume_Windows_Web_Http_Headers_IHttpLanguageRangeWithQualityHeaderValueStatics<D>::Parse(param::hstring const& input) const
{
    Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue languageRangeWithQualityHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueStatics)->Parse(get_abi(input), put_abi(languageRangeWithQualityHeaderValue)));
    return languageRangeWithQualityHeaderValue;
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpLanguageRangeWithQualityHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue& languageRangeWithQualityHeaderValue) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueStatics)->TryParse(get_abi(input), put_abi(languageRangeWithQualityHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> hstring consume_Windows_Web_Http_Headers_IHttpMediaTypeHeaderValue<D>::CharSet() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue)->get_CharSet(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpMediaTypeHeaderValue<D>::CharSet(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue)->put_CharSet(get_abi(value)));
}

template <typename D> hstring consume_Windows_Web_Http_Headers_IHttpMediaTypeHeaderValue<D>::MediaType() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue)->get_MediaType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpMediaTypeHeaderValue<D>::MediaType(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue)->put_MediaType(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue> consume_Windows_Web_Http_Headers_IHttpMediaTypeHeaderValue<D>::Parameters() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue)->get_Parameters(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpMediaTypeHeaderValue consume_Windows_Web_Http_Headers_IHttpMediaTypeHeaderValueFactory<D>::Create(param::hstring const& mediaType) const
{
    Windows::Web::Http::Headers::HttpMediaTypeHeaderValue mediaTypeHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueFactory)->Create(get_abi(mediaType), put_abi(mediaTypeHeaderValue)));
    return mediaTypeHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpMediaTypeHeaderValue consume_Windows_Web_Http_Headers_IHttpMediaTypeHeaderValueStatics<D>::Parse(param::hstring const& input) const
{
    Windows::Web::Http::Headers::HttpMediaTypeHeaderValue mediaTypeHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueStatics)->Parse(get_abi(input), put_abi(mediaTypeHeaderValue)));
    return mediaTypeHeaderValue;
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpMediaTypeHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpMediaTypeHeaderValue& mediaTypeHeaderValue) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueStatics)->TryParse(get_abi(input), put_abi(mediaTypeHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> hstring consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValue<D>::CharSet() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue)->get_CharSet(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValue<D>::CharSet(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue)->put_CharSet(get_abi(value)));
}

template <typename D> hstring consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValue<D>::MediaType() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue)->get_MediaType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValue<D>::MediaType(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue)->put_MediaType(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue> consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValue<D>::Parameters() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue)->get_Parameters(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValue<D>::Quality() const
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue)->get_Quality(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValue<D>::Quality(optional<double> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue)->put_Quality(get_abi(value)));
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValueCollection<D>::ParseAdd(param::hstring const& input) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueCollection)->ParseAdd(get_abi(input)));
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValueCollection<D>::TryParseAdd(param::hstring const& input) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueCollection)->TryParseAdd(get_abi(input), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValueFactory<D>::CreateFromMediaType(param::hstring const& mediaType) const
{
    Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue mediaTypeWithQualityHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueFactory)->CreateFromMediaType(get_abi(mediaType), put_abi(mediaTypeWithQualityHeaderValue)));
    return mediaTypeWithQualityHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValueFactory<D>::CreateFromMediaTypeWithQuality(param::hstring const& mediaType, double quality) const
{
    Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue mediaTypeWithQualityHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueFactory)->CreateFromMediaTypeWithQuality(get_abi(mediaType), quality, put_abi(mediaTypeWithQualityHeaderValue)));
    return mediaTypeWithQualityHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValueStatics<D>::Parse(param::hstring const& input) const
{
    Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue mediaTypeWithQualityHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueStatics)->Parse(get_abi(input), put_abi(mediaTypeWithQualityHeaderValue)));
    return mediaTypeWithQualityHeaderValue;
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue& mediaTypeWithQualityHeaderValue) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueStatics)->TryParse(get_abi(input), put_abi(mediaTypeWithQualityHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpMethodHeaderValueCollection<D>::ParseAdd(param::hstring const& input) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpMethodHeaderValueCollection)->ParseAdd(get_abi(input)));
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpMethodHeaderValueCollection<D>::TryParseAdd(param::hstring const& input) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpMethodHeaderValueCollection)->TryParseAdd(get_abi(input), &succeeded));
    return succeeded;
}

template <typename D> hstring consume_Windows_Web_Http_Headers_IHttpNameValueHeaderValue<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpNameValueHeaderValue)->get_Name(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Web_Http_Headers_IHttpNameValueHeaderValue<D>::Value() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpNameValueHeaderValue)->get_Value(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpNameValueHeaderValue<D>::Value(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpNameValueHeaderValue)->put_Value(get_abi(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpNameValueHeaderValue consume_Windows_Web_Http_Headers_IHttpNameValueHeaderValueFactory<D>::CreateFromName(param::hstring const& name) const
{
    Windows::Web::Http::Headers::HttpNameValueHeaderValue nameValueHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpNameValueHeaderValueFactory)->CreateFromName(get_abi(name), put_abi(nameValueHeaderValue)));
    return nameValueHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpNameValueHeaderValue consume_Windows_Web_Http_Headers_IHttpNameValueHeaderValueFactory<D>::CreateFromNameWithValue(param::hstring const& name, param::hstring const& value) const
{
    Windows::Web::Http::Headers::HttpNameValueHeaderValue nameValueHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpNameValueHeaderValueFactory)->CreateFromNameWithValue(get_abi(name), get_abi(value), put_abi(nameValueHeaderValue)));
    return nameValueHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpNameValueHeaderValue consume_Windows_Web_Http_Headers_IHttpNameValueHeaderValueStatics<D>::Parse(param::hstring const& input) const
{
    Windows::Web::Http::Headers::HttpNameValueHeaderValue nameValueHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpNameValueHeaderValueStatics)->Parse(get_abi(input), put_abi(nameValueHeaderValue)));
    return nameValueHeaderValue;
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpNameValueHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpNameValueHeaderValue& nameValueHeaderValue) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpNameValueHeaderValueStatics)->TryParse(get_abi(input), put_abi(nameValueHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> hstring consume_Windows_Web_Http_Headers_IHttpProductHeaderValue<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpProductHeaderValue)->get_Name(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Web_Http_Headers_IHttpProductHeaderValue<D>::Version() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpProductHeaderValue)->get_Version(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpProductHeaderValue consume_Windows_Web_Http_Headers_IHttpProductHeaderValueFactory<D>::CreateFromName(param::hstring const& productName) const
{
    Windows::Web::Http::Headers::HttpProductHeaderValue productHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpProductHeaderValueFactory)->CreateFromName(get_abi(productName), put_abi(productHeaderValue)));
    return productHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpProductHeaderValue consume_Windows_Web_Http_Headers_IHttpProductHeaderValueFactory<D>::CreateFromNameWithVersion(param::hstring const& productName, param::hstring const& productVersion) const
{
    Windows::Web::Http::Headers::HttpProductHeaderValue productHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpProductHeaderValueFactory)->CreateFromNameWithVersion(get_abi(productName), get_abi(productVersion), put_abi(productHeaderValue)));
    return productHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpProductHeaderValue consume_Windows_Web_Http_Headers_IHttpProductHeaderValueStatics<D>::Parse(param::hstring const& input) const
{
    Windows::Web::Http::Headers::HttpProductHeaderValue productHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpProductHeaderValueStatics)->Parse(get_abi(input), put_abi(productHeaderValue)));
    return productHeaderValue;
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpProductHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpProductHeaderValue& productHeaderValue) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpProductHeaderValueStatics)->TryParse(get_abi(input), put_abi(productHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpProductHeaderValue consume_Windows_Web_Http_Headers_IHttpProductInfoHeaderValue<D>::Product() const
{
    Windows::Web::Http::Headers::HttpProductHeaderValue value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpProductInfoHeaderValue)->get_Product(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Web_Http_Headers_IHttpProductInfoHeaderValue<D>::Comment() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpProductInfoHeaderValue)->get_Comment(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpProductInfoHeaderValueCollection<D>::ParseAdd(param::hstring const& input) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpProductInfoHeaderValueCollection)->ParseAdd(get_abi(input)));
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpProductInfoHeaderValueCollection<D>::TryParseAdd(param::hstring const& input) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpProductInfoHeaderValueCollection)->TryParseAdd(get_abi(input), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpProductInfoHeaderValue consume_Windows_Web_Http_Headers_IHttpProductInfoHeaderValueFactory<D>::CreateFromComment(param::hstring const& productComment) const
{
    Windows::Web::Http::Headers::HttpProductInfoHeaderValue productInfoHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpProductInfoHeaderValueFactory)->CreateFromComment(get_abi(productComment), put_abi(productInfoHeaderValue)));
    return productInfoHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpProductInfoHeaderValue consume_Windows_Web_Http_Headers_IHttpProductInfoHeaderValueFactory<D>::CreateFromNameWithVersion(param::hstring const& productName, param::hstring const& productVersion) const
{
    Windows::Web::Http::Headers::HttpProductInfoHeaderValue productInfoHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpProductInfoHeaderValueFactory)->CreateFromNameWithVersion(get_abi(productName), get_abi(productVersion), put_abi(productInfoHeaderValue)));
    return productInfoHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpProductInfoHeaderValue consume_Windows_Web_Http_Headers_IHttpProductInfoHeaderValueStatics<D>::Parse(param::hstring const& input) const
{
    Windows::Web::Http::Headers::HttpProductInfoHeaderValue productInfoHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpProductInfoHeaderValueStatics)->Parse(get_abi(input), put_abi(productInfoHeaderValue)));
    return productInfoHeaderValue;
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpProductInfoHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpProductInfoHeaderValue& productInfoHeaderValue) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpProductInfoHeaderValueStatics)->TryParse(get_abi(input), put_abi(productInfoHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValueCollection consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::Accept() const
{
    Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValueCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_Accept(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValueCollection consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::AcceptEncoding() const
{
    Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValueCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_AcceptEncoding(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValueCollection consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::AcceptLanguage() const
{
    Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValueCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_AcceptLanguage(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpCredentialsHeaderValue consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::Authorization() const
{
    Windows::Web::Http::Headers::HttpCredentialsHeaderValue value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_Authorization(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::Authorization(Windows::Web::Http::Headers::HttpCredentialsHeaderValue const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->put_Authorization(get_abi(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpCacheDirectiveHeaderValueCollection consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::CacheControl() const
{
    Windows::Web::Http::Headers::HttpCacheDirectiveHeaderValueCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_CacheControl(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpConnectionOptionHeaderValueCollection consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::Connection() const
{
    Windows::Web::Http::Headers::HttpConnectionOptionHeaderValueCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_Connection(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpCookiePairHeaderValueCollection consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::Cookie() const
{
    Windows::Web::Http::Headers::HttpCookiePairHeaderValueCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_Cookie(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::Date() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_Date(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::Date(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->put_Date(get_abi(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpExpectationHeaderValueCollection consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::Expect() const
{
    Windows::Web::Http::Headers::HttpExpectationHeaderValueCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_Expect(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::From() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_From(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::From(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->put_From(get_abi(value)));
}

template <typename D> Windows::Networking::HostName consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::Host() const
{
    Windows::Networking::HostName value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_Host(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::Host(Windows::Networking::HostName const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->put_Host(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::IfModifiedSince() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_IfModifiedSince(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::IfModifiedSince(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->put_IfModifiedSince(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::IfUnmodifiedSince() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_IfUnmodifiedSince(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::IfUnmodifiedSince(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->put_IfUnmodifiedSince(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::MaxForwards() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_MaxForwards(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::MaxForwards(optional<uint32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->put_MaxForwards(get_abi(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpCredentialsHeaderValue consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::ProxyAuthorization() const
{
    Windows::Web::Http::Headers::HttpCredentialsHeaderValue value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_ProxyAuthorization(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::ProxyAuthorization(Windows::Web::Http::Headers::HttpCredentialsHeaderValue const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->put_ProxyAuthorization(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::Referer() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_Referer(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::Referer(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->put_Referer(get_abi(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpTransferCodingHeaderValueCollection consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::TransferEncoding() const
{
    Windows::Web::Http::Headers::HttpTransferCodingHeaderValueCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_TransferEncoding(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpProductInfoHeaderValueCollection consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::UserAgent() const
{
    Windows::Web::Http::Headers::HttpProductInfoHeaderValueCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->get_UserAgent(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::Append(param::hstring const& name, param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->Append(get_abi(name), get_abi(value)));
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpRequestHeaderCollection<D>::TryAppendWithoutValidation(param::hstring const& name, param::hstring const& value) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpRequestHeaderCollection)->TryAppendWithoutValidation(get_abi(name), get_abi(value), &succeeded));
    return succeeded;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::Age() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->get_Age(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::Age(optional<Windows::Foundation::TimeSpan> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->put_Age(get_abi(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpMethodHeaderValueCollection consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::Allow() const
{
    Windows::Web::Http::Headers::HttpMethodHeaderValueCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->get_Allow(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpCacheDirectiveHeaderValueCollection consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::CacheControl() const
{
    Windows::Web::Http::Headers::HttpCacheDirectiveHeaderValueCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->get_CacheControl(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpConnectionOptionHeaderValueCollection consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::Connection() const
{
    Windows::Web::Http::Headers::HttpConnectionOptionHeaderValueCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->get_Connection(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::Date() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->get_Date(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::Date(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->put_Date(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::Location() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->get_Location(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::Location(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->put_Location(get_abi(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpChallengeHeaderValueCollection consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::ProxyAuthenticate() const
{
    Windows::Web::Http::Headers::HttpChallengeHeaderValueCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->get_ProxyAuthenticate(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::RetryAfter() const
{
    Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->get_RetryAfter(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::RetryAfter(Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->put_RetryAfter(get_abi(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpTransferCodingHeaderValueCollection consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::TransferEncoding() const
{
    Windows::Web::Http::Headers::HttpTransferCodingHeaderValueCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->get_TransferEncoding(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpChallengeHeaderValueCollection consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::WwwAuthenticate() const
{
    Windows::Web::Http::Headers::HttpChallengeHeaderValueCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->get_WwwAuthenticate(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::Append(param::hstring const& name, param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->Append(get_abi(name), get_abi(value)));
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpResponseHeaderCollection<D>::TryAppendWithoutValidation(param::hstring const& name, param::hstring const& value) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpResponseHeaderCollection)->TryAppendWithoutValidation(get_abi(name), get_abi(value), &succeeded));
    return succeeded;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue> consume_Windows_Web_Http_Headers_IHttpTransferCodingHeaderValue<D>::Parameters() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpTransferCodingHeaderValue)->get_Parameters(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Web_Http_Headers_IHttpTransferCodingHeaderValue<D>::Value() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpTransferCodingHeaderValue)->get_Value(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Headers_IHttpTransferCodingHeaderValueCollection<D>::ParseAdd(param::hstring const& input) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueCollection)->ParseAdd(get_abi(input)));
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpTransferCodingHeaderValueCollection<D>::TryParseAdd(param::hstring const& input) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueCollection)->TryParseAdd(get_abi(input), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpTransferCodingHeaderValue consume_Windows_Web_Http_Headers_IHttpTransferCodingHeaderValueFactory<D>::Create(param::hstring const& input) const
{
    Windows::Web::Http::Headers::HttpTransferCodingHeaderValue transferCodingHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueFactory)->Create(get_abi(input), put_abi(transferCodingHeaderValue)));
    return transferCodingHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpTransferCodingHeaderValue consume_Windows_Web_Http_Headers_IHttpTransferCodingHeaderValueStatics<D>::Parse(param::hstring const& input) const
{
    Windows::Web::Http::Headers::HttpTransferCodingHeaderValue transferCodingHeaderValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueStatics)->Parse(get_abi(input), put_abi(transferCodingHeaderValue)));
    return transferCodingHeaderValue;
}

template <typename D> bool consume_Windows_Web_Http_Headers_IHttpTransferCodingHeaderValueStatics<D>::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpTransferCodingHeaderValue& transferCodingHeaderValue) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueStatics)->TryParse(get_abi(input), put_abi(transferCodingHeaderValue), &succeeded));
    return succeeded;
}

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection>
{
    HRESULT __stdcall get_MaxAge(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxAge());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxAge(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxAge(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxStale(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxStale());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxStale(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxStale(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinFresh(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MinFresh());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MinFresh(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MinFresh(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SharedMaxAge(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SharedMaxAge());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SharedMaxAge(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SharedMaxAge(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ParseAdd(HSTRING input) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParseAdd(*reinterpret_cast<hstring const*>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParseAdd(HSTRING input, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParseAdd(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpChallengeHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpChallengeHeaderValue>
{
    HRESULT __stdcall get_Parameters(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Parameters());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Scheme(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Scheme());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Token(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Token());
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
struct produce<D, Windows::Web::Http::Headers::IHttpChallengeHeaderValueCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpChallengeHeaderValueCollection>
{
    HRESULT __stdcall ParseAdd(HSTRING input) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParseAdd(*reinterpret_cast<hstring const*>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParseAdd(HSTRING input, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParseAdd(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpChallengeHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpChallengeHeaderValueFactory>
{
    HRESULT __stdcall CreateFromScheme(HSTRING scheme, ::IUnknown** challengeHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *challengeHeaderValue = detach_abi(this->shim().CreateFromScheme(*reinterpret_cast<hstring const*>(&scheme)));
            return S_OK;
        }
        catch (...)
        {
            *challengeHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromSchemeWithToken(HSTRING scheme, HSTRING token, ::IUnknown** challengeHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *challengeHeaderValue = detach_abi(this->shim().CreateFromSchemeWithToken(*reinterpret_cast<hstring const*>(&scheme), *reinterpret_cast<hstring const*>(&token)));
            return S_OK;
        }
        catch (...)
        {
            *challengeHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpChallengeHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpChallengeHeaderValueStatics>
{
    HRESULT __stdcall Parse(HSTRING input, ::IUnknown** challengeHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *challengeHeaderValue = detach_abi(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *challengeHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParse(HSTRING input, ::IUnknown** challengeHeaderValue, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpChallengeHeaderValue*>(challengeHeaderValue)));
            return S_OK;
        }
        catch (...)
        {
            *challengeHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValue>
{
    HRESULT __stdcall get_Token(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Token());
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
struct produce<D, Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueCollection>
{
    HRESULT __stdcall ParseAdd(HSTRING input) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParseAdd(*reinterpret_cast<hstring const*>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParseAdd(HSTRING input, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParseAdd(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueFactory>
{
    HRESULT __stdcall Create(HSTRING token, ::IUnknown** connectionOptionHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *connectionOptionHeaderValue = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&token)));
            return S_OK;
        }
        catch (...)
        {
            *connectionOptionHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueStatics>
{
    HRESULT __stdcall Parse(HSTRING input, ::IUnknown** connectionOptionHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *connectionOptionHeaderValue = detach_abi(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *connectionOptionHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParse(HSTRING input, ::IUnknown** connectionOptionHeaderValue, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue*>(connectionOptionHeaderValue)));
            return S_OK;
        }
        catch (...)
        {
            *connectionOptionHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpContentCodingHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpContentCodingHeaderValue>
{
    HRESULT __stdcall get_ContentCoding(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentCoding());
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
struct produce<D, Windows::Web::Http::Headers::IHttpContentCodingHeaderValueCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpContentCodingHeaderValueCollection>
{
    HRESULT __stdcall ParseAdd(HSTRING input) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParseAdd(*reinterpret_cast<hstring const*>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParseAdd(HSTRING input, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParseAdd(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpContentCodingHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpContentCodingHeaderValueFactory>
{
    HRESULT __stdcall Create(HSTRING contentCoding, ::IUnknown** contentCodingHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *contentCodingHeaderValue = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&contentCoding)));
            return S_OK;
        }
        catch (...)
        {
            *contentCodingHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpContentCodingHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpContentCodingHeaderValueStatics>
{
    HRESULT __stdcall Parse(HSTRING input, ::IUnknown** contentCodingHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *contentCodingHeaderValue = detach_abi(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *contentCodingHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParse(HSTRING input, ::IUnknown** contentCodingHeaderValue, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpContentCodingHeaderValue*>(contentCodingHeaderValue)));
            return S_OK;
        }
        catch (...)
        {
            *contentCodingHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValue>
{
    HRESULT __stdcall get_ContentCoding(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentCoding());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Quality(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Quality());
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
struct produce<D, Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueCollection>
{
    HRESULT __stdcall ParseAdd(HSTRING input) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParseAdd(*reinterpret_cast<hstring const*>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParseAdd(HSTRING input, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParseAdd(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueFactory>
{
    HRESULT __stdcall CreateFromValue(HSTRING contentCoding, ::IUnknown** contentCodingWithQualityHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *contentCodingWithQualityHeaderValue = detach_abi(this->shim().CreateFromValue(*reinterpret_cast<hstring const*>(&contentCoding)));
            return S_OK;
        }
        catch (...)
        {
            *contentCodingWithQualityHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromValueWithQuality(HSTRING contentCoding, double quality, ::IUnknown** contentCodingWithQualityHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *contentCodingWithQualityHeaderValue = detach_abi(this->shim().CreateFromValueWithQuality(*reinterpret_cast<hstring const*>(&contentCoding), quality));
            return S_OK;
        }
        catch (...)
        {
            *contentCodingWithQualityHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueStatics>
{
    HRESULT __stdcall Parse(HSTRING input, ::IUnknown** contentCodingWithQualityHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *contentCodingWithQualityHeaderValue = detach_abi(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *contentCodingWithQualityHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParse(HSTRING input, ::IUnknown** contentCodingWithQualityHeaderValue, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue*>(contentCodingWithQualityHeaderValue)));
            return S_OK;
        }
        catch (...)
        {
            *contentCodingWithQualityHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue>
{
    HRESULT __stdcall get_DispositionType(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DispositionType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DispositionType(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DispositionType(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FileName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FileName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FileName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FileName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FileNameStar(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FileNameStar());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FileNameStar(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FileNameStar(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall put_Name(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Parameters(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Parameters());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Size(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Size(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Size(*reinterpret_cast<Windows::Foundation::IReference<uint64_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueFactory>
{
    HRESULT __stdcall Create(HSTRING dispositionType, ::IUnknown** contentDispositionHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *contentDispositionHeaderValue = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&dispositionType)));
            return S_OK;
        }
        catch (...)
        {
            *contentDispositionHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueStatics>
{
    HRESULT __stdcall Parse(HSTRING input, ::IUnknown** contentDispositionHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *contentDispositionHeaderValue = detach_abi(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *contentDispositionHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParse(HSTRING input, ::IUnknown** contentDispositionHeaderValue, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpContentDispositionHeaderValue*>(contentDispositionHeaderValue)));
            return S_OK;
        }
        catch (...)
        {
            *contentDispositionHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpContentHeaderCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpContentHeaderCollection>
{
    HRESULT __stdcall get_ContentDisposition(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentDisposition());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentDisposition(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentDisposition(*reinterpret_cast<Windows::Web::Http::Headers::HttpContentDispositionHeaderValue const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentEncoding(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentEncoding());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentLanguage(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentLanguage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentLength(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentLength());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentLength(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentLength(*reinterpret_cast<Windows::Foundation::IReference<uint64_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentLocation(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentLocation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentLocation(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentLocation(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentMD5(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentMD5());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentMD5(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentMD5(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentRange(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentRange());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentRange(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentRange(*reinterpret_cast<Windows::Web::Http::Headers::HttpContentRangeHeaderValue const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentType(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentType(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentType(*reinterpret_cast<Windows::Web::Http::Headers::HttpMediaTypeHeaderValue const*>(&value));
            return S_OK;
        }
        catch (...)
        {
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

    HRESULT __stdcall get_LastModified(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastModified());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LastModified(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LastModified(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Append(HSTRING name, HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Append(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryAppendWithoutValidation(HSTRING name, HSTRING value, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryAppendWithoutValidation(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpContentRangeHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpContentRangeHeaderValue>
{
    HRESULT __stdcall get_FirstBytePosition(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FirstBytePosition());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastBytePosition(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastBytePosition());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Length(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Length());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Unit(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Unit());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Unit(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Unit(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpContentRangeHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpContentRangeHeaderValueFactory>
{
    HRESULT __stdcall CreateFromLength(uint64_t length, ::IUnknown** contentRangeHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *contentRangeHeaderValue = detach_abi(this->shim().CreateFromLength(length));
            return S_OK;
        }
        catch (...)
        {
            *contentRangeHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromRange(uint64_t from, uint64_t to, ::IUnknown** contentRangeHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *contentRangeHeaderValue = detach_abi(this->shim().CreateFromRange(from, to));
            return S_OK;
        }
        catch (...)
        {
            *contentRangeHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromRangeWithLength(uint64_t from, uint64_t to, uint64_t length, ::IUnknown** contentRangeHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *contentRangeHeaderValue = detach_abi(this->shim().CreateFromRangeWithLength(from, to, length));
            return S_OK;
        }
        catch (...)
        {
            *contentRangeHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpContentRangeHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpContentRangeHeaderValueStatics>
{
    HRESULT __stdcall Parse(HSTRING input, ::IUnknown** contentRangeHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *contentRangeHeaderValue = detach_abi(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *contentRangeHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParse(HSTRING input, ::IUnknown** contentRangeHeaderValue, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpContentRangeHeaderValue*>(contentRangeHeaderValue)));
            return S_OK;
        }
        catch (...)
        {
            *contentRangeHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpCookiePairHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpCookiePairHeaderValue>
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
struct produce<D, Windows::Web::Http::Headers::IHttpCookiePairHeaderValueCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpCookiePairHeaderValueCollection>
{
    HRESULT __stdcall ParseAdd(HSTRING input) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParseAdd(*reinterpret_cast<hstring const*>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParseAdd(HSTRING input, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParseAdd(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpCookiePairHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpCookiePairHeaderValueFactory>
{
    HRESULT __stdcall CreateFromName(HSTRING name, ::IUnknown** cookiePairHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookiePairHeaderValue = detach_abi(this->shim().CreateFromName(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *cookiePairHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromNameWithValue(HSTRING name, HSTRING value, ::IUnknown** cookiePairHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookiePairHeaderValue = detach_abi(this->shim().CreateFromNameWithValue(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *cookiePairHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpCookiePairHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpCookiePairHeaderValueStatics>
{
    HRESULT __stdcall Parse(HSTRING input, ::IUnknown** cookiePairHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookiePairHeaderValue = detach_abi(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *cookiePairHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParse(HSTRING input, ::IUnknown** cookiePairHeaderValue, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpCookiePairHeaderValue*>(cookiePairHeaderValue)));
            return S_OK;
        }
        catch (...)
        {
            *cookiePairHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpCredentialsHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpCredentialsHeaderValue>
{
    HRESULT __stdcall get_Parameters(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Parameters());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Scheme(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Scheme());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Token(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Token());
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
struct produce<D, Windows::Web::Http::Headers::IHttpCredentialsHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpCredentialsHeaderValueFactory>
{
    HRESULT __stdcall CreateFromScheme(HSTRING scheme, ::IUnknown** credentialsHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *credentialsHeaderValue = detach_abi(this->shim().CreateFromScheme(*reinterpret_cast<hstring const*>(&scheme)));
            return S_OK;
        }
        catch (...)
        {
            *credentialsHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromSchemeWithToken(HSTRING scheme, HSTRING token, ::IUnknown** credentialsHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *credentialsHeaderValue = detach_abi(this->shim().CreateFromSchemeWithToken(*reinterpret_cast<hstring const*>(&scheme), *reinterpret_cast<hstring const*>(&token)));
            return S_OK;
        }
        catch (...)
        {
            *credentialsHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpCredentialsHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpCredentialsHeaderValueStatics>
{
    HRESULT __stdcall Parse(HSTRING input, ::IUnknown** credentialsHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *credentialsHeaderValue = detach_abi(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *credentialsHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParse(HSTRING input, ::IUnknown** credentialsHeaderValue, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpCredentialsHeaderValue*>(credentialsHeaderValue)));
            return S_OK;
        }
        catch (...)
        {
            *credentialsHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValue>
{
    HRESULT __stdcall get_Date(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Date());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Delta(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Delta());
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
struct produce<D, Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValueStatics>
{
    HRESULT __stdcall Parse(HSTRING input, ::IUnknown** dateOrDeltaHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *dateOrDeltaHeaderValue = detach_abi(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *dateOrDeltaHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParse(HSTRING input, ::IUnknown** dateOrDeltaHeaderValue, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue*>(dateOrDeltaHeaderValue)));
            return S_OK;
        }
        catch (...)
        {
            *dateOrDeltaHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpExpectationHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpExpectationHeaderValue>
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

    HRESULT __stdcall get_Parameters(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Parameters());
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
struct produce<D, Windows::Web::Http::Headers::IHttpExpectationHeaderValueCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpExpectationHeaderValueCollection>
{
    HRESULT __stdcall ParseAdd(HSTRING input) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParseAdd(*reinterpret_cast<hstring const*>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParseAdd(HSTRING input, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParseAdd(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpExpectationHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpExpectationHeaderValueFactory>
{
    HRESULT __stdcall CreateFromName(HSTRING name, ::IUnknown** expectationHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *expectationHeaderValue = detach_abi(this->shim().CreateFromName(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *expectationHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromNameWithValue(HSTRING name, HSTRING value, ::IUnknown** expectationHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *expectationHeaderValue = detach_abi(this->shim().CreateFromNameWithValue(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *expectationHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpExpectationHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpExpectationHeaderValueStatics>
{
    HRESULT __stdcall Parse(HSTRING input, ::IUnknown** expectationHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *expectationHeaderValue = detach_abi(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *expectationHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParse(HSTRING input, ::IUnknown** expectationHeaderValue, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpExpectationHeaderValue*>(expectationHeaderValue)));
            return S_OK;
        }
        catch (...)
        {
            *expectationHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpLanguageHeaderValueCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpLanguageHeaderValueCollection>
{
    HRESULT __stdcall ParseAdd(HSTRING input) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParseAdd(*reinterpret_cast<hstring const*>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParseAdd(HSTRING input, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParseAdd(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValue>
{
    HRESULT __stdcall get_LanguageRange(HSTRING* languageRange) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *languageRange = detach_abi(this->shim().LanguageRange());
            return S_OK;
        }
        catch (...)
        {
            *languageRange = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Quality(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Quality());
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
struct produce<D, Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueCollection>
{
    HRESULT __stdcall ParseAdd(HSTRING input) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParseAdd(*reinterpret_cast<hstring const*>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParseAdd(HSTRING input, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParseAdd(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueFactory>
{
    HRESULT __stdcall CreateFromLanguageRange(HSTRING languageRange, ::IUnknown** languageRangeWithQualityHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *languageRangeWithQualityHeaderValue = detach_abi(this->shim().CreateFromLanguageRange(*reinterpret_cast<hstring const*>(&languageRange)));
            return S_OK;
        }
        catch (...)
        {
            *languageRangeWithQualityHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromLanguageRangeWithQuality(HSTRING languageRange, double quality, ::IUnknown** languageRangeWithQualityHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *languageRangeWithQualityHeaderValue = detach_abi(this->shim().CreateFromLanguageRangeWithQuality(*reinterpret_cast<hstring const*>(&languageRange), quality));
            return S_OK;
        }
        catch (...)
        {
            *languageRangeWithQualityHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueStatics>
{
    HRESULT __stdcall Parse(HSTRING input, ::IUnknown** languageRangeWithQualityHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *languageRangeWithQualityHeaderValue = detach_abi(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *languageRangeWithQualityHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParse(HSTRING input, ::IUnknown** languageRangeWithQualityHeaderValue, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue*>(languageRangeWithQualityHeaderValue)));
            return S_OK;
        }
        catch (...)
        {
            *languageRangeWithQualityHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue>
{
    HRESULT __stdcall get_CharSet(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CharSet());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CharSet(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CharSet(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaType(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MediaType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MediaType(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MediaType(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Parameters(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Parameters());
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
struct produce<D, Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueFactory>
{
    HRESULT __stdcall Create(HSTRING mediaType, ::IUnknown** mediaTypeHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *mediaTypeHeaderValue = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&mediaType)));
            return S_OK;
        }
        catch (...)
        {
            *mediaTypeHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueStatics>
{
    HRESULT __stdcall Parse(HSTRING input, ::IUnknown** mediaTypeHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *mediaTypeHeaderValue = detach_abi(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *mediaTypeHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParse(HSTRING input, ::IUnknown** mediaTypeHeaderValue, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpMediaTypeHeaderValue*>(mediaTypeHeaderValue)));
            return S_OK;
        }
        catch (...)
        {
            *mediaTypeHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue>
{
    HRESULT __stdcall get_CharSet(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CharSet());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CharSet(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CharSet(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaType(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MediaType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MediaType(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MediaType(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Parameters(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Parameters());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Quality(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Quality());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Quality(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Quality(*reinterpret_cast<Windows::Foundation::IReference<double> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueCollection>
{
    HRESULT __stdcall ParseAdd(HSTRING input) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParseAdd(*reinterpret_cast<hstring const*>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParseAdd(HSTRING input, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParseAdd(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueFactory>
{
    HRESULT __stdcall CreateFromMediaType(HSTRING mediaType, ::IUnknown** mediaTypeWithQualityHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *mediaTypeWithQualityHeaderValue = detach_abi(this->shim().CreateFromMediaType(*reinterpret_cast<hstring const*>(&mediaType)));
            return S_OK;
        }
        catch (...)
        {
            *mediaTypeWithQualityHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromMediaTypeWithQuality(HSTRING mediaType, double quality, ::IUnknown** mediaTypeWithQualityHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *mediaTypeWithQualityHeaderValue = detach_abi(this->shim().CreateFromMediaTypeWithQuality(*reinterpret_cast<hstring const*>(&mediaType), quality));
            return S_OK;
        }
        catch (...)
        {
            *mediaTypeWithQualityHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueStatics>
{
    HRESULT __stdcall Parse(HSTRING input, ::IUnknown** mediaTypeWithQualityHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *mediaTypeWithQualityHeaderValue = detach_abi(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *mediaTypeWithQualityHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParse(HSTRING input, ::IUnknown** mediaTypeWithQualityHeaderValue, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue*>(mediaTypeWithQualityHeaderValue)));
            return S_OK;
        }
        catch (...)
        {
            *mediaTypeWithQualityHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpMethodHeaderValueCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpMethodHeaderValueCollection>
{
    HRESULT __stdcall ParseAdd(HSTRING input) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParseAdd(*reinterpret_cast<hstring const*>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParseAdd(HSTRING input, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParseAdd(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpNameValueHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpNameValueHeaderValue>
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
struct produce<D, Windows::Web::Http::Headers::IHttpNameValueHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpNameValueHeaderValueFactory>
{
    HRESULT __stdcall CreateFromName(HSTRING name, ::IUnknown** nameValueHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *nameValueHeaderValue = detach_abi(this->shim().CreateFromName(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *nameValueHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromNameWithValue(HSTRING name, HSTRING value, ::IUnknown** nameValueHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *nameValueHeaderValue = detach_abi(this->shim().CreateFromNameWithValue(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *nameValueHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpNameValueHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpNameValueHeaderValueStatics>
{
    HRESULT __stdcall Parse(HSTRING input, ::IUnknown** nameValueHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *nameValueHeaderValue = detach_abi(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *nameValueHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParse(HSTRING input, ::IUnknown** nameValueHeaderValue, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpNameValueHeaderValue*>(nameValueHeaderValue)));
            return S_OK;
        }
        catch (...)
        {
            *nameValueHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpProductHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpProductHeaderValue>
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

    HRESULT __stdcall get_Version(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Version());
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
struct produce<D, Windows::Web::Http::Headers::IHttpProductHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpProductHeaderValueFactory>
{
    HRESULT __stdcall CreateFromName(HSTRING productName, ::IUnknown** productHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *productHeaderValue = detach_abi(this->shim().CreateFromName(*reinterpret_cast<hstring const*>(&productName)));
            return S_OK;
        }
        catch (...)
        {
            *productHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromNameWithVersion(HSTRING productName, HSTRING productVersion, ::IUnknown** productHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *productHeaderValue = detach_abi(this->shim().CreateFromNameWithVersion(*reinterpret_cast<hstring const*>(&productName), *reinterpret_cast<hstring const*>(&productVersion)));
            return S_OK;
        }
        catch (...)
        {
            *productHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpProductHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpProductHeaderValueStatics>
{
    HRESULT __stdcall Parse(HSTRING input, ::IUnknown** productHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *productHeaderValue = detach_abi(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *productHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParse(HSTRING input, ::IUnknown** productHeaderValue, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpProductHeaderValue*>(productHeaderValue)));
            return S_OK;
        }
        catch (...)
        {
            *productHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpProductInfoHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpProductInfoHeaderValue>
{
    HRESULT __stdcall get_Product(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Product());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Comment(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Comment());
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
struct produce<D, Windows::Web::Http::Headers::IHttpProductInfoHeaderValueCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpProductInfoHeaderValueCollection>
{
    HRESULT __stdcall ParseAdd(HSTRING input) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParseAdd(*reinterpret_cast<hstring const*>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParseAdd(HSTRING input, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParseAdd(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpProductInfoHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpProductInfoHeaderValueFactory>
{
    HRESULT __stdcall CreateFromComment(HSTRING productComment, ::IUnknown** productInfoHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *productInfoHeaderValue = detach_abi(this->shim().CreateFromComment(*reinterpret_cast<hstring const*>(&productComment)));
            return S_OK;
        }
        catch (...)
        {
            *productInfoHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromNameWithVersion(HSTRING productName, HSTRING productVersion, ::IUnknown** productInfoHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *productInfoHeaderValue = detach_abi(this->shim().CreateFromNameWithVersion(*reinterpret_cast<hstring const*>(&productName), *reinterpret_cast<hstring const*>(&productVersion)));
            return S_OK;
        }
        catch (...)
        {
            *productInfoHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpProductInfoHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpProductInfoHeaderValueStatics>
{
    HRESULT __stdcall Parse(HSTRING input, ::IUnknown** productInfoHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *productInfoHeaderValue = detach_abi(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *productInfoHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParse(HSTRING input, ::IUnknown** productInfoHeaderValue, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpProductInfoHeaderValue*>(productInfoHeaderValue)));
            return S_OK;
        }
        catch (...)
        {
            *productInfoHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpRequestHeaderCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpRequestHeaderCollection>
{
    HRESULT __stdcall get_Accept(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Accept());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AcceptEncoding(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AcceptEncoding());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AcceptLanguage(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AcceptLanguage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Authorization(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Authorization());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Authorization(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Authorization(*reinterpret_cast<Windows::Web::Http::Headers::HttpCredentialsHeaderValue const*>(&value));
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

    HRESULT __stdcall get_Connection(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Connection());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Cookie(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Cookie());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Date(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Date());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Date(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Date(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Expect(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Expect());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_From(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().From());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_From(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().From(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Host(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Host());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Host(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Host(*reinterpret_cast<Windows::Networking::HostName const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IfModifiedSince(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IfModifiedSince());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IfModifiedSince(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IfModifiedSince(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IfUnmodifiedSince(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IfUnmodifiedSince());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IfUnmodifiedSince(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IfUnmodifiedSince(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxForwards(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxForwards());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxForwards(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxForwards(*reinterpret_cast<Windows::Foundation::IReference<uint32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProxyAuthorization(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProxyAuthorization());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ProxyAuthorization(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProxyAuthorization(*reinterpret_cast<Windows::Web::Http::Headers::HttpCredentialsHeaderValue const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Referer(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Referer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Referer(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Referer(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransferEncoding(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransferEncoding());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserAgent(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UserAgent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Append(HSTRING name, HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Append(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryAppendWithoutValidation(HSTRING name, HSTRING value, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryAppendWithoutValidation(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpResponseHeaderCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpResponseHeaderCollection>
{
    HRESULT __stdcall get_Age(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Age());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Age(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Age(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Allow(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Allow());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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

    HRESULT __stdcall get_Connection(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Connection());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Date(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Date());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Date(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Date(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Location(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Location());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Location(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Location(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProxyAuthenticate(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProxyAuthenticate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RetryAfter(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RetryAfter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RetryAfter(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RetryAfter(*reinterpret_cast<Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransferEncoding(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransferEncoding());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WwwAuthenticate(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WwwAuthenticate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Append(HSTRING name, HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Append(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryAppendWithoutValidation(HSTRING name, HSTRING value, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryAppendWithoutValidation(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpTransferCodingHeaderValue> : produce_base<D, Windows::Web::Http::Headers::IHttpTransferCodingHeaderValue>
{
    HRESULT __stdcall get_Parameters(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Parameters());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueCollection>
{
    HRESULT __stdcall ParseAdd(HSTRING input) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParseAdd(*reinterpret_cast<hstring const*>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParseAdd(HSTRING input, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParseAdd(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueFactory>
{
    HRESULT __stdcall Create(HSTRING input, ::IUnknown** transferCodingHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *transferCodingHeaderValue = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *transferCodingHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueStatics> : produce_base<D, Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueStatics>
{
    HRESULT __stdcall Parse(HSTRING input, ::IUnknown** transferCodingHeaderValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *transferCodingHeaderValue = detach_abi(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *transferCodingHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParse(HSTRING input, ::IUnknown** transferCodingHeaderValue, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Web::Http::Headers::HttpTransferCodingHeaderValue*>(transferCodingHeaderValue)));
            return S_OK;
        }
        catch (...)
        {
            *transferCodingHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Web::Http::Headers {

inline HttpChallengeHeaderValue::HttpChallengeHeaderValue(param::hstring const& scheme) :
    HttpChallengeHeaderValue(get_activation_factory<HttpChallengeHeaderValue, Windows::Web::Http::Headers::IHttpChallengeHeaderValueFactory>().CreateFromScheme(scheme))
{}

inline HttpChallengeHeaderValue::HttpChallengeHeaderValue(param::hstring const& scheme, param::hstring const& token) :
    HttpChallengeHeaderValue(get_activation_factory<HttpChallengeHeaderValue, Windows::Web::Http::Headers::IHttpChallengeHeaderValueFactory>().CreateFromSchemeWithToken(scheme, token))
{}

inline Windows::Web::Http::Headers::HttpChallengeHeaderValue HttpChallengeHeaderValue::Parse(param::hstring const& input)
{
    return get_activation_factory<HttpChallengeHeaderValue, Windows::Web::Http::Headers::IHttpChallengeHeaderValueStatics>().Parse(input);
}

inline bool HttpChallengeHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpChallengeHeaderValue& challengeHeaderValue)
{
    return get_activation_factory<HttpChallengeHeaderValue, Windows::Web::Http::Headers::IHttpChallengeHeaderValueStatics>().TryParse(input, challengeHeaderValue);
}

inline HttpConnectionOptionHeaderValue::HttpConnectionOptionHeaderValue(param::hstring const& token) :
    HttpConnectionOptionHeaderValue(get_activation_factory<HttpConnectionOptionHeaderValue, Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueFactory>().Create(token))
{}

inline Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue HttpConnectionOptionHeaderValue::Parse(param::hstring const& input)
{
    return get_activation_factory<HttpConnectionOptionHeaderValue, Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueStatics>().Parse(input);
}

inline bool HttpConnectionOptionHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue& connectionOptionHeaderValue)
{
    return get_activation_factory<HttpConnectionOptionHeaderValue, Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueStatics>().TryParse(input, connectionOptionHeaderValue);
}

inline HttpContentCodingHeaderValue::HttpContentCodingHeaderValue(param::hstring const& contentCoding) :
    HttpContentCodingHeaderValue(get_activation_factory<HttpContentCodingHeaderValue, Windows::Web::Http::Headers::IHttpContentCodingHeaderValueFactory>().Create(contentCoding))
{}

inline Windows::Web::Http::Headers::HttpContentCodingHeaderValue HttpContentCodingHeaderValue::Parse(param::hstring const& input)
{
    return get_activation_factory<HttpContentCodingHeaderValue, Windows::Web::Http::Headers::IHttpContentCodingHeaderValueStatics>().Parse(input);
}

inline bool HttpContentCodingHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpContentCodingHeaderValue& contentCodingHeaderValue)
{
    return get_activation_factory<HttpContentCodingHeaderValue, Windows::Web::Http::Headers::IHttpContentCodingHeaderValueStatics>().TryParse(input, contentCodingHeaderValue);
}

inline HttpContentCodingWithQualityHeaderValue::HttpContentCodingWithQualityHeaderValue(param::hstring const& contentCoding) :
    HttpContentCodingWithQualityHeaderValue(get_activation_factory<HttpContentCodingWithQualityHeaderValue, Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueFactory>().CreateFromValue(contentCoding))
{}

inline HttpContentCodingWithQualityHeaderValue::HttpContentCodingWithQualityHeaderValue(param::hstring const& contentCoding, double quality) :
    HttpContentCodingWithQualityHeaderValue(get_activation_factory<HttpContentCodingWithQualityHeaderValue, Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueFactory>().CreateFromValueWithQuality(contentCoding, quality))
{}

inline Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue HttpContentCodingWithQualityHeaderValue::Parse(param::hstring const& input)
{
    return get_activation_factory<HttpContentCodingWithQualityHeaderValue, Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueStatics>().Parse(input);
}

inline bool HttpContentCodingWithQualityHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue& contentCodingWithQualityHeaderValue)
{
    return get_activation_factory<HttpContentCodingWithQualityHeaderValue, Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueStatics>().TryParse(input, contentCodingWithQualityHeaderValue);
}

inline HttpContentDispositionHeaderValue::HttpContentDispositionHeaderValue(param::hstring const& dispositionType) :
    HttpContentDispositionHeaderValue(get_activation_factory<HttpContentDispositionHeaderValue, Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueFactory>().Create(dispositionType))
{}

inline Windows::Web::Http::Headers::HttpContentDispositionHeaderValue HttpContentDispositionHeaderValue::Parse(param::hstring const& input)
{
    return get_activation_factory<HttpContentDispositionHeaderValue, Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueStatics>().Parse(input);
}

inline bool HttpContentDispositionHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpContentDispositionHeaderValue& contentDispositionHeaderValue)
{
    return get_activation_factory<HttpContentDispositionHeaderValue, Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueStatics>().TryParse(input, contentDispositionHeaderValue);
}

inline HttpContentHeaderCollection::HttpContentHeaderCollection() :
    HttpContentHeaderCollection(activate_instance<HttpContentHeaderCollection>())
{}

inline HttpContentRangeHeaderValue::HttpContentRangeHeaderValue(uint64_t length) :
    HttpContentRangeHeaderValue(get_activation_factory<HttpContentRangeHeaderValue, Windows::Web::Http::Headers::IHttpContentRangeHeaderValueFactory>().CreateFromLength(length))
{}

inline HttpContentRangeHeaderValue::HttpContentRangeHeaderValue(uint64_t from, uint64_t to) :
    HttpContentRangeHeaderValue(get_activation_factory<HttpContentRangeHeaderValue, Windows::Web::Http::Headers::IHttpContentRangeHeaderValueFactory>().CreateFromRange(from, to))
{}

inline HttpContentRangeHeaderValue::HttpContentRangeHeaderValue(uint64_t from, uint64_t to, uint64_t length) :
    HttpContentRangeHeaderValue(get_activation_factory<HttpContentRangeHeaderValue, Windows::Web::Http::Headers::IHttpContentRangeHeaderValueFactory>().CreateFromRangeWithLength(from, to, length))
{}

inline Windows::Web::Http::Headers::HttpContentRangeHeaderValue HttpContentRangeHeaderValue::Parse(param::hstring const& input)
{
    return get_activation_factory<HttpContentRangeHeaderValue, Windows::Web::Http::Headers::IHttpContentRangeHeaderValueStatics>().Parse(input);
}

inline bool HttpContentRangeHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpContentRangeHeaderValue& contentRangeHeaderValue)
{
    return get_activation_factory<HttpContentRangeHeaderValue, Windows::Web::Http::Headers::IHttpContentRangeHeaderValueStatics>().TryParse(input, contentRangeHeaderValue);
}

inline HttpCookiePairHeaderValue::HttpCookiePairHeaderValue(param::hstring const& name) :
    HttpCookiePairHeaderValue(get_activation_factory<HttpCookiePairHeaderValue, Windows::Web::Http::Headers::IHttpCookiePairHeaderValueFactory>().CreateFromName(name))
{}

inline HttpCookiePairHeaderValue::HttpCookiePairHeaderValue(param::hstring const& name, param::hstring const& value) :
    HttpCookiePairHeaderValue(get_activation_factory<HttpCookiePairHeaderValue, Windows::Web::Http::Headers::IHttpCookiePairHeaderValueFactory>().CreateFromNameWithValue(name, value))
{}

inline Windows::Web::Http::Headers::HttpCookiePairHeaderValue HttpCookiePairHeaderValue::Parse(param::hstring const& input)
{
    return get_activation_factory<HttpCookiePairHeaderValue, Windows::Web::Http::Headers::IHttpCookiePairHeaderValueStatics>().Parse(input);
}

inline bool HttpCookiePairHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpCookiePairHeaderValue& cookiePairHeaderValue)
{
    return get_activation_factory<HttpCookiePairHeaderValue, Windows::Web::Http::Headers::IHttpCookiePairHeaderValueStatics>().TryParse(input, cookiePairHeaderValue);
}

inline HttpCredentialsHeaderValue::HttpCredentialsHeaderValue(param::hstring const& scheme) :
    HttpCredentialsHeaderValue(get_activation_factory<HttpCredentialsHeaderValue, Windows::Web::Http::Headers::IHttpCredentialsHeaderValueFactory>().CreateFromScheme(scheme))
{}

inline HttpCredentialsHeaderValue::HttpCredentialsHeaderValue(param::hstring const& scheme, param::hstring const& token) :
    HttpCredentialsHeaderValue(get_activation_factory<HttpCredentialsHeaderValue, Windows::Web::Http::Headers::IHttpCredentialsHeaderValueFactory>().CreateFromSchemeWithToken(scheme, token))
{}

inline Windows::Web::Http::Headers::HttpCredentialsHeaderValue HttpCredentialsHeaderValue::Parse(param::hstring const& input)
{
    return get_activation_factory<HttpCredentialsHeaderValue, Windows::Web::Http::Headers::IHttpCredentialsHeaderValueStatics>().Parse(input);
}

inline bool HttpCredentialsHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpCredentialsHeaderValue& credentialsHeaderValue)
{
    return get_activation_factory<HttpCredentialsHeaderValue, Windows::Web::Http::Headers::IHttpCredentialsHeaderValueStatics>().TryParse(input, credentialsHeaderValue);
}

inline Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue HttpDateOrDeltaHeaderValue::Parse(param::hstring const& input)
{
    return get_activation_factory<HttpDateOrDeltaHeaderValue, Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValueStatics>().Parse(input);
}

inline bool HttpDateOrDeltaHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue& dateOrDeltaHeaderValue)
{
    return get_activation_factory<HttpDateOrDeltaHeaderValue, Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValueStatics>().TryParse(input, dateOrDeltaHeaderValue);
}

inline HttpExpectationHeaderValue::HttpExpectationHeaderValue(param::hstring const& name) :
    HttpExpectationHeaderValue(get_activation_factory<HttpExpectationHeaderValue, Windows::Web::Http::Headers::IHttpExpectationHeaderValueFactory>().CreateFromName(name))
{}

inline HttpExpectationHeaderValue::HttpExpectationHeaderValue(param::hstring const& name, param::hstring const& value) :
    HttpExpectationHeaderValue(get_activation_factory<HttpExpectationHeaderValue, Windows::Web::Http::Headers::IHttpExpectationHeaderValueFactory>().CreateFromNameWithValue(name, value))
{}

inline Windows::Web::Http::Headers::HttpExpectationHeaderValue HttpExpectationHeaderValue::Parse(param::hstring const& input)
{
    return get_activation_factory<HttpExpectationHeaderValue, Windows::Web::Http::Headers::IHttpExpectationHeaderValueStatics>().Parse(input);
}

inline bool HttpExpectationHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpExpectationHeaderValue& expectationHeaderValue)
{
    return get_activation_factory<HttpExpectationHeaderValue, Windows::Web::Http::Headers::IHttpExpectationHeaderValueStatics>().TryParse(input, expectationHeaderValue);
}

inline HttpLanguageRangeWithQualityHeaderValue::HttpLanguageRangeWithQualityHeaderValue(param::hstring const& languageRange) :
    HttpLanguageRangeWithQualityHeaderValue(get_activation_factory<HttpLanguageRangeWithQualityHeaderValue, Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueFactory>().CreateFromLanguageRange(languageRange))
{}

inline HttpLanguageRangeWithQualityHeaderValue::HttpLanguageRangeWithQualityHeaderValue(param::hstring const& languageRange, double quality) :
    HttpLanguageRangeWithQualityHeaderValue(get_activation_factory<HttpLanguageRangeWithQualityHeaderValue, Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueFactory>().CreateFromLanguageRangeWithQuality(languageRange, quality))
{}

inline Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue HttpLanguageRangeWithQualityHeaderValue::Parse(param::hstring const& input)
{
    return get_activation_factory<HttpLanguageRangeWithQualityHeaderValue, Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueStatics>().Parse(input);
}

inline bool HttpLanguageRangeWithQualityHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue& languageRangeWithQualityHeaderValue)
{
    return get_activation_factory<HttpLanguageRangeWithQualityHeaderValue, Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueStatics>().TryParse(input, languageRangeWithQualityHeaderValue);
}

inline HttpMediaTypeHeaderValue::HttpMediaTypeHeaderValue(param::hstring const& mediaType) :
    HttpMediaTypeHeaderValue(get_activation_factory<HttpMediaTypeHeaderValue, Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueFactory>().Create(mediaType))
{}

inline Windows::Web::Http::Headers::HttpMediaTypeHeaderValue HttpMediaTypeHeaderValue::Parse(param::hstring const& input)
{
    return get_activation_factory<HttpMediaTypeHeaderValue, Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueStatics>().Parse(input);
}

inline bool HttpMediaTypeHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpMediaTypeHeaderValue& mediaTypeHeaderValue)
{
    return get_activation_factory<HttpMediaTypeHeaderValue, Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueStatics>().TryParse(input, mediaTypeHeaderValue);
}

inline HttpMediaTypeWithQualityHeaderValue::HttpMediaTypeWithQualityHeaderValue(param::hstring const& mediaType) :
    HttpMediaTypeWithQualityHeaderValue(get_activation_factory<HttpMediaTypeWithQualityHeaderValue, Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueFactory>().CreateFromMediaType(mediaType))
{}

inline HttpMediaTypeWithQualityHeaderValue::HttpMediaTypeWithQualityHeaderValue(param::hstring const& mediaType, double quality) :
    HttpMediaTypeWithQualityHeaderValue(get_activation_factory<HttpMediaTypeWithQualityHeaderValue, Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueFactory>().CreateFromMediaTypeWithQuality(mediaType, quality))
{}

inline Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue HttpMediaTypeWithQualityHeaderValue::Parse(param::hstring const& input)
{
    return get_activation_factory<HttpMediaTypeWithQualityHeaderValue, Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueStatics>().Parse(input);
}

inline bool HttpMediaTypeWithQualityHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue& mediaTypeWithQualityHeaderValue)
{
    return get_activation_factory<HttpMediaTypeWithQualityHeaderValue, Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueStatics>().TryParse(input, mediaTypeWithQualityHeaderValue);
}

inline HttpNameValueHeaderValue::HttpNameValueHeaderValue(param::hstring const& name) :
    HttpNameValueHeaderValue(get_activation_factory<HttpNameValueHeaderValue, Windows::Web::Http::Headers::IHttpNameValueHeaderValueFactory>().CreateFromName(name))
{}

inline HttpNameValueHeaderValue::HttpNameValueHeaderValue(param::hstring const& name, param::hstring const& value) :
    HttpNameValueHeaderValue(get_activation_factory<HttpNameValueHeaderValue, Windows::Web::Http::Headers::IHttpNameValueHeaderValueFactory>().CreateFromNameWithValue(name, value))
{}

inline Windows::Web::Http::Headers::HttpNameValueHeaderValue HttpNameValueHeaderValue::Parse(param::hstring const& input)
{
    return get_activation_factory<HttpNameValueHeaderValue, Windows::Web::Http::Headers::IHttpNameValueHeaderValueStatics>().Parse(input);
}

inline bool HttpNameValueHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpNameValueHeaderValue& nameValueHeaderValue)
{
    return get_activation_factory<HttpNameValueHeaderValue, Windows::Web::Http::Headers::IHttpNameValueHeaderValueStatics>().TryParse(input, nameValueHeaderValue);
}

inline HttpProductHeaderValue::HttpProductHeaderValue(param::hstring const& productName) :
    HttpProductHeaderValue(get_activation_factory<HttpProductHeaderValue, Windows::Web::Http::Headers::IHttpProductHeaderValueFactory>().CreateFromName(productName))
{}

inline HttpProductHeaderValue::HttpProductHeaderValue(param::hstring const& productName, param::hstring const& productVersion) :
    HttpProductHeaderValue(get_activation_factory<HttpProductHeaderValue, Windows::Web::Http::Headers::IHttpProductHeaderValueFactory>().CreateFromNameWithVersion(productName, productVersion))
{}

inline Windows::Web::Http::Headers::HttpProductHeaderValue HttpProductHeaderValue::Parse(param::hstring const& input)
{
    return get_activation_factory<HttpProductHeaderValue, Windows::Web::Http::Headers::IHttpProductHeaderValueStatics>().Parse(input);
}

inline bool HttpProductHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpProductHeaderValue& productHeaderValue)
{
    return get_activation_factory<HttpProductHeaderValue, Windows::Web::Http::Headers::IHttpProductHeaderValueStatics>().TryParse(input, productHeaderValue);
}

inline HttpProductInfoHeaderValue::HttpProductInfoHeaderValue(param::hstring const& productComment) :
    HttpProductInfoHeaderValue(get_activation_factory<HttpProductInfoHeaderValue, Windows::Web::Http::Headers::IHttpProductInfoHeaderValueFactory>().CreateFromComment(productComment))
{}

inline HttpProductInfoHeaderValue::HttpProductInfoHeaderValue(param::hstring const& productName, param::hstring const& productVersion) :
    HttpProductInfoHeaderValue(get_activation_factory<HttpProductInfoHeaderValue, Windows::Web::Http::Headers::IHttpProductInfoHeaderValueFactory>().CreateFromNameWithVersion(productName, productVersion))
{}

inline Windows::Web::Http::Headers::HttpProductInfoHeaderValue HttpProductInfoHeaderValue::Parse(param::hstring const& input)
{
    return get_activation_factory<HttpProductInfoHeaderValue, Windows::Web::Http::Headers::IHttpProductInfoHeaderValueStatics>().Parse(input);
}

inline bool HttpProductInfoHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpProductInfoHeaderValue& productInfoHeaderValue)
{
    return get_activation_factory<HttpProductInfoHeaderValue, Windows::Web::Http::Headers::IHttpProductInfoHeaderValueStatics>().TryParse(input, productInfoHeaderValue);
}

inline HttpTransferCodingHeaderValue::HttpTransferCodingHeaderValue(param::hstring const& input) :
    HttpTransferCodingHeaderValue(get_activation_factory<HttpTransferCodingHeaderValue, Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueFactory>().Create(input))
{}

inline Windows::Web::Http::Headers::HttpTransferCodingHeaderValue HttpTransferCodingHeaderValue::Parse(param::hstring const& input)
{
    return get_activation_factory<HttpTransferCodingHeaderValue, Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueStatics>().Parse(input);
}

inline bool HttpTransferCodingHeaderValue::TryParse(param::hstring const& input, Windows::Web::Http::Headers::HttpTransferCodingHeaderValue& transferCodingHeaderValue)
{
    return get_activation_factory<HttpTransferCodingHeaderValue, Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueStatics>().TryParse(input, transferCodingHeaderValue);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpChallengeHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpChallengeHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpChallengeHeaderValueCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpChallengeHeaderValueCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpChallengeHeaderValueFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpChallengeHeaderValueFactory> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpChallengeHeaderValueStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpChallengeHeaderValueStatics> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueFactory> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueStatics> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentCodingHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpContentCodingHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentCodingHeaderValueCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpContentCodingHeaderValueCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentCodingHeaderValueFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpContentCodingHeaderValueFactory> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentCodingHeaderValueStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpContentCodingHeaderValueStatics> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueFactory> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueStatics> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueFactory> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpContentDispositionHeaderValueStatics> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentHeaderCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpContentHeaderCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentRangeHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpContentRangeHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentRangeHeaderValueFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpContentRangeHeaderValueFactory> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpContentRangeHeaderValueStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpContentRangeHeaderValueStatics> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpCookiePairHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpCookiePairHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpCookiePairHeaderValueCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpCookiePairHeaderValueCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpCookiePairHeaderValueFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpCookiePairHeaderValueFactory> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpCookiePairHeaderValueStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpCookiePairHeaderValueStatics> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpCredentialsHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpCredentialsHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpCredentialsHeaderValueFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpCredentialsHeaderValueFactory> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpCredentialsHeaderValueStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpCredentialsHeaderValueStatics> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValueStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValueStatics> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpExpectationHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpExpectationHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpExpectationHeaderValueCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpExpectationHeaderValueCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpExpectationHeaderValueFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpExpectationHeaderValueFactory> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpExpectationHeaderValueStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpExpectationHeaderValueStatics> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpLanguageHeaderValueCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpLanguageHeaderValueCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueFactory> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueStatics> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueFactory> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpMediaTypeHeaderValueStatics> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueFactory> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueStatics> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpMethodHeaderValueCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpMethodHeaderValueCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpNameValueHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpNameValueHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpNameValueHeaderValueFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpNameValueHeaderValueFactory> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpNameValueHeaderValueStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpNameValueHeaderValueStatics> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpProductHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpProductHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpProductHeaderValueFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpProductHeaderValueFactory> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpProductHeaderValueStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpProductHeaderValueStatics> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpProductInfoHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpProductInfoHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpProductInfoHeaderValueCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpProductInfoHeaderValueCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpProductInfoHeaderValueFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpProductInfoHeaderValueFactory> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpProductInfoHeaderValueStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpProductInfoHeaderValueStatics> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpRequestHeaderCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpRequestHeaderCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpResponseHeaderCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpResponseHeaderCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpTransferCodingHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpTransferCodingHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueFactory> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueStatics> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpCacheDirectiveHeaderValueCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpCacheDirectiveHeaderValueCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpChallengeHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpChallengeHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpChallengeHeaderValueCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpChallengeHeaderValueCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpConnectionOptionHeaderValueCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpConnectionOptionHeaderValueCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpContentCodingHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpContentCodingHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpContentCodingHeaderValueCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpContentCodingHeaderValueCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValueCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValueCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpContentDispositionHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpContentDispositionHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpContentHeaderCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpContentHeaderCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpContentRangeHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpContentRangeHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpCookiePairHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpCookiePairHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpCookiePairHeaderValueCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpCookiePairHeaderValueCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpCredentialsHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpCredentialsHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpExpectationHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpExpectationHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpExpectationHeaderValueCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpExpectationHeaderValueCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpLanguageHeaderValueCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpLanguageHeaderValueCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValueCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValueCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpMediaTypeHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpMediaTypeHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValueCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValueCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpMethodHeaderValueCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpMethodHeaderValueCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpNameValueHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpNameValueHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpProductHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpProductHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpProductInfoHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpProductInfoHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpProductInfoHeaderValueCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpProductInfoHeaderValueCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpRequestHeaderCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpRequestHeaderCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpResponseHeaderCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpResponseHeaderCollection> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpTransferCodingHeaderValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpTransferCodingHeaderValue> {};

template<> struct hash<winrt::Windows::Web::Http::Headers::HttpTransferCodingHeaderValueCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Headers::HttpTransferCodingHeaderValueCollection> {};

}

WINRT_WARNING_POP
