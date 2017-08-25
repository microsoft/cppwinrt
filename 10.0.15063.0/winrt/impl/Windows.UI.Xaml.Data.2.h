// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Interop.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.UI.Xaml.Data.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Data {

struct CurrentChangingEventHandler : Windows::Foundation::IUnknown
{
    CurrentChangingEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> CurrentChangingEventHandler(L lambda);
    template <typename F> CurrentChangingEventHandler(F* function);
    template <typename O, typename M> CurrentChangingEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Data::CurrentChangingEventArgs const& e) const;
};

struct PropertyChangedEventHandler : Windows::Foundation::IUnknown
{
    PropertyChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> PropertyChangedEventHandler(L lambda);
    template <typename F> PropertyChangedEventHandler(F* function);
    template <typename O, typename M> PropertyChangedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Data::PropertyChangedEventArgs const& e) const;
};

struct LoadMoreItemsResult
{
    uint32_t Count;
};

struct WINRT_EBO Binding :
    Windows::UI::Xaml::Data::IBinding,
    impl::base<Binding, Windows::UI::Xaml::Data::BindingBase, Windows::UI::Xaml::DependencyObject>,
    impl::require<Binding, Windows::UI::Xaml::Data::IBinding2, Windows::UI::Xaml::Data::IBindingBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    Binding(std::nullptr_t) noexcept {}
    Binding();
};

struct WINRT_EBO BindingBase :
    Windows::UI::Xaml::Data::IBindingBase,
    impl::base<BindingBase, Windows::UI::Xaml::DependencyObject>,
    impl::require<BindingBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    BindingBase(std::nullptr_t) noexcept {}
    BindingBase();
};

struct WINRT_EBO BindingExpression :
    Windows::UI::Xaml::Data::IBindingExpression,
    impl::base<BindingExpression, Windows::UI::Xaml::Data::BindingExpressionBase>,
    impl::require<BindingExpression, Windows::UI::Xaml::Data::IBindingExpressionBase>
{
    BindingExpression(std::nullptr_t) noexcept {}
};

struct WINRT_EBO BindingExpressionBase :
    Windows::UI::Xaml::Data::IBindingExpressionBase
{
    BindingExpressionBase(std::nullptr_t) noexcept {}
};

struct WINRT_EBO BindingOperations :
    Windows::UI::Xaml::Data::IBindingOperations
{
    BindingOperations(std::nullptr_t) noexcept {}
    static void SetBinding(Windows::UI::Xaml::DependencyObject const& target, Windows::UI::Xaml::DependencyProperty const& dp, Windows::UI::Xaml::Data::BindingBase const& binding);
};

struct WINRT_EBO CollectionViewSource :
    Windows::UI::Xaml::Data::ICollectionViewSource,
    impl::base<CollectionViewSource, Windows::UI::Xaml::DependencyObject>,
    impl::require<CollectionViewSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    CollectionViewSource(std::nullptr_t) noexcept {}
    CollectionViewSource();
    static Windows::UI::Xaml::DependencyProperty SourceProperty();
    static Windows::UI::Xaml::DependencyProperty ViewProperty();
    static Windows::UI::Xaml::DependencyProperty IsSourceGroupedProperty();
    static Windows::UI::Xaml::DependencyProperty ItemsPathProperty();
};

struct WINRT_EBO CurrentChangingEventArgs :
    Windows::UI::Xaml::Data::ICurrentChangingEventArgs
{
    CurrentChangingEventArgs(std::nullptr_t) noexcept {}
    CurrentChangingEventArgs();
    CurrentChangingEventArgs(bool isCancelable);
};

struct WINRT_EBO ItemIndexRange :
    Windows::UI::Xaml::Data::IItemIndexRange
{
    ItemIndexRange(std::nullptr_t) noexcept {}
    ItemIndexRange(int32_t firstIndex, uint32_t length);
};

struct WINRT_EBO PropertyChangedEventArgs :
    Windows::UI::Xaml::Data::IPropertyChangedEventArgs
{
    PropertyChangedEventArgs(std::nullptr_t) noexcept {}
    PropertyChangedEventArgs(param::hstring const& name);
};

struct WINRT_EBO RelativeSource :
    Windows::UI::Xaml::Data::IRelativeSource,
    impl::base<RelativeSource, Windows::UI::Xaml::DependencyObject>,
    impl::require<RelativeSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    RelativeSource(std::nullptr_t) noexcept {}
    RelativeSource();
};

}
