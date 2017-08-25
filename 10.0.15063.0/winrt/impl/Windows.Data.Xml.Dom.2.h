// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Data.Xml.Dom.1.h"

WINRT_EXPORT namespace winrt::Windows::Data::Xml::Dom {

struct WINRT_EBO DtdEntity :
    Windows::Data::Xml::Dom::IDtdEntity
{
    DtdEntity(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DtdNotation :
    Windows::Data::Xml::Dom::IDtdNotation
{
    DtdNotation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO XmlAttribute :
    Windows::Data::Xml::Dom::IXmlAttribute
{
    XmlAttribute(std::nullptr_t) noexcept {}
};

struct WINRT_EBO XmlCDataSection :
    Windows::Data::Xml::Dom::IXmlCDataSection
{
    XmlCDataSection(std::nullptr_t) noexcept {}
};

struct WINRT_EBO XmlComment :
    Windows::Data::Xml::Dom::IXmlComment
{
    XmlComment(std::nullptr_t) noexcept {}
};

struct WINRT_EBO XmlDocument :
    Windows::Data::Xml::Dom::IXmlDocument,
    impl::require<XmlDocument, Windows::Data::Xml::Dom::IXmlDocumentIO, Windows::Data::Xml::Dom::IXmlDocumentIO2>
{
    XmlDocument(std::nullptr_t) noexcept {}
    XmlDocument();
    static Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> LoadFromUriAsync(Windows::Foundation::Uri const& uri);
    static Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> LoadFromUriAsync(Windows::Foundation::Uri const& uri, Windows::Data::Xml::Dom::XmlLoadSettings const& loadSettings);
    static Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> LoadFromFileAsync(Windows::Storage::IStorageFile const& file);
    static Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> LoadFromFileAsync(Windows::Storage::IStorageFile const& file, Windows::Data::Xml::Dom::XmlLoadSettings const& loadSettings);
};

struct WINRT_EBO XmlDocumentFragment :
    Windows::Data::Xml::Dom::IXmlDocumentFragment
{
    XmlDocumentFragment(std::nullptr_t) noexcept {}
};

struct WINRT_EBO XmlDocumentType :
    Windows::Data::Xml::Dom::IXmlDocumentType
{
    XmlDocumentType(std::nullptr_t) noexcept {}
};

struct WINRT_EBO XmlDomImplementation :
    Windows::Data::Xml::Dom::IXmlDomImplementation
{
    XmlDomImplementation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO XmlElement :
    Windows::Data::Xml::Dom::IXmlElement
{
    XmlElement(std::nullptr_t) noexcept {}
};

struct WINRT_EBO XmlEntityReference :
    Windows::Data::Xml::Dom::IXmlEntityReference
{
    XmlEntityReference(std::nullptr_t) noexcept {}
};

struct WINRT_EBO XmlLoadSettings :
    Windows::Data::Xml::Dom::IXmlLoadSettings
{
    XmlLoadSettings(std::nullptr_t) noexcept {}
    XmlLoadSettings();
};

struct WINRT_EBO XmlNamedNodeMap :
    Windows::Data::Xml::Dom::IXmlNamedNodeMap
{
    XmlNamedNodeMap(std::nullptr_t) noexcept {}
};

struct WINRT_EBO XmlNodeList :
    Windows::Data::Xml::Dom::IXmlNodeList
{
    XmlNodeList(std::nullptr_t) noexcept {}
};

struct WINRT_EBO XmlProcessingInstruction :
    Windows::Data::Xml::Dom::IXmlProcessingInstruction
{
    XmlProcessingInstruction(std::nullptr_t) noexcept {}
};

struct WINRT_EBO XmlText :
    Windows::Data::Xml::Dom::IXmlText
{
    XmlText(std::nullptr_t) noexcept {}
};

}
