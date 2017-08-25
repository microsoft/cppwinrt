// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Data.Xml.Dom.2.h"
#include "winrt/impl/Windows.Data.Xml.Xsl.2.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Data_Xml_Xsl_IXsltProcessor<D>::TransformToString(Windows::Data::Xml::Dom::IXmlNode const& inputNode) const
{
    hstring output{};
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Xsl::IXsltProcessor)->TransformToString(get_abi(inputNode), put_abi(output)));
    return output;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument consume_Windows_Data_Xml_Xsl_IXsltProcessor2<D>::TransformToDocument(Windows::Data::Xml::Dom::IXmlNode const& inputNode) const
{
    Windows::Data::Xml::Dom::XmlDocument output{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Xsl::IXsltProcessor2)->TransformToDocument(get_abi(inputNode), put_abi(output)));
    return output;
}

template <typename D> Windows::Data::Xml::Xsl::XsltProcessor consume_Windows_Data_Xml_Xsl_IXsltProcessorFactory<D>::CreateInstance(Windows::Data::Xml::Dom::XmlDocument const& document) const
{
    Windows::Data::Xml::Xsl::XsltProcessor xsltProcessor{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Xml::Xsl::IXsltProcessorFactory)->CreateInstance(get_abi(document), put_abi(xsltProcessor)));
    return xsltProcessor;
}

template <typename D>
struct produce<D, Windows::Data::Xml::Xsl::IXsltProcessor> : produce_base<D, Windows::Data::Xml::Xsl::IXsltProcessor>
{
    HRESULT __stdcall TransformToString(::IUnknown* inputNode, HSTRING* output) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *output = detach_abi(this->shim().TransformToString(*reinterpret_cast<Windows::Data::Xml::Dom::IXmlNode const*>(&inputNode)));
            return S_OK;
        }
        catch (...)
        {
            *output = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Xsl::IXsltProcessor2> : produce_base<D, Windows::Data::Xml::Xsl::IXsltProcessor2>
{
    HRESULT __stdcall TransformToDocument(::IUnknown* inputNode, ::IUnknown** output) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *output = detach_abi(this->shim().TransformToDocument(*reinterpret_cast<Windows::Data::Xml::Dom::IXmlNode const*>(&inputNode)));
            return S_OK;
        }
        catch (...)
        {
            *output = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Xsl::IXsltProcessorFactory> : produce_base<D, Windows::Data::Xml::Xsl::IXsltProcessorFactory>
{
    HRESULT __stdcall CreateInstance(::IUnknown* document, ::IUnknown** xsltProcessor) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *xsltProcessor = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Data::Xml::Dom::XmlDocument const*>(&document)));
            return S_OK;
        }
        catch (...)
        {
            *xsltProcessor = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Data::Xml::Xsl {

inline XsltProcessor::XsltProcessor(Windows::Data::Xml::Dom::XmlDocument const& document) :
    XsltProcessor(get_activation_factory<XsltProcessor, Windows::Data::Xml::Xsl::IXsltProcessorFactory>().CreateInstance(document))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Data::Xml::Xsl::IXsltProcessor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Xml::Xsl::IXsltProcessor> {};

template<> struct hash<winrt::Windows::Data::Xml::Xsl::IXsltProcessor2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Xml::Xsl::IXsltProcessor2> {};

template<> struct hash<winrt::Windows::Data::Xml::Xsl::IXsltProcessorFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Xml::Xsl::IXsltProcessorFactory> {};

template<> struct hash<winrt::Windows::Data::Xml::Xsl::XsltProcessor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Xml::Xsl::XsltProcessor> {};

}

WINRT_WARNING_POP
