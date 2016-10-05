// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Web.Syndication.0.h"
#include "Windows.Data.Xml.Dom.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Security.Credentials.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Web::Syndication {

struct RetrievalProgress
{
    uint32_t BytesRetrieved;
    uint32_t TotalBytesToRetrieve;
};

struct TransferProgress
{
    uint32_t BytesSent;
    uint32_t TotalBytesToSend;
    uint32_t BytesRetrieved;
    uint32_t TotalBytesToRetrieve;
};

}

namespace Windows::Web::Syndication {

using RetrievalProgress = ABI::Windows::Web::Syndication::RetrievalProgress;
using TransferProgress = ABI::Windows::Web::Syndication::TransferProgress;

}

namespace ABI::Windows::Web::Syndication {

struct __declspec(uuid("71e8f969-526e-4001-9a91-e84f83161ab1")) __declspec(novtable) ISyndicationAttribute : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall put_Name(hstring value) = 0;
    virtual HRESULT __stdcall get_Namespace(hstring * value) = 0;
    virtual HRESULT __stdcall put_Namespace(hstring value) = 0;
    virtual HRESULT __stdcall get_Value(hstring * value) = 0;
    virtual HRESULT __stdcall put_Value(hstring value) = 0;
};

struct __declspec(uuid("624f1599-ed3e-420f-be86-640414886e4b")) __declspec(novtable) ISyndicationAttributeFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateSyndicationAttribute(hstring attributeName, hstring attributeNamespace, hstring attributeValue, Windows::Web::Syndication::ISyndicationAttribute ** syndicationAttribute) = 0;
};

struct __declspec(uuid("8715626f-0cba-4a7f-89ff-ecb5281423b6")) __declspec(novtable) ISyndicationCategory : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Label(hstring * value) = 0;
    virtual HRESULT __stdcall put_Label(hstring value) = 0;
    virtual HRESULT __stdcall get_Scheme(hstring * value) = 0;
    virtual HRESULT __stdcall put_Scheme(hstring value) = 0;
    virtual HRESULT __stdcall get_Term(hstring * value) = 0;
    virtual HRESULT __stdcall put_Term(hstring value) = 0;
};

struct __declspec(uuid("ab42802f-49e0-4525-8ab2-ab45c02528ff")) __declspec(novtable) ISyndicationCategoryFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateSyndicationCategory(hstring term, Windows::Web::Syndication::ISyndicationCategory ** category) = 0;
    virtual HRESULT __stdcall abi_CreateSyndicationCategoryEx(hstring term, hstring scheme, hstring label, Windows::Web::Syndication::ISyndicationCategory ** category) = 0;
};

struct __declspec(uuid("9e18a9b7-7249-4b45-b229-7df895a5a1f5")) __declspec(novtable) ISyndicationClient : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ServerCredential(Windows::Security::Credentials::IPasswordCredential ** value) = 0;
    virtual HRESULT __stdcall put_ServerCredential(Windows::Security::Credentials::IPasswordCredential * value) = 0;
    virtual HRESULT __stdcall get_ProxyCredential(Windows::Security::Credentials::IPasswordCredential ** value) = 0;
    virtual HRESULT __stdcall put_ProxyCredential(Windows::Security::Credentials::IPasswordCredential * value) = 0;
    virtual HRESULT __stdcall get_MaxResponseBufferSize(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_MaxResponseBufferSize(uint32_t value) = 0;
    virtual HRESULT __stdcall get_Timeout(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_Timeout(uint32_t value) = 0;
    virtual HRESULT __stdcall get_BypassCacheOnRetrieve(bool * value) = 0;
    virtual HRESULT __stdcall put_BypassCacheOnRetrieve(bool value) = 0;
    virtual HRESULT __stdcall abi_SetRequestHeader(hstring name, hstring value) = 0;
    virtual HRESULT __stdcall abi_RetrieveFeedAsync(Windows::Foundation::IUriRuntimeClass * uri, Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationFeed, Windows::Web::Syndication::RetrievalProgress> ** operation) = 0;
};

struct __declspec(uuid("2ec4b32c-a79b-4114-b29a-05dffbafb9a4")) __declspec(novtable) ISyndicationClientFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateSyndicationClient(Windows::Security::Credentials::IPasswordCredential * serverCredential, Windows::Web::Syndication::ISyndicationClient ** syndicationClient) = 0;
};

