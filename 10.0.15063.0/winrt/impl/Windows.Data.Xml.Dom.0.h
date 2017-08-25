// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Storage {

struct IStorageFile;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;

}

WINRT_EXPORT namespace winrt::Windows::Data::Xml::Dom {

enum class NodeType
{
    Invalid = 0,
    ElementNode = 1,
    AttributeNode = 2,
    TextNode = 3,
    DataSectionNode = 4,
    EntityReferenceNode = 5,
    EntityNode = 6,
    ProcessingInstructionNode = 7,
    CommentNode = 8,
    DocumentNode = 9,
    DocumentTypeNode = 10,
    DocumentFragmentNode = 11,
    NotationNode = 12,
};

struct IDtdEntity;
struct IDtdNotation;
struct IXmlAttribute;
struct IXmlCDataSection;
struct IXmlCharacterData;
struct IXmlComment;
struct IXmlDocument;
struct IXmlDocumentFragment;
struct IXmlDocumentIO;
struct IXmlDocumentIO2;
struct IXmlDocumentStatics;
struct IXmlDocumentType;
struct IXmlDomImplementation;
struct IXmlElement;
struct IXmlEntityReference;
struct IXmlLoadSettings;
struct IXmlNamedNodeMap;
struct IXmlNode;
struct IXmlNodeList;
struct IXmlNodeSelector;
struct IXmlNodeSerializer;
struct IXmlProcessingInstruction;
struct IXmlText;
struct DtdEntity;
struct DtdNotation;
struct XmlAttribute;
struct XmlCDataSection;
struct XmlComment;
struct XmlDocument;
struct XmlDocumentFragment;
struct XmlDocumentType;
struct XmlDomImplementation;
struct XmlElement;
struct XmlEntityReference;
struct XmlLoadSettings;
struct XmlNamedNodeMap;
struct XmlNodeList;
struct XmlProcessingInstruction;
struct XmlText;

}

