// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_b1f00d3b_1f06_5117_93ea_2a0d79116701
#define WINRT_GENERIC_b1f00d3b_1f06_5117_93ea_2a0d79116701
template <> struct __declspec(uuid("b1f00d3b-1f06-5117-93ea-2a0d79116701")) __declspec(novtable) IVectorView<Windows::Foundation::IWwwFormUrlDecoderEntry> : impl_IVectorView<Windows::Foundation::IWwwFormUrlDecoderEntry> {};
#endif

#ifndef WINRT_GENERIC_876be83b_7218_5bfb_a169_83152ef7e146
#define WINRT_GENERIC_876be83b_7218_5bfb_a169_83152ef7e146
template <> struct __declspec(uuid("876be83b-7218-5bfb-a169-83152ef7e146")) __declspec(novtable) IIterable<Windows::Foundation::IWwwFormUrlDecoderEntry> : impl_IIterable<Windows::Foundation::IWwwFormUrlDecoderEntry> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_f4637d4a_0760_5431_bfc0_24eb1d4f6c4f
#define WINRT_GENERIC_f4637d4a_0760_5431_bfc0_24eb1d4f6c4f
template <> struct __declspec(uuid("f4637d4a-0760-5431-bfc0-24eb1d4f6c4f")) __declspec(novtable) TypedEventHandler<Windows::Foundation::IMemoryBufferReference, Windows::IInspectable> : impl_TypedEventHandler<Windows::Foundation::IMemoryBufferReference, Windows::IInspectable> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_32e54295_373c_50cb_80a1_468a990ca780
#define WINRT_GENERIC_32e54295_373c_50cb_80a1_468a990ca780
template <> struct __declspec(uuid("32e54295-373c-50cb-80a1-468a990ca780")) __declspec(novtable) IIterator<Windows::Foundation::IWwwFormUrlDecoderEntry> : impl_IIterator<Windows::Foundation::IWwwFormUrlDecoderEntry> {};
#endif


}

namespace Windows::Foundation {

template <typename D>
struct WINRT_EBO impl_IClosable
{
    void Close() const;
};

template <typename D>
struct WINRT_EBO impl_IDeferral
{
    void Complete() const;
};

template <typename D>
struct WINRT_EBO impl_IDeferralFactory
{
    Windows::Foundation::Deferral Create(const Windows::Foundation::DeferralCompletedHandler & handler) const;
};

template <typename D>
struct WINRT_EBO impl_IGetActivationFactory
{
    Windows::IInspectable GetActivationFactory(hstring_ref activatableClassId) const;
};

template <typename D>
struct WINRT_EBO impl_IMemoryBuffer
{
    Windows::Foundation::IMemoryBufferReference CreateReference() const;
};

template <typename D>
struct WINRT_EBO impl_IMemoryBufferFactory
{
    Windows::Foundation::MemoryBuffer Create(uint32_t capacity) const;
};

template <typename D>
struct WINRT_EBO impl_IMemoryBufferReference
{
    uint32_t Capacity() const;
    event_token Closed(const Windows::Foundation::TypedEventHandler<Windows::Foundation::IMemoryBufferReference, Windows::IInspectable> & handler) const;
    using Closed_revoker = event_revoker<IMemoryBufferReference>;
    Closed_revoker Closed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Foundation::IMemoryBufferReference, Windows::IInspectable> & handler) const;
    void Closed(event_token cookie) const;
};

