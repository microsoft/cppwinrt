// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

struct Rect
{
    float X;
    float Y;
    float Width;
    float Height;
};

struct DateTime
{
    int64_t UniversalTime;
};

}

namespace Windows::Foundation {

using Rect = ABI::Windows::Foundation::Rect;
using DateTime = ABI::Windows::Foundation::DateTime;

}

namespace ABI::Windows::Foundation {

struct __declspec(uuid("ed32a372-f3c8-4faa-9cfb-470148da3888")) __declspec(novtable) DeferralCompletedHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke() = 0;
};

struct __declspec(uuid("30d5a829-7fa4-4026-83bb-d75bae4ea99e")) __declspec(novtable) IClosable : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Close() = 0;
};

struct __declspec(uuid("d6269732-3b7f-46a7-b40b-4fdca2a2c693")) __declspec(novtable) IDeferral : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Complete() = 0;
};

struct __declspec(uuid("65a1ecc5-3fb5-4832-8ca9-f061b281d13a")) __declspec(novtable) IDeferralFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(Windows::Foundation::DeferralCompletedHandler * handler, Windows::Foundation::IDeferral ** result) = 0;
};

struct __declspec(uuid("4edb8ee2-96dd-49a7-94f7-4607ddab8e3c")) __declspec(novtable) IGetActivationFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetActivationFactory(hstring activatableClassId, Windows::IInspectable ** factory) = 0;
};

struct __declspec(uuid("fbc4dd2a-245b-11e4-af98-689423260cf8")) __declspec(novtable) IMemoryBuffer : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateReference(Windows::Foundation::IMemoryBufferReference ** reference) = 0;
};

struct __declspec(uuid("fbc4dd2b-245b-11e4-af98-689423260cf8")) __declspec(novtable) IMemoryBufferFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(uint32_t capacity, Windows::Foundation::IMemoryBuffer ** value) = 0;
};

struct __declspec(uuid("fbc4dd29-245b-11e4-af98-689423260cf8")) __declspec(novtable) IMemoryBufferReference : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Capacity(uint32_t * value) = 0;
    virtual HRESULT __stdcall add_Closed(Windows::Foundation::TypedEventHandler<Windows::Foundation::IMemoryBufferReference, Windows::IInspectable> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_Closed(event_token cookie) = 0;
};

