// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Foundation.Metadata.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Foundation::Metadata {

struct ApiInformation
{
    ApiInformation() = delete;
    static bool IsTypePresent(hstring_ref typeName);
    static bool IsMethodPresent(hstring_ref typeName, hstring_ref methodName);
    static bool IsMethodPresent(hstring_ref typeName, hstring_ref methodName, uint32_t inputParameterCount);
    static bool IsEventPresent(hstring_ref typeName, hstring_ref eventName);
    static bool IsPropertyPresent(hstring_ref typeName, hstring_ref propertyName);
    static bool IsReadOnlyPropertyPresent(hstring_ref typeName, hstring_ref propertyName);
    static bool IsWriteablePropertyPresent(hstring_ref typeName, hstring_ref propertyName);
    static bool IsEnumNamedValuePresent(hstring_ref enumTypeName, hstring_ref valueName);
    static bool IsApiContractPresent(hstring_ref contractName, uint16_t majorVersion);
    static bool IsApiContractPresent(hstring_ref contractName, uint16_t majorVersion, uint16_t minorVersion);
};

}

}
