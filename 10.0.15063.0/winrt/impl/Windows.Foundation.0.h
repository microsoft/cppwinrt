// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

enum class PropertyType
{
    Empty = 0,
    UInt8 = 1,
    Int16 = 2,
    UInt16 = 3,
    Int32 = 4,
    UInt32 = 5,
    Int64 = 6,
    UInt64 = 7,
    Single = 8,
    Double = 9,
    Char16 = 10,
    Boolean = 11,
    String = 12,
    Inspectable = 13,
    DateTime = 14,
    TimeSpan = 15,
    Guid = 16,
    Point = 17,
    Size = 18,
    Rect = 19,
    OtherType = 20,
    UInt8Array = 1025,
    Int16Array = 1026,
    UInt16Array = 1027,
    Int32Array = 1028,
    UInt32Array = 1029,
    Int64Array = 1030,
    UInt64Array = 1031,
    SingleArray = 1032,
    DoubleArray = 1033,
    Char16Array = 1034,
    BooleanArray = 1035,
    StringArray = 1036,
    InspectableArray = 1037,
    DateTimeArray = 1038,
    TimeSpanArray = 1039,
    GuidArray = 1040,
    PointArray = 1041,
    SizeArray = 1042,
    RectArray = 1043,
    OtherTypeArray = 1044,
};

struct IClosable;
struct IDeferral;
struct IDeferralFactory;
struct IGetActivationFactory;
struct IMemoryBuffer;
struct IMemoryBufferFactory;
struct IMemoryBufferReference;
struct IPropertyValue;
struct IPropertyValueStatics;
struct IStringable;
struct IUriEscapeStatics;
struct IUriRuntimeClass;
struct IUriRuntimeClassFactory;
struct IUriRuntimeClassWithAbsoluteCanonicalUri;
struct IWwwFormUrlDecoderEntry;
struct IWwwFormUrlDecoderRuntimeClass;
struct IWwwFormUrlDecoderRuntimeClassFactory;
struct Deferral;
struct MemoryBuffer;
struct PropertyValue;
struct Uri;
struct WwwFormUrlDecoder;
struct WwwFormUrlDecoderEntry;
struct DeferralCompletedHandler;

}

