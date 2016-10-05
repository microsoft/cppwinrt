// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Data.Xml.Dom.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_139d959e_e7b5_5cb6_a596_4b544478da9b
#define WINRT_GENERIC_139d959e_e7b5_5cb6_a596_4b544478da9b
template <> struct __declspec(uuid("139d959e-e7b5-5cb6-a596-4b544478da9b")) __declspec(novtable) IVectorView<Windows::Data::Xml::Dom::IXmlNode> : impl_IVectorView<Windows::Data::Xml::Dom::IXmlNode> {};
#endif

#ifndef WINRT_GENERIC_f1146ffc_8c92_56e8_93f1_711f86722633
#define WINRT_GENERIC_f1146ffc_8c92_56e8_93f1_711f86722633
template <> struct __declspec(uuid("f1146ffc-8c92-56e8-93f1-711f86722633")) __declspec(novtable) IIterable<Windows::Data::Xml::Dom::IXmlNode> : impl_IIterable<Windows::Data::Xml::Dom::IXmlNode> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_f858e239_1896_5982_8495_143168478eb8
#define WINRT_GENERIC_f858e239_1896_5982_8495_143168478eb8
template <> struct __declspec(uuid("f858e239-1896-5982-8495-143168478eb8")) __declspec(novtable) IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> : impl_IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_3833a35e_2c61_56bd_b093_3694165f8898
#define WINRT_GENERIC_3833a35e_2c61_56bd_b093_3694165f8898
template <> struct __declspec(uuid("3833a35e-2c61-56bd-b093-3694165f8898")) __declspec(novtable) IIterator<Windows::Data::Xml::Dom::IXmlNode> : impl_IIterator<Windows::Data::Xml::Dom::IXmlNode> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_5eef7817_93dd_5c0b_9e5a_eb490408f3a9
#define WINRT_GENERIC_5eef7817_93dd_5c0b_9e5a_eb490408f3a9
template <> struct __declspec(uuid("5eef7817-93dd-5c0b-9e5a-eb490408f3a9")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Data::Xml::Dom::XmlDocument> : impl_AsyncOperationCompletedHandler<Windows::Data::Xml::Dom::XmlDocument> {};
#endif


}

