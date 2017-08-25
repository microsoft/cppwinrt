// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.UI.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Data.Pdf.0.h"

WINRT_EXPORT namespace winrt::Windows::Data::Pdf {

struct WINRT_EBO IPdfDocument :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPdfDocument>
{
    IPdfDocument(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPdfDocumentStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPdfDocumentStatics>
{
    IPdfDocumentStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPdfPage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPdfPage>
{
    IPdfPage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPdfPageDimensions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPdfPageDimensions>
{
    IPdfPageDimensions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPdfPageRenderOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPdfPageRenderOptions>
{
    IPdfPageRenderOptions(std::nullptr_t = nullptr) noexcept {}
};

}
