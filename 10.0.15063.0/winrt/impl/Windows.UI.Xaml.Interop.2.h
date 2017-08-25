// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.Xaml.Interop.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Interop {

struct BindableVectorChangedEventHandler : Windows::Foundation::IUnknown
{
    BindableVectorChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> BindableVectorChangedEventHandler(L lambda);
    template <typename F> BindableVectorChangedEventHandler(F* function);
    template <typename O, typename M> BindableVectorChangedEventHandler(O* object, M method);
    void operator()(Windows::UI::Xaml::Interop::IBindableObservableVector const& vector, Windows::Foundation::IInspectable const& e) const;
};

struct NotifyCollectionChangedEventHandler : Windows::Foundation::IUnknown
{
    NotifyCollectionChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> NotifyCollectionChangedEventHandler(L lambda);
    template <typename F> NotifyCollectionChangedEventHandler(F* function);
    template <typename O, typename M> NotifyCollectionChangedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs const& e) const;
};

struct TypeName
{
    hstring Name;
    Windows::UI::Xaml::Interop::TypeKind Kind;
};

struct WINRT_EBO NotifyCollectionChangedEventArgs :
    Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs
{
    NotifyCollectionChangedEventArgs(std::nullptr_t) noexcept {}
    NotifyCollectionChangedEventArgs(Windows::UI::Xaml::Interop::NotifyCollectionChangedAction const& action, Windows::UI::Xaml::Interop::IBindableVector const& newItems, Windows::UI::Xaml::Interop::IBindableVector const& oldItems, int32_t newIndex, int32_t oldIndex);
};

}