namespace Windows::Data::Xml::Dom {

template <typename D>
struct WINRT_EBO impl_IDtdEntity
{
    Windows::IInspectable PublicId() const;
    Windows::IInspectable SystemId() const;
    Windows::IInspectable NotationName() const;
};

template <typename D>
struct WINRT_EBO impl_IDtdNotation
{
    Windows::IInspectable PublicId() const;
    Windows::IInspectable SystemId() const;
};

template <typename D>
struct WINRT_EBO impl_IXmlAttribute
{
    hstring Name() const;
    bool Specified() const;
    hstring Value() const;
    void Value(hstring_ref value) const;
};

template <typename D>
struct WINRT_EBO impl_IXmlCDataSection
{
};

template <typename D>
struct WINRT_EBO impl_IXmlCharacterData
{
    hstring Data() const;
    void Data(hstring_ref value) const;
    uint32_t Length() const;
    hstring SubstringData(uint32_t offset, uint32_t count) const;
    void AppendData(hstring_ref data) const;
    void InsertData(uint32_t offset, hstring_ref data) const;
    void DeleteData(uint32_t offset, uint32_t count) const;
    void ReplaceData(uint32_t offset, uint32_t count, hstring_ref data) const;
};

template <typename D>
struct WINRT_EBO impl_IXmlComment
{
};

template <typename D>
struct WINRT_EBO impl_IXmlDocument
{
    Windows::Data::Xml::Dom::XmlDocumentType Doctype() const;
    Windows::Data::Xml::Dom::XmlDomImplementation Implementation() const;
    Windows::Data::Xml::Dom::XmlElement DocumentElement() const;
    Windows::Data::Xml::Dom::XmlElement CreateElement(hstring_ref tagName) const;
    Windows::Data::Xml::Dom::XmlDocumentFragment CreateDocumentFragment() const;
    Windows::Data::Xml::Dom::XmlText CreateTextNode(hstring_ref data) const;
    Windows::Data::Xml::Dom::XmlComment CreateComment(hstring_ref data) const;
    Windows::Data::Xml::Dom::XmlProcessingInstruction CreateProcessingInstruction(hstring_ref target, hstring_ref data) const;
    Windows::Data::Xml::Dom::XmlAttribute CreateAttribute(hstring_ref name) const;
    Windows::Data::Xml::Dom::XmlEntityReference CreateEntityReference(hstring_ref name) const;
    Windows::Data::Xml::Dom::XmlNodeList GetElementsByTagName(hstring_ref tagName) const;
    Windows::Data::Xml::Dom::XmlCDataSection CreateCDataSection(hstring_ref data) const;
    hstring DocumentUri() const;
    Windows::Data::Xml::Dom::XmlAttribute CreateAttributeNS(const Windows::IInspectable & namespaceUri, hstring_ref qualifiedName) const;
    Windows::Data::Xml::Dom::XmlElement CreateElementNS(const Windows::IInspectable & namespaceUri, hstring_ref qualifiedName) const;
    Windows::Data::Xml::Dom::XmlElement GetElementById(hstring_ref elementId) const;
    Windows::Data::Xml::Dom::IXmlNode ImportNode(const Windows::Data::Xml::Dom::IXmlNode & node, bool deep) const;
};

template <typename D>
struct WINRT_EBO impl_IXmlDocumentFragment
{
};

template <typename D>
struct WINRT_EBO impl_IXmlDocumentIO
{
    void LoadXml(hstring_ref xml) const;
    void LoadXml(hstring_ref xml, const Windows::Data::Xml::Dom::XmlLoadSettings & loadSettings) const;
    Windows::Foundation::IAsyncAction SaveToFileAsync(const Windows::Storage::IStorageFile & file) const;
};

template <typename D>
struct WINRT_EBO impl_IXmlDocumentIO2
{
    void LoadXmlFromBuffer(const Windows::Storage::Streams::IBuffer & buffer) const;
    void LoadXmlFromBuffer(const Windows::Storage::Streams::IBuffer & buffer, const Windows::Data::Xml::Dom::XmlLoadSettings & loadSettings) const;
};

template <typename D>
struct WINRT_EBO impl_IXmlDocumentStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> LoadFromUriAsync(const Windows::Foundation::Uri & uri) const;
    Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> LoadFromUriAsync(const Windows::Foundation::Uri & uri, const Windows::Data::Xml::Dom::XmlLoadSettings & loadSettings) const;
    Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> LoadFromFileAsync(const Windows::Storage::IStorageFile & file) const;
    Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> LoadFromFileAsync(const Windows::Storage::IStorageFile & file, const Windows::Data::Xml::Dom::XmlLoadSettings & loadSettings) const;
};

template <typename D>
struct WINRT_EBO impl_IXmlDocumentType
{
    hstring Name() const;
    Windows::Data::Xml::Dom::XmlNamedNodeMap Entities() const;
    Windows::Data::Xml::Dom::XmlNamedNodeMap Notations() const;
};

template <typename D>
struct WINRT_EBO impl_IXmlDomImplementation
{
    bool HasFeature(hstring_ref feature, const Windows::IInspectable & version) const;
};

template <typename D>
struct WINRT_EBO impl_IXmlElement
{
    hstring TagName() const;
    hstring GetAttribute(hstring_ref attributeName) const;
    void SetAttribute(hstring_ref attributeName, hstring_ref attributeValue) const;
    void RemoveAttribute(hstring_ref attributeName) const;
    Windows::Data::Xml::Dom::XmlAttribute GetAttributeNode(hstring_ref attributeName) const;
    Windows::Data::Xml::Dom::XmlAttribute SetAttributeNode(const Windows::Data::Xml::Dom::XmlAttribute & newAttribute) const;
    Windows::Data::Xml::Dom::XmlAttribute RemoveAttributeNode(const Windows::Data::Xml::Dom::XmlAttribute & attributeNode) const;
    Windows::Data::Xml::Dom::XmlNodeList GetElementsByTagName(hstring_ref tagName) const;
    void SetAttributeNS(const Windows::IInspectable & namespaceUri, hstring_ref qualifiedName, hstring_ref value) const;
    hstring GetAttributeNS(const Windows::IInspectable & namespaceUri, hstring_ref localName) const;
    void RemoveAttributeNS(const Windows::IInspectable & namespaceUri, hstring_ref localName) const;
    Windows::Data::Xml::Dom::XmlAttribute SetAttributeNodeNS(const Windows::Data::Xml::Dom::XmlAttribute & newAttribute) const;
    Windows::Data::Xml::Dom::XmlAttribute GetAttributeNodeNS(const Windows::IInspectable & namespaceUri, hstring_ref localName) const;
};

