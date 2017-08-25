// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation::Metadata {

enum class AttributeTargets : unsigned
{
    All = 0xFFFFFFFF,
    Delegate = 0x1,
    Enum = 0x2,
    Event = 0x4,
    Field = 0x8,
    Interface = 0x10,
    Method = 0x40,
    Parameter = 0x80,
    Property = 0x100,
    RuntimeClass = 0x200,
    Struct = 0x400,
    InterfaceImpl = 0x800,
    ApiContract = 0x2000,
};

DEFINE_ENUM_FLAG_OPERATORS(AttributeTargets)

enum class CompositionType
{
    Protected = 1,
    Public = 2,
};

enum class DeprecationType
{
    Deprecate = 0,
    Remove = 1,
};

enum class FeatureStage
{
    AlwaysDisabled = 0,
    DisabledByDefault = 1,
    EnabledByDefault = 2,
    AlwaysEnabled = 3,
};

enum class GCPressureAmount
{
    Low = 0,
    Medium = 1,
    High = 2,
};

enum class MarshalingType
{
    None = 1,
    Agile = 2,
    Standard = 3,
    InvalidMarshaling = 0,
};

enum class Platform
{
    Windows = 0,
    WindowsPhone = 1,
};

enum class ThreadingModel
{
    STA = 1,
    MTA = 2,
    Both = 3,
    InvalidThreading = 0,
};

struct IApiInformationStatics;
struct ApiInformation;

}

namespace winrt::impl {

template <> struct category<Windows::Foundation::Metadata::IApiInformationStatics>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Metadata::ApiInformation>{ using type = class_category; };
template <> struct category<Windows::Foundation::Metadata::AttributeTargets>{ using type = enum_category; };
template <> struct category<Windows::Foundation::Metadata::CompositionType>{ using type = enum_category; };
template <> struct category<Windows::Foundation::Metadata::DeprecationType>{ using type = enum_category; };
template <> struct category<Windows::Foundation::Metadata::FeatureStage>{ using type = enum_category; };
template <> struct category<Windows::Foundation::Metadata::GCPressureAmount>{ using type = enum_category; };
template <> struct category<Windows::Foundation::Metadata::MarshalingType>{ using type = enum_category; };
template <> struct category<Windows::Foundation::Metadata::Platform>{ using type = enum_category; };
template <> struct category<Windows::Foundation::Metadata::ThreadingModel>{ using type = enum_category; };
template <> struct name<Windows::Foundation::Metadata::IApiInformationStatics>{ static constexpr auto & value{ L"Windows.Foundation.Metadata.IApiInformationStatics" }; };
template <> struct name<Windows::Foundation::Metadata::ApiInformation>{ static constexpr auto & value{ L"Windows.Foundation.Metadata.ApiInformation" }; };
template <> struct name<Windows::Foundation::Metadata::AttributeTargets>{ static constexpr auto & value{ L"Windows.Foundation.Metadata.AttributeTargets" }; };
template <> struct name<Windows::Foundation::Metadata::CompositionType>{ static constexpr auto & value{ L"Windows.Foundation.Metadata.CompositionType" }; };
template <> struct name<Windows::Foundation::Metadata::DeprecationType>{ static constexpr auto & value{ L"Windows.Foundation.Metadata.DeprecationType" }; };
template <> struct name<Windows::Foundation::Metadata::FeatureStage>{ static constexpr auto & value{ L"Windows.Foundation.Metadata.FeatureStage" }; };
template <> struct name<Windows::Foundation::Metadata::GCPressureAmount>{ static constexpr auto & value{ L"Windows.Foundation.Metadata.GCPressureAmount" }; };
template <> struct name<Windows::Foundation::Metadata::MarshalingType>{ static constexpr auto & value{ L"Windows.Foundation.Metadata.MarshalingType" }; };
template <> struct name<Windows::Foundation::Metadata::Platform>{ static constexpr auto & value{ L"Windows.Foundation.Metadata.Platform" }; };
template <> struct name<Windows::Foundation::Metadata::ThreadingModel>{ static constexpr auto & value{ L"Windows.Foundation.Metadata.ThreadingModel" }; };
template <> struct guid<Windows::Foundation::Metadata::IApiInformationStatics>{ static constexpr GUID value{ 0x997439FE,0xF681,0x4A11,{ 0xB4,0x16,0xC1,0x3A,0x47,0xE8,0xBA,0x36 } }; };

template <typename D>
struct consume_Windows_Foundation_Metadata_IApiInformationStatics
{
    bool IsTypePresent(param::hstring const& typeName) const;
    bool IsMethodPresent(param::hstring const& typeName, param::hstring const& methodName) const;
    bool IsMethodPresent(param::hstring const& typeName, param::hstring const& methodName, uint32_t inputParameterCount) const;
    bool IsEventPresent(param::hstring const& typeName, param::hstring const& eventName) const;
    bool IsPropertyPresent(param::hstring const& typeName, param::hstring const& propertyName) const;
    bool IsReadOnlyPropertyPresent(param::hstring const& typeName, param::hstring const& propertyName) const;
    bool IsWriteablePropertyPresent(param::hstring const& typeName, param::hstring const& propertyName) const;
    bool IsEnumNamedValuePresent(param::hstring const& enumTypeName, param::hstring const& valueName) const;
    bool IsApiContractPresent(param::hstring const& contractName, uint16_t majorVersion) const;
    bool IsApiContractPresent(param::hstring const& contractName, uint16_t majorVersion, uint16_t minorVersion) const;
};
template <> struct consume<Windows::Foundation::Metadata::IApiInformationStatics> { template <typename D> using type = consume_Windows_Foundation_Metadata_IApiInformationStatics<D>; };

template <> struct abi<Windows::Foundation::Metadata::IApiInformationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IsTypePresent(HSTRING typeName, bool* value) = 0;
    virtual HRESULT __stdcall IsMethodPresent(HSTRING typeName, HSTRING methodName, bool* value) = 0;
    virtual HRESULT __stdcall IsMethodPresentWithArity(HSTRING typeName, HSTRING methodName, uint32_t inputParameterCount, bool* value) = 0;
    virtual HRESULT __stdcall IsEventPresent(HSTRING typeName, HSTRING eventName, bool* value) = 0;
    virtual HRESULT __stdcall IsPropertyPresent(HSTRING typeName, HSTRING propertyName, bool* value) = 0;
    virtual HRESULT __stdcall IsReadOnlyPropertyPresent(HSTRING typeName, HSTRING propertyName, bool* value) = 0;
    virtual HRESULT __stdcall IsWriteablePropertyPresent(HSTRING typeName, HSTRING propertyName, bool* value) = 0;
    virtual HRESULT __stdcall IsEnumNamedValuePresent(HSTRING enumTypeName, HSTRING valueName, bool* value) = 0;
    virtual HRESULT __stdcall IsApiContractPresentByMajor(HSTRING contractName, uint16_t majorVersion, bool* value) = 0;
    virtual HRESULT __stdcall IsApiContractPresentByMajorAndMinor(HSTRING contractName, uint16_t majorVersion, uint16_t minorVersion, bool* value) = 0;
};};

}