struct __declspec(uuid("4641fefe-0e55-40d0-b8d0-6a2ccba9fc7c")) __declspec(novtable) ISyndicationContent : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SourceUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_SourceUri(Windows::Foundation::IUriRuntimeClass * value) = 0;
};

struct __declspec(uuid("3d2fbb93-9520-4173-9388-7e2df324a8a0")) __declspec(novtable) ISyndicationContentFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateSyndicationContent(hstring text, winrt::Windows::Web::Syndication::SyndicationTextType type, Windows::Web::Syndication::ISyndicationContent ** content) = 0;
    virtual HRESULT __stdcall abi_CreateSyndicationContentWithSourceUri(Windows::Foundation::IUriRuntimeClass * sourceUri, Windows::Web::Syndication::ISyndicationContent ** content) = 0;
};

struct __declspec(uuid("1fbb2361-45c7-4833-8aa0-be5f3b58a7f4")) __declspec(novtable) ISyndicationErrorStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetStatus(int32_t hresult, winrt::Windows::Web::Syndication::SyndicationErrorStatus * status) = 0;
};

struct __declspec(uuid("7ffe3cd2-5b66-4d62-8403-1bc10d910d6b")) __declspec(novtable) ISyndicationFeed : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Authors(Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson> ** value) = 0;
    virtual HRESULT __stdcall get_Categories(Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationCategory> ** value) = 0;
    virtual HRESULT __stdcall get_Contributors(Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson> ** value) = 0;
    virtual HRESULT __stdcall get_Generator(Windows::Web::Syndication::ISyndicationGenerator ** value) = 0;
    virtual HRESULT __stdcall put_Generator(Windows::Web::Syndication::ISyndicationGenerator * value) = 0;
    virtual HRESULT __stdcall get_IconUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_IconUri(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall put_Id(hstring value) = 0;
    virtual HRESULT __stdcall get_Items(Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationItem> ** value) = 0;
    virtual HRESULT __stdcall get_LastUpdatedTime(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall put_LastUpdatedTime(Windows::Foundation::DateTime value) = 0;
    virtual HRESULT __stdcall get_Links(Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationLink> ** value) = 0;
    virtual HRESULT __stdcall get_ImageUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_ImageUri(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_Rights(Windows::Web::Syndication::ISyndicationText ** value) = 0;
    virtual HRESULT __stdcall put_Rights(Windows::Web::Syndication::ISyndicationText * value) = 0;
    virtual HRESULT __stdcall get_Subtitle(Windows::Web::Syndication::ISyndicationText ** value) = 0;
    virtual HRESULT __stdcall put_Subtitle(Windows::Web::Syndication::ISyndicationText * value) = 0;
    virtual HRESULT __stdcall get_Title(Windows::Web::Syndication::ISyndicationText ** value) = 0;
    virtual HRESULT __stdcall put_Title(Windows::Web::Syndication::ISyndicationText * value) = 0;
    virtual HRESULT __stdcall get_FirstUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall get_LastUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall get_NextUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall get_PreviousUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall get_SourceFormat(winrt::Windows::Web::Syndication::SyndicationFormat * value) = 0;
    virtual HRESULT __stdcall abi_Load(hstring feed) = 0;
    virtual HRESULT __stdcall abi_LoadFromXml(Windows::Data::Xml::Dom::IXmlDocument * feedDocument) = 0;
};

struct __declspec(uuid("23472232-8be9-48b7-8934-6205131d9357")) __declspec(novtable) ISyndicationFeedFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateSyndicationFeed(hstring title, hstring subtitle, Windows::Foundation::IUriRuntimeClass * uri, Windows::Web::Syndication::ISyndicationFeed ** feed) = 0;
};

struct __declspec(uuid("9768b379-fb2b-4f6d-b41c-088a5868825c")) __declspec(novtable) ISyndicationGenerator : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Text(hstring * value) = 0;
    virtual HRESULT __stdcall put_Text(hstring value) = 0;
    virtual HRESULT __stdcall get_Uri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_Uri(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_Version(hstring * value) = 0;
    virtual HRESULT __stdcall put_Version(hstring value) = 0;
};

struct __declspec(uuid("a34083e3-1e26-4dbc-ba9d-1ab84beff97b")) __declspec(novtable) ISyndicationGeneratorFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateSyndicationGenerator(hstring text, Windows::Web::Syndication::ISyndicationGenerator ** generator) = 0;
};