namespace winrt::impl {

template <> struct category<Windows::Data::Xml::Dom::IDtdEntity>{ using type = interface_category; };
template <> struct category<Windows::Data::Xml::Dom::IDtdNotation>{ using type = interface_category; };
template <> struct category<Windows::Data::Xml::Dom::IXmlAttribute>{ using type = interface_category; };
template <> struct category<Windows::Data::Xml::Dom::IXmlCDataSection>{ using type = interface_category; };
template <> struct category<Windows::Data::Xml::Dom::IXmlCharacterData>{ using type = interface_category; };
template <> struct category<Windows::Data::Xml::Dom::IXmlComment>{ using type = interface_category; };
template <> struct category<Windows::Data::Xml::Dom::IXmlDocument>{ using type = interface_category; };
template <> struct category<Windows::Data::Xml::Dom::IXmlDocumentFragment>{ using type = interface_category; };
template <> struct category<Windows::Data::Xml::Dom::IXmlDocumentIO>{ using type = interface_category; };
template <> struct category<Windows::Data::Xml::Dom::IXmlDocumentIO2>{ using type = interface_category; };
template <> struct category<Windows::Data::Xml::Dom::IXmlDocumentStatics>{ using type = interface_category; };
template <> struct category<Windows::Data::Xml::Dom::IXmlDocumentType>{ using type = interface_category; };
template <> struct category<Windows::Data::Xml::Dom::IXmlDomImplementation>{ using type = interface_category; };
template <> struct category<Windows::Data::Xml::Dom::IXmlElement>{ using type = interface_category; };
template <> struct category<Windows::Data::Xml::Dom::IXmlEntityReference>{ using type = interface_category; };
template <> struct category<Windows::Data::Xml::Dom::IXmlLoadSettings>{ using type = interface_category; };
template <> struct category<Windows::Data::Xml::Dom::IXmlNamedNodeMap>{ using type = interface_category; };
template <> struct category<Windows::Data::Xml::Dom::IXmlNode>{ using type = interface_category; };
template <> struct category<Windows::Data::Xml::Dom::IXmlNodeList>{ using type = interface_category; };
template <> struct category<Windows::Data::Xml::Dom::IXmlNodeSelector>{ using type = interface_category; };
template <> struct category<Windows::Data::Xml::Dom::IXmlNodeSerializer>{ using type = interface_category; };
template <> struct category<Windows::Data::Xml::Dom::IXmlProcessingInstruction>{ using type = interface_category; };
template <> struct category<Windows::Data::Xml::Dom::IXmlText>{ using type = interface_category; };
template <> struct category<Windows::Data::Xml::Dom::DtdEntity>{ using type = class_category; };
template <> struct category<Windows::Data::Xml::Dom::DtdNotation>{ using type = class_category; };
template <> struct category<Windows::Data::Xml::Dom::XmlAttribute>{ using type = class_category; };
template <> struct category<Windows::Data::Xml::Dom::XmlCDataSection>{ using type = class_category; };
template <> struct category<Windows::Data::Xml::Dom::XmlComment>{ using type = class_category; };
template <> struct category<Windows::Data::Xml::Dom::XmlDocument>{ using type = class_category; };
template <> struct category<Windows::Data::Xml::Dom::XmlDocumentFragment>{ using type = class_category; };
template <> struct category<Windows::Data::Xml::Dom::XmlDocumentType>{ using type = class_category; };
template <> struct category<Windows::Data::Xml::Dom::XmlDomImplementation>{ using type = class_category; };
template <> struct category<Windows::Data::Xml::Dom::XmlElement>{ using type = class_category; };
template <> struct category<Windows::Data::Xml::Dom::XmlEntityReference>{ using type = class_category; };
template <> struct category<Windows::Data::Xml::Dom::XmlLoadSettings>{ using type = class_category; };
template <> struct category<Windows::Data::Xml::Dom::XmlNamedNodeMap>{ using type = class_category; };
template <> struct category<Windows::Data::Xml::Dom::XmlNodeList>{ using type = class_category; };
template <> struct category<Windows::Data::Xml::Dom::XmlProcessingInstruction>{ using type = class_category; };
template <> struct category<Windows::Data::Xml::Dom::XmlText>{ using type = class_category; };
template <> struct category<Windows::Data::Xml::Dom::NodeType>{ using type = enum_category; };
template <> struct name<Windows::Data::Xml::Dom::IDtdEntity>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.IDtdEntity" }; };
template <> struct name<Windows::Data::Xml::Dom::IDtdNotation>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.IDtdNotation" }; };
template <> struct name<Windows::Data::Xml::Dom::IXmlAttribute>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.IXmlAttribute" }; };
template <> struct name<Windows::Data::Xml::Dom::IXmlCDataSection>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.IXmlCDataSection" }; };
template <> struct name<Windows::Data::Xml::Dom::IXmlCharacterData>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.IXmlCharacterData" }; };
template <> struct name<Windows::Data::Xml::Dom::IXmlComment>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.IXmlComment" }; };
template <> struct name<Windows::Data::Xml::Dom::IXmlDocument>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.IXmlDocument" }; };
template <> struct name<Windows::Data::Xml::Dom::IXmlDocumentFragment>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.IXmlDocumentFragment" }; };
template <> struct name<Windows::Data::Xml::Dom::IXmlDocumentIO>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.IXmlDocumentIO" }; };
template <> struct name<Windows::Data::Xml::Dom::IXmlDocumentIO2>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.IXmlDocumentIO2" }; };
template <> struct name<Windows::Data::Xml::Dom::IXmlDocumentStatics>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.IXmlDocumentStatics" }; };
template <> struct name<Windows::Data::Xml::Dom::IXmlDocumentType>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.IXmlDocumentType" }; };
template <> struct name<Windows::Data::Xml::Dom::IXmlDomImplementation>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.IXmlDomImplementation" }; };
template <> struct name<Windows::Data::Xml::Dom::IXmlElement>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.IXmlElement" }; };
template <> struct name<Windows::Data::Xml::Dom::IXmlEntityReference>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.IXmlEntityReference" }; };
template <> struct name<Windows::Data::Xml::Dom::IXmlLoadSettings>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.IXmlLoadSettings" }; };
template <> struct name<Windows::Data::Xml::Dom::IXmlNamedNodeMap>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.IXmlNamedNodeMap" }; };
template <> struct name<Windows::Data::Xml::Dom::IXmlNode>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.IXmlNode" }; };
template <> struct name<Windows::Data::Xml::Dom::IXmlNodeList>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.IXmlNodeList" }; };
template <> struct name<Windows::Data::Xml::Dom::IXmlNodeSelector>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.IXmlNodeSelector" }; };
template <> struct name<Windows::Data::Xml::Dom::IXmlNodeSerializer>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.IXmlNodeSerializer" }; };
template <> struct name<Windows::Data::Xml::Dom::IXmlProcessingInstruction>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.IXmlProcessingInstruction" }; };
template <> struct name<Windows::Data::Xml::Dom::IXmlText>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.IXmlText" }; };
template <> struct name<Windows::Data::Xml::Dom::DtdEntity>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.DtdEntity" }; };
template <> struct name<Windows::Data::Xml::Dom::DtdNotation>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.DtdNotation" }; };
template <> struct name<Windows::Data::Xml::Dom::XmlAttribute>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.XmlAttribute" }; };
template <> struct name<Windows::Data::Xml::Dom::XmlCDataSection>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.XmlCDataSection" }; };
template <> struct name<Windows::Data::Xml::Dom::XmlComment>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.XmlComment" }; };
template <> struct name<Windows::Data::Xml::Dom::XmlDocument>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.XmlDocument" }; };
template <> struct name<Windows::Data::Xml::Dom::XmlDocumentFragment>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.XmlDocumentFragment" }; };
template <> struct name<Windows::Data::Xml::Dom::XmlDocumentType>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.XmlDocumentType" }; };
template <> struct name<Windows::Data::Xml::Dom::XmlDomImplementation>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.XmlDomImplementation" }; };
template <> struct name<Windows::Data::Xml::Dom::XmlElement>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.XmlElement" }; };
template <> struct name<Windows::Data::Xml::Dom::XmlEntityReference>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.XmlEntityReference" }; };
template <> struct name<Windows::Data::Xml::Dom::XmlLoadSettings>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.XmlLoadSettings" }; };
template <> struct name<Windows::Data::Xml::Dom::XmlNamedNodeMap>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.XmlNamedNodeMap" }; };
template <> struct name<Windows::Data::Xml::Dom::XmlNodeList>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.XmlNodeList" }; };
template <> struct name<Windows::Data::Xml::Dom::XmlProcessingInstruction>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.XmlProcessingInstruction" }; };
template <> struct name<Windows::Data::Xml::Dom::XmlText>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.XmlText" }; };
template <> struct name<Windows::Data::Xml::Dom::NodeType>{ static constexpr auto & value{ L"Windows.Data.Xml.Dom.NodeType" }; };
template <> struct guid<Windows::Data::Xml::Dom::IDtdEntity>{ static constexpr GUID value{ 0x6A0B5FFC,0x63B4,0x480F,{ 0x9E,0x6A,0x8A,0x92,0x81,0x6A,0xAD,0xE4 } }; };
template <> struct guid<Windows::Data::Xml::Dom::IDtdNotation>{ static constexpr GUID value{ 0x8CB4E04D,0x6D46,0x4EDB,{ 0xAB,0x73,0xDF,0x83,0xC5,0x1A,0xD3,0x97 } }; };
template <> struct guid<Windows::Data::Xml::Dom::IXmlAttribute>{ static constexpr GUID value{ 0xAC144AA4,0xB4F1,0x4DB6,{ 0xB2,0x06,0x8A,0x22,0xC3,0x08,0xDB,0x0A } }; };
template <> struct guid<Windows::Data::Xml::Dom::IXmlCDataSection>{ static constexpr GUID value{ 0x4D04B46F,0xC8BD,0x45B4,{ 0x88,0x99,0x04,0x00,0xD7,0xC2,0xC6,0x0F } }; };
template <> struct guid<Windows::Data::Xml::Dom::IXmlCharacterData>{ static constexpr GUID value{ 0x132E42AB,0x4E36,0x4DF6,{ 0xB1,0xC8,0x0C,0xE6,0x2F,0xD8,0x8B,0x26 } }; };
template <> struct guid<Windows::Data::Xml::Dom::IXmlComment>{ static constexpr GUID value{ 0xBCA474D5,0xB61F,0x4611,{ 0x9C,0xAC,0x2E,0x92,0xE3,0x47,0x6D,0x47 } }; };
template <> struct guid<Windows::Data::Xml::Dom::IXmlDocument>{ static constexpr GUID value{ 0xF7F3A506,0x1E87,0x42D6,{ 0xBC,0xFB,0xB8,0xC8,0x09,0xFA,0x54,0x94 } }; };
template <> struct guid<Windows::Data::Xml::Dom::IXmlDocumentFragment>{ static constexpr GUID value{ 0xE2EA6A96,0x0C21,0x44A5,{ 0x8B,0xC9,0x9E,0x4A,0x26,0x27,0x08,0xEC } }; };
template <> struct guid<Windows::Data::Xml::Dom::IXmlDocumentIO>{ static constexpr GUID value{ 0x6CD0E74E,0xEE65,0x4489,{ 0x9E,0xBF,0xCA,0x43,0xE8,0x7B,0xA6,0x37 } }; };
template <> struct guid<Windows::Data::Xml::Dom::IXmlDocumentIO2>{ static constexpr GUID value{ 0x5D034661,0x7BD8,0x4AD5,{ 0x9E,0xBF,0x81,0xE6,0x34,0x72,0x63,0xB1 } }; };
template <> struct guid<Windows::Data::Xml::Dom::IXmlDocumentStatics>{ static constexpr GUID value{ 0x5543D254,0xD757,0x4B79,{ 0x95,0x39,0x23,0x2B,0x18,0xF5,0x0B,0xF1 } }; };
template <> struct guid<Windows::Data::Xml::Dom::IXmlDocumentType>{ static constexpr GUID value{ 0xF7342425,0x9781,0x4964,{ 0x8E,0x94,0x9B,0x1C,0x6D,0xFC,0x9B,0xC7 } }; };
template <> struct guid<Windows::Data::Xml::Dom::IXmlDomImplementation>{ static constexpr GUID value{ 0x6DE58132,0xF11D,0x4FBB,{ 0x8C,0xC6,0x58,0x3C,0xBA,0x93,0x11,0x2F } }; };
template <> struct guid<Windows::Data::Xml::Dom::IXmlElement>{ static constexpr GUID value{ 0x2DFB8A1F,0x6B10,0x4EF8,{ 0x9F,0x83,0xEF,0xCC,0xE8,0xFA,0xEC,0x37 } }; };
template <> struct guid<Windows::Data::Xml::Dom::IXmlEntityReference>{ static constexpr GUID value{ 0x2E2F47BC,0xC3D0,0x4CCF,{ 0xBB,0x86,0x0A,0xB8,0xC3,0x6A,0x61,0xCF } }; };
template <> struct guid<Windows::Data::Xml::Dom::IXmlLoadSettings>{ static constexpr GUID value{ 0x58AA07A8,0xFED6,0x46F7,{ 0xB4,0xC5,0xFB,0x1B,0xA7,0x21,0x08,0xD6 } }; };
template <> struct guid<Windows::Data::Xml::Dom::IXmlNamedNodeMap>{ static constexpr GUID value{ 0xB3A69EB0,0xAAB0,0x4B82,{ 0xA6,0xFA,0xB1,0x45,0x3F,0x7C,0x02,0x1B } }; };
template <> struct guid<Windows::Data::Xml::Dom::IXmlNode>{ static constexpr GUID value{ 0x1C741D59,0x2122,0x47D5,{ 0xA8,0x56,0x83,0xF3,0xD4,0x21,0x48,0x75 } }; };
template <> struct guid<Windows::Data::Xml::Dom::IXmlNodeList>{ static constexpr GUID value{ 0x8C60AD77,0x83A4,0x4EC1,{ 0x9C,0x54,0x7B,0xA4,0x29,0xE1,0x3D,0xA6 } }; };
template <> struct guid<Windows::Data::Xml::Dom::IXmlNodeSelector>{ static constexpr GUID value{ 0x63DBBA8B,0xD0DB,0x4FE1,{ 0xB7,0x45,0xF9,0x43,0x3A,0xFD,0xC2,0x5B } }; };
template <> struct guid<Windows::Data::Xml::Dom::IXmlNodeSerializer>{ static constexpr GUID value{ 0x5CC5B382,0xE6DD,0x4991,{ 0xAB,0xEF,0x06,0xD8,0xD2,0xE7,0xBD,0x0C } }; };
template <> struct guid<Windows::Data::Xml::Dom::IXmlProcessingInstruction>{ static constexpr GUID value{ 0x2707FD1E,0x1E92,0x4ECE,{ 0xB6,0xF4,0x26,0xF0,0x69,0x07,0x8D,0xDC } }; };
template <> struct guid<Windows::Data::Xml::Dom::IXmlText>{ static constexpr GUID value{ 0xF931A4CB,0x308D,0x4760,{ 0xA1,0xD5,0x43,0xB6,0x74,0x50,0xAC,0x7E } }; };
template <> struct default_interface<Windows::Data::Xml::Dom::DtdEntity>{ using type = Windows::Data::Xml::Dom::IDtdEntity; };
template <> struct default_interface<Windows::Data::Xml::Dom::DtdNotation>{ using type = Windows::Data::Xml::Dom::IDtdNotation; };
template <> struct default_interface<Windows::Data::Xml::Dom::XmlAttribute>{ using type = Windows::Data::Xml::Dom::IXmlAttribute; };
template <> struct default_interface<Windows::Data::Xml::Dom::XmlCDataSection>{ using type = Windows::Data::Xml::Dom::IXmlCDataSection; };
template <> struct default_interface<Windows::Data::Xml::Dom::XmlComment>{ using type = Windows::Data::Xml::Dom::IXmlComment; };
template <> struct default_interface<Windows::Data::Xml::Dom::XmlDocument>{ using type = Windows::Data::Xml::Dom::IXmlDocument; };
template <> struct default_interface<Windows::Data::Xml::Dom::XmlDocumentFragment>{ using type = Windows::Data::Xml::Dom::IXmlDocumentFragment; };
template <> struct default_interface<Windows::Data::Xml::Dom::XmlDocumentType>{ using type = Windows::Data::Xml::Dom::IXmlDocumentType; };
template <> struct default_interface<Windows::Data::Xml::Dom::XmlDomImplementation>{ using type = Windows::Data::Xml::Dom::IXmlDomImplementation; };
template <> struct default_interface<Windows::Data::Xml::Dom::XmlElement>{ using type = Windows::Data::Xml::Dom::IXmlElement; };
template <> struct default_interface<Windows::Data::Xml::Dom::XmlEntityReference>{ using type = Windows::Data::Xml::Dom::IXmlEntityReference; };
template <> struct default_interface<Windows::Data::Xml::Dom::XmlLoadSettings>{ using type = Windows::Data::Xml::Dom::IXmlLoadSettings; };
template <> struct default_interface<Windows::Data::Xml::Dom::XmlNamedNodeMap>{ using type = Windows::Data::Xml::Dom::IXmlNamedNodeMap; };
template <> struct default_interface<Windows::Data::Xml::Dom::XmlNodeList>{ using type = Windows::Data::Xml::Dom::IXmlNodeList; };
template <> struct default_interface<Windows::Data::Xml::Dom::XmlProcessingInstruction>{ using type = Windows::Data::Xml::Dom::IXmlProcessingInstruction; };
template <> struct default_interface<Windows::Data::Xml::Dom::XmlText>{ using type = Windows::Data::Xml::Dom::IXmlText; };

template <typename D>
struct consume_Windows_Data_Xml_Dom_IDtdEntity
{
    Windows::Foundation::IInspectable PublicId() const;
    Windows::Foundation::IInspectable SystemId() const;
    Windows::Foundation::IInspectable NotationName() const;
};
template <> struct consume<Windows::Data::Xml::Dom::IDtdEntity> { template <typename D> using type = consume_Windows_Data_Xml_Dom_IDtdEntity<D>; };

template <typename D>
struct consume_Windows_Data_Xml_Dom_IDtdNotation
{
    Windows::Foundation::IInspectable PublicId() const;
    Windows::Foundation::IInspectable SystemId() const;
};
template <> struct consume<Windows::Data::Xml::Dom::IDtdNotation> { template <typename D> using type = consume_Windows_Data_Xml_Dom_IDtdNotation<D>; };

template <typename D>
struct consume_Windows_Data_Xml_Dom_IXmlAttribute
{
    hstring Name() const;
    bool Specified() const;
    hstring Value() const;
    void Value(param::hstring const& value) const;
};
template <> struct consume<Windows::Data::Xml::Dom::IXmlAttribute> { template <typename D> using type = consume_Windows_Data_Xml_Dom_IXmlAttribute<D>; };

template <typename D>
struct consume_Windows_Data_Xml_Dom_IXmlCDataSection
{
};
template <> struct consume<Windows::Data::Xml::Dom::IXmlCDataSection> { template <typename D> using type = consume_Windows_Data_Xml_Dom_IXmlCDataSection<D>; };

template <typename D>
struct consume_Windows_Data_Xml_Dom_IXmlCharacterData
{
    hstring Data() const;
    void Data(param::hstring const& value) const;
    uint32_t Length() const;
    hstring SubstringData(uint32_t offset, uint32_t count) const;
    void AppendData(param::hstring const& data) const;
    void InsertData(uint32_t offset, param::hstring const& data) const;
    void DeleteData(uint32_t offset, uint32_t count) const;
    void ReplaceData(uint32_t offset, uint32_t count, param::hstring const& data) const;
};
template <> struct consume<Windows::Data::Xml::Dom::IXmlCharacterData> { template <typename D> using type = consume_Windows_Data_Xml_Dom_IXmlCharacterData<D>; };

template <typename D>
struct consume_Windows_Data_Xml_Dom_IXmlComment
{
};
template <> struct consume<Windows::Data::Xml::Dom::IXmlComment> { template <typename D> using type = consume_Windows_Data_Xml_Dom_IXmlComment<D>; };

template <typename D>
struct consume_Windows_Data_Xml_Dom_IXmlDocument
{
    Windows::Data::Xml::Dom::XmlDocumentType Doctype() const;
    Windows::Data::Xml::Dom::XmlDomImplementation Implementation() const;
    Windows::Data::Xml::Dom::XmlElement DocumentElement() const;
    Windows::Data::Xml::Dom::XmlElement CreateElement(param::hstring const& tagName) const;
    Windows::Data::Xml::Dom::XmlDocumentFragment CreateDocumentFragment() const;
    Windows::Data::Xml::Dom::XmlText CreateTextNode(param::hstring const& data) const;
    Windows::Data::Xml::Dom::XmlComment CreateComment(param::hstring const& data) const;
    Windows::Data::Xml::Dom::XmlProcessingInstruction CreateProcessingInstruction(param::hstring const& target, param::hstring const& data) const;
    Windows::Data::Xml::Dom::XmlAttribute CreateAttribute(param::hstring const& name) const;
    Windows::Data::Xml::Dom::XmlEntityReference CreateEntityReference(param::hstring const& name) const;
    Windows::Data::Xml::Dom::XmlNodeList GetElementsByTagName(param::hstring const& tagName) const;
    Windows::Data::Xml::Dom::XmlCDataSection CreateCDataSection(param::hstring const& data) const;
    hstring DocumentUri() const;
    Windows::Data::Xml::Dom::XmlAttribute CreateAttributeNS(Windows::Foundation::IInspectable const& namespaceUri, param::hstring const& qualifiedName) const;
    Windows::Data::Xml::Dom::XmlElement CreateElementNS(Windows::Foundation::IInspectable const& namespaceUri, param::hstring const& qualifiedName) const;
    Windows::Data::Xml::Dom::XmlElement GetElementById(param::hstring const& elementId) const;
    Windows::Data::Xml::Dom::IXmlNode ImportNode(Windows::Data::Xml::Dom::IXmlNode const& node, bool deep) const;
};
template <> struct consume<Windows::Data::Xml::Dom::IXmlDocument> { template <typename D> using type = consume_Windows_Data_Xml_Dom_IXmlDocument<D>; };

template <typename D>
struct consume_Windows_Data_Xml_Dom_IXmlDocumentFragment
{
};
template <> struct consume<Windows::Data::Xml::Dom::IXmlDocumentFragment> { template <typename D> using type = consume_Windows_Data_Xml_Dom_IXmlDocumentFragment<D>; };

template <typename D>
struct consume_Windows_Data_Xml_Dom_IXmlDocumentIO
{
    void LoadXml(param::hstring const& xml) const;
    void LoadXml(param::hstring const& xml, Windows::Data::Xml::Dom::XmlLoadSettings const& loadSettings) const;
    Windows::Foundation::IAsyncAction SaveToFileAsync(Windows::Storage::IStorageFile const& file) const;
};
template <> struct consume<Windows::Data::Xml::Dom::IXmlDocumentIO> { template <typename D> using type = consume_Windows_Data_Xml_Dom_IXmlDocumentIO<D>; };

template <typename D>
struct consume_Windows_Data_Xml_Dom_IXmlDocumentIO2
{
    void LoadXmlFromBuffer(Windows::Storage::Streams::IBuffer const& buffer) const;
    void LoadXmlFromBuffer(Windows::Storage::Streams::IBuffer const& buffer, Windows::Data::Xml::Dom::XmlLoadSettings const& loadSettings) const;
};
template <> struct consume<Windows::Data::Xml::Dom::IXmlDocumentIO2> { template <typename D> using type = consume_Windows_Data_Xml_Dom_IXmlDocumentIO2<D>; };

template <typename D>
struct consume_Windows_Data_Xml_Dom_IXmlDocumentStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> LoadFromUriAsync(Windows::Foundation::Uri const& uri) const;
    Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> LoadFromUriAsync(Windows::Foundation::Uri const& uri, Windows::Data::Xml::Dom::XmlLoadSettings const& loadSettings) const;
    Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> LoadFromFileAsync(Windows::Storage::IStorageFile const& file) const;
    Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> LoadFromFileAsync(Windows::Storage::IStorageFile const& file, Windows::Data::Xml::Dom::XmlLoadSettings const& loadSettings) const;
};
template <> struct consume<Windows::Data::Xml::Dom::IXmlDocumentStatics> { template <typename D> using type = consume_Windows_Data_Xml_Dom_IXmlDocumentStatics<D>; };

