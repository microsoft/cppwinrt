// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Data.Json.1.h"
#include "Windows.Foundation.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_d44662bc_dce3_59a8_9272_4b210f33908b
#define WINRT_GENERIC_d44662bc_dce3_59a8_9272_4b210f33908b
template <> struct __declspec(uuid("d44662bc-dce3-59a8-9272-4b210f33908b")) __declspec(novtable) IVector<Windows::Data::Json::IJsonValue> : impl_IVector<Windows::Data::Json::IJsonValue> {};
#endif

#ifndef WINRT_GENERIC_cb0492b6_4113_55cf_b2c5_99eb428ba493
#define WINRT_GENERIC_cb0492b6_4113_55cf_b2c5_99eb428ba493
template <> struct __declspec(uuid("cb0492b6-4113-55cf-b2c5-99eb428ba493")) __declspec(novtable) IIterable<Windows::Data::Json::IJsonValue> : impl_IIterable<Windows::Data::Json::IJsonValue> {};
#endif

#ifndef WINRT_GENERIC_c9d9a725_786b_5113_b4b7_9b61764c220b
#define WINRT_GENERIC_c9d9a725_786b_5113_b4b7_9b61764c220b
template <> struct __declspec(uuid("c9d9a725-786b-5113-b4b7-9b61764c220b")) __declspec(novtable) IMap<hstring, Windows::Data::Json::IJsonValue> : impl_IMap<hstring, Windows::Data::Json::IJsonValue> {};
#endif

#ifndef WINRT_GENERIC_4deecc89_b0b8_5ee8_a51d_1c25ad9a5b01
#define WINRT_GENERIC_4deecc89_b0b8_5ee8_a51d_1c25ad9a5b01
template <> struct __declspec(uuid("4deecc89-b0b8-5ee8-a51d-1c25ad9a5b01")) __declspec(novtable) IKeyValuePair<hstring, Windows::Data::Json::IJsonValue> : impl_IKeyValuePair<hstring, Windows::Data::Json::IJsonValue> {};
#endif

#ifndef WINRT_GENERIC_189eb512_5a20_5ec6_9866_60af96f0d23b
#define WINRT_GENERIC_189eb512_5a20_5ec6_9866_60af96f0d23b
template <> struct __declspec(uuid("189eb512-5a20-5ec6-9866-60af96f0d23b")) __declspec(novtable) IIterator<Windows::Data::Json::IJsonValue> : impl_IIterator<Windows::Data::Json::IJsonValue> {};
#endif

#ifndef WINRT_GENERIC_cffabb0f_6bc4_5ff6_9b9e_7a9df6c687c8
#define WINRT_GENERIC_cffabb0f_6bc4_5ff6_9b9e_7a9df6c687c8
template <> struct __declspec(uuid("cffabb0f-6bc4-5ff6-9b9e-7a9df6c687c8")) __declspec(novtable) IVectorView<Windows::Data::Json::IJsonValue> : impl_IVectorView<Windows::Data::Json::IJsonValue> {};
#endif

#ifndef WINRT_GENERIC_eecd690c_1ff3_529f_923f_9b1c31fd3d0f
#define WINRT_GENERIC_eecd690c_1ff3_529f_923f_9b1c31fd3d0f
template <> struct __declspec(uuid("eecd690c-1ff3-529f-923f-9b1c31fd3d0f")) __declspec(novtable) IMapView<hstring, Windows::Data::Json::IJsonValue> : impl_IMapView<hstring, Windows::Data::Json::IJsonValue> {};
#endif

#ifndef WINRT_GENERIC_dfabb6e1_0411_5a8f_aa87_354e7110f099
#define WINRT_GENERIC_dfabb6e1_0411_5a8f_aa87_354e7110f099
template <> struct __declspec(uuid("dfabb6e1-0411-5a8f-aa87-354e7110f099")) __declspec(novtable) IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Data::Json::IJsonValue>> : impl_IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Data::Json::IJsonValue>> {};
#endif

#ifndef WINRT_GENERIC_f948eac5_33eb_50f5_b5af_e7cecf0e4501
#define WINRT_GENERIC_f948eac5_33eb_50f5_b5af_e7cecf0e4501
template <> struct __declspec(uuid("f948eac5-33eb-50f5-b5af-e7cecf0e4501")) __declspec(novtable) IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Data::Json::IJsonValue>> : impl_IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Data::Json::IJsonValue>> {};
#endif


}