template <typename D>
struct WINRT_EBO impl_IXmlEntityReference
{
};

template <typename D>
struct WINRT_EBO impl_IXmlLoadSettings
{
    uint32_t MaxElementDepth() const;
    void MaxElementDepth(uint32_t value) const;
    bool ProhibitDtd() const;
    void ProhibitDtd(bool value) const;
    bool ResolveExternals() const;
    void ResolveExternals(bool value) const;
    bool ValidateOnParse() const;
    void ValidateOnParse(bool value) const;
    bool ElementContentWhiteSpace() const;
    void ElementContentWhiteSpace(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_IXmlNamedNodeMap
{
    uint32_t Length() const;
    Windows::Data::Xml::Dom::IXmlNode Item(uint32_t index) const;
    Windows::Data::Xml::Dom::IXmlNode GetNamedItem(hstring_ref name) const;
    Windows::Data::Xml::Dom::IXmlNode SetNamedItem(const Windows::Data::Xml::Dom::IXmlNode & node) const;
    Windows::Data::Xml::Dom::IXmlNode RemoveNamedItem(hstring_ref name) const;
    Windows::Data::Xml::Dom::IXmlNode GetNamedItemNS(const Windows::IInspectable & namespaceUri, hstring_ref name) const;
    Windows::Data::Xml::Dom::IXmlNode RemoveNamedItemNS(const Windows::IInspectable & namespaceUri, hstring_ref name) const;
    Windows::Data::Xml::Dom::IXmlNode SetNamedItemNS(const Windows::Data::Xml::Dom::IXmlNode & node) const;
};

template <typename D>
struct WINRT_EBO impl_IXmlNode
{
    Windows::IInspectable NodeValue() const;
    void NodeValue(const Windows::IInspectable & value) const;
    Windows::Data::Xml::Dom::NodeType NodeType() const;
    hstring NodeName() const;
    Windows::Data::Xml::Dom::IXmlNode ParentNode() const;
    Windows::Data::Xml::Dom::XmlNodeList ChildNodes() const;
    Windows::Data::Xml::Dom::IXmlNode FirstChild() const;
    Windows::Data::Xml::Dom::IXmlNode LastChild() const;
    Windows::Data::Xml::Dom::IXmlNode PreviousSibling() const;
    Windows::Data::Xml::Dom::IXmlNode NextSibling() const;
    Windows::Data::Xml::Dom::XmlNamedNodeMap Attributes() const;
    bool HasChildNodes() const;
    Windows::Data::Xml::Dom::XmlDocument OwnerDocument() const;
    Windows::Data::Xml::Dom::IXmlNode InsertBefore(const Windows::Data::Xml::Dom::IXmlNode & newChild, const Windows::Data::Xml::Dom::IXmlNode & referenceChild) const;
    Windows::Data::Xml::Dom::IXmlNode ReplaceChild(const Windows::Data::Xml::Dom::IXmlNode & newChild, const Windows::Data::Xml::Dom::IXmlNode & referenceChild) const;
    Windows::Data::Xml::Dom::IXmlNode RemoveChild(const Windows::Data::Xml::Dom::IXmlNode & childNode) const;
    Windows::Data::Xml::Dom::IXmlNode AppendChild(const Windows::Data::Xml::Dom::IXmlNode & newChild) const;
    Windows::Data::Xml::Dom::IXmlNode CloneNode(bool deep) const;
    Windows::IInspectable NamespaceUri() const;
    Windows::IInspectable LocalName() const;
    Windows::IInspectable Prefix() const;
    void Normalize() const;
    void Prefix(const Windows::IInspectable & value) const;
};

template <typename D>
struct WINRT_EBO impl_IXmlNodeList
{
    uint32_t Length() const;
    Windows::Data::Xml::Dom::IXmlNode Item(uint32_t index) const;
};

template <typename D>
struct WINRT_EBO impl_IXmlNodeSelector
{
    Windows::Data::Xml::Dom::IXmlNode SelectSingleNode(hstring_ref xpath) const;
    Windows::Data::Xml::Dom::XmlNodeList SelectNodes(hstring_ref xpath) const;
    Windows::Data::Xml::Dom::IXmlNode SelectSingleNodeNS(hstring_ref xpath, const Windows::IInspectable & namespaces) const;
    Windows::Data::Xml::Dom::XmlNodeList SelectNodesNS(hstring_ref xpath, const Windows::IInspectable & namespaces) const;
};

template <typename D>
struct WINRT_EBO impl_IXmlNodeSerializer
{
    hstring GetXml() const;
    hstring InnerText() const;
    void InnerText(hstring_ref value) const;
};

template <typename D>
struct WINRT_EBO impl_IXmlProcessingInstruction
{
    hstring Target() const;
    hstring Data() const;
    void Data(hstring_ref value) const;
};

template <typename D>
struct WINRT_EBO impl_IXmlText
{
    Windows::Data::Xml::Dom::IXmlText SplitText(uint32_t offset) const;
};

struct IDtdEntity :
    Windows::IInspectable,
    impl::consume<IDtdEntity>,
    impl::require<IDtdEntity, Windows::Data::Xml::Dom::IXmlNode, Windows::Data::Xml::Dom::IXmlNodeSelector, Windows::Data::Xml::Dom::IXmlNodeSerializer>
{
    IDtdEntity(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDtdEntity>(m_ptr); }
};

struct IDtdNotation :
    Windows::IInspectable,
    impl::consume<IDtdNotation>,
    impl::require<IDtdNotation, Windows::Data::Xml::Dom::IXmlNode, Windows::Data::Xml::Dom::IXmlNodeSelector, Windows::Data::Xml::Dom::IXmlNodeSerializer>
{
    IDtdNotation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDtdNotation>(m_ptr); }
};

struct IXmlAttribute :
    Windows::IInspectable,
    impl::consume<IXmlAttribute>,
    impl::require<IXmlAttribute, Windows::Data::Xml::Dom::IXmlNode, Windows::Data::Xml::Dom::IXmlNodeSelector, Windows::Data::Xml::Dom::IXmlNodeSerializer>
{
    IXmlAttribute(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXmlAttribute>(m_ptr); }
};

struct IXmlCDataSection :
    Windows::IInspectable,
    impl::consume<IXmlCDataSection>,
    impl::require<IXmlCDataSection, Windows::Data::Xml::Dom::IXmlCharacterData, Windows::Data::Xml::Dom::IXmlNode, Windows::Data::Xml::Dom::IXmlNodeSelector, Windows::Data::Xml::Dom::IXmlNodeSerializer, Windows::Data::Xml::Dom::IXmlText>
{
    IXmlCDataSection(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXmlCDataSection>(m_ptr); }
};

struct IXmlCharacterData :
    Windows::IInspectable,
    impl::consume<IXmlCharacterData>,
    impl::require<IXmlCharacterData, Windows::Data::Xml::Dom::IXmlNode, Windows::Data::Xml::Dom::IXmlNodeSelector, Windows::Data::Xml::Dom::IXmlNodeSerializer>
{
    IXmlCharacterData(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXmlCharacterData>(m_ptr); }
};

struct IXmlComment :
    Windows::IInspectable,
    impl::consume<IXmlComment>,
    impl::require<IXmlComment, Windows::Data::Xml::Dom::IXmlCharacterData, Windows::Data::Xml::Dom::IXmlNode, Windows::Data::Xml::Dom::IXmlNodeSelector, Windows::Data::Xml::Dom::IXmlNodeSerializer>
{
    IXmlComment(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXmlComment>(m_ptr); }
};

struct IXmlDocument :
    Windows::IInspectable,
    impl::consume<IXmlDocument>,
    impl::require<IXmlDocument, Windows::Data::Xml::Dom::IXmlNode, Windows::Data::Xml::Dom::IXmlNodeSelector, Windows::Data::Xml::Dom::IXmlNodeSerializer>
{
    IXmlDocument(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXmlDocument>(m_ptr); }
};

struct IXmlDocumentFragment :
    Windows::IInspectable,
    impl::consume<IXmlDocumentFragment>,
    impl::require<IXmlDocumentFragment, Windows::Data::Xml::Dom::IXmlNode, Windows::Data::Xml::Dom::IXmlNodeSelector, Windows::Data::Xml::Dom::IXmlNodeSerializer>
{
    IXmlDocumentFragment(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXmlDocumentFragment>(m_ptr); }
};

struct IXmlDocumentIO :
    Windows::IInspectable,
    impl::consume<IXmlDocumentIO>
{
    IXmlDocumentIO(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXmlDocumentIO>(m_ptr); }
};

struct IXmlDocumentIO2 :
    Windows::IInspectable,
    impl::consume<IXmlDocumentIO2>
{
    IXmlDocumentIO2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXmlDocumentIO2>(m_ptr); }
};