template <typename D>
struct consume_Windows_Data_Xml_Dom_IXmlDocumentType
{
    hstring Name() const;
    Windows::Data::Xml::Dom::XmlNamedNodeMap Entities() const;
    Windows::Data::Xml::Dom::XmlNamedNodeMap Notations() const;
};
template <> struct consume<Windows::Data::Xml::Dom::IXmlDocumentType> { template <typename D> using type = consume_Windows_Data_Xml_Dom_IXmlDocumentType<D>; };

template <typename D>
struct consume_Windows_Data_Xml_Dom_IXmlDomImplementation
{
    bool HasFeature(param::hstring const& feature, Windows::Foundation::IInspectable const& version) const;
};
template <> struct consume<Windows::Data::Xml::Dom::IXmlDomImplementation> { template <typename D> using type = consume_Windows_Data_Xml_Dom_IXmlDomImplementation<D>; };

template <typename D>
struct consume_Windows_Data_Xml_Dom_IXmlElement
{
    hstring TagName() const;
    hstring GetAttribute(param::hstring const& attributeName) const;
    void SetAttribute(param::hstring const& attributeName, param::hstring const& attributeValue) const;
    void RemoveAttribute(param::hstring const& attributeName) const;
    Windows::Data::Xml::Dom::XmlAttribute GetAttributeNode(param::hstring const& attributeName) const;
    Windows::Data::Xml::Dom::XmlAttribute SetAttributeNode(Windows::Data::Xml::Dom::XmlAttribute const& newAttribute) const;
    Windows::Data::Xml::Dom::XmlAttribute RemoveAttributeNode(Windows::Data::Xml::Dom::XmlAttribute const& attributeNode) const;
    Windows::Data::Xml::Dom::XmlNodeList GetElementsByTagName(param::hstring const& tagName) const;
    void SetAttributeNS(Windows::Foundation::IInspectable const& namespaceUri, param::hstring const& qualifiedName, param::hstring const& value) const;
    hstring GetAttributeNS(Windows::Foundation::IInspectable const& namespaceUri, param::hstring const& localName) const;
    void RemoveAttributeNS(Windows::Foundation::IInspectable const& namespaceUri, param::hstring const& localName) const;
    Windows::Data::Xml::Dom::XmlAttribute SetAttributeNodeNS(Windows::Data::Xml::Dom::XmlAttribute const& newAttribute) const;
    Windows::Data::Xml::Dom::XmlAttribute GetAttributeNodeNS(Windows::Foundation::IInspectable const& namespaceUri, param::hstring const& localName) const;
};
template <> struct consume<Windows::Data::Xml::Dom::IXmlElement> { template <typename D> using type = consume_Windows_Data_Xml_Dom_IXmlElement<D>; };

