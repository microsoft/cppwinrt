// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Data::Xml::Dom {

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

namespace Windows::Data::Xml::Dom {

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

namespace Windows::Data::Xml::Dom {

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

}

}