namespace winrt::impl {

template <> struct category<Windows::Foundation::IClosable>{ using type = interface_category; };
template <> struct category<Windows::Foundation::IDeferral>{ using type = interface_category; };
template <> struct category<Windows::Foundation::IDeferralFactory>{ using type = interface_category; };
template <> struct category<Windows::Foundation::IGetActivationFactory>{ using type = interface_category; };
template <> struct category<Windows::Foundation::IMemoryBuffer>{ using type = interface_category; };
template <> struct category<Windows::Foundation::IMemoryBufferFactory>{ using type = interface_category; };
template <> struct category<Windows::Foundation::IMemoryBufferReference>{ using type = interface_category; };
template <> struct category<Windows::Foundation::IPropertyValue>{ using type = interface_category; };
template <> struct category<Windows::Foundation::IPropertyValueStatics>{ using type = interface_category; };
template <> struct category<Windows::Foundation::IStringable>{ using type = interface_category; };
template <> struct category<Windows::Foundation::IUriEscapeStatics>{ using type = interface_category; };
template <> struct category<Windows::Foundation::IUriRuntimeClass>{ using type = interface_category; };
template <> struct category<Windows::Foundation::IUriRuntimeClassFactory>{ using type = interface_category; };
template <> struct category<Windows::Foundation::IUriRuntimeClassWithAbsoluteCanonicalUri>{ using type = interface_category; };
template <> struct category<Windows::Foundation::IWwwFormUrlDecoderEntry>{ using type = interface_category; };
template <> struct category<Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>{ using type = interface_category; };
template <> struct category<Windows::Foundation::IWwwFormUrlDecoderRuntimeClassFactory>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Deferral>{ using type = class_category; };
template <> struct category<Windows::Foundation::MemoryBuffer>{ using type = class_category; };
template <> struct category<Windows::Foundation::PropertyValue>{ using type = class_category; };
template <> struct category<Windows::Foundation::Uri>{ using type = class_category; };
template <> struct category<Windows::Foundation::WwwFormUrlDecoder>{ using type = class_category; };
template <> struct category<Windows::Foundation::WwwFormUrlDecoderEntry>{ using type = class_category; };
template <> struct category<Windows::Foundation::PropertyType>{ using type = enum_category; };
template <> struct category<Windows::Foundation::DeferralCompletedHandler>{ using type = delegate_category; };
template <> struct name<Windows::Foundation::IClosable>{ static constexpr auto & value{ L"Windows.Foundation.IClosable" }; };
template <> struct name<Windows::Foundation::IDeferral>{ static constexpr auto & value{ L"Windows.Foundation.IDeferral" }; };
template <> struct name<Windows::Foundation::IDeferralFactory>{ static constexpr auto & value{ L"Windows.Foundation.IDeferralFactory" }; };
template <> struct name<Windows::Foundation::IGetActivationFactory>{ static constexpr auto & value{ L"Windows.Foundation.IGetActivationFactory" }; };
template <> struct name<Windows::Foundation::IMemoryBuffer>{ static constexpr auto & value{ L"Windows.Foundation.IMemoryBuffer" }; };
template <> struct name<Windows::Foundation::IMemoryBufferFactory>{ static constexpr auto & value{ L"Windows.Foundation.IMemoryBufferFactory" }; };
template <> struct name<Windows::Foundation::IMemoryBufferReference>{ static constexpr auto & value{ L"Windows.Foundation.IMemoryBufferReference" }; };
template <> struct name<Windows::Foundation::IPropertyValue>{ static constexpr auto & value{ L"Windows.Foundation.IPropertyValue" }; };
template <> struct name<Windows::Foundation::IPropertyValueStatics>{ static constexpr auto & value{ L"Windows.Foundation.IPropertyValueStatics" }; };
template <> struct name<Windows::Foundation::IStringable>{ static constexpr auto & value{ L"Windows.Foundation.IStringable" }; };
template <> struct name<Windows::Foundation::IUriEscapeStatics>{ static constexpr auto & value{ L"Windows.Foundation.IUriEscapeStatics" }; };
template <> struct name<Windows::Foundation::IUriRuntimeClass>{ static constexpr auto & value{ L"Windows.Foundation.IUriRuntimeClass" }; };
template <> struct name<Windows::Foundation::IUriRuntimeClassFactory>{ static constexpr auto & value{ L"Windows.Foundation.IUriRuntimeClassFactory" }; };
template <> struct name<Windows::Foundation::IUriRuntimeClassWithAbsoluteCanonicalUri>{ static constexpr auto & value{ L"Windows.Foundation.IUriRuntimeClassWithAbsoluteCanonicalUri" }; };
template <> struct name<Windows::Foundation::IWwwFormUrlDecoderEntry>{ static constexpr auto & value{ L"Windows.Foundation.IWwwFormUrlDecoderEntry" }; };
template <> struct name<Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>{ static constexpr auto & value{ L"Windows.Foundation.IWwwFormUrlDecoderRuntimeClass" }; };
template <> struct name<Windows::Foundation::IWwwFormUrlDecoderRuntimeClassFactory>{ static constexpr auto & value{ L"Windows.Foundation.IWwwFormUrlDecoderRuntimeClassFactory" }; };
template <> struct name<Windows::Foundation::Deferral>{ static constexpr auto & value{ L"Windows.Foundation.Deferral" }; };
template <> struct name<Windows::Foundation::MemoryBuffer>{ static constexpr auto & value{ L"Windows.Foundation.MemoryBuffer" }; };
template <> struct name<Windows::Foundation::PropertyValue>{ static constexpr auto & value{ L"Windows.Foundation.PropertyValue" }; };
template <> struct name<Windows::Foundation::Uri>{ static constexpr auto & value{ L"Windows.Foundation.Uri" }; };
template <> struct name<Windows::Foundation::WwwFormUrlDecoder>{ static constexpr auto & value{ L"Windows.Foundation.WwwFormUrlDecoder" }; };
template <> struct name<Windows::Foundation::WwwFormUrlDecoderEntry>{ static constexpr auto & value{ L"Windows.Foundation.WwwFormUrlDecoderEntry" }; };
template <> struct name<Windows::Foundation::PropertyType>{ static constexpr auto & value{ L"Windows.Foundation.PropertyType" }; };
template <> struct name<Windows::Foundation::DeferralCompletedHandler>{ static constexpr auto & value{ L"Windows.Foundation.DeferralCompletedHandler" }; };
template <> struct guid<Windows::Foundation::IClosable>{ static constexpr GUID value{ 0x30D5A829,0x7FA4,0x4026,{ 0x83,0xBB,0xD7,0x5B,0xAE,0x4E,0xA9,0x9E } }; };
template <> struct guid<Windows::Foundation::IDeferral>{ static constexpr GUID value{ 0xD6269732,0x3B7F,0x46A7,{ 0xB4,0x0B,0x4F,0xDC,0xA2,0xA2,0xC6,0x93 } }; };
template <> struct guid<Windows::Foundation::IDeferralFactory>{ static constexpr GUID value{ 0x65A1ECC5,0x3FB5,0x4832,{ 0x8C,0xA9,0xF0,0x61,0xB2,0x81,0xD1,0x3A } }; };
template <> struct guid<Windows::Foundation::IGetActivationFactory>{ static constexpr GUID value{ 0x4EDB8EE2,0x96DD,0x49A7,{ 0x94,0xF7,0x46,0x07,0xDD,0xAB,0x8E,0x3C } }; };
template <> struct guid<Windows::Foundation::IMemoryBuffer>{ static constexpr GUID value{ 0xFBC4DD2A,0x245B,0x11E4,{ 0xAF,0x98,0x68,0x94,0x23,0x26,0x0C,0xF8 } }; };
template <> struct guid<Windows::Foundation::IMemoryBufferFactory>{ static constexpr GUID value{ 0xFBC4DD2B,0x245B,0x11E4,{ 0xAF,0x98,0x68,0x94,0x23,0x26,0x0C,0xF8 } }; };
template <> struct guid<Windows::Foundation::IMemoryBufferReference>{ static constexpr GUID value{ 0xFBC4DD29,0x245B,0x11E4,{ 0xAF,0x98,0x68,0x94,0x23,0x26,0x0C,0xF8 } }; };
template <> struct guid<Windows::Foundation::IPropertyValue>{ static constexpr GUID value{ 0x4BD682DD,0x7554,0x40E9,{ 0x9A,0x9B,0x82,0x65,0x4E,0xDE,0x7E,0x62 } }; };
template <> struct guid<Windows::Foundation::IPropertyValueStatics>{ static constexpr GUID value{ 0x629BDBC8,0xD932,0x4FF4,{ 0x96,0xB9,0x8D,0x96,0xC5,0xC1,0xE8,0x58 } }; };
template <> struct guid<Windows::Foundation::IStringable>{ static constexpr GUID value{ 0x96369F54,0x8EB6,0x48F0,{ 0xAB,0xCE,0xC1,0xB2,0x11,0xE6,0x27,0xC3 } }; };
template <> struct guid<Windows::Foundation::IUriEscapeStatics>{ static constexpr GUID value{ 0xC1D432BA,0xC824,0x4452,{ 0xA7,0xFD,0x51,0x2B,0xC3,0xBB,0xE9,0xA1 } }; };
template <> struct guid<Windows::Foundation::IUriRuntimeClass>{ static constexpr GUID value{ 0x9E365E57,0x48B2,0x4160,{ 0x95,0x6F,0xC7,0x38,0x51,0x20,0xBB,0xFC } }; };
template <> struct guid<Windows::Foundation::IUriRuntimeClassFactory>{ static constexpr GUID value{ 0x44A9796F,0x723E,0x4FDF,{ 0xA2,0x18,0x03,0x3E,0x75,0xB0,0xC0,0x84 } }; };
template <> struct guid<Windows::Foundation::IUriRuntimeClassWithAbsoluteCanonicalUri>{ static constexpr GUID value{ 0x758D9661,0x221C,0x480F,{ 0xA3,0x39,0x50,0x65,0x66,0x73,0xF4,0x6F } }; };
template <> struct guid<Windows::Foundation::IWwwFormUrlDecoderEntry>{ static constexpr GUID value{ 0x125E7431,0xF678,0x4E8E,{ 0xB6,0x70,0x20,0xA9,0xB0,0x6C,0x51,0x2D } }; };
template <> struct guid<Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>{ static constexpr GUID value{ 0xD45A0451,0xF225,0x4542,{ 0x92,0x96,0x0E,0x1D,0xF5,0xD2,0x54,0xDF } }; };
template <> struct guid<Windows::Foundation::IWwwFormUrlDecoderRuntimeClassFactory>{ static constexpr GUID value{ 0x5B8C6B3D,0x24AE,0x41B5,{ 0xA1,0xBF,0xF0,0xC3,0xD5,0x44,0x84,0x5B } }; };
template <> struct guid<Windows::Foundation::DeferralCompletedHandler>{ static constexpr GUID value{ 0xED32A372,0xF3C8,0x4FAA,{ 0x9C,0xFB,0x47,0x01,0x48,0xDA,0x38,0x88 } }; };
template <> struct default_interface<Windows::Foundation::Deferral>{ using type = Windows::Foundation::IDeferral; };
template <> struct default_interface<Windows::Foundation::MemoryBuffer>{ using type = Windows::Foundation::IMemoryBuffer; };
template <> struct default_interface<Windows::Foundation::Uri>{ using type = Windows::Foundation::IUriRuntimeClass; };
template <> struct default_interface<Windows::Foundation::WwwFormUrlDecoder>{ using type = Windows::Foundation::IWwwFormUrlDecoderRuntimeClass; };
template <> struct default_interface<Windows::Foundation::WwwFormUrlDecoderEntry>{ using type = Windows::Foundation::IWwwFormUrlDecoderEntry; };

template <typename D>
struct consume_Windows_Foundation_IClosable
{
    void Close() const;
};
template <> struct consume<Windows::Foundation::IClosable> { template <typename D> using type = consume_Windows_Foundation_IClosable<D>; };

template <typename D>
struct consume_Windows_Foundation_IDeferral
{
    void Complete() const;
};
template <> struct consume<Windows::Foundation::IDeferral> { template <typename D> using type = consume_Windows_Foundation_IDeferral<D>; };

template <typename D>
struct consume_Windows_Foundation_IDeferralFactory
{
    Windows::Foundation::Deferral Create(Windows::Foundation::DeferralCompletedHandler const& handler) const;
};
template <> struct consume<Windows::Foundation::IDeferralFactory> { template <typename D> using type = consume_Windows_Foundation_IDeferralFactory<D>; };

template <typename D>
struct consume_Windows_Foundation_IGetActivationFactory
{
    Windows::Foundation::IInspectable GetActivationFactory(param::hstring const& activatableClassId) const;
};
template <> struct consume<Windows::Foundation::IGetActivationFactory> { template <typename D> using type = consume_Windows_Foundation_IGetActivationFactory<D>; };

template <typename D>
struct consume_Windows_Foundation_IMemoryBuffer
{
    Windows::Foundation::IMemoryBufferReference CreateReference() const;
};
template <> struct consume<Windows::Foundation::IMemoryBuffer> { template <typename D> using type = consume_Windows_Foundation_IMemoryBuffer<D>; };

template <typename D>
struct consume_Windows_Foundation_IMemoryBufferFactory
{
    Windows::Foundation::MemoryBuffer Create(uint32_t capacity) const;
};
template <> struct consume<Windows::Foundation::IMemoryBufferFactory> { template <typename D> using type = consume_Windows_Foundation_IMemoryBufferFactory<D>; };

template <typename D>
struct consume_Windows_Foundation_IMemoryBufferReference
{
    uint32_t Capacity() const;
    event_token Closed(Windows::Foundation::TypedEventHandler<Windows::Foundation::IMemoryBufferReference, Windows::Foundation::IInspectable> const& handler) const;
    using Closed_revoker = event_revoker<Windows::Foundation::IMemoryBufferReference>;
    Closed_revoker Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IMemoryBufferReference, Windows::Foundation::IInspectable> const& handler) const;
    void Closed(event_token const& cookie) const;
};
template <> struct consume<Windows::Foundation::IMemoryBufferReference> { template <typename D> using type = consume_Windows_Foundation_IMemoryBufferReference<D>; };