template <typename D>
struct consume_Windows_Data_Xml_Dom_IXmlEntityReference
{
};
template <> struct consume<Windows::Data::Xml::Dom::IXmlEntityReference> { template <typename D> using type = consume_Windows_Data_Xml_Dom_IXmlEntityReference<D>; };

template <typename D>
struct consume_Windows_Data_Xml_Dom_IXmlLoadSettings
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
template <> struct consume<Windows::Data::Xml::Dom::IXmlLoadSettings> { template <typename D> using type = consume_Windows_Data_Xml_Dom_IXmlLoadSettings<D>; };

template <typename D>
struct consume_Windows_Data_Xml_Dom_IXmlNamedNodeMap
{
    uint32_t Length() const;
    Windows::Data::Xml::Dom::IXmlNode Item(uint32_t index) const;
    Windows::Data::Xml::Dom::IXmlNode GetNamedItem(param::hstring const& name) const;
    Windows::Data::Xml::Dom::IXmlNode SetNamedItem(Windows::Data::Xml::Dom::IXmlNode const& node) const;
    Windows::Data::Xml::Dom::IXmlNode RemoveNamedItem(param::hstring const& name) const;
    Windows::Data::Xml::Dom::IXmlNode GetNamedItemNS(Windows::Foundation::IInspectable const& namespaceUri, param::hstring const& name) const;
    Windows::Data::Xml::Dom::IXmlNode RemoveNamedItemNS(Windows::Foundation::IInspectable const& namespaceUri, param::hstring const& name) const;
    Windows::Data::Xml::Dom::IXmlNode SetNamedItemNS(Windows::Data::Xml::Dom::IXmlNode const& node) const;
};
template <> struct consume<Windows::Data::Xml::Dom::IXmlNamedNodeMap> { template <typename D> using type = consume_Windows_Data_Xml_Dom_IXmlNamedNodeMap<D>; };

