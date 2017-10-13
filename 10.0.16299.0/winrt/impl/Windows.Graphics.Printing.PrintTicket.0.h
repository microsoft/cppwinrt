// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Data::Xml::Dom {

struct IXmlNode;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Printing::PrintTicket {

enum class PrintTicketFeatureSelectionType : int32_t
{
    PickOne = 0,
    PickMany = 1,
};

enum class PrintTicketParameterDataType : int32_t
{
    Integer = 0,
    NumericString = 1,
    String = 2,
};

enum class PrintTicketValueType : int32_t
{
    Integer = 0,
    String = 1,
    Unknown = 2,
};

struct IPrintTicketCapabilities;
struct IPrintTicketFeature;
struct IPrintTicketOption;
struct IPrintTicketParameterDefinition;
struct IPrintTicketParameterInitializer;
struct IPrintTicketValue;
struct IWorkflowPrintTicket;
struct IWorkflowPrintTicketValidationResult;
struct PrintTicketCapabilities;
struct PrintTicketFeature;
struct PrintTicketOption;
struct PrintTicketParameterDefinition;
struct PrintTicketParameterInitializer;
struct PrintTicketValue;
struct WorkflowPrintTicket;
struct WorkflowPrintTicketValidationResult;

}

namespace winrt::impl {

template <> struct category<Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::PrintTicket::IPrintTicketOption>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterDefinition>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterInitializer>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::PrintTicket::IPrintTicketValue>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicketValidationResult>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::PrintTicket::PrintTicketCapabilities>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::PrintTicket::PrintTicketOption>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::PrintTicket::PrintTicketParameterDefinition>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::PrintTicket::PrintTicketParameterInitializer>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::PrintTicket::PrintTicketValue>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicketValidationResult>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::PrintTicket::PrintTicketFeatureSelectionType>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Printing::PrintTicket::PrintTicketParameterDataType>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Printing::PrintTicket::PrintTicketValueType>{ using type = enum_category; };
template <> struct name<Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.IPrintTicketCapabilities" }; };
template <> struct name<Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.IPrintTicketFeature" }; };
template <> struct name<Windows::Graphics::Printing::PrintTicket::IPrintTicketOption>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.IPrintTicketOption" }; };
template <> struct name<Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterDefinition>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.IPrintTicketParameterDefinition" }; };
template <> struct name<Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterInitializer>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.IPrintTicketParameterInitializer" }; };
template <> struct name<Windows::Graphics::Printing::PrintTicket::IPrintTicketValue>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.IPrintTicketValue" }; };
template <> struct name<Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.IWorkflowPrintTicket" }; };
template <> struct name<Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicketValidationResult>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.IWorkflowPrintTicketValidationResult" }; };
template <> struct name<Windows::Graphics::Printing::PrintTicket::PrintTicketCapabilities>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.PrintTicketCapabilities" }; };
template <> struct name<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.PrintTicketFeature" }; };
template <> struct name<Windows::Graphics::Printing::PrintTicket::PrintTicketOption>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.PrintTicketOption" }; };
template <> struct name<Windows::Graphics::Printing::PrintTicket::PrintTicketParameterDefinition>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.PrintTicketParameterDefinition" }; };
template <> struct name<Windows::Graphics::Printing::PrintTicket::PrintTicketParameterInitializer>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.PrintTicketParameterInitializer" }; };
template <> struct name<Windows::Graphics::Printing::PrintTicket::PrintTicketValue>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.PrintTicketValue" }; };
template <> struct name<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.WorkflowPrintTicket" }; };
template <> struct name<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicketValidationResult>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.WorkflowPrintTicketValidationResult" }; };
template <> struct name<Windows::Graphics::Printing::PrintTicket::PrintTicketFeatureSelectionType>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.PrintTicketFeatureSelectionType" }; };
template <> struct name<Windows::Graphics::Printing::PrintTicket::PrintTicketParameterDataType>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.PrintTicketParameterDataType" }; };
template <> struct name<Windows::Graphics::Printing::PrintTicket::PrintTicketValueType>{ static constexpr auto & value{ L"Windows.Graphics.Printing.PrintTicket.PrintTicketValueType" }; };
template <> struct guid<Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities>{ static constexpr GUID value{ 0x8C45508B,0xBBDC,0x4256,{ 0xA1,0x42,0x2F,0xD6,0x15,0xEC,0xB4,0x16 } }; };
template <> struct guid<Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature>{ static constexpr GUID value{ 0xE7607D6A,0x59F5,0x4103,{ 0x88,0x58,0xB9,0x77,0x10,0x96,0x3D,0x39 } }; };
template <> struct guid<Windows::Graphics::Printing::PrintTicket::IPrintTicketOption>{ static constexpr GUID value{ 0xB086CF90,0xB367,0x4E4B,{ 0xBD,0x48,0x9C,0x78,0xA0,0xBB,0x31,0xCE } }; };
template <> struct guid<Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterDefinition>{ static constexpr GUID value{ 0xD6BAB4E4,0x2962,0x4C01,{ 0xB7,0xF3,0x9A,0x92,0x94,0xEB,0x83,0x35 } }; };
template <> struct guid<Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterInitializer>{ static constexpr GUID value{ 0x5E3335BB,0xA0A5,0x48B1,{ 0x9D,0x5C,0x07,0x11,0x6D,0xDC,0x59,0x7A } }; };
template <> struct guid<Windows::Graphics::Printing::PrintTicket::IPrintTicketValue>{ static constexpr GUID value{ 0x66B30A32,0x244D,0x4E22,{ 0xA9,0x8B,0xBB,0x3C,0xF1,0xF2,0xDD,0x91 } }; };
template <> struct guid<Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket>{ static constexpr GUID value{ 0x41D52285,0x35E8,0x448E,{ 0xA8,0xC5,0xE4,0xB6,0xA2,0xCF,0x82,0x6C } }; };
template <> struct guid<Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicketValidationResult>{ static constexpr GUID value{ 0x0AD1F392,0xDA7B,0x4A36,{ 0xBF,0x36,0x6A,0x99,0xA6,0x2E,0x20,0x59 } }; };
template <> struct default_interface<Windows::Graphics::Printing::PrintTicket::PrintTicketCapabilities>{ using type = Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities; };
template <> struct default_interface<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>{ using type = Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature; };
template <> struct default_interface<Windows::Graphics::Printing::PrintTicket::PrintTicketOption>{ using type = Windows::Graphics::Printing::PrintTicket::IPrintTicketOption; };
template <> struct default_interface<Windows::Graphics::Printing::PrintTicket::PrintTicketParameterDefinition>{ using type = Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterDefinition; };
template <> struct default_interface<Windows::Graphics::Printing::PrintTicket::PrintTicketParameterInitializer>{ using type = Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterInitializer; };
template <> struct default_interface<Windows::Graphics::Printing::PrintTicket::PrintTicketValue>{ using type = Windows::Graphics::Printing::PrintTicket::IPrintTicketValue; };
template <> struct default_interface<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket>{ using type = Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket; };
template <> struct default_interface<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicketValidationResult>{ using type = Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicketValidationResult; };

template <typename D>
struct consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketCapabilities
{
    hstring Name() const noexcept;
    hstring XmlNamespace() const noexcept;
    Windows::Data::Xml::Dom::IXmlNode XmlNode() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature DocumentBindingFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature DocumentCollateFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature DocumentDuplexFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature DocumentHolePunchFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature DocumentInputBinFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature DocumentNUpFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature DocumentStapleFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature JobPasscodeFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature PageBorderlessFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature PageMediaSizeFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature PageMediaTypeFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature PageOrientationFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature PageOutputColorFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature PageOutputQualityFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature PageResolutionFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature GetFeature(param::hstring const& name, param::hstring const& xmlNamespace) const;
    Windows::Graphics::Printing::PrintTicket::PrintTicketParameterDefinition GetParameterDefinition(param::hstring const& name, param::hstring const& xmlNamespace) const;
};
template <> struct consume<Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities> { template <typename D> using type = consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketCapabilities<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketFeature
{
    hstring Name() const noexcept;
    hstring XmlNamespace() const noexcept;
    Windows::Data::Xml::Dom::IXmlNode XmlNode() const noexcept;
    hstring DisplayName() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketOption GetOption(param::hstring const& name, param::hstring const& xmlNamespace) const;
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Printing::PrintTicket::PrintTicketOption> Options() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketOption GetSelectedOption() const;
    void SetSelectedOption(Windows::Graphics::Printing::PrintTicket::PrintTicketOption const& value) const;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeatureSelectionType SelectionType() const noexcept;
};
template <> struct consume<Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature> { template <typename D> using type = consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketFeature<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketOption
{
    hstring Name() const noexcept;
    hstring XmlNamespace() const noexcept;
    Windows::Data::Xml::Dom::IXmlNode XmlNode() const noexcept;
    hstring DisplayName() const noexcept;
    Windows::Data::Xml::Dom::IXmlNode GetPropertyNode(param::hstring const& name, param::hstring const& xmlNamespace) const;
    Windows::Data::Xml::Dom::IXmlNode GetScoredPropertyNode(param::hstring const& name, param::hstring const& xmlNamespace) const;
    Windows::Graphics::Printing::PrintTicket::PrintTicketValue GetPropertyValue(param::hstring const& name, param::hstring const& xmlNamespace) const;
    Windows::Graphics::Printing::PrintTicket::PrintTicketValue GetScoredPropertyValue(param::hstring const& name, param::hstring const& xmlNamespace) const;
};
template <> struct consume<Windows::Graphics::Printing::PrintTicket::IPrintTicketOption> { template <typename D> using type = consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketOption<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketParameterDefinition
{
    hstring Name() const noexcept;
    hstring XmlNamespace() const noexcept;
    Windows::Data::Xml::Dom::IXmlNode XmlNode() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketParameterDataType DataType() const noexcept;
    hstring UnitType() const noexcept;
    int32_t RangeMin() const noexcept;
    int32_t RangeMax() const noexcept;
};
template <> struct consume<Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterDefinition> { template <typename D> using type = consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketParameterDefinition<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketParameterInitializer
{
    hstring Name() const noexcept;
    hstring XmlNamespace() const noexcept;
    Windows::Data::Xml::Dom::IXmlNode XmlNode() const noexcept;
    void Value(Windows::Graphics::Printing::PrintTicket::PrintTicketValue const& value) const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketValue Value() const noexcept;
};
template <> struct consume<Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterInitializer> { template <typename D> using type = consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketParameterInitializer<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketValue
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketValueType Type() const noexcept;
    int32_t GetValueAsInteger() const;
    hstring GetValueAsString() const;
};
template <> struct consume<Windows::Graphics::Printing::PrintTicket::IPrintTicketValue> { template <typename D> using type = consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketValue<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket
{
    hstring Name() const noexcept;
    hstring XmlNamespace() const noexcept;
    Windows::Data::Xml::Dom::IXmlNode XmlNode() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketCapabilities GetCapabilities() const;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature DocumentBindingFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature DocumentCollateFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature DocumentDuplexFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature DocumentHolePunchFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature DocumentInputBinFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature DocumentNUpFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature DocumentStapleFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature JobPasscodeFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature PageBorderlessFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature PageMediaSizeFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature PageMediaTypeFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature PageOrientationFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature PageOutputColorFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature PageOutputQualityFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature PageResolutionFeature() const noexcept;
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature GetFeature(param::hstring const& name, param::hstring const& xmlNamespace) const;
    Windows::Foundation::IAsyncAction NotifyXmlChangedAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicketValidationResult> ValidateAsync() const;
    Windows::Graphics::Printing::PrintTicket::PrintTicketParameterInitializer GetParameterInitializer(param::hstring const& name, param::hstring const& xmlNamespace) const;
    Windows::Graphics::Printing::PrintTicket::PrintTicketParameterInitializer SetParameterInitializerAsInteger(param::hstring const& name, param::hstring const& xmlNamespace, int32_t integerValue) const;
    Windows::Graphics::Printing::PrintTicket::PrintTicketParameterInitializer SetParameterInitializerAsString(param::hstring const& name, param::hstring const& xmlNamespace, param::hstring const& stringValue) const;
    Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket MergeAndValidateTicket(Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket const& deltaShemaTicket) const;
};
template <> struct consume<Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket> { template <typename D> using type = consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicketValidationResult
{
    bool Validated() const noexcept;
    HRESULT ExtendedError() const noexcept;
};
template <> struct consume<Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicketValidationResult> { template <typename D> using type = consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicketValidationResult<D>; };

template <> struct abi<Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_XmlNamespace(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_XmlNode(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DocumentBindingFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DocumentCollateFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DocumentDuplexFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DocumentHolePunchFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DocumentInputBinFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DocumentNUpFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DocumentStapleFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_JobPasscodeFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PageBorderlessFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PageMediaSizeFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PageMediaTypeFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PageOrientationFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PageOutputColorFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PageOutputQualityFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PageResolutionFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetFeature(HSTRING name, HSTRING xmlNamespace, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetParameterDefinition(HSTRING name, HSTRING xmlNamespace, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_XmlNamespace(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_XmlNode(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall GetOption(HSTRING name, HSTRING xmlNamespace, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall get_Options(::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetSelectedOption(::IUnknown** value) = 0;
    virtual HRESULT __stdcall SetSelectedOption(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_SelectionType(Windows::Graphics::Printing::PrintTicket::PrintTicketFeatureSelectionType* value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::PrintTicket::IPrintTicketOption>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_XmlNamespace(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_XmlNode(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall GetPropertyNode(HSTRING name, HSTRING xmlNamespace, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetScoredPropertyNode(HSTRING name, HSTRING xmlNamespace, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetPropertyValue(HSTRING name, HSTRING xmlNamespace, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetScoredPropertyValue(HSTRING name, HSTRING xmlNamespace, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterDefinition>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_XmlNamespace(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_XmlNode(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DataType(Windows::Graphics::Printing::PrintTicket::PrintTicketParameterDataType* value) = 0;
    virtual HRESULT __stdcall get_UnitType(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RangeMin(int32_t* value) = 0;
    virtual HRESULT __stdcall get_RangeMax(int32_t* value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterInitializer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_XmlNamespace(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_XmlNode(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Value(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Value(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::PrintTicket::IPrintTicketValue>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Type(Windows::Graphics::Printing::PrintTicket::PrintTicketValueType* value) = 0;
    virtual HRESULT __stdcall GetValueAsInteger(int32_t* value) = 0;
    virtual HRESULT __stdcall GetValueAsString(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_XmlNamespace(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_XmlNode(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetCapabilities(::IUnknown** result) = 0;
    virtual HRESULT __stdcall get_DocumentBindingFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DocumentCollateFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DocumentDuplexFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DocumentHolePunchFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DocumentInputBinFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DocumentNUpFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DocumentStapleFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_JobPasscodeFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PageBorderlessFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PageMediaSizeFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PageMediaTypeFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PageOrientationFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PageOutputColorFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PageOutputQualityFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PageResolutionFeature(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetFeature(HSTRING name, HSTRING xmlNamespace, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall NotifyXmlChangedAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ValidateAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetParameterInitializer(HSTRING name, HSTRING xmlNamespace, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall SetParameterInitializerAsInteger(HSTRING name, HSTRING xmlNamespace, int32_t integerValue, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall SetParameterInitializerAsString(HSTRING name, HSTRING xmlNamespace, HSTRING stringValue, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall MergeAndValidateTicket(::IUnknown* deltaShemaTicket, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicketValidationResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Validated(bool* value) = 0;
    virtual HRESULT __stdcall get_ExtendedError(HRESULT* value) = 0;
};};

}
