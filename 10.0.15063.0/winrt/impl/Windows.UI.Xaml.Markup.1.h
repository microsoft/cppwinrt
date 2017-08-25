// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.UI.Xaml.0.h"
#include "winrt/impl/Windows.UI.Xaml.Interop.0.h"
#include "winrt/impl/Windows.UI.Xaml.Markup.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Markup {

struct WINRT_EBO IComponentConnector :
    Windows::Foundation::IInspectable,
    impl::consume_t<IComponentConnector>
{
    IComponentConnector(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IComponentConnector2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IComponentConnector2>
{
    IComponentConnector2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataTemplateComponent :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataTemplateComponent>
{
    IDataTemplateComponent(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXamlBinaryWriter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlBinaryWriter>
{
    IXamlBinaryWriter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXamlBinaryWriterStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlBinaryWriterStatics>
{
    IXamlBinaryWriterStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXamlBindingHelper :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlBindingHelper>
{
    IXamlBindingHelper(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXamlBindingHelperStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlBindingHelperStatics>
{
    IXamlBindingHelperStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXamlMarkupHelper :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlMarkupHelper>
{
    IXamlMarkupHelper(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXamlMarkupHelperStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlMarkupHelperStatics>
{
    IXamlMarkupHelperStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXamlMember :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlMember>
{
    IXamlMember(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXamlMetadataProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlMetadataProvider>
{
    IXamlMetadataProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXamlReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlReader>
{
    IXamlReader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXamlReaderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlReaderStatics>
{
    IXamlReaderStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXamlType :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlType>
{
    IXamlType(std::nullptr_t = nullptr) noexcept {}
};

}
