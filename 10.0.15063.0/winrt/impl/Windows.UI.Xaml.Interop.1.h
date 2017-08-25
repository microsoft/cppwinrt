// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.Xaml.Interop.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Interop {

struct WINRT_EBO IBindableIterable :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBindableIterable>
{
    IBindableIterable(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBindableIterator :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBindableIterator>
{
    IBindableIterator(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBindableObservableVector :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBindableObservableVector>,
    impl::require<IBindableObservableVector, Windows::UI::Xaml::Interop::IBindableIterable, Windows::UI::Xaml::Interop::IBindableVector>
{
    IBindableObservableVector(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBindableVector :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBindableVector>,
    impl::require<IBindableVector, Windows::UI::Xaml::Interop::IBindableIterable>
{
    IBindableVector(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBindableVectorView :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBindableVectorView>,
    impl::require<IBindableVectorView, Windows::UI::Xaml::Interop::IBindableIterable>
{
    IBindableVectorView(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INotifyCollectionChanged :
    Windows::Foundation::IInspectable,
    impl::consume_t<INotifyCollectionChanged>
{
    INotifyCollectionChanged(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INotifyCollectionChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<INotifyCollectionChangedEventArgs>
{
    INotifyCollectionChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INotifyCollectionChangedEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<INotifyCollectionChangedEventArgsFactory>
{
    INotifyCollectionChangedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

}
