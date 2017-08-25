// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Data.Pdf.2.h"

namespace winrt::impl {

template <typename D> Windows::Data::Pdf::PdfPage consume_Windows_Data_Pdf_IPdfDocument<D>::GetPage(uint32_t pageIndex) const
{
    Windows::Data::Pdf::PdfPage pdfPage{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfDocument)->GetPage(pageIndex, put_abi(pdfPage)));
    return pdfPage;
}

template <typename D> uint32_t consume_Windows_Data_Pdf_IPdfDocument<D>::PageCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfDocument)->get_PageCount(&value));
    return value;
}

template <typename D> bool consume_Windows_Data_Pdf_IPdfDocument<D>::IsPasswordProtected() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfDocument)->get_IsPasswordProtected(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> consume_Windows_Data_Pdf_IPdfDocumentStatics<D>::LoadFromFileAsync(Windows::Storage::IStorageFile const& file) const
{
    Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfDocumentStatics)->LoadFromFileAsync(get_abi(file), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> consume_Windows_Data_Pdf_IPdfDocumentStatics<D>::LoadFromFileAsync(Windows::Storage::IStorageFile const& file, param::hstring const& password) const
{
    Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfDocumentStatics)->LoadFromFileWithPasswordAsync(get_abi(file), get_abi(password), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> consume_Windows_Data_Pdf_IPdfDocumentStatics<D>::LoadFromStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& inputStream) const
{
    Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfDocumentStatics)->LoadFromStreamAsync(get_abi(inputStream), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> consume_Windows_Data_Pdf_IPdfDocumentStatics<D>::LoadFromStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& inputStream, param::hstring const& password) const
{
    Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfDocumentStatics)->LoadFromStreamWithPasswordAsync(get_abi(inputStream), get_abi(password), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Data_Pdf_IPdfPage<D>::RenderToStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& outputStream) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfPage)->RenderToStreamAsync(get_abi(outputStream), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Data_Pdf_IPdfPage<D>::RenderToStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& outputStream, Windows::Data::Pdf::PdfPageRenderOptions const& options) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfPage)->RenderWithOptionsToStreamAsync(get_abi(outputStream), get_abi(options), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Data_Pdf_IPdfPage<D>::PreparePageAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfPage)->PreparePageAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> uint32_t consume_Windows_Data_Pdf_IPdfPage<D>::Index() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfPage)->get_Index(&value));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Windows_Data_Pdf_IPdfPage<D>::Size() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfPage)->get_Size(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Pdf::PdfPageDimensions consume_Windows_Data_Pdf_IPdfPage<D>::Dimensions() const
{
    Windows::Data::Pdf::PdfPageDimensions value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfPage)->get_Dimensions(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Pdf::PdfPageRotation consume_Windows_Data_Pdf_IPdfPage<D>::Rotation() const
{
    Windows::Data::Pdf::PdfPageRotation value{};
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfPage)->get_Rotation(put_abi(value)));
    return value;
}

template <typename D> float consume_Windows_Data_Pdf_IPdfPage<D>::PreferredZoom() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfPage)->get_PreferredZoom(&value));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_Data_Pdf_IPdfPageDimensions<D>::MediaBox() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfPageDimensions)->get_MediaBox(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_Data_Pdf_IPdfPageDimensions<D>::CropBox() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfPageDimensions)->get_CropBox(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_Data_Pdf_IPdfPageDimensions<D>::BleedBox() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfPageDimensions)->get_BleedBox(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_Data_Pdf_IPdfPageDimensions<D>::TrimBox() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfPageDimensions)->get_TrimBox(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_Data_Pdf_IPdfPageDimensions<D>::ArtBox() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfPageDimensions)->get_ArtBox(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_Data_Pdf_IPdfPageRenderOptions<D>::SourceRect() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfPageRenderOptions)->get_SourceRect(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Data_Pdf_IPdfPageRenderOptions<D>::SourceRect(Windows::Foundation::Rect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfPageRenderOptions)->put_SourceRect(get_abi(value)));
}