struct __declspec(uuid("548db883-c384-45c1-8ae8-a378c4ec486c")) __declspec(novtable) ISyndicationItem : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Authors(Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson> ** value) = 0;
    virtual HRESULT __stdcall get_Categories(Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationCategory> ** value) = 0;
    virtual HRESULT __stdcall get_Contributors(Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson> ** value) = 0;
    virtual HRESULT __stdcall get_Content(Windows::Web::Syndication::ISyndicationContent ** value) = 0;
    virtual HRESULT __stdcall put_Content(Windows::Web::Syndication::ISyndicationContent * value) = 0;
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall put_Id(hstring value) = 0;
    virtual HRESULT __stdcall get_LastUpdatedTime(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall put_LastUpdatedTime(Windows::Foundation::DateTime value) = 0;
    virtual HRESULT __stdcall get_Links(Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationLink> ** value) = 0;
    virtual HRESULT __stdcall get_PublishedDate(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall put_PublishedDate(Windows::Foundation::DateTime value) = 0;
    virtual HRESULT __stdcall get_Rights(Windows::Web::Syndication::ISyndicationText ** value) = 0;
    virtual HRESULT __stdcall put_Rights(Windows::Web::Syndication::ISyndicationText * value) = 0;
    virtual HRESULT __stdcall get_Source(Windows::Web::Syndication::ISyndicationFeed ** value) = 0;
    virtual HRESULT __stdcall put_Source(Windows::Web::Syndication::ISyndicationFeed * value) = 0;
    virtual HRESULT __stdcall get_Summary(Windows::Web::Syndication::ISyndicationText ** value) = 0;
    virtual HRESULT __stdcall put_Summary(Windows::Web::Syndication::ISyndicationText * value) = 0;
    virtual HRESULT __stdcall get_Title(Windows::Web::Syndication::ISyndicationText ** value) = 0;
    virtual HRESULT __stdcall put_Title(Windows::Web::Syndication::ISyndicationText * value) = 0;
    virtual HRESULT __stdcall get_CommentsUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_CommentsUri(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_EditUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall get_EditMediaUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall get_ETag(hstring * value) = 0;
    virtual HRESULT __stdcall get_ItemUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall abi_Load(hstring item) = 0;
    virtual HRESULT __stdcall abi_LoadFromXml(Windows::Data::Xml::Dom::IXmlDocument * itemDocument) = 0;
};

struct __declspec(uuid("251d434f-7db8-487a-85e4-10d191e66ebb")) __declspec(novtable) ISyndicationItemFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateSyndicationItem(hstring title, Windows::Web::Syndication::ISyndicationContent * content, Windows::Foundation::IUriRuntimeClass * uri, Windows::Web::Syndication::ISyndicationItem ** item) = 0;
};

struct __declspec(uuid("27553abd-a10e-41b5-86bd-9759086eb0c5")) __declspec(novtable) ISyndicationLink : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Length(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_Length(uint32_t value) = 0;
    virtual HRESULT __stdcall get_MediaType(hstring * value) = 0;
    virtual HRESULT __stdcall put_MediaType(hstring value) = 0;
    virtual HRESULT __stdcall get_Relationship(hstring * value) = 0;
    virtual HRESULT __stdcall put_Relationship(hstring value) = 0;
    virtual HRESULT __stdcall get_Title(hstring * value) = 0;
    virtual HRESULT __stdcall put_Title(hstring value) = 0;
    virtual HRESULT __stdcall get_Uri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_Uri(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_ResourceLanguage(hstring * value) = 0;
    virtual HRESULT __stdcall put_ResourceLanguage(hstring value) = 0;
};

struct __declspec(uuid("5ed863d4-5535-48ac-98d4-c190995080b3")) __declspec(novtable) ISyndicationLinkFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateSyndicationLink(Windows::Foundation::IUriRuntimeClass * uri, Windows::Web::Syndication::ISyndicationLink ** link) = 0;
    virtual HRESULT __stdcall abi_CreateSyndicationLinkEx(Windows::Foundation::IUriRuntimeClass * uri, hstring relationship, hstring title, hstring mediaType, uint32_t length, Windows::Web::Syndication::ISyndicationLink ** link) = 0;
};

struct __declspec(uuid("753cef78-51f8-45c0-a9f5-f1719dec3fb2")) __declspec(novtable) ISyndicationNode : Windows::IInspectable
{
    virtual HRESULT __stdcall get_NodeName(hstring * value) = 0;
    virtual HRESULT __stdcall put_NodeName(hstring value) = 0;
    virtual HRESULT __stdcall get_NodeNamespace(hstring * value) = 0;
    virtual HRESULT __stdcall put_NodeNamespace(hstring value) = 0;
    virtual HRESULT __stdcall get_NodeValue(hstring * value) = 0;
    virtual HRESULT __stdcall put_NodeValue(hstring value) = 0;
    virtual HRESULT __stdcall get_Language(hstring * value) = 0;
    virtual HRESULT __stdcall put_Language(hstring value) = 0;
    virtual HRESULT __stdcall get_BaseUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_BaseUri(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_AttributeExtensions(Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationAttribute> ** value) = 0;
    virtual HRESULT __stdcall get_ElementExtensions(Windows::Foundation::Collections::IVector<Windows::Web::Syndication::ISyndicationNode> ** value) = 0;
    virtual HRESULT __stdcall abi_GetXmlDocument(winrt::Windows::Web::Syndication::SyndicationFormat format, Windows::Data::Xml::Dom::IXmlDocument ** xmlDocument) = 0;
};

struct __declspec(uuid("12902188-4acb-49a8-b777-a5eb92e18a79")) __declspec(novtable) ISyndicationNodeFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateSyndicationNode(hstring nodeName, hstring nodeNamespace, hstring nodeValue, Windows::Web::Syndication::ISyndicationNode ** node) = 0;
};

struct __declspec(uuid("fa1ee5da-a7c6-4517-a096-0143faf29327")) __declspec(novtable) ISyndicationPerson : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Email(hstring * value) = 0;
    virtual HRESULT __stdcall put_Email(hstring value) = 0;
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall put_Name(hstring value) = 0;
    virtual HRESULT __stdcall get_Uri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_Uri(Windows::Foundation::IUriRuntimeClass * value) = 0;
};

