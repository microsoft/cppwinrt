// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Data::Json {

struct IJsonArray;
struct IJsonArrayStatics;
struct IJsonErrorStatics2;
struct IJsonObject;
struct IJsonObjectStatics;
struct IJsonObjectWithDefaultValues;
struct IJsonValue;
struct IJsonValueStatics;
struct IJsonValueStatics2;
struct JsonArray;
struct JsonObject;
struct JsonValue;

}

namespace Windows::Data::Json {

struct IJsonArray;
struct IJsonArrayStatics;
struct IJsonErrorStatics2;
struct IJsonObject;
struct IJsonObjectStatics;
struct IJsonObjectWithDefaultValues;
struct IJsonValue;
struct IJsonValueStatics;
struct IJsonValueStatics2;
struct JsonArray;
struct JsonError;
struct JsonObject;
struct JsonValue;

}

namespace Windows::Data::Json {

enum class JsonErrorStatus
{
    Unknown = 0,
    InvalidJsonString = 1,
    InvalidJsonNumber = 2,
    JsonValueNotFound = 3,
    ImplementationLimit = 4,
};

enum class JsonValueType
{
    Null = 0,
    Boolean = 1,
    Number = 2,
    String = 3,
    Array = 4,
    Object = 5,
};

}

}
