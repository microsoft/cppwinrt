// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Web.Syndication.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Security.Credentials.3.h"
#include "internal/Windows.Web.AtomPub.3.h"
#include "Windows.Web.h"
#include "Windows.Web.Syndication.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Web::AtomPub::IAtomPubClient> : produce_base<D, Windows::Web::AtomPub::IAtomPubClient>
{
    HRESULT __stdcall abi_RetrieveServiceDocumentAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::AtomPub::ServiceDocument, Windows::Web::Syndication::RetrievalProgress>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RetrieveServiceDocumentAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RetrieveMediaResourceAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IInputStream, Windows::Web::Syndication::RetrievalProgress>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RetrieveMediaResourceAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RetrieveResourceAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationItem, Windows::Web::Syndication::RetrievalProgress>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RetrieveResourceAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateResourceAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_in<hstring> description, abi_arg_in<Windows::Web::Syndication::ISyndicationItem> item, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationItem, Windows::Web::Syndication::TransferProgress>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CreateResourceAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri), *reinterpret_cast<const hstring *>(&description), *reinterpret_cast<const Windows::Web::Syndication::SyndicationItem *>(&item)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateMediaResourceAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_in<hstring> mediaType, abi_arg_in<hstring> description, abi_arg_in<Windows::Storage::Streams::IInputStream> mediaStream, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationItem, Windows::Web::Syndication::TransferProgress>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CreateMediaResourceAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri), *reinterpret_cast<const hstring *>(&mediaType), *reinterpret_cast<const hstring *>(&description), *reinterpret_cast<const Windows::Storage::Streams::IInputStream *>(&mediaStream)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UpdateMediaResourceAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_in<hstring> mediaType, abi_arg_in<Windows::Storage::Streams::IInputStream> mediaStream, abi_arg_out<Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().UpdateMediaResourceAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri), *reinterpret_cast<const hstring *>(&mediaType), *reinterpret_cast<const Windows::Storage::Streams::IInputStream *>(&mediaStream)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UpdateResourceAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_in<Windows::Web::Syndication::ISyndicationItem> item, abi_arg_out<Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().UpdateResourceAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri), *reinterpret_cast<const Windows::Web::Syndication::SyndicationItem *>(&item)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UpdateResourceItemAsync(abi_arg_in<Windows::Web::Syndication::ISyndicationItem> item, abi_arg_out<Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().UpdateResourceItemAsync(*reinterpret_cast<const Windows::Web::Syndication::SyndicationItem *>(&item)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteResourceAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().DeleteResourceAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteResourceItemAsync(abi_arg_in<Windows::Web::Syndication::ISyndicationItem> item, abi_arg_out<Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().DeleteResourceItemAsync(*reinterpret_cast<const Windows::Web::Syndication::SyndicationItem *>(&item)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CancelAsyncOperations() noexcept override
    {
        try
        {
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
    HRESULT __stdcall abi_CreateAtomPubClientWithCredentials(abi_arg_in<Windows::Security::Credentials::IPasswordCredential> serverCredential, abi_arg_out<Windows::Web::AtomPub::IAtomPubClient> atomPubClient) noexcept override
    {
        try
        {
            *atomPubClient = detach(this->shim().CreateAtomPubClientWithCredentials(*reinterpret_cast<const Windows::Security::Credentials::PasswordCredential *>(&serverCredential)));
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
    HRESULT __stdcall get_Title(abi_arg_out<Windows::Web::Syndication::ISyndicationText> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Uri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Categories(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Web::Syndication::SyndicationCategory>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Categories());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Accepts(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Accepts());
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
    HRESULT __stdcall get_Workspaces(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Web::AtomPub::Workspace>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Workspaces());
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
    HRESULT __stdcall get_Title(abi_arg_out<Windows::Web::Syndication::ISyndicationText> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Collections(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Web::AtomPub::ResourceCollection>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Collections());
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

namespace Windows::Web::AtomPub {

template <typename D> Windows::Web::Syndication::ISyndicationText impl_IResourceCollection<D>::Title() const
{
    Windows::Web::Syndication::ISyndicationText value;
    check_hresult(static_cast<const IResourceCollection &>(static_cast<const D &>(*this))->get_Title(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IResourceCollection<D>::Uri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IResourceCollection &>(static_cast<const D &>(*this))->get_Uri(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Web::Syndication::SyndicationCategory> impl_IResourceCollection<D>::Categories() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Web::Syndication::SyndicationCategory> value;
    check_hresult(static_cast<const IResourceCollection &>(static_cast<const D &>(*this))->get_Categories(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IResourceCollection<D>::Accepts() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const IResourceCollection &>(static_cast<const D &>(*this))->get_Accepts(put(value)));
    return value;
}

template <typename D> Windows::Web::Syndication::ISyndicationText impl_IWorkspace<D>::Title() const
{
    Windows::Web::Syndication::ISyndicationText value;
    check_hresult(static_cast<const IWorkspace &>(static_cast<const D &>(*this))->get_Title(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Web::AtomPub::ResourceCollection> impl_IWorkspace<D>::Collections() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Web::AtomPub::ResourceCollection> value;
    check_hresult(static_cast<const IWorkspace &>(static_cast<const D &>(*this))->get_Collections(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Web::AtomPub::Workspace> impl_IServiceDocument<D>::Workspaces() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Web::AtomPub::Workspace> value;
    check_hresult(static_cast<const IServiceDocument &>(static_cast<const D &>(*this))->get_Workspaces(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::AtomPub::ServiceDocument, Windows::Web::Syndication::RetrievalProgress> impl_IAtomPubClient<D>::RetrieveServiceDocumentAsync(const Windows::Foundation::Uri & uri) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::AtomPub::ServiceDocument, Windows::Web::Syndication::RetrievalProgress> operation;
    check_hresult(static_cast<const IAtomPubClient &>(static_cast<const D &>(*this))->abi_RetrieveServiceDocumentAsync(get(uri), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IInputStream, Windows::Web::Syndication::RetrievalProgress> impl_IAtomPubClient<D>::RetrieveMediaResourceAsync(const Windows::Foundation::Uri & uri) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IInputStream, Windows::Web::Syndication::RetrievalProgress> operation;
    check_hresult(static_cast<const IAtomPubClient &>(static_cast<const D &>(*this))->abi_RetrieveMediaResourceAsync(get(uri), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationItem, Windows::Web::Syndication::RetrievalProgress> impl_IAtomPubClient<D>::RetrieveResourceAsync(const Windows::Foundation::Uri & uri) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationItem, Windows::Web::Syndication::RetrievalProgress> operation;
    check_hresult(static_cast<const IAtomPubClient &>(static_cast<const D &>(*this))->abi_RetrieveResourceAsync(get(uri), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationItem, Windows::Web::Syndication::TransferProgress> impl_IAtomPubClient<D>::CreateResourceAsync(const Windows::Foundation::Uri & uri, hstring_ref description, const Windows::Web::Syndication::SyndicationItem & item) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationItem, Windows::Web::Syndication::TransferProgress> operation;
    check_hresult(static_cast<const IAtomPubClient &>(static_cast<const D &>(*this))->abi_CreateResourceAsync(get(uri), get(description), get(item), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationItem, Windows::Web::Syndication::TransferProgress> impl_IAtomPubClient<D>::CreateMediaResourceAsync(const Windows::Foundation::Uri & uri, hstring_ref mediaType, hstring_ref description, const Windows::Storage::Streams::IInputStream & mediaStream) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Syndication::SyndicationItem, Windows::Web::Syndication::TransferProgress> operation;
    check_hresult(static_cast<const IAtomPubClient &>(static_cast<const D &>(*this))->abi_CreateMediaResourceAsync(get(uri), get(mediaType), get(description), get(mediaStream), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress> impl_IAtomPubClient<D>::UpdateMediaResourceAsync(const Windows::Foundation::Uri & uri, hstring_ref mediaType, const Windows::Storage::Streams::IInputStream & mediaStream) const
{
    Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress> operation;
    check_hresult(static_cast<const IAtomPubClient &>(static_cast<const D &>(*this))->abi_UpdateMediaResourceAsync(get(uri), get(mediaType), get(mediaStream), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress> impl_IAtomPubClient<D>::UpdateResourceAsync(const Windows::Foundation::Uri & uri, const Windows::Web::Syndication::SyndicationItem & item) const
{
    Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress> operation;
    check_hresult(static_cast<const IAtomPubClient &>(static_cast<const D &>(*this))->abi_UpdateResourceAsync(get(uri), get(item), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress> impl_IAtomPubClient<D>::UpdateResourceItemAsync(const Windows::Web::Syndication::SyndicationItem & item) const
{
    Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress> operation;
    check_hresult(static_cast<const IAtomPubClient &>(static_cast<const D &>(*this))->abi_UpdateResourceItemAsync(get(item), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress> impl_IAtomPubClient<D>::DeleteResourceAsync(const Windows::Foundation::Uri & uri) const
{
    Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress> operation;
    check_hresult(static_cast<const IAtomPubClient &>(static_cast<const D &>(*this))->abi_DeleteResourceAsync(get(uri), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress> impl_IAtomPubClient<D>::DeleteResourceItemAsync(const Windows::Web::Syndication::SyndicationItem & item) const
{
    Windows::Foundation::IAsyncActionWithProgress<Windows::Web::Syndication::TransferProgress> operation;
    check_hresult(static_cast<const IAtomPubClient &>(static_cast<const D &>(*this))->abi_DeleteResourceItemAsync(get(item), put(operation)));
    return operation;
}

template <typename D> void impl_IAtomPubClient<D>::CancelAsyncOperations() const
{
    check_hresult(static_cast<const IAtomPubClient &>(static_cast<const D &>(*this))->abi_CancelAsyncOperations());
}

template <typename D> Windows::Web::AtomPub::AtomPubClient impl_IAtomPubClientFactory<D>::CreateAtomPubClientWithCredentials(const Windows::Security::Credentials::PasswordCredential & serverCredential) const
{
    Windows::Web::AtomPub::AtomPubClient atomPubClient { nullptr };
    check_hresult(static_cast<const IAtomPubClientFactory &>(static_cast<const D &>(*this))->abi_CreateAtomPubClientWithCredentials(get(serverCredential), put(atomPubClient)));
    return atomPubClient;
}

inline AtomPubClient::AtomPubClient() :
    AtomPubClient(activate_instance<AtomPubClient>())
{}

inline AtomPubClient::AtomPubClient(const Windows::Security::Credentials::PasswordCredential & serverCredential) :
    AtomPubClient(get_activation_factory<AtomPubClient, IAtomPubClientFactory>().CreateAtomPubClientWithCredentials(serverCredential))
{}

}

}
