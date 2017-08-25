// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Data.Xml.Dom.1.h"
#include "winrt/impl/Windows.Data.Xml.Xsl.1.h"

WINRT_EXPORT namespace winrt::Windows::Data::Xml::Xsl {

struct WINRT_EBO XsltProcessor :
    Windows::Data::Xml::Xsl::IXsltProcessor,
    impl::require<XsltProcessor, Windows::Data::Xml::Xsl::IXsltProcessor2>
{
    XsltProcessor(std::nullptr_t) noexcept {}
    XsltProcessor(Windows::Data::Xml::Dom::XmlDocument const& document);
};

}
