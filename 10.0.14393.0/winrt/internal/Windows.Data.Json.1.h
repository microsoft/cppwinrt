// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Data.Json.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Data::Json {

struct __declspec(uuid("08c1ddb6-0cbd-4a9a-b5d3-2f852dc37e81")) __declspec(novtable) IJsonArray : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetObjectAt(uint32_t index, Windows::Data::Json::IJsonObject ** returnValue) = 0;
    virtual HRESULT __stdcall abi_GetArrayAt(uint32_t index, Windows::Data::Json::IJsonArray ** returnValue) = 0;
    virtual HRESULT __stdcall abi_GetStringAt(uint32_t index, hstring * returnValue) = 0;
    virtual HRESULT __stdcall abi_GetNumberAt(uint32_t index, double * returnValue) = 0;
    virtual HRESULT __stdcall abi_GetBooleanAt(uint32_t index, bool * returnValue) = 0;
};

struct __declspec(uuid("db1434a9-e164-499f-93e2-8a8f49bb90ba")) __declspec(novtable) IJsonArrayStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Parse(hstring input, Windows::Data::Json::IJsonArray ** jsonArray) = 0;
    virtual HRESULT __stdcall abi_TryParse(hstring input, Windows::Data::Json::IJsonArray ** result, bool * succeeded) = 0;
};

struct __declspec(uuid("404030da-87d0-436c-83ab-fc7b12c0cc26")) __declspec(novtable) IJsonErrorStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetJsonStatus(int32_t hresult, winrt::Windows::Data::Json::JsonErrorStatus * status) = 0;
};

struct __declspec(uuid("064e24dd-29c2-4f83-9ac1-9ee11578beb3")) __declspec(novtable) IJsonObject : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetNamedValue(hstring name, Windows::Data::Json::IJsonValue ** returnValue) = 0;
    virtual HRESULT __stdcall abi_SetNamedValue(hstring name, Windows::Data::Json::IJsonValue * value) = 0;
    virtual HRESULT __stdcall abi_GetNamedObject(hstring name, Windows::Data::Json::IJsonObject ** returnValue) = 0;
    virtual HRESULT __stdcall abi_GetNamedArray(hstring name, Windows::Data::Json::IJsonArray ** returnValue) = 0;
    virtual HRESULT __stdcall abi_GetNamedString(hstring name, hstring * returnValue) = 0;
    virtual HRESULT __stdcall abi_GetNamedNumber(hstring name, double * returnValue) = 0;
    virtual HRESULT __stdcall abi_GetNamedBoolean(hstring name, bool * returnValue) = 0;
};

struct __declspec(uuid("2289f159-54de-45d8-abcc-22603fa066a0")) __declspec(novtable) IJsonObjectStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Parse(hstring input, Windows::Data::Json::IJsonObject ** jsonObject) = 0;
    virtual HRESULT __stdcall abi_TryParse(hstring input, Windows::Data::Json::IJsonObject ** result, bool * succeeded) = 0;
};

struct __declspec(uuid("d960d2a2-b7f0-4f00-8e44-d82cf415ea13")) __declspec(novtable) IJsonObjectWithDefaultValues : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetNamedValueOrDefault(hstring name, Windows::Data::Json::IJsonValue * defaultValue, Windows::Data::Json::IJsonValue ** returnValue) = 0;
    virtual HRESULT __stdcall abi_GetNamedObjectOrDefault(hstring name, Windows::Data::Json::IJsonObject * defaultValue, Windows::Data::Json::IJsonObject ** returnValue) = 0;
    virtual HRESULT __stdcall abi_GetNamedStringOrDefault(hstring name, hstring defaultValue, hstring * returnValue) = 0;
    virtual HRESULT __stdcall abi_GetNamedArrayOrDefault(hstring name, Windows::Data::Json::IJsonArray * defaultValue, Windows::Data::Json::IJsonArray ** returnValue) = 0;
    virtual HRESULT __stdcall abi_GetNamedNumberOrDefault(hstring name, double defaultValue, double * returnValue) = 0;
    virtual HRESULT __stdcall abi_GetNamedBooleanOrDefault(hstring name, bool defaultValue, bool * returnValue) = 0;
};

struct __declspec(uuid("a3219ecb-f0b3-4dcd-beee-19d48cd3ed1e")) __declspec(novtable) IJsonValue : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ValueType(winrt::Windows::Data::Json::JsonValueType * value) = 0;
    virtual HRESULT __stdcall abi_Stringify(hstring * returnValue) = 0;
    virtual HRESULT __stdcall abi_GetString(hstring * returnValue) = 0;
    virtual HRESULT __stdcall abi_GetNumber(double * returnValue) = 0;
    virtual HRESULT __stdcall abi_GetBoolean(bool * returnValue) = 0;
    virtual HRESULT __stdcall abi_GetArray(Windows::Data::Json::IJsonArray ** returnValue) = 0;
    virtual HRESULT __stdcall abi_GetObject(Windows::Data::Json::IJsonObject ** returnValue) = 0;
};