template <typename D> uint32_t consume_Windows_Data_Pdf_IPdfPageRenderOptions<D>::DestinationWidth() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfPageRenderOptions)->get_DestinationWidth(&value));
    return value;
}

template <typename D> void consume_Windows_Data_Pdf_IPdfPageRenderOptions<D>::DestinationWidth(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfPageRenderOptions)->put_DestinationWidth(value));
}

template <typename D> uint32_t consume_Windows_Data_Pdf_IPdfPageRenderOptions<D>::DestinationHeight() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfPageRenderOptions)->get_DestinationHeight(&value));
    return value;
}

template <typename D> void consume_Windows_Data_Pdf_IPdfPageRenderOptions<D>::DestinationHeight(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfPageRenderOptions)->put_DestinationHeight(value));
}

template <typename D> Windows::UI::Color consume_Windows_Data_Pdf_IPdfPageRenderOptions<D>::BackgroundColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfPageRenderOptions)->get_BackgroundColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Data_Pdf_IPdfPageRenderOptions<D>::BackgroundColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfPageRenderOptions)->put_BackgroundColor(get_abi(value)));
}

template <typename D> bool consume_Windows_Data_Pdf_IPdfPageRenderOptions<D>::IsIgnoringHighContrast() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfPageRenderOptions)->get_IsIgnoringHighContrast(&value));
    return value;
}

template <typename D> void consume_Windows_Data_Pdf_IPdfPageRenderOptions<D>::IsIgnoringHighContrast(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfPageRenderOptions)->put_IsIgnoringHighContrast(value));
}

template <typename D> GUID consume_Windows_Data_Pdf_IPdfPageRenderOptions<D>::BitmapEncoderId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfPageRenderOptions)->get_BitmapEncoderId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Data_Pdf_IPdfPageRenderOptions<D>::BitmapEncoderId(GUID const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Pdf::IPdfPageRenderOptions)->put_BitmapEncoderId(get_abi(value)));
}