struct __declspec(uuid("dcf4886d-229d-4b58-a49b-f3d2f0f5c99f")) __declspec(novtable) ISyndicationPersonFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateSyndicationPerson(hstring name, Windows::Web::Syndication::ISyndicationPerson ** person) = 0;
    virtual HRESULT __stdcall abi_CreateSyndicationPersonEx(hstring name, hstring email, Windows::Foundation::IUriRuntimeClass * uri, Windows::Web::Syndication::ISyndicationPerson ** person) = 0;
};

struct __declspec(uuid("b9cc5e80-313a-4091-a2a6-243e0ee923f9")) __declspec(novtable) ISyndicationText : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Text(hstring * value) = 0;
    virtual HRESULT __stdcall put_Text(hstring value) = 0;
    virtual HRESULT __stdcall get_Type(hstring * value) = 0;
    virtual HRESULT __stdcall put_Type(hstring value) = 0;
    virtual HRESULT __stdcall get_Xml(Windows::Data::Xml::Dom::IXmlDocument ** value) = 0;
    virtual HRESULT __stdcall put_Xml(Windows::Data::Xml::Dom::IXmlDocument * value) = 0;
};

struct __declspec(uuid("ee7342f7-11c6-4b25-ab62-e596bd162946")) __declspec(novtable) ISyndicationTextFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateSyndicationText(hstring text, Windows::Web::Syndication::ISyndicationText ** syndicationText) = 0;
    virtual HRESULT __stdcall abi_CreateSyndicationTextEx(hstring text, winrt::Windows::Web::Syndication::SyndicationTextType type, Windows::Web::Syndication::ISyndicationText ** syndicationText) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Web::Syndication::SyndicationAttribute> { using default_interface = Windows::Web::Syndication::ISyndicationAttribute; };