template <typename D>
struct WINRT_EBO impl_IPropertyValue
{
    Windows::Foundation::PropertyType Type() const;
    bool IsNumericScalar() const;
    uint8_t GetUInt8() const;
    int16_t GetInt16() const;
    uint16_t GetUInt16() const;
    int32_t GetInt32() const;
    uint32_t GetUInt32() const;
    int64_t GetInt64() const;
    uint64_t GetUInt64() const;
    float GetSingle() const;
    double GetDouble() const;
    wchar_t GetChar16() const;
    bool GetBoolean() const;
    hstring GetString() const;
    GUID GetGuid() const;
    Windows::Foundation::DateTime GetDateTime() const;
    Windows::Foundation::TimeSpan GetTimeSpan() const;
    Windows::Foundation::Point GetPoint() const;
    Windows::Foundation::Size GetSize() const;
    Windows::Foundation::Rect GetRect() const;
    void GetUInt8Array(com_array<uint8_t> & value) const;
    void GetInt16Array(com_array<int16_t> & value) const;
    void GetUInt16Array(com_array<uint16_t> & value) const;
    void GetInt32Array(com_array<int32_t> & value) const;
    void GetUInt32Array(com_array<uint32_t> & value) const;
    void GetInt64Array(com_array<int64_t> & value) const;
    void GetUInt64Array(com_array<uint64_t> & value) const;
    void GetSingleArray(com_array<float> & value) const;
    void GetDoubleArray(com_array<double> & value) const;
    void GetChar16Array(com_array<wchar_t> & value) const;
    void GetBooleanArray(com_array<bool> & value) const;
    void GetStringArray(com_array<hstring> & value) const;
    void GetInspectableArray(com_array<Windows::IInspectable> & value) const;
    void GetGuidArray(com_array<GUID> & value) const;
    void GetDateTimeArray(com_array<Windows::Foundation::DateTime> & value) const;
    void GetTimeSpanArray(com_array<Windows::Foundation::TimeSpan> & value) const;
    void GetPointArray(com_array<Windows::Foundation::Point> & value) const;
    void GetSizeArray(com_array<Windows::Foundation::Size> & value) const;
    void GetRectArray(com_array<Windows::Foundation::Rect> & value) const;
};

template <typename D>
struct WINRT_EBO impl_IPropertyValueStatics
{
    Windows::IInspectable CreateEmpty() const;
    Windows::IInspectable CreateUInt8(uint8_t value) const;
    Windows::IInspectable CreateInt16(int16_t value) const;
    Windows::IInspectable CreateUInt16(uint16_t value) const;
    Windows::IInspectable CreateInt32(int32_t value) const;
    Windows::IInspectable CreateUInt32(uint32_t value) const;
    Windows::IInspectable CreateInt64(int64_t value) const;
    Windows::IInspectable CreateUInt64(uint64_t value) const;
    Windows::IInspectable CreateSingle(float value) const;
    Windows::IInspectable CreateDouble(double value) const;
    Windows::IInspectable CreateChar16(wchar_t value) const;
    Windows::IInspectable CreateBoolean(bool value) const;
    Windows::IInspectable CreateString(hstring_ref value) const;
    Windows::IInspectable CreateInspectable(const Windows::IInspectable & value) const;
    Windows::IInspectable CreateGuid(GUID value) const;
    Windows::IInspectable CreateDateTime(const Windows::Foundation::DateTime & value) const;
    Windows::IInspectable CreateTimeSpan(const Windows::Foundation::TimeSpan & value) const;
    Windows::IInspectable CreatePoint(const Windows::Foundation::Point & value) const;
    Windows::IInspectable CreateSize(const Windows::Foundation::Size & value) const;
    Windows::IInspectable CreateRect(const Windows::Foundation::Rect & value) const;
    Windows::IInspectable CreateUInt8Array(array_ref<const uint8_t> value) const;
    Windows::IInspectable CreateInt16Array(array_ref<const int16_t> value) const;
    Windows::IInspectable CreateUInt16Array(array_ref<const uint16_t> value) const;
    Windows::IInspectable CreateInt32Array(array_ref<const int32_t> value) const;
    Windows::IInspectable CreateUInt32Array(array_ref<const uint32_t> value) const;
    Windows::IInspectable CreateInt64Array(array_ref<const int64_t> value) const;
    Windows::IInspectable CreateUInt64Array(array_ref<const uint64_t> value) const;
    Windows::IInspectable CreateSingleArray(array_ref<const float> value) const;
    Windows::IInspectable CreateDoubleArray(array_ref<const double> value) const;
    Windows::IInspectable CreateChar16Array(array_ref<const wchar_t> value) const;
    Windows::IInspectable CreateBooleanArray(array_ref<const bool> value) const;
    Windows::IInspectable CreateStringArray(array_ref<const hstring> value) const;
    Windows::IInspectable CreateInspectableArray(array_ref<const Windows::IInspectable> value) const;
    Windows::IInspectable CreateGuidArray(array_ref<const GUID> value) const;
    Windows::IInspectable CreateDateTimeArray(array_ref<const Windows::Foundation::DateTime> value) const;
    Windows::IInspectable CreateTimeSpanArray(array_ref<const Windows::Foundation::TimeSpan> value) const;
    Windows::IInspectable CreatePointArray(array_ref<const Windows::Foundation::Point> value) const;
    Windows::IInspectable CreateSizeArray(array_ref<const Windows::Foundation::Size> value) const;
    Windows::IInspectable CreateRectArray(array_ref<const Windows::Foundation::Rect> value) const;
};