struct __declspec(uuid("5f6b544a-2f53-48e1-91a3-f78b50a6345c")) __declspec(novtable) IJsonValueStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Parse(hstring input, Windows::Data::Json::IJsonValue ** jsonValue) = 0;
    virtual HRESULT __stdcall abi_TryParse(hstring input, Windows::Data::Json::IJsonValue ** result, bool * succeeded) = 0;
    virtual HRESULT __stdcall abi_CreateBooleanValue(bool input, Windows::Data::Json::IJsonValue ** jsonValue) = 0;
    virtual HRESULT __stdcall abi_CreateNumberValue(double input, Windows::Data::Json::IJsonValue ** jsonValue) = 0;
    virtual HRESULT __stdcall abi_CreateStringValue(hstring input, Windows::Data::Json::IJsonValue ** jsonValue) = 0;
};

struct __declspec(uuid("1d9ecbe4-3fe8-4335-8392-93d8e36865f0")) __declspec(novtable) IJsonValueStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateNullValue(Windows::Data::Json::IJsonValue ** jsonValue) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Data::Json::JsonArray> { using default_interface = Windows::Data::Json::IJsonArray; };
template <> struct traits<Windows::Data::Json::JsonObject> { using default_interface = Windows::Data::Json::IJsonObject; };
template <> struct traits<Windows::Data::Json::JsonValue> { using default_interface = Windows::Data::Json::IJsonValue; };

}

namespace Windows::Data::Json {

template <typename T> struct impl_IJsonArray;
template <typename T> struct impl_IJsonArrayStatics;
template <typename T> struct impl_IJsonErrorStatics2;
template <typename T> struct impl_IJsonObject;
template <typename T> struct impl_IJsonObjectStatics;
template <typename T> struct impl_IJsonObjectWithDefaultValues;
template <typename T> struct impl_IJsonValue;
template <typename T> struct impl_IJsonValueStatics;
template <typename T> struct impl_IJsonValueStatics2;

}

namespace impl {

template <> struct traits<Windows::Data::Json::IJsonArray>
{
    using abi = ABI::Windows::Data::Json::IJsonArray;
    template <typename D> using consume = Windows::Data::Json::impl_IJsonArray<D>;
};

template <> struct traits<Windows::Data::Json::IJsonArrayStatics>
{
    using abi = ABI::Windows::Data::Json::IJsonArrayStatics;
    template <typename D> using consume = Windows::Data::Json::impl_IJsonArrayStatics<D>;
};

template <> struct traits<Windows::Data::Json::IJsonErrorStatics2>
{
    using abi = ABI::Windows::Data::Json::IJsonErrorStatics2;
    template <typename D> using consume = Windows::Data::Json::impl_IJsonErrorStatics2<D>;
};

template <> struct traits<Windows::Data::Json::IJsonObject>
{
    using abi = ABI::Windows::Data::Json::IJsonObject;
    template <typename D> using consume = Windows::Data::Json::impl_IJsonObject<D>;
};

template <> struct traits<Windows::Data::Json::IJsonObjectStatics>
{
    using abi = ABI::Windows::Data::Json::IJsonObjectStatics;
    template <typename D> using consume = Windows::Data::Json::impl_IJsonObjectStatics<D>;
};

template <> struct traits<Windows::Data::Json::IJsonObjectWithDefaultValues>
{
    using abi = ABI::Windows::Data::Json::IJsonObjectWithDefaultValues;
    template <typename D> using consume = Windows::Data::Json::impl_IJsonObjectWithDefaultValues<D>;
};

template <> struct traits<Windows::Data::Json::IJsonValue>
{
    using abi = ABI::Windows::Data::Json::IJsonValue;
    template <typename D> using consume = Windows::Data::Json::impl_IJsonValue<D>;
};

template <> struct traits<Windows::Data::Json::IJsonValueStatics>
{
    using abi = ABI::Windows::Data::Json::IJsonValueStatics;
    template <typename D> using consume = Windows::Data::Json::impl_IJsonValueStatics<D>;
};

template <> struct traits<Windows::Data::Json::IJsonValueStatics2>
{
    using abi = ABI::Windows::Data::Json::IJsonValueStatics2;
    template <typename D> using consume = Windows::Data::Json::impl_IJsonValueStatics2<D>;
};

template <> struct traits<Windows::Data::Json::JsonArray>
{
    using abi = ABI::Windows::Data::Json::JsonArray;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Data.Json.JsonArray"; }
};

template <> struct traits<Windows::Data::Json::JsonError>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Data.Json.JsonError"; }
};

template <> struct traits<Windows::Data::Json::JsonObject>
{
    using abi = ABI::Windows::Data::Json::JsonObject;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Data.Json.JsonObject"; }
};

template <> struct traits<Windows::Data::Json::JsonValue>
{
    using abi = ABI::Windows::Data::Json::JsonValue;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Data.Json.JsonValue"; }
};

}

}
