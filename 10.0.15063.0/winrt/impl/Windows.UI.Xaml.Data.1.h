// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.Xaml.0.h"
#include "winrt/impl/Windows.UI.Xaml.Interop.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.UI.Xaml.Data.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Data {

struct WINRT_EBO IBinding :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBinding>
{
    IBinding(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBinding2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBinding2>
{
    IBinding2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBindingBase :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBindingBase>
{
    IBindingBase(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBindingBaseFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBindingBaseFactory>
{
    IBindingBaseFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBindingExpression :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBindingExpression>
{
    IBindingExpression(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBindingExpressionBase :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBindingExpressionBase>
{
    IBindingExpressionBase(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBindingExpressionBaseFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBindingExpressionBaseFactory>
{
    IBindingExpressionBaseFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBindingExpressionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBindingExpressionFactory>
{
    IBindingExpressionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBindingFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBindingFactory>
{
    IBindingFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBindingOperations :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBindingOperations>
{
    IBindingOperations(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBindingOperationsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBindingOperationsStatics>
{
    IBindingOperationsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICollectionView :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICollectionView>,
    impl::require<ICollectionView, Windows::Foundation::Collections::IIterable<Windows::Foundation::IInspectable>, Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable>, Windows::Foundation::Collections::IVector<Windows::Foundation::IInspectable>>
{
    ICollectionView(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICollectionViewFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICollectionViewFactory>
{
    ICollectionViewFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICollectionViewGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICollectionViewGroup>
{
    ICollectionViewGroup(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICollectionViewSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICollectionViewSource>
{
    ICollectionViewSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICollectionViewSourceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICollectionViewSourceStatics>
{
    ICollectionViewSourceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICurrentChangingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrentChangingEventArgs>
{
    ICurrentChangingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICurrentChangingEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrentChangingEventArgsFactory>
{
    ICurrentChangingEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICustomProperty :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomProperty>
{
    ICustomProperty(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICustomPropertyProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomPropertyProvider>
{
    ICustomPropertyProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IItemIndexRange :
    Windows::Foundation::IInspectable,
    impl::consume_t<IItemIndexRange>
{
    IItemIndexRange(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IItemIndexRangeFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IItemIndexRangeFactory>
{
    IItemIndexRangeFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IItemsRangeInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IItemsRangeInfo>,
    impl::require<IItemsRangeInfo, Windows::Foundation::IClosable>
{
    IItemsRangeInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INotifyPropertyChanged :
    Windows::Foundation::IInspectable,
    impl::consume_t<INotifyPropertyChanged>
{
    INotifyPropertyChanged(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPropertyChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPropertyChangedEventArgs>
{
    IPropertyChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPropertyChangedEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPropertyChangedEventArgsFactory>
{
    IPropertyChangedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRelativeSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRelativeSource>
{
    IRelativeSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRelativeSourceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRelativeSourceFactory>
{
    IRelativeSourceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISelectionInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISelectionInfo>
{
    ISelectionInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISupportIncrementalLoading :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISupportIncrementalLoading>
{
    ISupportIncrementalLoading(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IValueConverter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IValueConverter>
{
    IValueConverter(std::nullptr_t = nullptr) noexcept {}
};

}
