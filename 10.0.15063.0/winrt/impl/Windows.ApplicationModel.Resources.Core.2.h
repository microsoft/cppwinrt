// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.ApplicationModel.Resources.Core.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Resources::Core {

struct ResourceLayoutInfo
{
    uint32_t MajorVersion;
    uint32_t MinorVersion;
    uint32_t ResourceSubtreeCount;
    uint32_t NamedResourceCount;
    int32_t Checksum;
};

struct WINRT_EBO NamedResource :
    Windows::ApplicationModel::Resources::Core::INamedResource
{
    NamedResource(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ResourceCandidate :
    Windows::ApplicationModel::Resources::Core::IResourceCandidate,
    impl::require<ResourceCandidate, Windows::ApplicationModel::Resources::Core::IResourceCandidate2>
{
    ResourceCandidate(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ResourceCandidateVectorView :
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceCandidate>
{
    ResourceCandidateVectorView(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ResourceContext :
    Windows::ApplicationModel::Resources::Core::IResourceContext
{
    ResourceContext(std::nullptr_t) noexcept {}
    ResourceContext();
    [[deprecated("CreateMatchingContext may be altered or unavailable for releases after Windows 8.1. Instead, use ResourceContext.GetForCurrentView.OverrideToMatch.")]] static Windows::ApplicationModel::Resources::Core::ResourceContext CreateMatchingContext(param::iterable<Windows::ApplicationModel::Resources::Core::ResourceQualifier> const& result);
    static Windows::ApplicationModel::Resources::Core::ResourceContext GetForCurrentView();
    static void SetGlobalQualifierValue(param::hstring const& key, param::hstring const& value);
    static void ResetGlobalQualifierValues();
    static void ResetGlobalQualifierValues(param::iterable<hstring> const& qualifierNames);
    static Windows::ApplicationModel::Resources::Core::ResourceContext GetForViewIndependentUse();
    static void SetGlobalQualifierValue(param::hstring const& key, param::hstring const& value, Windows::ApplicationModel::Resources::Core::ResourceQualifierPersistence const& persistence);
};

struct WINRT_EBO ResourceContextLanguagesVectorView :
    Windows::Foundation::Collections::IVectorView<hstring>
{
    ResourceContextLanguagesVectorView(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ResourceManager :
    Windows::ApplicationModel::Resources::Core::IResourceManager,
    impl::require<ResourceManager, Windows::ApplicationModel::Resources::Core::IResourceManager2>
{
    ResourceManager(std::nullptr_t) noexcept {}
    static Windows::ApplicationModel::Resources::Core::ResourceManager Current();
    static bool IsResourceReference(param::hstring const& resourceReference);
};

struct WINRT_EBO ResourceMap :
    Windows::ApplicationModel::Resources::Core::IResourceMap
{
    ResourceMap(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ResourceMapIterator :
    Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::ApplicationModel::Resources::Core::NamedResource>>
{
    ResourceMapIterator(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ResourceMapMapView :
    Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Resources::Core::ResourceMap>
{
    ResourceMapMapView(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ResourceMapMapViewIterator :
    Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::ApplicationModel::Resources::Core::ResourceMap>>
{
    ResourceMapMapViewIterator(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ResourceQualifier :
    Windows::ApplicationModel::Resources::Core::IResourceQualifier
{
    ResourceQualifier(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ResourceQualifierMapView :
    Windows::Foundation::Collections::IMapView<hstring, hstring>
{
    ResourceQualifierMapView(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ResourceQualifierObservableMap :
    Windows::Foundation::Collections::IObservableMap<hstring, hstring>
{
    ResourceQualifierObservableMap(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ResourceQualifierVectorView :
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceQualifier>
{
    ResourceQualifierVectorView(std::nullptr_t) noexcept {}
};

}
