// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::Resources::Management {

struct IIndexedResourceCandidate;
struct IIndexedResourceQualifier;
struct IResourceIndexer;
struct IResourceIndexerFactory;
struct IResourceIndexerFactory2;
struct IndexedResourceCandidate;
struct IndexedResourceQualifier;
struct ResourceIndexer;

}

namespace Windows::ApplicationModel::Resources::Management {

struct IIndexedResourceCandidate;
struct IIndexedResourceQualifier;
struct IResourceIndexer;
struct IResourceIndexerFactory;
struct IResourceIndexerFactory2;
struct IndexedResourceCandidate;
struct IndexedResourceQualifier;
struct ResourceIndexer;

}

namespace Windows::ApplicationModel::Resources::Management {

template <typename T> struct impl_IIndexedResourceCandidate;
template <typename T> struct impl_IIndexedResourceQualifier;
template <typename T> struct impl_IResourceIndexer;
template <typename T> struct impl_IResourceIndexerFactory;
template <typename T> struct impl_IResourceIndexerFactory2;

}

namespace Windows::ApplicationModel::Resources::Management {

enum class IndexedResourceType
{
    String = 0,
    Path = 1,
    EmbeddedData = 2,
};

}

}
