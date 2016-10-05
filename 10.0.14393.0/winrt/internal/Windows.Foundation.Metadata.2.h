// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Foundation.Metadata.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Foundation::Metadata {

template <typename D>
struct WINRT_EBO impl_IApiInformationStatics
{
    bool IsTypePresent(hstring_ref typeName) const;
    bool IsMethodPresent(hstring_ref typeName, hstring_ref methodName) const;
    bool IsMethodPresent(hstring_ref typeName, hstring_ref methodName, uint32_t inputParameterCount) const;
    bool IsEventPresent(hstring_ref typeName, hstring_ref eventName) const;
    bool IsPropertyPresent(hstring_ref typeName, hstring_ref propertyName) const;
    bool IsReadOnlyPropertyPresent(hstring_ref typeName, hstring_ref propertyName) const;
    bool IsWriteablePropertyPresent(hstring_ref typeName, hstring_ref propertyName) const;
    bool IsEnumNamedValuePresent(hstring_ref enumTypeName, hstring_ref valueName) const;
    bool IsApiContractPresent(hstring_ref contractName, uint16_t majorVersion) const;
    bool IsApiContractPresent(hstring_ref contractName, uint16_t majorVersion, uint16_t minorVersion) const;
};

struct IApiInformationStatics :
    Windows::IInspectable,
    impl::consume<IApiInformationStatics>
{
    IApiInformationStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IApiInformationStatics>(m_ptr); }
};

}

}
