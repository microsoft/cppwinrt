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

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IInputStream;

}

WINRT_EXPORT namespace winrt::Windows::Web::Syndication {

enum class SyndicationFormat;
struct ISyndicationNode;
struct ISyndicationText;
struct RetrievalProgress;
struct SyndicationAttribute;
struct SyndicationCategory;
struct SyndicationFeed;
struct SyndicationItem;
struct TransferProgress;

}

WINRT_EXPORT namespace winrt::Windows::Web::AtomPub {

struct IAtomPubClient;
struct IAtomPubClientFactory;
struct IResourceCollection;
struct IServiceDocument;
struct IWorkspace;
struct AtomPubClient;
struct ResourceCollection;
struct ServiceDocument;
struct Workspace;

}

namespace winrt::impl {

template <> struct category<Windows::Web::AtomPub::IAtomPubClient>{ using type = interface_category; };
template <> struct category<Windows::Web::AtomPub::IAtomPubClientFactory>{ using type = interface_category; };
template <> struct category<Windows::Web::AtomPub::IResourceCollection>{ using type = interface_category; };
template <> struct category<Windows::Web::AtomPub::IServiceDocument>{ using type = interface_category; };
template <> struct category<Windows::Web::AtomPub::IWorkspace>{ using type = interface_category; };
template <> struct category<Windows::Web::AtomPub::AtomPubClient>{ using type = class_category; };
template <> struct category<Windows::Web::AtomPub::ResourceCollection>{ using type = class_category; };
template <> struct category<Windows::Web::AtomPub::ServiceDocument>{ using type = class_category; };
template <> struct category<Windows::Web::AtomPub::Workspace>{ using type = class_category; };
template <> struct name<Windows::Web::AtomPub::IAtomPubClient>{ static constexpr auto & value{ L"Windows.Web.AtomPub.IAtomPubClient" }; };
template <> struct name<Windows::Web::AtomPub::IAtomPubClientFactory>{ static constexpr auto & value{ L"Windows.Web.AtomPub.IAtomPubClientFactory" }; };
template <> struct name<Windows::Web::AtomPub::IResourceCollection>{ static constexpr auto & value{ L"Windows.Web.AtomPub.IResourceCollection" }; };
template <> struct name<Windows::Web::AtomPub::IServiceDocument>{ static constexpr auto & value{ L"Windows.Web.AtomPub.IServiceDocument" }; };
template <> struct name<Windows::Web::AtomPub::IWorkspace>{ static constexpr auto & value{ L"Windows.Web.AtomPub.IWorkspace" }; };
template <> struct name<Windows::Web::AtomPub::AtomPubClient>{ static constexpr auto & value{ L"Windows.Web.AtomPub.AtomPubClient" }; };
template <> struct name<Windows::Web::AtomPub::ResourceCollection>{ static constexpr auto & value{ L"Windows.Web.AtomPub.ResourceCollection" }; };
template <> struct name<Windows::Web::AtomPub::ServiceDocument>{ static constexpr auto & value{ L"Windows.Web.AtomPub.ServiceDocument" }; };
template <> struct name<Windows::Web::AtomPub::Workspace>{ static constexpr auto & value{ L"Windows.Web.AtomPub.Workspace" }; };
template <> struct guid<Windows::Web::AtomPub::IAtomPubClient>{ static constexpr GUID value{ 0x35392C38,0xCDED,0x4D4C,{ 0x96,0x37,0x05,0xF1,0x5C,0x1C,0x94,0x06 } }; };
template <> struct guid<Windows::Web::AtomPub::IAtomPubClientFactory>{ static constexpr GUID value{ 0x49D55012,0x57CB,0x4BDE,{ 0xAB,0x9F,0x26,0x10,0xB1,0x72,0x77,0x7B } }; };
template <> struct guid<Windows::Web::AtomPub::IResourceCollection>{ static constexpr GUID value{ 0x7F5FD609,0xBC88,0x41D4,{ 0x88,0xFA,0x3D,0xE6,0x70,0x4D,0x42,0x8E } }; };
template <> struct guid<Windows::Web::AtomPub::IServiceDocument>{ static constexpr GUID value{ 0x8B7EC771,0x2AB3,0x4DBE,{ 0x8B,0xCC,0x77,0x8F,0x92,0xB7,0x5E,0x51 } }; };
template <> struct guid<Windows::Web::AtomPub::IWorkspace>{ static constexpr GUID value{ 0xB41DA63B,0xA4B8,0x4036,{ 0x89,0xC5,0x83,0xC3,0x12,0x66,0xBA,0x49 } }; };
template <> struct default_interface<Windows::Web::AtomPub::AtomPubClient>{ using type = Windows::Web::AtomPub::IAtomPubClient; };
template <> struct default_interface<Windows::Web::AtomPub::ResourceCollection>{ using type = Windows::Web::AtomPub::IResourceCollection; };
template <> struct default_interface<Windows::Web::AtomPub::ServiceDocument>{ using type = Windows::Web::AtomPub::IServiceDocument; };
template <> struct default_interface<Windows::Web::AtomPub::Workspace>{ using type = Windows::Web::AtomPub::IWorkspace; };

template <typename D>
struct consume_Windows_Web_AtomPub_IAtomPubClient
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::AtomPub::ServiceDocument, Windows::Web::Syndication::RetrievalProgress> RetrieveServiceDocumentAsync(Windows::Foundation::Uri const& uri) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IInputStream, Windows::Web::Syndication::RetrievalProgress> RetrieveMediaResourceAsync(Windows::Foundation::Uri const& uri) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationItem, Windows::Web::Syndication::RetrievalProgress> RetrieveResourceAsync(Windows::Foundation::Uri const& uri) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationItem, Windows::Web::Syndication::TransferProgress> CreateResourceAsync(Windows::Foundation::Uri const& uri, param::hstring const& description, Windows::Web::Syndication::SyndicationItem const& item) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationItem, Windows::Web::Syndication::TransferProgress> CreateMediaResourceAsync(Windows::Foundation::Uri const& uri, param::hstring const& mediaType, param::hstring const& description, Windows::Storage::Streams::IInputStream const& mediaStream) const;
    Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress> UpdateMediaResourceAsync(Windows::Foundation::Uri const& uri, param::hstring const& mediaType, Windows::Storage::Streams::IInputStream const& mediaStream) const;
    Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress> UpdateResourceAsync(Windows::Foundation::Uri const& uri, Windows::Web::Syndication::SyndicationItem const& item) const;
    Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress> UpdateResourceItemAsync(Windows::Web::Syndication::SyndicationItem const& item) const;
    Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress> DeleteResourceAsync(Windows::Foundation::Uri const& uri) const;
    Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress> DeleteResourceItemAsync(Windows::Web::Syndication::SyndicationItem const& item) const;
    void CancelAsyncOperations() const;
};
template <> struct consume<Windows::Web::AtomPub::IAtomPubClient> { template <typename D> using type = consume_Windows_Web_AtomPub_IAtomPubClient<D>; };

