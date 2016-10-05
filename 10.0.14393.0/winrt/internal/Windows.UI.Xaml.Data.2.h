// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.UI.Xaml.Data.1.h"
#include "Windows.Foundation.2.h"
#include "Windows.UI.Xaml.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_c50898f6_c536_5f47_8583_8b2c2438a13b
#define WINRT_GENERIC_c50898f6_c536_5f47_8583_8b2c2438a13b
template <> struct __declspec(uuid("c50898f6-c536-5f47-8583-8b2c2438a13b")) __declspec(novtable) EventHandler<Windows::IInspectable> : impl_EventHandler<Windows::IInspectable> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_a6487363_b074_5c60_ab16_866dce4ee54d
#define WINRT_GENERIC_a6487363_b074_5c60_ab16_866dce4ee54d
template <> struct __declspec(uuid("a6487363-b074-5c60-ab16-866dce4ee54d")) __declspec(novtable) IVectorView<Windows::IInspectable> : impl_IVectorView<Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_b32bdca4_5e52_5b27_bc5d_d66a1a268c2a
#define WINRT_GENERIC_b32bdca4_5e52_5b27_bc5d_d66a1a268c2a
template <> struct __declspec(uuid("b32bdca4-5e52-5b27-bc5d-d66a1a268c2a")) __declspec(novtable) IVector<Windows::IInspectable> : impl_IVector<Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_7b81c56a_0985_518d_baa9_0da9ae009f65
#define WINRT_GENERIC_7b81c56a_0985_518d_baa9_0da9ae009f65
template <> struct __declspec(uuid("7b81c56a-0985-518d-baa9-0da9ae009f65")) __declspec(novtable) IObservableVector<Windows::IInspectable> : impl_IObservableVector<Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_092b849b_60b1_52be_a44a_6fe8e933cbe4
#define WINRT_GENERIC_092b849b_60b1_52be_a44a_6fe8e933cbe4
template <> struct __declspec(uuid("092b849b-60b1-52be-a44a-6fe8e933cbe4")) __declspec(novtable) IIterable<Windows::IInspectable> : impl_IIterable<Windows::IInspectable> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_c788089d_37ab_5ba2_b865_5a309acdfc4d
#define WINRT_GENERIC_c788089d_37ab_5ba2_b865_5a309acdfc4d
template <> struct __declspec(uuid("c788089d-37ab-5ba2-b865-5a309acdfc4d")) __declspec(novtable) IAsyncOperation<Windows::UI::Xaml::Data::LoadMoreItemsResult> : impl_IAsyncOperation<Windows::UI::Xaml::Data::LoadMoreItemsResult> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_d0b26b06_16e8_5767_a60b_ee3e32e43dfb
#define WINRT_GENERIC_d0b26b06_16e8_5767_a60b_ee3e32e43dfb
template <> struct __declspec(uuid("d0b26b06-16e8-5767-a60b-ee3e32e43dfb")) __declspec(novtable) IVectorView<Windows::UI::Xaml::Data::ItemIndexRange> : impl_IVectorView<Windows::UI::Xaml::Data::ItemIndexRange> {};
#endif

#ifndef WINRT_GENERIC_44a94f2d_04f8_5091_b336_be7892dd10be
#define WINRT_GENERIC_44a94f2d_04f8_5091_b336_be7892dd10be
template <> struct __declspec(uuid("44a94f2d-04f8-5091-b336-be7892dd10be")) __declspec(novtable) IIterator<Windows::IInspectable> : impl_IIterator<Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_b423a801_d35e_56b9_813b_00889536cb98
#define WINRT_GENERIC_b423a801_d35e_56b9_813b_00889536cb98
template <> struct __declspec(uuid("b423a801-d35e-56b9-813b-00889536cb98")) __declspec(novtable) VectorChangedEventHandler<Windows::IInspectable> : impl_VectorChangedEventHandler<Windows::IInspectable> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_10fb738b_a63b_506e_9ed7_2eab37915221
#define WINRT_GENERIC_10fb738b_a63b_506e_9ed7_2eab37915221
template <> struct __declspec(uuid("10fb738b-a63b-506e-9ed7-2eab37915221")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::UI::Xaml::Data::LoadMoreItemsResult> : impl_AsyncOperationCompletedHandler<Windows::UI::Xaml::Data::LoadMoreItemsResult> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_9c223a26_0c81_59f6_a909_ba4966b4cf24
#define WINRT_GENERIC_9c223a26_0c81_59f6_a909_ba4966b4cf24
template <> struct __declspec(uuid("9c223a26-0c81-59f6-a909-ba4966b4cf24")) __declspec(novtable) IIterator<Windows::UI::Xaml::Data::ItemIndexRange> : impl_IIterator<Windows::UI::Xaml::Data::ItemIndexRange> {};
#endif

#ifndef WINRT_GENERIC_273b8073_8c16_59c2_a616_0a534483c612
#define WINRT_GENERIC_273b8073_8c16_59c2_a616_0a534483c612
template <> struct __declspec(uuid("273b8073-8c16-59c2-a616-0a534483c612")) __declspec(novtable) IIterable<Windows::UI::Xaml::Data::ItemIndexRange> : impl_IIterable<Windows::UI::Xaml::Data::ItemIndexRange> {};
#endif


}

