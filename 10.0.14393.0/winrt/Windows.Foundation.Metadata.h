// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.Metadata.3.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Foundation::Metadata::IApiInformationStatics> : produce_base<D, Windows::Foundation::Metadata::IApiInformationStatics>
{
    HRESULT __stdcall abi_IsTypePresent(abi_arg_in<hstring> typeName, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsTypePresent(*reinterpret_cast<const hstring *>(&typeName)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsMethodPresent(abi_arg_in<hstring> typeName, abi_arg_in<hstring> methodName, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsMethodPresent(*reinterpret_cast<const hstring *>(&typeName), *reinterpret_cast<const hstring *>(&methodName)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsMethodPresentWithArity(abi_arg_in<hstring> typeName, abi_arg_in<hstring> methodName, uint32_t inputParameterCount, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsMethodPresent(*reinterpret_cast<const hstring *>(&typeName), *reinterpret_cast<const hstring *>(&methodName), inputParameterCount));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsEventPresent(abi_arg_in<hstring> typeName, abi_arg_in<hstring> eventName, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsEventPresent(*reinterpret_cast<const hstring *>(&typeName), *reinterpret_cast<const hstring *>(&eventName)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsPropertyPresent(abi_arg_in<hstring> typeName, abi_arg_in<hstring> propertyName, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsPropertyPresent(*reinterpret_cast<const hstring *>(&typeName), *reinterpret_cast<const hstring *>(&propertyName)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsReadOnlyPropertyPresent(abi_arg_in<hstring> typeName, abi_arg_in<hstring> propertyName, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsReadOnlyPropertyPresent(*reinterpret_cast<const hstring *>(&typeName), *reinterpret_cast<const hstring *>(&propertyName)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsWriteablePropertyPresent(abi_arg_in<hstring> typeName, abi_arg_in<hstring> propertyName, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsWriteablePropertyPresent(*reinterpret_cast<const hstring *>(&typeName), *reinterpret_cast<const hstring *>(&propertyName)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsEnumNamedValuePresent(abi_arg_in<hstring> enumTypeName, abi_arg_in<hstring> valueName, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsEnumNamedValuePresent(*reinterpret_cast<const hstring *>(&enumTypeName), *reinterpret_cast<const hstring *>(&valueName)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsApiContractPresentByMajor(abi_arg_in<hstring> contractName, uint16_t majorVersion, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsApiContractPresent(*reinterpret_cast<const hstring *>(&contractName), majorVersion));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsApiContractPresentByMajorAndMinor(abi_arg_in<hstring> contractName, uint16_t majorVersion, uint16_t minorVersion, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsApiContractPresent(*reinterpret_cast<const hstring *>(&contractName), majorVersion, minorVersion));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Foundation::Metadata {

template <typename D> bool impl_IApiInformationStatics<D>::IsTypePresent(hstring_ref typeName) const
{
    bool value {};
    check_hresult(static_cast<const IApiInformationStatics &>(static_cast<const D &>(*this))->abi_IsTypePresent(get(typeName), &value));
    return value;
}

template <typename D> bool impl_IApiInformationStatics<D>::IsMethodPresent(hstring_ref typeName, hstring_ref methodName) const
{
    bool value {};
    check_hresult(static_cast<const IApiInformationStatics &>(static_cast<const D &>(*this))->abi_IsMethodPresent(get(typeName), get(methodName), &value));
    return value;
}

template <typename D> bool impl_IApiInformationStatics<D>::IsMethodPresent(hstring_ref typeName, hstring_ref methodName, uint32_t inputParameterCount) const
{
    bool value {};
    check_hresult(static_cast<const IApiInformationStatics &>(static_cast<const D &>(*this))->abi_IsMethodPresentWithArity(get(typeName), get(methodName), inputParameterCount, &value));
    return value;
}

template <typename D> bool impl_IApiInformationStatics<D>::IsEventPresent(hstring_ref typeName, hstring_ref eventName) const
{
    bool value {};
    check_hresult(static_cast<const IApiInformationStatics &>(static_cast<const D &>(*this))->abi_IsEventPresent(get(typeName), get(eventName), &value));
    return value;
}

template <typename D> bool impl_IApiInformationStatics<D>::IsPropertyPresent(hstring_ref typeName, hstring_ref propertyName) const
{
    bool value {};
    check_hresult(static_cast<const IApiInformationStatics &>(static_cast<const D &>(*this))->abi_IsPropertyPresent(get(typeName), get(propertyName), &value));
    return value;
}

template <typename D> bool impl_IApiInformationStatics<D>::IsReadOnlyPropertyPresent(hstring_ref typeName, hstring_ref propertyName) const
{
    bool value {};
    check_hresult(static_cast<const IApiInformationStatics &>(static_cast<const D &>(*this))->abi_IsReadOnlyPropertyPresent(get(typeName), get(propertyName), &value));
    return value;
}

template <typename D> bool impl_IApiInformationStatics<D>::IsWriteablePropertyPresent(hstring_ref typeName, hstring_ref propertyName) const
{
    bool value {};
    check_hresult(static_cast<const IApiInformationStatics &>(static_cast<const D &>(*this))->abi_IsWriteablePropertyPresent(get(typeName), get(propertyName), &value));
    return value;
}

template <typename D> bool impl_IApiInformationStatics<D>::IsEnumNamedValuePresent(hstring_ref enumTypeName, hstring_ref valueName) const
{
    bool value {};
    check_hresult(static_cast<const IApiInformationStatics &>(static_cast<const D &>(*this))->abi_IsEnumNamedValuePresent(get(enumTypeName), get(valueName), &value));
    return value;
}

template <typename D> bool impl_IApiInformationStatics<D>::IsApiContractPresent(hstring_ref contractName, uint16_t majorVersion) const
{
    bool value {};
    check_hresult(static_cast<const IApiInformationStatics &>(static_cast<const D &>(*this))->abi_IsApiContractPresentByMajor(get(contractName), majorVersion, &value));
    return value;
}

template <typename D> bool impl_IApiInformationStatics<D>::IsApiContractPresent(hstring_ref contractName, uint16_t majorVersion, uint16_t minorVersion) const
{
    bool value {};
    check_hresult(static_cast<const IApiInformationStatics &>(static_cast<const D &>(*this))->abi_IsApiContractPresentByMajorAndMinor(get(contractName), majorVersion, minorVersion, &value));
    return value;
}

inline bool ApiInformation::IsTypePresent(hstring_ref typeName)
{
    return get_activation_factory<ApiInformation, IApiInformationStatics>().IsTypePresent(typeName);
}

inline bool ApiInformation::IsMethodPresent(hstring_ref typeName, hstring_ref methodName)
{
    return get_activation_factory<ApiInformation, IApiInformationStatics>().IsMethodPresent(typeName, methodName);
}

inline bool ApiInformation::IsMethodPresent(hstring_ref typeName, hstring_ref methodName, uint32_t inputParameterCount)
{
    return get_activation_factory<ApiInformation, IApiInformationStatics>().IsMethodPresent(typeName, methodName, inputParameterCount);
}

inline bool ApiInformation::IsEventPresent(hstring_ref typeName, hstring_ref eventName)
{
    return get_activation_factory<ApiInformation, IApiInformationStatics>().IsEventPresent(typeName, eventName);
}

inline bool ApiInformation::IsPropertyPresent(hstring_ref typeName, hstring_ref propertyName)
{
    return get_activation_factory<ApiInformation, IApiInformationStatics>().IsPropertyPresent(typeName, propertyName);
}

inline bool ApiInformation::IsReadOnlyPropertyPresent(hstring_ref typeName, hstring_ref propertyName)
{
    return get_activation_factory<ApiInformation, IApiInformationStatics>().IsReadOnlyPropertyPresent(typeName, propertyName);
}

inline bool ApiInformation::IsWriteablePropertyPresent(hstring_ref typeName, hstring_ref propertyName)
{
    return get_activation_factory<ApiInformation, IApiInformationStatics>().IsWriteablePropertyPresent(typeName, propertyName);
}

inline bool ApiInformation::IsEnumNamedValuePresent(hstring_ref enumTypeName, hstring_ref valueName)
{
    return get_activation_factory<ApiInformation, IApiInformationStatics>().IsEnumNamedValuePresent(enumTypeName, valueName);
}

inline bool ApiInformation::IsApiContractPresent(hstring_ref contractName, uint16_t majorVersion)
{
    return get_activation_factory<ApiInformation, IApiInformationStatics>().IsApiContractPresent(contractName, majorVersion);
}

inline bool ApiInformation::IsApiContractPresent(hstring_ref contractName, uint16_t majorVersion, uint16_t minorVersion)
{
    return get_activation_factory<ApiInformation, IApiInformationStatics>().IsApiContractPresent(contractName, majorVersion, minorVersion);
}

}

}
