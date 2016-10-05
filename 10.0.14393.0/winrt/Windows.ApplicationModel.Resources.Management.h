// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.ApplicationModel.Resources.Management.3.h"
#include "Windows.ApplicationModel.Resources.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate> : produce_base<D, Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate>
{
    HRESULT __stdcall get_Type(Windows::ApplicationModel::Resources::Management::IndexedResourceType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
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

    HRESULT __stdcall get_Metadata(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Metadata());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Qualifiers(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Management::IndexedResourceQualifier>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Qualifiers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ValueAsString(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ValueAsString());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetQualifierValue(abi_arg_in<hstring> qualifierName, abi_arg_out<hstring> qualifierValue) noexcept override
    {
        try
        {
            *qualifierValue = detach(this->shim().GetQualifierValue(*reinterpret_cast<const hstring *>(&qualifierName)));
            return S_OK;
        }
        catch (...)
        {
            *qualifierValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier> : produce_base<D, Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier>
{
    HRESULT __stdcall get_QualifierName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().QualifierName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QualifierValue(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().QualifierValue());
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
struct produce<D, Windows::ApplicationModel::Resources::Management::IResourceIndexer> : produce_base<D, Windows::ApplicationModel::Resources::Management::IResourceIndexer>
{
    HRESULT __stdcall abi_IndexFilePath(abi_arg_in<Windows::Foundation::IUriRuntimeClass> filePath, abi_arg_out<Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate> candidate) noexcept override
    {
        try
        {
            *candidate = detach(this->shim().IndexFilePath(*reinterpret_cast<const Windows::Foundation::Uri *>(&filePath)));
            return S_OK;
        }
        catch (...)
        {
            *candidate = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IndexFileContentsAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> file, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().IndexFileContentsAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory> : produce_base<D, Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory>
{
    HRESULT __stdcall abi_CreateResourceIndexer(abi_arg_in<Windows::Foundation::IUriRuntimeClass> projectRoot, abi_arg_out<Windows::ApplicationModel::Resources::Management::IResourceIndexer> indexer) noexcept override
    {
        try
        {
            *indexer = detach(this->shim().CreateResourceIndexer(*reinterpret_cast<const Windows::Foundation::Uri *>(&projectRoot)));
            return S_OK;
        }
        catch (...)
        {
            *indexer = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory2> : produce_base<D, Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory2>
{
    HRESULT __stdcall abi_CreateResourceIndexerWithExtension(abi_arg_in<Windows::Foundation::IUriRuntimeClass> projectRoot, abi_arg_in<Windows::Foundation::IUriRuntimeClass> extensionDllPath, abi_arg_out<Windows::ApplicationModel::Resources::Management::IResourceIndexer> indexer) noexcept override
    {
        try
        {
            *indexer = detach(this->shim().CreateResourceIndexerWithExtension(*reinterpret_cast<const Windows::Foundation::Uri *>(&projectRoot), *reinterpret_cast<const Windows::Foundation::Uri *>(&extensionDllPath)));
            return S_OK;
        }
        catch (...)
        {
            *indexer = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::ApplicationModel::Resources::Management {

template <typename D> Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate impl_IResourceIndexer<D>::IndexFilePath(const Windows::Foundation::Uri & filePath) const
{
    Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate candidate { nullptr };
    check_hresult(static_cast<const IResourceIndexer &>(static_cast<const D &>(*this))->abi_IndexFilePath(get(filePath), put(candidate)));
    return candidate;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate>> impl_IResourceIndexer<D>::IndexFileContentsAsync(const Windows::Foundation::Uri & file) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate>> operation;
    check_hresult(static_cast<const IResourceIndexer &>(static_cast<const D &>(*this))->abi_IndexFileContentsAsync(get(file), put(operation)));
    return operation;
}

template <typename D> Windows::ApplicationModel::Resources::Management::ResourceIndexer impl_IResourceIndexerFactory<D>::CreateResourceIndexer(const Windows::Foundation::Uri & projectRoot) const
{
    Windows::ApplicationModel::Resources::Management::ResourceIndexer indexer { nullptr };
    check_hresult(static_cast<const IResourceIndexerFactory &>(static_cast<const D &>(*this))->abi_CreateResourceIndexer(get(projectRoot), put(indexer)));
    return indexer;
}

template <typename D> Windows::ApplicationModel::Resources::Management::ResourceIndexer impl_IResourceIndexerFactory2<D>::CreateResourceIndexerWithExtension(const Windows::Foundation::Uri & projectRoot, const Windows::Foundation::Uri & extensionDllPath) const
{
    Windows::ApplicationModel::Resources::Management::ResourceIndexer indexer { nullptr };
    check_hresult(static_cast<const IResourceIndexerFactory2 &>(static_cast<const D &>(*this))->abi_CreateResourceIndexerWithExtension(get(projectRoot), get(extensionDllPath), put(indexer)));
    return indexer;
}

template <typename D> hstring impl_IIndexedResourceQualifier<D>::QualifierName() const
{
    hstring value;
    check_hresult(static_cast<const IIndexedResourceQualifier &>(static_cast<const D &>(*this))->get_QualifierName(put(value)));
    return value;
}

template <typename D> hstring impl_IIndexedResourceQualifier<D>::QualifierValue() const
{
    hstring value;
    check_hresult(static_cast<const IIndexedResourceQualifier &>(static_cast<const D &>(*this))->get_QualifierValue(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Resources::Management::IndexedResourceType impl_IIndexedResourceCandidate<D>::Type() const
{
    Windows::ApplicationModel::Resources::Management::IndexedResourceType value {};
    check_hresult(static_cast<const IIndexedResourceCandidate &>(static_cast<const D &>(*this))->get_Type(&value));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IIndexedResourceCandidate<D>::Uri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IIndexedResourceCandidate &>(static_cast<const D &>(*this))->get_Uri(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, hstring> impl_IIndexedResourceCandidate<D>::Metadata() const
{
    Windows::Foundation::Collections::IMapView<hstring, hstring> value;
    check_hresult(static_cast<const IIndexedResourceCandidate &>(static_cast<const D &>(*this))->get_Metadata(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Management::IndexedResourceQualifier> impl_IIndexedResourceCandidate<D>::Qualifiers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Management::IndexedResourceQualifier> value;
    check_hresult(static_cast<const IIndexedResourceCandidate &>(static_cast<const D &>(*this))->get_Qualifiers(put(value)));
    return value;
}

template <typename D> hstring impl_IIndexedResourceCandidate<D>::ValueAsString() const
{
    hstring value;
    check_hresult(static_cast<const IIndexedResourceCandidate &>(static_cast<const D &>(*this))->get_ValueAsString(put(value)));
    return value;
}

template <typename D> hstring impl_IIndexedResourceCandidate<D>::GetQualifierValue(hstring_ref qualifierName) const
{
    hstring qualifierValue;
    check_hresult(static_cast<const IIndexedResourceCandidate &>(static_cast<const D &>(*this))->abi_GetQualifierValue(get(qualifierName), put(qualifierValue)));
    return qualifierValue;
}

inline ResourceIndexer::ResourceIndexer(const Windows::Foundation::Uri & projectRoot, const Windows::Foundation::Uri & extensionDllPath) :
    ResourceIndexer(get_activation_factory<ResourceIndexer, IResourceIndexerFactory2>().CreateResourceIndexerWithExtension(projectRoot, extensionDllPath))
{}

inline ResourceIndexer::ResourceIndexer(const Windows::Foundation::Uri & projectRoot) :
    ResourceIndexer(get_activation_factory<ResourceIndexer, IResourceIndexerFactory>().CreateResourceIndexer(projectRoot))
{}

}

}