template <typename D>
struct consume_Windows_Data_Xml_Dom_IXmlNode
{
    Windows::Foundation::IInspectable NodeValue() const;
    void NodeValue(Windows::Foundation::IInspectable const& value) const;
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
    Windows::Data::Xml::Dom::IXmlNode InsertBefore(Windows::Data::Xml::Dom::IXmlNode const& newChild, Windows::Data::Xml::Dom::IXmlNode const& referenceChild) const;
    Windows::Data::Xml::Dom::IXmlNode ReplaceChild(Windows::Data::Xml::Dom::IXmlNode const& newChild, Windows::Data::Xml::Dom::IXmlNode const& referenceChild) const;
    Windows::Data::Xml::Dom::IXmlNode RemoveChild(Windows::Data::Xml::Dom::IXmlNode const& childNode) const;
    Windows::Data::Xml::Dom::IXmlNode AppendChild(Windows::Data::Xml::Dom::IXmlNode const& newChild) const;
    Windows::Data::Xml::Dom::IXmlNode CloneNode(bool deep) const;
    Windows::Foundation::IInspectable NamespaceUri() const;
    Windows::Foundation::IInspectable LocalName() const;
    Windows::Foundation::IInspectable Prefix() const;
    void Normalize() const;
    void Prefix(Windows::Foundation::IInspectable const& value) const;
};
template <> struct consume<Windows::Data::Xml::Dom::IXmlNode> { template <typename D> using type = consume_Windows_Data_Xml_Dom_IXmlNode<D>; };

