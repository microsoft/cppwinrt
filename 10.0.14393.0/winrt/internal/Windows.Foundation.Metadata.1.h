// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Foundation.Metadata.0.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Metadata {

struct __declspec(uuid("997439fe-f681-4a11-b416-c13a47e8ba36")) __declspec(novtable) IApiInformationStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_IsTypePresent(hstring typeName, bool * value) = 0;
    virtual HRESULT __stdcall abi_IsMethodPresent(hstring typeName, hstring methodName, bool * value) = 0;
    virtual HRESULT __stdcall abi_IsMethodPresentWithArity(hstring typeName, hstring methodName, uint32_t inputParameterCount, bool * value) = 0;
    virtual HRESULT __stdcall abi_IsEventPresent(hstring typeName, hstring eventName, bool * value) = 0;
    virtual HRESULT __stdcall abi_IsPropertyPresent(hstring typeName, hstring propertyName, bool * value) = 0;
    virtual HRESULT __stdcall abi_IsReadOnlyPropertyPresent(hstring typeName, hstring propertyName, bool * value) = 0;
    virtual HRESULT __stdcall abi_IsWriteablePropertyPresent(hstring typeName, hstring propertyName, bool * value) = 0;
    virtual HRESULT __stdcall abi_IsEnumNamedValuePresent(hstring enumTypeName, hstring valueName, bool * value) = 0;
    virtual HRESULT __stdcall abi_IsApiContractPresentByMajor(hstring contractName, uint16_t majorVersion, bool * value) = 0;
    virtual HRESULT __stdcall abi_IsApiContractPresentByMajorAndMinor(hstring contractName, uint16_t majorVersion, uint16_t minorVersion, bool * value) = 0;
};

}

namespace ABI {


}

namespace Windows::Foundation::Metadata {

template <typename T> struct impl_IApiInformationStatics;

}

namespace impl {

template <> struct traits<Windows::Foundation::Metadata::IApiInformationStatics>
{
    using abi = ABI::Windows::Foundation::Metadata::IApiInformationStatics;
    template <typename D> using consume = Windows::Foundation::Metadata::impl_IApiInformationStatics<D>;
};

template <> struct traits<Windows::Foundation::Metadata::ApiInformation>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Foundation.Metadata.ApiInformation"; }
};

}

}
