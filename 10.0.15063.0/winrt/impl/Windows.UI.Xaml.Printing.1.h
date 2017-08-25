// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Graphics.Printing.0.h"
#include "winrt/impl/Windows.UI.Xaml.0.h"
#include "winrt/impl/Windows.UI.Xaml.Printing.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Printing {

struct WINRT_EBO IAddPagesEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAddPagesEventArgs>
{
    IAddPagesEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGetPreviewPageEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGetPreviewPageEventArgs>
{
    IGetPreviewPageEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaginateEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaginateEventArgs>
{
    IPaginateEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintDocument :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintDocument>
{
    IPrintDocument(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintDocumentFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintDocumentFactory>
{
    IPrintDocumentFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintDocumentStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintDocumentStatics>
{
    IPrintDocumentStatics(std::nullptr_t = nullptr) noexcept {}
};

}
