// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.ApplicationModel.Resources.Core.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Storage.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Storage.Streams.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::Resources::Core {

struct ResourceLayoutInfo
{
    uint32_t MajorVersion;
    uint32_t MinorVersion;
    uint32_t ResourceSubtreeCount;
    uint32_t NamedResourceCount;
    int32_t Checksum;
};

}

namespace Windows::ApplicationModel::Resources::Core {

using ResourceLayoutInfo = ABI::Windows::ApplicationModel::Resources::Core::ResourceLayoutInfo;

}

namespace ABI::Windows::ApplicationModel::Resources::Core {

struct __declspec(uuid("1c98c219-0b13-4240-89a5-d495dc189a00")) __declspec(novtable) INamedResource : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Uri(Windows::Foundation::IUriRuntimeClass ** uri) = 0;
    virtual HRESULT __stdcall get_Candidates(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceCandidate> ** value) = 0;
    virtual HRESULT __stdcall abi_Resolve(Windows::ApplicationModel::Resources::Core::IResourceCandidate ** result) = 0;
    virtual HRESULT __stdcall abi_ResolveForContext(Windows::ApplicationModel::Resources::Core::IResourceContext * resourceContext, Windows::ApplicationModel::Resources::Core::IResourceCandidate ** result) = 0;
    virtual HRESULT __stdcall abi_ResolveAll(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceCandidate> ** result) = 0;
    virtual HRESULT __stdcall abi_ResolveAllForContext(Windows::ApplicationModel::Resources::Core::IResourceContext * resourceContext, Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceCandidate> ** instances) = 0;
};

struct __declspec(uuid("af5207d9-c433-4764-b3fd-8fa6bfbcbadc")) __declspec(novtable) IResourceCandidate : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Qualifiers(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceQualifier> ** value) = 0;
    virtual HRESULT __stdcall get_IsMatch(bool * value) = 0;
    virtual HRESULT __stdcall get_IsMatchAsDefault(bool * value) = 0;
    virtual HRESULT __stdcall get_IsDefault(bool * value) = 0;
    virtual HRESULT __stdcall get_ValueAsString(hstring * result) = 0;
    virtual HRESULT __stdcall abi_GetValueAsFileAsync(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetQualifierValue(hstring qualifierName, hstring * value) = 0;
};

struct __declspec(uuid("69e5b468-f6fc-4013-aaa2-d53f1757d3b5")) __declspec(novtable) IResourceCandidate2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetValueAsStreamAsync(Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> ** operation) = 0;
};

struct __declspec(uuid("2fa22f4b-707e-4b27-ad0d-d0d8cd468fd2")) __declspec(novtable) IResourceContext : Windows::IInspectable
{
    virtual HRESULT __stdcall get_QualifierValues(Windows::Foundation::Collections::IObservableMap<hstring, hstring> ** value) = 0;
    virtual HRESULT __stdcall abi_Reset() = 0;
    virtual HRESULT __stdcall abi_ResetQualifierValues(Windows::Foundation::Collections::IIterable<hstring> * qualifierNames) = 0;
    virtual HRESULT __stdcall abi_OverrideToMatch(Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Resources::Core::ResourceQualifier> * result) = 0;
    virtual HRESULT __stdcall abi_Clone(Windows::ApplicationModel::Resources::Core::IResourceContext ** clone) = 0;
    virtual HRESULT __stdcall get_Languages(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
    virtual HRESULT __stdcall put_Languages(Windows::Foundation::Collections::IVectorView<hstring> * languages) = 0;
};

struct __declspec(uuid("98be9d6c-6338-4b31-99df-b2b442f17149")) __declspec(novtable) IResourceContextStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateMatchingContext(Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Resources::Core::ResourceQualifier> * result, Windows::ApplicationModel::Resources::Core::IResourceContext ** value) = 0;
};

struct __declspec(uuid("41f752ef-12af-41b9-ab36-b1eb4b512460")) __declspec(novtable) IResourceContextStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetForCurrentView(Windows::ApplicationModel::Resources::Core::IResourceContext ** value) = 0;
    virtual HRESULT __stdcall abi_SetGlobalQualifierValue(hstring key, hstring value) = 0;
    virtual HRESULT __stdcall abi_ResetGlobalQualifierValues() = 0;
    virtual HRESULT __stdcall abi_ResetGlobalQualifierValuesForSpecifiedQualifiers(Windows::Foundation::Collections::IIterable<hstring> * qualifierNames) = 0;
    virtual HRESULT __stdcall abi_GetForViewIndependentUse(Windows::ApplicationModel::Resources::Core::IResourceContext ** loader) = 0;
};

