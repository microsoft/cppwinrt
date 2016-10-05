// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

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