struct IXmlDocumentStatics :
    Windows::IInspectable,
    impl::consume<IXmlDocumentStatics>
{
    IXmlDocumentStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXmlDocumentStatics>(m_ptr); }
};

struct IXmlDocumentType :
    Windows::IInspectable,
    impl::consume<IXmlDocumentType>,
    impl::require<IXmlDocumentType, Windows::Data::Xml::Dom::IXmlNode, Windows::Data::Xml::Dom::IXmlNodeSelector, Windows::Data::Xml::Dom::IXmlNodeSerializer>
{
    IXmlDocumentType(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXmlDocumentType>(m_ptr); }
};

struct IXmlDomImplementation :
    Windows::IInspectable,
    impl::consume<IXmlDomImplementation>
{
    IXmlDomImplementation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXmlDomImplementation>(m_ptr); }
};

struct IXmlElement :
    Windows::IInspectable,
    impl::consume<IXmlElement>,
    impl::require<IXmlElement, Windows::Data::Xml::Dom::IXmlNode, Windows::Data::Xml::Dom::IXmlNodeSelector, Windows::Data::Xml::Dom::IXmlNodeSerializer>
{
    IXmlElement(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXmlElement>(m_ptr); }
};

struct IXmlEntityReference :
    Windows::IInspectable,
    impl::consume<IXmlEntityReference>,
    impl::require<IXmlEntityReference, Windows::Data::Xml::Dom::IXmlNode, Windows::Data::Xml::Dom::IXmlNodeSelector, Windows::Data::Xml::Dom::IXmlNodeSerializer>
{
    IXmlEntityReference(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXmlEntityReference>(m_ptr); }
};