struct __declspec(uuid("20cf492c-af0f-450b-9da6-106dd0c29a39")) __declspec(novtable) IResourceContextStatics3 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SetGlobalQualifierValueWithPersistence(hstring key, hstring value, winrt::Windows::ApplicationModel::Resources::Core::ResourceQualifierPersistence persistence) = 0;
};

struct __declspec(uuid("f744d97b-9988-44fb-abd6-5378844cfa8b")) __declspec(novtable) IResourceManager : Windows::IInspectable
{
    virtual HRESULT __stdcall get_MainResourceMap(Windows::ApplicationModel::Resources::Core::IResourceMap ** value) = 0;
    virtual HRESULT __stdcall get_AllResourceMaps(Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Resources::Core::ResourceMap> ** maps) = 0;
    virtual HRESULT __stdcall get_DefaultContext(Windows::ApplicationModel::Resources::Core::IResourceContext ** value) = 0;
    virtual HRESULT __stdcall abi_LoadPriFiles(Windows::Foundation::Collections::IIterable<Windows::Storage::IStorageFile> * files) = 0;
    virtual HRESULT __stdcall abi_UnloadPriFiles(Windows::Foundation::Collections::IIterable<Windows::Storage::IStorageFile> * files) = 0;
};

struct __declspec(uuid("9d66fe6c-a4d7-4c23-9e85-675f304c252d")) __declspec(novtable) IResourceManager2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetAllNamedResourcesForPackage(hstring packageName, Windows::ApplicationModel::Resources::Core::ResourceLayoutInfo resourceLayoutInfo, Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::NamedResource> ** table) = 0;
    virtual HRESULT __stdcall abi_GetAllSubtreesForPackage(hstring packageName, Windows::ApplicationModel::Resources::Core::ResourceLayoutInfo resourceLayoutInfo, Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceMap> ** table) = 0;
};

struct __declspec(uuid("1cc0fdfc-69ee-4e43-9901-47f12687baf7")) __declspec(novtable) IResourceManagerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Current(Windows::ApplicationModel::Resources::Core::IResourceManager ** value) = 0;
    virtual HRESULT __stdcall abi_IsResourceReference(hstring resourceReference, bool * isReference) = 0;
};

struct __declspec(uuid("72284824-db8c-42f8-b08c-53ff357dad82")) __declspec(novtable) IResourceMap : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Uri(Windows::Foundation::IUriRuntimeClass ** uri) = 0;
    virtual HRESULT __stdcall abi_GetValue(hstring resource, Windows::ApplicationModel::Resources::Core::IResourceCandidate ** value) = 0;
    virtual HRESULT __stdcall abi_GetValueForContext(hstring resource, Windows::ApplicationModel::Resources::Core::IResourceContext * context, Windows::ApplicationModel::Resources::Core::IResourceCandidate ** value) = 0;
    virtual HRESULT __stdcall abi_GetSubtree(hstring reference, Windows::ApplicationModel::Resources::Core::IResourceMap ** map) = 0;
};

