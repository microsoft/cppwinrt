// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Graphics.Printing.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Printing.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Printing {

struct AddPagesEventHandler : Windows::Foundation::IUnknown
{
    AddPagesEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> AddPagesEventHandler(L lambda);
    template <typename F> AddPagesEventHandler(F* function);
    template <typename O, typename M> AddPagesEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Printing::AddPagesEventArgs const& e) const;
};

struct GetPreviewPageEventHandler : Windows::Foundation::IUnknown
{
    GetPreviewPageEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> GetPreviewPageEventHandler(L lambda);
    template <typename F> GetPreviewPageEventHandler(F* function);
    template <typename O, typename M> GetPreviewPageEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Printing::GetPreviewPageEventArgs const& e) const;
};

struct PaginateEventHandler : Windows::Foundation::IUnknown
{
    PaginateEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> PaginateEventHandler(L lambda);
    template <typename F> PaginateEventHandler(F* function);
    template <typename O, typename M> PaginateEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Printing::PaginateEventArgs const& e) const;
};

struct WINRT_EBO AddPagesEventArgs :
    Windows::UI::Xaml::Printing::IAddPagesEventArgs
{
    AddPagesEventArgs(std::nullptr_t) noexcept {}
    AddPagesEventArgs();
};

struct WINRT_EBO GetPreviewPageEventArgs :
    Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs
{
    GetPreviewPageEventArgs(std::nullptr_t) noexcept {}
    GetPreviewPageEventArgs();
};

struct WINRT_EBO PaginateEventArgs :
    Windows::UI::Xaml::Printing::IPaginateEventArgs
{
    PaginateEventArgs(std::nullptr_t) noexcept {}
    PaginateEventArgs();
};

struct WINRT_EBO PrintDocument :
    Windows::UI::Xaml::Printing::IPrintDocument,
    impl::base<PrintDocument, Windows::UI::Xaml::DependencyObject>,
    impl::require<PrintDocument, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    PrintDocument(std::nullptr_t) noexcept {}
    PrintDocument();
    static Windows::UI::Xaml::DependencyProperty DocumentSourceProperty();
};

}