template <> struct traits<Windows::Web::Syndication::SyndicationCategory> { using default_interface = Windows::Web::Syndication::ISyndicationCategory; };
template <> struct traits<Windows::Web::Syndication::SyndicationClient> { using default_interface = Windows::Web::Syndication::ISyndicationClient; };
template <> struct traits<Windows::Web::Syndication::SyndicationContent> { using default_interface = Windows::Web::Syndication::ISyndicationContent; };
template <> struct traits<Windows::Web::Syndication::SyndicationFeed> { using default_interface = Windows::Web::Syndication::ISyndicationFeed; };
template <> struct traits<Windows::Web::Syndication::SyndicationGenerator> { using default_interface = Windows::Web::Syndication::ISyndicationGenerator; };
template <> struct traits<Windows::Web::Syndication::SyndicationItem> { using default_interface = Windows::Web::Syndication::ISyndicationItem; };
template <> struct traits<Windows::Web::Syndication::SyndicationLink> { using default_interface = Windows::Web::Syndication::ISyndicationLink; };
template <> struct traits<Windows::Web::Syndication::SyndicationNode> { using default_interface = Windows::Web::Syndication::ISyndicationNode; };
template <> struct traits<Windows::Web::Syndication::SyndicationPerson> { using default_interface = Windows::Web::Syndication::ISyndicationPerson; };
template <> struct traits<Windows::Web::Syndication::SyndicationText> { using default_interface = Windows::Web::Syndication::ISyndicationText; };

}

namespace Windows::Web::Syndication {

template <typename T> struct impl_ISyndicationAttribute;
template <typename T> struct impl_ISyndicationAttributeFactory;
template <typename T> struct impl_ISyndicationCategory;
template <typename T> struct impl_ISyndicationCategoryFactory;
template <typename T> struct impl_ISyndicationClient;
template <typename T> struct impl_ISyndicationClientFactory;
template <typename T> struct impl_ISyndicationContent;
template <typename T> struct impl_ISyndicationContentFactory;
template <typename T> struct impl_ISyndicationErrorStatics;
template <typename T> struct impl_ISyndicationFeed;
template <typename T> struct impl_ISyndicationFeedFactory;
template <typename T> struct impl_ISyndicationGenerator;
template <typename T> struct impl_ISyndicationGeneratorFactory;
template <typename T> struct impl_ISyndicationItem;
template <typename T> struct impl_ISyndicationItemFactory;
template <typename T> struct impl_ISyndicationLink;
template <typename T> struct impl_ISyndicationLinkFactory;
template <typename T> struct impl_ISyndicationNode;
template <typename T> struct impl_ISyndicationNodeFactory;
template <typename T> struct impl_ISyndicationPerson;
template <typename T> struct impl_ISyndicationPersonFactory;
template <typename T> struct impl_ISyndicationText;
template <typename T> struct impl_ISyndicationTextFactory;

}