struct __declspec(uuid("785da5b2-4afd-4376-a888-c5f9a6b7a05c")) __declspec(novtable) IResourceQualifier : Windows::IInspectable
{
    virtual HRESULT __stdcall get_QualifierName(hstring * value) = 0;
    virtual HRESULT __stdcall get_QualifierValue(hstring * value) = 0;
    virtual HRESULT __stdcall get_IsDefault(bool * value) = 0;
    virtual HRESULT __stdcall get_IsMatch(bool * value) = 0;
    virtual HRESULT __stdcall get_Score(double * value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::ApplicationModel::Resources::Core::NamedResource> { using default_interface = Windows::ApplicationModel::Resources::Core::INamedResource; };
template <> struct traits<Windows::ApplicationModel::Resources::Core::ResourceCandidate> { using default_interface = Windows::ApplicationModel::Resources::Core::IResourceCandidate; };
template <> struct traits<Windows::ApplicationModel::Resources::Core::ResourceCandidateVectorView> { using default_interface = Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceCandidate>; };
template <> struct traits<Windows::ApplicationModel::Resources::Core::ResourceContext> { using default_interface = Windows::ApplicationModel::Resources::Core::IResourceContext; };
template <> struct traits<Windows::ApplicationModel::Resources::Core::ResourceContextLanguagesVectorView> { using default_interface = Windows::Foundation::Collections::IVectorView<hstring>; };
template <> struct traits<Windows::ApplicationModel::Resources::Core::ResourceManager> { using default_interface = Windows::ApplicationModel::Resources::Core::IResourceManager; };
template <> struct traits<Windows::ApplicationModel::Resources::Core::ResourceMap> { using default_interface = Windows::ApplicationModel::Resources::Core::IResourceMap; };
template <> struct traits<Windows::ApplicationModel::Resources::Core::ResourceMapIterator> { using default_interface = Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::ApplicationModel::Resources::Core::NamedResource>>; };
template <> struct traits<Windows::ApplicationModel::Resources::Core::ResourceMapMapView> { using default_interface = Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Resources::Core::ResourceMap>; };
template <> struct traits<Windows::ApplicationModel::Resources::Core::ResourceMapMapViewIterator> { using default_interface = Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::ApplicationModel::Resources::Core::ResourceMap>>; };
template <> struct traits<Windows::ApplicationModel::Resources::Core::ResourceQualifier> { using default_interface = Windows::ApplicationModel::Resources::Core::IResourceQualifier; };
template <> struct traits<Windows::ApplicationModel::Resources::Core::ResourceQualifierMapView> { using default_interface = Windows::Foundation::Collections::IMapView<hstring, hstring>; };
template <> struct traits<Windows::ApplicationModel::Resources::Core::ResourceQualifierObservableMap> { using default_interface = Windows::Foundation::Collections::IObservableMap<hstring, hstring>; };
template <> struct traits<Windows::ApplicationModel::Resources::Core::ResourceQualifierVectorView> { using default_interface = Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceQualifier>; };

}

namespace Windows::ApplicationModel::Resources::Core {

template <typename T> struct impl_INamedResource;
template <typename T> struct impl_IResourceCandidate;
template <typename T> struct impl_IResourceCandidate2;
template <typename T> struct impl_IResourceContext;
template <typename T> struct impl_IResourceContextStatics;
template <typename T> struct impl_IResourceContextStatics2;
template <typename T> struct impl_IResourceContextStatics3;
template <typename T> struct impl_IResourceManager;
template <typename T> struct impl_IResourceManager2;
template <typename T> struct impl_IResourceManagerStatics;
template <typename T> struct impl_IResourceMap;
template <typename T> struct impl_IResourceQualifier;

}

namespace impl {

template <> struct traits<Windows::ApplicationModel::Resources::Core::INamedResource>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Core::INamedResource;
    template <typename D> using consume = Windows::ApplicationModel::Resources::Core::impl_INamedResource<D>;
};

template <> struct traits<Windows::ApplicationModel::Resources::Core::IResourceCandidate>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Core::IResourceCandidate;
    template <typename D> using consume = Windows::ApplicationModel::Resources::Core::impl_IResourceCandidate<D>;
};

template <> struct traits<Windows::ApplicationModel::Resources::Core::IResourceCandidate2>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Core::IResourceCandidate2;
    template <typename D> using consume = Windows::ApplicationModel::Resources::Core::impl_IResourceCandidate2<D>;
};

template <> struct traits<Windows::ApplicationModel::Resources::Core::IResourceContext>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Core::IResourceContext;
    template <typename D> using consume = Windows::ApplicationModel::Resources::Core::impl_IResourceContext<D>;
};

template <> struct traits<Windows::ApplicationModel::Resources::Core::IResourceContextStatics>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Core::IResourceContextStatics;
    template <typename D> using consume = Windows::ApplicationModel::Resources::Core::impl_IResourceContextStatics<D>;
};

template <> struct traits<Windows::ApplicationModel::Resources::Core::IResourceContextStatics2>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Core::IResourceContextStatics2;
    template <typename D> using consume = Windows::ApplicationModel::Resources::Core::impl_IResourceContextStatics2<D>;
};