template <typename D>
struct consume_Windows_Foundation_IPropertyValue
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
    char16_t GetChar16() const;
    bool GetBoolean() const;
    hstring GetString() const;
    GUID GetGuid() const;
    Windows::Foundation::DateTime GetDateTime() const;
    Windows::Foundation::TimeSpan GetTimeSpan() const;
    Windows::Foundation::Point GetPoint() const;
    Windows::Foundation::Size GetSize() const;
    Windows::Foundation::Rect GetRect() const;
    void GetUInt8Array(com_array<uint8_t>& value) const;
    void GetInt16Array(com_array<int16_t>& value) const;
    void GetUInt16Array(com_array<uint16_t>& value) const;
    void GetInt32Array(com_array<int32_t>& value) const;
    void GetUInt32Array(com_array<uint32_t>& value) const;
    void GetInt64Array(com_array<int64_t>& value) const;
    void GetUInt64Array(com_array<uint64_t>& value) const;
    void GetSingleArray(com_array<float>& value) const;
    void GetDoubleArray(com_array<double>& value) const;
    void GetChar16Array(com_array<char16_t>& value) const;
    void GetBooleanArray(com_array<bool>& value) const;
    void GetStringArray(com_array<hstring>& value) const;
    void GetInspectableArray(com_array<Windows::Foundation::IInspectable>& value) const;
    void GetGuidArray(com_array<GUID>& value) const;
    void GetDateTimeArray(com_array<Windows::Foundation::DateTime>& value) const;
    void GetTimeSpanArray(com_array<Windows::Foundation::TimeSpan>& value) const;
    void GetPointArray(com_array<Windows::Foundation::Point>& value) const;
    void GetSizeArray(com_array<Windows::Foundation::Size>& value) const;
    void GetRectArray(com_array<Windows::Foundation::Rect>& value) const;
};
template <> struct consume<Windows::Foundation::IPropertyValue> { template <typename D> using type = consume_Windows_Foundation_IPropertyValue<D>; };

