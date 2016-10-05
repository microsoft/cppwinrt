// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Storage.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Data.Xml.Dom.3.h"
#include "Windows.Foundation.Collections.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IDtdEntity> : produce_base<D, Windows::Data::Xml::Dom::IDtdEntity>
{
    HRESULT __stdcall get_PublicId(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PublicId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemId(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SystemId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NotationName(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NotationName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IDtdNotation> : produce_base<D, Windows::Data::Xml::Dom::IDtdNotation>
{
    HRESULT __stdcall get_PublicId(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PublicId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemId(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SystemId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlAttribute> : produce_base<D, Windows::Data::Xml::Dom::IXmlAttribute>
{
    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Specified(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Specified());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Value(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlCDataSection> : produce_base<D, Windows::Data::Xml::Dom::IXmlCDataSection>
{};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlCharacterData> : produce_base<D, Windows::Data::Xml::Dom::IXmlCharacterData>
{
    HRESULT __stdcall get_Data(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Data(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Data(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Length(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Length());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SubstringData(uint32_t offset, uint32_t count, abi_arg_out<hstring> data) noexcept override
    {
        try
        {
            *data = detach(this->shim().SubstringData(offset, count));
            return S_OK;
        }
        catch (...)
        {
            *data = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AppendData(abi_arg_in<hstring> data) noexcept override
    {
        try
        {
            this->shim().AppendData(*reinterpret_cast<const hstring *>(&data));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InsertData(uint32_t offset, abi_arg_in<hstring> data) noexcept override
    {
        try
        {
            this->shim().InsertData(offset, *reinterpret_cast<const hstring *>(&data));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteData(uint32_t offset, uint32_t count) noexcept override
    {
        try
        {
            this->shim().DeleteData(offset, count);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReplaceData(uint32_t offset, uint32_t count, abi_arg_in<hstring> data) noexcept override
    {
        try
        {
            this->shim().ReplaceData(offset, count, *reinterpret_cast<const hstring *>(&data));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlComment> : produce_base<D, Windows::Data::Xml::Dom::IXmlComment>
{};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlDocument> : produce_base<D, Windows::Data::Xml::Dom::IXmlDocument>
{
    HRESULT __stdcall get_Doctype(abi_arg_out<Windows::Data::Xml::Dom::IXmlDocumentType> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Doctype());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Implementation(abi_arg_out<Windows::Data::Xml::Dom::IXmlDomImplementation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Implementation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentElement(abi_arg_out<Windows::Data::Xml::Dom::IXmlElement> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DocumentElement());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateElement(abi_arg_in<hstring> tagName, abi_arg_out<Windows::Data::Xml::Dom::IXmlElement> newElement) noexcept override
    {
        try
        {
            *newElement = detach(this->shim().CreateElement(*reinterpret_cast<const hstring *>(&tagName)));
            return S_OK;
        }
        catch (...)
        {
            *newElement = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateDocumentFragment(abi_arg_out<Windows::Data::Xml::Dom::IXmlDocumentFragment> newDocumentFragment) noexcept override
    {
        try
        {
            *newDocumentFragment = detach(this->shim().CreateDocumentFragment());
            return S_OK;
        }
        catch (...)
        {
            *newDocumentFragment = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateTextNode(abi_arg_in<hstring> data, abi_arg_out<Windows::Data::Xml::Dom::IXmlText> newTextNode) noexcept override
    {
        try
        {
            *newTextNode = detach(this->shim().CreateTextNode(*reinterpret_cast<const hstring *>(&data)));
            return S_OK;
        }
        catch (...)
        {
            *newTextNode = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateComment(abi_arg_in<hstring> data, abi_arg_out<Windows::Data::Xml::Dom::IXmlComment> newComment) noexcept override
    {
        try
        {
            *newComment = detach(this->shim().CreateComment(*reinterpret_cast<const hstring *>(&data)));
            return S_OK;
        }
        catch (...)
        {
            *newComment = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateProcessingInstruction(abi_arg_in<hstring> target, abi_arg_in<hstring> data, abi_arg_out<Windows::Data::Xml::Dom::IXmlProcessingInstruction> newProcessingInstruction) noexcept override
    {
        try
        {
            *newProcessingInstruction = detach(this->shim().CreateProcessingInstruction(*reinterpret_cast<const hstring *>(&target), *reinterpret_cast<const hstring *>(&data)));
            return S_OK;
        }
        catch (...)
        {
            *newProcessingInstruction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateAttribute(abi_arg_in<hstring> name, abi_arg_out<Windows::Data::Xml::Dom::IXmlAttribute> newAttribute) noexcept override
    {
        try
        {
            *newAttribute = detach(this->shim().CreateAttribute(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *newAttribute = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateEntityReference(abi_arg_in<hstring> name, abi_arg_out<Windows::Data::Xml::Dom::IXmlEntityReference> newEntityReference) noexcept override
    {
        try
        {
            *newEntityReference = detach(this->shim().CreateEntityReference(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *newEntityReference = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetElementsByTagName(abi_arg_in<hstring> tagName, abi_arg_out<Windows::Data::Xml::Dom::IXmlNodeList> elements) noexcept override
    {
        try
        {
            *elements = detach(this->shim().GetElementsByTagName(*reinterpret_cast<const hstring *>(&tagName)));
            return S_OK;
        }
        catch (...)
        {
            *elements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateCDataSection(abi_arg_in<hstring> data, abi_arg_out<Windows::Data::Xml::Dom::IXmlCDataSection> newCDataSection) noexcept override
    {
        try
        {
            *newCDataSection = detach(this->shim().CreateCDataSection(*reinterpret_cast<const hstring *>(&data)));
            return S_OK;
        }
        catch (...)
        {
            *newCDataSection = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentUri(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DocumentUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateAttributeNS(abi_arg_in<Windows::IInspectable> namespaceUri, abi_arg_in<hstring> qualifiedName, abi_arg_out<Windows::Data::Xml::Dom::IXmlAttribute> newAttribute) noexcept override
    {
        try
        {
            *newAttribute = detach(this->shim().CreateAttributeNS(*reinterpret_cast<const Windows::IInspectable *>(&namespaceUri), *reinterpret_cast<const hstring *>(&qualifiedName)));
            return S_OK;
        }
        catch (...)
        {
            *newAttribute = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateElementNS(abi_arg_in<Windows::IInspectable> namespaceUri, abi_arg_in<hstring> qualifiedName, abi_arg_out<Windows::Data::Xml::Dom::IXmlElement> newElement) noexcept override
    {
        try
        {
            *newElement = detach(this->shim().CreateElementNS(*reinterpret_cast<const Windows::IInspectable *>(&namespaceUri), *reinterpret_cast<const hstring *>(&qualifiedName)));
            return S_OK;
        }
        catch (...)
        {
            *newElement = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetElementById(abi_arg_in<hstring> elementId, abi_arg_out<Windows::Data::Xml::Dom::IXmlElement> element) noexcept override
    {
        try
        {
            *element = detach(this->shim().GetElementById(*reinterpret_cast<const hstring *>(&elementId)));
            return S_OK;
        }
        catch (...)
        {
            *element = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ImportNode(abi_arg_in<Windows::Data::Xml::Dom::IXmlNode> node, bool deep, abi_arg_out<Windows::Data::Xml::Dom::IXmlNode> newNode) noexcept override
    {
        try
        {
            *newNode = detach(this->shim().ImportNode(*reinterpret_cast<const Windows::Data::Xml::Dom::IXmlNode *>(&node), deep));
            return S_OK;
        }
        catch (...)
        {
            *newNode = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlDocumentFragment> : produce_base<D, Windows::Data::Xml::Dom::IXmlDocumentFragment>
{};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlDocumentIO> : produce_base<D, Windows::Data::Xml::Dom::IXmlDocumentIO>
{
    HRESULT __stdcall abi_LoadXml(abi_arg_in<hstring> xml) noexcept override
    {
        try
        {
            this->shim().LoadXml(*reinterpret_cast<const hstring *>(&xml));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LoadXmlWithSettings(abi_arg_in<hstring> xml, abi_arg_in<Windows::Data::Xml::Dom::IXmlLoadSettings> loadSettings) noexcept override
    {
        try
        {
            this->shim().LoadXml(*reinterpret_cast<const hstring *>(&xml), *reinterpret_cast<const Windows::Data::Xml::Dom::XmlLoadSettings *>(&loadSettings));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SaveToFileAsync(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().SaveToFileAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlDocumentIO2> : produce_base<D, Windows::Data::Xml::Dom::IXmlDocumentIO2>
{
    HRESULT __stdcall abi_LoadXmlFromBuffer(abi_arg_in<Windows::Storage::Streams::IBuffer> buffer) noexcept override
    {
        try
        {
            this->shim().LoadXmlFromBuffer(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&buffer));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LoadXmlFromBufferWithSettings(abi_arg_in<Windows::Storage::Streams::IBuffer> buffer, abi_arg_in<Windows::Data::Xml::Dom::IXmlLoadSettings> loadSettings) noexcept override
    {
        try
        {
            this->shim().LoadXmlFromBuffer(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&buffer), *reinterpret_cast<const Windows::Data::Xml::Dom::XmlLoadSettings *>(&loadSettings));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlDocumentStatics> : produce_base<D, Windows::Data::Xml::Dom::IXmlDocumentStatics>
{
    HRESULT __stdcall abi_LoadFromUriAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().LoadFromUriAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LoadFromUriWithSettingsAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_in<Windows::Data::Xml::Dom::IXmlLoadSettings> loadSettings, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().LoadFromUriAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri), *reinterpret_cast<const Windows::Data::Xml::Dom::XmlLoadSettings *>(&loadSettings)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LoadFromFileAsync(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().LoadFromFileAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LoadFromFileWithSettingsAsync(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_in<Windows::Data::Xml::Dom::IXmlLoadSettings> loadSettings, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().LoadFromFileAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file), *reinterpret_cast<const Windows::Data::Xml::Dom::XmlLoadSettings *>(&loadSettings)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlDocumentType> : produce_base<D, Windows::Data::Xml::Dom::IXmlDocumentType>
{
    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Entities(abi_arg_out<Windows::Data::Xml::Dom::IXmlNamedNodeMap> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Entities());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Notations(abi_arg_out<Windows::Data::Xml::Dom::IXmlNamedNodeMap> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Notations());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlDomImplementation> : produce_base<D, Windows::Data::Xml::Dom::IXmlDomImplementation>
{
    HRESULT __stdcall abi_HasFeature(abi_arg_in<hstring> feature, abi_arg_in<Windows::IInspectable> version, bool * featureSupported) noexcept override
    {
        try
        {
            *featureSupported = detach(this->shim().HasFeature(*reinterpret_cast<const hstring *>(&feature), *reinterpret_cast<const Windows::IInspectable *>(&version)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlElement> : produce_base<D, Windows::Data::Xml::Dom::IXmlElement>
{
    HRESULT __stdcall get_TagName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TagName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAttribute(abi_arg_in<hstring> attributeName, abi_arg_out<hstring> attributeValue) noexcept override
    {
        try
        {
            *attributeValue = detach(this->shim().GetAttribute(*reinterpret_cast<const hstring *>(&attributeName)));
            return S_OK;
        }
        catch (...)
        {
            *attributeValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetAttribute(abi_arg_in<hstring> attributeName, abi_arg_in<hstring> attributeValue) noexcept override
    {
        try
        {
            this->shim().SetAttribute(*reinterpret_cast<const hstring *>(&attributeName), *reinterpret_cast<const hstring *>(&attributeValue));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveAttribute(abi_arg_in<hstring> attributeName) noexcept override
    {
        try
        {
            this->shim().RemoveAttribute(*reinterpret_cast<const hstring *>(&attributeName));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAttributeNode(abi_arg_in<hstring> attributeName, abi_arg_out<Windows::Data::Xml::Dom::IXmlAttribute> attributeNode) noexcept override
    {
        try
        {
            *attributeNode = detach(this->shim().GetAttributeNode(*reinterpret_cast<const hstring *>(&attributeName)));
            return S_OK;
        }
        catch (...)
        {
            *attributeNode = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetAttributeNode(abi_arg_in<Windows::Data::Xml::Dom::IXmlAttribute> newAttribute, abi_arg_out<Windows::Data::Xml::Dom::IXmlAttribute> previousAttribute) noexcept override
    {
        try
        {
            *previousAttribute = detach(this->shim().SetAttributeNode(*reinterpret_cast<const Windows::Data::Xml::Dom::XmlAttribute *>(&newAttribute)));
            return S_OK;
        }
        catch (...)
        {
            *previousAttribute = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveAttributeNode(abi_arg_in<Windows::Data::Xml::Dom::IXmlAttribute> attributeNode, abi_arg_out<Windows::Data::Xml::Dom::IXmlAttribute> removedAttribute) noexcept override
    {
        try
        {
            *removedAttribute = detach(this->shim().RemoveAttributeNode(*reinterpret_cast<const Windows::Data::Xml::Dom::XmlAttribute *>(&attributeNode)));
            return S_OK;
        }
        catch (...)
        {
            *removedAttribute = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetElementsByTagName(abi_arg_in<hstring> tagName, abi_arg_out<Windows::Data::Xml::Dom::IXmlNodeList> elements) noexcept override
    {
        try
        {
            *elements = detach(this->shim().GetElementsByTagName(*reinterpret_cast<const hstring *>(&tagName)));
            return S_OK;
        }
        catch (...)
        {
            *elements = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetAttributeNS(abi_arg_in<Windows::IInspectable> namespaceUri, abi_arg_in<hstring> qualifiedName, abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().SetAttributeNS(*reinterpret_cast<const Windows::IInspectable *>(&namespaceUri), *reinterpret_cast<const hstring *>(&qualifiedName), *reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAttributeNS(abi_arg_in<Windows::IInspectable> namespaceUri, abi_arg_in<hstring> localName, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetAttributeNS(*reinterpret_cast<const Windows::IInspectable *>(&namespaceUri), *reinterpret_cast<const hstring *>(&localName)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveAttributeNS(abi_arg_in<Windows::IInspectable> namespaceUri, abi_arg_in<hstring> localName) noexcept override
    {
        try
        {
            this->shim().RemoveAttributeNS(*reinterpret_cast<const Windows::IInspectable *>(&namespaceUri), *reinterpret_cast<const hstring *>(&localName));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetAttributeNodeNS(abi_arg_in<Windows::Data::Xml::Dom::IXmlAttribute> newAttribute, abi_arg_out<Windows::Data::Xml::Dom::IXmlAttribute> previousAttribute) noexcept override
    {
        try
        {
            *previousAttribute = detach(this->shim().SetAttributeNodeNS(*reinterpret_cast<const Windows::Data::Xml::Dom::XmlAttribute *>(&newAttribute)));
            return S_OK;
        }
        catch (...)
        {
            *previousAttribute = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAttributeNodeNS(abi_arg_in<Windows::IInspectable> namespaceUri, abi_arg_in<hstring> localName, abi_arg_out<Windows::Data::Xml::Dom::IXmlAttribute> previousAttribute) noexcept override
    {
        try
        {
            *previousAttribute = detach(this->shim().GetAttributeNodeNS(*reinterpret_cast<const Windows::IInspectable *>(&namespaceUri), *reinterpret_cast<const hstring *>(&localName)));
            return S_OK;
        }
        catch (...)
        {
            *previousAttribute = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlEntityReference> : produce_base<D, Windows::Data::Xml::Dom::IXmlEntityReference>
{};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlLoadSettings> : produce_base<D, Windows::Data::Xml::Dom::IXmlLoadSettings>
{
    HRESULT __stdcall get_MaxElementDepth(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxElementDepth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxElementDepth(uint32_t value) noexcept override
    {
        try
        {
            this->shim().MaxElementDepth(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProhibitDtd(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProhibitDtd());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ProhibitDtd(bool value) noexcept override
    {
        try
        {
            this->shim().ProhibitDtd(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResolveExternals(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResolveExternals());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ResolveExternals(bool value) noexcept override
    {
        try
        {
            this->shim().ResolveExternals(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ValidateOnParse(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ValidateOnParse());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ValidateOnParse(bool value) noexcept override
    {
        try
        {
            this->shim().ValidateOnParse(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ElementContentWhiteSpace(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ElementContentWhiteSpace());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ElementContentWhiteSpace(bool value) noexcept override
    {
        try
        {
            this->shim().ElementContentWhiteSpace(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlNamedNodeMap> : produce_base<D, Windows::Data::Xml::Dom::IXmlNamedNodeMap>
{
    HRESULT __stdcall get_Length(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Length());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Item(uint32_t index, abi_arg_out<Windows::Data::Xml::Dom::IXmlNode> node) noexcept override
    {
        try
        {
            *node = detach(this->shim().Item(index));
            return S_OK;
        }
        catch (...)
        {
            *node = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNamedItem(abi_arg_in<hstring> name, abi_arg_out<Windows::Data::Xml::Dom::IXmlNode> node) noexcept override
    {
        try
        {
            *node = detach(this->shim().GetNamedItem(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *node = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetNamedItem(abi_arg_in<Windows::Data::Xml::Dom::IXmlNode> node, abi_arg_out<Windows::Data::Xml::Dom::IXmlNode> previousNode) noexcept override
    {
        try
        {
            *previousNode = detach(this->shim().SetNamedItem(*reinterpret_cast<const Windows::Data::Xml::Dom::IXmlNode *>(&node)));
            return S_OK;
        }
        catch (...)
        {
            *previousNode = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveNamedItem(abi_arg_in<hstring> name, abi_arg_out<Windows::Data::Xml::Dom::IXmlNode> previousNode) noexcept override
    {
        try
        {
            *previousNode = detach(this->shim().RemoveNamedItem(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *previousNode = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNamedItemNS(abi_arg_in<Windows::IInspectable> namespaceUri, abi_arg_in<hstring> name, abi_arg_out<Windows::Data::Xml::Dom::IXmlNode> node) noexcept override
    {
        try
        {
            *node = detach(this->shim().GetNamedItemNS(*reinterpret_cast<const Windows::IInspectable *>(&namespaceUri), *reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *node = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveNamedItemNS(abi_arg_in<Windows::IInspectable> namespaceUri, abi_arg_in<hstring> name, abi_arg_out<Windows::Data::Xml::Dom::IXmlNode> previousNode) noexcept override
    {
        try
        {
            *previousNode = detach(this->shim().RemoveNamedItemNS(*reinterpret_cast<const Windows::IInspectable *>(&namespaceUri), *reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *previousNode = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetNamedItemNS(abi_arg_in<Windows::Data::Xml::Dom::IXmlNode> node, abi_arg_out<Windows::Data::Xml::Dom::IXmlNode> previousNode) noexcept override
    {
        try
        {
            *previousNode = detach(this->shim().SetNamedItemNS(*reinterpret_cast<const Windows::Data::Xml::Dom::IXmlNode *>(&node)));
            return S_OK;
        }
        catch (...)
        {
            *previousNode = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlNode> : produce_base<D, Windows::Data::Xml::Dom::IXmlNode>
{
    HRESULT __stdcall get_NodeValue(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NodeValue());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NodeValue(abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().NodeValue(*reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NodeType(Windows::Data::Xml::Dom::NodeType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NodeType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NodeName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NodeName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ParentNode(abi_arg_out<Windows::Data::Xml::Dom::IXmlNode> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ParentNode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ChildNodes(abi_arg_out<Windows::Data::Xml::Dom::IXmlNodeList> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChildNodes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FirstChild(abi_arg_out<Windows::Data::Xml::Dom::IXmlNode> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FirstChild());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastChild(abi_arg_out<Windows::Data::Xml::Dom::IXmlNode> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LastChild());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreviousSibling(abi_arg_out<Windows::Data::Xml::Dom::IXmlNode> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PreviousSibling());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NextSibling(abi_arg_out<Windows::Data::Xml::Dom::IXmlNode> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NextSibling());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Attributes(abi_arg_out<Windows::Data::Xml::Dom::IXmlNamedNodeMap> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Attributes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_HasChildNodes(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HasChildNodes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OwnerDocument(abi_arg_out<Windows::Data::Xml::Dom::IXmlDocument> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OwnerDocument());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InsertBefore(abi_arg_in<Windows::Data::Xml::Dom::IXmlNode> newChild, abi_arg_in<Windows::Data::Xml::Dom::IXmlNode> referenceChild, abi_arg_out<Windows::Data::Xml::Dom::IXmlNode> insertedChild) noexcept override
    {
        try
        {
            *insertedChild = detach(this->shim().InsertBefore(*reinterpret_cast<const Windows::Data::Xml::Dom::IXmlNode *>(&newChild), *reinterpret_cast<const Windows::Data::Xml::Dom::IXmlNode *>(&referenceChild)));
            return S_OK;
        }
        catch (...)
        {
            *insertedChild = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReplaceChild(abi_arg_in<Windows::Data::Xml::Dom::IXmlNode> newChild, abi_arg_in<Windows::Data::Xml::Dom::IXmlNode> referenceChild, abi_arg_out<Windows::Data::Xml::Dom::IXmlNode> previousChild) noexcept override
    {
        try
        {
            *previousChild = detach(this->shim().ReplaceChild(*reinterpret_cast<const Windows::Data::Xml::Dom::IXmlNode *>(&newChild), *reinterpret_cast<const Windows::Data::Xml::Dom::IXmlNode *>(&referenceChild)));
            return S_OK;
        }
        catch (...)
        {
            *previousChild = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveChild(abi_arg_in<Windows::Data::Xml::Dom::IXmlNode> childNode, abi_arg_out<Windows::Data::Xml::Dom::IXmlNode> removedChild) noexcept override
    {
        try
        {
            *removedChild = detach(this->shim().RemoveChild(*reinterpret_cast<const Windows::Data::Xml::Dom::IXmlNode *>(&childNode)));
            return S_OK;
        }
        catch (...)
        {
            *removedChild = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AppendChild(abi_arg_in<Windows::Data::Xml::Dom::IXmlNode> newChild, abi_arg_out<Windows::Data::Xml::Dom::IXmlNode> appendedChild) noexcept override
    {
        try
        {
            *appendedChild = detach(this->shim().AppendChild(*reinterpret_cast<const Windows::Data::Xml::Dom::IXmlNode *>(&newChild)));
            return S_OK;
        }
        catch (...)
        {
            *appendedChild = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CloneNode(bool deep, abi_arg_out<Windows::Data::Xml::Dom::IXmlNode> newNode) noexcept override
    {
        try
        {
            *newNode = detach(this->shim().CloneNode(deep));
            return S_OK;
        }
        catch (...)
        {
            *newNode = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NamespaceUri(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NamespaceUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalName(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocalName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Prefix(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Prefix());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Normalize() noexcept override
    {
        try
        {
            this->shim().Normalize();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Prefix(abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().Prefix(*reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlNodeList> : produce_base<D, Windows::Data::Xml::Dom::IXmlNodeList>
{
    HRESULT __stdcall get_Length(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Length());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Item(uint32_t index, abi_arg_out<Windows::Data::Xml::Dom::IXmlNode> node) noexcept override
    {
        try
        {
            *node = detach(this->shim().Item(index));
            return S_OK;
        }
        catch (...)
        {
            *node = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlNodeSelector> : produce_base<D, Windows::Data::Xml::Dom::IXmlNodeSelector>
{
    HRESULT __stdcall abi_SelectSingleNode(abi_arg_in<hstring> xpath, abi_arg_out<Windows::Data::Xml::Dom::IXmlNode> node) noexcept override
    {
        try
        {
            *node = detach(this->shim().SelectSingleNode(*reinterpret_cast<const hstring *>(&xpath)));
            return S_OK;
        }
        catch (...)
        {
            *node = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SelectNodes(abi_arg_in<hstring> xpath, abi_arg_out<Windows::Data::Xml::Dom::IXmlNodeList> nodelist) noexcept override
    {
        try
        {
            *nodelist = detach(this->shim().SelectNodes(*reinterpret_cast<const hstring *>(&xpath)));
            return S_OK;
        }
        catch (...)
        {
            *nodelist = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SelectSingleNodeNS(abi_arg_in<hstring> xpath, abi_arg_in<Windows::IInspectable> namespaces, abi_arg_out<Windows::Data::Xml::Dom::IXmlNode> node) noexcept override
    {
        try
        {
            *node = detach(this->shim().SelectSingleNodeNS(*reinterpret_cast<const hstring *>(&xpath), *reinterpret_cast<const Windows::IInspectable *>(&namespaces)));
            return S_OK;
        }
        catch (...)
        {
            *node = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SelectNodesNS(abi_arg_in<hstring> xpath, abi_arg_in<Windows::IInspectable> namespaces, abi_arg_out<Windows::Data::Xml::Dom::IXmlNodeList> nodelist) noexcept override
    {
        try
        {
            *nodelist = detach(this->shim().SelectNodesNS(*reinterpret_cast<const hstring *>(&xpath), *reinterpret_cast<const Windows::IInspectable *>(&namespaces)));
            return S_OK;
        }
        catch (...)
        {
            *nodelist = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlNodeSerializer> : produce_base<D, Windows::Data::Xml::Dom::IXmlNodeSerializer>
{
    HRESULT __stdcall abi_GetXml(abi_arg_out<hstring> outerXml) noexcept override
    {
        try
        {
            *outerXml = detach(this->shim().GetXml());
            return S_OK;
        }
        catch (...)
        {
            *outerXml = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InnerText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InnerText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InnerText(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().InnerText(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlProcessingInstruction> : produce_base<D, Windows::Data::Xml::Dom::IXmlProcessingInstruction>
{
    HRESULT __stdcall get_Target(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Target());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Data(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Data(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Data(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Xml::Dom::IXmlText> : produce_base<D, Windows::Data::Xml::Dom::IXmlText>
{
    HRESULT __stdcall abi_SplitText(uint32_t offset, abi_arg_out<Windows::Data::Xml::Dom::IXmlText> secondPart) noexcept override
    {
        try
        {
            *secondPart = detach(this->shim().SplitText(offset));
            return S_OK;
        }
        catch (...)
        {
            *secondPart = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Data::Xml::Dom {

template <typename D> Windows::Data::Xml::Dom::IXmlNode impl_IXmlNodeSelector<D>::SelectSingleNode(hstring_ref xpath) const
{
    Windows::Data::Xml::Dom::IXmlNode node;
    check_hresult(static_cast<const IXmlNodeSelector &>(static_cast<const D &>(*this))->abi_SelectSingleNode(get(xpath), put(node)));
    return node;
}

template <typename D> Windows::Data::Xml::Dom::XmlNodeList impl_IXmlNodeSelector<D>::SelectNodes(hstring_ref xpath) const
{
    Windows::Data::Xml::Dom::XmlNodeList nodelist { nullptr };
    check_hresult(static_cast<const IXmlNodeSelector &>(static_cast<const D &>(*this))->abi_SelectNodes(get(xpath), put(nodelist)));
    return nodelist;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode impl_IXmlNodeSelector<D>::SelectSingleNodeNS(hstring_ref xpath, const Windows::IInspectable & namespaces) const
{
    Windows::Data::Xml::Dom::IXmlNode node;
    check_hresult(static_cast<const IXmlNodeSelector &>(static_cast<const D &>(*this))->abi_SelectSingleNodeNS(get(xpath), get(namespaces), put(node)));
    return node;
}

template <typename D> Windows::Data::Xml::Dom::XmlNodeList impl_IXmlNodeSelector<D>::SelectNodesNS(hstring_ref xpath, const Windows::IInspectable & namespaces) const
{
    Windows::Data::Xml::Dom::XmlNodeList nodelist { nullptr };
    check_hresult(static_cast<const IXmlNodeSelector &>(static_cast<const D &>(*this))->abi_SelectNodesNS(get(xpath), get(namespaces), put(nodelist)));
    return nodelist;
}

template <typename D> hstring impl_IXmlNodeSerializer<D>::GetXml() const
{
    hstring outerXml;
    check_hresult(static_cast<const IXmlNodeSerializer &>(static_cast<const D &>(*this))->abi_GetXml(put(outerXml)));
    return outerXml;
}

template <typename D> hstring impl_IXmlNodeSerializer<D>::InnerText() const
{
    hstring value;
    check_hresult(static_cast<const IXmlNodeSerializer &>(static_cast<const D &>(*this))->get_InnerText(put(value)));
    return value;
}

template <typename D> void impl_IXmlNodeSerializer<D>::InnerText(hstring_ref value) const
{
    check_hresult(static_cast<const IXmlNodeSerializer &>(static_cast<const D &>(*this))->put_InnerText(get(value)));
}

template <typename D> Windows::IInspectable impl_IXmlNode<D>::NodeValue() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IXmlNode &>(static_cast<const D &>(*this))->get_NodeValue(put(value)));
    return value;
}

template <typename D> void impl_IXmlNode<D>::NodeValue(const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const IXmlNode &>(static_cast<const D &>(*this))->put_NodeValue(get(value)));
}

template <typename D> Windows::Data::Xml::Dom::NodeType impl_IXmlNode<D>::NodeType() const
{
    Windows::Data::Xml::Dom::NodeType value {};
    check_hresult(static_cast<const IXmlNode &>(static_cast<const D &>(*this))->get_NodeType(&value));
    return value;
}

template <typename D> hstring impl_IXmlNode<D>::NodeName() const
{
    hstring value;
    check_hresult(static_cast<const IXmlNode &>(static_cast<const D &>(*this))->get_NodeName(put(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode impl_IXmlNode<D>::ParentNode() const
{
    Windows::Data::Xml::Dom::IXmlNode value;
    check_hresult(static_cast<const IXmlNode &>(static_cast<const D &>(*this))->get_ParentNode(put(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::XmlNodeList impl_IXmlNode<D>::ChildNodes() const
{
    Windows::Data::Xml::Dom::XmlNodeList value { nullptr };
    check_hresult(static_cast<const IXmlNode &>(static_cast<const D &>(*this))->get_ChildNodes(put(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode impl_IXmlNode<D>::FirstChild() const
{
    Windows::Data::Xml::Dom::IXmlNode value;
    check_hresult(static_cast<const IXmlNode &>(static_cast<const D &>(*this))->get_FirstChild(put(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode impl_IXmlNode<D>::LastChild() const
{
    Windows::Data::Xml::Dom::IXmlNode value;
    check_hresult(static_cast<const IXmlNode &>(static_cast<const D &>(*this))->get_LastChild(put(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode impl_IXmlNode<D>::PreviousSibling() const
{
    Windows::Data::Xml::Dom::IXmlNode value;
    check_hresult(static_cast<const IXmlNode &>(static_cast<const D &>(*this))->get_PreviousSibling(put(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode impl_IXmlNode<D>::NextSibling() const
{
    Windows::Data::Xml::Dom::IXmlNode value;
    check_hresult(static_cast<const IXmlNode &>(static_cast<const D &>(*this))->get_NextSibling(put(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::XmlNamedNodeMap impl_IXmlNode<D>::Attributes() const
{
    Windows::Data::Xml::Dom::XmlNamedNodeMap value { nullptr };
    check_hresult(static_cast<const IXmlNode &>(static_cast<const D &>(*this))->get_Attributes(put(value)));
    return value;
}

template <typename D> bool impl_IXmlNode<D>::HasChildNodes() const
{
    bool value {};
    check_hresult(static_cast<const IXmlNode &>(static_cast<const D &>(*this))->abi_HasChildNodes(&value));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument impl_IXmlNode<D>::OwnerDocument() const
{
    Windows::Data::Xml::Dom::XmlDocument value { nullptr };
    check_hresult(static_cast<const IXmlNode &>(static_cast<const D &>(*this))->get_OwnerDocument(put(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode impl_IXmlNode<D>::InsertBefore(const Windows::Data::Xml::Dom::IXmlNode & newChild, const Windows::Data::Xml::Dom::IXmlNode & referenceChild) const
{
    Windows::Data::Xml::Dom::IXmlNode insertedChild;
    check_hresult(static_cast<const IXmlNode &>(static_cast<const D &>(*this))->abi_InsertBefore(get(newChild), get(referenceChild), put(insertedChild)));
    return insertedChild;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode impl_IXmlNode<D>::ReplaceChild(const Windows::Data::Xml::Dom::IXmlNode & newChild, const Windows::Data::Xml::Dom::IXmlNode & referenceChild) const
{
    Windows::Data::Xml::Dom::IXmlNode previousChild;
    check_hresult(static_cast<const IXmlNode &>(static_cast<const D &>(*this))->abi_ReplaceChild(get(newChild), get(referenceChild), put(previousChild)));
    return previousChild;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode impl_IXmlNode<D>::RemoveChild(const Windows::Data::Xml::Dom::IXmlNode & childNode) const
{
    Windows::Data::Xml::Dom::IXmlNode removedChild;
    check_hresult(static_cast<const IXmlNode &>(static_cast<const D &>(*this))->abi_RemoveChild(get(childNode), put(removedChild)));
    return removedChild;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode impl_IXmlNode<D>::AppendChild(const Windows::Data::Xml::Dom::IXmlNode & newChild) const
{
    Windows::Data::Xml::Dom::IXmlNode appendedChild;
    check_hresult(static_cast<const IXmlNode &>(static_cast<const D &>(*this))->abi_AppendChild(get(newChild), put(appendedChild)));
    return appendedChild;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode impl_IXmlNode<D>::CloneNode(bool deep) const
{
    Windows::Data::Xml::Dom::IXmlNode newNode;
    check_hresult(static_cast<const IXmlNode &>(static_cast<const D &>(*this))->abi_CloneNode(deep, put(newNode)));
    return newNode;
}

template <typename D> Windows::IInspectable impl_IXmlNode<D>::NamespaceUri() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IXmlNode &>(static_cast<const D &>(*this))->get_NamespaceUri(put(value)));
    return value;
}

template <typename D> Windows::IInspectable impl_IXmlNode<D>::LocalName() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IXmlNode &>(static_cast<const D &>(*this))->get_LocalName(put(value)));
    return value;
}

template <typename D> Windows::IInspectable impl_IXmlNode<D>::Prefix() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IXmlNode &>(static_cast<const D &>(*this))->get_Prefix(put(value)));
    return value;
}

template <typename D> void impl_IXmlNode<D>::Normalize() const
{
    check_hresult(static_cast<const IXmlNode &>(static_cast<const D &>(*this))->abi_Normalize());
}

template <typename D> void impl_IXmlNode<D>::Prefix(const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const IXmlNode &>(static_cast<const D &>(*this))->put_Prefix(get(value)));
}

template <typename D> bool impl_IXmlDomImplementation<D>::HasFeature(hstring_ref feature, const Windows::IInspectable & version) const
{
    bool featureSupported {};
    check_hresult(static_cast<const IXmlDomImplementation &>(static_cast<const D &>(*this))->abi_HasFeature(get(feature), get(version), &featureSupported));
    return featureSupported;
}

template <typename D> hstring impl_IXmlDocumentType<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IXmlDocumentType &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::XmlNamedNodeMap impl_IXmlDocumentType<D>::Entities() const
{
    Windows::Data::Xml::Dom::XmlNamedNodeMap value { nullptr };
    check_hresult(static_cast<const IXmlDocumentType &>(static_cast<const D &>(*this))->get_Entities(put(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::XmlNamedNodeMap impl_IXmlDocumentType<D>::Notations() const
{
    Windows::Data::Xml::Dom::XmlNamedNodeMap value { nullptr };
    check_hresult(static_cast<const IXmlDocumentType &>(static_cast<const D &>(*this))->get_Notations(put(value)));
    return value;
}

template <typename D> hstring impl_IXmlAttribute<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IXmlAttribute &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> bool impl_IXmlAttribute<D>::Specified() const
{
    bool value {};
    check_hresult(static_cast<const IXmlAttribute &>(static_cast<const D &>(*this))->get_Specified(&value));
    return value;
}

template <typename D> hstring impl_IXmlAttribute<D>::Value() const
{
    hstring value;
    check_hresult(static_cast<const IXmlAttribute &>(static_cast<const D &>(*this))->get_Value(put(value)));
    return value;
}

template <typename D> void impl_IXmlAttribute<D>::Value(hstring_ref value) const
{
    check_hresult(static_cast<const IXmlAttribute &>(static_cast<const D &>(*this))->put_Value(get(value)));
}

template <typename D> hstring impl_IXmlElement<D>::TagName() const
{
    hstring value;
    check_hresult(static_cast<const IXmlElement &>(static_cast<const D &>(*this))->get_TagName(put(value)));
    return value;
}

template <typename D> hstring impl_IXmlElement<D>::GetAttribute(hstring_ref attributeName) const
{
    hstring attributeValue;
    check_hresult(static_cast<const IXmlElement &>(static_cast<const D &>(*this))->abi_GetAttribute(get(attributeName), put(attributeValue)));
    return attributeValue;
}

template <typename D> void impl_IXmlElement<D>::SetAttribute(hstring_ref attributeName, hstring_ref attributeValue) const
{
    check_hresult(static_cast<const IXmlElement &>(static_cast<const D &>(*this))->abi_SetAttribute(get(attributeName), get(attributeValue)));
}

template <typename D> void impl_IXmlElement<D>::RemoveAttribute(hstring_ref attributeName) const
{
    check_hresult(static_cast<const IXmlElement &>(static_cast<const D &>(*this))->abi_RemoveAttribute(get(attributeName)));
}

template <typename D> Windows::Data::Xml::Dom::XmlAttribute impl_IXmlElement<D>::GetAttributeNode(hstring_ref attributeName) const
{
    Windows::Data::Xml::Dom::XmlAttribute attributeNode { nullptr };
    check_hresult(static_cast<const IXmlElement &>(static_cast<const D &>(*this))->abi_GetAttributeNode(get(attributeName), put(attributeNode)));
    return attributeNode;
}

template <typename D> Windows::Data::Xml::Dom::XmlAttribute impl_IXmlElement<D>::SetAttributeNode(const Windows::Data::Xml::Dom::XmlAttribute & newAttribute) const
{
    Windows::Data::Xml::Dom::XmlAttribute previousAttribute { nullptr };
    check_hresult(static_cast<const IXmlElement &>(static_cast<const D &>(*this))->abi_SetAttributeNode(get(newAttribute), put(previousAttribute)));
    return previousAttribute;
}

template <typename D> Windows::Data::Xml::Dom::XmlAttribute impl_IXmlElement<D>::RemoveAttributeNode(const Windows::Data::Xml::Dom::XmlAttribute & attributeNode) const
{
    Windows::Data::Xml::Dom::XmlAttribute removedAttribute { nullptr };
    check_hresult(static_cast<const IXmlElement &>(static_cast<const D &>(*this))->abi_RemoveAttributeNode(get(attributeNode), put(removedAttribute)));
    return removedAttribute;
}

template <typename D> Windows::Data::Xml::Dom::XmlNodeList impl_IXmlElement<D>::GetElementsByTagName(hstring_ref tagName) const
{
    Windows::Data::Xml::Dom::XmlNodeList elements { nullptr };
    check_hresult(static_cast<const IXmlElement &>(static_cast<const D &>(*this))->abi_GetElementsByTagName(get(tagName), put(elements)));
    return elements;
}

template <typename D> void impl_IXmlElement<D>::SetAttributeNS(const Windows::IInspectable & namespaceUri, hstring_ref qualifiedName, hstring_ref value) const
{
    check_hresult(static_cast<const IXmlElement &>(static_cast<const D &>(*this))->abi_SetAttributeNS(get(namespaceUri), get(qualifiedName), get(value)));
}

template <typename D> hstring impl_IXmlElement<D>::GetAttributeNS(const Windows::IInspectable & namespaceUri, hstring_ref localName) const
{
    hstring value;
    check_hresult(static_cast<const IXmlElement &>(static_cast<const D &>(*this))->abi_GetAttributeNS(get(namespaceUri), get(localName), put(value)));
    return value;
}

template <typename D> void impl_IXmlElement<D>::RemoveAttributeNS(const Windows::IInspectable & namespaceUri, hstring_ref localName) const
{
    check_hresult(static_cast<const IXmlElement &>(static_cast<const D &>(*this))->abi_RemoveAttributeNS(get(namespaceUri), get(localName)));
}

template <typename D> Windows::Data::Xml::Dom::XmlAttribute impl_IXmlElement<D>::SetAttributeNodeNS(const Windows::Data::Xml::Dom::XmlAttribute & newAttribute) const
{
    Windows::Data::Xml::Dom::XmlAttribute previousAttribute { nullptr };
    check_hresult(static_cast<const IXmlElement &>(static_cast<const D &>(*this))->abi_SetAttributeNodeNS(get(newAttribute), put(previousAttribute)));
    return previousAttribute;
}

template <typename D> Windows::Data::Xml::Dom::XmlAttribute impl_IXmlElement<D>::GetAttributeNodeNS(const Windows::IInspectable & namespaceUri, hstring_ref localName) const
{
    Windows::Data::Xml::Dom::XmlAttribute previousAttribute { nullptr };
    check_hresult(static_cast<const IXmlElement &>(static_cast<const D &>(*this))->abi_GetAttributeNodeNS(get(namespaceUri), get(localName), put(previousAttribute)));
    return previousAttribute;
}

template <typename D> Windows::IInspectable impl_IDtdNotation<D>::PublicId() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IDtdNotation &>(static_cast<const D &>(*this))->get_PublicId(put(value)));
    return value;
}

template <typename D> Windows::IInspectable impl_IDtdNotation<D>::SystemId() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IDtdNotation &>(static_cast<const D &>(*this))->get_SystemId(put(value)));
    return value;
}

template <typename D> Windows::IInspectable impl_IDtdEntity<D>::PublicId() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IDtdEntity &>(static_cast<const D &>(*this))->get_PublicId(put(value)));
    return value;
}

template <typename D> Windows::IInspectable impl_IDtdEntity<D>::SystemId() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IDtdEntity &>(static_cast<const D &>(*this))->get_SystemId(put(value)));
    return value;
}

template <typename D> Windows::IInspectable impl_IDtdEntity<D>::NotationName() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IDtdEntity &>(static_cast<const D &>(*this))->get_NotationName(put(value)));
    return value;
}

template <typename D> hstring impl_IXmlProcessingInstruction<D>::Target() const
{
    hstring value;
    check_hresult(static_cast<const IXmlProcessingInstruction &>(static_cast<const D &>(*this))->get_Target(put(value)));
    return value;
}

template <typename D> hstring impl_IXmlProcessingInstruction<D>::Data() const
{
    hstring value;
    check_hresult(static_cast<const IXmlProcessingInstruction &>(static_cast<const D &>(*this))->get_Data(put(value)));
    return value;
}

template <typename D> void impl_IXmlProcessingInstruction<D>::Data(hstring_ref value) const
{
    check_hresult(static_cast<const IXmlProcessingInstruction &>(static_cast<const D &>(*this))->put_Data(get(value)));
}

template <typename D> hstring impl_IXmlCharacterData<D>::Data() const
{
    hstring value;
    check_hresult(static_cast<const IXmlCharacterData &>(static_cast<const D &>(*this))->get_Data(put(value)));
    return value;
}

template <typename D> void impl_IXmlCharacterData<D>::Data(hstring_ref value) const
{
    check_hresult(static_cast<const IXmlCharacterData &>(static_cast<const D &>(*this))->put_Data(get(value)));
}

template <typename D> uint32_t impl_IXmlCharacterData<D>::Length() const
{
    uint32_t value {};
    check_hresult(static_cast<const IXmlCharacterData &>(static_cast<const D &>(*this))->get_Length(&value));
    return value;
}

template <typename D> hstring impl_IXmlCharacterData<D>::SubstringData(uint32_t offset, uint32_t count) const
{
    hstring data;
    check_hresult(static_cast<const IXmlCharacterData &>(static_cast<const D &>(*this))->abi_SubstringData(offset, count, put(data)));
    return data;
}

template <typename D> void impl_IXmlCharacterData<D>::AppendData(hstring_ref data) const
{
    check_hresult(static_cast<const IXmlCharacterData &>(static_cast<const D &>(*this))->abi_AppendData(get(data)));
}

template <typename D> void impl_IXmlCharacterData<D>::InsertData(uint32_t offset, hstring_ref data) const
{
    check_hresult(static_cast<const IXmlCharacterData &>(static_cast<const D &>(*this))->abi_InsertData(offset, get(data)));
}

template <typename D> void impl_IXmlCharacterData<D>::DeleteData(uint32_t offset, uint32_t count) const
{
    check_hresult(static_cast<const IXmlCharacterData &>(static_cast<const D &>(*this))->abi_DeleteData(offset, count));
}

template <typename D> void impl_IXmlCharacterData<D>::ReplaceData(uint32_t offset, uint32_t count, hstring_ref data) const
{
    check_hresult(static_cast<const IXmlCharacterData &>(static_cast<const D &>(*this))->abi_ReplaceData(offset, count, get(data)));
}

template <typename D> Windows::Data::Xml::Dom::IXmlText impl_IXmlText<D>::SplitText(uint32_t offset) const
{
    Windows::Data::Xml::Dom::IXmlText secondPart;
    check_hresult(static_cast<const IXmlText &>(static_cast<const D &>(*this))->abi_SplitText(offset, put(secondPart)));
    return secondPart;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocumentType impl_IXmlDocument<D>::Doctype() const
{
    Windows::Data::Xml::Dom::XmlDocumentType value { nullptr };
    check_hresult(static_cast<const IXmlDocument &>(static_cast<const D &>(*this))->get_Doctype(put(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::XmlDomImplementation impl_IXmlDocument<D>::Implementation() const
{
    Windows::Data::Xml::Dom::XmlDomImplementation value { nullptr };
    check_hresult(static_cast<const IXmlDocument &>(static_cast<const D &>(*this))->get_Implementation(put(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::XmlElement impl_IXmlDocument<D>::DocumentElement() const
{
    Windows::Data::Xml::Dom::XmlElement value { nullptr };
    check_hresult(static_cast<const IXmlDocument &>(static_cast<const D &>(*this))->get_DocumentElement(put(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::XmlElement impl_IXmlDocument<D>::CreateElement(hstring_ref tagName) const
{
    Windows::Data::Xml::Dom::XmlElement newElement { nullptr };
    check_hresult(static_cast<const IXmlDocument &>(static_cast<const D &>(*this))->abi_CreateElement(get(tagName), put(newElement)));
    return newElement;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocumentFragment impl_IXmlDocument<D>::CreateDocumentFragment() const
{
    Windows::Data::Xml::Dom::XmlDocumentFragment newDocumentFragment { nullptr };
    check_hresult(static_cast<const IXmlDocument &>(static_cast<const D &>(*this))->abi_CreateDocumentFragment(put(newDocumentFragment)));
    return newDocumentFragment;
}

template <typename D> Windows::Data::Xml::Dom::XmlText impl_IXmlDocument<D>::CreateTextNode(hstring_ref data) const
{
    Windows::Data::Xml::Dom::XmlText newTextNode { nullptr };
    check_hresult(static_cast<const IXmlDocument &>(static_cast<const D &>(*this))->abi_CreateTextNode(get(data), put(newTextNode)));
    return newTextNode;
}

template <typename D> Windows::Data::Xml::Dom::XmlComment impl_IXmlDocument<D>::CreateComment(hstring_ref data) const
{
    Windows::Data::Xml::Dom::XmlComment newComment { nullptr };
    check_hresult(static_cast<const IXmlDocument &>(static_cast<const D &>(*this))->abi_CreateComment(get(data), put(newComment)));
    return newComment;
}

template <typename D> Windows::Data::Xml::Dom::XmlProcessingInstruction impl_IXmlDocument<D>::CreateProcessingInstruction(hstring_ref target, hstring_ref data) const
{
    Windows::Data::Xml::Dom::XmlProcessingInstruction newProcessingInstruction { nullptr };
    check_hresult(static_cast<const IXmlDocument &>(static_cast<const D &>(*this))->abi_CreateProcessingInstruction(get(target), get(data), put(newProcessingInstruction)));
    return newProcessingInstruction;
}

template <typename D> Windows::Data::Xml::Dom::XmlAttribute impl_IXmlDocument<D>::CreateAttribute(hstring_ref name) const
{
    Windows::Data::Xml::Dom::XmlAttribute newAttribute { nullptr };
    check_hresult(static_cast<const IXmlDocument &>(static_cast<const D &>(*this))->abi_CreateAttribute(get(name), put(newAttribute)));
    return newAttribute;
}

template <typename D> Windows::Data::Xml::Dom::XmlEntityReference impl_IXmlDocument<D>::CreateEntityReference(hstring_ref name) const
{
    Windows::Data::Xml::Dom::XmlEntityReference newEntityReference { nullptr };
    check_hresult(static_cast<const IXmlDocument &>(static_cast<const D &>(*this))->abi_CreateEntityReference(get(name), put(newEntityReference)));
    return newEntityReference;
}

template <typename D> Windows::Data::Xml::Dom::XmlNodeList impl_IXmlDocument<D>::GetElementsByTagName(hstring_ref tagName) const
{
    Windows::Data::Xml::Dom::XmlNodeList elements { nullptr };
    check_hresult(static_cast<const IXmlDocument &>(static_cast<const D &>(*this))->abi_GetElementsByTagName(get(tagName), put(elements)));
    return elements;
}

template <typename D> Windows::Data::Xml::Dom::XmlCDataSection impl_IXmlDocument<D>::CreateCDataSection(hstring_ref data) const
{
    Windows::Data::Xml::Dom::XmlCDataSection newCDataSection { nullptr };
    check_hresult(static_cast<const IXmlDocument &>(static_cast<const D &>(*this))->abi_CreateCDataSection(get(data), put(newCDataSection)));
    return newCDataSection;
}

template <typename D> hstring impl_IXmlDocument<D>::DocumentUri() const
{
    hstring value;
    check_hresult(static_cast<const IXmlDocument &>(static_cast<const D &>(*this))->get_DocumentUri(put(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::XmlAttribute impl_IXmlDocument<D>::CreateAttributeNS(const Windows::IInspectable & namespaceUri, hstring_ref qualifiedName) const
{
    Windows::Data::Xml::Dom::XmlAttribute newAttribute { nullptr };
    check_hresult(static_cast<const IXmlDocument &>(static_cast<const D &>(*this))->abi_CreateAttributeNS(get(namespaceUri), get(qualifiedName), put(newAttribute)));
    return newAttribute;
}

template <typename D> Windows::Data::Xml::Dom::XmlElement impl_IXmlDocument<D>::CreateElementNS(const Windows::IInspectable & namespaceUri, hstring_ref qualifiedName) const
{
    Windows::Data::Xml::Dom::XmlElement newElement { nullptr };
    check_hresult(static_cast<const IXmlDocument &>(static_cast<const D &>(*this))->abi_CreateElementNS(get(namespaceUri), get(qualifiedName), put(newElement)));
    return newElement;
}

template <typename D> Windows::Data::Xml::Dom::XmlElement impl_IXmlDocument<D>::GetElementById(hstring_ref elementId) const
{
    Windows::Data::Xml::Dom::XmlElement element { nullptr };
    check_hresult(static_cast<const IXmlDocument &>(static_cast<const D &>(*this))->abi_GetElementById(get(elementId), put(element)));
    return element;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode impl_IXmlDocument<D>::ImportNode(const Windows::Data::Xml::Dom::IXmlNode & node, bool deep) const
{
    Windows::Data::Xml::Dom::IXmlNode newNode;
    check_hresult(static_cast<const IXmlDocument &>(static_cast<const D &>(*this))->abi_ImportNode(get(node), deep, put(newNode)));
    return newNode;
}

template <typename D> uint32_t impl_IXmlNamedNodeMap<D>::Length() const
{
    uint32_t value {};
    check_hresult(static_cast<const IXmlNamedNodeMap &>(static_cast<const D &>(*this))->get_Length(&value));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode impl_IXmlNamedNodeMap<D>::Item(uint32_t index) const
{
    Windows::Data::Xml::Dom::IXmlNode node;
    check_hresult(static_cast<const IXmlNamedNodeMap &>(static_cast<const D &>(*this))->abi_Item(index, put(node)));
    return node;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode impl_IXmlNamedNodeMap<D>::GetNamedItem(hstring_ref name) const
{
    Windows::Data::Xml::Dom::IXmlNode node;
    check_hresult(static_cast<const IXmlNamedNodeMap &>(static_cast<const D &>(*this))->abi_GetNamedItem(get(name), put(node)));
    return node;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode impl_IXmlNamedNodeMap<D>::SetNamedItem(const Windows::Data::Xml::Dom::IXmlNode & node) const
{
    Windows::Data::Xml::Dom::IXmlNode previousNode;
    check_hresult(static_cast<const IXmlNamedNodeMap &>(static_cast<const D &>(*this))->abi_SetNamedItem(get(node), put(previousNode)));
    return previousNode;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode impl_IXmlNamedNodeMap<D>::RemoveNamedItem(hstring_ref name) const
{
    Windows::Data::Xml::Dom::IXmlNode previousNode;
    check_hresult(static_cast<const IXmlNamedNodeMap &>(static_cast<const D &>(*this))->abi_RemoveNamedItem(get(name), put(previousNode)));
    return previousNode;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode impl_IXmlNamedNodeMap<D>::GetNamedItemNS(const Windows::IInspectable & namespaceUri, hstring_ref name) const
{
    Windows::Data::Xml::Dom::IXmlNode node;
    check_hresult(static_cast<const IXmlNamedNodeMap &>(static_cast<const D &>(*this))->abi_GetNamedItemNS(get(namespaceUri), get(name), put(node)));
    return node;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode impl_IXmlNamedNodeMap<D>::RemoveNamedItemNS(const Windows::IInspectable & namespaceUri, hstring_ref name) const
{
    Windows::Data::Xml::Dom::IXmlNode previousNode;
    check_hresult(static_cast<const IXmlNamedNodeMap &>(static_cast<const D &>(*this))->abi_RemoveNamedItemNS(get(namespaceUri), get(name), put(previousNode)));
    return previousNode;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode impl_IXmlNamedNodeMap<D>::SetNamedItemNS(const Windows::Data::Xml::Dom::IXmlNode & node) const
{
    Windows::Data::Xml::Dom::IXmlNode previousNode;
    check_hresult(static_cast<const IXmlNamedNodeMap &>(static_cast<const D &>(*this))->abi_SetNamedItemNS(get(node), put(previousNode)));
    return previousNode;
}

template <typename D> uint32_t impl_IXmlNodeList<D>::Length() const
{
    uint32_t value {};
    check_hresult(static_cast<const IXmlNodeList &>(static_cast<const D &>(*this))->get_Length(&value));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode impl_IXmlNodeList<D>::Item(uint32_t index) const
{
    Windows::Data::Xml::Dom::IXmlNode node;
    check_hresult(static_cast<const IXmlNodeList &>(static_cast<const D &>(*this))->abi_Item(index, put(node)));
    return node;
}

template <typename D> uint32_t impl_IXmlLoadSettings<D>::MaxElementDepth() const
{
    uint32_t value {};
    check_hresult(static_cast<const IXmlLoadSettings &>(static_cast<const D &>(*this))->get_MaxElementDepth(&value));
    return value;
}

template <typename D> void impl_IXmlLoadSettings<D>::MaxElementDepth(uint32_t value) const
{
    check_hresult(static_cast<const IXmlLoadSettings &>(static_cast<const D &>(*this))->put_MaxElementDepth(value));
}

template <typename D> bool impl_IXmlLoadSettings<D>::ProhibitDtd() const
{
    bool value {};
    check_hresult(static_cast<const IXmlLoadSettings &>(static_cast<const D &>(*this))->get_ProhibitDtd(&value));
    return value;
}

template <typename D> void impl_IXmlLoadSettings<D>::ProhibitDtd(bool value) const
{
    check_hresult(static_cast<const IXmlLoadSettings &>(static_cast<const D &>(*this))->put_ProhibitDtd(value));
}

template <typename D> bool impl_IXmlLoadSettings<D>::ResolveExternals() const
{
    bool value {};
    check_hresult(static_cast<const IXmlLoadSettings &>(static_cast<const D &>(*this))->get_ResolveExternals(&value));
    return value;
}

template <typename D> void impl_IXmlLoadSettings<D>::ResolveExternals(bool value) const
{
    check_hresult(static_cast<const IXmlLoadSettings &>(static_cast<const D &>(*this))->put_ResolveExternals(value));
}

template <typename D> bool impl_IXmlLoadSettings<D>::ValidateOnParse() const
{
    bool value {};
    check_hresult(static_cast<const IXmlLoadSettings &>(static_cast<const D &>(*this))->get_ValidateOnParse(&value));
    return value;
}

template <typename D> void impl_IXmlLoadSettings<D>::ValidateOnParse(bool value) const
{
    check_hresult(static_cast<const IXmlLoadSettings &>(static_cast<const D &>(*this))->put_ValidateOnParse(value));
}

template <typename D> bool impl_IXmlLoadSettings<D>::ElementContentWhiteSpace() const
{
    bool value {};
    check_hresult(static_cast<const IXmlLoadSettings &>(static_cast<const D &>(*this))->get_ElementContentWhiteSpace(&value));
    return value;
}

template <typename D> void impl_IXmlLoadSettings<D>::ElementContentWhiteSpace(bool value) const
{
    check_hresult(static_cast<const IXmlLoadSettings &>(static_cast<const D &>(*this))->put_ElementContentWhiteSpace(value));
}

template <typename D> void impl_IXmlDocumentIO<D>::LoadXml(hstring_ref xml) const
{
    check_hresult(static_cast<const IXmlDocumentIO &>(static_cast<const D &>(*this))->abi_LoadXml(get(xml)));
}

template <typename D> void impl_IXmlDocumentIO<D>::LoadXml(hstring_ref xml, const Windows::Data::Xml::Dom::XmlLoadSettings & loadSettings) const
{
    check_hresult(static_cast<const IXmlDocumentIO &>(static_cast<const D &>(*this))->abi_LoadXmlWithSettings(get(xml), get(loadSettings)));
}

template <typename D> Windows::Foundation::IAsyncAction impl_IXmlDocumentIO<D>::SaveToFileAsync(const Windows::Storage::IStorageFile & file) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(static_cast<const IXmlDocumentIO &>(static_cast<const D &>(*this))->abi_SaveToFileAsync(get(file), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> void impl_IXmlDocumentIO2<D>::LoadXmlFromBuffer(const Windows::Storage::Streams::IBuffer & buffer) const
{
    check_hresult(static_cast<const IXmlDocumentIO2 &>(static_cast<const D &>(*this))->abi_LoadXmlFromBuffer(get(buffer)));
}

template <typename D> void impl_IXmlDocumentIO2<D>::LoadXmlFromBuffer(const Windows::Storage::Streams::IBuffer & buffer, const Windows::Data::Xml::Dom::XmlLoadSettings & loadSettings) const
{
    check_hresult(static_cast<const IXmlDocumentIO2 &>(static_cast<const D &>(*this))->abi_LoadXmlFromBufferWithSettings(get(buffer), get(loadSettings)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> impl_IXmlDocumentStatics<D>::LoadFromUriAsync(const Windows::Foundation::Uri & uri) const
{
    Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> asyncInfo;
    check_hresult(static_cast<const IXmlDocumentStatics &>(static_cast<const D &>(*this))->abi_LoadFromUriAsync(get(uri), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> impl_IXmlDocumentStatics<D>::LoadFromUriAsync(const Windows::Foundation::Uri & uri, const Windows::Data::Xml::Dom::XmlLoadSettings & loadSettings) const
{
    Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> asyncInfo;
    check_hresult(static_cast<const IXmlDocumentStatics &>(static_cast<const D &>(*this))->abi_LoadFromUriWithSettingsAsync(get(uri), get(loadSettings), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> impl_IXmlDocumentStatics<D>::LoadFromFileAsync(const Windows::Storage::IStorageFile & file) const
{
    Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> asyncInfo;
    check_hresult(static_cast<const IXmlDocumentStatics &>(static_cast<const D &>(*this))->abi_LoadFromFileAsync(get(file), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> impl_IXmlDocumentStatics<D>::LoadFromFileAsync(const Windows::Storage::IStorageFile & file, const Windows::Data::Xml::Dom::XmlLoadSettings & loadSettings) const
{
    Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> asyncInfo;
    check_hresult(static_cast<const IXmlDocumentStatics &>(static_cast<const D &>(*this))->abi_LoadFromFileWithSettingsAsync(get(file), get(loadSettings), put(asyncInfo)));
    return asyncInfo;
}

inline XmlDocument::XmlDocument() :
    XmlDocument(activate_instance<XmlDocument>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> XmlDocument::LoadFromUriAsync(const Windows::Foundation::Uri & uri)
{
    return get_activation_factory<XmlDocument, IXmlDocumentStatics>().LoadFromUriAsync(uri);
}

inline Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> XmlDocument::LoadFromUriAsync(const Windows::Foundation::Uri & uri, const Windows::Data::Xml::Dom::XmlLoadSettings & loadSettings)
{
    return get_activation_factory<XmlDocument, IXmlDocumentStatics>().LoadFromUriAsync(uri, loadSettings);
}

inline Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> XmlDocument::LoadFromFileAsync(const Windows::Storage::IStorageFile & file)
{
    return get_activation_factory<XmlDocument, IXmlDocumentStatics>().LoadFromFileAsync(file);
}

inline Windows::Foundation::IAsyncOperation<Windows::Data::Xml::Dom::XmlDocument> XmlDocument::LoadFromFileAsync(const Windows::Storage::IStorageFile & file, const Windows::Data::Xml::Dom::XmlLoadSettings & loadSettings)
{
    return get_activation_factory<XmlDocument, IXmlDocumentStatics>().LoadFromFileAsync(file, loadSettings);
}

inline XmlLoadSettings::XmlLoadSettings() :
    XmlLoadSettings(activate_instance<XmlLoadSettings>())
{}

}

}
