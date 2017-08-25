// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Data.Json.1.h"

WINRT_EXPORT namespace winrt::Windows::Data::Json {

struct WINRT_EBO JsonArray :
    Windows::Data::Json::IJsonArray,
    impl::require<JsonArray, Windows::Foundation::Collections::IIterable<Windows::Data::Json::IJsonValue>, Windows::Foundation::Collections::IVector<Windows::Data::Json::IJsonValue>, Windows::Foundation::IStringable>
{
    JsonArray(std::nullptr_t) noexcept {}
    JsonArray();
    static Windows::Data::Json::JsonArray Parse(param::hstring const& input);
    static bool TryParse(param::hstring const& input, Windows::Data::Json::JsonArray& result);
};

struct JsonError
{
    JsonError() = delete;
    static Windows::Data::Json::JsonErrorStatus GetJsonStatus(int32_t hresult);
};

struct WINRT_EBO JsonObject :
    Windows::Data::Json::IJsonObject,
    impl::require<JsonObject, Windows::Data::Json::IJsonObjectWithDefaultValues, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Data::Json::IJsonValue>>, Windows::Foundation::Collections::IMap<hstring, Windows::Data::Json::IJsonValue>, Windows::Foundation::IStringable>
{
    JsonObject(std::nullptr_t) noexcept {}
    JsonObject();
    using impl::consume_t<JsonObject, Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedArray;
    using Windows::Data::Json::IJsonObject::GetNamedArray;
    using impl::consume_t<JsonObject, Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedBoolean;
    using Windows::Data::Json::IJsonObject::GetNamedBoolean;
    using impl::consume_t<JsonObject, Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedNumber;
    using Windows::Data::Json::IJsonObject::GetNamedNumber;
    using impl::consume_t<JsonObject, Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedObject;
    using Windows::Data::Json::IJsonObject::GetNamedObject;
    using impl::consume_t<JsonObject, Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedString;
    using Windows::Data::Json::IJsonObject::GetNamedString;
    using impl::consume_t<JsonObject, Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedValue;
    using Windows::Data::Json::IJsonObject::GetNamedValue;
    static Windows::Data::Json::JsonObject Parse(param::hstring const& input);
    static bool TryParse(param::hstring const& input, Windows::Data::Json::JsonObject& result);
};

struct WINRT_EBO JsonValue :
    Windows::Data::Json::IJsonValue,
    impl::require<JsonValue, Windows::Foundation::IStringable>
{
    JsonValue(std::nullptr_t) noexcept {}
    static Windows::Data::Json::JsonValue Parse(param::hstring const& input);
    static bool TryParse(param::hstring const& input, Windows::Data::Json::JsonValue& result);
    static Windows::Data::Json::JsonValue CreateBooleanValue(bool input);
    static Windows::Data::Json::JsonValue CreateNumberValue(double input);
    static Windows::Data::Json::JsonValue CreateStringValue(param::hstring const& input);
    static Windows::Data::Json::JsonValue CreateNullValue();
};

}