template <typename D>
struct consume_Windows_Foundation_IPropertyValueStatics
{
    Windows::Foundation::IInspectable CreateEmpty() const;
    Windows::Foundation::IInspectable CreateUInt8(uint8_t value) const;
    Windows::Foundation::IInspectable CreateInt16(int16_t value) const;
    Windows::Foundation::IInspectable CreateUInt16(uint16_t value) const;
    Windows::Foundation::IInspectable CreateInt32(int32_t value) const;
    Windows::Foundation::IInspectable CreateUInt32(uint32_t value) const;
    Windows::Foundation::IInspectable CreateInt64(int64_t value) const;
    Windows::Foundation::IInspectable CreateUInt64(uint64_t value) const;
    Windows::Foundation::IInspectable CreateSingle(float value) const;
    Windows::Foundation::IInspectable CreateDouble(double value) const;
    Windows::Foundation::IInspectable CreateChar16(char16_t value) const;
    Windows::Foundation::IInspectable CreateBoolean(bool value) const;
    Windows::Foundation::IInspectable CreateString(param::hstring const& value) const;
    Windows::Foundation::IInspectable CreateInspectable(Windows::Foundation::IInspectable const& value) const;
    Windows::Foundation::IInspectable CreateGuid(GUID const& value) const;
    Windows::Foundation::IInspectable CreateDateTime(Windows::Foundation::DateTime const& value) const;
    Windows::Foundation::IInspectable CreateTimeSpan(Windows::Foundation::TimeSpan const& value) const;
    Windows::Foundation::IInspectable CreatePoint(Windows::Foundation::Point const& value) const;
    Windows::Foundation::IInspectable CreateSize(Windows::Foundation::Size const& value) const;
    Windows::Foundation::IInspectable CreateRect(Windows::Foundation::Rect const& value) const;
    Windows::Foundation::IInspectable CreateUInt8Array(array_view<uint8_t const> value) const;
    Windows::Foundation::IInspectable CreateInt16Array(array_view<int16_t const> value) const;
    Windows::Foundation::IInspectable CreateUInt16Array(array_view<uint16_t const> value) const;
    Windows::Foundation::IInspectable CreateInt32Array(array_view<int32_t const> value) const;
    Windows::Foundation::IInspectable CreateUInt32Array(array_view<uint32_t const> value) const;
    Windows::Foundation::IInspectable CreateInt64Array(array_view<int64_t const> value) const;
    Windows::Foundation::IInspectable CreateUInt64Array(array_view<uint64_t const> value) const;
    Windows::Foundation::IInspectable CreateSingleArray(array_view<float const> value) const;
    Windows::Foundation::IInspectable CreateDoubleArray(array_view<double const> value) const;
    Windows::Foundation::IInspectable CreateChar16Array(array_view<char16_t const> value) const;
    Windows::Foundation::IInspectable CreateBooleanArray(array_view<bool const> value) const;
    Windows::Foundation::IInspectable CreateStringArray(array_view<hstring const> value) const;
    Windows::Foundation::IInspectable CreateInspectableArray(array_view<Windows::Foundation::IInspectable const> value) const;
    Windows::Foundation::IInspectable CreateGuidArray(array_view<GUID const> value) const;
    Windows::Foundation::IInspectable CreateDateTimeArray(array_view<Windows::Foundation::DateTime const> value) const;
    Windows::Foundation::IInspectable CreateTimeSpanArray(array_view<Windows::Foundation::TimeSpan const> value) const;
    Windows::Foundation::IInspectable CreatePointArray(array_view<Windows::Foundation::Point const> value) const;
    Windows::Foundation::IInspectable CreateSizeArray(array_view<Windows::Foundation::Size const> value) const;
    Windows::Foundation::IInspectable CreateRectArray(array_view<Windows::Foundation::Rect const> value) const;
};
template <> struct consume<Windows::Foundation::IPropertyValueStatics> { template <typename D> using type = consume_Windows_Foundation_IPropertyValueStatics<D>; };

