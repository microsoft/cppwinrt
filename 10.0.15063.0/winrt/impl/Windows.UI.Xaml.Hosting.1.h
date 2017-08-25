// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.Composition.0.h"
#include "winrt/impl/Windows.UI.Xaml.0.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.0.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.Primitives.0.h"
#include "winrt/impl/Windows.UI.Xaml.Hosting.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Hosting {

struct WINRT_EBO IElementCompositionPreview :
    Windows::Foundation::IInspectable,
    impl::consume_t<IElementCompositionPreview>
{
    IElementCompositionPreview(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IElementCompositionPreviewStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IElementCompositionPreviewStatics>
{
    IElementCompositionPreviewStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IElementCompositionPreviewStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IElementCompositionPreviewStatics2>
{
    IElementCompositionPreviewStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXamlUIPresenter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlUIPresenter>
{
    IXamlUIPresenter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXamlUIPresenterHost :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlUIPresenterHost>
{
    IXamlUIPresenterHost(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXamlUIPresenterHost2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlUIPresenterHost2>
{
    IXamlUIPresenterHost2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXamlUIPresenterHost3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlUIPresenterHost3>
{
    IXamlUIPresenterHost3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXamlUIPresenterStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlUIPresenterStatics>
{
    IXamlUIPresenterStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXamlUIPresenterStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlUIPresenterStatics2>
{
    IXamlUIPresenterStatics2(std::nullptr_t = nullptr) noexcept {}
};

}
