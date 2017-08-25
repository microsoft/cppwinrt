// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Resources {

struct ICustomXamlResourceLoader;
struct ICustomXamlResourceLoaderFactory;
struct ICustomXamlResourceLoaderOverrides;
struct ICustomXamlResourceLoaderStatics;
struct CustomXamlResourceLoader;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Xaml::Resources::ICustomXamlResourceLoader>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Resources::CustomXamlResourceLoader>{ using type = class_category; };
template <> struct name<Windows::UI::Xaml::Resources::ICustomXamlResourceLoader>{ static constexpr auto & value{ L"Windows.UI.Xaml.Resources.ICustomXamlResourceLoader" }; };
template <> struct name<Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Resources.ICustomXamlResourceLoaderFactory" }; };
template <> struct name<Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides>{ static constexpr auto & value{ L"Windows.UI.Xaml.Resources.ICustomXamlResourceLoaderOverrides" }; };
template <> struct name<Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Resources.ICustomXamlResourceLoaderStatics" }; };
template <> struct name<Windows::UI::Xaml::Resources::CustomXamlResourceLoader>{ static constexpr auto & value{ L"Windows.UI.Xaml.Resources.CustomXamlResourceLoader" }; };
template <> struct guid<Windows::UI::Xaml::Resources::ICustomXamlResourceLoader>{ static constexpr GUID value{ 0x511A84AB,0x4A88,0x419F,{ 0x85,0x2E,0x54,0x08,0x3B,0x90,0xB0,0x78 } }; };
template <> struct guid<Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory>{ static constexpr GUID value{ 0x5BFD7E49,0x7886,0x44F3,{ 0x8E,0xD3,0x6F,0xEC,0x04,0x63,0xED,0x69 } }; };
template <> struct guid<Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides>{ static constexpr GUID value{ 0xF851E991,0xAF02,0x46E8,{ 0x9A,0xF8,0x42,0x7B,0x7E,0xBF,0xE9,0xF8 } }; };
template <> struct guid<Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics>{ static constexpr GUID value{ 0x224FF617,0xE4DC,0x4C27,{ 0xAD,0x32,0xDB,0x93,0xD5,0xD0,0xE5,0xDA } }; };
template <> struct default_interface<Windows::UI::Xaml::Resources::CustomXamlResourceLoader>{ using type = Windows::UI::Xaml::Resources::ICustomXamlResourceLoader; };

template <typename D>
struct consume_Windows_UI_Xaml_Resources_ICustomXamlResourceLoader
{
};
template <> struct consume<Windows::UI::Xaml::Resources::ICustomXamlResourceLoader> { template <typename D> using type = consume_Windows_UI_Xaml_Resources_ICustomXamlResourceLoader<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderFactory
{
    Windows::UI::Xaml::Resources::CustomXamlResourceLoader CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderOverrides
{
    Windows::Foundation::IInspectable GetResource(param::hstring const& resourceId, param::hstring const& objectType, param::hstring const& propertyName, param::hstring const& propertyType) const;
};
template <> struct consume<Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides> { template <typename D> using type = consume_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderOverrides<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderStatics
{
    Windows::UI::Xaml::Resources::CustomXamlResourceLoader Current() const;
    void Current(Windows::UI::Xaml::Resources::CustomXamlResourceLoader const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderStatics<D>; };

template <> struct abi<Windows::UI::Xaml::Resources::ICustomXamlResourceLoader>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetResource(HSTRING resourceId, HSTRING objectType, HSTRING propertyName, HSTRING propertyType, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Current(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Current(::IUnknown* value) = 0;
};};

}