template <typename D>
struct consume_Windows_Foundation_IStringable
{
    hstring ToString() const;
};
template <> struct consume<Windows::Foundation::IStringable> { template <typename D> using type = consume_Windows_Foundation_IStringable<D>; };

template <typename D>
struct consume_Windows_Foundation_IUriEscapeStatics
{
    hstring UnescapeComponent(param::hstring const& toUnescape) const;
    hstring EscapeComponent(param::hstring const& toEscape) const;
};
template <> struct consume<Windows::Foundation::IUriEscapeStatics> { template <typename D> using type = consume_Windows_Foundation_IUriEscapeStatics<D>; };

template <typename D>
struct consume_Windows_Foundation_IUriRuntimeClass
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
    bool Equals(Windows::Foundation::Uri const& pUri) const;
    Windows::Foundation::Uri CombineUri(param::hstring const& relativeUri) const;
};
template <> struct consume<Windows::Foundation::IUriRuntimeClass> { template <typename D> using type = consume_Windows_Foundation_IUriRuntimeClass<D>; };

template <typename D>
struct consume_Windows_Foundation_IUriRuntimeClassFactory
{
    Windows::Foundation::Uri CreateUri(param::hstring const& uri) const;
    Windows::Foundation::Uri CreateWithRelativeUri(param::hstring const& baseUri, param::hstring const& relativeUri) const;
};
template <> struct consume<Windows::Foundation::IUriRuntimeClassFactory> { template <typename D> using type = consume_Windows_Foundation_IUriRuntimeClassFactory<D>; };