template <typename D>
struct consume_Windows_Web_AtomPub_IAtomPubClientFactory
{
    Windows::Web::AtomPub::AtomPubClient CreateAtomPubClientWithCredentials(Windows::Security::Credentials::PasswordCredential const& serverCredential) const;
};
template <> struct consume<Windows::Web::AtomPub::IAtomPubClientFactory> { template <typename D> using type = consume_Windows_Web_AtomPub_IAtomPubClientFactory<D>; };

template <typename D>
struct consume_Windows_Web_AtomPub_IResourceCollection
{
    Windows::Web::Syndication::ISyndicationText Title() const;
    Windows::Foundation::Uri Uri() const;
    Windows::Foundation::Collections::IVectorView<Windows::Web::Syndication::SyndicationCategory> Categories() const;
    Windows::Foundation::Collections::IVectorView<hstring> Accepts() const;
};
template <> struct consume<Windows::Web::AtomPub::IResourceCollection> { template <typename D> using type = consume_Windows_Web_AtomPub_IResourceCollection<D>; };

template <typename D>
struct consume_Windows_Web_AtomPub_IServiceDocument
{
    Windows::Foundation::Collections::IVectorView<Windows::Web::AtomPub::Workspace> Workspaces() const;
};
template <> struct consume<Windows::Web::AtomPub::IServiceDocument> { template <typename D> using type = consume_Windows_Web_AtomPub_IServiceDocument<D>; };

template <typename D>
struct consume_Windows_Web_AtomPub_IWorkspace
{
    Windows::Web::Syndication::ISyndicationText Title() const;
    Windows::Foundation::Collections::IVectorView<Windows::Web::AtomPub::ResourceCollection> Collections() const;
};
template <> struct consume<Windows::Web::AtomPub::IWorkspace> { template <typename D> using type = consume_Windows_Web_AtomPub_IWorkspace<D>; };

template <> struct abi<Windows::Web::AtomPub::IAtomPubClient>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RetrieveServiceDocumentAsync(::IUnknown* uri, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RetrieveMediaResourceAsync(::IUnknown* uri, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RetrieveResourceAsync(::IUnknown* uri, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateResourceAsync(::IUnknown* uri, HSTRING description, ::IUnknown* item, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateMediaResourceAsync(::IUnknown* uri, HSTRING mediaType, HSTRING description, ::IUnknown* mediaStream, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall UpdateMediaResourceAsync(::IUnknown* uri, HSTRING mediaType, ::IUnknown* mediaStream, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall UpdateResourceAsync(::IUnknown* uri, ::IUnknown* item, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall UpdateResourceItemAsync(::IUnknown* item, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall DeleteResourceAsync(::IUnknown* uri, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall DeleteResourceItemAsync(::IUnknown* item, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CancelAsyncOperations() = 0;
};};

template <> struct abi<Windows::Web::AtomPub::IAtomPubClientFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateAtomPubClientWithCredentials(::IUnknown* serverCredential, ::IUnknown** atomPubClient) = 0;
};};

template <> struct abi<Windows::Web::AtomPub::IResourceCollection>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Title(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Uri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Categories(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Accepts(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Web::AtomPub::IServiceDocument>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Workspaces(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Web::AtomPub::IWorkspace>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Title(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Collections(::IUnknown** value) = 0;
};};

}
