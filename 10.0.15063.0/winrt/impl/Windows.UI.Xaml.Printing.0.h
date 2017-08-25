// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Graphics::Printing {

struct IPrintDocumentSource;
struct PrintTaskOptions;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml {

struct DependencyProperty;
struct UIElement;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Printing {

enum class PreviewPageCountType
{
    Final = 0,
    Intermediate = 1,
};

struct IAddPagesEventArgs;
struct IGetPreviewPageEventArgs;
struct IPaginateEventArgs;
struct IPrintDocument;
struct IPrintDocumentFactory;
struct IPrintDocumentStatics;
struct AddPagesEventArgs;
struct GetPreviewPageEventArgs;
struct PaginateEventArgs;
struct PrintDocument;
struct AddPagesEventHandler;
struct GetPreviewPageEventHandler;
struct PaginateEventHandler;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Xaml::Printing::IAddPagesEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Printing::IPaginateEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Printing::IPrintDocument>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Printing::IPrintDocumentFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Printing::IPrintDocumentStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Printing::AddPagesEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Printing::GetPreviewPageEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Printing::PaginateEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Printing::PrintDocument>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Printing::PreviewPageCountType>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Printing::AddPagesEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::Printing::GetPreviewPageEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::Printing::PaginateEventHandler>{ using type = delegate_category; };
template <> struct name<Windows::UI::Xaml::Printing::IAddPagesEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Printing.IAddPagesEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Printing.IGetPreviewPageEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Printing::IPaginateEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Printing.IPaginateEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Printing::IPrintDocument>{ static constexpr auto & value{ L"Windows.UI.Xaml.Printing.IPrintDocument" }; };
template <> struct name<Windows::UI::Xaml::Printing::IPrintDocumentFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Printing.IPrintDocumentFactory" }; };
template <> struct name<Windows::UI::Xaml::Printing::IPrintDocumentStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Printing.IPrintDocumentStatics" }; };
template <> struct name<Windows::UI::Xaml::Printing::AddPagesEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Printing.AddPagesEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Printing::GetPreviewPageEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Printing.GetPreviewPageEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Printing::PaginateEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Printing.PaginateEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Printing::PrintDocument>{ static constexpr auto & value{ L"Windows.UI.Xaml.Printing.PrintDocument" }; };
template <> struct name<Windows::UI::Xaml::Printing::PreviewPageCountType>{ static constexpr auto & value{ L"Windows.UI.Xaml.Printing.PreviewPageCountType" }; };
template <> struct name<Windows::UI::Xaml::Printing::AddPagesEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Printing.AddPagesEventHandler" }; };
template <> struct name<Windows::UI::Xaml::Printing::GetPreviewPageEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Printing.GetPreviewPageEventHandler" }; };
template <> struct name<Windows::UI::Xaml::Printing::PaginateEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Printing.PaginateEventHandler" }; };
template <> struct guid<Windows::UI::Xaml::Printing::IAddPagesEventArgs>{ static constexpr GUID value{ 0xE2E52BE5,0x056C,0x4420,{ 0x97,0x95,0xCB,0x35,0x26,0xCE,0x0C,0x20 } }; };
template <> struct guid<Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs>{ static constexpr GUID value{ 0xA43D703D,0xDEA9,0x4DF6,{ 0xA7,0xED,0x35,0x04,0x9C,0xD4,0x85,0xC7 } }; };
template <> struct guid<Windows::UI::Xaml::Printing::IPaginateEventArgs>{ static constexpr GUID value{ 0xED945FD6,0x79AB,0x42B7,{ 0x93,0x0A,0x3D,0x6E,0x09,0x01,0x1D,0x21 } }; };
template <> struct guid<Windows::UI::Xaml::Printing::IPrintDocument>{ static constexpr GUID value{ 0xE44327C3,0xA999,0x485B,{ 0xB1,0xD8,0x72,0xDC,0x51,0x78,0x21,0xE6 } }; };
template <> struct guid<Windows::UI::Xaml::Printing::IPrintDocumentFactory>{ static constexpr GUID value{ 0xFB87B18F,0x2606,0x4A2F,{ 0x99,0xD4,0xA7,0xCD,0xBC,0x35,0xD7,0xC7 } }; };
template <> struct guid<Windows::UI::Xaml::Printing::IPrintDocumentStatics>{ static constexpr GUID value{ 0xFD970A3C,0xB152,0x49E0,{ 0xA6,0xBD,0x6A,0xA6,0x47,0x7E,0x43,0xC7 } }; };
template <> struct guid<Windows::UI::Xaml::Printing::AddPagesEventHandler>{ static constexpr GUID value{ 0xD4B57970,0x57A0,0x4209,{ 0x84,0x7C,0xC0,0x93,0xB5,0x4B,0xC7,0x29 } }; };
template <> struct guid<Windows::UI::Xaml::Printing::GetPreviewPageEventHandler>{ static constexpr GUID value{ 0xCCB3E9ED,0x9C11,0x4E50,{ 0xAB,0x49,0xE9,0x80,0x86,0xBB,0xFD,0xEF } }; };
template <> struct guid<Windows::UI::Xaml::Printing::PaginateEventHandler>{ static constexpr GUID value{ 0x0CC05B61,0x811B,0x4A32,{ 0x99,0x65,0x13,0xEB,0x78,0xDB,0xB0,0x1B } }; };
template <> struct default_interface<Windows::UI::Xaml::Printing::AddPagesEventArgs>{ using type = Windows::UI::Xaml::Printing::IAddPagesEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Printing::GetPreviewPageEventArgs>{ using type = Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Printing::PaginateEventArgs>{ using type = Windows::UI::Xaml::Printing::IPaginateEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Printing::PrintDocument>{ using type = Windows::UI::Xaml::Printing::IPrintDocument; };

template <typename D>
struct consume_Windows_UI_Xaml_Printing_IAddPagesEventArgs
{
    Windows::Graphics::Printing::PrintTaskOptions PrintTaskOptions() const;
};
template <> struct consume<Windows::UI::Xaml::Printing::IAddPagesEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Printing_IAddPagesEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Printing_IGetPreviewPageEventArgs
{
    int32_t PageNumber() const;
};
template <> struct consume<Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Printing_IGetPreviewPageEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Printing_IPaginateEventArgs
{
    Windows::Graphics::Printing::PrintTaskOptions PrintTaskOptions() const;
    int32_t CurrentPreviewPageNumber() const;
};
template <> struct consume<Windows::UI::Xaml::Printing::IPaginateEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Printing_IPaginateEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Printing_IPrintDocument
{
    Windows::Graphics::Printing::IPrintDocumentSource DocumentSource() const;
    event_token Paginate(Windows::UI::Xaml::Printing::PaginateEventHandler const& value) const;
    using Paginate_revoker = event_revoker<Windows::UI::Xaml::Printing::IPrintDocument>;
    Paginate_revoker Paginate(auto_revoke_t, Windows::UI::Xaml::Printing::PaginateEventHandler const& value) const;
    void Paginate(event_token const& token) const;
    event_token GetPreviewPage(Windows::UI::Xaml::Printing::GetPreviewPageEventHandler const& value) const;
    using GetPreviewPage_revoker = event_revoker<Windows::UI::Xaml::Printing::IPrintDocument>;
    GetPreviewPage_revoker GetPreviewPage(auto_revoke_t, Windows::UI::Xaml::Printing::GetPreviewPageEventHandler const& value) const;
    void GetPreviewPage(event_token const& token) const;
    event_token AddPages(Windows::UI::Xaml::Printing::AddPagesEventHandler const& value) const;
    using AddPages_revoker = event_revoker<Windows::UI::Xaml::Printing::IPrintDocument>;
    AddPages_revoker AddPages(auto_revoke_t, Windows::UI::Xaml::Printing::AddPagesEventHandler const& value) const;
    void AddPages(event_token const& token) const;
    void AddPage(Windows::UI::Xaml::UIElement const& pageVisual) const;
    void AddPagesComplete() const;
    void SetPreviewPageCount(int32_t count, Windows::UI::Xaml::Printing::PreviewPageCountType const& type) const;
    void SetPreviewPage(int32_t pageNumber, Windows::UI::Xaml::UIElement const& pageVisual) const;
    void InvalidatePreview() const;
};
template <> struct consume<Windows::UI::Xaml::Printing::IPrintDocument> { template <typename D> using type = consume_Windows_UI_Xaml_Printing_IPrintDocument<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Printing_IPrintDocumentFactory
{
    Windows::UI::Xaml::Printing::PrintDocument CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Printing::IPrintDocumentFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Printing_IPrintDocumentFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Printing_IPrintDocumentStatics
{
    Windows::UI::Xaml::DependencyProperty DocumentSourceProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Printing::IPrintDocumentStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Printing_IPrintDocumentStatics<D>; };

template <> struct abi<Windows::UI::Xaml::Printing::IAddPagesEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PrintTaskOptions(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PageNumber(int32_t* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Printing::IPaginateEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PrintTaskOptions(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CurrentPreviewPageNumber(int32_t* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Printing::IPrintDocument>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DocumentSource(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_Paginate(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Paginate(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_GetPreviewPage(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_GetPreviewPage(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_AddPages(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_AddPages(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall AddPage(::IUnknown* pageVisual) = 0;
    virtual HRESULT __stdcall AddPagesComplete() = 0;
    virtual HRESULT __stdcall SetPreviewPageCount(int32_t count, abi_t<Windows::UI::Xaml::Printing::PreviewPageCountType> type) = 0;
    virtual HRESULT __stdcall SetPreviewPage(int32_t pageNumber, ::IUnknown* pageVisual) = 0;
    virtual HRESULT __stdcall InvalidatePreview() = 0;
};};

template <> struct abi<Windows::UI::Xaml::Printing::IPrintDocumentFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Printing::IPrintDocumentStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DocumentSourceProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Printing::AddPagesEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Printing::GetPreviewPageEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Printing::PaginateEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

}
