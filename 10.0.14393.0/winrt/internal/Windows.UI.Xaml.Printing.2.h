// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.UI.Xaml.Printing.1.h"
#include "Windows.UI.Xaml.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::UI::Xaml::Printing {

template <typename D>
struct WINRT_EBO impl_IAddPagesEventArgs
{
    Windows::Graphics::Printing::PrintTaskOptions PrintTaskOptions() const;
};

template <typename D>
struct WINRT_EBO impl_IGetPreviewPageEventArgs
{
    int32_t PageNumber() const;
};

template <typename D>
struct WINRT_EBO impl_IPaginateEventArgs
{
    Windows::Graphics::Printing::PrintTaskOptions PrintTaskOptions() const;
    int32_t CurrentPreviewPageNumber() const;
};

template <typename D>
struct WINRT_EBO impl_IPrintDocument
{
    Windows::Graphics::Printing::IPrintDocumentSource DocumentSource() const;
    event_token Paginate(const Windows::UI::Xaml::Printing::PaginateEventHandler & value) const;
    using Paginate_revoker = event_revoker<IPrintDocument>;
    Paginate_revoker Paginate(auto_revoke_t, const Windows::UI::Xaml::Printing::PaginateEventHandler & value) const;
    void Paginate(event_token token) const;
    event_token GetPreviewPage(const Windows::UI::Xaml::Printing::GetPreviewPageEventHandler & value) const;
    using GetPreviewPage_revoker = event_revoker<IPrintDocument>;
    GetPreviewPage_revoker GetPreviewPage(auto_revoke_t, const Windows::UI::Xaml::Printing::GetPreviewPageEventHandler & value) const;
    void GetPreviewPage(event_token token) const;
    event_token AddPages(const Windows::UI::Xaml::Printing::AddPagesEventHandler & value) const;
    using AddPages_revoker = event_revoker<IPrintDocument>;
    AddPages_revoker AddPages(auto_revoke_t, const Windows::UI::Xaml::Printing::AddPagesEventHandler & value) const;
    void AddPages(event_token token) const;
    void AddPage(const Windows::UI::Xaml::UIElement & pageVisual) const;
    void AddPagesComplete() const;
    void SetPreviewPageCount(int32_t count, Windows::UI::Xaml::Printing::PreviewPageCountType type) const;
    void SetPreviewPage(int32_t pageNumber, const Windows::UI::Xaml::UIElement & pageVisual) const;
    void InvalidatePreview() const;
};

template <typename D>
struct WINRT_EBO impl_IPrintDocumentFactory
{
    Windows::UI::Xaml::Printing::PrintDocument CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
struct WINRT_EBO impl_IPrintDocumentStatics
{
    Windows::UI::Xaml::DependencyProperty DocumentSourceProperty() const;
};

struct AddPagesEventHandler : Windows::IUnknown
{
    AddPagesEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<AddPagesEventHandler>(m_ptr); }
    template <typename L> AddPagesEventHandler(L lambda);
    template <typename F> AddPagesEventHandler (F * function);
    template <typename O, typename M> AddPagesEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Printing::AddPagesEventArgs & e) const;
};

struct GetPreviewPageEventHandler : Windows::IUnknown
{
    GetPreviewPageEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<GetPreviewPageEventHandler>(m_ptr); }
    template <typename L> GetPreviewPageEventHandler(L lambda);
    template <typename F> GetPreviewPageEventHandler (F * function);
    template <typename O, typename M> GetPreviewPageEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Printing::GetPreviewPageEventArgs & e) const;
};

struct PaginateEventHandler : Windows::IUnknown
{
    PaginateEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<PaginateEventHandler>(m_ptr); }
    template <typename L> PaginateEventHandler(L lambda);
    template <typename F> PaginateEventHandler (F * function);
    template <typename O, typename M> PaginateEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Printing::PaginateEventArgs & e) const;
};

struct IAddPagesEventArgs :
    Windows::IInspectable,
    impl::consume<IAddPagesEventArgs>
{
    IAddPagesEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAddPagesEventArgs>(m_ptr); }
};

struct IGetPreviewPageEventArgs :
    Windows::IInspectable,
    impl::consume<IGetPreviewPageEventArgs>
{
    IGetPreviewPageEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGetPreviewPageEventArgs>(m_ptr); }
};

struct IPaginateEventArgs :
    Windows::IInspectable,
    impl::consume<IPaginateEventArgs>
{
    IPaginateEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPaginateEventArgs>(m_ptr); }
};

struct IPrintDocument :
    Windows::IInspectable,
    impl::consume<IPrintDocument>
{
    IPrintDocument(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPrintDocument>(m_ptr); }
};

struct IPrintDocumentFactory :
    Windows::IInspectable,
    impl::consume<IPrintDocumentFactory>
{
    IPrintDocumentFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPrintDocumentFactory>(m_ptr); }
};

struct IPrintDocumentStatics :
    Windows::IInspectable,
    impl::consume<IPrintDocumentStatics>
{
    IPrintDocumentStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPrintDocumentStatics>(m_ptr); }
};

}

}
