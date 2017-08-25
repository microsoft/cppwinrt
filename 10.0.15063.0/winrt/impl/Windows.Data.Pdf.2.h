// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Data.Pdf.1.h"

WINRT_EXPORT namespace winrt::Windows::Data::Pdf {

struct WINRT_EBO PdfDocument :
    Windows::Data::Pdf::IPdfDocument
{
    PdfDocument(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> LoadFromFileAsync(Windows::Storage::IStorageFile const& file);
    static Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> LoadFromFileAsync(Windows::Storage::IStorageFile const& file, param::hstring const& password);
    static Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> LoadFromStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& inputStream);
    static Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> LoadFromStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& inputStream, param::hstring const& password);
};

struct WINRT_EBO PdfPage :
    Windows::Data::Pdf::IPdfPage,
    impl::require<PdfPage, Windows::Foundation::IClosable>
{
    PdfPage(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PdfPageDimensions :
    Windows::Data::Pdf::IPdfPageDimensions
{
    PdfPageDimensions(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PdfPageRenderOptions :
    Windows::Data::Pdf::IPdfPageRenderOptions
{
    PdfPageRenderOptions(std::nullptr_t) noexcept {}
    PdfPageRenderOptions();
};

}
