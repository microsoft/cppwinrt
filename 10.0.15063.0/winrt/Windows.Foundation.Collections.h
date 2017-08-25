// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/Windows.Foundation.h"

namespace winrt::impl {

template <typename D>
struct produce<D, Windows::Foundation::Collections::IPropertySet> : produce_base<D, Windows::Foundation::Collections::IPropertySet>
{};

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

inline PropertySet::PropertySet() :
    PropertySet(activate_instance<PropertySet>())
{}

inline StringMap::StringMap() :
    StringMap(activate_instance<StringMap>())
{}

inline ValueSet::ValueSet() :
    ValueSet(activate_instance<ValueSet>())
{}

}

WINRT_EXPORT namespace std {

template<typename T> struct hash<winrt::Windows::Foundation::Collections::IIterator<T>> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Collections::IIterator<T>> {};

template<typename T> struct hash<winrt::Windows::Foundation::Collections::IIterable<T>> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Collections::IIterable<T>> {};

template<typename T> struct hash<winrt::Windows::Foundation::Collections::IVectorView<T>> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Collections::IVectorView<T>> {};

template<typename T> struct hash<winrt::Windows::Foundation::Collections::IVector<T>> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Collections::IVector<T>> {};

template<typename T> struct hash<winrt::Windows::Foundation::Collections::IObservableVector<T>> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Collections::IObservableVector<T>> {};

template<typename T> struct hash<winrt::Windows::Foundation::Collections::VectorChangedEventHandler<T>> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Collections::VectorChangedEventHandler<T>> {};

template<> struct hash<winrt::Windows::Foundation::Collections::IVectorChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Collections::IVectorChangedEventArgs> {};

template<typename K, typename V> struct hash<winrt::Windows::Foundation::Collections::IKeyValuePair<K, V>> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Collections::IKeyValuePair<K, V>> {};

template<typename K, typename V> struct hash<winrt::Windows::Foundation::Collections::IMapView<K, V>> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Collections::IMapView<K, V>> {};

template<typename K, typename V> struct hash<winrt::Windows::Foundation::Collections::IMap<K, V>> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Collections::IMap<K, V>> {};

template<typename K, typename V> struct hash<winrt::Windows::Foundation::Collections::IObservableMap<K, V>> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Collections::IObservableMap<K, V>> {};

template<typename K, typename V> struct hash<winrt::Windows::Foundation::Collections::MapChangedEventHandler<K, V>> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Collections::MapChangedEventHandler<K, V>> {};

template<typename K> struct hash<winrt::Windows::Foundation::Collections::IMapChangedEventArgs<K>> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Collections::IMapChangedEventArgs<K>> {};

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Foundation::Collections::IPropertySet> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Collections::IPropertySet> {};

template<> struct hash<winrt::Windows::Foundation::Collections::PropertySet> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Collections::PropertySet> {};

template<> struct hash<winrt::Windows::Foundation::Collections::StringMap> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Collections::StringMap> {};

template<> struct hash<winrt::Windows::Foundation::Collections::ValueSet> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Collections::ValueSet> {};

}

WINRT_WARNING_POP