template <typename D>
struct consume_Windows_Foundation_IUriRuntimeClassWithAbsoluteCanonicalUri
{
    hstring AbsoluteCanonicalUri() const;
    hstring DisplayIri() const;
};
template <> struct consume<Windows::Foundation::IUriRuntimeClassWithAbsoluteCanonicalUri> { template <typename D> using type = consume_Windows_Foundation_IUriRuntimeClassWithAbsoluteCanonicalUri<D>; };

template <typename D>
struct consume_Windows_Foundation_IWwwFormUrlDecoderEntry
{
    hstring Name() const;
    hstring Value() const;
};
template <> struct consume<Windows::Foundation::IWwwFormUrlDecoderEntry> { template <typename D> using type = consume_Windows_Foundation_IWwwFormUrlDecoderEntry<D>; };

template <typename D>
struct consume_Windows_Foundation_IWwwFormUrlDecoderRuntimeClass
{
    hstring GetFirstValueByName(param::hstring const& name) const;
};
template <> struct consume<Windows::Foundation::IWwwFormUrlDecoderRuntimeClass> { template <typename D> using type = consume_Windows_Foundation_IWwwFormUrlDecoderRuntimeClass<D>; };

template <typename D>
struct consume_Windows_Foundation_IWwwFormUrlDecoderRuntimeClassFactory
{
    Windows::Foundation::WwwFormUrlDecoder CreateWwwFormUrlDecoder(param::hstring const& query) const;
};
template <> struct consume<Windows::Foundation::IWwwFormUrlDecoderRuntimeClassFactory> { template <typename D> using type = consume_Windows_Foundation_IWwwFormUrlDecoderRuntimeClassFactory<D>; };

template <> struct abi<Windows::Foundation::IClosable>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Close() = 0;
};};

