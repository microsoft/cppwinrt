// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.UI.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Storage.3.h"
#include "internal/Windows.Data.Pdf.3.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Data::Pdf::IPdfDocument> : produce_base<D, Windows::Data::Pdf::IPdfDocument>
{
    HRESULT __stdcall abi_GetPage(uint32_t pageIndex, abi_arg_out<Windows::Data::Pdf::IPdfPage> pdfPage) noexcept override
    {
        try
        {
            *pdfPage = detach(this->shim().GetPage(pageIndex));
            return S_OK;
        }
        catch (...)
        {
            *pdfPage = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PageCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PageCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPasswordProtected(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsPasswordProtected());
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
    HRESULT __stdcall abi_LoadFromFileAsync(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().LoadFromFileAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LoadFromFileWithPasswordAsync(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_in<hstring> password, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().LoadFromFileAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file), *reinterpret_cast<const hstring *>(&password)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LoadFromStreamAsync(abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> inputStream, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().LoadFromStreamAsync(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&inputStream)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LoadFromStreamWithPasswordAsync(abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> inputStream, abi_arg_in<hstring> password, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().LoadFromStreamAsync(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&inputStream), *reinterpret_cast<const hstring *>(&password)));
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
    HRESULT __stdcall abi_RenderToStreamAsync(abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> outputStream, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().RenderToStreamAsync(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&outputStream)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RenderWithOptionsToStreamAsync(abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> outputStream, abi_arg_in<Windows::Data::Pdf::IPdfPageRenderOptions> options, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().RenderToStreamAsync(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&outputStream), *reinterpret_cast<const Windows::Data::Pdf::PdfPageRenderOptions *>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PreparePageAsync(abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().PreparePageAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Index(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Index());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Size(abi_arg_out<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Dimensions(abi_arg_out<Windows::Data::Pdf::IPdfPageDimensions> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Dimensions());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Rotation(Windows::Data::Pdf::PdfPageRotation * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Rotation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreferredZoom(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PreferredZoom());
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
    HRESULT __stdcall get_MediaBox(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediaBox());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CropBox(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CropBox());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BleedBox(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BleedBox());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrimBox(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TrimBox());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ArtBox(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ArtBox());
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
    HRESULT __stdcall get_SourceRect(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SourceRect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SourceRect(abi_arg_in<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            this->shim().SourceRect(*reinterpret_cast<const Windows::Foundation::Rect *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DestinationWidth(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DestinationWidth());
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
            this->shim().DestinationWidth(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DestinationHeight(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DestinationHeight());
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
            this->shim().DestinationHeight(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BackgroundColor(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BackgroundColor(abi_arg_in<Windows::UI::Color> value) noexcept override
    {
        try
        {
            this->shim().BackgroundColor(*reinterpret_cast<const Windows::UI::Color *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsIgnoringHighContrast(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsIgnoringHighContrast());
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
            this->shim().IsIgnoringHighContrast(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BitmapEncoderId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BitmapEncoderId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BitmapEncoderId(GUID value) noexcept override
    {
        try
        {
            this->shim().BitmapEncoderId(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Data::Pdf {

template <typename D> Windows::Foundation::Rect impl_IPdfPageDimensions<D>::MediaBox() const
{
    Windows::Foundation::Rect value {};
    check_hresult(static_cast<const IPdfPageDimensions &>(static_cast<const D &>(*this))->get_MediaBox(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect impl_IPdfPageDimensions<D>::CropBox() const
{
    Windows::Foundation::Rect value {};
    check_hresult(static_cast<const IPdfPageDimensions &>(static_cast<const D &>(*this))->get_CropBox(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect impl_IPdfPageDimensions<D>::BleedBox() const
{
    Windows::Foundation::Rect value {};
    check_hresult(static_cast<const IPdfPageDimensions &>(static_cast<const D &>(*this))->get_BleedBox(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect impl_IPdfPageDimensions<D>::TrimBox() const
{
    Windows::Foundation::Rect value {};
    check_hresult(static_cast<const IPdfPageDimensions &>(static_cast<const D &>(*this))->get_TrimBox(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect impl_IPdfPageDimensions<D>::ArtBox() const
{
    Windows::Foundation::Rect value {};
    check_hresult(static_cast<const IPdfPageDimensions &>(static_cast<const D &>(*this))->get_ArtBox(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect impl_IPdfPageRenderOptions<D>::SourceRect() const
{
    Windows::Foundation::Rect value {};
    check_hresult(static_cast<const IPdfPageRenderOptions &>(static_cast<const D &>(*this))->get_SourceRect(put(value)));
    return value;
}

template <typename D> void impl_IPdfPageRenderOptions<D>::SourceRect(const Windows::Foundation::Rect & value) const
{
    check_hresult(static_cast<const IPdfPageRenderOptions &>(static_cast<const D &>(*this))->put_SourceRect(get(value)));
}

template <typename D> uint32_t impl_IPdfPageRenderOptions<D>::DestinationWidth() const
{
    uint32_t value {};
    check_hresult(static_cast<const IPdfPageRenderOptions &>(static_cast<const D &>(*this))->get_DestinationWidth(&value));
    return value;
}

template <typename D> void impl_IPdfPageRenderOptions<D>::DestinationWidth(uint32_t value) const
{
    check_hresult(static_cast<const IPdfPageRenderOptions &>(static_cast<const D &>(*this))->put_DestinationWidth(value));
}

template <typename D> uint32_t impl_IPdfPageRenderOptions<D>::DestinationHeight() const
{
    uint32_t value {};
    check_hresult(static_cast<const IPdfPageRenderOptions &>(static_cast<const D &>(*this))->get_DestinationHeight(&value));
    return value;
}

template <typename D> void impl_IPdfPageRenderOptions<D>::DestinationHeight(uint32_t value) const
{
    check_hresult(static_cast<const IPdfPageRenderOptions &>(static_cast<const D &>(*this))->put_DestinationHeight(value));
}

template <typename D> Windows::UI::Color impl_IPdfPageRenderOptions<D>::BackgroundColor() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IPdfPageRenderOptions &>(static_cast<const D &>(*this))->get_BackgroundColor(put(value)));
    return value;
}

template <typename D> void impl_IPdfPageRenderOptions<D>::BackgroundColor(const Windows::UI::Color & value) const
{
    check_hresult(static_cast<const IPdfPageRenderOptions &>(static_cast<const D &>(*this))->put_BackgroundColor(get(value)));
}

template <typename D> bool impl_IPdfPageRenderOptions<D>::IsIgnoringHighContrast() const
{
    bool value {};
    check_hresult(static_cast<const IPdfPageRenderOptions &>(static_cast<const D &>(*this))->get_IsIgnoringHighContrast(&value));
    return value;
}

template <typename D> void impl_IPdfPageRenderOptions<D>::IsIgnoringHighContrast(bool value) const
{
    check_hresult(static_cast<const IPdfPageRenderOptions &>(static_cast<const D &>(*this))->put_IsIgnoringHighContrast(value));
}

template <typename D> GUID impl_IPdfPageRenderOptions<D>::BitmapEncoderId() const
{
    GUID value {};
    check_hresult(static_cast<const IPdfPageRenderOptions &>(static_cast<const D &>(*this))->get_BitmapEncoderId(&value));
    return value;
}

template <typename D> void impl_IPdfPageRenderOptions<D>::BitmapEncoderId(GUID value) const
{
    check_hresult(static_cast<const IPdfPageRenderOptions &>(static_cast<const D &>(*this))->put_BitmapEncoderId(value));
}

template <typename D> Windows::Foundation::IAsyncAction impl_IPdfPage<D>::RenderToStreamAsync(const Windows::Storage::Streams::IRandomAccessStream & outputStream) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(static_cast<const IPdfPage &>(static_cast<const D &>(*this))->abi_RenderToStreamAsync(get(outputStream), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IPdfPage<D>::RenderToStreamAsync(const Windows::Storage::Streams::IRandomAccessStream & outputStream, const Windows::Data::Pdf::PdfPageRenderOptions & options) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(static_cast<const IPdfPage &>(static_cast<const D &>(*this))->abi_RenderWithOptionsToStreamAsync(get(outputStream), get(options), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IPdfPage<D>::PreparePageAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(static_cast<const IPdfPage &>(static_cast<const D &>(*this))->abi_PreparePageAsync(put(asyncInfo)));
    return asyncInfo;
}

template <typename D> uint32_t impl_IPdfPage<D>::Index() const
{
    uint32_t value {};
    check_hresult(static_cast<const IPdfPage &>(static_cast<const D &>(*this))->get_Index(&value));
    return value;
}

template <typename D> Windows::Foundation::Size impl_IPdfPage<D>::Size() const
{
    Windows::Foundation::Size value {};
    check_hresult(static_cast<const IPdfPage &>(static_cast<const D &>(*this))->get_Size(put(value)));
    return value;
}

template <typename D> Windows::Data::Pdf::PdfPageDimensions impl_IPdfPage<D>::Dimensions() const
{
    Windows::Data::Pdf::PdfPageDimensions value { nullptr };
    check_hresult(static_cast<const IPdfPage &>(static_cast<const D &>(*this))->get_Dimensions(put(value)));
    return value;
}

template <typename D> Windows::Data::Pdf::PdfPageRotation impl_IPdfPage<D>::Rotation() const
{
    Windows::Data::Pdf::PdfPageRotation value {};
    check_hresult(static_cast<const IPdfPage &>(static_cast<const D &>(*this))->get_Rotation(&value));
    return value;
}

template <typename D> float impl_IPdfPage<D>::PreferredZoom() const
{
    float value {};
    check_hresult(static_cast<const IPdfPage &>(static_cast<const D &>(*this))->get_PreferredZoom(&value));
    return value;
}

template <typename D> Windows::Data::Pdf::PdfPage impl_IPdfDocument<D>::GetPage(uint32_t pageIndex) const
{
    Windows::Data::Pdf::PdfPage pdfPage { nullptr };
    check_hresult(static_cast<const IPdfDocument &>(static_cast<const D &>(*this))->abi_GetPage(pageIndex, put(pdfPage)));
    return pdfPage;
}

template <typename D> uint32_t impl_IPdfDocument<D>::PageCount() const
{
    uint32_t value {};
    check_hresult(static_cast<const IPdfDocument &>(static_cast<const D &>(*this))->get_PageCount(&value));
    return value;
}

template <typename D> bool impl_IPdfDocument<D>::IsPasswordProtected() const
{
    bool value {};
    check_hresult(static_cast<const IPdfDocument &>(static_cast<const D &>(*this))->get_IsPasswordProtected(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> impl_IPdfDocumentStatics<D>::LoadFromFileAsync(const Windows::Storage::IStorageFile & file) const
{
    Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> asyncInfo;
    check_hresult(static_cast<const IPdfDocumentStatics &>(static_cast<const D &>(*this))->abi_LoadFromFileAsync(get(file), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> impl_IPdfDocumentStatics<D>::LoadFromFileAsync(const Windows::Storage::IStorageFile & file, hstring_ref password) const
{
    Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> asyncInfo;
    check_hresult(static_cast<const IPdfDocumentStatics &>(static_cast<const D &>(*this))->abi_LoadFromFileWithPasswordAsync(get(file), get(password), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> impl_IPdfDocumentStatics<D>::LoadFromStreamAsync(const Windows::Storage::Streams::IRandomAccessStream & inputStream) const
{
    Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> asyncInfo;
    check_hresult(static_cast<const IPdfDocumentStatics &>(static_cast<const D &>(*this))->abi_LoadFromStreamAsync(get(inputStream), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> impl_IPdfDocumentStatics<D>::LoadFromStreamAsync(const Windows::Storage::Streams::IRandomAccessStream & inputStream, hstring_ref password) const
{
    Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> asyncInfo;
    check_hresult(static_cast<const IPdfDocumentStatics &>(static_cast<const D &>(*this))->abi_LoadFromStreamWithPasswordAsync(get(inputStream), get(password), put(asyncInfo)));
    return asyncInfo;
}

inline Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> PdfDocument::LoadFromFileAsync(const Windows::Storage::IStorageFile & file)
{
    return get_activation_factory<PdfDocument, IPdfDocumentStatics>().LoadFromFileAsync(file);
}

inline Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> PdfDocument::LoadFromFileAsync(const Windows::Storage::IStorageFile & file, hstring_ref password)
{
    return get_activation_factory<PdfDocument, IPdfDocumentStatics>().LoadFromFileAsync(file, password);
}

inline Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> PdfDocument::LoadFromStreamAsync(const Windows::Storage::Streams::IRandomAccessStream & inputStream)
{
    return get_activation_factory<PdfDocument, IPdfDocumentStatics>().LoadFromStreamAsync(inputStream);
}

inline Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> PdfDocument::LoadFromStreamAsync(const Windows::Storage::Streams::IRandomAccessStream & inputStream, hstring_ref password)
{
    return get_activation_factory<PdfDocument, IPdfDocumentStatics>().LoadFromStreamAsync(inputStream, password);
}

inline PdfPageRenderOptions::PdfPageRenderOptions() :
    PdfPageRenderOptions(activate_instance<PdfPageRenderOptions>())
{}

}

}
