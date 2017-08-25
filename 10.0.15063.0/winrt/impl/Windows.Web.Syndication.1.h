// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Data.Xml.Dom.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Security.Credentials.0.h"
#include "winrt/impl/Windows.Web.Syndication.0.h"

WINRT_EXPORT namespace winrt::Windows::Web::Syndication {

struct WINRT_EBO ISyndicationAttribute :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationAttribute>
{
    ISyndicationAttribute(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISyndicationAttributeFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationAttributeFactory>
{
    ISyndicationAttributeFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISyndicationCategory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationCategory>,
    impl::require<ISyndicationCategory, Windows::Web::Syndication::ISyndicationNode>
{
    ISyndicationCategory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISyndicationCategoryFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationCategoryFactory>
{
    ISyndicationCategoryFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISyndicationClient :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationClient>
{
    ISyndicationClient(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISyndicationClientFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationClientFactory>
{
    ISyndicationClientFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISyndicationContent :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationContent>,
    impl::require<ISyndicationContent, Windows::Web::Syndication::ISyndicationNode, Windows::Web::Syndication::ISyndicationText>
{
    ISyndicationContent(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISyndicationContentFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationContentFactory>
{
    ISyndicationContentFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISyndicationErrorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationErrorStatics>
{
    ISyndicationErrorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISyndicationFeed :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationFeed>,
    impl::require<ISyndicationFeed, Windows::Web::Syndication::ISyndicationNode>
{
    ISyndicationFeed(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISyndicationFeedFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationFeedFactory>
{
    ISyndicationFeedFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISyndicationGenerator :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationGenerator>
{
    ISyndicationGenerator(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISyndicationGeneratorFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationGeneratorFactory>
{
    ISyndicationGeneratorFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISyndicationItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationItem>,
    impl::require<ISyndicationItem, Windows::Web::Syndication::ISyndicationNode>
{
    ISyndicationItem(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISyndicationItemFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationItemFactory>
{
    ISyndicationItemFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISyndicationLink :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationLink>,
    impl::require<ISyndicationLink, Windows::Web::Syndication::ISyndicationNode>
{
    ISyndicationLink(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISyndicationLinkFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationLinkFactory>
{
    ISyndicationLinkFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISyndicationNode :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationNode>
{
    ISyndicationNode(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISyndicationNodeFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationNodeFactory>
{
    ISyndicationNodeFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISyndicationPerson :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationPerson>,
    impl::require<ISyndicationPerson, Windows::Web::Syndication::ISyndicationNode>
{
    ISyndicationPerson(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISyndicationPersonFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationPersonFactory>
{
    ISyndicationPersonFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISyndicationText :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationText>,
    impl::require<ISyndicationText, Windows::Web::Syndication::ISyndicationNode>
{
    ISyndicationText(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISyndicationTextFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISyndicationTextFactory>
{
    ISyndicationTextFactory(std::nullptr_t = nullptr) noexcept {}
};

}
