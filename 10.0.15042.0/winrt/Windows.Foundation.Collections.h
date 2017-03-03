// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Foundation.Collections.3.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Foundation::Collections::IPropertySet> : produce_base<D, Windows::Foundation::Collections::IPropertySet>
{};

}

namespace Windows::Foundation::Collections {

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

}

template<>
struct std::hash<winrt::Windows::Foundation::Collections::IPropertySet>
{
    size_t operator()(const winrt::Windows::Foundation::Collections::IPropertySet & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Foundation::Collections::PropertySet>
{
    size_t operator()(const winrt::Windows::Foundation::Collections::PropertySet & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Foundation::Collections::StringMap>
{
    size_t operator()(const winrt::Windows::Foundation::Collections::StringMap & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Foundation::Collections::ValueSet>
{
    size_t operator()(const winrt::Windows::Foundation::Collections::ValueSet & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
