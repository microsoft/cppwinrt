// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Storage {

struct IStorageFile;
struct StorageFile;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStream;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Resources::Core {

enum class ResourceQualifierPersistence
{
    None = 0,
    LocalMachine = 1,
};

struct INamedResource;
struct IResourceCandidate;
struct IResourceCandidate2;
struct IResourceContext;
struct IResourceContextStatics;
struct IResourceContextStatics2;
struct IResourceContextStatics3;
struct IResourceManager;
struct IResourceManager2;
struct IResourceManagerStatics;
struct IResourceMap;
struct IResourceQualifier;
struct NamedResource;
struct ResourceCandidate;
struct ResourceCandidateVectorView;
struct ResourceContext;
struct ResourceContextLanguagesVectorView;
struct ResourceManager;
struct ResourceMap;
struct ResourceMapIterator;
struct ResourceMapMapView;
struct ResourceMapMapViewIterator;
struct ResourceQualifier;
struct ResourceQualifierMapView;
struct ResourceQualifierObservableMap;
struct ResourceQualifierVectorView;
struct ResourceLayoutInfo;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::Resources::Core::INamedResource>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceCandidate>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceCandidate2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceContext>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceContextStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceContextStatics2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceContextStatics3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceManager>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceManager2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceMap>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceQualifier>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Resources::Core::NamedResource>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceCandidate>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceCandidateVectorView>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceContext>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceContextLanguagesVectorView>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceMap>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceMapIterator>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceMapMapView>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceMapMapViewIterator>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceQualifier>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceQualifierMapView>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceQualifierObservableMap>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceQualifierVectorView>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceQualifierPersistence>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceLayoutInfo>{ using type = struct_category<uint32_t,uint32_t,uint32_t,uint32_t,int32_t>; };
template <> struct name<Windows::ApplicationModel::Resources::Core::INamedResource>{ static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.INamedResource" }; };
template <> struct name<Windows::ApplicationModel::Resources::Core::IResourceCandidate>{ static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.IResourceCandidate" }; };
template <> struct name<Windows::ApplicationModel::Resources::Core::IResourceCandidate2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.IResourceCandidate2" }; };
template <> struct name<Windows::ApplicationModel::Resources::Core::IResourceContext>{ static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.IResourceContext" }; };
template <> struct name<Windows::ApplicationModel::Resources::Core::IResourceContextStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.IResourceContextStatics" }; };
template <> struct name<Windows::ApplicationModel::Resources::Core::IResourceContextStatics2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.IResourceContextStatics2" }; };
template <> struct name<Windows::ApplicationModel::Resources::Core::IResourceContextStatics3>{ static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.IResourceContextStatics3" }; };
template <> struct name<Windows::ApplicationModel::Resources::Core::IResourceManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.IResourceManager" }; };
template <> struct name<Windows::ApplicationModel::Resources::Core::IResourceManager2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.IResourceManager2" }; };
template <> struct name<Windows::ApplicationModel::Resources::Core::IResourceManagerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.IResourceManagerStatics" }; };
template <> struct name<Windows::ApplicationModel::Resources::Core::IResourceMap>{ static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.IResourceMap" }; };
template <> struct name<Windows::ApplicationModel::Resources::Core::IResourceQualifier>{ static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.IResourceQualifier" }; };
template <> struct name<Windows::ApplicationModel::Resources::Core::NamedResource>{ static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.NamedResource" }; };
template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceCandidate>{ static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceCandidate" }; };
template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceCandidateVectorView>{ static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceCandidateVectorView" }; };
template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceContext>{ static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceContext" }; };
template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceContextLanguagesVectorView>{ static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceContextLanguagesVectorView" }; };
template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceManager" }; };
template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceMap>{ static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceMap" }; };
template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceMapIterator>{ static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceMapIterator" }; };
template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceMapMapView>{ static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceMapMapView" }; };
template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceMapMapViewIterator>{ static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceMapMapViewIterator" }; };
template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceQualifier>{ static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceQualifier" }; };
template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceQualifierMapView>{ static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceQualifierMapView" }; };
template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceQualifierObservableMap>{ static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceQualifierObservableMap" }; };
template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceQualifierVectorView>{ static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceQualifierVectorView" }; };
template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceQualifierPersistence>{ static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceQualifierPersistence" }; };
template <> struct name<Windows::ApplicationModel::Resources::Core::ResourceLayoutInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.Resources.Core.ResourceLayoutInfo" }; };
template <> struct guid<Windows::ApplicationModel::Resources::Core::INamedResource>{ static constexpr GUID value{ 0x1C98C219,0x0B13,0x4240,{ 0x89,0xA5,0xD4,0x95,0xDC,0x18,0x9A,0x00 } }; };
template <> struct guid<Windows::ApplicationModel::Resources::Core::IResourceCandidate>{ static constexpr GUID value{ 0xAF5207D9,0xC433,0x4764,{ 0xB3,0xFD,0x8F,0xA6,0xBF,0xBC,0xBA,0xDC } }; };
template <> struct guid<Windows::ApplicationModel::Resources::Core::IResourceCandidate2>{ static constexpr GUID value{ 0x69E5B468,0xF6FC,0x4013,{ 0xAA,0xA2,0xD5,0x3F,0x17,0x57,0xD3,0xB5 } }; };
template <> struct guid<Windows::ApplicationModel::Resources::Core::IResourceContext>{ static constexpr GUID value{ 0x2FA22F4B,0x707E,0x4B27,{ 0xAD,0x0D,0xD0,0xD8,0xCD,0x46,0x8F,0xD2 } }; };
template <> struct guid<Windows::ApplicationModel::Resources::Core::IResourceContextStatics>{ static constexpr GUID value{ 0x98BE9D6C,0x6338,0x4B31,{ 0x99,0xDF,0xB2,0xB4,0x42,0xF1,0x71,0x49 } }; };
template <> struct guid<Windows::ApplicationModel::Resources::Core::IResourceContextStatics2>{ static constexpr GUID value{ 0x41F752EF,0x12AF,0x41B9,{ 0xAB,0x36,0xB1,0xEB,0x4B,0x51,0x24,0x60 } }; };
template <> struct guid<Windows::ApplicationModel::Resources::Core::IResourceContextStatics3>{ static constexpr GUID value{ 0x20CF492C,0xAF0F,0x450B,{ 0x9D,0xA6,0x10,0x6D,0xD0,0xC2,0x9A,0x39 } }; };
template <> struct guid<Windows::ApplicationModel::Resources::Core::IResourceManager>{ static constexpr GUID value{ 0xF744D97B,0x9988,0x44FB,{ 0xAB,0xD6,0x53,0x78,0x84,0x4C,0xFA,0x8B } }; };
template <> struct guid<Windows::ApplicationModel::Resources::Core::IResourceManager2>{ static constexpr GUID value{ 0x9D66FE6C,0xA4D7,0x4C23,{ 0x9E,0x85,0x67,0x5F,0x30,0x4C,0x25,0x2D } }; };
template <> struct guid<Windows::ApplicationModel::Resources::Core::IResourceManagerStatics>{ static constexpr GUID value{ 0x1CC0FDFC,0x69EE,0x4E43,{ 0x99,0x01,0x47,0xF1,0x26,0x87,0xBA,0xF7 } }; };
template <> struct guid<Windows::ApplicationModel::Resources::Core::IResourceMap>{ static constexpr GUID value{ 0x72284824,0xDB8C,0x42F8,{ 0xB0,0x8C,0x53,0xFF,0x35,0x7D,0xAD,0x82 } }; };
template <> struct guid<Windows::ApplicationModel::Resources::Core::IResourceQualifier>{ static constexpr GUID value{ 0x785DA5B2,0x4AFD,0x4376,{ 0xA8,0x88,0xC5,0xF9,0xA6,0xB7,0xA0,0x5C } }; };
template <> struct default_interface<Windows::ApplicationModel::Resources::Core::NamedResource>{ using type = Windows::ApplicationModel::Resources::Core::INamedResource; };
template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceCandidate>{ using type = Windows::ApplicationModel::Resources::Core::IResourceCandidate; };
template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceCandidateVectorView>{ using type = Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceCandidate>; };
template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceContext>{ using type = Windows::ApplicationModel::Resources::Core::IResourceContext; };
template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceContextLanguagesVectorView>{ using type = Windows::Foundation::Collections::IVectorView<hstring>; };
template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceManager>{ using type = Windows::ApplicationModel::Resources::Core::IResourceManager; };
template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceMap>{ using type = Windows::ApplicationModel::Resources::Core::IResourceMap; };
template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceMapIterator>{ using type = Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::ApplicationModel::Resources::Core::NamedResource>>; };
template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceMapMapView>{ using type = Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Resources::Core::ResourceMap>; };
template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceMapMapViewIterator>{ using type = Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::ApplicationModel::Resources::Core::ResourceMap>>; };
template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceQualifier>{ using type = Windows::ApplicationModel::Resources::Core::IResourceQualifier; };
template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceQualifierMapView>{ using type = Windows::Foundation::Collections::IMapView<hstring, hstring>; };
template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceQualifierObservableMap>{ using type = Windows::Foundation::Collections::IObservableMap<hstring, hstring>; };
template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceQualifierVectorView>{ using type = Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceQualifier>; };

template <typename D>
struct consume_Windows_ApplicationModel_Resources_Core_INamedResource
{
    Windows::Foundation::Uri Uri() const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceCandidate> Candidates() const;
    [[deprecated("Resolve may be altered or unavailable for releases after Windows 8.1. Instead, use Resolve(ResourceContext).")]] Windows::ApplicationModel::Resources::Core::ResourceCandidate Resolve() const;
    Windows::ApplicationModel::Resources::Core::ResourceCandidate Resolve(Windows::ApplicationModel::Resources::Core::ResourceContext const& resourceContext) const;
    [[deprecated("ResolveAll may be altered or unavailable for releases after Windows 8.1. Instead, use ResolveAll(ResourceContext).")]] Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceCandidate> ResolveAll() const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceCandidate> ResolveAll(Windows::ApplicationModel::Resources::Core::ResourceContext const& resourceContext) const;
};
template <> struct consume<Windows::ApplicationModel::Resources::Core::INamedResource> { template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_INamedResource<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Resources_Core_IResourceCandidate
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceQualifier> Qualifiers() const;
    bool IsMatch() const;
    bool IsMatchAsDefault() const;
    bool IsDefault() const;
    hstring ValueAsString() const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> GetValueAsFileAsync() const;
    hstring GetQualifierValue(param::hstring const& qualifierName) const;
};
template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceCandidate> { template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceCandidate<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Resources_Core_IResourceCandidate2
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> GetValueAsStreamAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceCandidate2> { template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceCandidate2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Resources_Core_IResourceContext
{
    Windows::Foundation::Collections::IObservableMap<hstring, hstring> QualifierValues() const;
    void Reset() const;
    void Reset(param::iterable<hstring> const& qualifierNames) const;
    void OverrideToMatch(param::iterable<Windows::ApplicationModel::Resources::Core::ResourceQualifier> const& result) const;
    Windows::ApplicationModel::Resources::Core::ResourceContext Clone() const;
    Windows::Foundation::Collections::IVectorView<hstring> Languages() const;
    void Languages(param::async_vector_view<hstring> const& languages) const;
};
template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceContext> { template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceContext<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Resources_Core_IResourceContextStatics
{
    [[deprecated("CreateMatchingContext may be altered or unavailable for releases after Windows 8.1. Instead, use ResourceContext.GetForCurrentView.OverrideToMatch.")]] Windows::ApplicationModel::Resources::Core::ResourceContext CreateMatchingContext(param::iterable<Windows::ApplicationModel::Resources::Core::ResourceQualifier> const& result) const;
};
template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceContextStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceContextStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Resources_Core_IResourceContextStatics2
{
    Windows::ApplicationModel::Resources::Core::ResourceContext GetForCurrentView() const;
    void SetGlobalQualifierValue(param::hstring const& key, param::hstring const& value) const;
    void ResetGlobalQualifierValues() const;
    void ResetGlobalQualifierValues(param::iterable<hstring> const& qualifierNames) const;
    Windows::ApplicationModel::Resources::Core::ResourceContext GetForViewIndependentUse() const;
};
template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceContextStatics2> { template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceContextStatics2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Resources_Core_IResourceContextStatics3
{
    void SetGlobalQualifierValue(param::hstring const& key, param::hstring const& value, Windows::ApplicationModel::Resources::Core::ResourceQualifierPersistence const& persistence) const;
};
template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceContextStatics3> { template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceContextStatics3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Resources_Core_IResourceManager
{
    Windows::ApplicationModel::Resources::Core::ResourceMap MainResourceMap() const;
    Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Resources::Core::ResourceMap> AllResourceMaps() const;
    [[deprecated("DefaultContext may be altered or unavailable for releases after Windows Phone 'OSVersion' (TBD). Instead, use ResourceContext.GetForCurrentView.")]] Windows::ApplicationModel::Resources::Core::ResourceContext DefaultContext() const;
    void LoadPriFiles(param::iterable<Windows::Storage::IStorageFile> const& files) const;
    void UnloadPriFiles(param::iterable<Windows::Storage::IStorageFile> const& files) const;
};
template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceManager> { template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceManager<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Resources_Core_IResourceManager2
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::NamedResource> GetAllNamedResourcesForPackage(param::hstring const& packageName, Windows::ApplicationModel::Resources::Core::ResourceLayoutInfo const& resourceLayoutInfo) const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceMap> GetAllSubtreesForPackage(param::hstring const& packageName, Windows::ApplicationModel::Resources::Core::ResourceLayoutInfo const& resourceLayoutInfo) const;
};
template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceManager2> { template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceManager2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Resources_Core_IResourceManagerStatics
{
    Windows::ApplicationModel::Resources::Core::ResourceManager Current() const;
    bool IsResourceReference(param::hstring const& resourceReference) const;
};
template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceManagerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceManagerStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Resources_Core_IResourceMap
{
    Windows::Foundation::Uri Uri() const;
    [[deprecated("GetValue(string) may be altered or unavailable for releases after Windows 8.1. Instead, use GetValue(string, ResourceContext).")]] Windows::ApplicationModel::Resources::Core::ResourceCandidate GetValue(param::hstring const& resource) const;
    Windows::ApplicationModel::Resources::Core::ResourceCandidate GetValue(param::hstring const& resource, Windows::ApplicationModel::Resources::Core::ResourceContext const& context) const;
    Windows::ApplicationModel::Resources::Core::ResourceMap GetSubtree(param::hstring const& reference) const;
};
template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceMap> { template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceMap<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Resources_Core_IResourceQualifier
{
    hstring QualifierName() const;
    hstring QualifierValue() const;
    bool IsDefault() const;
    bool IsMatch() const;
    double Score() const;
};
template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceQualifier> { template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceQualifier<D>; };

template <> struct abi<Windows::ApplicationModel::Resources::Core::INamedResource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Uri(::IUnknown** uri) = 0;
    virtual HRESULT __stdcall get_Candidates(::IUnknown** value) = 0;
    virtual HRESULT __stdcall Resolve(::IUnknown** result) = 0;
    virtual HRESULT __stdcall ResolveForContext(::IUnknown* resourceContext, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ResolveAll(::IUnknown** result) = 0;
    virtual HRESULT __stdcall ResolveAllForContext(::IUnknown* resourceContext, ::IUnknown** instances) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceCandidate>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Qualifiers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsMatch(bool* value) = 0;
    virtual HRESULT __stdcall get_IsMatchAsDefault(bool* value) = 0;
    virtual HRESULT __stdcall get_IsDefault(bool* value) = 0;
    virtual HRESULT __stdcall get_ValueAsString(HSTRING* result) = 0;
    virtual HRESULT __stdcall GetValueAsFileAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetQualifierValue(HSTRING qualifierName, HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceCandidate2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetValueAsStreamAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceContext>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_QualifierValues(::IUnknown** value) = 0;
    virtual HRESULT __stdcall Reset() = 0;
    virtual HRESULT __stdcall ResetQualifierValues(::IUnknown* qualifierNames) = 0;
    virtual HRESULT __stdcall OverrideToMatch(::IUnknown* result) = 0;
    virtual HRESULT __stdcall Clone(::IUnknown** clone) = 0;
    virtual HRESULT __stdcall get_Languages(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Languages(::IUnknown* languages) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceContextStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateMatchingContext(::IUnknown* result, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceContextStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** value) = 0;
    virtual HRESULT __stdcall SetGlobalQualifierValue(HSTRING key, HSTRING value) = 0;
    virtual HRESULT __stdcall ResetGlobalQualifierValues() = 0;
    virtual HRESULT __stdcall ResetGlobalQualifierValuesForSpecifiedQualifiers(::IUnknown* qualifierNames) = 0;
    virtual HRESULT __stdcall GetForViewIndependentUse(::IUnknown** loader) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceContextStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetGlobalQualifierValueWithPersistence(HSTRING key, HSTRING value, abi_t<Windows::ApplicationModel::Resources::Core::ResourceQualifierPersistence> persistence) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MainResourceMap(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AllResourceMaps(::IUnknown** maps) = 0;
    virtual HRESULT __stdcall get_DefaultContext(::IUnknown** value) = 0;
    virtual HRESULT __stdcall LoadPriFiles(::IUnknown* files) = 0;
    virtual HRESULT __stdcall UnloadPriFiles(::IUnknown* files) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceManager2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetAllNamedResourcesForPackage(HSTRING packageName, abi_t<Windows::ApplicationModel::Resources::Core::ResourceLayoutInfo> resourceLayoutInfo, ::IUnknown** table) = 0;
    virtual HRESULT __stdcall GetAllSubtreesForPackage(HSTRING packageName, abi_t<Windows::ApplicationModel::Resources::Core::ResourceLayoutInfo> resourceLayoutInfo, ::IUnknown** table) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Current(::IUnknown** value) = 0;
    virtual HRESULT __stdcall IsResourceReference(HSTRING resourceReference, bool* isReference) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceMap>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Uri(::IUnknown** uri) = 0;
    virtual HRESULT __stdcall GetValue(HSTRING resource, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetValueForContext(HSTRING resource, ::IUnknown* context, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetSubtree(HSTRING reference, ::IUnknown** map) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceQualifier>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_QualifierName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_QualifierValue(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IsDefault(bool* value) = 0;
    virtual HRESULT __stdcall get_IsMatch(bool* value) = 0;
    virtual HRESULT __stdcall get_Score(double* value) = 0;
};};

}