template <typename D>
struct WINRT_EBO impl_IStringable
{
    hstring ToString() const;
};

template <typename D>
struct WINRT_EBO impl_IUriEscapeStatics
{
    hstring UnescapeComponent(hstring_ref toUnescape) const;
    hstring EscapeComponent(hstring_ref toEscape) const;
};

template <typename D>
struct WINRT_EBO impl_IUriRuntimeClass
{
    hstring AbsoluteUri() const;
    hstring DisplayUri() const;
    hstring Domain() const;
    hstring Extension() const;
    hstring Fragment() const;
    hstring Host() const;
    hstring Password() const;
    hstring Path() const;
    hstring Query() const;
    Windows::Foundation::WwwFormUrlDecoder QueryParsed() const;
    hstring RawUri() const;
    hstring SchemeName() const;
    hstring UserName() const;
    int32_t Port() const;
    bool Suspicious() const;
    bool Equals(const Windows::Foundation::Uri & pUri) const;
    Windows::Foundation::Uri CombineUri(hstring_ref relativeUri) const;
};

template <typename D>
struct WINRT_EBO impl_IUriRuntimeClassFactory
{
    Windows::Foundation::Uri CreateUri(hstring_ref uri) const;
    Windows::Foundation::Uri CreateWithRelativeUri(hstring_ref baseUri, hstring_ref relativeUri) const;
};

template <typename D>
struct WINRT_EBO impl_IUriRuntimeClassWithAbsoluteCanonicalUri
{
    hstring AbsoluteCanonicalUri() const;
    hstring DisplayIri() const;
};

template <typename D>
struct WINRT_EBO impl_IWwwFormUrlDecoderEntry
{
    hstring Name() const;
    hstring Value() const;
};

template <typename D>
struct WINRT_EBO impl_IWwwFormUrlDecoderRuntimeClass
{
    hstring GetFirstValueByName(hstring_ref name) const;
};

template <typename D>
struct WINRT_EBO impl_IWwwFormUrlDecoderRuntimeClassFactory
{
    Windows::Foundation::WwwFormUrlDecoder CreateWwwFormUrlDecoder(hstring_ref query) const;
};

struct DeferralCompletedHandler : Windows::IUnknown
{
    DeferralCompletedHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<DeferralCompletedHandler>(m_ptr); }
    template <typename L> DeferralCompletedHandler(L lambda);
    template <typename F> DeferralCompletedHandler (F * function);
    template <typename O, typename M> DeferralCompletedHandler(O * object, M method);
    void operator()() const;
};

struct IClosable :
    Windows::IInspectable,
    impl::consume<IClosable>
{
    IClosable(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IClosable>(m_ptr); }
};

struct IDeferral :
    Windows::IInspectable,
    impl::consume<IDeferral>,
    impl::require<IDeferral, Windows::Foundation::IClosable>
{
    IDeferral(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeferral>(m_ptr); }
};

