// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct WINRT_EBO IPropertySet :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPropertySet>,
    impl::require<IPropertySet, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Foundation::IInspectable>>, Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable>, Windows::Foundation::Collections::IObservableMap<hstring, Windows::Foundation::IInspectable>>
{
    IPropertySet(std::nullptr_t = nullptr) noexcept {}
};

}
