// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Foundation.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Foundation {

template <typename H> struct impl_DeferralCompletedHandler : implements<impl_DeferralCompletedHandler<H>, abi<DeferralCompletedHandler>>, H
{
    impl_DeferralCompletedHandler(H && handler) : H(std::forward<H>(handler)) {}

    HRESULT __stdcall abi_Invoke() noexcept override
    {
        try
        {
            (*this)();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Foundation {

struct WINRT_EBO Deferral :
    Windows::Foundation::IDeferral
{
    Deferral(std::nullptr_t) noexcept {}
    Deferral(const Windows::Foundation::DeferralCompletedHandler & handler);
};

struct WINRT_EBO MemoryBuffer :
    Windows::Foundation::IMemoryBuffer
{
    MemoryBuffer(std::nullptr_t) noexcept {}
    MemoryBuffer(uint32_t capacity);
};

struct PropertyValue
{
    PropertyValue() = delete;
    static Windows::IInspectable CreateEmpty();
    static Windows::IInspectable CreateUInt8(uint8_t value);
    static Windows::IInspectable CreateInt16(int16_t value);
    static Windows::IInspectable CreateUInt16(uint16_t value);
    static Windows::IInspectable CreateInt32(int32_t value);
    static Windows::IInspectable CreateUInt32(uint32_t value);
    static Windows::IInspectable CreateInt64(int64_t value);
    static Windows::IInspectable CreateUInt64(uint64_t value);
    static Windows::IInspectable CreateSingle(float value);
    static Windows::IInspectable CreateDouble(double value);
    static Windows::IInspectable CreateChar16(wchar_t value);
    static Windows::IInspectable CreateBoolean(bool value);
    static Windows::IInspectable CreateString(hstring_ref value);
    static Windows::IInspectable CreateInspectable(const Windows::IInspectable & value);
    static Windows::IInspectable CreateGuid(GUID value);
    static Windows::IInspectable CreateDateTime(const Windows::Foundation::DateTime & value);
    static Windows::IInspectable CreateTimeSpan(const Windows::Foundation::TimeSpan & value);
    static Windows::IInspectable CreatePoint(const Windows::Foundation::Point & value);
    static Windows::IInspectable CreateSize(const Windows::Foundation::Size & value);
    static Windows::IInspectable CreateRect(const Windows::Foundation::Rect & value);
    static Windows::IInspectable CreateUInt8Array(array_ref<const uint8_t> value);
    static Windows::IInspectable CreateInt16Array(array_ref<const int16_t> value);
    static Windows::IInspectable CreateUInt16Array(array_ref<const uint16_t> value);
    static Windows::IInspectable CreateInt32Array(array_ref<const int32_t> value);
    static Windows::IInspectable CreateUInt32Array(array_ref<const uint32_t> value);
    static Windows::IInspectable CreateInt64Array(array_ref<const int64_t> value);
    static Windows::IInspectable CreateUInt64Array(array_ref<const uint64_t> value);
    static Windows::IInspectable CreateSingleArray(array_ref<const float> value);
    static Windows::IInspectable CreateDoubleArray(array_ref<const double> value);
    static Windows::IInspectable CreateChar16Array(array_ref<const wchar_t> value);
    static Windows::IInspectable CreateBooleanArray(array_ref<const bool> value);
    static Windows::IInspectable CreateStringArray(array_ref<const hstring> value);
    static Windows::IInspectable CreateInspectableArray(array_ref<const Windows::IInspectable> value);
    static Windows::IInspectable CreateGuidArray(array_ref<const GUID> value);
    static Windows::IInspectable CreateDateTimeArray(array_ref<const Windows::Foundation::DateTime> value);
    static Windows::IInspectable CreateTimeSpanArray(array_ref<const Windows::Foundation::TimeSpan> value);
    static Windows::IInspectable CreatePointArray(array_ref<const Windows::Foundation::Point> value);
    static Windows::IInspectable CreateSizeArray(array_ref<const Windows::Foundation::Size> value);
    static Windows::IInspectable CreateRectArray(array_ref<const Windows::Foundation::Rect> value);
};

struct WINRT_EBO Uri :
    Windows::Foundation::IUriRuntimeClass,
    impl::require<Uri, Windows::Foundation::IStringable, Windows::Foundation::IUriRuntimeClassWithAbsoluteCanonicalUri>
{
    Uri(std::nullptr_t) noexcept {}
    Uri(hstring_ref uri);
    Uri(hstring_ref baseUri, hstring_ref relativeUri);
    static hstring UnescapeComponent(hstring_ref toUnescape);
    static hstring EscapeComponent(hstring_ref toEscape);
};

struct WINRT_EBO WwwFormUrlDecoder :
    Windows::Foundation::IWwwFormUrlDecoderRuntimeClass
{
    WwwFormUrlDecoder(std::nullptr_t) noexcept {}
    WwwFormUrlDecoder(hstring_ref query);
};

struct WINRT_EBO WwwFormUrlDecoderEntry :
    Windows::Foundation::IWwwFormUrlDecoderEntry
{
    WwwFormUrlDecoderEntry(std::nullptr_t) noexcept {}
};

}

}
