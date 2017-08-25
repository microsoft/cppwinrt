// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct WINRT_EBO PropertySet :
    Windows::Foundation::Collections::IPropertySet
{
    PropertySet(std::nullptr_t) noexcept {}
    PropertySet();
};

struct WINRT_EBO StringMap :
    Windows::Foundation::Collections::IMap<hstring, hstring>,
    impl::require<StringMap, Windows::Foundation::Collections::IObservableMap<hstring, hstring>>
{
    StringMap(std::nullptr_t) noexcept {}
    StringMap();
};

struct WINRT_EBO ValueSet :
    Windows::Foundation::Collections::IPropertySet
{
    ValueSet(std::nullptr_t) noexcept {}
    ValueSet();
};

}