struct __declspec(uuid("4bd682dd-7554-40e9-9a9b-82654ede7e62")) __declspec(novtable) IPropertyValue : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Type(winrt::Windows::Foundation::PropertyType * value) = 0;
    virtual HRESULT __stdcall get_IsNumericScalar(bool * value) = 0;
    virtual HRESULT __stdcall abi_GetUInt8(uint8_t * value) = 0;
    virtual HRESULT __stdcall abi_GetInt16(int16_t * value) = 0;
    virtual HRESULT __stdcall abi_GetUInt16(uint16_t * value) = 0;
    virtual HRESULT __stdcall abi_GetInt32(int32_t * value) = 0;
    virtual HRESULT __stdcall abi_GetUInt32(uint32_t * value) = 0;
    virtual HRESULT __stdcall abi_GetInt64(int64_t * value) = 0;
    virtual HRESULT __stdcall abi_GetUInt64(uint64_t * value) = 0;
    virtual HRESULT __stdcall abi_GetSingle(float * value) = 0;
    virtual HRESULT __stdcall abi_GetDouble(double * value) = 0;
    virtual HRESULT __stdcall abi_GetChar16(wchar_t * value) = 0;
    virtual HRESULT __stdcall abi_GetBoolean(bool * value) = 0;
    virtual HRESULT __stdcall abi_GetString(hstring * value) = 0;
    virtual HRESULT __stdcall abi_GetGuid(GUID * value) = 0;
    virtual HRESULT __stdcall abi_GetDateTime(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall abi_GetTimeSpan(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall abi_GetPoint(Windows::Foundation::Point * value) = 0;
    virtual HRESULT __stdcall abi_GetSize(Windows::Foundation::Size * value) = 0;
    virtual HRESULT __stdcall abi_GetRect(Windows::Foundation::Rect * value) = 0;
    virtual HRESULT __stdcall abi_GetUInt8Array(uint32_t * __valueSize, uint8_t ** value) = 0;
    virtual HRESULT __stdcall abi_GetInt16Array(uint32_t * __valueSize, int16_t ** value) = 0;
    virtual HRESULT __stdcall abi_GetUInt16Array(uint32_t * __valueSize, uint16_t ** value) = 0;
    virtual HRESULT __stdcall abi_GetInt32Array(uint32_t * __valueSize, int32_t ** value) = 0;
    virtual HRESULT __stdcall abi_GetUInt32Array(uint32_t * __valueSize, uint32_t ** value) = 0;
    virtual HRESULT __stdcall abi_GetInt64Array(uint32_t * __valueSize, int64_t ** value) = 0;
    virtual HRESULT __stdcall abi_GetUInt64Array(uint32_t * __valueSize, uint64_t ** value) = 0;
    virtual HRESULT __stdcall abi_GetSingleArray(uint32_t * __valueSize, float ** value) = 0;
    virtual HRESULT __stdcall abi_GetDoubleArray(uint32_t * __valueSize, double ** value) = 0;
    virtual HRESULT __stdcall abi_GetChar16Array(uint32_t * __valueSize, wchar_t ** value) = 0;
    virtual HRESULT __stdcall abi_GetBooleanArray(uint32_t * __valueSize, bool ** value) = 0;
    virtual HRESULT __stdcall abi_GetStringArray(uint32_t * __valueSize, hstring ** value) = 0;
    virtual HRESULT __stdcall abi_GetInspectableArray(uint32_t * __valueSize, Windows::IInspectable *** value) = 0;
    virtual HRESULT __stdcall abi_GetGuidArray(uint32_t * __valueSize, GUID ** value) = 0;
    virtual HRESULT __stdcall abi_GetDateTimeArray(uint32_t * __valueSize, Windows::Foundation::DateTime ** value) = 0;
    virtual HRESULT __stdcall abi_GetTimeSpanArray(uint32_t * __valueSize, Windows::Foundation::TimeSpan ** value) = 0;
    virtual HRESULT __stdcall abi_GetPointArray(uint32_t * __valueSize, Windows::Foundation::Point ** value) = 0;
    virtual HRESULT __stdcall abi_GetSizeArray(uint32_t * __valueSize, Windows::Foundation::Size ** value) = 0;
    virtual HRESULT __stdcall abi_GetRectArray(uint32_t * __valueSize, Windows::Foundation::Rect ** value) = 0;
};

struct __declspec(uuid("629bdbc8-d932-4ff4-96b9-8d96c5c1e858")) __declspec(novtable) IPropertyValueStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateEmpty(Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateUInt8(uint8_t value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateInt16(int16_t value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateUInt16(uint16_t value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateInt32(int32_t value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateUInt32(uint32_t value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateInt64(int64_t value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateUInt64(uint64_t value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateSingle(float value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateDouble(double value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateChar16(wchar_t value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateBoolean(bool value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateString(hstring value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateInspectable(Windows::IInspectable * value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateGuid(GUID value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateDateTime(Windows::Foundation::DateTime value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateTimeSpan(Windows::Foundation::TimeSpan value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreatePoint(Windows::Foundation::Point value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateSize(Windows::Foundation::Size value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateRect(Windows::Foundation::Rect value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateUInt8Array(uint32_t __valueSize, uint8_t * value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateInt16Array(uint32_t __valueSize, int16_t * value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateUInt16Array(uint32_t __valueSize, uint16_t * value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateInt32Array(uint32_t __valueSize, int32_t * value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateUInt32Array(uint32_t __valueSize, uint32_t * value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateInt64Array(uint32_t __valueSize, int64_t * value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateUInt64Array(uint32_t __valueSize, uint64_t * value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateSingleArray(uint32_t __valueSize, float * value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateDoubleArray(uint32_t __valueSize, double * value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateChar16Array(uint32_t __valueSize, wchar_t * value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateBooleanArray(uint32_t __valueSize, bool * value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateStringArray(uint32_t __valueSize, hstring * value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateInspectableArray(uint32_t __valueSize, Windows::IInspectable ** value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateGuidArray(uint32_t __valueSize, GUID * value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateDateTimeArray(uint32_t __valueSize, Windows::Foundation::DateTime * value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateTimeSpanArray(uint32_t __valueSize, Windows::Foundation::TimeSpan * value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreatePointArray(uint32_t __valueSize, Windows::Foundation::Point * value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateSizeArray(uint32_t __valueSize, Windows::Foundation::Size * value, Windows::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall abi_CreateRectArray(uint32_t __valueSize, Windows::Foundation::Rect * value, Windows::IInspectable ** propertyValue) = 0;
};

struct __declspec(uuid("96369f54-8eb6-48f0-abce-c1b211e627c3")) __declspec(novtable) IStringable : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_ToString(hstring * value) = 0;
};

struct __declspec(uuid("c1d432ba-c824-4452-a7fd-512bc3bbe9a1")) __declspec(novtable) IUriEscapeStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_UnescapeComponent(hstring toUnescape, hstring * value) = 0;
    virtual HRESULT __stdcall abi_EscapeComponent(hstring toEscape, hstring * value) = 0;
};

struct __declspec(uuid("9e365e57-48b2-4160-956f-c7385120bbfc")) __declspec(novtable) IUriRuntimeClass : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AbsoluteUri(hstring * value) = 0;
    virtual HRESULT __stdcall get_DisplayUri(hstring * value) = 0;
    virtual HRESULT __stdcall get_Domain(hstring * value) = 0;
    virtual HRESULT __stdcall get_Extension(hstring * value) = 0;
    virtual HRESULT __stdcall get_Fragment(hstring * value) = 0;
    virtual HRESULT __stdcall get_Host(hstring * value) = 0;
    virtual HRESULT __stdcall get_Password(hstring * value) = 0;
    virtual HRESULT __stdcall get_Path(hstring * value) = 0;
    virtual HRESULT __stdcall get_Query(hstring * value) = 0;
    virtual HRESULT __stdcall get_QueryParsed(Windows::Foundation::IWwwFormUrlDecoderRuntimeClass ** ppWwwFormUrlDecoder) = 0;
    virtual HRESULT __stdcall get_RawUri(hstring * value) = 0;
    virtual HRESULT __stdcall get_SchemeName(hstring * value) = 0;
    virtual HRESULT __stdcall get_UserName(hstring * value) = 0;
    virtual HRESULT __stdcall get_Port(int32_t * value) = 0;
    virtual HRESULT __stdcall get_Suspicious(bool * value) = 0;
    virtual HRESULT __stdcall abi_Equals(Windows::Foundation::IUriRuntimeClass * pUri, bool * value) = 0;
    virtual HRESULT __stdcall abi_CombineUri(hstring relativeUri, Windows::Foundation::IUriRuntimeClass ** instance) = 0;
};

struct __declspec(uuid("44a9796f-723e-4fdf-a218-033e75b0c084")) __declspec(novtable) IUriRuntimeClassFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateUri(hstring uri, Windows::Foundation::IUriRuntimeClass ** instance) = 0;
    virtual HRESULT __stdcall abi_CreateWithRelativeUri(hstring baseUri, hstring relativeUri, Windows::Foundation::IUriRuntimeClass ** instance) = 0;
};

struct __declspec(uuid("758d9661-221c-480f-a339-50656673f46f")) __declspec(novtable) IUriRuntimeClassWithAbsoluteCanonicalUri : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AbsoluteCanonicalUri(hstring * value) = 0;
    virtual HRESULT __stdcall get_DisplayIri(hstring * value) = 0;
};

struct __declspec(uuid("125e7431-f678-4e8e-b670-20a9b06c512d")) __declspec(novtable) IWwwFormUrlDecoderEntry : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall get_Value(hstring * value) = 0;
};

struct __declspec(uuid("d45a0451-f225-4542-9296-0e1df5d254df")) __declspec(novtable) IWwwFormUrlDecoderRuntimeClass : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetFirstValueByName(hstring name, hstring * phstrValue) = 0;
};

struct __declspec(uuid("5b8c6b3d-24ae-41b5-a1bf-f0c3d544845b")) __declspec(novtable) IWwwFormUrlDecoderRuntimeClassFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateWwwFormUrlDecoder(hstring query, Windows::Foundation::IWwwFormUrlDecoderRuntimeClass ** instance) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Foundation::Deferral> { using default_interface = Windows::Foundation::IDeferral; };
template <> struct traits<Windows::Foundation::MemoryBuffer> { using default_interface = Windows::Foundation::IMemoryBuffer; };
template <> struct traits<Windows::Foundation::Uri> { using default_interface = Windows::Foundation::IUriRuntimeClass; };
template <> struct traits<Windows::Foundation::WwwFormUrlDecoder> { using default_interface = Windows::Foundation::IWwwFormUrlDecoderRuntimeClass; };
template <> struct traits<Windows::Foundation::WwwFormUrlDecoderEntry> { using default_interface = Windows::Foundation::IWwwFormUrlDecoderEntry; };

}

namespace Windows::Foundation {

template <typename T> struct impl_IClosable;
template <typename T> struct impl_IDeferral;
template <typename T> struct impl_IDeferralFactory;
template <typename T> struct impl_IGetActivationFactory;
template <typename T> struct impl_IMemoryBuffer;
template <typename T> struct impl_IMemoryBufferFactory;
template <typename T> struct impl_IMemoryBufferReference;
template <typename T> struct impl_IPropertyValue;
template <typename T> struct impl_IPropertyValueStatics;
template <typename T> struct impl_IStringable;
template <typename T> struct impl_IUriEscapeStatics;
template <typename T> struct impl_IUriRuntimeClass;
template <typename T> struct impl_IUriRuntimeClassFactory;
template <typename T> struct impl_IUriRuntimeClassWithAbsoluteCanonicalUri;
template <typename T> struct impl_IWwwFormUrlDecoderEntry;
template <typename T> struct impl_IWwwFormUrlDecoderRuntimeClass;
template <typename T> struct impl_IWwwFormUrlDecoderRuntimeClassFactory;
template <typename T> struct impl_DeferralCompletedHandler;

}

namespace impl {

template <> struct traits<Windows::Foundation::DeferralCompletedHandler>
{
    using abi = ABI::Windows::Foundation::DeferralCompletedHandler;
};

template <> struct traits<Windows::Foundation::IClosable>
{
    using abi = ABI::Windows::Foundation::IClosable;
    template <typename D> using consume = Windows::Foundation::impl_IClosable<D>;
};

template <> struct traits<Windows::Foundation::IDeferral>
{
    using abi = ABI::Windows::Foundation::IDeferral;
    template <typename D> using consume = Windows::Foundation::impl_IDeferral<D>;
};

template <> struct traits<Windows::Foundation::IDeferralFactory>
{
    using abi = ABI::Windows::Foundation::IDeferralFactory;
    template <typename D> using consume = Windows::Foundation::impl_IDeferralFactory<D>;
};

template <> struct traits<Windows::Foundation::IGetActivationFactory>
{
    using abi = ABI::Windows::Foundation::IGetActivationFactory;
    template <typename D> using consume = Windows::Foundation::impl_IGetActivationFactory<D>;
};

template <> struct traits<Windows::Foundation::IMemoryBuffer>
{
    using abi = ABI::Windows::Foundation::IMemoryBuffer;
    template <typename D> using consume = Windows::Foundation::impl_IMemoryBuffer<D>;
};

template <> struct traits<Windows::Foundation::IMemoryBufferFactory>
{
    using abi = ABI::Windows::Foundation::IMemoryBufferFactory;
    template <typename D> using consume = Windows::Foundation::impl_IMemoryBufferFactory<D>;
};

template <> struct traits<Windows::Foundation::IMemoryBufferReference>
{
    using abi = ABI::Windows::Foundation::IMemoryBufferReference;
    template <typename D> using consume = Windows::Foundation::impl_IMemoryBufferReference<D>;
};

template <> struct traits<Windows::Foundation::IPropertyValue>
{
    using abi = ABI::Windows::Foundation::IPropertyValue;
    template <typename D> using consume = Windows::Foundation::impl_IPropertyValue<D>;
};

template <> struct traits<Windows::Foundation::IPropertyValueStatics>
{
    using abi = ABI::Windows::Foundation::IPropertyValueStatics;
    template <typename D> using consume = Windows::Foundation::impl_IPropertyValueStatics<D>;
};

template <> struct traits<Windows::Foundation::IStringable>
{
    using abi = ABI::Windows::Foundation::IStringable;
    template <typename D> using consume = Windows::Foundation::impl_IStringable<D>;
};

template <> struct traits<Windows::Foundation::IUriEscapeStatics>
{
    using abi = ABI::Windows::Foundation::IUriEscapeStatics;
    template <typename D> using consume = Windows::Foundation::impl_IUriEscapeStatics<D>;
};

template <> struct traits<Windows::Foundation::IUriRuntimeClass>
{
    using abi = ABI::Windows::Foundation::IUriRuntimeClass;
    template <typename D> using consume = Windows::Foundation::impl_IUriRuntimeClass<D>;
};

template <> struct traits<Windows::Foundation::IUriRuntimeClassFactory>
{
    using abi = ABI::Windows::Foundation::IUriRuntimeClassFactory;
    template <typename D> using consume = Windows::Foundation::impl_IUriRuntimeClassFactory<D>;
};

template <> struct traits<Windows::Foundation::IUriRuntimeClassWithAbsoluteCanonicalUri>
{
    using abi = ABI::Windows::Foundation::IUriRuntimeClassWithAbsoluteCanonicalUri;
    template <typename D> using consume = Windows::Foundation::impl_IUriRuntimeClassWithAbsoluteCanonicalUri<D>;
};

template <> struct traits<Windows::Foundation::IWwwFormUrlDecoderEntry>
{
    using abi = ABI::Windows::Foundation::IWwwFormUrlDecoderEntry;
    template <typename D> using consume = Windows::Foundation::impl_IWwwFormUrlDecoderEntry<D>;
};

template <> struct traits<Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>
{
    using abi = ABI::Windows::Foundation::IWwwFormUrlDecoderRuntimeClass;
    template <typename D> using consume = Windows::Foundation::impl_IWwwFormUrlDecoderRuntimeClass<D>;
};

template <> struct traits<Windows::Foundation::IWwwFormUrlDecoderRuntimeClassFactory>
{
    using abi = ABI::Windows::Foundation::IWwwFormUrlDecoderRuntimeClassFactory;
    template <typename D> using consume = Windows::Foundation::impl_IWwwFormUrlDecoderRuntimeClassFactory<D>;
};

template <> struct traits<Windows::Foundation::Deferral>
{
    using abi = ABI::Windows::Foundation::Deferral;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Foundation.Deferral"; }
};

template <> struct traits<Windows::Foundation::MemoryBuffer>
{
    using abi = ABI::Windows::Foundation::MemoryBuffer;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Foundation.MemoryBuffer"; }
};

template <> struct traits<Windows::Foundation::PropertyValue>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Foundation.PropertyValue"; }
};

template <> struct traits<Windows::Foundation::Uri>
{
    using abi = ABI::Windows::Foundation::Uri;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Foundation.Uri"; }
};

template <> struct traits<Windows::Foundation::WwwFormUrlDecoder>
{
    using abi = ABI::Windows::Foundation::WwwFormUrlDecoder;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Foundation.WwwFormUrlDecoder"; }
};

template <> struct traits<Windows::Foundation::WwwFormUrlDecoderEntry>
{
    using abi = ABI::Windows::Foundation::WwwFormUrlDecoderEntry;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Foundation.WwwFormUrlDecoderEntry"; }
};

}

}