template <typename D>
struct consume_Windows_Data_Xml_Dom_IXmlNodeList
{
    uint32_t Length() const;
    Windows::Data::Xml::Dom::IXmlNode Item(uint32_t index) const;
};
template <> struct consume<Windows::Data::Xml::Dom::IXmlNodeList> { template <typename D> using type = consume_Windows_Data_Xml_Dom_IXmlNodeList<D>; };

template <typename D>
struct consume_Windows_Data_Xml_Dom_IXmlNodeSelector
{
    Windows::Data::Xml::Dom::IXmlNode SelectSingleNode(param::hstring const& xpath) const;
    Windows::Data::Xml::Dom::XmlNodeList SelectNodes(param::hstring const& xpath) const;
    Windows::Data::Xml::Dom::IXmlNode SelectSingleNodeNS(param::hstring const& xpath, Windows::Foundation::IInspectable const& namespaces) const;
    Windows::Data::Xml::Dom::XmlNodeList SelectNodesNS(param::hstring const& xpath, Windows::Foundation::IInspectable const& namespaces) const;
};
template <> struct consume<Windows::Data::Xml::Dom::IXmlNodeSelector> { template <typename D> using type = consume_Windows_Data_Xml_Dom_IXmlNodeSelector<D>; };

template <typename D>
struct consume_Windows_Data_Xml_Dom_IXmlNodeSerializer
{
    hstring GetXml() const;
    hstring InnerText() const;
    void InnerText(param::hstring const& value) const;
};
template <> struct consume<Windows::Data::Xml::Dom::IXmlNodeSerializer> { template <typename D> using type = consume_Windows_Data_Xml_Dom_IXmlNodeSerializer<D>; };

