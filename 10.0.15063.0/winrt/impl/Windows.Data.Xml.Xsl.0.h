// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Data::Xml::Dom {

struct IXmlNode;
struct XmlDocument;

}

WINRT_EXPORT namespace winrt::Windows::Data::Xml::Xsl {

struct IXsltProcessor;
struct IXsltProcessor2;
struct IXsltProcessorFactory;
struct XsltProcessor;

}

namespace winrt::impl {

template <> struct category<Windows::Data::Xml::Xsl::IXsltProcessor>{ using type = interface_category; };
template <> struct category<Windows::Data::Xml::Xsl::IXsltProcessor2>{ using type = interface_category; };
template <> struct category<Windows::Data::Xml::Xsl::IXsltProcessorFactory>{ using type = interface_category; };
template <> struct category<Windows::Data::Xml::Xsl::XsltProcessor>{ using type = class_category; };
template <> struct name<Windows::Data::Xml::Xsl::IXsltProcessor>{ static constexpr auto & value{ L"Windows.Data.Xml.Xsl.IXsltProcessor" }; };
template <> struct name<Windows::Data::Xml::Xsl::IXsltProcessor2>{ static constexpr auto & value{ L"Windows.Data.Xml.Xsl.IXsltProcessor2" }; };
template <> struct name<Windows::Data::Xml::Xsl::IXsltProcessorFactory>{ static constexpr auto & value{ L"Windows.Data.Xml.Xsl.IXsltProcessorFactory" }; };
template <> struct name<Windows::Data::Xml::Xsl::XsltProcessor>{ static constexpr auto & value{ L"Windows.Data.Xml.Xsl.XsltProcessor" }; };
template <> struct guid<Windows::Data::Xml::Xsl::IXsltProcessor>{ static constexpr GUID value{ 0x7B64703F,0x550C,0x48C6,{ 0xA9,0x0F,0x93,0xA5,0xB9,0x64,0x51,0x8F } }; };
template <> struct guid<Windows::Data::Xml::Xsl::IXsltProcessor2>{ static constexpr GUID value{ 0x8DA45C56,0x97A5,0x44CB,{ 0xA8,0xBE,0x27,0xD8,0x62,0x80,0xC7,0x0A } }; };
template <> struct guid<Windows::Data::Xml::Xsl::IXsltProcessorFactory>{ static constexpr GUID value{ 0x274146C0,0x9A51,0x4663,{ 0xBF,0x30,0x0E,0xF7,0x42,0x14,0x6F,0x20 } }; };
template <> struct default_interface<Windows::Data::Xml::Xsl::XsltProcessor>{ using type = Windows::Data::Xml::Xsl::IXsltProcessor; };

template <typename D>
struct consume_Windows_Data_Xml_Xsl_IXsltProcessor
{
    hstring TransformToString(Windows::Data::Xml::Dom::IXmlNode const& inputNode) const;
};
template <> struct consume<Windows::Data::Xml::Xsl::IXsltProcessor> { template <typename D> using type = consume_Windows_Data_Xml_Xsl_IXsltProcessor<D>; };

template <typename D>
struct consume_Windows_Data_Xml_Xsl_IXsltProcessor2
{
    Windows::Data::Xml::Dom::XmlDocument TransformToDocument(Windows::Data::Xml::Dom::IXmlNode const& inputNode) const;
};
template <> struct consume<Windows::Data::Xml::Xsl::IXsltProcessor2> { template <typename D> using type = consume_Windows_Data_Xml_Xsl_IXsltProcessor2<D>; };

template <typename D>
struct consume_Windows_Data_Xml_Xsl_IXsltProcessorFactory
{
    Windows::Data::Xml::Xsl::XsltProcessor CreateInstance(Windows::Data::Xml::Dom::XmlDocument const& document) const;
};
template <> struct consume<Windows::Data::Xml::Xsl::IXsltProcessorFactory> { template <typename D> using type = consume_Windows_Data_Xml_Xsl_IXsltProcessorFactory<D>; };

template <> struct abi<Windows::Data::Xml::Xsl::IXsltProcessor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TransformToString(::IUnknown* inputNode, HSTRING* output) = 0;
};};

template <> struct abi<Windows::Data::Xml::Xsl::IXsltProcessor2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TransformToDocument(::IUnknown* inputNode, ::IUnknown** output) = 0;
};};

template <> struct abi<Windows::Data::Xml::Xsl::IXsltProcessorFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* document, ::IUnknown** xsltProcessor) = 0;
};};

}