namespace Windows::UI::Xaml::Data {

template <typename D>
struct WINRT_EBO impl_IBinding
{
    Windows::UI::Xaml::PropertyPath Path() const;
    void Path(const Windows::UI::Xaml::PropertyPath & value) const;
    Windows::UI::Xaml::Data::BindingMode Mode() const;
    void Mode(Windows::UI::Xaml::Data::BindingMode value) const;
    Windows::IInspectable Source() const;
    void Source(const Windows::IInspectable & value) const;
    Windows::UI::Xaml::Data::RelativeSource RelativeSource() const;
    void RelativeSource(const Windows::UI::Xaml::Data::RelativeSource & value) const;
    hstring ElementName() const;
    void ElementName(hstring_ref value) const;
    Windows::UI::Xaml::Data::IValueConverter Converter() const;
    void Converter(const Windows::UI::Xaml::Data::IValueConverter & value) const;
    Windows::IInspectable ConverterParameter() const;
    void ConverterParameter(const Windows::IInspectable & value) const;
    hstring ConverterLanguage() const;
    void ConverterLanguage(hstring_ref value) const;
};

template <typename D>
struct WINRT_EBO impl_IBinding2
{
    Windows::IInspectable FallbackValue() const;
    void FallbackValue(const Windows::IInspectable & value) const;
    Windows::IInspectable TargetNullValue() const;
    void TargetNullValue(const Windows::IInspectable & value) const;
    Windows::UI::Xaml::Data::UpdateSourceTrigger UpdateSourceTrigger() const;
    void UpdateSourceTrigger(Windows::UI::Xaml::Data::UpdateSourceTrigger value) const;
};

template <typename D>
struct WINRT_EBO impl_IBindingBase
{
};

template <typename D>
struct WINRT_EBO impl_IBindingBaseFactory
{
    Windows::UI::Xaml::Data::BindingBase CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
struct WINRT_EBO impl_IBindingExpression
{
    Windows::IInspectable DataItem() const;
    Windows::UI::Xaml::Data::Binding ParentBinding() const;
    void UpdateSource() const;
};

template <typename D>
struct WINRT_EBO impl_IBindingExpressionBase
{
};

template <typename D>
struct WINRT_EBO impl_IBindingExpressionBaseFactory
{
};

template <typename D>
struct WINRT_EBO impl_IBindingExpressionFactory
{
};

template <typename D>
struct WINRT_EBO impl_IBindingFactory
{
    Windows::UI::Xaml::Data::Binding CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
struct WINRT_EBO impl_IBindingOperations
{
};

template <typename D>
struct WINRT_EBO impl_IBindingOperationsStatics
{
    void SetBinding(const Windows::UI::Xaml::DependencyObject & target, const Windows::UI::Xaml::DependencyProperty & dp, const Windows::UI::Xaml::Data::BindingBase & binding) const;
};

template <typename D>
struct WINRT_EBO impl_ICollectionView
{
    Windows::IInspectable CurrentItem() const;
    int32_t CurrentPosition() const;
    bool IsCurrentAfterLast() const;
    bool IsCurrentBeforeFirst() const;
    Windows::Foundation::Collections::IObservableVector<Windows::IInspectable> CollectionGroups() const;
    bool HasMoreItems() const;
    event_token CurrentChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const;
    using CurrentChanged_revoker = event_revoker<ICollectionView>;
    CurrentChanged_revoker CurrentChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const;
    void CurrentChanged(event_token token) const;
    event_token CurrentChanging(const Windows::UI::Xaml::Data::CurrentChangingEventHandler & value) const;
    using CurrentChanging_revoker = event_revoker<ICollectionView>;
    CurrentChanging_revoker CurrentChanging(auto_revoke_t, const Windows::UI::Xaml::Data::CurrentChangingEventHandler & value) const;
    void CurrentChanging(event_token token) const;
    bool MoveCurrentTo(const Windows::IInspectable & item) const;
    bool MoveCurrentToPosition(int32_t index) const;
    bool MoveCurrentToFirst() const;
    bool MoveCurrentToLast() const;
    bool MoveCurrentToNext() const;
    bool MoveCurrentToPrevious() const;
    Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Data::LoadMoreItemsResult> LoadMoreItemsAsync(uint32_t count) const;
};

template <typename D>
struct WINRT_EBO impl_ICollectionViewFactory
{
    Windows::UI::Xaml::Data::ICollectionView CreateView() const;
};

template <typename D>
struct WINRT_EBO impl_ICollectionViewGroup
{
    Windows::IInspectable Group() const;
    Windows::Foundation::Collections::IObservableVector<Windows::IInspectable> GroupItems() const;
};

template <typename D>
struct WINRT_EBO impl_ICollectionViewSource
{
    Windows::IInspectable Source() const;
    void Source(const Windows::IInspectable & value) const;
    Windows::UI::Xaml::Data::ICollectionView View() const;
    bool IsSourceGrouped() const;
    void IsSourceGrouped(bool value) const;
    Windows::UI::Xaml::PropertyPath ItemsPath() const;
    void ItemsPath(const Windows::UI::Xaml::PropertyPath & value) const;
};

template <typename D>
struct WINRT_EBO impl_ICollectionViewSourceStatics
{
    Windows::UI::Xaml::DependencyProperty SourceProperty() const;
    Windows::UI::Xaml::DependencyProperty ViewProperty() const;
    Windows::UI::Xaml::DependencyProperty IsSourceGroupedProperty() const;
    Windows::UI::Xaml::DependencyProperty ItemsPathProperty() const;
};

template <typename D>
struct WINRT_EBO impl_ICurrentChangingEventArgs
{
    bool Cancel() const;
    void Cancel(bool value) const;
    bool IsCancelable() const;
};

template <typename D>
struct WINRT_EBO impl_ICurrentChangingEventArgsFactory
{
    Windows::UI::Xaml::Data::CurrentChangingEventArgs CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
    Windows::UI::Xaml::Data::CurrentChangingEventArgs CreateWithCancelableParameter(bool isCancelable, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
struct WINRT_EBO impl_ICustomProperty
{
    Windows::UI::Xaml::Interop::TypeName Type() const;
    hstring Name() const;
    Windows::IInspectable GetValue(const Windows::IInspectable & target) const;
    void SetValue(const Windows::IInspectable & target, const Windows::IInspectable & value) const;
    Windows::IInspectable GetIndexedValue(const Windows::IInspectable & target, const Windows::IInspectable & index) const;
    void SetIndexedValue(const Windows::IInspectable & target, const Windows::IInspectable & value, const Windows::IInspectable & index) const;
    bool CanWrite() const;
    bool CanRead() const;
};

template <typename D>
struct WINRT_EBO impl_ICustomPropertyProvider
{
    Windows::UI::Xaml::Data::ICustomProperty GetCustomProperty(hstring_ref name) const;
    Windows::UI::Xaml::Data::ICustomProperty GetIndexedProperty(hstring_ref name, const Windows::UI::Xaml::Interop::TypeName & type) const;
    hstring GetStringRepresentation() const;
    Windows::UI::Xaml::Interop::TypeName Type() const;
};

template <typename D>
struct WINRT_EBO impl_IItemIndexRange
{
    int32_t FirstIndex() const;
    uint32_t Length() const;
    int32_t LastIndex() const;
};

template <typename D>
struct WINRT_EBO impl_IItemIndexRangeFactory
{
    Windows::UI::Xaml::Data::ItemIndexRange CreateInstance(int32_t firstIndex, uint32_t length, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
struct WINRT_EBO impl_IItemsRangeInfo
{
    void RangesChanged(const Windows::UI::Xaml::Data::ItemIndexRange & visibleRange, const Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Data::ItemIndexRange> & trackedItems) const;
};

template <typename D>
struct WINRT_EBO impl_INotifyPropertyChanged
{
    event_token PropertyChanged(const Windows::UI::Xaml::Data::PropertyChangedEventHandler & value) const;
    using PropertyChanged_revoker = event_revoker<INotifyPropertyChanged>;
    PropertyChanged_revoker PropertyChanged(auto_revoke_t, const Windows::UI::Xaml::Data::PropertyChangedEventHandler & value) const;
    void PropertyChanged(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IPropertyChangedEventArgs
{
    hstring PropertyName() const;
};

template <typename D>
struct WINRT_EBO impl_IPropertyChangedEventArgsFactory
{
    Windows::UI::Xaml::Data::PropertyChangedEventArgs CreateInstance(hstring_ref name, const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
struct WINRT_EBO impl_IRelativeSource
{
    Windows::UI::Xaml::Data::RelativeSourceMode Mode() const;
    void Mode(Windows::UI::Xaml::Data::RelativeSourceMode value) const;
};

template <typename D>
struct WINRT_EBO impl_IRelativeSourceFactory
{
    Windows::UI::Xaml::Data::RelativeSource CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
struct WINRT_EBO impl_ISelectionInfo
{
    void SelectRange(const Windows::UI::Xaml::Data::ItemIndexRange & itemIndexRange) const;
    void DeselectRange(const Windows::UI::Xaml::Data::ItemIndexRange & itemIndexRange) const;
    bool IsSelected(int32_t index) const;
    Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Data::ItemIndexRange> GetSelectedRanges() const;
};

template <typename D>
struct WINRT_EBO impl_ISupportIncrementalLoading
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Data::LoadMoreItemsResult> LoadMoreItemsAsync(uint32_t count) const;
    bool HasMoreItems() const;
};

template <typename D>
struct WINRT_EBO impl_IValueConverter
{
    Windows::IInspectable Convert(const Windows::IInspectable & value, const Windows::UI::Xaml::Interop::TypeName & targetType, const Windows::IInspectable & parameter, hstring_ref language) const;
    Windows::IInspectable ConvertBack(const Windows::IInspectable & value, const Windows::UI::Xaml::Interop::TypeName & targetType, const Windows::IInspectable & parameter, hstring_ref language) const;
};

struct CurrentChangingEventHandler : Windows::IUnknown
{
    CurrentChangingEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<CurrentChangingEventHandler>(m_ptr); }
    template <typename L> CurrentChangingEventHandler(L lambda);
    template <typename F> CurrentChangingEventHandler (F * function);
    template <typename O, typename M> CurrentChangingEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Data::CurrentChangingEventArgs & e) const;
};

struct PropertyChangedEventHandler : Windows::IUnknown
{
    PropertyChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<PropertyChangedEventHandler>(m_ptr); }
    template <typename L> PropertyChangedEventHandler(L lambda);
    template <typename F> PropertyChangedEventHandler (F * function);
    template <typename O, typename M> PropertyChangedEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Data::PropertyChangedEventArgs & e) const;
};

struct IBinding :
    Windows::IInspectable,
    impl::consume<IBinding>
{
    IBinding(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBinding>(m_ptr); }
};

struct IBinding2 :
    Windows::IInspectable,
    impl::consume<IBinding2>
{
    IBinding2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBinding2>(m_ptr); }
};

struct IBindingBase :
    Windows::IInspectable,
    impl::consume<IBindingBase>
{
    IBindingBase(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBindingBase>(m_ptr); }
};

struct IBindingBaseFactory :
    Windows::IInspectable,
    impl::consume<IBindingBaseFactory>
{
    IBindingBaseFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBindingBaseFactory>(m_ptr); }
};

struct IBindingExpression :
    Windows::IInspectable,
    impl::consume<IBindingExpression>
{
    IBindingExpression(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBindingExpression>(m_ptr); }
};

struct IBindingExpressionBase :
    Windows::IInspectable,
    impl::consume<IBindingExpressionBase>
{
    IBindingExpressionBase(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBindingExpressionBase>(m_ptr); }
};

struct IBindingExpressionBaseFactory :
    Windows::IInspectable,
    impl::consume<IBindingExpressionBaseFactory>
{
    IBindingExpressionBaseFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBindingExpressionBaseFactory>(m_ptr); }
};

struct IBindingExpressionFactory :
    Windows::IInspectable,
    impl::consume<IBindingExpressionFactory>
{
    IBindingExpressionFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBindingExpressionFactory>(m_ptr); }
};

struct IBindingFactory :
    Windows::IInspectable,
    impl::consume<IBindingFactory>
{
    IBindingFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBindingFactory>(m_ptr); }
};

struct IBindingOperations :
    Windows::IInspectable,
    impl::consume<IBindingOperations>
{
    IBindingOperations(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBindingOperations>(m_ptr); }
};

struct IBindingOperationsStatics :
    Windows::IInspectable,
    impl::consume<IBindingOperationsStatics>
{
    IBindingOperationsStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBindingOperationsStatics>(m_ptr); }
};

struct ICollectionView :
    Windows::IInspectable,
    impl::consume<ICollectionView>,
    impl::require<ICollectionView, Windows::Foundation::Collections::IIterable<Windows::IInspectable>, Windows::Foundation::Collections::IObservableVector<Windows::IInspectable>, Windows::Foundation::Collections::IVector<Windows::IInspectable>>
{
    ICollectionView(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICollectionView>(m_ptr); }
};

struct ICollectionViewFactory :
    Windows::IInspectable,
    impl::consume<ICollectionViewFactory>
{
    ICollectionViewFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICollectionViewFactory>(m_ptr); }
};