namespace Windows::Data::Json {

template <typename D>
struct WINRT_EBO impl_IJsonArray
{
    Windows::Data::Json::JsonObject GetObjectAt(uint32_t index) const;
    Windows::Data::Json::JsonArray GetArrayAt(uint32_t index) const;
    hstring GetStringAt(uint32_t index) const;
    double GetNumberAt(uint32_t index) const;
    bool GetBooleanAt(uint32_t index) const;
};

template <typename D>
struct WINRT_EBO impl_IJsonArrayStatics
{
    Windows::Data::Json::JsonArray Parse(hstring_ref input) const;
    bool TryParse(hstring_ref input, Windows::Data::Json::JsonArray & result) const;
};

template <typename D>
struct WINRT_EBO impl_IJsonErrorStatics2
{
    Windows::Data::Json::JsonErrorStatus GetJsonStatus(int32_t hresult) const;
};

template <typename D>
struct WINRT_EBO impl_IJsonObject
{
    Windows::Data::Json::JsonValue GetNamedValue(hstring_ref name) const;
    void SetNamedValue(hstring_ref name, const Windows::Data::Json::IJsonValue & value) const;
    Windows::Data::Json::JsonObject GetNamedObject(hstring_ref name) const;
    Windows::Data::Json::JsonArray GetNamedArray(hstring_ref name) const;
    hstring GetNamedString(hstring_ref name) const;
    double GetNamedNumber(hstring_ref name) const;
    bool GetNamedBoolean(hstring_ref name) const;
};

template <typename D>
struct WINRT_EBO impl_IJsonObjectStatics
{
    Windows::Data::Json::JsonObject Parse(hstring_ref input) const;
    bool TryParse(hstring_ref input, Windows::Data::Json::JsonObject & result) const;
};

template <typename D>
struct WINRT_EBO impl_IJsonObjectWithDefaultValues
{
    Windows::Data::Json::JsonValue GetNamedValue(hstring_ref name, const Windows::Data::Json::JsonValue & defaultValue) const;
    Windows::Data::Json::JsonObject GetNamedObject(hstring_ref name, const Windows::Data::Json::JsonObject & defaultValue) const;
    hstring GetNamedString(hstring_ref name, hstring_ref defaultValue) const;
    Windows::Data::Json::JsonArray GetNamedArray(hstring_ref name, const Windows::Data::Json::JsonArray & defaultValue) const;
    double GetNamedNumber(hstring_ref name, double defaultValue) const;
    bool GetNamedBoolean(hstring_ref name, bool defaultValue) const;
};

template <typename D>
struct WINRT_EBO impl_IJsonValue
{
    Windows::Data::Json::JsonValueType ValueType() const;
    hstring Stringify() const;
    hstring GetString() const;
    double GetNumber() const;
    bool GetBoolean() const;
    Windows::Data::Json::JsonArray GetArray() const;
    Windows::Data::Json::JsonObject GetObject() const;
};

template <typename D>
struct WINRT_EBO impl_IJsonValueStatics
{
    Windows::Data::Json::JsonValue Parse(hstring_ref input) const;
    bool TryParse(hstring_ref input, Windows::Data::Json::JsonValue & result) const;
    Windows::Data::Json::JsonValue CreateBooleanValue(bool input) const;
    Windows::Data::Json::JsonValue CreateNumberValue(double input) const;
    Windows::Data::Json::JsonValue CreateStringValue(hstring_ref input) const;
};

template <typename D>
struct WINRT_EBO impl_IJsonValueStatics2
{
    Windows::Data::Json::JsonValue CreateNullValue() const;
};

struct IJsonArray :
    Windows::IInspectable,
    impl::consume<IJsonArray>,
    impl::require<IJsonArray, Windows::Data::Json::IJsonValue>
{
    IJsonArray(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IJsonArray>(m_ptr); }
};

struct IJsonArrayStatics :
    Windows::IInspectable,
    impl::consume<IJsonArrayStatics>
{
    IJsonArrayStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IJsonArrayStatics>(m_ptr); }
};

struct IJsonErrorStatics2 :
    Windows::IInspectable,
    impl::consume<IJsonErrorStatics2>
{
    IJsonErrorStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IJsonErrorStatics2>(m_ptr); }
};

struct IJsonObject :
    Windows::IInspectable,
    impl::consume<IJsonObject>,
    impl::require<IJsonObject, Windows::Data::Json::IJsonValue>
{
    IJsonObject(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IJsonObject>(m_ptr); }
};

struct IJsonObjectStatics :
    Windows::IInspectable,
    impl::consume<IJsonObjectStatics>
{
    IJsonObjectStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IJsonObjectStatics>(m_ptr); }
};

struct IJsonObjectWithDefaultValues :
    Windows::IInspectable,
    impl::consume<IJsonObjectWithDefaultValues>,
    impl::require<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObject, Windows::Data::Json::IJsonValue>
{
    IJsonObjectWithDefaultValues(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IJsonObjectWithDefaultValues>(m_ptr); }
    using impl_IJsonObject::GetNamedArray;
    using impl_IJsonObject::GetNamedBoolean;
    using impl_IJsonObject::GetNamedNumber;
    using impl_IJsonObject::GetNamedObject;
    using impl_IJsonObject::GetNamedString;
    using impl_IJsonObject::GetNamedValue;
    using impl_IJsonObjectWithDefaultValues::GetNamedArray;
    using impl_IJsonObjectWithDefaultValues::GetNamedBoolean;
    using impl_IJsonObjectWithDefaultValues::GetNamedNumber;
    using impl_IJsonObjectWithDefaultValues::GetNamedObject;
    using impl_IJsonObjectWithDefaultValues::GetNamedString;
    using impl_IJsonObjectWithDefaultValues::GetNamedValue;
};

struct IJsonValue :
    Windows::IInspectable,
    impl::consume<IJsonValue>
{
    IJsonValue(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IJsonValue>(m_ptr); }
};

struct IJsonValueStatics :
    Windows::IInspectable,
    impl::consume<IJsonValueStatics>
{
    IJsonValueStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IJsonValueStatics>(m_ptr); }
};

struct IJsonValueStatics2 :
    Windows::IInspectable,
    impl::consume<IJsonValueStatics2>
{
    IJsonValueStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IJsonValueStatics2>(m_ptr); }
};

}

}