struct IDeferralFactory :
    Windows::IInspectable,
    impl::consume<IDeferralFactory>
{
    IDeferralFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeferralFactory>(m_ptr); }
};

struct IGetActivationFactory :
    Windows::IInspectable,
    impl::consume<IGetActivationFactory>
{
    IGetActivationFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGetActivationFactory>(m_ptr); }
};

struct IMemoryBuffer :
    Windows::IInspectable,
    impl::consume<IMemoryBuffer>,
    impl::require<IMemoryBuffer, Windows::Foundation::IClosable>
{
    IMemoryBuffer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMemoryBuffer>(m_ptr); }
};

struct IMemoryBufferFactory :
    Windows::IInspectable,
    impl::consume<IMemoryBufferFactory>
{
    IMemoryBufferFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMemoryBufferFactory>(m_ptr); }
};

struct IMemoryBufferReference :
    Windows::IInspectable,
    impl::consume<IMemoryBufferReference>,
    impl::require<IMemoryBufferReference, Windows::Foundation::IClosable>
{
    IMemoryBufferReference(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMemoryBufferReference>(m_ptr); }
};

struct IPropertyValue :
    Windows::IInspectable,
    impl::consume<IPropertyValue>
{
    IPropertyValue(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPropertyValue>(m_ptr); }
};

struct IPropertyValueStatics :
    Windows::IInspectable,
    impl::consume<IPropertyValueStatics>
{
    IPropertyValueStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPropertyValueStatics>(m_ptr); }
};

struct IStringable :
    Windows::IInspectable,
    impl::consume<IStringable>
{
    IStringable(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IStringable>(m_ptr); }
};

struct IUriEscapeStatics :
    Windows::IInspectable,
    impl::consume<IUriEscapeStatics>
{
    IUriEscapeStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IUriEscapeStatics>(m_ptr); }
};

struct IUriRuntimeClass :
    Windows::IInspectable,
    impl::consume<IUriRuntimeClass>
{
    IUriRuntimeClass(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IUriRuntimeClass>(m_ptr); }
};

struct IUriRuntimeClassFactory :
    Windows::IInspectable,
    impl::consume<IUriRuntimeClassFactory>
{
    IUriRuntimeClassFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IUriRuntimeClassFactory>(m_ptr); }
};

struct IUriRuntimeClassWithAbsoluteCanonicalUri :
    Windows::IInspectable,
    impl::consume<IUriRuntimeClassWithAbsoluteCanonicalUri>
{
    IUriRuntimeClassWithAbsoluteCanonicalUri(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IUriRuntimeClassWithAbsoluteCanonicalUri>(m_ptr); }
};

struct IWwwFormUrlDecoderEntry :
    Windows::IInspectable,
    impl::consume<IWwwFormUrlDecoderEntry>
{
    IWwwFormUrlDecoderEntry(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWwwFormUrlDecoderEntry>(m_ptr); }
};

struct IWwwFormUrlDecoderRuntimeClass :
    Windows::IInspectable,
    impl::consume<IWwwFormUrlDecoderRuntimeClass>,
    impl::require<IWwwFormUrlDecoderRuntimeClass, Windows::Foundation::Collections::IIterable<Windows::Foundation::IWwwFormUrlDecoderEntry>, Windows::Foundation::Collections::IVectorView<Windows::Foundation::IWwwFormUrlDecoderEntry>>
{
    IWwwFormUrlDecoderRuntimeClass(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWwwFormUrlDecoderRuntimeClass>(m_ptr); }
};

struct IWwwFormUrlDecoderRuntimeClassFactory :
    Windows::IInspectable,
    impl::consume<IWwwFormUrlDecoderRuntimeClassFactory>
{
    IWwwFormUrlDecoderRuntimeClassFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWwwFormUrlDecoderRuntimeClassFactory>(m_ptr); }
};

}

}
