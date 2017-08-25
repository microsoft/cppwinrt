// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct DeferralCompletedHandler : Windows::Foundation::IUnknown
{
    DeferralCompletedHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> DeferralCompletedHandler(L lambda);
    template <typename F> DeferralCompletedHandler(F* function);
    template <typename O, typename M> DeferralCompletedHandler(O* object, M method);
    void operator()() const;
};

struct WINRT_EBO Deferral :
    Windows::Foundation::IDeferral
{
    Deferral(std::nullptr_t) noexcept {}
    Deferral(Windows::Foundation::DeferralCompletedHandler const& handler);
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
    static Windows::Foundation::IInspectable CreateEmpty();
    static Windows::Foundation::IInspectable CreateUInt8(uint8_t value);
    static Windows::Foundation::IInspectable CreateInt16(int16_t value);
    static Windows::Foundation::IInspectable CreateUInt16(uint16_t value);
    static Windows::Foundation::IInspectable CreateInt32(int32_t value);
    static Windows::Foundation::IInspectable CreateUInt32(uint32_t value);
    static Windows::Foundation::IInspectable CreateInt64(int64_t value);
    static Windows::Foundation::IInspectable CreateUInt64(uint64_t value);
    static Windows::Foundation::IInspectable CreateSingle(float value);
    static Windows::Foundation::IInspectable CreateDouble(double value);
    static Windows::Foundation::IInspectable CreateChar16(char16_t value);
    static Windows::Foundation::IInspectable CreateBoolean(bool value);
    static Windows::Foundation::IInspectable CreateString(param::hstring const& value);
    static Windows::Foundation::IInspectable CreateInspectable(Windows::Foundation::IInspectable const& value);
    static Windows::Foundation::IInspectable CreateGuid(GUID const& value);
    static Windows::Foundation::IInspectable CreateDateTime(Windows::Foundation::DateTime const& value);
    static Windows::Foundation::IInspectable CreateTimeSpan(Windows::Foundation::TimeSpan const& value);
    static Windows::Foundation::IInspectable CreatePoint(Windows::Foundation::Point const& value);
    static Windows::Foundation::IInspectable CreateSize(Windows::Foundation::Size const& value);
    static Windows::Foundation::IInspectable CreateRect(Windows::Foundation::Rect const& value);
    static Windows::Foundation::IInspectable CreateUInt8Array(array_view<uint8_t const> value);
    static Windows::Foundation::IInspectable CreateInt16Array(array_view<int16_t const> value);
    static Windows::Foundation::IInspectable CreateUInt16Array(array_view<uint16_t const> value);
    static Windows::Foundation::IInspectable CreateInt32Array(array_view<int32_t const> value);
    static Windows::Foundation::IInspectable CreateUInt32Array(array_view<uint32_t const> value);
    static Windows::Foundation::IInspectable CreateInt64Array(array_view<int64_t const> value);
    static Windows::Foundation::IInspectable CreateUInt64Array(array_view<uint64_t const> value);
    static Windows::Foundation::IInspectable CreateSingleArray(array_view<float const> value);
    static Windows::Foundation::IInspectable CreateDoubleArray(array_view<double const> value);
    static Windows::Foundation::IInspectable CreateChar16Array(array_view<char16_t const> value);
    static Windows::Foundation::IInspectable CreateBooleanArray(array_view<bool const> value);
    static Windows::Foundation::IInspectable CreateStringArray(array_view<hstring const> value);
    static Windows::Foundation::IInspectable CreateInspectableArray(array_view<Windows::Foundation::IInspectable const> value);
    static Windows::Foundation::IInspectable CreateGuidArray(array_view<GUID const> value);
    static Windows::Foundation::IInspectable CreateDateTimeArray(array_view<Windows::Foundation::DateTime const> value);
    static Windows::Foundation::IInspectable CreateTimeSpanArray(array_view<Windows::Foundation::TimeSpan const> value);
    static Windows::Foundation::IInspectable CreatePointArray(array_view<Windows::Foundation::Point const> value);
    static Windows::Foundation::IInspectable CreateSizeArray(array_view<Windows::Foundation::Size const> value);
    static Windows::Foundation::IInspectable CreateRectArray(array_view<Windows::Foundation::Rect const> value);
};

struct WINRT_EBO Uri :
    Windows::Foundation::IUriRuntimeClass,
    impl::require<Uri, Windows::Foundation::IStringable, Windows::Foundation::IUriRuntimeClassWithAbsoluteCanonicalUri>
{
    Uri(std::nullptr_t) noexcept {}
    Uri(param::hstring const& uri);
    Uri(param::hstring const& baseUri, param::hstring const& relativeUri);
    static hstring UnescapeComponent(param::hstring const& toUnescape);
    static hstring EscapeComponent(param::hstring const& toEscape);
};

struct WINRT_EBO WwwFormUrlDecoder :
    Windows::Foundation::IWwwFormUrlDecoderRuntimeClass
{
    WwwFormUrlDecoder(std::nullptr_t) noexcept {}
    WwwFormUrlDecoder(param::hstring const& query);
};

struct WINRT_EBO WwwFormUrlDecoderEntry :
    Windows::Foundation::IWwwFormUrlDecoderEntry
{
    WwwFormUrlDecoderEntry(std::nullptr_t) noexcept {}
};

}