namespace impl {

template <> struct traits<Windows::Web::Syndication::ISyndicationAttribute>
{
    using abi = ABI::Windows::Web::Syndication::ISyndicationAttribute;
    template <typename D> using consume = Windows::Web::Syndication::impl_ISyndicationAttribute<D>;
};

template <> struct traits<Windows::Web::Syndication::ISyndicationAttributeFactory>
{
    using abi = ABI::Windows::Web::Syndication::ISyndicationAttributeFactory;
    template <typename D> using consume = Windows::Web::Syndication::impl_ISyndicationAttributeFactory<D>;
};

template <> struct traits<Windows::Web::Syndication::ISyndicationCategory>
{
    using abi = ABI::Windows::Web::Syndication::ISyndicationCategory;
    template <typename D> using consume = Windows::Web::Syndication::impl_ISyndicationCategory<D>;
};

template <> struct traits<Windows::Web::Syndication::ISyndicationCategoryFactory>
{
    using abi = ABI::Windows::Web::Syndication::ISyndicationCategoryFactory;
    template <typename D> using consume = Windows::Web::Syndication::impl_ISyndicationCategoryFactory<D>;
};

template <> struct traits<Windows::Web::Syndication::ISyndicationClient>
{
    using abi = ABI::Windows::Web::Syndication::ISyndicationClient;
    template <typename D> using consume = Windows::Web::Syndication::impl_ISyndicationClient<D>;
};

template <> struct traits<Windows::Web::Syndication::ISyndicationClientFactory>
{
    using abi = ABI::Windows::Web::Syndication::ISyndicationClientFactory;
    template <typename D> using consume = Windows::Web::Syndication::impl_ISyndicationClientFactory<D>;
};

template <> struct traits<Windows::Web::Syndication::ISyndicationContent>
{
    using abi = ABI::Windows::Web::Syndication::ISyndicationContent;
    template <typename D> using consume = Windows::Web::Syndication::impl_ISyndicationContent<D>;
};

template <> struct traits<Windows::Web::Syndication::ISyndicationContentFactory>
{
    using abi = ABI::Windows::Web::Syndication::ISyndicationContentFactory;
    template <typename D> using consume = Windows::Web::Syndication::impl_ISyndicationContentFactory<D>;
};

template <> struct traits<Windows::Web::Syndication::ISyndicationErrorStatics>
{
    using abi = ABI::Windows::Web::Syndication::ISyndicationErrorStatics;
    template <typename D> using consume = Windows::Web::Syndication::impl_ISyndicationErrorStatics<D>;
};

template <> struct traits<Windows::Web::Syndication::ISyndicationFeed>
{
    using abi = ABI::Windows::Web::Syndication::ISyndicationFeed;
    template <typename D> using consume = Windows::Web::Syndication::impl_ISyndicationFeed<D>;
};

template <> struct traits<Windows::Web::Syndication::ISyndicationFeedFactory>
{
    using abi = ABI::Windows::Web::Syndication::ISyndicationFeedFactory;
    template <typename D> using consume = Windows::Web::Syndication::impl_ISyndicationFeedFactory<D>;
};

template <> struct traits<Windows::Web::Syndication::ISyndicationGenerator>
{
    using abi = ABI::Windows::Web::Syndication::ISyndicationGenerator;
    template <typename D> using consume = Windows::Web::Syndication::impl_ISyndicationGenerator<D>;
};

template <> struct traits<Windows::Web::Syndication::ISyndicationGeneratorFactory>
{
    using abi = ABI::Windows::Web::Syndication::ISyndicationGeneratorFactory;
    template <typename D> using consume = Windows::Web::Syndication::impl_ISyndicationGeneratorFactory<D>;
};

template <> struct traits<Windows::Web::Syndication::ISyndicationItem>
{
    using abi = ABI::Windows::Web::Syndication::ISyndicationItem;
    template <typename D> using consume = Windows::Web::Syndication::impl_ISyndicationItem<D>;
};

template <> struct traits<Windows::Web::Syndication::ISyndicationItemFactory>
{
    using abi = ABI::Windows::Web::Syndication::ISyndicationItemFactory;
    template <typename D> using consume = Windows::Web::Syndication::impl_ISyndicationItemFactory<D>;
};

template <> struct traits<Windows::Web::Syndication::ISyndicationLink>
{
    using abi = ABI::Windows::Web::Syndication::ISyndicationLink;
    template <typename D> using consume = Windows::Web::Syndication::impl_ISyndicationLink<D>;
};

template <> struct traits<Windows::Web::Syndication::ISyndicationLinkFactory>
{
    using abi = ABI::Windows::Web::Syndication::ISyndicationLinkFactory;
    template <typename D> using consume = Windows::Web::Syndication::impl_ISyndicationLinkFactory<D>;
};

template <> struct traits<Windows::Web::Syndication::ISyndicationNode>
{
    using abi = ABI::Windows::Web::Syndication::ISyndicationNode;
    template <typename D> using consume = Windows::Web::Syndication::impl_ISyndicationNode<D>;
};

template <> struct traits<Windows::Web::Syndication::ISyndicationNodeFactory>
{
    using abi = ABI::Windows::Web::Syndication::ISyndicationNodeFactory;
    template <typename D> using consume = Windows::Web::Syndication::impl_ISyndicationNodeFactory<D>;
};

template <> struct traits<Windows::Web::Syndication::ISyndicationPerson>
{
    using abi = ABI::Windows::Web::Syndication::ISyndicationPerson;
    template <typename D> using consume = Windows::Web::Syndication::impl_ISyndicationPerson<D>;
};

template <> struct traits<Windows::Web::Syndication::ISyndicationPersonFactory>
{
    using abi = ABI::Windows::Web::Syndication::ISyndicationPersonFactory;
    template <typename D> using consume = Windows::Web::Syndication::impl_ISyndicationPersonFactory<D>;
};

template <> struct traits<Windows::Web::Syndication::ISyndicationText>
{
    using abi = ABI::Windows::Web::Syndication::ISyndicationText;
    template <typename D> using consume = Windows::Web::Syndication::impl_ISyndicationText<D>;
};

template <> struct traits<Windows::Web::Syndication::ISyndicationTextFactory>
{
    using abi = ABI::Windows::Web::Syndication::ISyndicationTextFactory;
    template <typename D> using consume = Windows::Web::Syndication::impl_ISyndicationTextFactory<D>;
};

template <> struct traits<Windows::Web::Syndication::SyndicationAttribute>
{
    using abi = ABI::Windows::Web::Syndication::SyndicationAttribute;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Web.Syndication.SyndicationAttribute"; }
};

template <> struct traits<Windows::Web::Syndication::SyndicationCategory>
{
    using abi = ABI::Windows::Web::Syndication::SyndicationCategory;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Web.Syndication.SyndicationCategory"; }
};

template <> struct traits<Windows::Web::Syndication::SyndicationClient>
{
    using abi = ABI::Windows::Web::Syndication::SyndicationClient;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Web.Syndication.SyndicationClient"; }
};

template <> struct traits<Windows::Web::Syndication::SyndicationContent>
{
    using abi = ABI::Windows::Web::Syndication::SyndicationContent;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Web.Syndication.SyndicationContent"; }
};

template <> struct traits<Windows::Web::Syndication::SyndicationError>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Web.Syndication.SyndicationError"; }
};

