// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Storage {

struct IStorageFile;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStream;

}

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Windows::Data::Pdf {

enum class PdfPageRotation
{
    Normal = 0,
    Rotate90 = 1,
    Rotate180 = 2,
    Rotate270 = 3,
};

struct IPdfDocument;
struct IPdfDocumentStatics;
struct IPdfPage;
struct IPdfPageDimensions;
struct IPdfPageRenderOptions;
struct PdfDocument;
struct PdfPage;
struct PdfPageDimensions;
struct PdfPageRenderOptions;

}

namespace winrt::impl {

template <> struct category<Windows::Data::Pdf::IPdfDocument>{ using type = interface_category; };
template <> struct category<Windows::Data::Pdf::IPdfDocumentStatics>{ using type = interface_category; };
template <> struct category<Windows::Data::Pdf::IPdfPage>{ using type = interface_category; };
template <> struct category<Windows::Data::Pdf::IPdfPageDimensions>{ using type = interface_category; };
template <> struct category<Windows::Data::Pdf::IPdfPageRenderOptions>{ using type = interface_category; };
template <> struct category<Windows::Data::Pdf::PdfDocument>{ using type = class_category; };
template <> struct category<Windows::Data::Pdf::PdfPage>{ using type = class_category; };
template <> struct category<Windows::Data::Pdf::PdfPageDimensions>{ using type = class_category; };
template <> struct category<Windows::Data::Pdf::PdfPageRenderOptions>{ using type = class_category; };
template <> struct category<Windows::Data::Pdf::PdfPageRotation>{ using type = enum_category; };
template <> struct name<Windows::Data::Pdf::IPdfDocument>{ static constexpr auto & value{ L"Windows.Data.Pdf.IPdfDocument" }; };
template <> struct name<Windows::Data::Pdf::IPdfDocumentStatics>{ static constexpr auto & value{ L"Windows.Data.Pdf.IPdfDocumentStatics" }; };
template <> struct name<Windows::Data::Pdf::IPdfPage>{ static constexpr auto & value{ L"Windows.Data.Pdf.IPdfPage" }; };
template <> struct name<Windows::Data::Pdf::IPdfPageDimensions>{ static constexpr auto & value{ L"Windows.Data.Pdf.IPdfPageDimensions" }; };
template <> struct name<Windows::Data::Pdf::IPdfPageRenderOptions>{ static constexpr auto & value{ L"Windows.Data.Pdf.IPdfPageRenderOptions" }; };
template <> struct name<Windows::Data::Pdf::PdfDocument>{ static constexpr auto & value{ L"Windows.Data.Pdf.PdfDocument" }; };
template <> struct name<Windows::Data::Pdf::PdfPage>{ static constexpr auto & value{ L"Windows.Data.Pdf.PdfPage" }; };
template <> struct name<Windows::Data::Pdf::PdfPageDimensions>{ static constexpr auto & value{ L"Windows.Data.Pdf.PdfPageDimensions" }; };
template <> struct name<Windows::Data::Pdf::PdfPageRenderOptions>{ static constexpr auto & value{ L"Windows.Data.Pdf.PdfPageRenderOptions" }; };
template <> struct name<Windows::Data::Pdf::PdfPageRotation>{ static constexpr auto & value{ L"Windows.Data.Pdf.PdfPageRotation" }; };
template <> struct guid<Windows::Data::Pdf::IPdfDocument>{ static constexpr GUID value{ 0xAC7EBEDD,0x80FA,0x4089,{ 0x84,0x6E,0x81,0xB7,0x7F,0xF5,0xA8,0x6C } }; };
template <> struct guid<Windows::Data::Pdf::IPdfDocumentStatics>{ static constexpr GUID value{ 0x433A0B5F,0xC007,0x4788,{ 0x90,0xF2,0x08,0x14,0x3D,0x92,0x25,0x99 } }; };
template <> struct guid<Windows::Data::Pdf::IPdfPage>{ static constexpr GUID value{ 0x9DB4B0C8,0x5320,0x4CFC,{ 0xAD,0x76,0x49,0x3F,0xDA,0xD0,0xE5,0x94 } }; };
template <> struct guid<Windows::Data::Pdf::IPdfPageDimensions>{ static constexpr GUID value{ 0x22170471,0x313E,0x44E8,{ 0x83,0x5D,0x63,0xA3,0xE7,0x62,0x4A,0x10 } }; };
template <> struct guid<Windows::Data::Pdf::IPdfPageRenderOptions>{ static constexpr GUID value{ 0x3C98056F,0xB7CF,0x4C29,{ 0x9A,0x04,0x52,0xD9,0x02,0x67,0xF4,0x25 } }; };
template <> struct default_interface<Windows::Data::Pdf::PdfDocument>{ using type = Windows::Data::Pdf::IPdfDocument; };
template <> struct default_interface<Windows::Data::Pdf::PdfPage>{ using type = Windows::Data::Pdf::IPdfPage; };
template <> struct default_interface<Windows::Data::Pdf::PdfPageDimensions>{ using type = Windows::Data::Pdf::IPdfPageDimensions; };
template <> struct default_interface<Windows::Data::Pdf::PdfPageRenderOptions>{ using type = Windows::Data::Pdf::IPdfPageRenderOptions; };

template <typename D>
struct consume_Windows_Data_Pdf_IPdfDocument
{
    Windows::Data::Pdf::PdfPage GetPage(uint32_t pageIndex) const;
    uint32_t PageCount() const;
    bool IsPasswordProtected() const;
};
template <> struct consume<Windows::Data::Pdf::IPdfDocument> { template <typename D> using type = consume_Windows_Data_Pdf_IPdfDocument<D>; };

template <typename D>
struct consume_Windows_Data_Pdf_IPdfDocumentStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> LoadFromFileAsync(Windows::Storage::IStorageFile const& file) const;
    Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> LoadFromFileAsync(Windows::Storage::IStorageFile const& file, param::hstring const& password) const;
    Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> LoadFromStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& inputStream) const;
    Windows::Foundation::IAsyncOperation<Windows::Data::Pdf::PdfDocument> LoadFromStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& inputStream, param::hstring const& password) const;
};
template <> struct consume<Windows::Data::Pdf::IPdfDocumentStatics> { template <typename D> using type = consume_Windows_Data_Pdf_IPdfDocumentStatics<D>; };

