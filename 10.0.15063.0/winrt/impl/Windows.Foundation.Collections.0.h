// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct IPropertySet;
struct PropertySet;
struct StringMap;
struct ValueSet;

}

namespace winrt::impl {

template <> struct category<Windows::Foundation::Collections::IPropertySet>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Collections::PropertySet>{ using type = class_category; };
template <> struct category<Windows::Foundation::Collections::StringMap>{ using type = class_category; };
template <> struct category<Windows::Foundation::Collections::ValueSet>{ using type = class_category; };
template <> struct name<Windows::Foundation::Collections::IPropertySet>{ static constexpr auto & value{ L"Windows.Foundation.Collections.IPropertySet" }; };
template <> struct name<Windows::Foundation::Collections::PropertySet>{ static constexpr auto & value{ L"Windows.Foundation.Collections.PropertySet" }; };
template <> struct name<Windows::Foundation::Collections::StringMap>{ static constexpr auto & value{ L"Windows.Foundation.Collections.StringMap" }; };
template <> struct name<Windows::Foundation::Collections::ValueSet>{ static constexpr auto & value{ L"Windows.Foundation.Collections.ValueSet" }; };
template <> struct guid<Windows::Foundation::Collections::IPropertySet>{ static constexpr GUID value{ 0x8A43ED9F,0xF4E6,0x4421,{ 0xAC,0xF9,0x1D,0xAB,0x29,0x86,0x82,0x0C } }; };
template <> struct default_interface<Windows::Foundation::Collections::PropertySet>{ using type = Windows::Foundation::Collections::IPropertySet; };
template <> struct default_interface<Windows::Foundation::Collections::StringMap>{ using type = Windows::Foundation::Collections::IMap<hstring, hstring>; };
template <> struct default_interface<Windows::Foundation::Collections::ValueSet>{ using type = Windows::Foundation::Collections::IPropertySet; };

template <typename D>
struct consume_Windows_Foundation_Collections_IPropertySet
{
};
template <> struct consume<Windows::Foundation::Collections::IPropertySet> { template <typename D> using type = consume_Windows_Foundation_Collections_IPropertySet<D>; };

template <> struct abi<Windows::Foundation::Collections::IPropertySet>{ struct type : ::IInspectable
{
};};

}
