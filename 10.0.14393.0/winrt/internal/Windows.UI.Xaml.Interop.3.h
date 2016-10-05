// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.UI.Xaml.Interop.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::UI::Xaml::Interop {

template <typename H> struct impl_BindableVectorChangedEventHandler : implements<impl_BindableVectorChangedEventHandler<H>, abi<BindableVectorChangedEventHandler>>, H
{
    impl_BindableVectorChangedEventHandler(H && handler) : H(std::forward<H>(handler)) {}

    HRESULT __stdcall abi_Invoke(abi_arg_in<Windows::UI::Xaml::Interop::IBindableObservableVector> vector, abi_arg_in<Windows::IInspectable> e) noexcept override
    {
        try
        {
            (*this)(*reinterpret_cast<const Windows::UI::Xaml::Interop::IBindableObservableVector *>(&vector), *reinterpret_cast<const Windows::IInspectable *>(&e));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename H> struct impl_NotifyCollectionChangedEventHandler : implements<impl_NotifyCollectionChangedEventHandler<H>, abi<NotifyCollectionChangedEventHandler>>, H
{
    impl_NotifyCollectionChangedEventHandler(H && handler) : H(std::forward<H>(handler)) {}

    HRESULT __stdcall abi_Invoke(abi_arg_in<Windows::IInspectable> sender, abi_arg_in<Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs> e) noexcept override
    {
        try
        {
            (*this)(*reinterpret_cast<const Windows::IInspectable *>(&sender), *reinterpret_cast<const Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs *>(&e));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::UI::Xaml::Interop {

struct WINRT_EBO NotifyCollectionChangedEventArgs :
    Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs
{
    NotifyCollectionChangedEventArgs(std::nullptr_t) noexcept {}
    NotifyCollectionChangedEventArgs(Windows::UI::Xaml::Interop::NotifyCollectionChangedAction action, const Windows::UI::Xaml::Interop::IBindableVector & newItems, const Windows::UI::Xaml::Interop::IBindableVector & oldItems, int32_t newIndex, int32_t oldIndex);
};

}

}
