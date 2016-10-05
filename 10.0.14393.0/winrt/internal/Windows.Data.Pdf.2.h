// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Data.Pdf.1.h"
#include "Windows.Foundation.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_d6b166ec_099a_5ee2_ad2e_f4c88614aabb
#define WINRT_GENERIC_d6b166ec_099a_5ee2_ad2e_f4c88614aabb
template <> struct __declspec(uuid("d6b166ec-099a-5ee2-ad2e-f4c88614aabb")) __declspec(novtable) IAsyncOperation<Windows::Data::Pdf::PdfDocument> : impl_IAsyncOperation<Windows::Data::Pdf::PdfDocument> {};
#endif

#ifndef WINRT_GENERIC_8d4950b3_629d_5d7d_84cc_04c0dcf7942b
#define WINRT_GENERIC_8d4950b3_629d_5d7d_84cc_04c0dcf7942b
template <> struct __declspec(uuid("8d4950b3-629d-5d7d-84cc-04c0dcf7942b")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Data::Pdf::PdfDocument> : impl_AsyncOperationCompletedHandler<Windows::Data::Pdf::PdfDocument> {};
#endif


}

namespace Windows::Data::Pdf {

template <typename D>
struct WINRT_EBO impl_IPdfDocument
{
    Windows::Data::Pdf::PdfPage GetPage(uint32_t pageIndex) const;
    uint32_t PageCount() const;
    bool IsPasswordProtected() const;
};

template <typename D>
struct WINRT_EBO impl_IPdfDocumentStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> LoadFromFileAsync(const Windows::Storage::IStorageFile & file) const;
    Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> LoadFromFileAsync(const Windows::Storage::IStorageFile & file, hstring_ref password) const;
    Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> LoadFromStreamAsync(const Windows::Storage::Streams::IRandomAccessStream & inputStream) const;
    Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> LoadFromStreamAsync(const Windows::Storage::Streams::IRandomAccessStream & inputStream, hstring_ref password) const;
};

template <typename D>
struct WINRT_EBO impl_IPdfPage
{
    Windows::Foundation::IAsyncAction RenderToStreamAsync(const Windows::Storage::Streams::IRandomAccessStream & outputStream) const;
    Windows::Foundation::IAsyncAction RenderToStreamAsync(const Windows::Storage::Streams::IRandomAccessStream & outputStream, const Windows::Data::Pdf::PdfPageRenderOptions & options) const;
    Windows::Foundation::IAsyncAction PreparePageAsync() const;
    uint32_t Index() const;
    Windows::Foundation::Size Size() const;
    Windows::Data::Pdf::PdfPageDimensions Dimensions() const;
    Windows::Data::Pdf::PdfPageRotation Rotation() const;
    float PreferredZoom() const;
};

template <typename D>
struct WINRT_EBO impl_IPdfPageDimensions
{
    Windows::Foundation::Rect MediaBox() const;
    Windows::Foundation::Rect CropBox() const;
    Windows::Foundation::Rect BleedBox() const;
    Windows::Foundation::Rect TrimBox() const;
    Windows::Foundation::Rect ArtBox() const;
};

template <typename D>
struct WINRT_EBO impl_IPdfPageRenderOptions
{
    Windows::Foundation::Rect SourceRect() const;
    void SourceRect(const Windows::Foundation::Rect & value) const;
    uint32_t DestinationWidth() const;
    void DestinationWidth(uint32_t value) const;
    uint32_t DestinationHeight() const;
    void DestinationHeight(uint32_t value) const;
    Windows::UI::Color BackgroundColor() const;
    void BackgroundColor(const Windows::UI::Color & value) const;
    bool IsIgnoringHighContrast() const;
    void IsIgnoringHighContrast(bool value) const;
    GUID BitmapEncoderId() const;
    void BitmapEncoderId(GUID value) const;
};

struct IPdfDocument :
    Windows::IInspectable,
    impl::consume<IPdfDocument>
{
    IPdfDocument(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPdfDocument>(m_ptr); }
};

struct IPdfDocumentStatics :
    Windows::IInspectable,
    impl::consume<IPdfDocumentStatics>
{
    IPdfDocumentStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPdfDocumentStatics>(m_ptr); }
};

struct IPdfPage :
    Windows::IInspectable,
    impl::consume<IPdfPage>
{
    IPdfPage(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPdfPage>(m_ptr); }
};

struct IPdfPageDimensions :
    Windows::IInspectable,
    impl::consume<IPdfPageDimensions>
{
    IPdfPageDimensions(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPdfPageDimensions>(m_ptr); }
};

struct IPdfPageRenderOptions :
    Windows::IInspectable,
    impl::consume<IPdfPageRenderOptions>
{
    IPdfPageRenderOptions(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPdfPageRenderOptions>(m_ptr); }
};

}

}