template <typename D>
struct consume_Windows_Data_Pdf_IPdfPage
{
    Windows::Foundation::IAsyncAction RenderToStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& outputStream) const;
    Windows::Foundation::IAsyncAction RenderToStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& outputStream, Windows::Data::Pdf::PdfPageRenderOptions const& options) const;
    Windows::Foundation::IAsyncAction PreparePageAsync() const;
    uint32_t Index() const;
    Windows::Foundation::Size Size() const;
    Windows::Data::Pdf::PdfPageDimensions Dimensions() const;
    Windows::Data::Pdf::PdfPageRotation Rotation() const;
    float PreferredZoom() const;
};
template <> struct consume<Windows::Data::Pdf::IPdfPage> { template <typename D> using type = consume_Windows_Data_Pdf_IPdfPage<D>; };

template <typename D>
struct consume_Windows_Data_Pdf_IPdfPageDimensions
{
    Windows::Foundation::Rect MediaBox() const;
    Windows::Foundation::Rect CropBox() const;
    Windows::Foundation::Rect BleedBox() const;
    Windows::Foundation::Rect TrimBox() const;
    Windows::Foundation::Rect ArtBox() const;
};
template <> struct consume<Windows::Data::Pdf::IPdfPageDimensions> { template <typename D> using type = consume_Windows_Data_Pdf_IPdfPageDimensions<D>; };

template <typename D>
struct consume_Windows_Data_Pdf_IPdfPageRenderOptions
{
    Windows::Foundation::Rect SourceRect() const;
    void SourceRect(Windows::Foundation::Rect const& value) const;
    uint32_t DestinationWidth() const;
    void DestinationWidth(uint32_t value) const;
    uint32_t DestinationHeight() const;
    void DestinationHeight(uint32_t value) const;
    Windows::UI::Color BackgroundColor() const;
    void BackgroundColor(Windows::UI::Color const& value) const;
    bool IsIgnoringHighContrast() const;
    void IsIgnoringHighContrast(bool value) const;
    GUID BitmapEncoderId() const;
    void BitmapEncoderId(GUID const& value) const;
};
template <> struct consume<Windows::Data::Pdf::IPdfPageRenderOptions> { template <typename D> using type = consume_Windows_Data_Pdf_IPdfPageRenderOptions<D>; };

template <> struct abi<Windows::Data::Pdf::IPdfDocument>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetPage(uint32_t pageIndex, ::IUnknown** pdfPage) = 0;
    virtual HRESULT __stdcall get_PageCount(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_IsPasswordProtected(bool* value) = 0;
};};

template <> struct abi<Windows::Data::Pdf::IPdfDocumentStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall LoadFromFileAsync(::IUnknown* file, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall LoadFromFileWithPasswordAsync(::IUnknown* file, HSTRING password, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall LoadFromStreamAsync(::IUnknown* inputStream, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall LoadFromStreamWithPasswordAsync(::IUnknown* inputStream, HSTRING password, ::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Data::Pdf::IPdfPage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RenderToStreamAsync(::IUnknown* outputStream, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall RenderWithOptionsToStreamAsync(::IUnknown* outputStream, ::IUnknown* options, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall PreparePageAsync(::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall get_Index(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Size(abi_t<Windows::Foundation::Size>* value) = 0;
    virtual HRESULT __stdcall get_Dimensions(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Rotation(abi_t<Windows::Data::Pdf::PdfPageRotation>* value) = 0;
    virtual HRESULT __stdcall get_PreferredZoom(float* value) = 0;
};};

template <> struct abi<Windows::Data::Pdf::IPdfPageDimensions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MediaBox(abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall get_CropBox(abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall get_BleedBox(abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall get_TrimBox(abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall get_ArtBox(abi_t<Windows::Foundation::Rect>* value) = 0;
};};

template <> struct abi<Windows::Data::Pdf::IPdfPageRenderOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SourceRect(abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall put_SourceRect(abi_t<Windows::Foundation::Rect> value) = 0;
    virtual HRESULT __stdcall get_DestinationWidth(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_DestinationWidth(uint32_t value) = 0;
    virtual HRESULT __stdcall get_DestinationHeight(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_DestinationHeight(uint32_t value) = 0;
    virtual HRESULT __stdcall get_BackgroundColor(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall put_BackgroundColor(abi_t<Windows::UI::Color> value) = 0;
    virtual HRESULT __stdcall get_IsIgnoringHighContrast(bool* value) = 0;
    virtual HRESULT __stdcall put_IsIgnoringHighContrast(bool value) = 0;
    virtual HRESULT __stdcall get_BitmapEncoderId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall put_BitmapEncoderId(abi_t<GUID> value) = 0;
};};

}
