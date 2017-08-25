// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.ApplicationModel.Resources.2.h"
#include "winrt/Windows.ApplicationModel.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_ApplicationModel_Resources_IResourceLoader<D>::GetString(param::hstring const& resource) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Resources::IResourceLoader)->GetString(get_abi(resource), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Resources_IResourceLoader2<D>::GetStringForUri(Windows::Foundation::Uri const& uri) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Resources::IResourceLoader2)->GetStringForUri(get_abi(uri), put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Resources::ResourceLoader consume_Windows_ApplicationModel_Resources_IResourceLoaderFactory<D>::CreateResourceLoaderByName(param::hstring const& name) const
{
    Windows::ApplicationModel::Resources::ResourceLoader loader{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Resources::IResourceLoaderFactory)->CreateResourceLoaderByName(get_abi(name), put_abi(loader)));
    return loader;
}

template <typename D> hstring consume_Windows_ApplicationModel_Resources_IResourceLoaderStatics<D>::GetStringForReference(Windows::Foundation::Uri const& uri) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Resources::IResourceLoaderStatics)->GetStringForReference(get_abi(uri), put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Resources::ResourceLoader consume_Windows_ApplicationModel_Resources_IResourceLoaderStatics2<D>::GetForCurrentView() const
{
    Windows::ApplicationModel::Resources::ResourceLoader loader{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Resources::IResourceLoaderStatics2)->GetForCurrentView(put_abi(loader)));
    return loader;
}

template <typename D> Windows::ApplicationModel::Resources::ResourceLoader consume_Windows_ApplicationModel_Resources_IResourceLoaderStatics2<D>::GetForCurrentView(param::hstring const& name) const
{
    Windows::ApplicationModel::Resources::ResourceLoader loader{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Resources::IResourceLoaderStatics2)->GetForCurrentViewWithName(get_abi(name), put_abi(loader)));
    return loader;
}

template <typename D> Windows::ApplicationModel::Resources::ResourceLoader consume_Windows_ApplicationModel_Resources_IResourceLoaderStatics2<D>::GetForViewIndependentUse() const
{
    Windows::ApplicationModel::Resources::ResourceLoader loader{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Resources::IResourceLoaderStatics2)->GetForViewIndependentUse(put_abi(loader)));
    return loader;
}

template <typename D> Windows::ApplicationModel::Resources::ResourceLoader consume_Windows_ApplicationModel_Resources_IResourceLoaderStatics2<D>::GetForViewIndependentUse(param::hstring const& name) const
{
    Windows::ApplicationModel::Resources::ResourceLoader loader{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Resources::IResourceLoaderStatics2)->GetForViewIndependentUseWithName(get_abi(name), put_abi(loader)));
    return loader;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::Resources::IResourceLoader> : produce_base<D, Windows::ApplicationModel::Resources::IResourceLoader>
{
    HRESULT __stdcall GetString(HSTRING resource, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetString(*reinterpret_cast<hstring const*>(&resource)));
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
    HRESULT __stdcall GetStringForUri(::IUnknown* uri, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetStringForUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
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
    HRESULT __stdcall CreateResourceLoaderByName(HSTRING name, ::IUnknown** loader) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *loader = detach_abi(this->shim().CreateResourceLoaderByName(*reinterpret_cast<hstring const*>(&name)));
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
    HRESULT __stdcall GetStringForReference(::IUnknown* uri, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetStringForReference(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
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
    HRESULT __stdcall GetForCurrentView(::IUnknown** loader) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *loader = detach_abi(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *loader = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetForCurrentViewWithName(HSTRING name, ::IUnknown** loader) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *loader = detach_abi(this->shim().GetForCurrentView(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *loader = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetForViewIndependentUse(::IUnknown** loader) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *loader = detach_abi(this->shim().GetForViewIndependentUse());
            return S_OK;
        }
        catch (...)
        {
            *loader = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetForViewIndependentUseWithName(HSTRING name, ::IUnknown** loader) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *loader = detach_abi(this->shim().GetForViewIndependentUse(*reinterpret_cast<hstring const*>(&name)));
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

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Resources {

inline ResourceLoader::ResourceLoader() :
    ResourceLoader(activate_instance<ResourceLoader>())
{}

inline ResourceLoader::ResourceLoader(param::hstring const& name) :
    ResourceLoader(get_activation_factory<ResourceLoader, Windows::ApplicationModel::Resources::IResourceLoaderFactory>().CreateResourceLoaderByName(name))
{}

inline hstring ResourceLoader::GetStringForReference(Windows::Foundation::Uri const& uri)
{
    return get_activation_factory<ResourceLoader, Windows::ApplicationModel::Resources::IResourceLoaderStatics>().GetStringForReference(uri);
}

inline Windows::ApplicationModel::Resources::ResourceLoader ResourceLoader::GetForCurrentView()
{
    return get_activation_factory<ResourceLoader, Windows::ApplicationModel::Resources::IResourceLoaderStatics2>().GetForCurrentView();
}

inline Windows::ApplicationModel::Resources::ResourceLoader ResourceLoader::GetForCurrentView(param::hstring const& name)
{
    return get_activation_factory<ResourceLoader, Windows::ApplicationModel::Resources::IResourceLoaderStatics2>().GetForCurrentView(name);
}

inline Windows::ApplicationModel::Resources::ResourceLoader ResourceLoader::GetForViewIndependentUse()
{
    return get_activation_factory<ResourceLoader, Windows::ApplicationModel::Resources::IResourceLoaderStatics2>().GetForViewIndependentUse();
}

inline Windows::ApplicationModel::Resources::ResourceLoader ResourceLoader::GetForViewIndependentUse(param::hstring const& name)
{
    return get_activation_factory<ResourceLoader, Windows::ApplicationModel::Resources::IResourceLoaderStatics2>().GetForViewIndependentUse(name);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Resources::IResourceLoader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Resources::IResourceLoader> {};

template<> struct hash<winrt::Windows::ApplicationModel::Resources::IResourceLoader2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Resources::IResourceLoader2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Resources::IResourceLoaderFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Resources::IResourceLoaderFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::Resources::IResourceLoaderStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Resources::IResourceLoaderStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::Resources::IResourceLoaderStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Resources::IResourceLoaderStatics2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Resources::ResourceLoader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Resources::ResourceLoader> {};

}

WINRT_WARNING_POP
