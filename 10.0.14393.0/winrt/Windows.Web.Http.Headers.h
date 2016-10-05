// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Networking.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Web.Http.Headers.3.h"
#include "Windows.Web.Http.h"
#include "Windows.Foundation.h"
#include "Windows.Foundation.Collections.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection>
{
    HRESULT __stdcall get_MaxAge(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxAge());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxAge(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            this->shim().MaxAge(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxStale(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxStale());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxStale(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            this->shim().MaxStale(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinFresh(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MinFresh());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MinFresh(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            this->shim().MinFresh(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SharedMaxAge(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SharedMaxAge());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SharedMaxAge(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            this->shim().SharedMaxAge(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ParseAdd(abi_arg_in<hstring> input) noexcept override
    {
        try
        {
            this->shim().ParseAdd(*reinterpret_cast<const hstring *>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParseAdd(abi_arg_in<hstring> input, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParseAdd(*reinterpret_cast<const hstring *>(&input)));
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
    HRESULT __stdcall get_Parameters(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Parameters());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Scheme(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Scheme());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Token(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Token());
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
    HRESULT __stdcall abi_ParseAdd(abi_arg_in<hstring> input) noexcept override
    {
        try
        {
            this->shim().ParseAdd(*reinterpret_cast<const hstring *>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParseAdd(abi_arg_in<hstring> input, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParseAdd(*reinterpret_cast<const hstring *>(&input)));
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
    HRESULT __stdcall abi_CreateFromScheme(abi_arg_in<hstring> scheme, abi_arg_out<Windows::Web::Http::Headers::IHttpChallengeHeaderValue> challengeHeaderValue) noexcept override
    {
        try
        {
            *challengeHeaderValue = detach(this->shim().CreateFromScheme(*reinterpret_cast<const hstring *>(&scheme)));
            return S_OK;
        }
        catch (...)
        {
            *challengeHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromSchemeWithToken(abi_arg_in<hstring> scheme, abi_arg_in<hstring> token, abi_arg_out<Windows::Web::Http::Headers::IHttpChallengeHeaderValue> challengeHeaderValue) noexcept override
    {
        try
        {
            *challengeHeaderValue = detach(this->shim().CreateFromSchemeWithToken(*reinterpret_cast<const hstring *>(&scheme), *reinterpret_cast<const hstring *>(&token)));
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
    HRESULT __stdcall abi_Parse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpChallengeHeaderValue> challengeHeaderValue) noexcept override
    {
        try
        {
            *challengeHeaderValue = detach(this->shim().Parse(*reinterpret_cast<const hstring *>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *challengeHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpChallengeHeaderValue> challengeHeaderValue, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParse(*reinterpret_cast<const hstring *>(&input), *challengeHeaderValue));
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
    HRESULT __stdcall get_Token(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Token());
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
    HRESULT __stdcall abi_ParseAdd(abi_arg_in<hstring> input) noexcept override
    {
        try
        {
            this->shim().ParseAdd(*reinterpret_cast<const hstring *>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParseAdd(abi_arg_in<hstring> input, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParseAdd(*reinterpret_cast<const hstring *>(&input)));
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
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> token, abi_arg_out<Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValue> connectionOptionHeaderValue) noexcept override
    {
        try
        {
            *connectionOptionHeaderValue = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&token)));
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
    HRESULT __stdcall abi_Parse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValue> connectionOptionHeaderValue) noexcept override
    {
        try
        {
            *connectionOptionHeaderValue = detach(this->shim().Parse(*reinterpret_cast<const hstring *>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *connectionOptionHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValue> connectionOptionHeaderValue, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParse(*reinterpret_cast<const hstring *>(&input), *connectionOptionHeaderValue));
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
    HRESULT __stdcall get_ContentCoding(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentCoding());
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
    HRESULT __stdcall abi_ParseAdd(abi_arg_in<hstring> input) noexcept override
    {
        try
        {
            this->shim().ParseAdd(*reinterpret_cast<const hstring *>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParseAdd(abi_arg_in<hstring> input, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParseAdd(*reinterpret_cast<const hstring *>(&input)));
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
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> contentCoding, abi_arg_out<Windows::Web::Http::Headers::IHttpContentCodingHeaderValue> contentCodingHeaderValue) noexcept override
    {
        try
        {
            *contentCodingHeaderValue = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&contentCoding)));
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
    HRESULT __stdcall abi_Parse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpContentCodingHeaderValue> contentCodingHeaderValue) noexcept override
    {
        try
        {
            *contentCodingHeaderValue = detach(this->shim().Parse(*reinterpret_cast<const hstring *>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *contentCodingHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpContentCodingHeaderValue> contentCodingHeaderValue, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParse(*reinterpret_cast<const hstring *>(&input), *contentCodingHeaderValue));
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
    HRESULT __stdcall get_ContentCoding(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentCoding());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Quality(abi_arg_out<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Quality());
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
    HRESULT __stdcall abi_ParseAdd(abi_arg_in<hstring> input) noexcept override
    {
        try
        {
            this->shim().ParseAdd(*reinterpret_cast<const hstring *>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParseAdd(abi_arg_in<hstring> input, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParseAdd(*reinterpret_cast<const hstring *>(&input)));
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
    HRESULT __stdcall abi_CreateFromValue(abi_arg_in<hstring> contentCoding, abi_arg_out<Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValue> contentCodingWithQualityHeaderValue) noexcept override
    {
        try
        {
            *contentCodingWithQualityHeaderValue = detach(this->shim().CreateFromValue(*reinterpret_cast<const hstring *>(&contentCoding)));
            return S_OK;
        }
        catch (...)
        {
            *contentCodingWithQualityHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromValueWithQuality(abi_arg_in<hstring> contentCoding, double quality, abi_arg_out<Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValue> contentCodingWithQualityHeaderValue) noexcept override
    {
        try
        {
            *contentCodingWithQualityHeaderValue = detach(this->shim().CreateFromValueWithQuality(*reinterpret_cast<const hstring *>(&contentCoding), quality));
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
    HRESULT __stdcall abi_Parse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValue> contentCodingWithQualityHeaderValue) noexcept override
    {
        try
        {
            *contentCodingWithQualityHeaderValue = detach(this->shim().Parse(*reinterpret_cast<const hstring *>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *contentCodingWithQualityHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValue> contentCodingWithQualityHeaderValue, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParse(*reinterpret_cast<const hstring *>(&input), *contentCodingWithQualityHeaderValue));
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
    HRESULT __stdcall get_DispositionType(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DispositionType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DispositionType(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().DispositionType(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FileName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FileName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FileName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().FileName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FileNameStar(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FileNameStar());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FileNameStar(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().FileNameStar(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall put_Name(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Name(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Parameters(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Parameters());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Size(abi_arg_out<Windows::Foundation::IReference<uint64_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Size(abi_arg_in<Windows::Foundation::IReference<uint64_t>> value) noexcept override
    {
        try
        {
            this->shim().Size(*reinterpret_cast<const Windows::Foundation::IReference<uint64_t> *>(&value));
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
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> dispositionType, abi_arg_out<Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue> contentDispositionHeaderValue) noexcept override
    {
        try
        {
            *contentDispositionHeaderValue = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&dispositionType)));
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
    HRESULT __stdcall abi_Parse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue> contentDispositionHeaderValue) noexcept override
    {
        try
        {
            *contentDispositionHeaderValue = detach(this->shim().Parse(*reinterpret_cast<const hstring *>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *contentDispositionHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue> contentDispositionHeaderValue, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParse(*reinterpret_cast<const hstring *>(&input), *contentDispositionHeaderValue));
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
    HRESULT __stdcall get_ContentDisposition(abi_arg_out<Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentDisposition());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentDisposition(abi_arg_in<Windows::Web::Http::Headers::IHttpContentDispositionHeaderValue> value) noexcept override
    {
        try
        {
            this->shim().ContentDisposition(*reinterpret_cast<const Windows::Web::Http::Headers::HttpContentDispositionHeaderValue *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentEncoding(abi_arg_out<Windows::Web::Http::Headers::IHttpContentCodingHeaderValueCollection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentEncoding());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentLanguage(abi_arg_out<Windows::Web::Http::Headers::IHttpLanguageHeaderValueCollection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentLanguage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentLength(abi_arg_out<Windows::Foundation::IReference<uint64_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentLength());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentLength(abi_arg_in<Windows::Foundation::IReference<uint64_t>> value) noexcept override
    {
        try
        {
            this->shim().ContentLength(*reinterpret_cast<const Windows::Foundation::IReference<uint64_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentLocation(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentLocation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentLocation(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().ContentLocation(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentMD5(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentMD5());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentMD5(abi_arg_in<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            this->shim().ContentMD5(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentRange(abi_arg_out<Windows::Web::Http::Headers::IHttpContentRangeHeaderValue> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentRange());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentRange(abi_arg_in<Windows::Web::Http::Headers::IHttpContentRangeHeaderValue> value) noexcept override
    {
        try
        {
            this->shim().ContentRange(*reinterpret_cast<const Windows::Web::Http::Headers::HttpContentRangeHeaderValue *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentType(abi_arg_out<Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentType(abi_arg_in<Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue> value) noexcept override
    {
        try
        {
            this->shim().ContentType(*reinterpret_cast<const Windows::Web::Http::Headers::HttpMediaTypeHeaderValue *>(&value));
            return S_OK;
        }
        catch (...)
        {
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

    HRESULT __stdcall get_LastModified(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LastModified());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LastModified(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            this->shim().LastModified(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::DateTime> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Append(abi_arg_in<hstring> name, abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Append(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryAppendWithoutValidation(abi_arg_in<hstring> name, abi_arg_in<hstring> value, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryAppendWithoutValidation(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const hstring *>(&value)));
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
    HRESULT __stdcall get_FirstBytePosition(abi_arg_out<Windows::Foundation::IReference<uint64_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FirstBytePosition());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastBytePosition(abi_arg_out<Windows::Foundation::IReference<uint64_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LastBytePosition());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Length(abi_arg_out<Windows::Foundation::IReference<uint64_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Length());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Unit(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Unit());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Unit(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Unit(*reinterpret_cast<const hstring *>(&value));
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
    HRESULT __stdcall abi_CreateFromLength(uint64_t length, abi_arg_out<Windows::Web::Http::Headers::IHttpContentRangeHeaderValue> contentRangeHeaderValue) noexcept override
    {
        try
        {
            *contentRangeHeaderValue = detach(this->shim().CreateFromLength(length));
            return S_OK;
        }
        catch (...)
        {
            *contentRangeHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromRange(uint64_t from, uint64_t to, abi_arg_out<Windows::Web::Http::Headers::IHttpContentRangeHeaderValue> contentRangeHeaderValue) noexcept override
    {
        try
        {
            *contentRangeHeaderValue = detach(this->shim().CreateFromRange(from, to));
            return S_OK;
        }
        catch (...)
        {
            *contentRangeHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromRangeWithLength(uint64_t from, uint64_t to, uint64_t length, abi_arg_out<Windows::Web::Http::Headers::IHttpContentRangeHeaderValue> contentRangeHeaderValue) noexcept override
    {
        try
        {
            *contentRangeHeaderValue = detach(this->shim().CreateFromRangeWithLength(from, to, length));
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
    HRESULT __stdcall abi_Parse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpContentRangeHeaderValue> contentRangeHeaderValue) noexcept override
    {
        try
        {
            *contentRangeHeaderValue = detach(this->shim().Parse(*reinterpret_cast<const hstring *>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *contentRangeHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpContentRangeHeaderValue> contentRangeHeaderValue, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParse(*reinterpret_cast<const hstring *>(&input), *contentRangeHeaderValue));
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
struct produce<D, Windows::Web::Http::Headers::IHttpCookiePairHeaderValueCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpCookiePairHeaderValueCollection>
{
    HRESULT __stdcall abi_ParseAdd(abi_arg_in<hstring> input) noexcept override
    {
        try
        {
            this->shim().ParseAdd(*reinterpret_cast<const hstring *>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParseAdd(abi_arg_in<hstring> input, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParseAdd(*reinterpret_cast<const hstring *>(&input)));
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
    HRESULT __stdcall abi_CreateFromName(abi_arg_in<hstring> name, abi_arg_out<Windows::Web::Http::Headers::IHttpCookiePairHeaderValue> cookiePairHeaderValue) noexcept override
    {
        try
        {
            *cookiePairHeaderValue = detach(this->shim().CreateFromName(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *cookiePairHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromNameWithValue(abi_arg_in<hstring> name, abi_arg_in<hstring> value, abi_arg_out<Windows::Web::Http::Headers::IHttpCookiePairHeaderValue> cookiePairHeaderValue) noexcept override
    {
        try
        {
            *cookiePairHeaderValue = detach(this->shim().CreateFromNameWithValue(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const hstring *>(&value)));
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
    HRESULT __stdcall abi_Parse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpCookiePairHeaderValue> cookiePairHeaderValue) noexcept override
    {
        try
        {
            *cookiePairHeaderValue = detach(this->shim().Parse(*reinterpret_cast<const hstring *>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *cookiePairHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpCookiePairHeaderValue> cookiePairHeaderValue, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParse(*reinterpret_cast<const hstring *>(&input), *cookiePairHeaderValue));
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
    HRESULT __stdcall get_Parameters(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Parameters());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Scheme(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Scheme());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Token(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Token());
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
    HRESULT __stdcall abi_CreateFromScheme(abi_arg_in<hstring> scheme, abi_arg_out<Windows::Web::Http::Headers::IHttpCredentialsHeaderValue> credentialsHeaderValue) noexcept override
    {
        try
        {
            *credentialsHeaderValue = detach(this->shim().CreateFromScheme(*reinterpret_cast<const hstring *>(&scheme)));
            return S_OK;
        }
        catch (...)
        {
            *credentialsHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromSchemeWithToken(abi_arg_in<hstring> scheme, abi_arg_in<hstring> token, abi_arg_out<Windows::Web::Http::Headers::IHttpCredentialsHeaderValue> credentialsHeaderValue) noexcept override
    {
        try
        {
            *credentialsHeaderValue = detach(this->shim().CreateFromSchemeWithToken(*reinterpret_cast<const hstring *>(&scheme), *reinterpret_cast<const hstring *>(&token)));
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
    HRESULT __stdcall abi_Parse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpCredentialsHeaderValue> credentialsHeaderValue) noexcept override
    {
        try
        {
            *credentialsHeaderValue = detach(this->shim().Parse(*reinterpret_cast<const hstring *>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *credentialsHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpCredentialsHeaderValue> credentialsHeaderValue, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParse(*reinterpret_cast<const hstring *>(&input), *credentialsHeaderValue));
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
    HRESULT __stdcall get_Date(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Date());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Delta(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Delta());
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
    HRESULT __stdcall abi_Parse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValue> dateOrDeltaHeaderValue) noexcept override
    {
        try
        {
            *dateOrDeltaHeaderValue = detach(this->shim().Parse(*reinterpret_cast<const hstring *>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *dateOrDeltaHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValue> dateOrDeltaHeaderValue, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParse(*reinterpret_cast<const hstring *>(&input), *dateOrDeltaHeaderValue));
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

    HRESULT __stdcall get_Parameters(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Parameters());
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
    HRESULT __stdcall abi_ParseAdd(abi_arg_in<hstring> input) noexcept override
    {
        try
        {
            this->shim().ParseAdd(*reinterpret_cast<const hstring *>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParseAdd(abi_arg_in<hstring> input, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParseAdd(*reinterpret_cast<const hstring *>(&input)));
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
    HRESULT __stdcall abi_CreateFromName(abi_arg_in<hstring> name, abi_arg_out<Windows::Web::Http::Headers::IHttpExpectationHeaderValue> expectationHeaderValue) noexcept override
    {
        try
        {
            *expectationHeaderValue = detach(this->shim().CreateFromName(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *expectationHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromNameWithValue(abi_arg_in<hstring> name, abi_arg_in<hstring> value, abi_arg_out<Windows::Web::Http::Headers::IHttpExpectationHeaderValue> expectationHeaderValue) noexcept override
    {
        try
        {
            *expectationHeaderValue = detach(this->shim().CreateFromNameWithValue(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const hstring *>(&value)));
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
    HRESULT __stdcall abi_Parse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpExpectationHeaderValue> expectationHeaderValue) noexcept override
    {
        try
        {
            *expectationHeaderValue = detach(this->shim().Parse(*reinterpret_cast<const hstring *>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *expectationHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpExpectationHeaderValue> expectationHeaderValue, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParse(*reinterpret_cast<const hstring *>(&input), *expectationHeaderValue));
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
    HRESULT __stdcall abi_ParseAdd(abi_arg_in<hstring> input) noexcept override
    {
        try
        {
            this->shim().ParseAdd(*reinterpret_cast<const hstring *>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParseAdd(abi_arg_in<hstring> input, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParseAdd(*reinterpret_cast<const hstring *>(&input)));
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
    HRESULT __stdcall get_LanguageRange(abi_arg_out<hstring> languageRange) noexcept override
    {
        try
        {
            *languageRange = detach(this->shim().LanguageRange());
            return S_OK;
        }
        catch (...)
        {
            *languageRange = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Quality(abi_arg_out<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Quality());
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
    HRESULT __stdcall abi_ParseAdd(abi_arg_in<hstring> input) noexcept override
    {
        try
        {
            this->shim().ParseAdd(*reinterpret_cast<const hstring *>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParseAdd(abi_arg_in<hstring> input, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParseAdd(*reinterpret_cast<const hstring *>(&input)));
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
    HRESULT __stdcall abi_CreateFromLanguageRange(abi_arg_in<hstring> languageRange, abi_arg_out<Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValue> languageRangeWithQualityHeaderValue) noexcept override
    {
        try
        {
            *languageRangeWithQualityHeaderValue = detach(this->shim().CreateFromLanguageRange(*reinterpret_cast<const hstring *>(&languageRange)));
            return S_OK;
        }
        catch (...)
        {
            *languageRangeWithQualityHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromLanguageRangeWithQuality(abi_arg_in<hstring> languageRange, double quality, abi_arg_out<Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValue> languageRangeWithQualityHeaderValue) noexcept override
    {
        try
        {
            *languageRangeWithQualityHeaderValue = detach(this->shim().CreateFromLanguageRangeWithQuality(*reinterpret_cast<const hstring *>(&languageRange), quality));
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
    HRESULT __stdcall abi_Parse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValue> languageRangeWithQualityHeaderValue) noexcept override
    {
        try
        {
            *languageRangeWithQualityHeaderValue = detach(this->shim().Parse(*reinterpret_cast<const hstring *>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *languageRangeWithQualityHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValue> languageRangeWithQualityHeaderValue, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParse(*reinterpret_cast<const hstring *>(&input), *languageRangeWithQualityHeaderValue));
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
    HRESULT __stdcall get_CharSet(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CharSet());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CharSet(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().CharSet(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaType(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediaType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MediaType(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().MediaType(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Parameters(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Parameters());
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
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> mediaType, abi_arg_out<Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue> mediaTypeHeaderValue) noexcept override
    {
        try
        {
            *mediaTypeHeaderValue = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&mediaType)));
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
    HRESULT __stdcall abi_Parse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue> mediaTypeHeaderValue) noexcept override
    {
        try
        {
            *mediaTypeHeaderValue = detach(this->shim().Parse(*reinterpret_cast<const hstring *>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *mediaTypeHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpMediaTypeHeaderValue> mediaTypeHeaderValue, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParse(*reinterpret_cast<const hstring *>(&input), *mediaTypeHeaderValue));
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
    HRESULT __stdcall get_CharSet(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CharSet());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CharSet(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().CharSet(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaType(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediaType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MediaType(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().MediaType(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Parameters(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Parameters());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Quality(abi_arg_out<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Quality());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Quality(abi_arg_in<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            this->shim().Quality(*reinterpret_cast<const Windows::Foundation::IReference<double> *>(&value));
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
    HRESULT __stdcall abi_ParseAdd(abi_arg_in<hstring> input) noexcept override
    {
        try
        {
            this->shim().ParseAdd(*reinterpret_cast<const hstring *>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParseAdd(abi_arg_in<hstring> input, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParseAdd(*reinterpret_cast<const hstring *>(&input)));
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
    HRESULT __stdcall abi_CreateFromMediaType(abi_arg_in<hstring> mediaType, abi_arg_out<Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue> mediaTypeWithQualityHeaderValue) noexcept override
    {
        try
        {
            *mediaTypeWithQualityHeaderValue = detach(this->shim().CreateFromMediaType(*reinterpret_cast<const hstring *>(&mediaType)));
            return S_OK;
        }
        catch (...)
        {
            *mediaTypeWithQualityHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromMediaTypeWithQuality(abi_arg_in<hstring> mediaType, double quality, abi_arg_out<Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue> mediaTypeWithQualityHeaderValue) noexcept override
    {
        try
        {
            *mediaTypeWithQualityHeaderValue = detach(this->shim().CreateFromMediaTypeWithQuality(*reinterpret_cast<const hstring *>(&mediaType), quality));
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
    HRESULT __stdcall abi_Parse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue> mediaTypeWithQualityHeaderValue) noexcept override
    {
        try
        {
            *mediaTypeWithQualityHeaderValue = detach(this->shim().Parse(*reinterpret_cast<const hstring *>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *mediaTypeWithQualityHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValue> mediaTypeWithQualityHeaderValue, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParse(*reinterpret_cast<const hstring *>(&input), *mediaTypeWithQualityHeaderValue));
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
    HRESULT __stdcall abi_ParseAdd(abi_arg_in<hstring> input) noexcept override
    {
        try
        {
            this->shim().ParseAdd(*reinterpret_cast<const hstring *>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParseAdd(abi_arg_in<hstring> input, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParseAdd(*reinterpret_cast<const hstring *>(&input)));
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
struct produce<D, Windows::Web::Http::Headers::IHttpNameValueHeaderValueFactory> : produce_base<D, Windows::Web::Http::Headers::IHttpNameValueHeaderValueFactory>
{
    HRESULT __stdcall abi_CreateFromName(abi_arg_in<hstring> name, abi_arg_out<Windows::Web::Http::Headers::IHttpNameValueHeaderValue> nameValueHeaderValue) noexcept override
    {
        try
        {
            *nameValueHeaderValue = detach(this->shim().CreateFromName(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *nameValueHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromNameWithValue(abi_arg_in<hstring> name, abi_arg_in<hstring> value, abi_arg_out<Windows::Web::Http::Headers::IHttpNameValueHeaderValue> nameValueHeaderValue) noexcept override
    {
        try
        {
            *nameValueHeaderValue = detach(this->shim().CreateFromNameWithValue(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const hstring *>(&value)));
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
    HRESULT __stdcall abi_Parse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpNameValueHeaderValue> nameValueHeaderValue) noexcept override
    {
        try
        {
            *nameValueHeaderValue = detach(this->shim().Parse(*reinterpret_cast<const hstring *>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *nameValueHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpNameValueHeaderValue> nameValueHeaderValue, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParse(*reinterpret_cast<const hstring *>(&input), *nameValueHeaderValue));
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

    HRESULT __stdcall get_Version(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Version());
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
    HRESULT __stdcall abi_CreateFromName(abi_arg_in<hstring> productName, abi_arg_out<Windows::Web::Http::Headers::IHttpProductHeaderValue> productHeaderValue) noexcept override
    {
        try
        {
            *productHeaderValue = detach(this->shim().CreateFromName(*reinterpret_cast<const hstring *>(&productName)));
            return S_OK;
        }
        catch (...)
        {
            *productHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromNameWithVersion(abi_arg_in<hstring> productName, abi_arg_in<hstring> productVersion, abi_arg_out<Windows::Web::Http::Headers::IHttpProductHeaderValue> productHeaderValue) noexcept override
    {
        try
        {
            *productHeaderValue = detach(this->shim().CreateFromNameWithVersion(*reinterpret_cast<const hstring *>(&productName), *reinterpret_cast<const hstring *>(&productVersion)));
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
    HRESULT __stdcall abi_Parse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpProductHeaderValue> productHeaderValue) noexcept override
    {
        try
        {
            *productHeaderValue = detach(this->shim().Parse(*reinterpret_cast<const hstring *>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *productHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpProductHeaderValue> productHeaderValue, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParse(*reinterpret_cast<const hstring *>(&input), *productHeaderValue));
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
    HRESULT __stdcall get_Product(abi_arg_out<Windows::Web::Http::Headers::IHttpProductHeaderValue> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Product());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Comment(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Comment());
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
    HRESULT __stdcall abi_ParseAdd(abi_arg_in<hstring> input) noexcept override
    {
        try
        {
            this->shim().ParseAdd(*reinterpret_cast<const hstring *>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParseAdd(abi_arg_in<hstring> input, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParseAdd(*reinterpret_cast<const hstring *>(&input)));
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
    HRESULT __stdcall abi_CreateFromComment(abi_arg_in<hstring> productComment, abi_arg_out<Windows::Web::Http::Headers::IHttpProductInfoHeaderValue> productInfoHeaderValue) noexcept override
    {
        try
        {
            *productInfoHeaderValue = detach(this->shim().CreateFromComment(*reinterpret_cast<const hstring *>(&productComment)));
            return S_OK;
        }
        catch (...)
        {
            *productInfoHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromNameWithVersion(abi_arg_in<hstring> productName, abi_arg_in<hstring> productVersion, abi_arg_out<Windows::Web::Http::Headers::IHttpProductInfoHeaderValue> productInfoHeaderValue) noexcept override
    {
        try
        {
            *productInfoHeaderValue = detach(this->shim().CreateFromNameWithVersion(*reinterpret_cast<const hstring *>(&productName), *reinterpret_cast<const hstring *>(&productVersion)));
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
    HRESULT __stdcall abi_Parse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpProductInfoHeaderValue> productInfoHeaderValue) noexcept override
    {
        try
        {
            *productInfoHeaderValue = detach(this->shim().Parse(*reinterpret_cast<const hstring *>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *productInfoHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpProductInfoHeaderValue> productInfoHeaderValue, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParse(*reinterpret_cast<const hstring *>(&input), *productInfoHeaderValue));
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
    HRESULT __stdcall get_Accept(abi_arg_out<Windows::Web::Http::Headers::IHttpMediaTypeWithQualityHeaderValueCollection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Accept());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AcceptEncoding(abi_arg_out<Windows::Web::Http::Headers::IHttpContentCodingWithQualityHeaderValueCollection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AcceptEncoding());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AcceptLanguage(abi_arg_out<Windows::Web::Http::Headers::IHttpLanguageRangeWithQualityHeaderValueCollection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AcceptLanguage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Authorization(abi_arg_out<Windows::Web::Http::Headers::IHttpCredentialsHeaderValue> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Authorization());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Authorization(abi_arg_in<Windows::Web::Http::Headers::IHttpCredentialsHeaderValue> value) noexcept override
    {
        try
        {
            this->shim().Authorization(*reinterpret_cast<const Windows::Web::Http::Headers::HttpCredentialsHeaderValue *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CacheControl(abi_arg_out<Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CacheControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Connection(abi_arg_out<Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueCollection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Connection());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Cookie(abi_arg_out<Windows::Web::Http::Headers::IHttpCookiePairHeaderValueCollection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Cookie());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Date(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Date());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Date(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            this->shim().Date(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::DateTime> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Expect(abi_arg_out<Windows::Web::Http::Headers::IHttpExpectationHeaderValueCollection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Expect());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_From(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().From());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_From(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().From(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Host(abi_arg_out<Windows::Networking::IHostName> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Host());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Host(abi_arg_in<Windows::Networking::IHostName> value) noexcept override
    {
        try
        {
            this->shim().Host(*reinterpret_cast<const Windows::Networking::HostName *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IfModifiedSince(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IfModifiedSince());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IfModifiedSince(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            this->shim().IfModifiedSince(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::DateTime> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IfUnmodifiedSince(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IfUnmodifiedSince());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IfUnmodifiedSince(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            this->shim().IfUnmodifiedSince(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::DateTime> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxForwards(abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxForwards());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxForwards(abi_arg_in<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            this->shim().MaxForwards(*reinterpret_cast<const Windows::Foundation::IReference<uint32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProxyAuthorization(abi_arg_out<Windows::Web::Http::Headers::IHttpCredentialsHeaderValue> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProxyAuthorization());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ProxyAuthorization(abi_arg_in<Windows::Web::Http::Headers::IHttpCredentialsHeaderValue> value) noexcept override
    {
        try
        {
            this->shim().ProxyAuthorization(*reinterpret_cast<const Windows::Web::Http::Headers::HttpCredentialsHeaderValue *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Referer(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Referer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Referer(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().Referer(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransferEncoding(abi_arg_out<Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueCollection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TransferEncoding());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserAgent(abi_arg_out<Windows::Web::Http::Headers::IHttpProductInfoHeaderValueCollection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UserAgent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Append(abi_arg_in<hstring> name, abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Append(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryAppendWithoutValidation(abi_arg_in<hstring> name, abi_arg_in<hstring> value, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryAppendWithoutValidation(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const hstring *>(&value)));
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
    HRESULT __stdcall get_Age(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Age());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Age(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            this->shim().Age(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Allow(abi_arg_out<Windows::Web::Http::Headers::IHttpMethodHeaderValueCollection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Allow());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CacheControl(abi_arg_out<Windows::Web::Http::Headers::IHttpCacheDirectiveHeaderValueCollection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CacheControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Connection(abi_arg_out<Windows::Web::Http::Headers::IHttpConnectionOptionHeaderValueCollection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Connection());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Date(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Date());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Date(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            this->shim().Date(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::DateTime> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Location(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Location());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Location(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().Location(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProxyAuthenticate(abi_arg_out<Windows::Web::Http::Headers::IHttpChallengeHeaderValueCollection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProxyAuthenticate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RetryAfter(abi_arg_out<Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValue> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RetryAfter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RetryAfter(abi_arg_in<Windows::Web::Http::Headers::IHttpDateOrDeltaHeaderValue> value) noexcept override
    {
        try
        {
            this->shim().RetryAfter(*reinterpret_cast<const Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransferEncoding(abi_arg_out<Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueCollection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TransferEncoding());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WwwAuthenticate(abi_arg_out<Windows::Web::Http::Headers::IHttpChallengeHeaderValueCollection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WwwAuthenticate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Append(abi_arg_in<hstring> name, abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Append(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryAppendWithoutValidation(abi_arg_in<hstring> name, abi_arg_in<hstring> value, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryAppendWithoutValidation(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const hstring *>(&value)));
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
    HRESULT __stdcall get_Parameters(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Parameters());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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
};

template <typename D>
struct produce<D, Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueCollection> : produce_base<D, Windows::Web::Http::Headers::IHttpTransferCodingHeaderValueCollection>
{
    HRESULT __stdcall abi_ParseAdd(abi_arg_in<hstring> input) noexcept override
    {
        try
        {
            this->shim().ParseAdd(*reinterpret_cast<const hstring *>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParseAdd(abi_arg_in<hstring> input, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParseAdd(*reinterpret_cast<const hstring *>(&input)));
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
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpTransferCodingHeaderValue> transferCodingHeaderValue) noexcept override
    {
        try
        {
            *transferCodingHeaderValue = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&input)));
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
    HRESULT __stdcall abi_Parse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpTransferCodingHeaderValue> transferCodingHeaderValue) noexcept override
    {
        try
        {
            *transferCodingHeaderValue = detach(this->shim().Parse(*reinterpret_cast<const hstring *>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *transferCodingHeaderValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParse(abi_arg_in<hstring> input, abi_arg_out<Windows::Web::Http::Headers::IHttpTransferCodingHeaderValue> transferCodingHeaderValue, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParse(*reinterpret_cast<const hstring *>(&input), *transferCodingHeaderValue));
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

namespace Windows::Web::Http::Headers {

template <typename D> Windows::Web::Http::Headers::HttpContentDispositionHeaderValue impl_IHttpContentHeaderCollection<D>::ContentDisposition() const
{
    Windows::Web::Http::Headers::HttpContentDispositionHeaderValue value { nullptr };
    check_hresult(static_cast<const IHttpContentHeaderCollection &>(static_cast<const D &>(*this))->get_ContentDisposition(put(value)));
    return value;
}

template <typename D> void impl_IHttpContentHeaderCollection<D>::ContentDisposition(const Windows::Web::Http::Headers::HttpContentDispositionHeaderValue & value) const
{
    check_hresult(static_cast<const IHttpContentHeaderCollection &>(static_cast<const D &>(*this))->put_ContentDisposition(get(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpContentCodingHeaderValueCollection impl_IHttpContentHeaderCollection<D>::ContentEncoding() const
{
    Windows::Web::Http::Headers::HttpContentCodingHeaderValueCollection value { nullptr };
    check_hresult(static_cast<const IHttpContentHeaderCollection &>(static_cast<const D &>(*this))->get_ContentEncoding(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpLanguageHeaderValueCollection impl_IHttpContentHeaderCollection<D>::ContentLanguage() const
{
    Windows::Web::Http::Headers::HttpLanguageHeaderValueCollection value { nullptr };
    check_hresult(static_cast<const IHttpContentHeaderCollection &>(static_cast<const D &>(*this))->get_ContentLanguage(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint64_t> impl_IHttpContentHeaderCollection<D>::ContentLength() const
{
    Windows::Foundation::IReference<uint64_t> value;
    check_hresult(static_cast<const IHttpContentHeaderCollection &>(static_cast<const D &>(*this))->get_ContentLength(put(value)));
    return value;
}

template <typename D> void impl_IHttpContentHeaderCollection<D>::ContentLength(const Windows::Foundation::IReference<uint64_t> & value) const
{
    check_hresult(static_cast<const IHttpContentHeaderCollection &>(static_cast<const D &>(*this))->put_ContentLength(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_IHttpContentHeaderCollection<D>::ContentLocation() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IHttpContentHeaderCollection &>(static_cast<const D &>(*this))->get_ContentLocation(put(value)));
    return value;
}

template <typename D> void impl_IHttpContentHeaderCollection<D>::ContentLocation(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const IHttpContentHeaderCollection &>(static_cast<const D &>(*this))->put_ContentLocation(get(value)));
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IHttpContentHeaderCollection<D>::ContentMD5() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IHttpContentHeaderCollection &>(static_cast<const D &>(*this))->get_ContentMD5(put(value)));
    return value;
}

template <typename D> void impl_IHttpContentHeaderCollection<D>::ContentMD5(const Windows::Storage::Streams::IBuffer & value) const
{
    check_hresult(static_cast<const IHttpContentHeaderCollection &>(static_cast<const D &>(*this))->put_ContentMD5(get(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpContentRangeHeaderValue impl_IHttpContentHeaderCollection<D>::ContentRange() const
{
    Windows::Web::Http::Headers::HttpContentRangeHeaderValue value { nullptr };
    check_hresult(static_cast<const IHttpContentHeaderCollection &>(static_cast<const D &>(*this))->get_ContentRange(put(value)));
    return value;
}

template <typename D> void impl_IHttpContentHeaderCollection<D>::ContentRange(const Windows::Web::Http::Headers::HttpContentRangeHeaderValue & value) const
{
    check_hresult(static_cast<const IHttpContentHeaderCollection &>(static_cast<const D &>(*this))->put_ContentRange(get(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpMediaTypeHeaderValue impl_IHttpContentHeaderCollection<D>::ContentType() const
{
    Windows::Web::Http::Headers::HttpMediaTypeHeaderValue value { nullptr };
    check_hresult(static_cast<const IHttpContentHeaderCollection &>(static_cast<const D &>(*this))->get_ContentType(put(value)));
    return value;
}

template <typename D> void impl_IHttpContentHeaderCollection<D>::ContentType(const Windows::Web::Http::Headers::HttpMediaTypeHeaderValue & value) const
{
    check_hresult(static_cast<const IHttpContentHeaderCollection &>(static_cast<const D &>(*this))->put_ContentType(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IHttpContentHeaderCollection<D>::Expires() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IHttpContentHeaderCollection &>(static_cast<const D &>(*this))->get_Expires(put(value)));
    return value;
}

template <typename D> void impl_IHttpContentHeaderCollection<D>::Expires(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const
{
    check_hresult(static_cast<const IHttpContentHeaderCollection &>(static_cast<const D &>(*this))->put_Expires(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IHttpContentHeaderCollection<D>::LastModified() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IHttpContentHeaderCollection &>(static_cast<const D &>(*this))->get_LastModified(put(value)));
    return value;
}

template <typename D> void impl_IHttpContentHeaderCollection<D>::LastModified(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const
{
    check_hresult(static_cast<const IHttpContentHeaderCollection &>(static_cast<const D &>(*this))->put_LastModified(get(value)));
}

template <typename D> void impl_IHttpContentHeaderCollection<D>::Append(hstring_ref name, hstring_ref value) const
{
    check_hresult(static_cast<const IHttpContentHeaderCollection &>(static_cast<const D &>(*this))->abi_Append(get(name), get(value)));
}

template <typename D> bool impl_IHttpContentHeaderCollection<D>::TryAppendWithoutValidation(hstring_ref name, hstring_ref value) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpContentHeaderCollection &>(static_cast<const D &>(*this))->abi_TryAppendWithoutValidation(get(name), get(value), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValueCollection impl_IHttpRequestHeaderCollection<D>::Accept() const
{
    Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValueCollection value { nullptr };
    check_hresult(static_cast<const IHttpRequestHeaderCollection &>(static_cast<const D &>(*this))->get_Accept(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValueCollection impl_IHttpRequestHeaderCollection<D>::AcceptEncoding() const
{
    Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValueCollection value { nullptr };
    check_hresult(static_cast<const IHttpRequestHeaderCollection &>(static_cast<const D &>(*this))->get_AcceptEncoding(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValueCollection impl_IHttpRequestHeaderCollection<D>::AcceptLanguage() const
{
    Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValueCollection value { nullptr };
    check_hresult(static_cast<const IHttpRequestHeaderCollection &>(static_cast<const D &>(*this))->get_AcceptLanguage(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpCredentialsHeaderValue impl_IHttpRequestHeaderCollection<D>::Authorization() const
{
    Windows::Web::Http::Headers::HttpCredentialsHeaderValue value { nullptr };
    check_hresult(static_cast<const IHttpRequestHeaderCollection &>(static_cast<const D &>(*this))->get_Authorization(put(value)));
    return value;
}

template <typename D> void impl_IHttpRequestHeaderCollection<D>::Authorization(const Windows::Web::Http::Headers::HttpCredentialsHeaderValue & value) const
{
    check_hresult(static_cast<const IHttpRequestHeaderCollection &>(static_cast<const D &>(*this))->put_Authorization(get(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpCacheDirectiveHeaderValueCollection impl_IHttpRequestHeaderCollection<D>::CacheControl() const
{
    Windows::Web::Http::Headers::HttpCacheDirectiveHeaderValueCollection value { nullptr };
    check_hresult(static_cast<const IHttpRequestHeaderCollection &>(static_cast<const D &>(*this))->get_CacheControl(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpConnectionOptionHeaderValueCollection impl_IHttpRequestHeaderCollection<D>::Connection() const
{
    Windows::Web::Http::Headers::HttpConnectionOptionHeaderValueCollection value { nullptr };
    check_hresult(static_cast<const IHttpRequestHeaderCollection &>(static_cast<const D &>(*this))->get_Connection(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpCookiePairHeaderValueCollection impl_IHttpRequestHeaderCollection<D>::Cookie() const
{
    Windows::Web::Http::Headers::HttpCookiePairHeaderValueCollection value { nullptr };
    check_hresult(static_cast<const IHttpRequestHeaderCollection &>(static_cast<const D &>(*this))->get_Cookie(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IHttpRequestHeaderCollection<D>::Date() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IHttpRequestHeaderCollection &>(static_cast<const D &>(*this))->get_Date(put(value)));
    return value;
}

template <typename D> void impl_IHttpRequestHeaderCollection<D>::Date(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const
{
    check_hresult(static_cast<const IHttpRequestHeaderCollection &>(static_cast<const D &>(*this))->put_Date(get(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpExpectationHeaderValueCollection impl_IHttpRequestHeaderCollection<D>::Expect() const
{
    Windows::Web::Http::Headers::HttpExpectationHeaderValueCollection value { nullptr };
    check_hresult(static_cast<const IHttpRequestHeaderCollection &>(static_cast<const D &>(*this))->get_Expect(put(value)));
    return value;
}

template <typename D> hstring impl_IHttpRequestHeaderCollection<D>::From() const
{
    hstring value;
    check_hresult(static_cast<const IHttpRequestHeaderCollection &>(static_cast<const D &>(*this))->get_From(put(value)));
    return value;
}

template <typename D> void impl_IHttpRequestHeaderCollection<D>::From(hstring_ref value) const
{
    check_hresult(static_cast<const IHttpRequestHeaderCollection &>(static_cast<const D &>(*this))->put_From(get(value)));
}

template <typename D> Windows::Networking::HostName impl_IHttpRequestHeaderCollection<D>::Host() const
{
    Windows::Networking::HostName value { nullptr };
    check_hresult(static_cast<const IHttpRequestHeaderCollection &>(static_cast<const D &>(*this))->get_Host(put(value)));
    return value;
}

template <typename D> void impl_IHttpRequestHeaderCollection<D>::Host(const Windows::Networking::HostName & value) const
{
    check_hresult(static_cast<const IHttpRequestHeaderCollection &>(static_cast<const D &>(*this))->put_Host(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IHttpRequestHeaderCollection<D>::IfModifiedSince() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IHttpRequestHeaderCollection &>(static_cast<const D &>(*this))->get_IfModifiedSince(put(value)));
    return value;
}

template <typename D> void impl_IHttpRequestHeaderCollection<D>::IfModifiedSince(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const
{
    check_hresult(static_cast<const IHttpRequestHeaderCollection &>(static_cast<const D &>(*this))->put_IfModifiedSince(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IHttpRequestHeaderCollection<D>::IfUnmodifiedSince() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IHttpRequestHeaderCollection &>(static_cast<const D &>(*this))->get_IfUnmodifiedSince(put(value)));
    return value;
}

template <typename D> void impl_IHttpRequestHeaderCollection<D>::IfUnmodifiedSince(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const
{
    check_hresult(static_cast<const IHttpRequestHeaderCollection &>(static_cast<const D &>(*this))->put_IfUnmodifiedSince(get(value)));
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_IHttpRequestHeaderCollection<D>::MaxForwards() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(static_cast<const IHttpRequestHeaderCollection &>(static_cast<const D &>(*this))->get_MaxForwards(put(value)));
    return value;
}

template <typename D> void impl_IHttpRequestHeaderCollection<D>::MaxForwards(const Windows::Foundation::IReference<uint32_t> & value) const
{
    check_hresult(static_cast<const IHttpRequestHeaderCollection &>(static_cast<const D &>(*this))->put_MaxForwards(get(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpCredentialsHeaderValue impl_IHttpRequestHeaderCollection<D>::ProxyAuthorization() const
{
    Windows::Web::Http::Headers::HttpCredentialsHeaderValue value { nullptr };
    check_hresult(static_cast<const IHttpRequestHeaderCollection &>(static_cast<const D &>(*this))->get_ProxyAuthorization(put(value)));
    return value;
}

template <typename D> void impl_IHttpRequestHeaderCollection<D>::ProxyAuthorization(const Windows::Web::Http::Headers::HttpCredentialsHeaderValue & value) const
{
    check_hresult(static_cast<const IHttpRequestHeaderCollection &>(static_cast<const D &>(*this))->put_ProxyAuthorization(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_IHttpRequestHeaderCollection<D>::Referer() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IHttpRequestHeaderCollection &>(static_cast<const D &>(*this))->get_Referer(put(value)));
    return value;
}

template <typename D> void impl_IHttpRequestHeaderCollection<D>::Referer(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const IHttpRequestHeaderCollection &>(static_cast<const D &>(*this))->put_Referer(get(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpTransferCodingHeaderValueCollection impl_IHttpRequestHeaderCollection<D>::TransferEncoding() const
{
    Windows::Web::Http::Headers::HttpTransferCodingHeaderValueCollection value { nullptr };
    check_hresult(static_cast<const IHttpRequestHeaderCollection &>(static_cast<const D &>(*this))->get_TransferEncoding(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpProductInfoHeaderValueCollection impl_IHttpRequestHeaderCollection<D>::UserAgent() const
{
    Windows::Web::Http::Headers::HttpProductInfoHeaderValueCollection value { nullptr };
    check_hresult(static_cast<const IHttpRequestHeaderCollection &>(static_cast<const D &>(*this))->get_UserAgent(put(value)));
    return value;
}

template <typename D> void impl_IHttpRequestHeaderCollection<D>::Append(hstring_ref name, hstring_ref value) const
{
    check_hresult(static_cast<const IHttpRequestHeaderCollection &>(static_cast<const D &>(*this))->abi_Append(get(name), get(value)));
}

template <typename D> bool impl_IHttpRequestHeaderCollection<D>::TryAppendWithoutValidation(hstring_ref name, hstring_ref value) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpRequestHeaderCollection &>(static_cast<const D &>(*this))->abi_TryAppendWithoutValidation(get(name), get(value), &succeeded));
    return succeeded;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> impl_IHttpResponseHeaderCollection<D>::Age() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value;
    check_hresult(static_cast<const IHttpResponseHeaderCollection &>(static_cast<const D &>(*this))->get_Age(put(value)));
    return value;
}

template <typename D> void impl_IHttpResponseHeaderCollection<D>::Age(const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> & value) const
{
    check_hresult(static_cast<const IHttpResponseHeaderCollection &>(static_cast<const D &>(*this))->put_Age(get(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpMethodHeaderValueCollection impl_IHttpResponseHeaderCollection<D>::Allow() const
{
    Windows::Web::Http::Headers::HttpMethodHeaderValueCollection value { nullptr };
    check_hresult(static_cast<const IHttpResponseHeaderCollection &>(static_cast<const D &>(*this))->get_Allow(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpCacheDirectiveHeaderValueCollection impl_IHttpResponseHeaderCollection<D>::CacheControl() const
{
    Windows::Web::Http::Headers::HttpCacheDirectiveHeaderValueCollection value { nullptr };
    check_hresult(static_cast<const IHttpResponseHeaderCollection &>(static_cast<const D &>(*this))->get_CacheControl(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpConnectionOptionHeaderValueCollection impl_IHttpResponseHeaderCollection<D>::Connection() const
{
    Windows::Web::Http::Headers::HttpConnectionOptionHeaderValueCollection value { nullptr };
    check_hresult(static_cast<const IHttpResponseHeaderCollection &>(static_cast<const D &>(*this))->get_Connection(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IHttpResponseHeaderCollection<D>::Date() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IHttpResponseHeaderCollection &>(static_cast<const D &>(*this))->get_Date(put(value)));
    return value;
}

template <typename D> void impl_IHttpResponseHeaderCollection<D>::Date(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const
{
    check_hresult(static_cast<const IHttpResponseHeaderCollection &>(static_cast<const D &>(*this))->put_Date(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_IHttpResponseHeaderCollection<D>::Location() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IHttpResponseHeaderCollection &>(static_cast<const D &>(*this))->get_Location(put(value)));
    return value;
}

template <typename D> void impl_IHttpResponseHeaderCollection<D>::Location(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const IHttpResponseHeaderCollection &>(static_cast<const D &>(*this))->put_Location(get(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpChallengeHeaderValueCollection impl_IHttpResponseHeaderCollection<D>::ProxyAuthenticate() const
{
    Windows::Web::Http::Headers::HttpChallengeHeaderValueCollection value { nullptr };
    check_hresult(static_cast<const IHttpResponseHeaderCollection &>(static_cast<const D &>(*this))->get_ProxyAuthenticate(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue impl_IHttpResponseHeaderCollection<D>::RetryAfter() const
{
    Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue value { nullptr };
    check_hresult(static_cast<const IHttpResponseHeaderCollection &>(static_cast<const D &>(*this))->get_RetryAfter(put(value)));
    return value;
}

template <typename D> void impl_IHttpResponseHeaderCollection<D>::RetryAfter(const Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue & value) const
{
    check_hresult(static_cast<const IHttpResponseHeaderCollection &>(static_cast<const D &>(*this))->put_RetryAfter(get(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpTransferCodingHeaderValueCollection impl_IHttpResponseHeaderCollection<D>::TransferEncoding() const
{
    Windows::Web::Http::Headers::HttpTransferCodingHeaderValueCollection value { nullptr };
    check_hresult(static_cast<const IHttpResponseHeaderCollection &>(static_cast<const D &>(*this))->get_TransferEncoding(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpChallengeHeaderValueCollection impl_IHttpResponseHeaderCollection<D>::WwwAuthenticate() const
{
    Windows::Web::Http::Headers::HttpChallengeHeaderValueCollection value { nullptr };
    check_hresult(static_cast<const IHttpResponseHeaderCollection &>(static_cast<const D &>(*this))->get_WwwAuthenticate(put(value)));
    return value;
}

template <typename D> void impl_IHttpResponseHeaderCollection<D>::Append(hstring_ref name, hstring_ref value) const
{
    check_hresult(static_cast<const IHttpResponseHeaderCollection &>(static_cast<const D &>(*this))->abi_Append(get(name), get(value)));
}

template <typename D> bool impl_IHttpResponseHeaderCollection<D>::TryAppendWithoutValidation(hstring_ref name, hstring_ref value) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpResponseHeaderCollection &>(static_cast<const D &>(*this))->abi_TryAppendWithoutValidation(get(name), get(value), &succeeded));
    return succeeded;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> impl_IHttpCacheDirectiveHeaderValueCollection<D>::MaxAge() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value;
    check_hresult(static_cast<const IHttpCacheDirectiveHeaderValueCollection &>(static_cast<const D &>(*this))->get_MaxAge(put(value)));
    return value;
}

template <typename D> void impl_IHttpCacheDirectiveHeaderValueCollection<D>::MaxAge(const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> & value) const
{
    check_hresult(static_cast<const IHttpCacheDirectiveHeaderValueCollection &>(static_cast<const D &>(*this))->put_MaxAge(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> impl_IHttpCacheDirectiveHeaderValueCollection<D>::MaxStale() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value;
    check_hresult(static_cast<const IHttpCacheDirectiveHeaderValueCollection &>(static_cast<const D &>(*this))->get_MaxStale(put(value)));
    return value;
}

template <typename D> void impl_IHttpCacheDirectiveHeaderValueCollection<D>::MaxStale(const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> & value) const
{
    check_hresult(static_cast<const IHttpCacheDirectiveHeaderValueCollection &>(static_cast<const D &>(*this))->put_MaxStale(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> impl_IHttpCacheDirectiveHeaderValueCollection<D>::MinFresh() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value;
    check_hresult(static_cast<const IHttpCacheDirectiveHeaderValueCollection &>(static_cast<const D &>(*this))->get_MinFresh(put(value)));
    return value;
}

template <typename D> void impl_IHttpCacheDirectiveHeaderValueCollection<D>::MinFresh(const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> & value) const
{
    check_hresult(static_cast<const IHttpCacheDirectiveHeaderValueCollection &>(static_cast<const D &>(*this))->put_MinFresh(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> impl_IHttpCacheDirectiveHeaderValueCollection<D>::SharedMaxAge() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value;
    check_hresult(static_cast<const IHttpCacheDirectiveHeaderValueCollection &>(static_cast<const D &>(*this))->get_SharedMaxAge(put(value)));
    return value;
}

template <typename D> void impl_IHttpCacheDirectiveHeaderValueCollection<D>::SharedMaxAge(const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> & value) const
{
    check_hresult(static_cast<const IHttpCacheDirectiveHeaderValueCollection &>(static_cast<const D &>(*this))->put_SharedMaxAge(get(value)));
}

template <typename D> void impl_IHttpCacheDirectiveHeaderValueCollection<D>::ParseAdd(hstring_ref input) const
{
    check_hresult(static_cast<const IHttpCacheDirectiveHeaderValueCollection &>(static_cast<const D &>(*this))->abi_ParseAdd(get(input)));
}

template <typename D> bool impl_IHttpCacheDirectiveHeaderValueCollection<D>::TryParseAdd(hstring_ref input) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpCacheDirectiveHeaderValueCollection &>(static_cast<const D &>(*this))->abi_TryParseAdd(get(input), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpChallengeHeaderValue impl_IHttpChallengeHeaderValueStatics<D>::Parse(hstring_ref input) const
{
    Windows::Web::Http::Headers::HttpChallengeHeaderValue challengeHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpChallengeHeaderValueStatics &>(static_cast<const D &>(*this))->abi_Parse(get(input), put(challengeHeaderValue)));
    return challengeHeaderValue;
}

template <typename D> bool impl_IHttpChallengeHeaderValueStatics<D>::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpChallengeHeaderValue & challengeHeaderValue) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpChallengeHeaderValueStatics &>(static_cast<const D &>(*this))->abi_TryParse(get(input), put(challengeHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpChallengeHeaderValue impl_IHttpChallengeHeaderValueFactory<D>::CreateFromScheme(hstring_ref scheme) const
{
    Windows::Web::Http::Headers::HttpChallengeHeaderValue challengeHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpChallengeHeaderValueFactory &>(static_cast<const D &>(*this))->abi_CreateFromScheme(get(scheme), put(challengeHeaderValue)));
    return challengeHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpChallengeHeaderValue impl_IHttpChallengeHeaderValueFactory<D>::CreateFromSchemeWithToken(hstring_ref scheme, hstring_ref token) const
{
    Windows::Web::Http::Headers::HttpChallengeHeaderValue challengeHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpChallengeHeaderValueFactory &>(static_cast<const D &>(*this))->abi_CreateFromSchemeWithToken(get(scheme), get(token), put(challengeHeaderValue)));
    return challengeHeaderValue;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue> impl_IHttpChallengeHeaderValue<D>::Parameters() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue> value;
    check_hresult(static_cast<const IHttpChallengeHeaderValue &>(static_cast<const D &>(*this))->get_Parameters(put(value)));
    return value;
}

template <typename D> hstring impl_IHttpChallengeHeaderValue<D>::Scheme() const
{
    hstring value;
    check_hresult(static_cast<const IHttpChallengeHeaderValue &>(static_cast<const D &>(*this))->get_Scheme(put(value)));
    return value;
}

template <typename D> hstring impl_IHttpChallengeHeaderValue<D>::Token() const
{
    hstring value;
    check_hresult(static_cast<const IHttpChallengeHeaderValue &>(static_cast<const D &>(*this))->get_Token(put(value)));
    return value;
}

template <typename D> void impl_IHttpChallengeHeaderValueCollection<D>::ParseAdd(hstring_ref input) const
{
    check_hresult(static_cast<const IHttpChallengeHeaderValueCollection &>(static_cast<const D &>(*this))->abi_ParseAdd(get(input)));
}

template <typename D> bool impl_IHttpChallengeHeaderValueCollection<D>::TryParseAdd(hstring_ref input) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpChallengeHeaderValueCollection &>(static_cast<const D &>(*this))->abi_TryParseAdd(get(input), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpCredentialsHeaderValue impl_IHttpCredentialsHeaderValueStatics<D>::Parse(hstring_ref input) const
{
    Windows::Web::Http::Headers::HttpCredentialsHeaderValue credentialsHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpCredentialsHeaderValueStatics &>(static_cast<const D &>(*this))->abi_Parse(get(input), put(credentialsHeaderValue)));
    return credentialsHeaderValue;
}

template <typename D> bool impl_IHttpCredentialsHeaderValueStatics<D>::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpCredentialsHeaderValue & credentialsHeaderValue) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpCredentialsHeaderValueStatics &>(static_cast<const D &>(*this))->abi_TryParse(get(input), put(credentialsHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpCredentialsHeaderValue impl_IHttpCredentialsHeaderValueFactory<D>::CreateFromScheme(hstring_ref scheme) const
{
    Windows::Web::Http::Headers::HttpCredentialsHeaderValue credentialsHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpCredentialsHeaderValueFactory &>(static_cast<const D &>(*this))->abi_CreateFromScheme(get(scheme), put(credentialsHeaderValue)));
    return credentialsHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpCredentialsHeaderValue impl_IHttpCredentialsHeaderValueFactory<D>::CreateFromSchemeWithToken(hstring_ref scheme, hstring_ref token) const
{
    Windows::Web::Http::Headers::HttpCredentialsHeaderValue credentialsHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpCredentialsHeaderValueFactory &>(static_cast<const D &>(*this))->abi_CreateFromSchemeWithToken(get(scheme), get(token), put(credentialsHeaderValue)));
    return credentialsHeaderValue;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue> impl_IHttpCredentialsHeaderValue<D>::Parameters() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue> value;
    check_hresult(static_cast<const IHttpCredentialsHeaderValue &>(static_cast<const D &>(*this))->get_Parameters(put(value)));
    return value;
}

template <typename D> hstring impl_IHttpCredentialsHeaderValue<D>::Scheme() const
{
    hstring value;
    check_hresult(static_cast<const IHttpCredentialsHeaderValue &>(static_cast<const D &>(*this))->get_Scheme(put(value)));
    return value;
}

template <typename D> hstring impl_IHttpCredentialsHeaderValue<D>::Token() const
{
    hstring value;
    check_hresult(static_cast<const IHttpCredentialsHeaderValue &>(static_cast<const D &>(*this))->get_Token(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue impl_IHttpConnectionOptionHeaderValueStatics<D>::Parse(hstring_ref input) const
{
    Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue connectionOptionHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpConnectionOptionHeaderValueStatics &>(static_cast<const D &>(*this))->abi_Parse(get(input), put(connectionOptionHeaderValue)));
    return connectionOptionHeaderValue;
}

template <typename D> bool impl_IHttpConnectionOptionHeaderValueStatics<D>::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue & connectionOptionHeaderValue) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpConnectionOptionHeaderValueStatics &>(static_cast<const D &>(*this))->abi_TryParse(get(input), put(connectionOptionHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue impl_IHttpConnectionOptionHeaderValueFactory<D>::Create(hstring_ref token) const
{
    Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue connectionOptionHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpConnectionOptionHeaderValueFactory &>(static_cast<const D &>(*this))->abi_Create(get(token), put(connectionOptionHeaderValue)));
    return connectionOptionHeaderValue;
}

template <typename D> hstring impl_IHttpConnectionOptionHeaderValue<D>::Token() const
{
    hstring value;
    check_hresult(static_cast<const IHttpConnectionOptionHeaderValue &>(static_cast<const D &>(*this))->get_Token(put(value)));
    return value;
}

template <typename D> void impl_IHttpConnectionOptionHeaderValueCollection<D>::ParseAdd(hstring_ref input) const
{
    check_hresult(static_cast<const IHttpConnectionOptionHeaderValueCollection &>(static_cast<const D &>(*this))->abi_ParseAdd(get(input)));
}

template <typename D> bool impl_IHttpConnectionOptionHeaderValueCollection<D>::TryParseAdd(hstring_ref input) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpConnectionOptionHeaderValueCollection &>(static_cast<const D &>(*this))->abi_TryParseAdd(get(input), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpContentCodingHeaderValue impl_IHttpContentCodingHeaderValueStatics<D>::Parse(hstring_ref input) const
{
    Windows::Web::Http::Headers::HttpContentCodingHeaderValue contentCodingHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpContentCodingHeaderValueStatics &>(static_cast<const D &>(*this))->abi_Parse(get(input), put(contentCodingHeaderValue)));
    return contentCodingHeaderValue;
}

template <typename D> bool impl_IHttpContentCodingHeaderValueStatics<D>::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpContentCodingHeaderValue & contentCodingHeaderValue) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpContentCodingHeaderValueStatics &>(static_cast<const D &>(*this))->abi_TryParse(get(input), put(contentCodingHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpContentCodingHeaderValue impl_IHttpContentCodingHeaderValueFactory<D>::Create(hstring_ref contentCoding) const
{
    Windows::Web::Http::Headers::HttpContentCodingHeaderValue contentCodingHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpContentCodingHeaderValueFactory &>(static_cast<const D &>(*this))->abi_Create(get(contentCoding), put(contentCodingHeaderValue)));
    return contentCodingHeaderValue;
}

template <typename D> hstring impl_IHttpContentCodingHeaderValue<D>::ContentCoding() const
{
    hstring value;
    check_hresult(static_cast<const IHttpContentCodingHeaderValue &>(static_cast<const D &>(*this))->get_ContentCoding(put(value)));
    return value;
}

template <typename D> void impl_IHttpContentCodingHeaderValueCollection<D>::ParseAdd(hstring_ref input) const
{
    check_hresult(static_cast<const IHttpContentCodingHeaderValueCollection &>(static_cast<const D &>(*this))->abi_ParseAdd(get(input)));
}

template <typename D> bool impl_IHttpContentCodingHeaderValueCollection<D>::TryParseAdd(hstring_ref input) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpContentCodingHeaderValueCollection &>(static_cast<const D &>(*this))->abi_TryParseAdd(get(input), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpContentDispositionHeaderValue impl_IHttpContentDispositionHeaderValueStatics<D>::Parse(hstring_ref input) const
{
    Windows::Web::Http::Headers::HttpContentDispositionHeaderValue contentDispositionHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpContentDispositionHeaderValueStatics &>(static_cast<const D &>(*this))->abi_Parse(get(input), put(contentDispositionHeaderValue)));
    return contentDispositionHeaderValue;
}

template <typename D> bool impl_IHttpContentDispositionHeaderValueStatics<D>::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpContentDispositionHeaderValue & contentDispositionHeaderValue) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpContentDispositionHeaderValueStatics &>(static_cast<const D &>(*this))->abi_TryParse(get(input), put(contentDispositionHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpContentDispositionHeaderValue impl_IHttpContentDispositionHeaderValueFactory<D>::Create(hstring_ref dispositionType) const
{
    Windows::Web::Http::Headers::HttpContentDispositionHeaderValue contentDispositionHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpContentDispositionHeaderValueFactory &>(static_cast<const D &>(*this))->abi_Create(get(dispositionType), put(contentDispositionHeaderValue)));
    return contentDispositionHeaderValue;
}

template <typename D> hstring impl_IHttpContentDispositionHeaderValue<D>::DispositionType() const
{
    hstring value;
    check_hresult(static_cast<const IHttpContentDispositionHeaderValue &>(static_cast<const D &>(*this))->get_DispositionType(put(value)));
    return value;
}

template <typename D> void impl_IHttpContentDispositionHeaderValue<D>::DispositionType(hstring_ref value) const
{
    check_hresult(static_cast<const IHttpContentDispositionHeaderValue &>(static_cast<const D &>(*this))->put_DispositionType(get(value)));
}

template <typename D> hstring impl_IHttpContentDispositionHeaderValue<D>::FileName() const
{
    hstring value;
    check_hresult(static_cast<const IHttpContentDispositionHeaderValue &>(static_cast<const D &>(*this))->get_FileName(put(value)));
    return value;
}

template <typename D> void impl_IHttpContentDispositionHeaderValue<D>::FileName(hstring_ref value) const
{
    check_hresult(static_cast<const IHttpContentDispositionHeaderValue &>(static_cast<const D &>(*this))->put_FileName(get(value)));
}

template <typename D> hstring impl_IHttpContentDispositionHeaderValue<D>::FileNameStar() const
{
    hstring value;
    check_hresult(static_cast<const IHttpContentDispositionHeaderValue &>(static_cast<const D &>(*this))->get_FileNameStar(put(value)));
    return value;
}

template <typename D> void impl_IHttpContentDispositionHeaderValue<D>::FileNameStar(hstring_ref value) const
{
    check_hresult(static_cast<const IHttpContentDispositionHeaderValue &>(static_cast<const D &>(*this))->put_FileNameStar(get(value)));
}

template <typename D> hstring impl_IHttpContentDispositionHeaderValue<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IHttpContentDispositionHeaderValue &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> void impl_IHttpContentDispositionHeaderValue<D>::Name(hstring_ref value) const
{
    check_hresult(static_cast<const IHttpContentDispositionHeaderValue &>(static_cast<const D &>(*this))->put_Name(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue> impl_IHttpContentDispositionHeaderValue<D>::Parameters() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue> value;
    check_hresult(static_cast<const IHttpContentDispositionHeaderValue &>(static_cast<const D &>(*this))->get_Parameters(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint64_t> impl_IHttpContentDispositionHeaderValue<D>::Size() const
{
    Windows::Foundation::IReference<uint64_t> value;
    check_hresult(static_cast<const IHttpContentDispositionHeaderValue &>(static_cast<const D &>(*this))->get_Size(put(value)));
    return value;
}

template <typename D> void impl_IHttpContentDispositionHeaderValue<D>::Size(const Windows::Foundation::IReference<uint64_t> & value) const
{
    check_hresult(static_cast<const IHttpContentDispositionHeaderValue &>(static_cast<const D &>(*this))->put_Size(get(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpContentRangeHeaderValue impl_IHttpContentRangeHeaderValueStatics<D>::Parse(hstring_ref input) const
{
    Windows::Web::Http::Headers::HttpContentRangeHeaderValue contentRangeHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpContentRangeHeaderValueStatics &>(static_cast<const D &>(*this))->abi_Parse(get(input), put(contentRangeHeaderValue)));
    return contentRangeHeaderValue;
}

template <typename D> bool impl_IHttpContentRangeHeaderValueStatics<D>::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpContentRangeHeaderValue & contentRangeHeaderValue) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpContentRangeHeaderValueStatics &>(static_cast<const D &>(*this))->abi_TryParse(get(input), put(contentRangeHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpContentRangeHeaderValue impl_IHttpContentRangeHeaderValueFactory<D>::CreateFromLength(uint64_t length) const
{
    Windows::Web::Http::Headers::HttpContentRangeHeaderValue contentRangeHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpContentRangeHeaderValueFactory &>(static_cast<const D &>(*this))->abi_CreateFromLength(length, put(contentRangeHeaderValue)));
    return contentRangeHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpContentRangeHeaderValue impl_IHttpContentRangeHeaderValueFactory<D>::CreateFromRange(uint64_t from, uint64_t to) const
{
    Windows::Web::Http::Headers::HttpContentRangeHeaderValue contentRangeHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpContentRangeHeaderValueFactory &>(static_cast<const D &>(*this))->abi_CreateFromRange(from, to, put(contentRangeHeaderValue)));
    return contentRangeHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpContentRangeHeaderValue impl_IHttpContentRangeHeaderValueFactory<D>::CreateFromRangeWithLength(uint64_t from, uint64_t to, uint64_t length) const
{
    Windows::Web::Http::Headers::HttpContentRangeHeaderValue contentRangeHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpContentRangeHeaderValueFactory &>(static_cast<const D &>(*this))->abi_CreateFromRangeWithLength(from, to, length, put(contentRangeHeaderValue)));
    return contentRangeHeaderValue;
}

template <typename D> Windows::Foundation::IReference<uint64_t> impl_IHttpContentRangeHeaderValue<D>::FirstBytePosition() const
{
    Windows::Foundation::IReference<uint64_t> value;
    check_hresult(static_cast<const IHttpContentRangeHeaderValue &>(static_cast<const D &>(*this))->get_FirstBytePosition(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint64_t> impl_IHttpContentRangeHeaderValue<D>::LastBytePosition() const
{
    Windows::Foundation::IReference<uint64_t> value;
    check_hresult(static_cast<const IHttpContentRangeHeaderValue &>(static_cast<const D &>(*this))->get_LastBytePosition(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint64_t> impl_IHttpContentRangeHeaderValue<D>::Length() const
{
    Windows::Foundation::IReference<uint64_t> value;
    check_hresult(static_cast<const IHttpContentRangeHeaderValue &>(static_cast<const D &>(*this))->get_Length(put(value)));
    return value;
}

template <typename D> hstring impl_IHttpContentRangeHeaderValue<D>::Unit() const
{
    hstring value;
    check_hresult(static_cast<const IHttpContentRangeHeaderValue &>(static_cast<const D &>(*this))->get_Unit(put(value)));
    return value;
}

template <typename D> void impl_IHttpContentRangeHeaderValue<D>::Unit(hstring_ref value) const
{
    check_hresult(static_cast<const IHttpContentRangeHeaderValue &>(static_cast<const D &>(*this))->put_Unit(get(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpCookiePairHeaderValue impl_IHttpCookiePairHeaderValueStatics<D>::Parse(hstring_ref input) const
{
    Windows::Web::Http::Headers::HttpCookiePairHeaderValue cookiePairHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpCookiePairHeaderValueStatics &>(static_cast<const D &>(*this))->abi_Parse(get(input), put(cookiePairHeaderValue)));
    return cookiePairHeaderValue;
}

template <typename D> bool impl_IHttpCookiePairHeaderValueStatics<D>::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpCookiePairHeaderValue & cookiePairHeaderValue) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpCookiePairHeaderValueStatics &>(static_cast<const D &>(*this))->abi_TryParse(get(input), put(cookiePairHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpCookiePairHeaderValue impl_IHttpCookiePairHeaderValueFactory<D>::CreateFromName(hstring_ref name) const
{
    Windows::Web::Http::Headers::HttpCookiePairHeaderValue cookiePairHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpCookiePairHeaderValueFactory &>(static_cast<const D &>(*this))->abi_CreateFromName(get(name), put(cookiePairHeaderValue)));
    return cookiePairHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpCookiePairHeaderValue impl_IHttpCookiePairHeaderValueFactory<D>::CreateFromNameWithValue(hstring_ref name, hstring_ref value) const
{
    Windows::Web::Http::Headers::HttpCookiePairHeaderValue cookiePairHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpCookiePairHeaderValueFactory &>(static_cast<const D &>(*this))->abi_CreateFromNameWithValue(get(name), get(value), put(cookiePairHeaderValue)));
    return cookiePairHeaderValue;
}

template <typename D> hstring impl_IHttpCookiePairHeaderValue<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IHttpCookiePairHeaderValue &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> hstring impl_IHttpCookiePairHeaderValue<D>::Value() const
{
    hstring value;
    check_hresult(static_cast<const IHttpCookiePairHeaderValue &>(static_cast<const D &>(*this))->get_Value(put(value)));
    return value;
}

template <typename D> void impl_IHttpCookiePairHeaderValue<D>::Value(hstring_ref value) const
{
    check_hresult(static_cast<const IHttpCookiePairHeaderValue &>(static_cast<const D &>(*this))->put_Value(get(value)));
}

template <typename D> void impl_IHttpCookiePairHeaderValueCollection<D>::ParseAdd(hstring_ref input) const
{
    check_hresult(static_cast<const IHttpCookiePairHeaderValueCollection &>(static_cast<const D &>(*this))->abi_ParseAdd(get(input)));
}

template <typename D> bool impl_IHttpCookiePairHeaderValueCollection<D>::TryParseAdd(hstring_ref input) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpCookiePairHeaderValueCollection &>(static_cast<const D &>(*this))->abi_TryParseAdd(get(input), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue impl_IHttpDateOrDeltaHeaderValueStatics<D>::Parse(hstring_ref input) const
{
    Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue dateOrDeltaHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpDateOrDeltaHeaderValueStatics &>(static_cast<const D &>(*this))->abi_Parse(get(input), put(dateOrDeltaHeaderValue)));
    return dateOrDeltaHeaderValue;
}

template <typename D> bool impl_IHttpDateOrDeltaHeaderValueStatics<D>::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue & dateOrDeltaHeaderValue) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpDateOrDeltaHeaderValueStatics &>(static_cast<const D &>(*this))->abi_TryParse(get(input), put(dateOrDeltaHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IHttpDateOrDeltaHeaderValue<D>::Date() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IHttpDateOrDeltaHeaderValue &>(static_cast<const D &>(*this))->get_Date(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> impl_IHttpDateOrDeltaHeaderValue<D>::Delta() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value;
    check_hresult(static_cast<const IHttpDateOrDeltaHeaderValue &>(static_cast<const D &>(*this))->get_Delta(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpExpectationHeaderValue impl_IHttpExpectationHeaderValueStatics<D>::Parse(hstring_ref input) const
{
    Windows::Web::Http::Headers::HttpExpectationHeaderValue expectationHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpExpectationHeaderValueStatics &>(static_cast<const D &>(*this))->abi_Parse(get(input), put(expectationHeaderValue)));
    return expectationHeaderValue;
}

template <typename D> bool impl_IHttpExpectationHeaderValueStatics<D>::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpExpectationHeaderValue & expectationHeaderValue) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpExpectationHeaderValueStatics &>(static_cast<const D &>(*this))->abi_TryParse(get(input), put(expectationHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpExpectationHeaderValue impl_IHttpExpectationHeaderValueFactory<D>::CreateFromName(hstring_ref name) const
{
    Windows::Web::Http::Headers::HttpExpectationHeaderValue expectationHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpExpectationHeaderValueFactory &>(static_cast<const D &>(*this))->abi_CreateFromName(get(name), put(expectationHeaderValue)));
    return expectationHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpExpectationHeaderValue impl_IHttpExpectationHeaderValueFactory<D>::CreateFromNameWithValue(hstring_ref name, hstring_ref value) const
{
    Windows::Web::Http::Headers::HttpExpectationHeaderValue expectationHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpExpectationHeaderValueFactory &>(static_cast<const D &>(*this))->abi_CreateFromNameWithValue(get(name), get(value), put(expectationHeaderValue)));
    return expectationHeaderValue;
}

template <typename D> hstring impl_IHttpExpectationHeaderValue<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IHttpExpectationHeaderValue &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> hstring impl_IHttpExpectationHeaderValue<D>::Value() const
{
    hstring value;
    check_hresult(static_cast<const IHttpExpectationHeaderValue &>(static_cast<const D &>(*this))->get_Value(put(value)));
    return value;
}

template <typename D> void impl_IHttpExpectationHeaderValue<D>::Value(hstring_ref value) const
{
    check_hresult(static_cast<const IHttpExpectationHeaderValue &>(static_cast<const D &>(*this))->put_Value(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue> impl_IHttpExpectationHeaderValue<D>::Parameters() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue> value;
    check_hresult(static_cast<const IHttpExpectationHeaderValue &>(static_cast<const D &>(*this))->get_Parameters(put(value)));
    return value;
}

template <typename D> void impl_IHttpExpectationHeaderValueCollection<D>::ParseAdd(hstring_ref input) const
{
    check_hresult(static_cast<const IHttpExpectationHeaderValueCollection &>(static_cast<const D &>(*this))->abi_ParseAdd(get(input)));
}

template <typename D> bool impl_IHttpExpectationHeaderValueCollection<D>::TryParseAdd(hstring_ref input) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpExpectationHeaderValueCollection &>(static_cast<const D &>(*this))->abi_TryParseAdd(get(input), &succeeded));
    return succeeded;
}

template <typename D> void impl_IHttpLanguageHeaderValueCollection<D>::ParseAdd(hstring_ref input) const
{
    check_hresult(static_cast<const IHttpLanguageHeaderValueCollection &>(static_cast<const D &>(*this))->abi_ParseAdd(get(input)));
}

template <typename D> bool impl_IHttpLanguageHeaderValueCollection<D>::TryParseAdd(hstring_ref input) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpLanguageHeaderValueCollection &>(static_cast<const D &>(*this))->abi_TryParseAdd(get(input), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue impl_IHttpLanguageRangeWithQualityHeaderValueStatics<D>::Parse(hstring_ref input) const
{
    Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue languageRangeWithQualityHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpLanguageRangeWithQualityHeaderValueStatics &>(static_cast<const D &>(*this))->abi_Parse(get(input), put(languageRangeWithQualityHeaderValue)));
    return languageRangeWithQualityHeaderValue;
}

template <typename D> bool impl_IHttpLanguageRangeWithQualityHeaderValueStatics<D>::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue & languageRangeWithQualityHeaderValue) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpLanguageRangeWithQualityHeaderValueStatics &>(static_cast<const D &>(*this))->abi_TryParse(get(input), put(languageRangeWithQualityHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue impl_IHttpLanguageRangeWithQualityHeaderValueFactory<D>::CreateFromLanguageRange(hstring_ref languageRange) const
{
    Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue languageRangeWithQualityHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpLanguageRangeWithQualityHeaderValueFactory &>(static_cast<const D &>(*this))->abi_CreateFromLanguageRange(get(languageRange), put(languageRangeWithQualityHeaderValue)));
    return languageRangeWithQualityHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue impl_IHttpLanguageRangeWithQualityHeaderValueFactory<D>::CreateFromLanguageRangeWithQuality(hstring_ref languageRange, double quality) const
{
    Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue languageRangeWithQualityHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpLanguageRangeWithQualityHeaderValueFactory &>(static_cast<const D &>(*this))->abi_CreateFromLanguageRangeWithQuality(get(languageRange), quality, put(languageRangeWithQualityHeaderValue)));
    return languageRangeWithQualityHeaderValue;
}

template <typename D> hstring impl_IHttpLanguageRangeWithQualityHeaderValue<D>::LanguageRange() const
{
    hstring languageRange;
    check_hresult(static_cast<const IHttpLanguageRangeWithQualityHeaderValue &>(static_cast<const D &>(*this))->get_LanguageRange(put(languageRange)));
    return languageRange;
}

template <typename D> Windows::Foundation::IReference<double> impl_IHttpLanguageRangeWithQualityHeaderValue<D>::Quality() const
{
    Windows::Foundation::IReference<double> value;
    check_hresult(static_cast<const IHttpLanguageRangeWithQualityHeaderValue &>(static_cast<const D &>(*this))->get_Quality(put(value)));
    return value;
}

template <typename D> void impl_IHttpLanguageRangeWithQualityHeaderValueCollection<D>::ParseAdd(hstring_ref input) const
{
    check_hresult(static_cast<const IHttpLanguageRangeWithQualityHeaderValueCollection &>(static_cast<const D &>(*this))->abi_ParseAdd(get(input)));
}

template <typename D> bool impl_IHttpLanguageRangeWithQualityHeaderValueCollection<D>::TryParseAdd(hstring_ref input) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpLanguageRangeWithQualityHeaderValueCollection &>(static_cast<const D &>(*this))->abi_TryParseAdd(get(input), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpMediaTypeHeaderValue impl_IHttpMediaTypeHeaderValueStatics<D>::Parse(hstring_ref input) const
{
    Windows::Web::Http::Headers::HttpMediaTypeHeaderValue mediaTypeHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpMediaTypeHeaderValueStatics &>(static_cast<const D &>(*this))->abi_Parse(get(input), put(mediaTypeHeaderValue)));
    return mediaTypeHeaderValue;
}

template <typename D> bool impl_IHttpMediaTypeHeaderValueStatics<D>::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpMediaTypeHeaderValue & mediaTypeHeaderValue) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpMediaTypeHeaderValueStatics &>(static_cast<const D &>(*this))->abi_TryParse(get(input), put(mediaTypeHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpMediaTypeHeaderValue impl_IHttpMediaTypeHeaderValueFactory<D>::Create(hstring_ref mediaType) const
{
    Windows::Web::Http::Headers::HttpMediaTypeHeaderValue mediaTypeHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpMediaTypeHeaderValueFactory &>(static_cast<const D &>(*this))->abi_Create(get(mediaType), put(mediaTypeHeaderValue)));
    return mediaTypeHeaderValue;
}

template <typename D> hstring impl_IHttpMediaTypeHeaderValue<D>::CharSet() const
{
    hstring value;
    check_hresult(static_cast<const IHttpMediaTypeHeaderValue &>(static_cast<const D &>(*this))->get_CharSet(put(value)));
    return value;
}

template <typename D> void impl_IHttpMediaTypeHeaderValue<D>::CharSet(hstring_ref value) const
{
    check_hresult(static_cast<const IHttpMediaTypeHeaderValue &>(static_cast<const D &>(*this))->put_CharSet(get(value)));
}

template <typename D> hstring impl_IHttpMediaTypeHeaderValue<D>::MediaType() const
{
    hstring value;
    check_hresult(static_cast<const IHttpMediaTypeHeaderValue &>(static_cast<const D &>(*this))->get_MediaType(put(value)));
    return value;
}

template <typename D> void impl_IHttpMediaTypeHeaderValue<D>::MediaType(hstring_ref value) const
{
    check_hresult(static_cast<const IHttpMediaTypeHeaderValue &>(static_cast<const D &>(*this))->put_MediaType(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue> impl_IHttpMediaTypeHeaderValue<D>::Parameters() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue> value;
    check_hresult(static_cast<const IHttpMediaTypeHeaderValue &>(static_cast<const D &>(*this))->get_Parameters(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue impl_IHttpMediaTypeWithQualityHeaderValueStatics<D>::Parse(hstring_ref input) const
{
    Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue mediaTypeWithQualityHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpMediaTypeWithQualityHeaderValueStatics &>(static_cast<const D &>(*this))->abi_Parse(get(input), put(mediaTypeWithQualityHeaderValue)));
    return mediaTypeWithQualityHeaderValue;
}

template <typename D> bool impl_IHttpMediaTypeWithQualityHeaderValueStatics<D>::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue & mediaTypeWithQualityHeaderValue) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpMediaTypeWithQualityHeaderValueStatics &>(static_cast<const D &>(*this))->abi_TryParse(get(input), put(mediaTypeWithQualityHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue impl_IHttpMediaTypeWithQualityHeaderValueFactory<D>::CreateFromMediaType(hstring_ref mediaType) const
{
    Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue mediaTypeWithQualityHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpMediaTypeWithQualityHeaderValueFactory &>(static_cast<const D &>(*this))->abi_CreateFromMediaType(get(mediaType), put(mediaTypeWithQualityHeaderValue)));
    return mediaTypeWithQualityHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue impl_IHttpMediaTypeWithQualityHeaderValueFactory<D>::CreateFromMediaTypeWithQuality(hstring_ref mediaType, double quality) const
{
    Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue mediaTypeWithQualityHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpMediaTypeWithQualityHeaderValueFactory &>(static_cast<const D &>(*this))->abi_CreateFromMediaTypeWithQuality(get(mediaType), quality, put(mediaTypeWithQualityHeaderValue)));
    return mediaTypeWithQualityHeaderValue;
}

template <typename D> hstring impl_IHttpMediaTypeWithQualityHeaderValue<D>::CharSet() const
{
    hstring value;
    check_hresult(static_cast<const IHttpMediaTypeWithQualityHeaderValue &>(static_cast<const D &>(*this))->get_CharSet(put(value)));
    return value;
}

template <typename D> void impl_IHttpMediaTypeWithQualityHeaderValue<D>::CharSet(hstring_ref value) const
{
    check_hresult(static_cast<const IHttpMediaTypeWithQualityHeaderValue &>(static_cast<const D &>(*this))->put_CharSet(get(value)));
}

template <typename D> hstring impl_IHttpMediaTypeWithQualityHeaderValue<D>::MediaType() const
{
    hstring value;
    check_hresult(static_cast<const IHttpMediaTypeWithQualityHeaderValue &>(static_cast<const D &>(*this))->get_MediaType(put(value)));
    return value;
}

template <typename D> void impl_IHttpMediaTypeWithQualityHeaderValue<D>::MediaType(hstring_ref value) const
{
    check_hresult(static_cast<const IHttpMediaTypeWithQualityHeaderValue &>(static_cast<const D &>(*this))->put_MediaType(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue> impl_IHttpMediaTypeWithQualityHeaderValue<D>::Parameters() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue> value;
    check_hresult(static_cast<const IHttpMediaTypeWithQualityHeaderValue &>(static_cast<const D &>(*this))->get_Parameters(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> impl_IHttpMediaTypeWithQualityHeaderValue<D>::Quality() const
{
    Windows::Foundation::IReference<double> value;
    check_hresult(static_cast<const IHttpMediaTypeWithQualityHeaderValue &>(static_cast<const D &>(*this))->get_Quality(put(value)));
    return value;
}

template <typename D> void impl_IHttpMediaTypeWithQualityHeaderValue<D>::Quality(const Windows::Foundation::IReference<double> & value) const
{
    check_hresult(static_cast<const IHttpMediaTypeWithQualityHeaderValue &>(static_cast<const D &>(*this))->put_Quality(get(value)));
}

template <typename D> void impl_IHttpMediaTypeWithQualityHeaderValueCollection<D>::ParseAdd(hstring_ref input) const
{
    check_hresult(static_cast<const IHttpMediaTypeWithQualityHeaderValueCollection &>(static_cast<const D &>(*this))->abi_ParseAdd(get(input)));
}

template <typename D> bool impl_IHttpMediaTypeWithQualityHeaderValueCollection<D>::TryParseAdd(hstring_ref input) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpMediaTypeWithQualityHeaderValueCollection &>(static_cast<const D &>(*this))->abi_TryParseAdd(get(input), &succeeded));
    return succeeded;
}

template <typename D> void impl_IHttpMethodHeaderValueCollection<D>::ParseAdd(hstring_ref input) const
{
    check_hresult(static_cast<const IHttpMethodHeaderValueCollection &>(static_cast<const D &>(*this))->abi_ParseAdd(get(input)));
}

template <typename D> bool impl_IHttpMethodHeaderValueCollection<D>::TryParseAdd(hstring_ref input) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpMethodHeaderValueCollection &>(static_cast<const D &>(*this))->abi_TryParseAdd(get(input), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpNameValueHeaderValue impl_IHttpNameValueHeaderValueStatics<D>::Parse(hstring_ref input) const
{
    Windows::Web::Http::Headers::HttpNameValueHeaderValue nameValueHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpNameValueHeaderValueStatics &>(static_cast<const D &>(*this))->abi_Parse(get(input), put(nameValueHeaderValue)));
    return nameValueHeaderValue;
}

template <typename D> bool impl_IHttpNameValueHeaderValueStatics<D>::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpNameValueHeaderValue & nameValueHeaderValue) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpNameValueHeaderValueStatics &>(static_cast<const D &>(*this))->abi_TryParse(get(input), put(nameValueHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpNameValueHeaderValue impl_IHttpNameValueHeaderValueFactory<D>::CreateFromName(hstring_ref name) const
{
    Windows::Web::Http::Headers::HttpNameValueHeaderValue nameValueHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpNameValueHeaderValueFactory &>(static_cast<const D &>(*this))->abi_CreateFromName(get(name), put(nameValueHeaderValue)));
    return nameValueHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpNameValueHeaderValue impl_IHttpNameValueHeaderValueFactory<D>::CreateFromNameWithValue(hstring_ref name, hstring_ref value) const
{
    Windows::Web::Http::Headers::HttpNameValueHeaderValue nameValueHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpNameValueHeaderValueFactory &>(static_cast<const D &>(*this))->abi_CreateFromNameWithValue(get(name), get(value), put(nameValueHeaderValue)));
    return nameValueHeaderValue;
}

template <typename D> hstring impl_IHttpNameValueHeaderValue<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IHttpNameValueHeaderValue &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> hstring impl_IHttpNameValueHeaderValue<D>::Value() const
{
    hstring value;
    check_hresult(static_cast<const IHttpNameValueHeaderValue &>(static_cast<const D &>(*this))->get_Value(put(value)));
    return value;
}

template <typename D> void impl_IHttpNameValueHeaderValue<D>::Value(hstring_ref value) const
{
    check_hresult(static_cast<const IHttpNameValueHeaderValue &>(static_cast<const D &>(*this))->put_Value(get(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpProductHeaderValue impl_IHttpProductHeaderValueStatics<D>::Parse(hstring_ref input) const
{
    Windows::Web::Http::Headers::HttpProductHeaderValue productHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpProductHeaderValueStatics &>(static_cast<const D &>(*this))->abi_Parse(get(input), put(productHeaderValue)));
    return productHeaderValue;
}

template <typename D> bool impl_IHttpProductHeaderValueStatics<D>::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpProductHeaderValue & productHeaderValue) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpProductHeaderValueStatics &>(static_cast<const D &>(*this))->abi_TryParse(get(input), put(productHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpProductHeaderValue impl_IHttpProductHeaderValueFactory<D>::CreateFromName(hstring_ref productName) const
{
    Windows::Web::Http::Headers::HttpProductHeaderValue productHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpProductHeaderValueFactory &>(static_cast<const D &>(*this))->abi_CreateFromName(get(productName), put(productHeaderValue)));
    return productHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpProductHeaderValue impl_IHttpProductHeaderValueFactory<D>::CreateFromNameWithVersion(hstring_ref productName, hstring_ref productVersion) const
{
    Windows::Web::Http::Headers::HttpProductHeaderValue productHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpProductHeaderValueFactory &>(static_cast<const D &>(*this))->abi_CreateFromNameWithVersion(get(productName), get(productVersion), put(productHeaderValue)));
    return productHeaderValue;
}

template <typename D> hstring impl_IHttpProductHeaderValue<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IHttpProductHeaderValue &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> hstring impl_IHttpProductHeaderValue<D>::Version() const
{
    hstring value;
    check_hresult(static_cast<const IHttpProductHeaderValue &>(static_cast<const D &>(*this))->get_Version(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpProductInfoHeaderValue impl_IHttpProductInfoHeaderValueStatics<D>::Parse(hstring_ref input) const
{
    Windows::Web::Http::Headers::HttpProductInfoHeaderValue productInfoHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpProductInfoHeaderValueStatics &>(static_cast<const D &>(*this))->abi_Parse(get(input), put(productInfoHeaderValue)));
    return productInfoHeaderValue;
}

template <typename D> bool impl_IHttpProductInfoHeaderValueStatics<D>::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpProductInfoHeaderValue & productInfoHeaderValue) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpProductInfoHeaderValueStatics &>(static_cast<const D &>(*this))->abi_TryParse(get(input), put(productInfoHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpProductInfoHeaderValue impl_IHttpProductInfoHeaderValueFactory<D>::CreateFromComment(hstring_ref productComment) const
{
    Windows::Web::Http::Headers::HttpProductInfoHeaderValue productInfoHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpProductInfoHeaderValueFactory &>(static_cast<const D &>(*this))->abi_CreateFromComment(get(productComment), put(productInfoHeaderValue)));
    return productInfoHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpProductInfoHeaderValue impl_IHttpProductInfoHeaderValueFactory<D>::CreateFromNameWithVersion(hstring_ref productName, hstring_ref productVersion) const
{
    Windows::Web::Http::Headers::HttpProductInfoHeaderValue productInfoHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpProductInfoHeaderValueFactory &>(static_cast<const D &>(*this))->abi_CreateFromNameWithVersion(get(productName), get(productVersion), put(productInfoHeaderValue)));
    return productInfoHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpProductHeaderValue impl_IHttpProductInfoHeaderValue<D>::Product() const
{
    Windows::Web::Http::Headers::HttpProductHeaderValue value { nullptr };
    check_hresult(static_cast<const IHttpProductInfoHeaderValue &>(static_cast<const D &>(*this))->get_Product(put(value)));
    return value;
}

template <typename D> hstring impl_IHttpProductInfoHeaderValue<D>::Comment() const
{
    hstring value;
    check_hresult(static_cast<const IHttpProductInfoHeaderValue &>(static_cast<const D &>(*this))->get_Comment(put(value)));
    return value;
}

template <typename D> void impl_IHttpProductInfoHeaderValueCollection<D>::ParseAdd(hstring_ref input) const
{
    check_hresult(static_cast<const IHttpProductInfoHeaderValueCollection &>(static_cast<const D &>(*this))->abi_ParseAdd(get(input)));
}

template <typename D> bool impl_IHttpProductInfoHeaderValueCollection<D>::TryParseAdd(hstring_ref input) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpProductInfoHeaderValueCollection &>(static_cast<const D &>(*this))->abi_TryParseAdd(get(input), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue impl_IHttpContentCodingWithQualityHeaderValueStatics<D>::Parse(hstring_ref input) const
{
    Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue contentCodingWithQualityHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpContentCodingWithQualityHeaderValueStatics &>(static_cast<const D &>(*this))->abi_Parse(get(input), put(contentCodingWithQualityHeaderValue)));
    return contentCodingWithQualityHeaderValue;
}

template <typename D> bool impl_IHttpContentCodingWithQualityHeaderValueStatics<D>::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue & contentCodingWithQualityHeaderValue) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpContentCodingWithQualityHeaderValueStatics &>(static_cast<const D &>(*this))->abi_TryParse(get(input), put(contentCodingWithQualityHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue impl_IHttpContentCodingWithQualityHeaderValueFactory<D>::CreateFromValue(hstring_ref contentCoding) const
{
    Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue contentCodingWithQualityHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpContentCodingWithQualityHeaderValueFactory &>(static_cast<const D &>(*this))->abi_CreateFromValue(get(contentCoding), put(contentCodingWithQualityHeaderValue)));
    return contentCodingWithQualityHeaderValue;
}

template <typename D> Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue impl_IHttpContentCodingWithQualityHeaderValueFactory<D>::CreateFromValueWithQuality(hstring_ref contentCoding, double quality) const
{
    Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue contentCodingWithQualityHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpContentCodingWithQualityHeaderValueFactory &>(static_cast<const D &>(*this))->abi_CreateFromValueWithQuality(get(contentCoding), quality, put(contentCodingWithQualityHeaderValue)));
    return contentCodingWithQualityHeaderValue;
}

template <typename D> hstring impl_IHttpContentCodingWithQualityHeaderValue<D>::ContentCoding() const
{
    hstring value;
    check_hresult(static_cast<const IHttpContentCodingWithQualityHeaderValue &>(static_cast<const D &>(*this))->get_ContentCoding(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> impl_IHttpContentCodingWithQualityHeaderValue<D>::Quality() const
{
    Windows::Foundation::IReference<double> value;
    check_hresult(static_cast<const IHttpContentCodingWithQualityHeaderValue &>(static_cast<const D &>(*this))->get_Quality(put(value)));
    return value;
}

template <typename D> void impl_IHttpContentCodingWithQualityHeaderValueCollection<D>::ParseAdd(hstring_ref input) const
{
    check_hresult(static_cast<const IHttpContentCodingWithQualityHeaderValueCollection &>(static_cast<const D &>(*this))->abi_ParseAdd(get(input)));
}

template <typename D> bool impl_IHttpContentCodingWithQualityHeaderValueCollection<D>::TryParseAdd(hstring_ref input) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpContentCodingWithQualityHeaderValueCollection &>(static_cast<const D &>(*this))->abi_TryParseAdd(get(input), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpTransferCodingHeaderValue impl_IHttpTransferCodingHeaderValueStatics<D>::Parse(hstring_ref input) const
{
    Windows::Web::Http::Headers::HttpTransferCodingHeaderValue transferCodingHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpTransferCodingHeaderValueStatics &>(static_cast<const D &>(*this))->abi_Parse(get(input), put(transferCodingHeaderValue)));
    return transferCodingHeaderValue;
}

template <typename D> bool impl_IHttpTransferCodingHeaderValueStatics<D>::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpTransferCodingHeaderValue & transferCodingHeaderValue) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpTransferCodingHeaderValueStatics &>(static_cast<const D &>(*this))->abi_TryParse(get(input), put(transferCodingHeaderValue), &succeeded));
    return succeeded;
}

template <typename D> Windows::Web::Http::Headers::HttpTransferCodingHeaderValue impl_IHttpTransferCodingHeaderValueFactory<D>::Create(hstring_ref input) const
{
    Windows::Web::Http::Headers::HttpTransferCodingHeaderValue transferCodingHeaderValue { nullptr };
    check_hresult(static_cast<const IHttpTransferCodingHeaderValueFactory &>(static_cast<const D &>(*this))->abi_Create(get(input), put(transferCodingHeaderValue)));
    return transferCodingHeaderValue;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue> impl_IHttpTransferCodingHeaderValue<D>::Parameters() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Http::Headers::HttpNameValueHeaderValue> value;
    check_hresult(static_cast<const IHttpTransferCodingHeaderValue &>(static_cast<const D &>(*this))->get_Parameters(put(value)));
    return value;
}

template <typename D> hstring impl_IHttpTransferCodingHeaderValue<D>::Value() const
{
    hstring value;
    check_hresult(static_cast<const IHttpTransferCodingHeaderValue &>(static_cast<const D &>(*this))->get_Value(put(value)));
    return value;
}

template <typename D> void impl_IHttpTransferCodingHeaderValueCollection<D>::ParseAdd(hstring_ref input) const
{
    check_hresult(static_cast<const IHttpTransferCodingHeaderValueCollection &>(static_cast<const D &>(*this))->abi_ParseAdd(get(input)));
}

template <typename D> bool impl_IHttpTransferCodingHeaderValueCollection<D>::TryParseAdd(hstring_ref input) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpTransferCodingHeaderValueCollection &>(static_cast<const D &>(*this))->abi_TryParseAdd(get(input), &succeeded));
    return succeeded;
}

inline HttpChallengeHeaderValue::HttpChallengeHeaderValue(hstring_ref scheme) :
    HttpChallengeHeaderValue(get_activation_factory<HttpChallengeHeaderValue, IHttpChallengeHeaderValueFactory>().CreateFromScheme(scheme))
{}

inline HttpChallengeHeaderValue::HttpChallengeHeaderValue(hstring_ref scheme, hstring_ref token) :
    HttpChallengeHeaderValue(get_activation_factory<HttpChallengeHeaderValue, IHttpChallengeHeaderValueFactory>().CreateFromSchemeWithToken(scheme, token))
{}

inline Windows::Web::Http::Headers::HttpChallengeHeaderValue HttpChallengeHeaderValue::Parse(hstring_ref input)
{
    return get_activation_factory<HttpChallengeHeaderValue, IHttpChallengeHeaderValueStatics>().Parse(input);
}

inline bool HttpChallengeHeaderValue::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpChallengeHeaderValue & challengeHeaderValue)
{
    return get_activation_factory<HttpChallengeHeaderValue, IHttpChallengeHeaderValueStatics>().TryParse(input, challengeHeaderValue);
}

inline HttpConnectionOptionHeaderValue::HttpConnectionOptionHeaderValue(hstring_ref token) :
    HttpConnectionOptionHeaderValue(get_activation_factory<HttpConnectionOptionHeaderValue, IHttpConnectionOptionHeaderValueFactory>().Create(token))
{}

inline Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue HttpConnectionOptionHeaderValue::Parse(hstring_ref input)
{
    return get_activation_factory<HttpConnectionOptionHeaderValue, IHttpConnectionOptionHeaderValueStatics>().Parse(input);
}

inline bool HttpConnectionOptionHeaderValue::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpConnectionOptionHeaderValue & connectionOptionHeaderValue)
{
    return get_activation_factory<HttpConnectionOptionHeaderValue, IHttpConnectionOptionHeaderValueStatics>().TryParse(input, connectionOptionHeaderValue);
}

inline HttpContentCodingHeaderValue::HttpContentCodingHeaderValue(hstring_ref contentCoding) :
    HttpContentCodingHeaderValue(get_activation_factory<HttpContentCodingHeaderValue, IHttpContentCodingHeaderValueFactory>().Create(contentCoding))
{}

inline Windows::Web::Http::Headers::HttpContentCodingHeaderValue HttpContentCodingHeaderValue::Parse(hstring_ref input)
{
    return get_activation_factory<HttpContentCodingHeaderValue, IHttpContentCodingHeaderValueStatics>().Parse(input);
}

inline bool HttpContentCodingHeaderValue::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpContentCodingHeaderValue & contentCodingHeaderValue)
{
    return get_activation_factory<HttpContentCodingHeaderValue, IHttpContentCodingHeaderValueStatics>().TryParse(input, contentCodingHeaderValue);
}

inline HttpContentCodingWithQualityHeaderValue::HttpContentCodingWithQualityHeaderValue(hstring_ref contentCoding) :
    HttpContentCodingWithQualityHeaderValue(get_activation_factory<HttpContentCodingWithQualityHeaderValue, IHttpContentCodingWithQualityHeaderValueFactory>().CreateFromValue(contentCoding))
{}

inline HttpContentCodingWithQualityHeaderValue::HttpContentCodingWithQualityHeaderValue(hstring_ref contentCoding, double quality) :
    HttpContentCodingWithQualityHeaderValue(get_activation_factory<HttpContentCodingWithQualityHeaderValue, IHttpContentCodingWithQualityHeaderValueFactory>().CreateFromValueWithQuality(contentCoding, quality))
{}

inline Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue HttpContentCodingWithQualityHeaderValue::Parse(hstring_ref input)
{
    return get_activation_factory<HttpContentCodingWithQualityHeaderValue, IHttpContentCodingWithQualityHeaderValueStatics>().Parse(input);
}

inline bool HttpContentCodingWithQualityHeaderValue::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpContentCodingWithQualityHeaderValue & contentCodingWithQualityHeaderValue)
{
    return get_activation_factory<HttpContentCodingWithQualityHeaderValue, IHttpContentCodingWithQualityHeaderValueStatics>().TryParse(input, contentCodingWithQualityHeaderValue);
}

inline HttpContentDispositionHeaderValue::HttpContentDispositionHeaderValue(hstring_ref dispositionType) :
    HttpContentDispositionHeaderValue(get_activation_factory<HttpContentDispositionHeaderValue, IHttpContentDispositionHeaderValueFactory>().Create(dispositionType))
{}

inline Windows::Web::Http::Headers::HttpContentDispositionHeaderValue HttpContentDispositionHeaderValue::Parse(hstring_ref input)
{
    return get_activation_factory<HttpContentDispositionHeaderValue, IHttpContentDispositionHeaderValueStatics>().Parse(input);
}

inline bool HttpContentDispositionHeaderValue::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpContentDispositionHeaderValue & contentDispositionHeaderValue)
{
    return get_activation_factory<HttpContentDispositionHeaderValue, IHttpContentDispositionHeaderValueStatics>().TryParse(input, contentDispositionHeaderValue);
}

inline HttpContentHeaderCollection::HttpContentHeaderCollection() :
    HttpContentHeaderCollection(activate_instance<HttpContentHeaderCollection>())
{}

inline HttpContentRangeHeaderValue::HttpContentRangeHeaderValue(uint64_t length) :
    HttpContentRangeHeaderValue(get_activation_factory<HttpContentRangeHeaderValue, IHttpContentRangeHeaderValueFactory>().CreateFromLength(length))
{}

inline HttpContentRangeHeaderValue::HttpContentRangeHeaderValue(uint64_t from, uint64_t to) :
    HttpContentRangeHeaderValue(get_activation_factory<HttpContentRangeHeaderValue, IHttpContentRangeHeaderValueFactory>().CreateFromRange(from, to))
{}

inline HttpContentRangeHeaderValue::HttpContentRangeHeaderValue(uint64_t from, uint64_t to, uint64_t length) :
    HttpContentRangeHeaderValue(get_activation_factory<HttpContentRangeHeaderValue, IHttpContentRangeHeaderValueFactory>().CreateFromRangeWithLength(from, to, length))
{}

inline Windows::Web::Http::Headers::HttpContentRangeHeaderValue HttpContentRangeHeaderValue::Parse(hstring_ref input)
{
    return get_activation_factory<HttpContentRangeHeaderValue, IHttpContentRangeHeaderValueStatics>().Parse(input);
}

inline bool HttpContentRangeHeaderValue::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpContentRangeHeaderValue & contentRangeHeaderValue)
{
    return get_activation_factory<HttpContentRangeHeaderValue, IHttpContentRangeHeaderValueStatics>().TryParse(input, contentRangeHeaderValue);
}

inline HttpCookiePairHeaderValue::HttpCookiePairHeaderValue(hstring_ref name) :
    HttpCookiePairHeaderValue(get_activation_factory<HttpCookiePairHeaderValue, IHttpCookiePairHeaderValueFactory>().CreateFromName(name))
{}

inline HttpCookiePairHeaderValue::HttpCookiePairHeaderValue(hstring_ref name, hstring_ref value) :
    HttpCookiePairHeaderValue(get_activation_factory<HttpCookiePairHeaderValue, IHttpCookiePairHeaderValueFactory>().CreateFromNameWithValue(name, value))
{}

inline Windows::Web::Http::Headers::HttpCookiePairHeaderValue HttpCookiePairHeaderValue::Parse(hstring_ref input)
{
    return get_activation_factory<HttpCookiePairHeaderValue, IHttpCookiePairHeaderValueStatics>().Parse(input);
}

inline bool HttpCookiePairHeaderValue::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpCookiePairHeaderValue & cookiePairHeaderValue)
{
    return get_activation_factory<HttpCookiePairHeaderValue, IHttpCookiePairHeaderValueStatics>().TryParse(input, cookiePairHeaderValue);
}

inline HttpCredentialsHeaderValue::HttpCredentialsHeaderValue(hstring_ref scheme) :
    HttpCredentialsHeaderValue(get_activation_factory<HttpCredentialsHeaderValue, IHttpCredentialsHeaderValueFactory>().CreateFromScheme(scheme))
{}

inline HttpCredentialsHeaderValue::HttpCredentialsHeaderValue(hstring_ref scheme, hstring_ref token) :
    HttpCredentialsHeaderValue(get_activation_factory<HttpCredentialsHeaderValue, IHttpCredentialsHeaderValueFactory>().CreateFromSchemeWithToken(scheme, token))
{}

inline Windows::Web::Http::Headers::HttpCredentialsHeaderValue HttpCredentialsHeaderValue::Parse(hstring_ref input)
{
    return get_activation_factory<HttpCredentialsHeaderValue, IHttpCredentialsHeaderValueStatics>().Parse(input);
}

inline bool HttpCredentialsHeaderValue::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpCredentialsHeaderValue & credentialsHeaderValue)
{
    return get_activation_factory<HttpCredentialsHeaderValue, IHttpCredentialsHeaderValueStatics>().TryParse(input, credentialsHeaderValue);
}

inline Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue HttpDateOrDeltaHeaderValue::Parse(hstring_ref input)
{
    return get_activation_factory<HttpDateOrDeltaHeaderValue, IHttpDateOrDeltaHeaderValueStatics>().Parse(input);
}

inline bool HttpDateOrDeltaHeaderValue::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpDateOrDeltaHeaderValue & dateOrDeltaHeaderValue)
{
    return get_activation_factory<HttpDateOrDeltaHeaderValue, IHttpDateOrDeltaHeaderValueStatics>().TryParse(input, dateOrDeltaHeaderValue);
}

inline HttpExpectationHeaderValue::HttpExpectationHeaderValue(hstring_ref name) :
    HttpExpectationHeaderValue(get_activation_factory<HttpExpectationHeaderValue, IHttpExpectationHeaderValueFactory>().CreateFromName(name))
{}

inline HttpExpectationHeaderValue::HttpExpectationHeaderValue(hstring_ref name, hstring_ref value) :
    HttpExpectationHeaderValue(get_activation_factory<HttpExpectationHeaderValue, IHttpExpectationHeaderValueFactory>().CreateFromNameWithValue(name, value))
{}

inline Windows::Web::Http::Headers::HttpExpectationHeaderValue HttpExpectationHeaderValue::Parse(hstring_ref input)
{
    return get_activation_factory<HttpExpectationHeaderValue, IHttpExpectationHeaderValueStatics>().Parse(input);
}

inline bool HttpExpectationHeaderValue::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpExpectationHeaderValue & expectationHeaderValue)
{
    return get_activation_factory<HttpExpectationHeaderValue, IHttpExpectationHeaderValueStatics>().TryParse(input, expectationHeaderValue);
}

inline HttpLanguageRangeWithQualityHeaderValue::HttpLanguageRangeWithQualityHeaderValue(hstring_ref languageRange) :
    HttpLanguageRangeWithQualityHeaderValue(get_activation_factory<HttpLanguageRangeWithQualityHeaderValue, IHttpLanguageRangeWithQualityHeaderValueFactory>().CreateFromLanguageRange(languageRange))
{}

inline HttpLanguageRangeWithQualityHeaderValue::HttpLanguageRangeWithQualityHeaderValue(hstring_ref languageRange, double quality) :
    HttpLanguageRangeWithQualityHeaderValue(get_activation_factory<HttpLanguageRangeWithQualityHeaderValue, IHttpLanguageRangeWithQualityHeaderValueFactory>().CreateFromLanguageRangeWithQuality(languageRange, quality))
{}

inline Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue HttpLanguageRangeWithQualityHeaderValue::Parse(hstring_ref input)
{
    return get_activation_factory<HttpLanguageRangeWithQualityHeaderValue, IHttpLanguageRangeWithQualityHeaderValueStatics>().Parse(input);
}

inline bool HttpLanguageRangeWithQualityHeaderValue::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpLanguageRangeWithQualityHeaderValue & languageRangeWithQualityHeaderValue)
{
    return get_activation_factory<HttpLanguageRangeWithQualityHeaderValue, IHttpLanguageRangeWithQualityHeaderValueStatics>().TryParse(input, languageRangeWithQualityHeaderValue);
}

inline HttpMediaTypeHeaderValue::HttpMediaTypeHeaderValue(hstring_ref mediaType) :
    HttpMediaTypeHeaderValue(get_activation_factory<HttpMediaTypeHeaderValue, IHttpMediaTypeHeaderValueFactory>().Create(mediaType))
{}

inline Windows::Web::Http::Headers::HttpMediaTypeHeaderValue HttpMediaTypeHeaderValue::Parse(hstring_ref input)
{
    return get_activation_factory<HttpMediaTypeHeaderValue, IHttpMediaTypeHeaderValueStatics>().Parse(input);
}

inline bool HttpMediaTypeHeaderValue::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpMediaTypeHeaderValue & mediaTypeHeaderValue)
{
    return get_activation_factory<HttpMediaTypeHeaderValue, IHttpMediaTypeHeaderValueStatics>().TryParse(input, mediaTypeHeaderValue);
}

inline HttpMediaTypeWithQualityHeaderValue::HttpMediaTypeWithQualityHeaderValue(hstring_ref mediaType) :
    HttpMediaTypeWithQualityHeaderValue(get_activation_factory<HttpMediaTypeWithQualityHeaderValue, IHttpMediaTypeWithQualityHeaderValueFactory>().CreateFromMediaType(mediaType))
{}

inline HttpMediaTypeWithQualityHeaderValue::HttpMediaTypeWithQualityHeaderValue(hstring_ref mediaType, double quality) :
    HttpMediaTypeWithQualityHeaderValue(get_activation_factory<HttpMediaTypeWithQualityHeaderValue, IHttpMediaTypeWithQualityHeaderValueFactory>().CreateFromMediaTypeWithQuality(mediaType, quality))
{}

inline Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue HttpMediaTypeWithQualityHeaderValue::Parse(hstring_ref input)
{
    return get_activation_factory<HttpMediaTypeWithQualityHeaderValue, IHttpMediaTypeWithQualityHeaderValueStatics>().Parse(input);
}

inline bool HttpMediaTypeWithQualityHeaderValue::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpMediaTypeWithQualityHeaderValue & mediaTypeWithQualityHeaderValue)
{
    return get_activation_factory<HttpMediaTypeWithQualityHeaderValue, IHttpMediaTypeWithQualityHeaderValueStatics>().TryParse(input, mediaTypeWithQualityHeaderValue);
}

inline HttpNameValueHeaderValue::HttpNameValueHeaderValue(hstring_ref name) :
    HttpNameValueHeaderValue(get_activation_factory<HttpNameValueHeaderValue, IHttpNameValueHeaderValueFactory>().CreateFromName(name))
{}

inline HttpNameValueHeaderValue::HttpNameValueHeaderValue(hstring_ref name, hstring_ref value) :
    HttpNameValueHeaderValue(get_activation_factory<HttpNameValueHeaderValue, IHttpNameValueHeaderValueFactory>().CreateFromNameWithValue(name, value))
{}

inline Windows::Web::Http::Headers::HttpNameValueHeaderValue HttpNameValueHeaderValue::Parse(hstring_ref input)
{
    return get_activation_factory<HttpNameValueHeaderValue, IHttpNameValueHeaderValueStatics>().Parse(input);
}

inline bool HttpNameValueHeaderValue::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpNameValueHeaderValue & nameValueHeaderValue)
{
    return get_activation_factory<HttpNameValueHeaderValue, IHttpNameValueHeaderValueStatics>().TryParse(input, nameValueHeaderValue);
}

inline HttpProductHeaderValue::HttpProductHeaderValue(hstring_ref productName) :
    HttpProductHeaderValue(get_activation_factory<HttpProductHeaderValue, IHttpProductHeaderValueFactory>().CreateFromName(productName))
{}

inline HttpProductHeaderValue::HttpProductHeaderValue(hstring_ref productName, hstring_ref productVersion) :
    HttpProductHeaderValue(get_activation_factory<HttpProductHeaderValue, IHttpProductHeaderValueFactory>().CreateFromNameWithVersion(productName, productVersion))
{}

inline Windows::Web::Http::Headers::HttpProductHeaderValue HttpProductHeaderValue::Parse(hstring_ref input)
{
    return get_activation_factory<HttpProductHeaderValue, IHttpProductHeaderValueStatics>().Parse(input);
}

inline bool HttpProductHeaderValue::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpProductHeaderValue & productHeaderValue)
{
    return get_activation_factory<HttpProductHeaderValue, IHttpProductHeaderValueStatics>().TryParse(input, productHeaderValue);
}

inline HttpProductInfoHeaderValue::HttpProductInfoHeaderValue(hstring_ref productComment) :
    HttpProductInfoHeaderValue(get_activation_factory<HttpProductInfoHeaderValue, IHttpProductInfoHeaderValueFactory>().CreateFromComment(productComment))
{}

inline HttpProductInfoHeaderValue::HttpProductInfoHeaderValue(hstring_ref productName, hstring_ref productVersion) :
    HttpProductInfoHeaderValue(get_activation_factory<HttpProductInfoHeaderValue, IHttpProductInfoHeaderValueFactory>().CreateFromNameWithVersion(productName, productVersion))
{}

inline Windows::Web::Http::Headers::HttpProductInfoHeaderValue HttpProductInfoHeaderValue::Parse(hstring_ref input)
{
    return get_activation_factory<HttpProductInfoHeaderValue, IHttpProductInfoHeaderValueStatics>().Parse(input);
}

inline bool HttpProductInfoHeaderValue::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpProductInfoHeaderValue & productInfoHeaderValue)
{
    return get_activation_factory<HttpProductInfoHeaderValue, IHttpProductInfoHeaderValueStatics>().TryParse(input, productInfoHeaderValue);
}

inline HttpTransferCodingHeaderValue::HttpTransferCodingHeaderValue(hstring_ref input) :
    HttpTransferCodingHeaderValue(get_activation_factory<HttpTransferCodingHeaderValue, IHttpTransferCodingHeaderValueFactory>().Create(input))
{}

inline Windows::Web::Http::Headers::HttpTransferCodingHeaderValue HttpTransferCodingHeaderValue::Parse(hstring_ref input)
{
    return get_activation_factory<HttpTransferCodingHeaderValue, IHttpTransferCodingHeaderValueStatics>().Parse(input);
}

inline bool HttpTransferCodingHeaderValue::TryParse(hstring_ref input, Windows::Web::Http::Headers::HttpTransferCodingHeaderValue & transferCodingHeaderValue)
{
    return get_activation_factory<HttpTransferCodingHeaderValue, IHttpTransferCodingHeaderValueStatics>().TryParse(input, transferCodingHeaderValue);
}

}

}
