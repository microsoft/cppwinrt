// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Data::Xml::Dom {

struct XmlDocument;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Security::Credentials {

struct PasswordCredential;

}

WINRT_EXPORT namespace winrt::Windows::Web::Syndication {

enum class SyndicationErrorStatus
{
    Unknown = 0,
    MissingRequiredElement = 1,
    MissingRequiredAttribute = 2,
    InvalidXml = 3,
    UnexpectedContent = 4,
    UnsupportedFormat = 5,
};

enum class SyndicationFormat
{
    Atom10 = 0,
    Rss20 = 1,
    Rss10 = 2,
    Rss092 = 3,
    Rss091 = 4,
    Atom03 = 5,
};

enum class SyndicationTextType
{
    Text = 0,
    Html = 1,
    Xhtml = 2,
};

struct ISyndicationAttribute;
struct ISyndicationAttributeFactory;
struct ISyndicationCategory;
struct ISyndicationCategoryFactory;
struct ISyndicationClient;
struct ISyndicationClientFactory;
struct ISyndicationContent;
struct ISyndicationContentFactory;
struct ISyndicationErrorStatics;
struct ISyndicationFeed;
struct ISyndicationFeedFactory;
struct ISyndicationGenerator;
struct ISyndicationGeneratorFactory;
struct ISyndicationItem;
struct ISyndicationItemFactory;
struct ISyndicationLink;
struct ISyndicationLinkFactory;
struct ISyndicationNode;
struct ISyndicationNodeFactory;
struct ISyndicationPerson;
struct ISyndicationPersonFactory;
struct ISyndicationText;
struct ISyndicationTextFactory;
struct SyndicationAttribute;
struct SyndicationCategory;
struct SyndicationClient;
struct SyndicationContent;
struct SyndicationError;
struct SyndicationFeed;
struct SyndicationGenerator;
struct SyndicationItem;
struct SyndicationLink;
struct SyndicationNode;
struct SyndicationPerson;
struct SyndicationText;
struct RetrievalProgress;
struct TransferProgress;

}