template <typename D>
struct produce<D, Windows::Data::Pdf::IPdfDocument> : produce_base<D, Windows::Data::Pdf::IPdfDocument>
{
    HRESULT __stdcall GetPage(uint32_t pageIndex, ::IUnknown** pdfPage) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pdfPage = detach_abi(this->shim().GetPage(pageIndex));
            return S_OK;
        }
        catch (...)
        {
            *pdfPage = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PageCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PageCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPasswordProtected(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPasswordProtected());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Pdf::IPdfDocumentStatics> : produce_base<D, Windows::Data::Pdf::IPdfDocumentStatics>
{
    HRESULT __stdcall LoadFromFileAsync(::IUnknown* file, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().LoadFromFileAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadFromFileWithPasswordAsync(::IUnknown* file, HSTRING password, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().LoadFromFileAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file), *reinterpret_cast<hstring const*>(&password)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadFromStreamAsync(::IUnknown* inputStream, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().LoadFromStreamAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&inputStream)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadFromStreamWithPasswordAsync(::IUnknown* inputStream, HSTRING password, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().LoadFromStreamAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&inputStream), *reinterpret_cast<hstring const*>(&password)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Pdf::IPdfPage> : produce_base<D, Windows::Data::Pdf::IPdfPage>
{
    HRESULT __stdcall RenderToStreamAsync(::IUnknown* outputStream, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().RenderToStreamAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&outputStream)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RenderWithOptionsToStreamAsync(::IUnknown* outputStream, ::IUnknown* options, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().RenderToStreamAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&outputStream), *reinterpret_cast<Windows::Data::Pdf::PdfPageRenderOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PreparePageAsync(::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().PreparePageAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Index(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Index());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Size(abi_t<Windows::Foundation::Size>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Dimensions(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Dimensions());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Rotation(abi_t<Windows::Data::Pdf::PdfPageRotation>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Rotation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreferredZoom(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PreferredZoom());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Pdf::IPdfPageDimensions> : produce_base<D, Windows::Data::Pdf::IPdfPageDimensions>
{
    HRESULT __stdcall get_MediaBox(abi_t<Windows::Foundation::Rect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MediaBox());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CropBox(abi_t<Windows::Foundation::Rect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CropBox());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BleedBox(abi_t<Windows::Foundation::Rect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BleedBox());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrimBox(abi_t<Windows::Foundation::Rect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrimBox());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ArtBox(abi_t<Windows::Foundation::Rect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ArtBox());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Pdf::IPdfPageRenderOptions> : produce_base<D, Windows::Data::Pdf::IPdfPageRenderOptions>
{
    HRESULT __stdcall get_SourceRect(abi_t<Windows::Foundation::Rect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceRect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SourceRect(abi_t<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceRect(*reinterpret_cast<Windows::Foundation::Rect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DestinationWidth(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DestinationWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DestinationWidth(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DestinationWidth(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DestinationHeight(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DestinationHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DestinationHeight(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DestinationHeight(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BackgroundColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BackgroundColor(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BackgroundColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsIgnoringHighContrast(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsIgnoringHighContrast());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsIgnoringHighContrast(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsIgnoringHighContrast(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BitmapEncoderId(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BitmapEncoderId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BitmapEncoderId(abi_t<GUID> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BitmapEncoderId(*reinterpret_cast<GUID const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Data::Pdf {

inline Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> PdfDocument::LoadFromFileAsync(Windows::Storage::IStorageFile const& file)
{
    return get_activation_factory<PdfDocument, Windows::Data::Pdf::IPdfDocumentStatics>().LoadFromFileAsync(file);
}

inline Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> PdfDocument::LoadFromFileAsync(Windows::Storage::IStorageFile const& file, param::hstring const& password)
{
    return get_activation_factory<PdfDocument, Windows::Data::Pdf::IPdfDocumentStatics>().LoadFromFileAsync(file, password);
}

inline Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> PdfDocument::LoadFromStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& inputStream)
{
    return get_activation_factory<PdfDocument, Windows::Data::Pdf::IPdfDocumentStatics>().LoadFromStreamAsync(inputStream);
}

inline Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> PdfDocument::LoadFromStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& inputStream, param::hstring const& password)
{
    return get_activation_factory<PdfDocument, Windows::Data::Pdf::IPdfDocumentStatics>().LoadFromStreamAsync(inputStream, password);
}

inline PdfPageRenderOptions::PdfPageRenderOptions() :
    PdfPageRenderOptions(activate_instance<PdfPageRenderOptions>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Data::Pdf::IPdfDocument> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Pdf::IPdfDocument> {};

template<> struct hash<winrt::Windows::Data::Pdf::IPdfDocumentStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Pdf::IPdfDocumentStatics> {};

template<> struct hash<winrt::Windows::Data::Pdf::IPdfPage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Pdf::IPdfPage> {};

template<> struct hash<winrt::Windows::Data::Pdf::IPdfPageDimensions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Pdf::IPdfPageDimensions> {};

template<> struct hash<winrt::Windows::Data::Pdf::IPdfPageRenderOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Pdf::IPdfPageRenderOptions> {};

template<> struct hash<winrt::Windows::Data::Pdf::PdfDocument> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Pdf::PdfDocument> {};

template<> struct hash<winrt::Windows::Data::Pdf::PdfPage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Pdf::PdfPage> {};

template<> struct hash<winrt::Windows::Data::Pdf::PdfPageDimensions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Pdf::PdfPageDimensions> {};

template<> struct hash<winrt::Windows::Data::Pdf::PdfPageRenderOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Pdf::PdfPageRenderOptions> {};

}

WINRT_WARNING_POP