template <> struct abi<Windows::Foundation::IDeferral>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Complete() = 0;
};};

template <> struct abi<Windows::Foundation::IDeferralFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* handler, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Foundation::IGetActivationFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetActivationFactory(HSTRING activatableClassId, ::IUnknown** factory) = 0;
};};

template <> struct abi<Windows::Foundation::IMemoryBuffer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateReference(::IUnknown** reference) = 0;
};};

template <> struct abi<Windows::Foundation::IMemoryBufferFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(uint32_t capacity, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Foundation::IMemoryBufferReference>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Capacity(uint32_t* value) = 0;
    virtual HRESULT __stdcall add_Closed(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_Closed(abi_t<event_token> cookie) = 0;
};};

template <> struct abi<Windows::Foundation::IPropertyValue>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Type(abi_t<Windows::Foundation::PropertyType>* value) = 0;
    virtual HRESULT __stdcall get_IsNumericScalar(bool* value) = 0;
    virtual HRESULT __stdcall GetUInt8(uint8_t* value) = 0;
    virtual HRESULT __stdcall GetInt16(int16_t* value) = 0;
    virtual HRESULT __stdcall GetUInt16(uint16_t* value) = 0;
    virtual HRESULT __stdcall GetInt32(int32_t* value) = 0;
    virtual HRESULT __stdcall GetUInt32(uint32_t* value) = 0;
    virtual HRESULT __stdcall GetInt64(int64_t* value) = 0;
    virtual HRESULT __stdcall GetUInt64(uint64_t* value) = 0;
    virtual HRESULT __stdcall GetSingle(float* value) = 0;
    virtual HRESULT __stdcall GetDouble(double* value) = 0;
    virtual HRESULT __stdcall GetChar16(char16_t* value) = 0;
    virtual HRESULT __stdcall GetBoolean(bool* value) = 0;
    virtual HRESULT __stdcall GetString(HSTRING* value) = 0;
    virtual HRESULT __stdcall GetGuid(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall GetDateTime(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall GetTimeSpan(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall GetPoint(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall GetSize(abi_t<Windows::Foundation::Size>* value) = 0;
    virtual HRESULT __stdcall GetRect(abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall GetUInt8Array(uint32_t* __valueSize, uint8_t** value) = 0;
    virtual HRESULT __stdcall GetInt16Array(uint32_t* __valueSize, int16_t** value) = 0;
    virtual HRESULT __stdcall GetUInt16Array(uint32_t* __valueSize, uint16_t** value) = 0;
    virtual HRESULT __stdcall GetInt32Array(uint32_t* __valueSize, int32_t** value) = 0;
    virtual HRESULT __stdcall GetUInt32Array(uint32_t* __valueSize, uint32_t** value) = 0;
    virtual HRESULT __stdcall GetInt64Array(uint32_t* __valueSize, int64_t** value) = 0;
    virtual HRESULT __stdcall GetUInt64Array(uint32_t* __valueSize, uint64_t** value) = 0;
    virtual HRESULT __stdcall GetSingleArray(uint32_t* __valueSize, float** value) = 0;
    virtual HRESULT __stdcall GetDoubleArray(uint32_t* __valueSize, double** value) = 0;
    virtual HRESULT __stdcall GetChar16Array(uint32_t* __valueSize, char16_t** value) = 0;
    virtual HRESULT __stdcall GetBooleanArray(uint32_t* __valueSize, bool** value) = 0;
    virtual HRESULT __stdcall GetStringArray(uint32_t* __valueSize, HSTRING** value) = 0;
    virtual HRESULT __stdcall GetInspectableArray(uint32_t* __valueSize, ::IUnknown*** value) = 0;
    virtual HRESULT __stdcall GetGuidArray(uint32_t* __valueSize, abi_t<GUID>** value) = 0;
    virtual HRESULT __stdcall GetDateTimeArray(uint32_t* __valueSize, abi_t<Windows::Foundation::DateTime>** value) = 0;
    virtual HRESULT __stdcall GetTimeSpanArray(uint32_t* __valueSize, abi_t<Windows::Foundation::TimeSpan>** value) = 0;
    virtual HRESULT __stdcall GetPointArray(uint32_t* __valueSize, abi_t<Windows::Foundation::Point>** value) = 0;
    virtual HRESULT __stdcall GetSizeArray(uint32_t* __valueSize, abi_t<Windows::Foundation::Size>** value) = 0;
    virtual HRESULT __stdcall GetRectArray(uint32_t* __valueSize, abi_t<Windows::Foundation::Rect>** value) = 0;
};};

template <> struct abi<Windows::Foundation::IPropertyValueStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateEmpty(::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateUInt8(uint8_t value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateInt16(int16_t value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateUInt16(uint16_t value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateInt32(int32_t value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateUInt32(uint32_t value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateInt64(int64_t value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateUInt64(uint64_t value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateSingle(float value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateDouble(double value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateChar16(char16_t value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateBoolean(bool value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateString(HSTRING value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateInspectable(::IUnknown* value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateGuid(abi_t<GUID> value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateDateTime(abi_t<Windows::Foundation::DateTime> value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateTimeSpan(abi_t<Windows::Foundation::TimeSpan> value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreatePoint(abi_t<Windows::Foundation::Point> value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateSize(abi_t<Windows::Foundation::Size> value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateRect(abi_t<Windows::Foundation::Rect> value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateUInt8Array(uint32_t __valueSize, uint8_t* value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateInt16Array(uint32_t __valueSize, int16_t* value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateUInt16Array(uint32_t __valueSize, uint16_t* value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateInt32Array(uint32_t __valueSize, int32_t* value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateUInt32Array(uint32_t __valueSize, uint32_t* value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateInt64Array(uint32_t __valueSize, int64_t* value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateUInt64Array(uint32_t __valueSize, uint64_t* value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateSingleArray(uint32_t __valueSize, float* value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateDoubleArray(uint32_t __valueSize, double* value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateChar16Array(uint32_t __valueSize, char16_t* value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateBooleanArray(uint32_t __valueSize, bool* value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateStringArray(uint32_t __valueSize, HSTRING* value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateInspectableArray(uint32_t __valueSize, ::IUnknown** value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateGuidArray(uint32_t __valueSize, abi_t<GUID>* value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateDateTimeArray(uint32_t __valueSize, abi_t<Windows::Foundation::DateTime>* value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateTimeSpanArray(uint32_t __valueSize, abi_t<Windows::Foundation::TimeSpan>* value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreatePointArray(uint32_t __valueSize, abi_t<Windows::Foundation::Point>* value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateSizeArray(uint32_t __valueSize, abi_t<Windows::Foundation::Size>* value, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall CreateRectArray(uint32_t __valueSize, abi_t<Windows::Foundation::Rect>* value, ::IUnknown** propertyValue) = 0;
};};

template <> struct abi<Windows::Foundation::IStringable>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ToString(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Foundation::IUriEscapeStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall UnescapeComponent(HSTRING toUnescape, HSTRING* value) = 0;
    virtual HRESULT __stdcall EscapeComponent(HSTRING toEscape, HSTRING* value) = 0;
};};

template <> struct abi<Windows::Foundation::IUriRuntimeClass>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AbsoluteUri(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DisplayUri(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Domain(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Extension(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Fragment(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Host(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Password(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Path(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Query(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_QueryParsed(::IUnknown** ppWwwFormUrlDecoder) = 0;
    virtual HRESULT __stdcall get_RawUri(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SchemeName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_UserName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Port(int32_t* value) = 0;
    virtual HRESULT __stdcall get_Suspicious(bool* value) = 0;
    virtual HRESULT __stdcall Equals(::IUnknown* pUri, bool* value) = 0;
    virtual HRESULT __stdcall CombineUri(HSTRING relativeUri, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::Foundation::IUriRuntimeClassFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateUri(HSTRING uri, ::IUnknown** instance) = 0;
    virtual HRESULT __stdcall CreateWithRelativeUri(HSTRING baseUri, HSTRING relativeUri, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::Foundation::IUriRuntimeClassWithAbsoluteCanonicalUri>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AbsoluteCanonicalUri(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DisplayIri(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Foundation::IWwwFormUrlDecoderEntry>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Value(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetFirstValueByName(HSTRING name, HSTRING* phstrValue) = 0;
};};

template <> struct abi<Windows::Foundation::IWwwFormUrlDecoderRuntimeClassFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWwwFormUrlDecoder(HSTRING query, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::Foundation::DeferralCompletedHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke() = 0;
};};

}