template <> struct traits<Windows::ApplicationModel::Resources::Core::IResourceContextStatics3>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Core::IResourceContextStatics3;
    template <typename D> using consume = Windows::ApplicationModel::Resources::Core::impl_IResourceContextStatics3<D>;
};

template <> struct traits<Windows::ApplicationModel::Resources::Core::IResourceManager>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Core::IResourceManager;
    template <typename D> using consume = Windows::ApplicationModel::Resources::Core::impl_IResourceManager<D>;
};

template <> struct traits<Windows::ApplicationModel::Resources::Core::IResourceManager2>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Core::IResourceManager2;
    template <typename D> using consume = Windows::ApplicationModel::Resources::Core::impl_IResourceManager2<D>;
};

template <> struct traits<Windows::ApplicationModel::Resources::Core::IResourceManagerStatics>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Core::IResourceManagerStatics;
    template <typename D> using consume = Windows::ApplicationModel::Resources::Core::impl_IResourceManagerStatics<D>;
};

template <> struct traits<Windows::ApplicationModel::Resources::Core::IResourceMap>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Core::IResourceMap;
    template <typename D> using consume = Windows::ApplicationModel::Resources::Core::impl_IResourceMap<D>;
};

template <> struct traits<Windows::ApplicationModel::Resources::Core::IResourceQualifier>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Core::IResourceQualifier;
    template <typename D> using consume = Windows::ApplicationModel::Resources::Core::impl_IResourceQualifier<D>;
};

template <> struct traits<Windows::ApplicationModel::Resources::Core::NamedResource>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Core::NamedResource;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Resources.Core.NamedResource"; }
};

template <> struct traits<Windows::ApplicationModel::Resources::Core::ResourceCandidate>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Core::ResourceCandidate;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Resources.Core.ResourceCandidate"; }
};

template <> struct traits<Windows::ApplicationModel::Resources::Core::ResourceCandidateVectorView>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Core::ResourceCandidateVectorView;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Resources.Core.ResourceCandidateVectorView"; }
};

template <> struct traits<Windows::ApplicationModel::Resources::Core::ResourceContext>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Core::ResourceContext;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Resources.Core.ResourceContext"; }
};

template <> struct traits<Windows::ApplicationModel::Resources::Core::ResourceContextLanguagesVectorView>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Core::ResourceContextLanguagesVectorView;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Resources.Core.ResourceContextLanguagesVectorView"; }
};

template <> struct traits<Windows::ApplicationModel::Resources::Core::ResourceManager>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Core::ResourceManager;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Resources.Core.ResourceManager"; }
};

template <> struct traits<Windows::ApplicationModel::Resources::Core::ResourceMap>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Core::ResourceMap;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Resources.Core.ResourceMap"; }
};

template <> struct traits<Windows::ApplicationModel::Resources::Core::ResourceMapIterator>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Core::ResourceMapIterator;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Resources.Core.ResourceMapIterator"; }
};

template <> struct traits<Windows::ApplicationModel::Resources::Core::ResourceMapMapView>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Core::ResourceMapMapView;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Resources.Core.ResourceMapMapView"; }
};

template <> struct traits<Windows::ApplicationModel::Resources::Core::ResourceMapMapViewIterator>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Core::ResourceMapMapViewIterator;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Resources.Core.ResourceMapMapViewIterator"; }
};

template <> struct traits<Windows::ApplicationModel::Resources::Core::ResourceQualifier>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Core::ResourceQualifier;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Resources.Core.ResourceQualifier"; }
};

template <> struct traits<Windows::ApplicationModel::Resources::Core::ResourceQualifierMapView>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Core::ResourceQualifierMapView;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Resources.Core.ResourceQualifierMapView"; }
};

template <> struct traits<Windows::ApplicationModel::Resources::Core::ResourceQualifierObservableMap>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Core::ResourceQualifierObservableMap;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Resources.Core.ResourceQualifierObservableMap"; }
};

template <> struct traits<Windows::ApplicationModel::Resources::Core::ResourceQualifierVectorView>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Core::ResourceQualifierVectorView;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Resources.Core.ResourceQualifierVectorView"; }
};

}

}