namespace winrt::impl {

template <> struct category<Windows::Web::Syndication::ISyndicationAttribute>{ using type = interface_category; };
template <> struct category<Windows::Web::Syndication::ISyndicationAttributeFactory>{ using type = interface_category; };
template <> struct category<Windows::Web::Syndication::ISyndicationCategory>{ using type = interface_category; };
template <> struct category<Windows::Web::Syndication::ISyndicationCategoryFactory>{ using type = interface_category; };
template <> struct category<Windows::Web::Syndication::ISyndicationClient>{ using type = interface_category; };
template <> struct category<Windows::Web::Syndication::ISyndicationClientFactory>{ using type = interface_category; };
template <> struct category<Windows::Web::Syndication::ISyndicationContent>{ using type = interface_category; };
template <> struct category<Windows::Web::Syndication::ISyndicationContentFactory>{ using type = interface_category; };
template <> struct category<Windows::Web::Syndication::ISyndicationErrorStatics>{ using type = interface_category; };
template <> struct category<Windows::Web::Syndication::ISyndicationFeed>{ using type = interface_category; };
template <> struct category<Windows::Web::Syndication::ISyndicationFeedFactory>{ using type = interface_category; };
template <> struct category<Windows::Web::Syndication::ISyndicationGenerator>{ using type = interface_category; };
template <> struct category<Windows::Web::Syndication::ISyndicationGeneratorFactory>{ using type = interface_category; };
template <> struct category<Windows::Web::Syndication::ISyndicationItem>{ using type = interface_category; };
template <> struct category<Windows::Web::Syndication::ISyndicationItemFactory>{ using type = interface_category; };
template <> struct category<Windows::Web::Syndication::ISyndicationLink>{ using type = interface_category; };
template <> struct category<Windows::Web::Syndication::ISyndicationLinkFactory>{ using type = interface_category; };
template <> struct category<Windows::Web::Syndication::ISyndicationNode>{ using type = interface_category; };
template <> struct category<Windows::Web::Syndication::ISyndicationNodeFactory>{ using type = interface_category; };
template <> struct category<Windows::Web::Syndication::ISyndicationPerson>{ using type = interface_category; };
template <> struct category<Windows::Web::Syndication::ISyndicationPersonFactory>{ using type = interface_category; };
template <> struct category<Windows::Web::Syndication::ISyndicationText>{ using type = interface_category; };
template <> struct category<Windows::Web::Syndication::ISyndicationTextFactory>{ using type = interface_category; };
template <> struct category<Windows::Web::Syndication::SyndicationAttribute>{ using type = class_category; };
template <> struct category<Windows::Web::Syndication::SyndicationCategory>{ using type = class_category; };
template <> struct category<Windows::Web::Syndication::SyndicationClient>{ using type = class_category; };
template <> struct category<Windows::Web::Syndication::SyndicationContent>{ using type = class_category; };
template <> struct category<Windows::Web::Syndication::SyndicationError>{ using type = class_category; };
template <> struct category<Windows::Web::Syndication::SyndicationFeed>{ using type = class_category; };
template <> struct category<Windows::Web::Syndication::SyndicationGenerator>{ using type = class_category; };
template <> struct category<Windows::Web::Syndication::SyndicationItem>{ using type = class_category; };
template <> struct category<Windows::Web::Syndication::SyndicationLink>{ using type = class_category; };
template <> struct category<Windows::Web::Syndication::SyndicationNode>{ using type = class_category; };
template <> struct category<Windows::Web::Syndication::SyndicationPerson>{ using type = class_category; };
template <> struct category<Windows::Web::Syndication::SyndicationText>{ using type = class_category; };
template <> struct category<Windows::Web::Syndication::SyndicationErrorStatus>{ using type = enum_category; };
template <> struct category<Windows::Web::Syndication::SyndicationFormat>{ using type = enum_category; };
template <> struct category<Windows::Web::Syndication::SyndicationTextType>{ using type = enum_category; };
template <> struct category<Windows::Web::Syndication::RetrievalProgress>{ using type = struct_category<uint32_t,uint32_t>; };
template <> struct category<Windows::Web::Syndication::TransferProgress>{ using type = struct_category<uint32_t,uint32_t,uint32_t,uint32_t>; };
template <> struct name<Windows::Web::Syndication::ISyndicationAttribute>{ static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationAttribute" }; };
template <> struct name<Windows::Web::Syndication::ISyndicationAttributeFactory>{ static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationAttributeFactory" }; };
template <> struct name<Windows::Web::Syndication::ISyndicationCategory>{ static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationCategory" }; };
template <> struct name<Windows::Web::Syndication::ISyndicationCategoryFactory>{ static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationCategoryFactory" }; };
template <> struct name<Windows::Web::Syndication::ISyndicationClient>{ static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationClient" }; };
template <> struct name<Windows::Web::Syndication::ISyndicationClientFactory>{ static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationClientFactory" }; };
template <> struct name<Windows::Web::Syndication::ISyndicationContent>{ static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationContent" }; };
template <> struct name<Windows::Web::Syndication::ISyndicationContentFactory>{ static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationContentFactory" }; };
template <> struct name<Windows::Web::Syndication::ISyndicationErrorStatics>{ static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationErrorStatics" }; };
template <> struct name<Windows::Web::Syndication::ISyndicationFeed>{ static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationFeed" }; };
template <> struct name<Windows::Web::Syndication::ISyndicationFeedFactory>{ static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationFeedFactory" }; };
template <> struct name<Windows::Web::Syndication::ISyndicationGenerator>{ static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationGenerator" }; };
template <> struct name<Windows::Web::Syndication::ISyndicationGeneratorFactory>{ static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationGeneratorFactory" }; };
template <> struct name<Windows::Web::Syndication::ISyndicationItem>{ static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationItem" }; };
template <> struct name<Windows::Web::Syndication::ISyndicationItemFactory>{ static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationItemFactory" }; };
template <> struct name<Windows::Web::Syndication::ISyndicationLink>{ static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationLink" }; };
template <> struct name<Windows::Web::Syndication::ISyndicationLinkFactory>{ static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationLinkFactory" }; };
template <> struct name<Windows::Web::Syndication::ISyndicationNode>{ static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationNode" }; };
template <> struct name<Windows::Web::Syndication::ISyndicationNodeFactory>{ static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationNodeFactory" }; };
template <> struct name<Windows::Web::Syndication::ISyndicationPerson>{ static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationPerson" }; };
template <> struct name<Windows::Web::Syndication::ISyndicationPersonFactory>{ static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationPersonFactory" }; };
template <> struct name<Windows::Web::Syndication::ISyndicationText>{ static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationText" }; };
template <> struct name<Windows::Web::Syndication::ISyndicationTextFactory>{ static constexpr auto & value{ L"Windows.Web.Syndication.ISyndicationTextFactory" }; };
template <> struct name<Windows::Web::Syndication::SyndicationAttribute>{ static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationAttribute" }; };
template <> struct name<Windows::Web::Syndication::SyndicationCategory>{ static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationCategory" }; };
template <> struct name<Windows::Web::Syndication::SyndicationClient>{ static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationClient" }; };
template <> struct name<Windows::Web::Syndication::SyndicationContent>{ static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationContent" }; };
template <> struct name<Windows::Web::Syndication::SyndicationError>{ static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationError" }; };
template <> struct name<Windows::Web::Syndication::SyndicationFeed>{ static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationFeed" }; };
template <> struct name<Windows::Web::Syndication::SyndicationGenerator>{ static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationGenerator" }; };
template <> struct name<Windows::Web::Syndication::SyndicationItem>{ static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationItem" }; };
template <> struct name<Windows::Web::Syndication::SyndicationLink>{ static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationLink" }; };
template <> struct name<Windows::Web::Syndication::SyndicationNode>{ static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationNode" }; };
template <> struct name<Windows::Web::Syndication::SyndicationPerson>{ static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationPerson" }; };
template <> struct name<Windows::Web::Syndication::SyndicationText>{ static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationText" }; };
template <> struct name<Windows::Web::Syndication::SyndicationErrorStatus>{ static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationErrorStatus" }; };
template <> struct name<Windows::Web::Syndication::SyndicationFormat>{ static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationFormat" }; };
template <> struct name<Windows::Web::Syndication::SyndicationTextType>{ static constexpr auto & value{ L"Windows.Web.Syndication.SyndicationTextType" }; };
template <> struct name<Windows::Web::Syndication::RetrievalProgress>{ static constexpr auto & value{ L"Windows.Web.Syndication.RetrievalProgress" }; };
template <> struct name<Windows::Web::Syndication::TransferProgress>{ static constexpr auto & value{ L"Windows.Web.Syndication.TransferProgress" }; };
template <> struct guid<Windows::Web::Syndication::ISyndicationAttribute>{ static constexpr GUID value{ 0x71E8F969,0x526E,0x4001,{ 0x9A,0x91,0xE8,0x4F,0x83,0x16,0x1A,0xB1 } }; };
template <> struct guid<Windows::Web::Syndication::ISyndicationAttributeFactory>{ static constexpr GUID value{ 0x624F1599,0xED3E,0x420F,{ 0xBE,0x86,0x64,0x04,0x14,0x88,0x6E,0x4B } }; };
template <> struct guid<Windows::Web::Syndication::ISyndicationCategory>{ static constexpr GUID value{ 0x8715626F,0x0CBA,0x4A7F,{ 0x89,0xFF,0xEC,0xB5,0x28,0x14,0x23,0xB6 } }; };
template <> struct guid<Windows::Web::Syndication::ISyndicationCategoryFactory>{ static constexpr GUID value{ 0xAB42802F,0x49E0,0x4525,{ 0x8A,0xB2,0xAB,0x45,0xC0,0x25,0x28,0xFF } }; };
template <> struct guid<Windows::Web::Syndication::ISyndicationClient>{ static constexpr GUID value{ 0x9E18A9B7,0x7249,0x4B45,{ 0xB2,0x29,0x7D,0xF8,0x95,0xA5,0xA1,0xF5 } }; };
template <> struct guid<Windows::Web::Syndication::ISyndicationClientFactory>{ static constexpr GUID value{ 0x2EC4B32C,0xA79B,0x4114,{ 0xB2,0x9A,0x05,0xDF,0xFB,0xAF,0xB9,0xA4 } }; };
template <> struct guid<Windows::Web::Syndication::ISyndicationContent>{ static constexpr GUID value{ 0x4641FEFE,0x0E55,0x40D0,{ 0xB8,0xD0,0x6A,0x2C,0xCB,0xA9,0xFC,0x7C } }; };
template <> struct guid<Windows::Web::Syndication::ISyndicationContentFactory>{ static constexpr GUID value{ 0x3D2FBB93,0x9520,0x4173,{ 0x93,0x88,0x7E,0x2D,0xF3,0x24,0xA8,0xA0 } }; };
template <> struct guid<Windows::Web::Syndication::ISyndicationErrorStatics>{ static constexpr GUID value{ 0x1FBB2361,0x45C7,0x4833,{ 0x8A,0xA0,0xBE,0x5F,0x3B,0x58,0xA7,0xF4 } }; };
template <> struct guid<Windows::Web::Syndication::ISyndicationFeed>{ static constexpr GUID value{ 0x7FFE3CD2,0x5B66,0x4D62,{ 0x84,0x03,0x1B,0xC1,0x0D,0x91,0x0D,0x6B } }; };
template <> struct guid<Windows::Web::Syndication::ISyndicationFeedFactory>{ static constexpr GUID value{ 0x23472232,0x8BE9,0x48B7,{ 0x89,0x34,0x62,0x05,0x13,0x1D,0x93,0x57 } }; };
template <> struct guid<Windows::Web::Syndication::ISyndicationGenerator>{ static constexpr GUID value{ 0x9768B379,0xFB2B,0x4F6D,{ 0xB4,0x1C,0x08,0x8A,0x58,0x68,0x82,0x5C } }; };
template <> struct guid<Windows::Web::Syndication::ISyndicationGeneratorFactory>{ static constexpr GUID value{ 0xA34083E3,0x1E26,0x4DBC,{ 0xBA,0x9D,0x1A,0xB8,0x4B,0xEF,0xF9,0x7B } }; };
template <> struct guid<Windows::Web::Syndication::ISyndicationItem>{ static constexpr GUID value{ 0x548DB883,0xC384,0x45C1,{ 0x8A,0xE8,0xA3,0x78,0xC4,0xEC,0x48,0x6C } }; };
template <> struct guid<Windows::Web::Syndication::ISyndicationItemFactory>{ static constexpr GUID value{ 0x251D434F,0x7DB8,0x487A,{ 0x85,0xE4,0x10,0xD1,0x91,0xE6,0x6E,0xBB } }; };
template <> struct guid<Windows::Web::Syndication::ISyndicationLink>{ static constexpr GUID value{ 0x27553ABD,0xA10E,0x41B5,{ 0x86,0xBD,0x97,0x59,0x08,0x6E,0xB0,0xC5 } }; };
template <> struct guid<Windows::Web::Syndication::ISyndicationLinkFactory>{ static constexpr GUID value{ 0x5ED863D4,0x5535,0x48AC,{ 0x98,0xD4,0xC1,0x90,0x99,0x50,0x80,0xB3 } }; };
template <> struct guid<Windows::Web::Syndication::ISyndicationNode>{ static constexpr GUID value{ 0x753CEF78,0x51F8,0x45C0,{ 0xA9,0xF5,0xF1,0x71,0x9D,0xEC,0x3F,0xB2 } }; };
template <> struct guid<Windows::Web::Syndication::ISyndicationNodeFactory>{ static constexpr GUID value{ 0x12902188,0x4ACB,0x49A8,{ 0xB7,0x77,0xA5,0xEB,0x92,0xE1,0x8A,0x79 } }; };
template <> struct guid<Windows::Web::Syndication::ISyndicationPerson>{ static constexpr GUID value{ 0xFA1EE5DA,0xA7C6,0x4517,{ 0xA0,0x96,0x01,0x43,0xFA,0xF2,0x93,0x27 } }; };
template <> struct guid<Windows::Web::Syndication::ISyndicationPersonFactory>{ static constexpr GUID value{ 0xDCF4886D,0x229D,0x4B58,{ 0xA4,0x9B,0xF3,0xD2,0xF0,0xF5,0xC9,0x9F } }; };
template <> struct guid<Windows::Web::Syndication::ISyndicationText>{ static constexpr GUID value{ 0xB9CC5E80,0x313A,0x4091,{ 0xA2,0xA6,0x24,0x3E,0x0E,0xE9,0x23,0xF9 } }; };
template <> struct guid<Windows::Web::Syndication::ISyndicationTextFactory>{ static constexpr GUID value{ 0xEE7342F7,0x11C6,0x4B25,{ 0xAB,0x62,0xE5,0x96,0xBD,0x16,0x29,0x46 } }; };
template <> struct default_interface<Windows::Web::Syndication::SyndicationAttribute>{ using type = Windows::Web::Syndication::ISyndicationAttribute; };
template <> struct default_interface<Windows::Web::Syndication::SyndicationCategory>{ using type = Windows::Web::Syndication::ISyndicationCategory; };
template <> struct default_interface<Windows::Web::Syndication::SyndicationClient>{ using type = Windows::Web::Syndication::ISyndicationClient; };
template <> struct default_interface<Windows::Web::Syndication::SyndicationContent>{ using type = Windows::Web::Syndication::ISyndicationContent; };
template <> struct default_interface<Windows::Web::Syndication::SyndicationFeed>{ using type = Windows::Web::Syndication::ISyndicationFeed; };
template <> struct default_interface<Windows::Web::Syndication::SyndicationGenerator>{ using type = Windows::Web::Syndication::ISyndicationGenerator; };
template <> struct default_interface<Windows::Web::Syndication::SyndicationItem>{ using type = Windows::Web::Syndication::ISyndicationItem; };
template <> struct default_interface<Windows::Web::Syndication::SyndicationLink>{ using type = Windows::Web::Syndication::ISyndicationLink; };
template <> struct default_interface<Windows::Web::Syndication::SyndicationNode>{ using type = Windows::Web::Syndication::ISyndicationNode; };
template <> struct default_interface<Windows::Web::Syndication::SyndicationPerson>{ using type = Windows::Web::Syndication::ISyndicationPerson; };
template <> struct default_interface<Windows::Web::Syndication::SyndicationText>{ using type = Windows::Web::Syndication::ISyndicationText; };

template <typename D>
struct consume_Windows_Web_Syndication_ISyndicationAttribute
{
    hstring Name() const;
    void Name(param::hstring const& value) const;
    hstring Namespace() const;
    void Namespace(param::hstring const& value) const;
    hstring Value() const;
    void Value(param::hstring const& value) const;
};
template <> struct consume<Windows::Web::Syndication::ISyndicationAttribute> { template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationAttribute<D>; };

template <typename D>
struct consume_Windows_Web_Syndication_ISyndicationAttributeFactory
{
    Windows::Web::Syndication::SyndicationAttribute CreateSyndicationAttribute(param::hstring const& attributeName, param::hstring const& attributeNamespace, param::hstring const& attributeValue) const;
};
template <> struct consume<Windows::Web::Syndication::ISyndicationAttributeFactory> { template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationAttributeFactory<D>; };

template <typename D>
struct consume_Windows_Web_Syndication_ISyndicationCategory
{
    hstring Label() const;
    void Label(param::hstring const& value) const;
    hstring Scheme() const;
    void Scheme(param::hstring const& value) const;
    hstring Term() const;
    void Term(param::hstring const& value) const;
};
template <> struct consume<Windows::Web::Syndication::ISyndicationCategory> { template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationCategory<D>; };

template <typename D>
struct consume_Windows_Web_Syndication_ISyndicationCategoryFactory
{
    Windows::Web::Syndication::SyndicationCategory CreateSyndicationCategory(param::hstring const& term) const;
    Windows::Web::Syndication::SyndicationCategory CreateSyndicationCategoryEx(param::hstring const& term, param::hstring const& scheme, param::hstring const& label) const;
};
template <> struct consume<Windows::Web::Syndication::ISyndicationCategoryFactory> { template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationCategoryFactory<D>; };

template <typename D>
struct consume_Windows_Web_Syndication_ISyndicationClient
{
    Windows::Security::Credentials::PasswordCredential ServerCredential() const;
    void ServerCredential(Windows::Security::Credentials::PasswordCredential const& value) const;
    Windows::Security::Credentials::PasswordCredential ProxyCredential() const;
    void ProxyCredential(Windows::Security::Credentials::PasswordCredential const& value) const;
    uint32_t MaxResponseBufferSize() const;
    void MaxResponseBufferSize(uint32_t value) const;
    uint32_t Timeout() const;
    void Timeout(uint32_t value) const;
    bool BypassCacheOnRetrieve() const;
    void BypassCacheOnRetrieve(bool value) const;
    void SetRequestHeader(param::hstring const& name, param::hstring const& value) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationFeed, Windows::Web::Syndication::RetrievalProgress> RetrieveFeedAsync(Windows::Foundation::Uri const& uri) const;
};
template <> struct consume<Windows::Web::Syndication::ISyndicationClient> { template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationClient<D>; };

template <typename D>
struct consume_Windows_Web_Syndication_ISyndicationClientFactory
{
    Windows::Web::Syndication::SyndicationClient CreateSyndicationClient(Windows::Security::Credentials::PasswordCredential const& serverCredential) const;
};
template <> struct consume<Windows::Web::Syndication::ISyndicationClientFactory> { template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationClientFactory<D>; };

template <typename D>
struct consume_Windows_Web_Syndication_ISyndicationContent
{
    Windows::Foundation::Uri SourceUri() const;
    void SourceUri(Windows::Foundation::Uri const& value) const;
};
template <> struct consume<Windows::Web::Syndication::ISyndicationContent> { template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationContent<D>; };

template <typename D>
struct consume_Windows_Web_Syndication_ISyndicationContentFactory
{
    Windows::Web::Syndication::SyndicationContent CreateSyndicationContent(param::hstring const& text, Windows::Web::Syndication::SyndicationTextType const& type) const;
    Windows::Web::Syndication::SyndicationContent CreateSyndicationContentWithSourceUri(Windows::Foundation::Uri const& sourceUri) const;
};
template <> struct consume<Windows::Web::Syndication::ISyndicationContentFactory> { template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationContentFactory<D>; };

template <typename D>
struct consume_Windows_Web_Syndication_ISyndicationErrorStatics
{
    Windows::Web::Syndication::SyndicationErrorStatus GetStatus(int32_t hresult) const;
};
template <> struct consume<Windows::Web::Syndication::ISyndicationErrorStatics> { template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationErrorStatics<D>; };

template <typename D>
struct consume_Windows_Web_Syndication_ISyndicationFeed
{
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson> Authors() const;
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationCategory> Categories() const;
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson> Contributors() const;
    Windows::Web::Syndication::SyndicationGenerator Generator() const;
    void Generator(Windows::Web::Syndication::SyndicationGenerator const& value) const;
    Windows::Foundation::Uri IconUri() const;
    void IconUri(Windows::Foundation::Uri const& value) const;
    hstring Id() const;
    void Id(param::hstring const& value) const;
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationItem> Items() const;
    Windows::Foundation::DateTime LastUpdatedTime() const;
    void LastUpdatedTime(Windows::Foundation::DateTime const& value) const;
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationLink> Links() const;
    Windows::Foundation::Uri ImageUri() const;
    void ImageUri(Windows::Foundation::Uri const& value) const;
    Windows::Web::Syndication::ISyndicationText Rights() const;
    void Rights(Windows::Web::Syndication::ISyndicationText const& value) const;
    Windows::Web::Syndication::ISyndicationText Subtitle() const;
    void Subtitle(Windows::Web::Syndication::ISyndicationText const& value) const;
    Windows::Web::Syndication::ISyndicationText Title() const;
    void Title(Windows::Web::Syndication::ISyndicationText const& value) const;
    Windows::Foundation::Uri FirstUri() const;
    Windows::Foundation::Uri LastUri() const;
    Windows::Foundation::Uri NextUri() const;
    Windows::Foundation::Uri PreviousUri() const;
    Windows::Web::Syndication::SyndicationFormat SourceFormat() const;
    void Load(param::hstring const& feed) const;
    void LoadFromXml(Windows::Data::Xml::Dom::XmlDocument const& feedDocument) const;
};
template <> struct consume<Windows::Web::Syndication::ISyndicationFeed> { template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationFeed<D>; };

template <typename D>
struct consume_Windows_Web_Syndication_ISyndicationFeedFactory
{
    Windows::Web::Syndication::SyndicationFeed CreateSyndicationFeed(param::hstring const& title, param::hstring const& subtitle, Windows::Foundation::Uri const& uri) const;
};
template <> struct consume<Windows::Web::Syndication::ISyndicationFeedFactory> { template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationFeedFactory<D>; };

template <typename D>
struct consume_Windows_Web_Syndication_ISyndicationGenerator
{
    hstring Text() const;
    void Text(param::hstring const& value) const;
    Windows::Foundation::Uri Uri() const;
    void Uri(Windows::Foundation::Uri const& value) const;
    hstring Version() const;
    void Version(param::hstring const& value) const;
};
template <> struct consume<Windows::Web::Syndication::ISyndicationGenerator> { template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationGenerator<D>; };

template <typename D>
struct consume_Windows_Web_Syndication_ISyndicationGeneratorFactory
{
    Windows::Web::Syndication::SyndicationGenerator CreateSyndicationGenerator(param::hstring const& text) const;
};
template <> struct consume<Windows::Web::Syndication::ISyndicationGeneratorFactory> { template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationGeneratorFactory<D>; };

template <typename D>
struct consume_Windows_Web_Syndication_ISyndicationItem
{
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson> Authors() const;
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationCategory> Categories() const;
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationPerson> Contributors() const;
    Windows::Web::Syndication::SyndicationContent Content() const;
    void Content(Windows::Web::Syndication::SyndicationContent const& value) const;
    hstring Id() const;
    void Id(param::hstring const& value) const;
    Windows::Foundation::DateTime LastUpdatedTime() const;
    void LastUpdatedTime(Windows::Foundation::DateTime const& value) const;
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationLink> Links() const;
    Windows::Foundation::DateTime PublishedDate() const;
    void PublishedDate(Windows::Foundation::DateTime const& value) const;
    Windows::Web::Syndication::ISyndicationText Rights() const;
    void Rights(Windows::Web::Syndication::ISyndicationText const& value) const;
    Windows::Web::Syndication::SyndicationFeed Source() const;
    void Source(Windows::Web::Syndication::SyndicationFeed const& value) const;
    Windows::Web::Syndication::ISyndicationText Summary() const;
    void Summary(Windows::Web::Syndication::ISyndicationText const& value) const;
    Windows::Web::Syndication::ISyndicationText Title() const;
    void Title(Windows::Web::Syndication::ISyndicationText const& value) const;
    Windows::Foundation::Uri CommentsUri() const;
    void CommentsUri(Windows::Foundation::Uri const& value) const;
    Windows::Foundation::Uri EditUri() const;
    Windows::Foundation::Uri EditMediaUri() const;
    hstring ETag() const;
    Windows::Foundation::Uri ItemUri() const;
    void Load(param::hstring const& item) const;
    void LoadFromXml(Windows::Data::Xml::Dom::XmlDocument const& itemDocument) const;
};
template <> struct consume<Windows::Web::Syndication::ISyndicationItem> { template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationItem<D>; };

template <typename D>
struct consume_Windows_Web_Syndication_ISyndicationItemFactory
{
    Windows::Web::Syndication::SyndicationItem CreateSyndicationItem(param::hstring const& title, Windows::Web::Syndication::SyndicationContent const& content, Windows::Foundation::Uri const& uri) const;
};
template <> struct consume<Windows::Web::Syndication::ISyndicationItemFactory> { template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationItemFactory<D>; };

template <typename D>
struct consume_Windows_Web_Syndication_ISyndicationLink
{
    uint32_t Length() const;
    void Length(uint32_t value) const;
    hstring MediaType() const;
    void MediaType(param::hstring const& value) const;
    hstring Relationship() const;
    void Relationship(param::hstring const& value) const;
    hstring Title() const;
    void Title(param::hstring const& value) const;
    Windows::Foundation::Uri Uri() const;
    void Uri(Windows::Foundation::Uri const& value) const;
    hstring ResourceLanguage() const;
    void ResourceLanguage(param::hstring const& value) const;
};
template <> struct consume<Windows::Web::Syndication::ISyndicationLink> { template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationLink<D>; };

template <typename D>
struct consume_Windows_Web_Syndication_ISyndicationLinkFactory
{
    Windows::Web::Syndication::SyndicationLink CreateSyndicationLink(Windows::Foundation::Uri const& uri) const;
    Windows::Web::Syndication::SyndicationLink CreateSyndicationLinkEx(Windows::Foundation::Uri const& uri, param::hstring const& relationship, param::hstring const& title, param::hstring const& mediaType, uint32_t length) const;
};
template <> struct consume<Windows::Web::Syndication::ISyndicationLinkFactory> { template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationLinkFactory<D>; };

template <typename D>
struct consume_Windows_Web_Syndication_ISyndicationNode
{
    hstring NodeName() const;
    void NodeName(param::hstring const& value) const;
    hstring NodeNamespace() const;
    void NodeNamespace(param::hstring const& value) const;
    hstring NodeValue() const;
    void NodeValue(param::hstring const& value) const;
    hstring Language() const;
    void Language(param::hstring const& value) const;
    Windows::Foundation::Uri BaseUri() const;
    void BaseUri(Windows::Foundation::Uri const& value) const;
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::SyndicationAttribute> AttributeExtensions() const;
    Windows::Foundation::Collections::IVector<Windows::Web::Syndication::ISyndicationNode> ElementExtensions() const;
    Windows::Data::Xml::Dom::XmlDocument GetXmlDocument(Windows::Web::Syndication::SyndicationFormat const& format) const;
};
template <> struct consume<Windows::Web::Syndication::ISyndicationNode> { template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationNode<D>; };

template <typename D>
struct consume_Windows_Web_Syndication_ISyndicationNodeFactory
{
    Windows::Web::Syndication::SyndicationNode CreateSyndicationNode(param::hstring const& nodeName, param::hstring const& nodeNamespace, param::hstring const& nodeValue) const;
};
template <> struct consume<Windows::Web::Syndication::ISyndicationNodeFactory> { template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationNodeFactory<D>; };

template <typename D>
struct consume_Windows_Web_Syndication_ISyndicationPerson
{
    hstring Email() const;
    void Email(param::hstring const& value) const;
    hstring Name() const;
    void Name(param::hstring const& value) const;
    Windows::Foundation::Uri Uri() const;
    void Uri(Windows::Foundation::Uri const& value) const;
};
template <> struct consume<Windows::Web::Syndication::ISyndicationPerson> { template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationPerson<D>; };

template <typename D>
struct consume_Windows_Web_Syndication_ISyndicationPersonFactory
{
    Windows::Web::Syndication::SyndicationPerson CreateSyndicationPerson(param::hstring const& name) const;
    Windows::Web::Syndication::SyndicationPerson CreateSyndicationPersonEx(param::hstring const& name, param::hstring const& email, Windows::Foundation::Uri const& uri) const;
};
template <> struct consume<Windows::Web::Syndication::ISyndicationPersonFactory> { template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationPersonFactory<D>; };

template <typename D>
struct consume_Windows_Web_Syndication_ISyndicationText
{
    hstring Text() const;
    void Text(param::hstring const& value) const;
    hstring Type() const;
    void Type(param::hstring const& value) const;
    Windows::Data::Xml::Dom::XmlDocument Xml() const;
    void Xml(Windows::Data::Xml::Dom::XmlDocument const& value) const;
};
template <> struct consume<Windows::Web::Syndication::ISyndicationText> { template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationText<D>; };

template <typename D>
struct consume_Windows_Web_Syndication_ISyndicationTextFactory
{
    Windows::Web::Syndication::SyndicationText CreateSyndicationText(param::hstring const& text) const;
    Windows::Web::Syndication::SyndicationText CreateSyndicationTextEx(param::hstring const& text, Windows::Web::Syndication::SyndicationTextType const& type) const;
};
template <> struct consume<Windows::Web::Syndication::ISyndicationTextFactory> { template <typename D> using type = consume_Windows_Web_Syndication_ISyndicationTextFactory<D>; };

template <> struct abi<Windows::Web::Syndication::ISyndicationAttribute>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Name(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Namespace(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Namespace(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Value(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Value(HSTRING value) = 0;
};};

template <> struct abi<Windows::Web::Syndication::ISyndicationAttributeFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateSyndicationAttribute(HSTRING attributeName, HSTRING attributeNamespace, HSTRING attributeValue, ::IUnknown** syndicationAttribute) = 0;
};};

template <> struct abi<Windows::Web::Syndication::ISyndicationCategory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Label(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Label(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Scheme(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Scheme(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Term(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Term(HSTRING value) = 0;
};};

template <> struct abi<Windows::Web::Syndication::ISyndicationCategoryFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateSyndicationCategory(HSTRING term, ::IUnknown** category) = 0;
    virtual HRESULT __stdcall CreateSyndicationCategoryEx(HSTRING term, HSTRING scheme, HSTRING label, ::IUnknown** category) = 0;
};};

template <> struct abi<Windows::Web::Syndication::ISyndicationClient>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ServerCredential(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ServerCredential(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ProxyCredential(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ProxyCredential(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MaxResponseBufferSize(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_MaxResponseBufferSize(uint32_t value) = 0;
    virtual HRESULT __stdcall get_Timeout(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_Timeout(uint32_t value) = 0;
    virtual HRESULT __stdcall get_BypassCacheOnRetrieve(bool* value) = 0;
    virtual HRESULT __stdcall put_BypassCacheOnRetrieve(bool value) = 0;
    virtual HRESULT __stdcall SetRequestHeader(HSTRING name, HSTRING value) = 0;
    virtual HRESULT __stdcall RetrieveFeedAsync(::IUnknown* uri, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Web::Syndication::ISyndicationClientFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateSyndicationClient(::IUnknown* serverCredential, ::IUnknown** syndicationClient) = 0;
};};

template <> struct abi<Windows::Web::Syndication::ISyndicationContent>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SourceUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_SourceUri(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Web::Syndication::ISyndicationContentFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateSyndicationContent(HSTRING text, abi_t<Windows::Web::Syndication::SyndicationTextType> type, ::IUnknown** content) = 0;
    virtual HRESULT __stdcall CreateSyndicationContentWithSourceUri(::IUnknown* sourceUri, ::IUnknown** content) = 0;
};};

template <> struct abi<Windows::Web::Syndication::ISyndicationErrorStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetStatus(int32_t hresult, abi_t<Windows::Web::Syndication::SyndicationErrorStatus>* status) = 0;
};};

template <> struct abi<Windows::Web::Syndication::ISyndicationFeed>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Authors(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Categories(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Contributors(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Generator(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Generator(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_IconUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_IconUri(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Id(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Items(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LastUpdatedTime(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall put_LastUpdatedTime(abi_t<Windows::Foundation::DateTime> value) = 0;
    virtual HRESULT __stdcall get_Links(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ImageUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ImageUri(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Rights(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Rights(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Subtitle(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Subtitle(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Title(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Title(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_FirstUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LastUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NextUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PreviousUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SourceFormat(abi_t<Windows::Web::Syndication::SyndicationFormat>* value) = 0;
    virtual HRESULT __stdcall Load(HSTRING feed) = 0;
    virtual HRESULT __stdcall LoadFromXml(::IUnknown* feedDocument) = 0;
};};

template <> struct abi<Windows::Web::Syndication::ISyndicationFeedFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateSyndicationFeed(HSTRING title, HSTRING subtitle, ::IUnknown* uri, ::IUnknown** feed) = 0;
};};

template <> struct abi<Windows::Web::Syndication::ISyndicationGenerator>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Text(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Text(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Uri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Uri(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Version(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Version(HSTRING value) = 0;
};};

template <> struct abi<Windows::Web::Syndication::ISyndicationGeneratorFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateSyndicationGenerator(HSTRING text, ::IUnknown** generator) = 0;
};};

template <> struct abi<Windows::Web::Syndication::ISyndicationItem>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Authors(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Categories(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Contributors(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Content(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Content(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Id(HSTRING value) = 0;
    virtual HRESULT __stdcall get_LastUpdatedTime(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall put_LastUpdatedTime(abi_t<Windows::Foundation::DateTime> value) = 0;
    virtual HRESULT __stdcall get_Links(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PublishedDate(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall put_PublishedDate(abi_t<Windows::Foundation::DateTime> value) = 0;
    virtual HRESULT __stdcall get_Rights(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Rights(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Summary(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Summary(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Title(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Title(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_CommentsUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_CommentsUri(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_EditUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_EditMediaUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ETag(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ItemUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall Load(HSTRING item) = 0;
    virtual HRESULT __stdcall LoadFromXml(::IUnknown* itemDocument) = 0;
};};

template <> struct abi<Windows::Web::Syndication::ISyndicationItemFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateSyndicationItem(HSTRING title, ::IUnknown* content, ::IUnknown* uri, ::IUnknown** item) = 0;
};};

template <> struct abi<Windows::Web::Syndication::ISyndicationLink>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Length(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_Length(uint32_t value) = 0;
    virtual HRESULT __stdcall get_MediaType(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_MediaType(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Relationship(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Relationship(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Title(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Title(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Uri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Uri(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ResourceLanguage(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_ResourceLanguage(HSTRING value) = 0;
};};

template <> struct abi<Windows::Web::Syndication::ISyndicationLinkFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateSyndicationLink(::IUnknown* uri, ::IUnknown** link) = 0;
    virtual HRESULT __stdcall CreateSyndicationLinkEx(::IUnknown* uri, HSTRING relationship, HSTRING title, HSTRING mediaType, uint32_t length, ::IUnknown** link) = 0;
};};

template <> struct abi<Windows::Web::Syndication::ISyndicationNode>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NodeName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_NodeName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_NodeNamespace(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_NodeNamespace(HSTRING value) = 0;
    virtual HRESULT __stdcall get_NodeValue(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_NodeValue(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Language(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Language(HSTRING value) = 0;
    virtual HRESULT __stdcall get_BaseUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_BaseUri(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_AttributeExtensions(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ElementExtensions(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetXmlDocument(abi_t<Windows::Web::Syndication::SyndicationFormat> format, ::IUnknown** xmlDocument) = 0;
};};

template <> struct abi<Windows::Web::Syndication::ISyndicationNodeFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateSyndicationNode(HSTRING nodeName, HSTRING nodeNamespace, HSTRING nodeValue, ::IUnknown** node) = 0;
};};

template <> struct abi<Windows::Web::Syndication::ISyndicationPerson>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Email(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Email(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Name(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Uri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Uri(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Web::Syndication::ISyndicationPersonFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateSyndicationPerson(HSTRING name, ::IUnknown** person) = 0;
    virtual HRESULT __stdcall CreateSyndicationPersonEx(HSTRING name, HSTRING email, ::IUnknown* uri, ::IUnknown** person) = 0;
};};

template <> struct abi<Windows::Web::Syndication::ISyndicationText>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Text(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Text(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Type(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Type(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Xml(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Xml(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Web::Syndication::ISyndicationTextFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateSyndicationText(HSTRING text, ::IUnknown** syndicationText) = 0;
    virtual HRESULT __stdcall CreateSyndicationTextEx(HSTRING text, abi_t<Windows::Web::Syndication::SyndicationTextType> type, ::IUnknown** syndicationText) = 0;
};};

}
