// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Data.Pdf.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Data::Pdf {

struct WINRT_EBO PdfDocument :
    Windows::Data::Pdf::IPdfDocument
{
    PdfDocument(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> LoadFromFileAsync(const Windows::Storage::IStorageFile & file);
    static Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> LoadFromFileAsync(const Windows::Storage::IStorageFile & file, hstring_ref password);
    static Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> LoadFromStreamAsync(const Windows::Storage::Streams::IRandomAccessStream & inputStream);
    static Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> LoadFromStreamAsync(const Windows::Storage::Streams::IRandomAccessStream & inputStream, hstring_ref password);
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

}
