// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Data.Xml.Dom.0.h"

WINRT_EXPORT namespace winrt::Windows::Data::Xml::Dom {

struct WINRT_EBO IDtdEntity :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDtdEntity>,
    impl::require<IDtdEntity, Windows::Data::Xml::Dom::IXmlNode, Windows::Data::Xml::Dom::IXmlNodeSelector, Windows::Data::Xml::Dom::IXmlNodeSerializer>
{
    IDtdEntity(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDtdNotation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDtdNotation>,
    impl::require<IDtdNotation, Windows::Data::Xml::Dom::IXmlNode, Windows::Data::Xml::Dom::IXmlNodeSelector, Windows::Data::Xml::Dom::IXmlNodeSerializer>
{
    IDtdNotation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXmlAttribute :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXmlAttribute>,
    impl::require<IXmlAttribute, Windows::Data::Xml::Dom::IXmlNode, Windows::Data::Xml::Dom::IXmlNodeSelector, Windows::Data::Xml::Dom::IXmlNodeSerializer>
{
    IXmlAttribute(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXmlCDataSection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXmlCDataSection>,
    impl::require<IXmlCDataSection, Windows::Data::Xml::Dom::IXmlCharacterData, Windows::Data::Xml::Dom::IXmlNode, Windows::Data::Xml::Dom::IXmlNodeSelector, Windows::Data::Xml::Dom::IXmlNodeSerializer, Windows::Data::Xml::Dom::IXmlText>
{
    IXmlCDataSection(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXmlCharacterData :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXmlCharacterData>,
    impl::require<IXmlCharacterData, Windows::Data::Xml::Dom::IXmlNode, Windows::Data::Xml::Dom::IXmlNodeSelector, Windows::Data::Xml::Dom::IXmlNodeSerializer>
{
    IXmlCharacterData(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXmlComment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXmlComment>,
    impl::require<IXmlComment, Windows::Data::Xml::Dom::IXmlCharacterData, Windows::Data::Xml::Dom::IXmlNode, Windows::Data::Xml::Dom::IXmlNodeSelector, Windows::Data::Xml::Dom::IXmlNodeSerializer>
{
    IXmlComment(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXmlDocument :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXmlDocument>,
    impl::require<IXmlDocument, Windows::Data::Xml::Dom::IXmlNode, Windows::Data::Xml::Dom::IXmlNodeSelector, Windows::Data::Xml::Dom::IXmlNodeSerializer>
{
    IXmlDocument(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXmlDocumentFragment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXmlDocumentFragment>,
    impl::require<IXmlDocumentFragment, Windows::Data::Xml::Dom::IXmlNode, Windows::Data::Xml::Dom::IXmlNodeSelector, Windows::Data::Xml::Dom::IXmlNodeSerializer>
{
    IXmlDocumentFragment(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXmlDocumentIO :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXmlDocumentIO>
{
    IXmlDocumentIO(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXmlDocumentIO2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXmlDocumentIO2>
{
    IXmlDocumentIO2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXmlDocumentStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXmlDocumentStatics>
{
    IXmlDocumentStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXmlDocumentType :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXmlDocumentType>,
    impl::require<IXmlDocumentType, Windows::Data::Xml::Dom::IXmlNode, Windows::Data::Xml::Dom::IXmlNodeSelector, Windows::Data::Xml::Dom::IXmlNodeSerializer>
{
    IXmlDocumentType(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXmlDomImplementation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXmlDomImplementation>
{
    IXmlDomImplementation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXmlElement :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXmlElement>,
    impl::require<IXmlElement, Windows::Data::Xml::Dom::IXmlNode, Windows::Data::Xml::Dom::IXmlNodeSelector, Windows::Data::Xml::Dom::IXmlNodeSerializer>
{
    IXmlElement(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXmlEntityReference :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXmlEntityReference>,
    impl::require<IXmlEntityReference, Windows::Data::Xml::Dom::IXmlNode, Windows::Data::Xml::Dom::IXmlNodeSelector, Windows::Data::Xml::Dom::IXmlNodeSerializer>
{
    IXmlEntityReference(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXmlLoadSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXmlLoadSettings>
{
    IXmlLoadSettings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXmlNamedNodeMap :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXmlNamedNodeMap>,
    impl::require<IXmlNamedNodeMap, Windows::Foundation::Collections::IIterable<Windows::Data::Xml::Dom::IXmlNode>, Windows::Foundation::Collections::IVectorView<Windows::Data::Xml::Dom::IXmlNode>>
{
    IXmlNamedNodeMap(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXmlNode :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXmlNode>,
    impl::require<IXmlNode, Windows::Data::Xml::Dom::IXmlNodeSelector, Windows::Data::Xml::Dom::IXmlNodeSerializer>
{
    IXmlNode(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXmlNodeList :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXmlNodeList>,
    impl::require<IXmlNodeList, Windows::Foundation::Collections::IIterable<Windows::Data::Xml::Dom::IXmlNode>, Windows::Foundation::Collections::IVectorView<Windows::Data::Xml::Dom::IXmlNode>>
{
    IXmlNodeList(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXmlNodeSelector :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXmlNodeSelector>
{
    IXmlNodeSelector(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXmlNodeSerializer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXmlNodeSerializer>
{
    IXmlNodeSerializer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXmlProcessingInstruction :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXmlProcessingInstruction>,
    impl::require<IXmlProcessingInstruction, Windows::Data::Xml::Dom::IXmlNode, Windows::Data::Xml::Dom::IXmlNodeSelector, Windows::Data::Xml::Dom::IXmlNodeSerializer>
{
    IXmlProcessingInstruction(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXmlText :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXmlText>,
    impl::require<IXmlText, Windows::Data::Xml::Dom::IXmlCharacterData, Windows::Data::Xml::Dom::IXmlNode, Windows::Data::Xml::Dom::IXmlNodeSelector, Windows::Data::Xml::Dom::IXmlNodeSerializer>
{
    IXmlText(std::nullptr_t = nullptr) noexcept {}
};

}
