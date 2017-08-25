// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Data.Xml.Dom.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Security.Credentials.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Web.Syndication.0.h"
#include "winrt/impl/Windows.Web.AtomPub.0.h"

WINRT_EXPORT namespace winrt::Windows::Web::AtomPub {

struct WINRT_EBO IAtomPubClient :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAtomPubClient>,
    impl::require<IAtomPubClient, Windows::Web::Syndication::ISyndicationClient>
{
    IAtomPubClient(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAtomPubClientFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAtomPubClientFactory>
{
    IAtomPubClientFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IResourceCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceCollection>,
    impl::require<IResourceCollection, Windows::Web::Syndication::ISyndicationNode>
{
    IResourceCollection(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IServiceDocument :
    Windows::Foundation::IInspectable,
    impl::consume_t<IServiceDocument>,
    impl::require<IServiceDocument, Windows::Web::Syndication::ISyndicationNode>
{
    IServiceDocument(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWorkspace :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWorkspace>,
    impl::require<IWorkspace, Windows::Web::Syndication::ISyndicationNode>
{
    IWorkspace(std::nullptr_t = nullptr) noexcept {}
};

}
