// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Data.Xml.Dom.3.h"
#include "internal/Windows.Data.Xml.Xsl.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Data::Xml::Xsl::IXsltProcessor> : produce_base<D, Windows::Data::Xml::Xsl::IXsltProcessor>
{
    HRESULT __stdcall abi_TransformToString(abi_arg_in<Windows::Data::Xml::Dom::IXmlNode> inputNode, abi_arg_out<hstring> output) noexcept override
    {
        try
        {
            *output = detach(this->shim().TransformToString(*reinterpret_cast<const Windows::Data::Xml::Dom::IXmlNode *>(&inputNode)));
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
    HRESULT __stdcall abi_TransformToDocument(abi_arg_in<Windows::Data::Xml::Dom::IXmlNode> inputNode, abi_arg_out<Windows::Data::Xml::Dom::IXmlDocument> output) noexcept override
    {
        try
        {
            *output = detach(this->shim().TransformToDocument(*reinterpret_cast<const Windows::Data::Xml::Dom::IXmlNode *>(&inputNode)));
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
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::Data::Xml::Dom::IXmlDocument> document, abi_arg_out<Windows::Data::Xml::Xsl::IXsltProcessor> xsltProcessor) noexcept override
    {
        try
        {
            *xsltProcessor = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::Data::Xml::Dom::XmlDocument *>(&document)));
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

namespace Windows::Data::Xml::Xsl {

template <typename D> hstring impl_IXsltProcessor<D>::TransformToString(const Windows::Data::Xml::Dom::IXmlNode & inputNode) const
{
    hstring output;
    check_hresult(static_cast<const IXsltProcessor &>(static_cast<const D &>(*this))->abi_TransformToString(get(inputNode), put(output)));
    return output;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument impl_IXsltProcessor2<D>::TransformToDocument(const Windows::Data::Xml::Dom::IXmlNode & inputNode) const
{
    Windows::Data::Xml::Dom::XmlDocument output { nullptr };
    check_hresult(static_cast<const IXsltProcessor2 &>(static_cast<const D &>(*this))->abi_TransformToDocument(get(inputNode), put(output)));
    return output;
}

template <typename D> Windows::Data::Xml::Xsl::XsltProcessor impl_IXsltProcessorFactory<D>::CreateInstance(const Windows::Data::Xml::Dom::XmlDocument & document) const
{
    Windows::Data::Xml::Xsl::XsltProcessor xsltProcessor { nullptr };
    check_hresult(static_cast<const IXsltProcessorFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(document), put(xsltProcessor)));
    return xsltProcessor;
}

inline XsltProcessor::XsltProcessor(const Windows::Data::Xml::Dom::XmlDocument & document) :
    XsltProcessor(get_activation_factory<XsltProcessor, IXsltProcessorFactory>().CreateInstance(document))
{}

}

}