struct ICollectionViewGroup :
    Windows::IInspectable,
    impl::consume<ICollectionViewGroup>
{
    ICollectionViewGroup(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICollectionViewGroup>(m_ptr); }
};

struct ICollectionViewSource :
    Windows::IInspectable,
    impl::consume<ICollectionViewSource>
{
    ICollectionViewSource(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICollectionViewSource>(m_ptr); }
};

struct ICollectionViewSourceStatics :
    Windows::IInspectable,
    impl::consume<ICollectionViewSourceStatics>
{
    ICollectionViewSourceStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICollectionViewSourceStatics>(m_ptr); }
};

struct ICurrentChangingEventArgs :
    Windows::IInspectable,
    impl::consume<ICurrentChangingEventArgs>
{
    ICurrentChangingEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICurrentChangingEventArgs>(m_ptr); }
};

struct ICurrentChangingEventArgsFactory :
    Windows::IInspectable,
    impl::consume<ICurrentChangingEventArgsFactory>
{
    ICurrentChangingEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICurrentChangingEventArgsFactory>(m_ptr); }
};

struct ICustomProperty :
    Windows::IInspectable,
    impl::consume<ICustomProperty>
{
    ICustomProperty(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICustomProperty>(m_ptr); }
};

struct ICustomPropertyProvider :
    Windows::IInspectable,
    impl::consume<ICustomPropertyProvider>
{
    ICustomPropertyProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICustomPropertyProvider>(m_ptr); }
};