struct IXmlLoadSettings :
    Windows::IInspectable,
    impl::consume<IXmlLoadSettings>
{
    IXmlLoadSettings(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXmlLoadSettings>(m_ptr); }
};

struct IXmlNamedNodeMap :
    Windows::IInspectable,
    impl::consume<IXmlNamedNodeMap>,
    impl::require<IXmlNamedNodeMap, Windows::Foundation::Collections::IIterable<Windows::Data::Xml::Dom::IXmlNode>, Windows::Foundation::Collections::IVectorView<Windows::Data::Xml::Dom::IXmlNode>>
{
    IXmlNamedNodeMap(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXmlNamedNodeMap>(m_ptr); }
};

struct IXmlNode :
    Windows::IInspectable,
    impl::consume<IXmlNode>,
    impl::require<IXmlNode, Windows::Data::Xml::Dom::IXmlNodeSelector, Windows::Data::Xml::Dom::IXmlNodeSerializer>
{
    IXmlNode(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXmlNode>(m_ptr); }
};

struct IXmlNodeList :
    Windows::IInspectable,
    impl::consume<IXmlNodeList>,
    impl::require<IXmlNodeList, Windows::Foundation::Collections::IIterable<Windows::Data::Xml::Dom::IXmlNode>, Windows::Foundation::Collections::IVectorView<Windows::Data::Xml::Dom::IXmlNode>>
{
    IXmlNodeList(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXmlNodeList>(m_ptr); }
};

struct IXmlNodeSelector :
    Windows::IInspectable,
    impl::consume<IXmlNodeSelector>
{
    IXmlNodeSelector(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXmlNodeSelector>(m_ptr); }
};

struct IXmlNodeSerializer :
    Windows::IInspectable,
    impl::consume<IXmlNodeSerializer>
{
    IXmlNodeSerializer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXmlNodeSerializer>(m_ptr); }
};

struct IXmlProcessingInstruction :
    Windows::IInspectable,
    impl::consume<IXmlProcessingInstruction>,
    impl::require<IXmlProcessingInstruction, Windows::Data::Xml::Dom::IXmlNode, Windows::Data::Xml::Dom::IXmlNodeSelector, Windows::Data::Xml::Dom::IXmlNodeSerializer>
{
    IXmlProcessingInstruction(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXmlProcessingInstruction>(m_ptr); }
};

struct IXmlText :
    Windows::IInspectable,
    impl::consume<IXmlText>,
    impl::require<IXmlText, Windows::Data::Xml::Dom::IXmlCharacterData, Windows::Data::Xml::Dom::IXmlNode, Windows::Data::Xml::Dom::IXmlNodeSelector, Windows::Data::Xml::Dom::IXmlNodeSerializer>
{
    IXmlText(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXmlText>(m_ptr); }
};

}

}
