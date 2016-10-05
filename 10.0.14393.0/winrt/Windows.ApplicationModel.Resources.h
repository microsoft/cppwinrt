// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.ApplicationModel.Resources.3.h"
#include "Windows.ApplicationModel.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::Resources::IResourceLoader> : produce_base<D, Windows::ApplicationModel::Resources::IResourceLoader>
{
    HRESULT __stdcall abi_GetString(abi_arg_in<hstring> resource, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetString(*reinterpret_cast<const hstring *>(&resource)));
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
struct produce<D, Windows::ApplicationModel::Resources::IResourceLoader2> : produce_base<D, Windows::ApplicationModel::Resources::IResourceLoader2>
{
    HRESULT __stdcall abi_GetStringForUri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetStringForUri(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
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
struct produce<D, Windows::ApplicationModel::Resources::IResourceLoaderFactory> : produce_base<D, Windows::ApplicationModel::Resources::IResourceLoaderFactory>
{
    HRESULT __stdcall abi_CreateResourceLoaderByName(abi_arg_in<hstring> name, abi_arg_out<Windows::ApplicationModel::Resources::IResourceLoader> loader) noexcept override
    {
        try
        {
            *loader = detach(this->shim().CreateResourceLoaderByName(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *loader = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Resources::IResourceLoaderStatics> : produce_base<D, Windows::ApplicationModel::Resources::IResourceLoaderStatics>
{
    HRESULT __stdcall abi_GetStringForReference(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetStringForReference(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
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
struct produce<D, Windows::ApplicationModel::Resources::IResourceLoaderStatics2> : produce_base<D, Windows::ApplicationModel::Resources::IResourceLoaderStatics2>
{
    HRESULT __stdcall abi_GetForCurrentView(abi_arg_out<Windows::ApplicationModel::Resources::IResourceLoader> loader) noexcept override
    {
        try
        {
            *loader = detach(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *loader = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetForCurrentViewWithName(abi_arg_in<hstring> name, abi_arg_out<Windows::ApplicationModel::Resources::IResourceLoader> loader) noexcept override
    {
        try
        {
            *loader = detach(this->shim().GetForCurrentView(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *loader = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetForViewIndependentUse(abi_arg_out<Windows::ApplicationModel::Resources::IResourceLoader> loader) noexcept override
    {
        try
        {
            *loader = detach(this->shim().GetForViewIndependentUse());
            return S_OK;
        }
        catch (...)
        {
            *loader = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetForViewIndependentUseWithName(abi_arg_in<hstring> name, abi_arg_out<Windows::ApplicationModel::Resources::IResourceLoader> loader) noexcept override
    {
        try
        {
            *loader = detach(this->shim().GetForViewIndependentUse(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *loader = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::ApplicationModel::Resources {

template <typename D> hstring impl_IResourceLoader<D>::GetString(hstring_ref resource) const
{
    hstring value;
    check_hresult(static_cast<const IResourceLoader &>(static_cast<const D &>(*this))->abi_GetString(get(resource), put(value)));
    return value;
}

template <typename D> hstring impl_IResourceLoader2<D>::GetStringForUri(const Windows::Foundation::Uri & uri) const
{
    hstring value;
    check_hresult(static_cast<const IResourceLoader2 &>(static_cast<const D &>(*this))->abi_GetStringForUri(get(uri), put(value)));
    return value;
}

template <typename D> hstring impl_IResourceLoaderStatics<D>::GetStringForReference(const Windows::Foundation::Uri & uri) const
{
    hstring value;
    check_hresult(static_cast<const IResourceLoaderStatics &>(static_cast<const D &>(*this))->abi_GetStringForReference(get(uri), put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Resources::ResourceLoader impl_IResourceLoaderStatics2<D>::GetForCurrentView() const
{
    Windows::ApplicationModel::Resources::ResourceLoader loader { nullptr };
    check_hresult(static_cast<const IResourceLoaderStatics2 &>(static_cast<const D &>(*this))->abi_GetForCurrentView(put(loader)));
    return loader;
}

template <typename D> Windows::ApplicationModel::Resources::ResourceLoader impl_IResourceLoaderStatics2<D>::GetForCurrentView(hstring_ref name) const
{
    Windows::ApplicationModel::Resources::ResourceLoader loader { nullptr };
    check_hresult(static_cast<const IResourceLoaderStatics2 &>(static_cast<const D &>(*this))->abi_GetForCurrentViewWithName(get(name), put(loader)));
    return loader;
}

template <typename D> Windows::ApplicationModel::Resources::ResourceLoader impl_IResourceLoaderStatics2<D>::GetForViewIndependentUse() const
{
    Windows::ApplicationModel::Resources::ResourceLoader loader { nullptr };
    check_hresult(static_cast<const IResourceLoaderStatics2 &>(static_cast<const D &>(*this))->abi_GetForViewIndependentUse(put(loader)));
    return loader;
}

template <typename D> Windows::ApplicationModel::Resources::ResourceLoader impl_IResourceLoaderStatics2<D>::GetForViewIndependentUse(hstring_ref name) const
{
    Windows::ApplicationModel::Resources::ResourceLoader loader { nullptr };
    check_hresult(static_cast<const IResourceLoaderStatics2 &>(static_cast<const D &>(*this))->abi_GetForViewIndependentUseWithName(get(name), put(loader)));
    return loader;
}

template <typename D> Windows::ApplicationModel::Resources::ResourceLoader impl_IResourceLoaderFactory<D>::CreateResourceLoaderByName(hstring_ref name) const
{
    Windows::ApplicationModel::Resources::ResourceLoader loader { nullptr };
    check_hresult(static_cast<const IResourceLoaderFactory &>(static_cast<const D &>(*this))->abi_CreateResourceLoaderByName(get(name), put(loader)));
    return loader;
}

inline ResourceLoader::ResourceLoader() :
    ResourceLoader(activate_instance<ResourceLoader>())
{}

inline ResourceLoader::ResourceLoader(hstring_ref name) :
    ResourceLoader(get_activation_factory<ResourceLoader, IResourceLoaderFactory>().CreateResourceLoaderByName(name))
{}

inline hstring ResourceLoader::GetStringForReference(const Windows::Foundation::Uri & uri)
{
    return get_activation_factory<ResourceLoader, IResourceLoaderStatics>().GetStringForReference(uri);
}

inline Windows::ApplicationModel::Resources::ResourceLoader ResourceLoader::GetForCurrentView()
{
    return get_activation_factory<ResourceLoader, IResourceLoaderStatics2>().GetForCurrentView();
}

inline Windows::ApplicationModel::Resources::ResourceLoader ResourceLoader::GetForCurrentView(hstring_ref name)
{
    return get_activation_factory<ResourceLoader, IResourceLoaderStatics2>().GetForCurrentView(name);
}

inline Windows::ApplicationModel::Resources::ResourceLoader ResourceLoader::GetForViewIndependentUse()
{
    return get_activation_factory<ResourceLoader, IResourceLoaderStatics2>().GetForViewIndependentUse();
}

inline Windows::ApplicationModel::Resources::ResourceLoader ResourceLoader::GetForViewIndependentUse(hstring_ref name)
{
    return get_activation_factory<ResourceLoader, IResourceLoaderStatics2>().GetForViewIndependentUse(name);
}

}

}
