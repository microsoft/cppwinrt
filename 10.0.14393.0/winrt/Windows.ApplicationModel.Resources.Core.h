// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.ApplicationModel.Resources.Core.3.h"
#include "Windows.ApplicationModel.Resources.h"
#include "Windows.Foundation.Collections.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::Resources::Core::INamedResource> : produce_base<D, Windows::ApplicationModel::Resources::Core::INamedResource>
{
    HRESULT __stdcall get_Uri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> uri) noexcept override
    {
        try
        {
            *uri = detach(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            *uri = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Candidates(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceCandidate>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Candidates());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Resolve(abi_arg_out<Windows::ApplicationModel::Resources::Core::IResourceCandidate> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Resolve());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ResolveForContext(abi_arg_in<Windows::ApplicationModel::Resources::Core::IResourceContext> resourceContext, abi_arg_out<Windows::ApplicationModel::Resources::Core::IResourceCandidate> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Resolve(*reinterpret_cast<const Windows::ApplicationModel::Resources::Core::ResourceContext *>(&resourceContext)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ResolveAll(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceCandidate>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ResolveAll());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ResolveAllForContext(abi_arg_in<Windows::ApplicationModel::Resources::Core::IResourceContext> resourceContext, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceCandidate>> instances) noexcept override
    {
        try
        {
            *instances = detach(this->shim().ResolveAll(*reinterpret_cast<const Windows::ApplicationModel::Resources::Core::ResourceContext *>(&resourceContext)));
            return S_OK;
        }
        catch (...)
        {
            *instances = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Resources::Core::IResourceCandidate> : produce_base<D, Windows::ApplicationModel::Resources::Core::IResourceCandidate>
{
    HRESULT __stdcall get_Qualifiers(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceQualifier>> value) noexcept override
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

    HRESULT __stdcall get_IsMatch(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsMatch());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsMatchAsDefault(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsMatchAsDefault());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDefault(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsDefault());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ValueAsString(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ValueAsString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetValueAsFileAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetValueAsFileAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetQualifierValue(abi_arg_in<hstring> qualifierName, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetQualifierValue(*reinterpret_cast<const hstring *>(&qualifierName)));
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
struct produce<D, Windows::ApplicationModel::Resources::Core::IResourceCandidate2> : produce_base<D, Windows::ApplicationModel::Resources::Core::IResourceCandidate2>
{
    HRESULT __stdcall abi_GetValueAsStreamAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetValueAsStreamAsync());
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
struct produce<D, Windows::ApplicationModel::Resources::Core::IResourceContext> : produce_base<D, Windows::ApplicationModel::Resources::Core::IResourceContext>
{
    HRESULT __stdcall get_QualifierValues(abi_arg_out<Windows::Foundation::Collections::IObservableMap<hstring, hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().QualifierValues());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Reset() noexcept override
    {
        try
        {
            this->shim().Reset();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ResetQualifierValues(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> qualifierNames) noexcept override
    {
        try
        {
            this->shim().Reset(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&qualifierNames));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OverrideToMatch(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Resources::Core::ResourceQualifier>> result) noexcept override
    {
        try
        {
            this->shim().OverrideToMatch(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Resources::Core::ResourceQualifier> *>(&result));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Clone(abi_arg_out<Windows::ApplicationModel::Resources::Core::IResourceContext> clone) noexcept override
    {
        try
        {
            *clone = detach(this->shim().Clone());
            return S_OK;
        }
        catch (...)
        {
            *clone = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Languages(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Languages());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Languages(abi_arg_in<Windows::Foundation::Collections::IVectorView<hstring>> languages) noexcept override
    {
        try
        {
            this->shim().Languages(*reinterpret_cast<const Windows::Foundation::Collections::IVectorView<hstring> *>(&languages));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Resources::Core::IResourceContextStatics> : produce_base<D, Windows::ApplicationModel::Resources::Core::IResourceContextStatics>
{
    HRESULT __stdcall abi_CreateMatchingContext(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Resources::Core::ResourceQualifier>> result, abi_arg_out<Windows::ApplicationModel::Resources::Core::IResourceContext> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateMatchingContext(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Resources::Core::ResourceQualifier> *>(&result)));
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
struct produce<D, Windows::ApplicationModel::Resources::Core::IResourceContextStatics2> : produce_base<D, Windows::ApplicationModel::Resources::Core::IResourceContextStatics2>
{
    HRESULT __stdcall abi_GetForCurrentView(abi_arg_out<Windows::ApplicationModel::Resources::Core::IResourceContext> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetGlobalQualifierValue(abi_arg_in<hstring> key, abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().SetGlobalQualifierValue(*reinterpret_cast<const hstring *>(&key), *reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ResetGlobalQualifierValues() noexcept override
    {
        try
        {
            this->shim().ResetGlobalQualifierValues();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ResetGlobalQualifierValuesForSpecifiedQualifiers(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> qualifierNames) noexcept override
    {
        try
        {
            this->shim().ResetGlobalQualifierValues(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&qualifierNames));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetForViewIndependentUse(abi_arg_out<Windows::ApplicationModel::Resources::Core::IResourceContext> loader) noexcept override
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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Resources::Core::IResourceContextStatics3> : produce_base<D, Windows::ApplicationModel::Resources::Core::IResourceContextStatics3>
{
    HRESULT __stdcall abi_SetGlobalQualifierValueWithPersistence(abi_arg_in<hstring> key, abi_arg_in<hstring> value, Windows::ApplicationModel::Resources::Core::ResourceQualifierPersistence persistence) noexcept override
    {
        try
        {
            this->shim().SetGlobalQualifierValue(*reinterpret_cast<const hstring *>(&key), *reinterpret_cast<const hstring *>(&value), persistence);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Resources::Core::IResourceManager> : produce_base<D, Windows::ApplicationModel::Resources::Core::IResourceManager>
{
    HRESULT __stdcall get_MainResourceMap(abi_arg_out<Windows::ApplicationModel::Resources::Core::IResourceMap> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MainResourceMap());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllResourceMaps(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Resources::Core::ResourceMap>> maps) noexcept override
    {
        try
        {
            *maps = detach(this->shim().AllResourceMaps());
            return S_OK;
        }
        catch (...)
        {
            *maps = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultContext(abi_arg_out<Windows::ApplicationModel::Resources::Core::IResourceContext> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DefaultContext());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LoadPriFiles(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Storage::IStorageFile>> files) noexcept override
    {
        try
        {
            this->shim().LoadPriFiles(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Storage::IStorageFile> *>(&files));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UnloadPriFiles(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Storage::IStorageFile>> files) noexcept override
    {
        try
        {
            this->shim().UnloadPriFiles(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Storage::IStorageFile> *>(&files));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Resources::Core::IResourceManager2> : produce_base<D, Windows::ApplicationModel::Resources::Core::IResourceManager2>
{
    HRESULT __stdcall abi_GetAllNamedResourcesForPackage(abi_arg_in<hstring> packageName, abi_arg_in<Windows::ApplicationModel::Resources::Core::ResourceLayoutInfo> resourceLayoutInfo, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::NamedResource>> table) noexcept override
    {
        try
        {
            *table = detach(this->shim().GetAllNamedResourcesForPackage(*reinterpret_cast<const hstring *>(&packageName), *reinterpret_cast<const Windows::ApplicationModel::Resources::Core::ResourceLayoutInfo *>(&resourceLayoutInfo)));
            return S_OK;
        }
        catch (...)
        {
            *table = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAllSubtreesForPackage(abi_arg_in<hstring> packageName, abi_arg_in<Windows::ApplicationModel::Resources::Core::ResourceLayoutInfo> resourceLayoutInfo, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceMap>> table) noexcept override
    {
        try
        {
            *table = detach(this->shim().GetAllSubtreesForPackage(*reinterpret_cast<const hstring *>(&packageName), *reinterpret_cast<const Windows::ApplicationModel::Resources::Core::ResourceLayoutInfo *>(&resourceLayoutInfo)));
            return S_OK;
        }
        catch (...)
        {
            *table = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Resources::Core::IResourceManagerStatics> : produce_base<D, Windows::ApplicationModel::Resources::Core::IResourceManagerStatics>
{
    HRESULT __stdcall get_Current(abi_arg_out<Windows::ApplicationModel::Resources::Core::IResourceManager> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Current());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsResourceReference(abi_arg_in<hstring> resourceReference, bool * isReference) noexcept override
    {
        try
        {
            *isReference = detach(this->shim().IsResourceReference(*reinterpret_cast<const hstring *>(&resourceReference)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Resources::Core::IResourceMap> : produce_base<D, Windows::ApplicationModel::Resources::Core::IResourceMap>
{
    HRESULT __stdcall get_Uri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> uri) noexcept override
    {
        try
        {
            *uri = detach(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            *uri = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetValue(abi_arg_in<hstring> resource, abi_arg_out<Windows::ApplicationModel::Resources::Core::IResourceCandidate> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetValue(*reinterpret_cast<const hstring *>(&resource)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetValueForContext(abi_arg_in<hstring> resource, abi_arg_in<Windows::ApplicationModel::Resources::Core::IResourceContext> context, abi_arg_out<Windows::ApplicationModel::Resources::Core::IResourceCandidate> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetValue(*reinterpret_cast<const hstring *>(&resource), *reinterpret_cast<const Windows::ApplicationModel::Resources::Core::ResourceContext *>(&context)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSubtree(abi_arg_in<hstring> reference, abi_arg_out<Windows::ApplicationModel::Resources::Core::IResourceMap> map) noexcept override
    {
        try
        {
            *map = detach(this->shim().GetSubtree(*reinterpret_cast<const hstring *>(&reference)));
            return S_OK;
        }
        catch (...)
        {
            *map = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Resources::Core::IResourceQualifier> : produce_base<D, Windows::ApplicationModel::Resources::Core::IResourceQualifier>
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

    HRESULT __stdcall get_IsDefault(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsDefault());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsMatch(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsMatch());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Score(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Score());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::ApplicationModel::Resources::Core {

template <typename D> Windows::ApplicationModel::Resources::Core::ResourceMap impl_IResourceManager<D>::MainResourceMap() const
{
    Windows::ApplicationModel::Resources::Core::ResourceMap value { nullptr };
    check_hresult(static_cast<const IResourceManager &>(static_cast<const D &>(*this))->get_MainResourceMap(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Resources::Core::ResourceMap> impl_IResourceManager<D>::AllResourceMaps() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Resources::Core::ResourceMap> maps;
    check_hresult(static_cast<const IResourceManager &>(static_cast<const D &>(*this))->get_AllResourceMaps(put(maps)));
    return maps;
}

template <typename D> Windows::ApplicationModel::Resources::Core::ResourceContext impl_IResourceManager<D>::DefaultContext() const
{
    Windows::ApplicationModel::Resources::Core::ResourceContext value { nullptr };
    check_hresult(static_cast<const IResourceManager &>(static_cast<const D &>(*this))->get_DefaultContext(put(value)));
    return value;
}

template <typename D> void impl_IResourceManager<D>::LoadPriFiles(const Windows::Foundation::Collections::IIterable<Windows::Storage::IStorageFile> & files) const
{
    check_hresult(static_cast<const IResourceManager &>(static_cast<const D &>(*this))->abi_LoadPriFiles(get(files)));
}

template <typename D> void impl_IResourceManager<D>::UnloadPriFiles(const Windows::Foundation::Collections::IIterable<Windows::Storage::IStorageFile> & files) const
{
    check_hresult(static_cast<const IResourceManager &>(static_cast<const D &>(*this))->abi_UnloadPriFiles(get(files)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::NamedResource> impl_IResourceManager2<D>::GetAllNamedResourcesForPackage(hstring_ref packageName, const Windows::ApplicationModel::Resources::Core::ResourceLayoutInfo & resourceLayoutInfo) const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::NamedResource> table;
    check_hresult(static_cast<const IResourceManager2 &>(static_cast<const D &>(*this))->abi_GetAllNamedResourcesForPackage(get(packageName), get(resourceLayoutInfo), put(table)));
    return table;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceMap> impl_IResourceManager2<D>::GetAllSubtreesForPackage(hstring_ref packageName, const Windows::ApplicationModel::Resources::Core::ResourceLayoutInfo & resourceLayoutInfo) const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceMap> table;
    check_hresult(static_cast<const IResourceManager2 &>(static_cast<const D &>(*this))->abi_GetAllSubtreesForPackage(get(packageName), get(resourceLayoutInfo), put(table)));
    return table;
}

template <typename D> Windows::ApplicationModel::Resources::Core::ResourceManager impl_IResourceManagerStatics<D>::Current() const
{
    Windows::ApplicationModel::Resources::Core::ResourceManager value { nullptr };
    check_hresult(static_cast<const IResourceManagerStatics &>(static_cast<const D &>(*this))->get_Current(put(value)));
    return value;
}

template <typename D> bool impl_IResourceManagerStatics<D>::IsResourceReference(hstring_ref resourceReference) const
{
    bool isReference {};
    check_hresult(static_cast<const IResourceManagerStatics &>(static_cast<const D &>(*this))->abi_IsResourceReference(get(resourceReference), &isReference));
    return isReference;
}

template <typename D> hstring impl_IResourceQualifier<D>::QualifierName() const
{
    hstring value;
    check_hresult(static_cast<const IResourceQualifier &>(static_cast<const D &>(*this))->get_QualifierName(put(value)));
    return value;
}

template <typename D> hstring impl_IResourceQualifier<D>::QualifierValue() const
{
    hstring value;
    check_hresult(static_cast<const IResourceQualifier &>(static_cast<const D &>(*this))->get_QualifierValue(put(value)));
    return value;
}

template <typename D> bool impl_IResourceQualifier<D>::IsDefault() const
{
    bool value {};
    check_hresult(static_cast<const IResourceQualifier &>(static_cast<const D &>(*this))->get_IsDefault(&value));
    return value;
}

template <typename D> bool impl_IResourceQualifier<D>::IsMatch() const
{
    bool value {};
    check_hresult(static_cast<const IResourceQualifier &>(static_cast<const D &>(*this))->get_IsMatch(&value));
    return value;
}

template <typename D> double impl_IResourceQualifier<D>::Score() const
{
    double value {};
    check_hresult(static_cast<const IResourceQualifier &>(static_cast<const D &>(*this))->get_Score(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IObservableMap<hstring, hstring> impl_IResourceContext<D>::QualifierValues() const
{
    Windows::Foundation::Collections::IObservableMap<hstring, hstring> value;
    check_hresult(static_cast<const IResourceContext &>(static_cast<const D &>(*this))->get_QualifierValues(put(value)));
    return value;
}

template <typename D> void impl_IResourceContext<D>::Reset() const
{
    check_hresult(static_cast<const IResourceContext &>(static_cast<const D &>(*this))->abi_Reset());
}

template <typename D> void impl_IResourceContext<D>::Reset(const Windows::Foundation::Collections::IIterable<hstring> & qualifierNames) const
{
    check_hresult(static_cast<const IResourceContext &>(static_cast<const D &>(*this))->abi_ResetQualifierValues(get(qualifierNames)));
}

template <typename D> void impl_IResourceContext<D>::OverrideToMatch(const Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Resources::Core::ResourceQualifier> & result) const
{
    check_hresult(static_cast<const IResourceContext &>(static_cast<const D &>(*this))->abi_OverrideToMatch(get(result)));
}

template <typename D> Windows::ApplicationModel::Resources::Core::ResourceContext impl_IResourceContext<D>::Clone() const
{
    Windows::ApplicationModel::Resources::Core::ResourceContext clone { nullptr };
    check_hresult(static_cast<const IResourceContext &>(static_cast<const D &>(*this))->abi_Clone(put(clone)));
    return clone;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IResourceContext<D>::Languages() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const IResourceContext &>(static_cast<const D &>(*this))->get_Languages(put(value)));
    return value;
}

template <typename D> void impl_IResourceContext<D>::Languages(const Windows::Foundation::Collections::IVectorView<hstring> & languages) const
{
    check_hresult(static_cast<const IResourceContext &>(static_cast<const D &>(*this))->put_Languages(get(languages)));
}

template <typename D> Windows::ApplicationModel::Resources::Core::ResourceContext impl_IResourceContextStatics<D>::CreateMatchingContext(const Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Resources::Core::ResourceQualifier> & result) const
{
    Windows::ApplicationModel::Resources::Core::ResourceContext value { nullptr };
    check_hresult(static_cast<const IResourceContextStatics &>(static_cast<const D &>(*this))->abi_CreateMatchingContext(get(result), put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Resources::Core::ResourceContext impl_IResourceContextStatics2<D>::GetForCurrentView() const
{
    Windows::ApplicationModel::Resources::Core::ResourceContext value { nullptr };
    check_hresult(static_cast<const IResourceContextStatics2 &>(static_cast<const D &>(*this))->abi_GetForCurrentView(put(value)));
    return value;
}

template <typename D> void impl_IResourceContextStatics2<D>::SetGlobalQualifierValue(hstring_ref key, hstring_ref value) const
{
    check_hresult(static_cast<const IResourceContextStatics2 &>(static_cast<const D &>(*this))->abi_SetGlobalQualifierValue(get(key), get(value)));
}

template <typename D> void impl_IResourceContextStatics2<D>::ResetGlobalQualifierValues() const
{
    check_hresult(static_cast<const IResourceContextStatics2 &>(static_cast<const D &>(*this))->abi_ResetGlobalQualifierValues());
}

template <typename D> void impl_IResourceContextStatics2<D>::ResetGlobalQualifierValues(const Windows::Foundation::Collections::IIterable<hstring> & qualifierNames) const
{
    check_hresult(static_cast<const IResourceContextStatics2 &>(static_cast<const D &>(*this))->abi_ResetGlobalQualifierValuesForSpecifiedQualifiers(get(qualifierNames)));
}

template <typename D> Windows::ApplicationModel::Resources::Core::ResourceContext impl_IResourceContextStatics2<D>::GetForViewIndependentUse() const
{
    Windows::ApplicationModel::Resources::Core::ResourceContext loader { nullptr };
    check_hresult(static_cast<const IResourceContextStatics2 &>(static_cast<const D &>(*this))->abi_GetForViewIndependentUse(put(loader)));
    return loader;
}

template <typename D> void impl_IResourceContextStatics3<D>::SetGlobalQualifierValue(hstring_ref key, hstring_ref value, Windows::ApplicationModel::Resources::Core::ResourceQualifierPersistence persistence) const
{
    check_hresult(static_cast<const IResourceContextStatics3 &>(static_cast<const D &>(*this))->abi_SetGlobalQualifierValueWithPersistence(get(key), get(value), persistence));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceQualifier> impl_IResourceCandidate<D>::Qualifiers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceQualifier> value;
    check_hresult(static_cast<const IResourceCandidate &>(static_cast<const D &>(*this))->get_Qualifiers(put(value)));
    return value;
}

template <typename D> bool impl_IResourceCandidate<D>::IsMatch() const
{
    bool value {};
    check_hresult(static_cast<const IResourceCandidate &>(static_cast<const D &>(*this))->get_IsMatch(&value));
    return value;
}

template <typename D> bool impl_IResourceCandidate<D>::IsMatchAsDefault() const
{
    bool value {};
    check_hresult(static_cast<const IResourceCandidate &>(static_cast<const D &>(*this))->get_IsMatchAsDefault(&value));
    return value;
}

template <typename D> bool impl_IResourceCandidate<D>::IsDefault() const
{
    bool value {};
    check_hresult(static_cast<const IResourceCandidate &>(static_cast<const D &>(*this))->get_IsDefault(&value));
    return value;
}

template <typename D> hstring impl_IResourceCandidate<D>::ValueAsString() const
{
    hstring result;
    check_hresult(static_cast<const IResourceCandidate &>(static_cast<const D &>(*this))->get_ValueAsString(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> impl_IResourceCandidate<D>::GetValueAsFileAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation;
    check_hresult(static_cast<const IResourceCandidate &>(static_cast<const D &>(*this))->abi_GetValueAsFileAsync(put(operation)));
    return operation;
}

template <typename D> hstring impl_IResourceCandidate<D>::GetQualifierValue(hstring_ref qualifierName) const
{
    hstring value;
    check_hresult(static_cast<const IResourceCandidate &>(static_cast<const D &>(*this))->abi_GetQualifierValue(get(qualifierName), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> impl_IResourceCandidate2<D>::GetValueAsStreamAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> operation;
    check_hresult(static_cast<const IResourceCandidate2 &>(static_cast<const D &>(*this))->abi_GetValueAsStreamAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Uri impl_INamedResource<D>::Uri() const
{
    Windows::Foundation::Uri uri { nullptr };
    check_hresult(static_cast<const INamedResource &>(static_cast<const D &>(*this))->get_Uri(put(uri)));
    return uri;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceCandidate> impl_INamedResource<D>::Candidates() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceCandidate> value;
    check_hresult(static_cast<const INamedResource &>(static_cast<const D &>(*this))->get_Candidates(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Resources::Core::ResourceCandidate impl_INamedResource<D>::Resolve() const
{
    Windows::ApplicationModel::Resources::Core::ResourceCandidate result { nullptr };
    check_hresult(static_cast<const INamedResource &>(static_cast<const D &>(*this))->abi_Resolve(put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Resources::Core::ResourceCandidate impl_INamedResource<D>::Resolve(const Windows::ApplicationModel::Resources::Core::ResourceContext & resourceContext) const
{
    Windows::ApplicationModel::Resources::Core::ResourceCandidate result { nullptr };
    check_hresult(static_cast<const INamedResource &>(static_cast<const D &>(*this))->abi_ResolveForContext(get(resourceContext), put(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceCandidate> impl_INamedResource<D>::ResolveAll() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceCandidate> result;
    check_hresult(static_cast<const INamedResource &>(static_cast<const D &>(*this))->abi_ResolveAll(put(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceCandidate> impl_INamedResource<D>::ResolveAll(const Windows::ApplicationModel::Resources::Core::ResourceContext & resourceContext) const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceCandidate> instances;
    check_hresult(static_cast<const INamedResource &>(static_cast<const D &>(*this))->abi_ResolveAllForContext(get(resourceContext), put(instances)));
    return instances;
}

template <typename D> Windows::Foundation::Uri impl_IResourceMap<D>::Uri() const
{
    Windows::Foundation::Uri uri { nullptr };
    check_hresult(static_cast<const IResourceMap &>(static_cast<const D &>(*this))->get_Uri(put(uri)));
    return uri;
}

template <typename D> Windows::ApplicationModel::Resources::Core::ResourceCandidate impl_IResourceMap<D>::GetValue(hstring_ref resource) const
{
    Windows::ApplicationModel::Resources::Core::ResourceCandidate value { nullptr };
    check_hresult(static_cast<const IResourceMap &>(static_cast<const D &>(*this))->abi_GetValue(get(resource), put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Resources::Core::ResourceCandidate impl_IResourceMap<D>::GetValue(hstring_ref resource, const Windows::ApplicationModel::Resources::Core::ResourceContext & context) const
{
    Windows::ApplicationModel::Resources::Core::ResourceCandidate value { nullptr };
    check_hresult(static_cast<const IResourceMap &>(static_cast<const D &>(*this))->abi_GetValueForContext(get(resource), get(context), put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Resources::Core::ResourceMap impl_IResourceMap<D>::GetSubtree(hstring_ref reference) const
{
    Windows::ApplicationModel::Resources::Core::ResourceMap map { nullptr };
    check_hresult(static_cast<const IResourceMap &>(static_cast<const D &>(*this))->abi_GetSubtree(get(reference), put(map)));
    return map;
}

inline ResourceContext::ResourceContext() :
    ResourceContext(activate_instance<ResourceContext>())
{}

inline Windows::ApplicationModel::Resources::Core::ResourceContext ResourceContext::CreateMatchingContext(const Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Resources::Core::ResourceQualifier> & result)
{
    return get_activation_factory<ResourceContext, IResourceContextStatics>().CreateMatchingContext(result);
}

inline Windows::ApplicationModel::Resources::Core::ResourceContext ResourceContext::GetForCurrentView()
{
    return get_activation_factory<ResourceContext, IResourceContextStatics2>().GetForCurrentView();
}

inline void ResourceContext::SetGlobalQualifierValue(hstring_ref key, hstring_ref value)
{
    get_activation_factory<ResourceContext, IResourceContextStatics2>().SetGlobalQualifierValue(key, value);
}

inline void ResourceContext::ResetGlobalQualifierValues()
{
    get_activation_factory<ResourceContext, IResourceContextStatics2>().ResetGlobalQualifierValues();
}

inline void ResourceContext::ResetGlobalQualifierValues(const Windows::Foundation::Collections::IIterable<hstring> & qualifierNames)
{
    get_activation_factory<ResourceContext, IResourceContextStatics2>().ResetGlobalQualifierValues(qualifierNames);
}

inline Windows::ApplicationModel::Resources::Core::ResourceContext ResourceContext::GetForViewIndependentUse()
{
    return get_activation_factory<ResourceContext, IResourceContextStatics2>().GetForViewIndependentUse();
}

inline void ResourceContext::SetGlobalQualifierValue(hstring_ref key, hstring_ref value, Windows::ApplicationModel::Resources::Core::ResourceQualifierPersistence persistence)
{
    get_activation_factory<ResourceContext, IResourceContextStatics3>().SetGlobalQualifierValue(key, value, persistence);
}

inline Windows::ApplicationModel::Resources::Core::ResourceManager ResourceManager::Current()
{
    return get_activation_factory<ResourceManager, IResourceManagerStatics>().Current();
}

inline bool ResourceManager::IsResourceReference(hstring_ref resourceReference)
{
    return get_activation_factory<ResourceManager, IResourceManagerStatics>().IsResourceReference(resourceReference);
}

}

}