struct IItemIndexRange :
    Windows::IInspectable,
    impl::consume<IItemIndexRange>
{
    IItemIndexRange(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IItemIndexRange>(m_ptr); }
};

struct IItemIndexRangeFactory :
    Windows::IInspectable,
    impl::consume<IItemIndexRangeFactory>
{
    IItemIndexRangeFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IItemIndexRangeFactory>(m_ptr); }
};

struct IItemsRangeInfo :
    Windows::IInspectable,
    impl::consume<IItemsRangeInfo>,
    impl::require<IItemsRangeInfo, Windows::Foundation::IClosable>
{
    IItemsRangeInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IItemsRangeInfo>(m_ptr); }
};

struct INotifyPropertyChanged :
    Windows::IInspectable,
    impl::consume<INotifyPropertyChanged>
{
    INotifyPropertyChanged(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<INotifyPropertyChanged>(m_ptr); }
};

struct IPropertyChangedEventArgs :
    Windows::IInspectable,
    impl::consume<IPropertyChangedEventArgs>
{
    IPropertyChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPropertyChangedEventArgs>(m_ptr); }
};

struct IPropertyChangedEventArgsFactory :
    Windows::IInspectable,
    impl::consume<IPropertyChangedEventArgsFactory>
{
    IPropertyChangedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPropertyChangedEventArgsFactory>(m_ptr); }
};

struct IRelativeSource :
    Windows::IInspectable,
    impl::consume<IRelativeSource>
{
    IRelativeSource(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRelativeSource>(m_ptr); }
};

struct IRelativeSourceFactory :
    Windows::IInspectable,
    impl::consume<IRelativeSourceFactory>
{
    IRelativeSourceFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRelativeSourceFactory>(m_ptr); }
};

struct ISelectionInfo :
    Windows::IInspectable,
    impl::consume<ISelectionInfo>
{
    ISelectionInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISelectionInfo>(m_ptr); }
};

struct ISupportIncrementalLoading :
    Windows::IInspectable,
    impl::consume<ISupportIncrementalLoading>
{
    ISupportIncrementalLoading(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISupportIncrementalLoading>(m_ptr); }
};

struct IValueConverter :
    Windows::IInspectable,
    impl::consume<IValueConverter>
{
    IValueConverter(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IValueConverter>(m_ptr); }
};

}

}
