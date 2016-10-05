// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.UI.Xaml.Printing.0.h"
#include "Windows.Graphics.Printing.0.h"
#include "Windows.UI.Xaml.0.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Xaml::Printing {

struct __declspec(uuid("d4b57970-57a0-4209-847c-c093b54bc729")) __declspec(novtable) AddPagesEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::IInspectable * sender, Windows::UI::Xaml::Printing::IAddPagesEventArgs * e) = 0;
};

struct __declspec(uuid("ccb3e9ed-9c11-4e50-ab49-e98086bbfdef")) __declspec(novtable) GetPreviewPageEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::IInspectable * sender, Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs * e) = 0;
};

struct __declspec(uuid("e2e52be5-056c-4420-9795-cb3526ce0c20")) __declspec(novtable) IAddPagesEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PrintTaskOptions(Windows::Graphics::Printing::IPrintTaskOptionsCore ** value) = 0;
};

struct __declspec(uuid("a43d703d-dea9-4df6-a7ed-35049cd485c7")) __declspec(novtable) IGetPreviewPageEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PageNumber(int32_t * value) = 0;
};

struct __declspec(uuid("ed945fd6-79ab-42b7-930a-3d6e09011d21")) __declspec(novtable) IPaginateEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PrintTaskOptions(Windows::Graphics::Printing::IPrintTaskOptionsCore ** value) = 0;
    virtual HRESULT __stdcall get_CurrentPreviewPageNumber(int32_t * value) = 0;
};

struct __declspec(uuid("e44327c3-a999-485b-b1d8-72dc517821e6")) __declspec(novtable) IPrintDocument : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DocumentSource(Windows::Graphics::Printing::IPrintDocumentSource ** value) = 0;
    virtual HRESULT __stdcall add_Paginate(Windows::UI::Xaml::Printing::PaginateEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Paginate(event_token token) = 0;
    virtual HRESULT __stdcall add_GetPreviewPage(Windows::UI::Xaml::Printing::GetPreviewPageEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_GetPreviewPage(event_token token) = 0;
    virtual HRESULT __stdcall add_AddPages(Windows::UI::Xaml::Printing::AddPagesEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_AddPages(event_token token) = 0;
    virtual HRESULT __stdcall abi_AddPage(Windows::UI::Xaml::IUIElement * pageVisual) = 0;
    virtual HRESULT __stdcall abi_AddPagesComplete() = 0;
    virtual HRESULT __stdcall abi_SetPreviewPageCount(int32_t count, winrt::Windows::UI::Xaml::Printing::PreviewPageCountType type) = 0;
    virtual HRESULT __stdcall abi_SetPreviewPage(int32_t pageNumber, Windows::UI::Xaml::IUIElement * pageVisual) = 0;
    virtual HRESULT __stdcall abi_InvalidatePreview() = 0;
};

struct __declspec(uuid("fb87b18f-2606-4a2f-99d4-a7cdbc35d7c7")) __declspec(novtable) IPrintDocumentFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::Printing::IPrintDocument ** instance) = 0;
};

struct __declspec(uuid("fd970a3c-b152-49e0-a6bd-6aa6477e43c7")) __declspec(novtable) IPrintDocumentStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DocumentSourceProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("0cc05b61-811b-4a32-9965-13eb78dbb01b")) __declspec(novtable) PaginateEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::IInspectable * sender, Windows::UI::Xaml::Printing::IPaginateEventArgs * e) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::UI::Xaml::Printing::AddPagesEventArgs> { using default_interface = Windows::UI::Xaml::Printing::IAddPagesEventArgs; };
template <> struct traits<Windows::UI::Xaml::Printing::GetPreviewPageEventArgs> { using default_interface = Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs; };
template <> struct traits<Windows::UI::Xaml::Printing::PaginateEventArgs> { using default_interface = Windows::UI::Xaml::Printing::IPaginateEventArgs; };
template <> struct traits<Windows::UI::Xaml::Printing::PrintDocument> { using default_interface = Windows::UI::Xaml::Printing::IPrintDocument; };

}

namespace Windows::UI::Xaml::Printing {

template <typename T> struct impl_IAddPagesEventArgs;
template <typename T> struct impl_IGetPreviewPageEventArgs;
template <typename T> struct impl_IPaginateEventArgs;
template <typename T> struct impl_IPrintDocument;
template <typename T> struct impl_IPrintDocumentFactory;
template <typename T> struct impl_IPrintDocumentStatics;
template <typename T> struct impl_AddPagesEventHandler;
template <typename T> struct impl_GetPreviewPageEventHandler;
template <typename T> struct impl_PaginateEventHandler;

}

namespace impl {

template <> struct traits<Windows::UI::Xaml::Printing::AddPagesEventHandler>
{
    using abi = ABI::Windows::UI::Xaml::Printing::AddPagesEventHandler;
};

template <> struct traits<Windows::UI::Xaml::Printing::GetPreviewPageEventHandler>
{
    using abi = ABI::Windows::UI::Xaml::Printing::GetPreviewPageEventHandler;
};

template <> struct traits<Windows::UI::Xaml::Printing::IAddPagesEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::Printing::IAddPagesEventArgs;
    template <typename D> using consume = Windows::UI::Xaml::Printing::impl_IAddPagesEventArgs<D>;
};

template <> struct traits<Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs;
    template <typename D> using consume = Windows::UI::Xaml::Printing::impl_IGetPreviewPageEventArgs<D>;
};

template <> struct traits<Windows::UI::Xaml::Printing::IPaginateEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::Printing::IPaginateEventArgs;
    template <typename D> using consume = Windows::UI::Xaml::Printing::impl_IPaginateEventArgs<D>;
};

template <> struct traits<Windows::UI::Xaml::Printing::IPrintDocument>
{
    using abi = ABI::Windows::UI::Xaml::Printing::IPrintDocument;
    template <typename D> using consume = Windows::UI::Xaml::Printing::impl_IPrintDocument<D>;
};

template <> struct traits<Windows::UI::Xaml::Printing::IPrintDocumentFactory>
{
    using abi = ABI::Windows::UI::Xaml::Printing::IPrintDocumentFactory;
    template <typename D> using consume = Windows::UI::Xaml::Printing::impl_IPrintDocumentFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Printing::IPrintDocumentStatics>
{
    using abi = ABI::Windows::UI::Xaml::Printing::IPrintDocumentStatics;
    template <typename D> using consume = Windows::UI::Xaml::Printing::impl_IPrintDocumentStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Printing::PaginateEventHandler>
{
    using abi = ABI::Windows::UI::Xaml::Printing::PaginateEventHandler;
};

template <> struct traits<Windows::UI::Xaml::Printing::AddPagesEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::Printing::AddPagesEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Printing.AddPagesEventArgs"; }
};

template <> struct traits<Windows::UI::Xaml::Printing::GetPreviewPageEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::Printing::GetPreviewPageEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Printing.GetPreviewPageEventArgs"; }
};

template <> struct traits<Windows::UI::Xaml::Printing::PaginateEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::Printing::PaginateEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Printing.PaginateEventArgs"; }
};

template <> struct traits<Windows::UI::Xaml::Printing::PrintDocument>
{
    using abi = ABI::Windows::UI::Xaml::Printing::PrintDocument;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Printing.PrintDocument"; }
};

}

}
