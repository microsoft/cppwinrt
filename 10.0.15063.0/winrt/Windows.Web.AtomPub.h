// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Data.Xml.Dom.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Security.Credentials.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Web.Syndication.2.h"
#include "winrt/impl/Windows.Web.AtomPub.2.h"
#include "winrt/Windows.Web.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::AtomPub::ServiceDocument, Windows::Web::Syndication::RetrievalProgress> consume_Windows_Web_AtomPub_IAtomPubClient<D>::RetrieveServiceDocumentAsync(Windows::Foundation::Uri const& uri) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::AtomPub::ServiceDocument, Windows::Web::Syndication::RetrievalProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::AtomPub::IAtomPubClient)->RetrieveServiceDocumentAsync(get_abi(uri), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IInputStream, Windows::Web::Syndication::RetrievalProgress> consume_Windows_Web_AtomPub_IAtomPubClient<D>::RetrieveMediaResourceAsync(Windows::Foundation::Uri const& uri) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IInputStream, Windows::Web::Syndication::RetrievalProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::AtomPub::IAtomPubClient)->RetrieveMediaResourceAsync(get_abi(uri), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationItem, Windows::Web::Syndication::RetrievalProgress> consume_Windows_Web_AtomPub_IAtomPubClient<D>::RetrieveResourceAsync(Windows::Foundation::Uri const& uri) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationItem, Windows::Web::Syndication::RetrievalProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::AtomPub::IAtomPubClient)->RetrieveResourceAsync(get_abi(uri), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationItem, Windows::Web::Syndication::TransferProgress> consume_Windows_Web_AtomPub_IAtomPubClient<D>::CreateResourceAsync(Windows::Foundation::Uri const& uri, param::hstring const& description, Windows::Web::Syndication::SyndicationItem const& item) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationItem, Windows::Web::Syndication::TransferProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::AtomPub::IAtomPubClient)->CreateResourceAsync(get_abi(uri), get_abi(description), get_abi(item), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationItem, Windows::Web::Syndication::TransferProgress> consume_Windows_Web_AtomPub_IAtomPubClient<D>::CreateMediaResourceAsync(Windows::Foundation::Uri const& uri, param::hstring const& mediaType, param::hstring const& description, Windows::Storage::Streams::IInputStream const& mediaStream) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationItem, Windows::Web::Syndication::TransferProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::AtomPub::IAtomPubClient)->CreateMediaResourceAsync(get_abi(uri), get_abi(mediaType), get_abi(description), get_abi(mediaStream), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress> consume_Windows_Web_AtomPub_IAtomPubClient<D>::UpdateMediaResourceAsync(Windows::Foundation::Uri const& uri, param::hstring const& mediaType, Windows::Storage::Streams::IInputStream const& mediaStream) const
{
    Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::AtomPub::IAtomPubClient)->UpdateMediaResourceAsync(get_abi(uri), get_abi(mediaType), get_abi(mediaStream), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress> consume_Windows_Web_AtomPub_IAtomPubClient<D>::UpdateResourceAsync(Windows::Foundation::Uri const& uri, Windows::Web::Syndication::SyndicationItem const& item) const
{
    Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::AtomPub::IAtomPubClient)->UpdateResourceAsync(get_abi(uri), get_abi(item), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress> consume_Windows_Web_AtomPub_IAtomPubClient<D>::UpdateResourceItemAsync(Windows::Web::Syndication::SyndicationItem const& item) const
{
    Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::AtomPub::IAtomPubClient)->UpdateResourceItemAsync(get_abi(item), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress> consume_Windows_Web_AtomPub_IAtomPubClient<D>::DeleteResourceAsync(Windows::Foundation::Uri const& uri) const
{
    Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::AtomPub::IAtomPubClient)->DeleteResourceAsync(get_abi(uri), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress> consume_Windows_Web_AtomPub_IAtomPubClient<D>::DeleteResourceItemAsync(Windows::Web::Syndication::SyndicationItem const& item) const
{
    Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::AtomPub::IAtomPubClient)->DeleteResourceItemAsync(get_abi(item), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Web_AtomPub_IAtomPubClient<D>::CancelAsyncOperations() const
{
    check_hresult(WINRT_SHIM(Windows::Web::AtomPub::IAtomPubClient)->CancelAsyncOperations());
}

template <typename D> Windows::Web::AtomPub::AtomPubClient consume_Windows_Web_AtomPub_IAtomPubClientFactory<D>::CreateAtomPubClientWithCredentials(Windows::Security::Credentials::PasswordCredential const& serverCredential) const
{
    Windows::Web::AtomPub::AtomPubClient atomPubClient{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::AtomPub::IAtomPubClientFactory)->CreateAtomPubClientWithCredentials(get_abi(serverCredential), put_abi(atomPubClient)));
    return atomPubClient;
}

template <typename D> Windows::Web::Syndication::ISyndicationText consume_Windows_Web_AtomPub_IResourceCollection<D>::Title() const
{
    Windows::Web::Syndication::ISyndicationText value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::AtomPub::IResourceCollection)->get_Title(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_AtomPub_IResourceCollection<D>::Uri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::AtomPub::IResourceCollection)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Web::Syndication::SyndicationCategory> consume_Windows_Web_AtomPub_IResourceCollection<D>::Categories() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Web::Syndication::SyndicationCategory> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::AtomPub::IResourceCollection)->get_Categories(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Web_AtomPub_IResourceCollection<D>::Accepts() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::AtomPub::IResourceCollection)->get_Accepts(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Web::AtomPub::Workspace> consume_Windows_Web_AtomPub_IServiceDocument<D>::Workspaces() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Web::AtomPub::Workspace> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::AtomPub::IServiceDocument)->get_Workspaces(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Syndication::ISyndicationText consume_Windows_Web_AtomPub_IWorkspace<D>::Title() const
{
    Windows::Web::Syndication::ISyndicationText value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::AtomPub::IWorkspace)->get_Title(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Web::AtomPub::ResourceCollection> consume_Windows_Web_AtomPub_IWorkspace<D>::Collections() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Web::AtomPub::ResourceCollection> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::AtomPub::IWorkspace)->get_Collections(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Web::AtomPub::IAtomPubClient> : produce_base<D, Windows::Web::AtomPub::IAtomPubClient>
{
    HRESULT __stdcall RetrieveServiceDocumentAsync(::IUnknown* uri, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RetrieveServiceDocumentAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RetrieveMediaResourceAsync(::IUnknown* uri, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RetrieveMediaResourceAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RetrieveResourceAsync(::IUnknown* uri, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RetrieveResourceAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateResourceAsync(::IUnknown* uri, HSTRING description, ::IUnknown* item, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateResourceAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<hstring const*>(&description), *reinterpret_cast<Windows::Web::Syndication::SyndicationItem const*>(&item)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateMediaResourceAsync(::IUnknown* uri, HSTRING mediaType, HSTRING description, ::IUnknown* mediaStream, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateMediaResourceAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<hstring const*>(&mediaType), *reinterpret_cast<hstring const*>(&description), *reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&mediaStream)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UpdateMediaResourceAsync(::IUnknown* uri, HSTRING mediaType, ::IUnknown* mediaStream, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().UpdateMediaResourceAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<hstring const*>(&mediaType), *reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&mediaStream)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UpdateResourceAsync(::IUnknown* uri, ::IUnknown* item, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().UpdateResourceAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Web::Syndication::SyndicationItem const*>(&item)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UpdateResourceItemAsync(::IUnknown* item, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().UpdateResourceItemAsync(*reinterpret_cast<Windows::Web::Syndication::SyndicationItem const*>(&item)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteResourceAsync(::IUnknown* uri, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().DeleteResourceAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteResourceItemAsync(::IUnknown* item, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().DeleteResourceItemAsync(*reinterpret_cast<Windows::Web::Syndication::SyndicationItem const*>(&item)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CancelAsyncOperations() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CancelAsyncOperations();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::AtomPub::IAtomPubClientFactory> : produce_base<D, Windows::Web::AtomPub::IAtomPubClientFactory>
{
    HRESULT __stdcall CreateAtomPubClientWithCredentials(::IUnknown* serverCredential, ::IUnknown** atomPubClient) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *atomPubClient = detach_abi(this->shim().CreateAtomPubClientWithCredentials(*reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&serverCredential)));
            return S_OK;
        }
        catch (...)
        {
            *atomPubClient = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::AtomPub::IResourceCollection> : produce_base<D, Windows::Web::AtomPub::IResourceCollection>
{
    HRESULT __stdcall get_Title(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Uri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Categories(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Categories());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Accepts(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Accepts());
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
struct produce<D, Windows::Web::AtomPub::IServiceDocument> : produce_base<D, Windows::Web::AtomPub::IServiceDocument>
{
    HRESULT __stdcall get_Workspaces(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Workspaces());
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
struct produce<D, Windows::Web::AtomPub::IWorkspace> : produce_base<D, Windows::Web::AtomPub::IWorkspace>
{
    HRESULT __stdcall get_Title(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Collections(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Collections());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Web::AtomPub {

inline AtomPubClient::AtomPubClient() :
    AtomPubClient(activate_instance<AtomPubClient>())
{}

inline AtomPubClient::AtomPubClient(Windows::Security::Credentials::PasswordCredential const& serverCredential) :
    AtomPubClient(get_activation_factory<AtomPubClient, Windows::Web::AtomPub::IAtomPubClientFactory>().CreateAtomPubClientWithCredentials(serverCredential))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Web::AtomPub::IAtomPubClient> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::AtomPub::IAtomPubClient> {};

template<> struct hash<winrt::Windows::Web::AtomPub::IAtomPubClientFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::AtomPub::IAtomPubClientFactory> {};

template<> struct hash<winrt::Windows::Web::AtomPub::IResourceCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::AtomPub::IResourceCollection> {};

template<> struct hash<winrt::Windows::Web::AtomPub::IServiceDocument> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::AtomPub::IServiceDocument> {};

template<> struct hash<winrt::Windows::Web::AtomPub::IWorkspace> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::AtomPub::IWorkspace> {};

template<> struct hash<winrt::Windows::Web::AtomPub::AtomPubClient> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::AtomPub::AtomPubClient> {};

template<> struct hash<winrt::Windows::Web::AtomPub::ResourceCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::AtomPub::ResourceCollection> {};

template<> struct hash<winrt::Windows::Web::AtomPub::ServiceDocument> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::AtomPub::ServiceDocument> {};

template<> struct hash<winrt::Windows::Web::AtomPub::Workspace> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::AtomPub::Workspace> {};

}

WINRT_WARNING_POP