template <typename D>
struct consume_Windows_Data_Xml_Dom_IXmlProcessingInstruction
{
    hstring Target() const;
    hstring Data() const;
    void Data(param::hstring const& value) const;
};
template <> struct consume<Windows::Data::Xml::Dom::IXmlProcessingInstruction> { template <typename D> using type = consume_Windows_Data_Xml_Dom_IXmlProcessingInstruction<D>; };

template <typename D>
struct consume_Windows_Data_Xml_Dom_IXmlText
{
    Windows::Data::Xml::Dom::IXmlText SplitText(uint32_t offset) const;
};
template <> struct consume<Windows::Data::Xml::Dom::IXmlText> { template <typename D> using type = consume_Windows_Data_Xml_Dom_IXmlText<D>; };

template <> struct abi<Windows::Data::Xml::Dom::IDtdEntity>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PublicId(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SystemId(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NotationName(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Data::Xml::Dom::IDtdNotation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PublicId(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SystemId(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Data::Xml::Dom::IXmlAttribute>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Specified(bool* value) = 0;
    virtual HRESULT __stdcall get_Value(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Value(HSTRING value) = 0;
};};

template <> struct abi<Windows::Data::Xml::Dom::IXmlCDataSection>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::Data::Xml::Dom::IXmlCharacterData>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Data(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Data(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Length(uint32_t* value) = 0;
    virtual HRESULT __stdcall SubstringData(uint32_t offset, uint32_t count, HSTRING* data) = 0;
    virtual HRESULT __stdcall AppendData(HSTRING data) = 0;
    virtual HRESULT __stdcall InsertData(uint32_t offset, HSTRING data) = 0;
    virtual HRESULT __stdcall DeleteData(uint32_t offset, uint32_t count) = 0;
    virtual HRESULT __stdcall ReplaceData(uint32_t offset, uint32_t count, HSTRING data) = 0;
};};

template <> struct abi<Windows::Data::Xml::Dom::IXmlComment>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::Data::Xml::Dom::IXmlDocument>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Doctype(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Implementation(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DocumentElement(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateElement(HSTRING tagName, ::IUnknown** newElement) = 0;
    virtual HRESULT __stdcall CreateDocumentFragment(::IUnknown** newDocumentFragment) = 0;
    virtual HRESULT __stdcall CreateTextNode(HSTRING data, ::IUnknown** newTextNode) = 0;
    virtual HRESULT __stdcall CreateComment(HSTRING data, ::IUnknown** newComment) = 0;
    virtual HRESULT __stdcall CreateProcessingInstruction(HSTRING target, HSTRING data, ::IUnknown** newProcessingInstruction) = 0;
    virtual HRESULT __stdcall CreateAttribute(HSTRING name, ::IUnknown** newAttribute) = 0;
    virtual HRESULT __stdcall CreateEntityReference(HSTRING name, ::IUnknown** newEntityReference) = 0;
    virtual HRESULT __stdcall GetElementsByTagName(HSTRING tagName, ::IUnknown** elements) = 0;
    virtual HRESULT __stdcall CreateCDataSection(HSTRING data, ::IUnknown** newCDataSection) = 0;
    virtual HRESULT __stdcall get_DocumentUri(HSTRING* value) = 0;
    virtual HRESULT __stdcall CreateAttributeNS(::IUnknown* namespaceUri, HSTRING qualifiedName, ::IUnknown** newAttribute) = 0;
    virtual HRESULT __stdcall CreateElementNS(::IUnknown* namespaceUri, HSTRING qualifiedName, ::IUnknown** newElement) = 0;
    virtual HRESULT __stdcall GetElementById(HSTRING elementId, ::IUnknown** element) = 0;
    virtual HRESULT __stdcall ImportNode(::IUnknown* node, bool deep, ::IUnknown** newNode) = 0;
};};

template <> struct abi<Windows::Data::Xml::Dom::IXmlDocumentFragment>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::Data::Xml::Dom::IXmlDocumentIO>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall LoadXml(HSTRING xml) = 0;
    virtual HRESULT __stdcall LoadXmlWithSettings(HSTRING xml, ::IUnknown* loadSettings) = 0;
    virtual HRESULT __stdcall SaveToFileAsync(::IUnknown* file, ::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Data::Xml::Dom::IXmlDocumentIO2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall LoadXmlFromBuffer(::IUnknown* buffer) = 0;
    virtual HRESULT __stdcall LoadXmlFromBufferWithSettings(::IUnknown* buffer, ::IUnknown* loadSettings) = 0;
};};

template <> struct abi<Windows::Data::Xml::Dom::IXmlDocumentStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall LoadFromUriAsync(::IUnknown* uri, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall LoadFromUriWithSettingsAsync(::IUnknown* uri, ::IUnknown* loadSettings, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall LoadFromFileAsync(::IUnknown* file, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall LoadFromFileWithSettingsAsync(::IUnknown* file, ::IUnknown* loadSettings, ::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Data::Xml::Dom::IXmlDocumentType>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Entities(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Notations(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Data::Xml::Dom::IXmlDomImplementation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall HasFeature(HSTRING feature, ::IUnknown* version, bool* featureSupported) = 0;
};};

template <> struct abi<Windows::Data::Xml::Dom::IXmlElement>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TagName(HSTRING* value) = 0;
    virtual HRESULT __stdcall GetAttribute(HSTRING attributeName, HSTRING* attributeValue) = 0;
    virtual HRESULT __stdcall SetAttribute(HSTRING attributeName, HSTRING attributeValue) = 0;
    virtual HRESULT __stdcall RemoveAttribute(HSTRING attributeName) = 0;
    virtual HRESULT __stdcall GetAttributeNode(HSTRING attributeName, ::IUnknown** attributeNode) = 0;
    virtual HRESULT __stdcall SetAttributeNode(::IUnknown* newAttribute, ::IUnknown** previousAttribute) = 0;
    virtual HRESULT __stdcall RemoveAttributeNode(::IUnknown* attributeNode, ::IUnknown** removedAttribute) = 0;
    virtual HRESULT __stdcall GetElementsByTagName(HSTRING tagName, ::IUnknown** elements) = 0;
    virtual HRESULT __stdcall SetAttributeNS(::IUnknown* namespaceUri, HSTRING qualifiedName, HSTRING value) = 0;
    virtual HRESULT __stdcall GetAttributeNS(::IUnknown* namespaceUri, HSTRING localName, HSTRING* value) = 0;
    virtual HRESULT __stdcall RemoveAttributeNS(::IUnknown* namespaceUri, HSTRING localName) = 0;
    virtual HRESULT __stdcall SetAttributeNodeNS(::IUnknown* newAttribute, ::IUnknown** previousAttribute) = 0;
    virtual HRESULT __stdcall GetAttributeNodeNS(::IUnknown* namespaceUri, HSTRING localName, ::IUnknown** previousAttribute) = 0;
};};

template <> struct abi<Windows::Data::Xml::Dom::IXmlEntityReference>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::Data::Xml::Dom::IXmlLoadSettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MaxElementDepth(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_MaxElementDepth(uint32_t value) = 0;
    virtual HRESULT __stdcall get_ProhibitDtd(bool* value) = 0;
    virtual HRESULT __stdcall put_ProhibitDtd(bool value) = 0;
    virtual HRESULT __stdcall get_ResolveExternals(bool* value) = 0;
    virtual HRESULT __stdcall put_ResolveExternals(bool value) = 0;
    virtual HRESULT __stdcall get_ValidateOnParse(bool* value) = 0;
    virtual HRESULT __stdcall put_ValidateOnParse(bool value) = 0;
    virtual HRESULT __stdcall get_ElementContentWhiteSpace(bool* value) = 0;
    virtual HRESULT __stdcall put_ElementContentWhiteSpace(bool value) = 0;
};};

template <> struct abi<Windows::Data::Xml::Dom::IXmlNamedNodeMap>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Length(uint32_t* value) = 0;
    virtual HRESULT __stdcall Item(uint32_t index, ::IUnknown** node) = 0;
    virtual HRESULT __stdcall GetNamedItem(HSTRING name, ::IUnknown** node) = 0;
    virtual HRESULT __stdcall SetNamedItem(::IUnknown* node, ::IUnknown** previousNode) = 0;
    virtual HRESULT __stdcall RemoveNamedItem(HSTRING name, ::IUnknown** previousNode) = 0;
    virtual HRESULT __stdcall GetNamedItemNS(::IUnknown* namespaceUri, HSTRING name, ::IUnknown** node) = 0;
    virtual HRESULT __stdcall RemoveNamedItemNS(::IUnknown* namespaceUri, HSTRING name, ::IUnknown** previousNode) = 0;
    virtual HRESULT __stdcall SetNamedItemNS(::IUnknown* node, ::IUnknown** previousNode) = 0;
};};

template <> struct abi<Windows::Data::Xml::Dom::IXmlNode>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NodeValue(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_NodeValue(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_NodeType(abi_t<Windows::Data::Xml::Dom::NodeType>* value) = 0;
    virtual HRESULT __stdcall get_NodeName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ParentNode(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ChildNodes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FirstChild(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LastChild(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PreviousSibling(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NextSibling(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Attributes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall HasChildNodes(bool* value) = 0;
    virtual HRESULT __stdcall get_OwnerDocument(::IUnknown** value) = 0;
    virtual HRESULT __stdcall InsertBefore(::IUnknown* newChild, ::IUnknown* referenceChild, ::IUnknown** insertedChild) = 0;
    virtual HRESULT __stdcall ReplaceChild(::IUnknown* newChild, ::IUnknown* referenceChild, ::IUnknown** previousChild) = 0;
    virtual HRESULT __stdcall RemoveChild(::IUnknown* childNode, ::IUnknown** removedChild) = 0;
    virtual HRESULT __stdcall AppendChild(::IUnknown* newChild, ::IUnknown** appendedChild) = 0;
    virtual HRESULT __stdcall CloneNode(bool deep, ::IUnknown** newNode) = 0;
    virtual HRESULT __stdcall get_NamespaceUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LocalName(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Prefix(::IUnknown** value) = 0;
    virtual HRESULT __stdcall Normalize() = 0;
    virtual HRESULT __stdcall put_Prefix(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Data::Xml::Dom::IXmlNodeList>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Length(uint32_t* value) = 0;
    virtual HRESULT __stdcall Item(uint32_t index, ::IUnknown** node) = 0;
};};

template <> struct abi<Windows::Data::Xml::Dom::IXmlNodeSelector>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SelectSingleNode(HSTRING xpath, ::IUnknown** node) = 0;
    virtual HRESULT __stdcall SelectNodes(HSTRING xpath, ::IUnknown** nodelist) = 0;
    virtual HRESULT __stdcall SelectSingleNodeNS(HSTRING xpath, ::IUnknown* namespaces, ::IUnknown** node) = 0;
    virtual HRESULT __stdcall SelectNodesNS(HSTRING xpath, ::IUnknown* namespaces, ::IUnknown** nodelist) = 0;
};};

template <> struct abi<Windows::Data::Xml::Dom::IXmlNodeSerializer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetXml(HSTRING* outerXml) = 0;
    virtual HRESULT __stdcall get_InnerText(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_InnerText(HSTRING value) = 0;
};};

template <> struct abi<Windows::Data::Xml::Dom::IXmlProcessingInstruction>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Target(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Data(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Data(HSTRING value) = 0;
};};

template <> struct abi<Windows::Data::Xml::Dom::IXmlText>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SplitText(uint32_t offset, ::IUnknown** secondPart) = 0;
};};

}