template <> struct traits<Windows::Web::Syndication::SyndicationFeed>
{
    using abi = ABI::Windows::Web::Syndication::SyndicationFeed;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Web.Syndication.SyndicationFeed"; }
};

template <> struct traits<Windows::Web::Syndication::SyndicationGenerator>
{
    using abi = ABI::Windows::Web::Syndication::SyndicationGenerator;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Web.Syndication.SyndicationGenerator"; }
};

template <> struct traits<Windows::Web::Syndication::SyndicationItem>
{
    using abi = ABI::Windows::Web::Syndication::SyndicationItem;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Web.Syndication.SyndicationItem"; }
};

template <> struct traits<Windows::Web::Syndication::SyndicationLink>
{
    using abi = ABI::Windows::Web::Syndication::SyndicationLink;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Web.Syndication.SyndicationLink"; }
};

template <> struct traits<Windows::Web::Syndication::SyndicationNode>
{
    using abi = ABI::Windows::Web::Syndication::SyndicationNode;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Web.Syndication.SyndicationNode"; }
};

template <> struct traits<Windows::Web::Syndication::SyndicationPerson>
{
    using abi = ABI::Windows::Web::Syndication::SyndicationPerson;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Web.Syndication.SyndicationPerson"; }
};

template <> struct traits<Windows::Web::Syndication::SyndicationText>
{
    using abi = ABI::Windows::Web::Syndication::SyndicationText;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Web.Syndication.SyndicationText"; }
};

}

}
