// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Data.Xml.Dom.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Security.Credentials.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Web.Syndication.1.h"
#include "winrt/impl/Windows.Web.AtomPub.1.h"

WINRT_EXPORT namespace winrt::Windows::Web::AtomPub {

struct WINRT_EBO AtomPubClient :
    Windows::Web::AtomPub::IAtomPubClient
{
    AtomPubClient(std::nullptr_t) noexcept {}
    AtomPubClient();
    AtomPubClient(Windows::Security::Credentials::PasswordCredential const& serverCredential);
};

struct WINRT_EBO ResourceCollection :
    Windows::Web::AtomPub::IResourceCollection
{
    ResourceCollection(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ServiceDocument :
    Windows::Web::AtomPub::IServiceDocument
{
    ServiceDocument(std::nullptr_t) noexcept {}
};

struct WINRT_EBO Workspace :
    Windows::Web::AtomPub::IWorkspace
{
    Workspace(std::nullptr_t) noexcept {}
};

}
