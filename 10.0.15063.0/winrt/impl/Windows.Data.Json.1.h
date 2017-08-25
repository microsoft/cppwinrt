// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Data.Json.0.h"

WINRT_EXPORT namespace winrt::Windows::Data::Json {

struct WINRT_EBO IJsonArray :
    Windows::Foundation::IInspectable,
    impl::consume_t<IJsonArray>,
    impl::require<IJsonArray, Windows::Data::Json::IJsonValue>
{
    IJsonArray(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IJsonArrayStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IJsonArrayStatics>
{
    IJsonArrayStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IJsonErrorStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IJsonErrorStatics2>
{
    IJsonErrorStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IJsonObject :
    Windows::Foundation::IInspectable,
    impl::consume_t<IJsonObject>,
    impl::require<IJsonObject, Windows::Data::Json::IJsonValue>
{
    IJsonObject(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IJsonObjectStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IJsonObjectStatics>
{
    IJsonObjectStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IJsonObjectWithDefaultValues :
    Windows::Foundation::IInspectable,
    impl::consume_t<IJsonObjectWithDefaultValues>,
    impl::require<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObject, Windows::Data::Json::IJsonValue>
{
    IJsonObjectWithDefaultValues(std::nullptr_t = nullptr) noexcept {}
    using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObject>::GetNamedArray;
    using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedArray;
    using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObject>::GetNamedBoolean;
    using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedBoolean;
    using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObject>::GetNamedNumber;
    using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedNumber;
    using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObject>::GetNamedObject;
    using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedObject;
    using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObject>::GetNamedString;
    using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedString;
    using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObject>::GetNamedValue;
    using impl::consume_t<IJsonObjectWithDefaultValues, Windows::Data::Json::IJsonObjectWithDefaultValues>::GetNamedValue;
};

struct WINRT_EBO IJsonValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IJsonValue>
{
    IJsonValue(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IJsonValueStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IJsonValueStatics>
{
    IJsonValueStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IJsonValueStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IJsonValueStatics2>
{
    IJsonValueStatics2(std::nullptr_t = nullptr) noexcept {}
};

}
