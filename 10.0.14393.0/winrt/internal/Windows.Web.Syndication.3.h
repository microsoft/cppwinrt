// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Web.Syndication.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Web::Syndication {

struct WINRT_EBO SyndicationAttribute :
    Windows::Web::Syndication::ISyndicationAttribute
{
    SyndicationAttribute(std::nullptr_t) noexcept {}
    SyndicationAttribute();
    SyndicationAttribute(hstring_ref attributeName, hstring_ref attributeNamespace, hstring_ref attributeValue);
};

struct WINRT_EBO SyndicationCategory :
    Windows::Web::Syndication::ISyndicationCategory
{
    SyndicationCategory(std::nullptr_t) noexcept {}
    SyndicationCategory();
    SyndicationCategory(hstring_ref term);
    SyndicationCategory(hstring_ref term, hstring_ref scheme, hstring_ref label);
};

struct WINRT_EBO SyndicationClient :
    Windows::Web::Syndication::ISyndicationClient
{
    SyndicationClient(std::nullptr_t) noexcept {}
    SyndicationClient();
    SyndicationClient(const Windows::Security::Credentials::PasswordCredential & serverCredential);
};

struct WINRT_EBO SyndicationContent :
    Windows::Web::Syndication::ISyndicationContent
{
    SyndicationContent(std::nullptr_t) noexcept {}
    SyndicationContent();
    SyndicationContent(hstring_ref text, Windows::Web::Syndication::SyndicationTextType type);
    SyndicationContent(const Windows::Foundation::Uri & sourceUri);
};

struct SyndicationError
{
    SyndicationError() = delete;
    static Windows::Web::Syndication::SyndicationErrorStatus GetStatus(int32_t hresult);
};

struct WINRT_EBO SyndicationFeed :
    Windows::Web::Syndication::ISyndicationFeed
{
    SyndicationFeed(std::nullptr_t) noexcept {}
    SyndicationFeed();
    SyndicationFeed(hstring_ref title, hstring_ref subtitle, const Windows::Foundation::Uri & uri);
};

struct WINRT_EBO SyndicationGenerator :
    Windows::Web::Syndication::ISyndicationGenerator,
    impl::require<SyndicationGenerator, Windows::Web::Syndication::ISyndicationNode>
{
    SyndicationGenerator(std::nullptr_t) noexcept {}
    SyndicationGenerator();
    SyndicationGenerator(hstring_ref text);
};

struct WINRT_EBO SyndicationItem :
    Windows::Web::Syndication::ISyndicationItem
{
    SyndicationItem(std::nullptr_t) noexcept {}
    SyndicationItem();
    SyndicationItem(hstring_ref title, const Windows::Web::Syndication::SyndicationContent & content, const Windows::Foundation::Uri & uri);
};

struct WINRT_EBO SyndicationLink :
    Windows::Web::Syndication::ISyndicationLink
{
    SyndicationLink(std::nullptr_t) noexcept {}
    SyndicationLink();
    SyndicationLink(const Windows::Foundation::Uri & uri);
    SyndicationLink(const Windows::Foundation::Uri & uri, hstring_ref relationship, hstring_ref title, hstring_ref mediaType, uint32_t length);
};

struct WINRT_EBO SyndicationNode :
    Windows::Web::Syndication::ISyndicationNode
{
    SyndicationNode(std::nullptr_t) noexcept {}
    SyndicationNode();
    SyndicationNode(hstring_ref nodeName, hstring_ref nodeNamespace, hstring_ref nodeValue);
};

struct WINRT_EBO SyndicationPerson :
    Windows::Web::Syndication::ISyndicationPerson
{
    SyndicationPerson(std::nullptr_t) noexcept {}
    SyndicationPerson();
    SyndicationPerson(hstring_ref name);
    SyndicationPerson(hstring_ref name, hstring_ref email, const Windows::Foundation::Uri & uri);
};

struct WINRT_EBO SyndicationText :
    Windows::Web::Syndication::ISyndicationText
{
    SyndicationText(std::nullptr_t) noexcept {}
    SyndicationText();
    SyndicationText(hstring_ref text);
    SyndicationText(hstring_ref text, Windows::Web::Syndication::SyndicationTextType type);
};

}

}
