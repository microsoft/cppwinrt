// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Data.Xml.Dom.3.h"
#include "internal/Windows.Data.Xml.Xsl.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Data::Xml::Xsl::IXsltProcessor> : produce_base<D, Windows::Data::Xml::Xsl::IXsltProcessor>
{
    HRESULT __stdcall abi_TransformToString(impl::abi_arg_in<Windows::Data::Xml::Dom::IXmlNode> inputNode, impl::abi_arg_out<hstring> output) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *output = detach_abi(this->shim().TransformToString(*reinterpret_cast<const Windows::Data::Xml::Dom::IXmlNode *>(&inputNode)));
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
    HRESULT __stdcall abi_TransformToDocument(impl::abi_arg_in<Windows::Data::Xml::Dom::IXmlNode> inputNode, impl::abi_arg_out<Windows::Data::Xml::Dom::IXmlDocument> output) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *output = detach_abi(this->shim().TransformToDocument(*reinterpret_cast<const Windows::Data::Xml::Dom::IXmlNode *>(&inputNode)));
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
    HRESULT __stdcall abi_CreateInstance(impl::abi_arg_in<Windows::Data::Xml::Dom::IXmlDocument> document, impl::abi_arg_out<Windows::Data::Xml::Xsl::IXsltProcessor> xsltProcessor) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *xsltProcessor = detach_abi(this->shim().CreateInstance(*reinterpret_cast<const Windows::Data::Xml::Dom::XmlDocument *>(&document)));
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
    check_hresult(WINRT_SHIM(IXsltProcessor)->abi_TransformToString(get_abi(inputNode), put_abi(output)));
    return output;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument impl_IXsltProcessor2<D>::TransformToDocument(const Windows::Data::Xml::Dom::IXmlNode & inputNode) const
{
    Windows::Data::Xml::Dom::XmlDocument output { nullptr };
    check_hresult(WINRT_SHIM(IXsltProcessor2)->abi_TransformToDocument(get_abi(inputNode), put_abi(output)));
    return output;
}

template <typename D> Windows::Data::Xml::Xsl::XsltProcessor impl_IXsltProcessorFactory<D>::CreateInstance(const Windows::Data::Xml::Dom::XmlDocument & document) const
{
    Windows::Data::Xml::Xsl::XsltProcessor xsltProcessor { nullptr };
    check_hresult(WINRT_SHIM(IXsltProcessorFactory)->abi_CreateInstance(get_abi(document), put_abi(xsltProcessor)));
    return xsltProcessor;
}

inline XsltProcessor::XsltProcessor(const Windows::Data::Xml::Dom::XmlDocument & document) :
    XsltProcessor(get_activation_factory<XsltProcessor, IXsltProcessorFactory>().CreateInstance(document))
{}

}

}

template<>
struct std::hash<winrt::Windows::Data::Xml::Xsl::IXsltProcessor>
{
    size_t operator()(const winrt::Windows::Data::Xml::Xsl::IXsltProcessor & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Data::Xml::Xsl::IXsltProcessor2>
{
    size_t operator()(const winrt::Windows::Data::Xml::Xsl::IXsltProcessor2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Data::Xml::Xsl::IXsltProcessorFactory>
{
    size_t operator()(const winrt::Windows::Data::Xml::Xsl::IXsltProcessorFactory & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Data::Xml::Xsl::XsltProcessor>
{
    size_t operator()(const winrt::Windows::Data::Xml::Xsl::XsltProcessor & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
