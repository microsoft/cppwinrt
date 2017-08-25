// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Windows.UI.Xaml.Interop.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.UI.Xaml.Data.2.h"
#include "winrt/Windows.UI.Xaml.h"

namespace winrt::impl {

template <typename D> Windows::UI::Xaml::PropertyPath consume_Windows_UI_Xaml_Data_IBinding<D>::Path() const
{
    Windows::UI::Xaml::PropertyPath value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IBinding)->get_Path(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Data_IBinding<D>::Path(Windows::UI::Xaml::PropertyPath const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IBinding)->put_Path(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Data::BindingMode consume_Windows_UI_Xaml_Data_IBinding<D>::Mode() const
{
    Windows::UI::Xaml::Data::BindingMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IBinding)->get_Mode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Data_IBinding<D>::Mode(Windows::UI::Xaml::Data::BindingMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IBinding)->put_Mode(get_abi(value)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Data_IBinding<D>::Source() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IBinding)->get_Source(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Data_IBinding<D>::Source(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IBinding)->put_Source(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Data::RelativeSource consume_Windows_UI_Xaml_Data_IBinding<D>::RelativeSource() const
{
    Windows::UI::Xaml::Data::RelativeSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IBinding)->get_RelativeSource(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Data_IBinding<D>::RelativeSource(Windows::UI::Xaml::Data::RelativeSource const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IBinding)->put_RelativeSource(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Xaml_Data_IBinding<D>::ElementName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IBinding)->get_ElementName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Data_IBinding<D>::ElementName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IBinding)->put_ElementName(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Data::IValueConverter consume_Windows_UI_Xaml_Data_IBinding<D>::Converter() const
{
    Windows::UI::Xaml::Data::IValueConverter value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IBinding)->get_Converter(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Data_IBinding<D>::Converter(Windows::UI::Xaml::Data::IValueConverter const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IBinding)->put_Converter(get_abi(value)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Data_IBinding<D>::ConverterParameter() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IBinding)->get_ConverterParameter(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Data_IBinding<D>::ConverterParameter(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IBinding)->put_ConverterParameter(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Xaml_Data_IBinding<D>::ConverterLanguage() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IBinding)->get_ConverterLanguage(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Data_IBinding<D>::ConverterLanguage(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IBinding)->put_ConverterLanguage(get_abi(value)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Data_IBinding2<D>::FallbackValue() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IBinding2)->get_FallbackValue(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Data_IBinding2<D>::FallbackValue(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IBinding2)->put_FallbackValue(get_abi(value)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Data_IBinding2<D>::TargetNullValue() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IBinding2)->get_TargetNullValue(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Data_IBinding2<D>::TargetNullValue(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IBinding2)->put_TargetNullValue(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Data::UpdateSourceTrigger consume_Windows_UI_Xaml_Data_IBinding2<D>::UpdateSourceTrigger() const
{
    Windows::UI::Xaml::Data::UpdateSourceTrigger value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IBinding2)->get_UpdateSourceTrigger(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Data_IBinding2<D>::UpdateSourceTrigger(Windows::UI::Xaml::Data::UpdateSourceTrigger const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IBinding2)->put_UpdateSourceTrigger(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Data::BindingBase consume_Windows_UI_Xaml_Data_IBindingBaseFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Data::BindingBase instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IBindingBaseFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Data_IBindingExpression<D>::DataItem() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IBindingExpression)->get_DataItem(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Data::Binding consume_Windows_UI_Xaml_Data_IBindingExpression<D>::ParentBinding() const
{
    Windows::UI::Xaml::Data::Binding value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IBindingExpression)->get_ParentBinding(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Data_IBindingExpression<D>::UpdateSource() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IBindingExpression)->UpdateSource());
}

template <typename D> Windows::UI::Xaml::Data::Binding consume_Windows_UI_Xaml_Data_IBindingFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Data::Binding instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IBindingFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> void consume_Windows_UI_Xaml_Data_IBindingOperationsStatics<D>::SetBinding(Windows::UI::Xaml::DependencyObject const& target, Windows::UI::Xaml::DependencyProperty const& dp, Windows::UI::Xaml::Data::BindingBase const& binding) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IBindingOperationsStatics)->SetBinding(get_abi(target), get_abi(dp), get_abi(binding)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Data_ICollectionView<D>::CurrentItem() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionView)->get_CurrentItem(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Data_ICollectionView<D>::CurrentPosition() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionView)->get_CurrentPosition(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Data_ICollectionView<D>::IsCurrentAfterLast() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionView)->get_IsCurrentAfterLast(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Data_ICollectionView<D>::IsCurrentBeforeFirst() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionView)->get_IsCurrentBeforeFirst(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> consume_Windows_UI_Xaml_Data_ICollectionView<D>::CollectionGroups() const
{
    Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionView)->get_CollectionGroups(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Data_ICollectionView<D>::HasMoreItems() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionView)->get_HasMoreItems(&value));
    return value;
}

template <typename D> event_token consume_Windows_UI_Xaml_Data_ICollectionView<D>::CurrentChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionView)->add_CurrentChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Data::ICollectionView> consume_Windows_UI_Xaml_Data_ICollectionView<D>::CurrentChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Data::ICollectionView>(this, &abi_t<Windows::UI::Xaml::Data::ICollectionView>::remove_CurrentChanged, CurrentChanged(value));
}

template <typename D> void consume_Windows_UI_Xaml_Data_ICollectionView<D>::CurrentChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionView)->remove_CurrentChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Data_ICollectionView<D>::CurrentChanging(Windows::UI::Xaml::Data::CurrentChangingEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionView)->add_CurrentChanging(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Data::ICollectionView> consume_Windows_UI_Xaml_Data_ICollectionView<D>::CurrentChanging(auto_revoke_t, Windows::UI::Xaml::Data::CurrentChangingEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Data::ICollectionView>(this, &abi_t<Windows::UI::Xaml::Data::ICollectionView>::remove_CurrentChanging, CurrentChanging(value));
}

template <typename D> void consume_Windows_UI_Xaml_Data_ICollectionView<D>::CurrentChanging(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionView)->remove_CurrentChanging(get_abi(token)));
}

template <typename D> bool consume_Windows_UI_Xaml_Data_ICollectionView<D>::MoveCurrentTo(Windows::Foundation::IInspectable const& item) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionView)->MoveCurrentTo(get_abi(item), &returnValue));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Data_ICollectionView<D>::MoveCurrentToPosition(int32_t index) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionView)->MoveCurrentToPosition(index, &returnValue));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Data_ICollectionView<D>::MoveCurrentToFirst() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionView)->MoveCurrentToFirst(&returnValue));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Data_ICollectionView<D>::MoveCurrentToLast() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionView)->MoveCurrentToLast(&returnValue));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Data_ICollectionView<D>::MoveCurrentToNext() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionView)->MoveCurrentToNext(&returnValue));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Data_ICollectionView<D>::MoveCurrentToPrevious() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionView)->MoveCurrentToPrevious(&returnValue));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Data::LoadMoreItemsResult> consume_Windows_UI_Xaml_Data_ICollectionView<D>::LoadMoreItemsAsync(uint32_t count) const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Data::LoadMoreItemsResult> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionView)->LoadMoreItemsAsync(count, put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Data::ICollectionView consume_Windows_UI_Xaml_Data_ICollectionViewFactory<D>::CreateView() const
{
    Windows::UI::Xaml::Data::ICollectionView result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionViewFactory)->CreateView(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Data_ICollectionViewGroup<D>::Group() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionViewGroup)->get_Group(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> consume_Windows_UI_Xaml_Data_ICollectionViewGroup<D>::GroupItems() const
{
    Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionViewGroup)->get_GroupItems(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Data_ICollectionViewSource<D>::Source() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionViewSource)->get_Source(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Data_ICollectionViewSource<D>::Source(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionViewSource)->put_Source(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Data::ICollectionView consume_Windows_UI_Xaml_Data_ICollectionViewSource<D>::View() const
{
    Windows::UI::Xaml::Data::ICollectionView value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionViewSource)->get_View(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Data_ICollectionViewSource<D>::IsSourceGrouped() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionViewSource)->get_IsSourceGrouped(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Data_ICollectionViewSource<D>::IsSourceGrouped(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionViewSource)->put_IsSourceGrouped(value));
}

template <typename D> Windows::UI::Xaml::PropertyPath consume_Windows_UI_Xaml_Data_ICollectionViewSource<D>::ItemsPath() const
{
    Windows::UI::Xaml::PropertyPath value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionViewSource)->get_ItemsPath(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Data_ICollectionViewSource<D>::ItemsPath(Windows::UI::Xaml::PropertyPath const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionViewSource)->put_ItemsPath(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Data_ICollectionViewSourceStatics<D>::SourceProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionViewSourceStatics)->get_SourceProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Data_ICollectionViewSourceStatics<D>::ViewProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionViewSourceStatics)->get_ViewProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Data_ICollectionViewSourceStatics<D>::IsSourceGroupedProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionViewSourceStatics)->get_IsSourceGroupedProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Data_ICollectionViewSourceStatics<D>::ItemsPathProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICollectionViewSourceStatics)->get_ItemsPathProperty(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Data_ICurrentChangingEventArgs<D>::Cancel() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICurrentChangingEventArgs)->get_Cancel(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Data_ICurrentChangingEventArgs<D>::Cancel(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICurrentChangingEventArgs)->put_Cancel(value));
}

template <typename D> bool consume_Windows_UI_Xaml_Data_ICurrentChangingEventArgs<D>::IsCancelable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICurrentChangingEventArgs)->get_IsCancelable(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Data::CurrentChangingEventArgs consume_Windows_UI_Xaml_Data_ICurrentChangingEventArgsFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Data::CurrentChangingEventArgs instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICurrentChangingEventArgsFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Data::CurrentChangingEventArgs consume_Windows_UI_Xaml_Data_ICurrentChangingEventArgsFactory<D>::CreateWithCancelableParameter(bool isCancelable, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Data::CurrentChangingEventArgs instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICurrentChangingEventArgsFactory)->CreateWithCancelableParameter(isCancelable, get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Interop::TypeName consume_Windows_UI_Xaml_Data_ICustomProperty<D>::Type() const
{
    Windows::UI::Xaml::Interop::TypeName value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICustomProperty)->get_Type(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Data_ICustomProperty<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICustomProperty)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Data_ICustomProperty<D>::GetValue(Windows::Foundation::IInspectable const& target) const
{
    Windows::Foundation::IInspectable returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICustomProperty)->GetValue(get_abi(target), put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Data_ICustomProperty<D>::SetValue(Windows::Foundation::IInspectable const& target, Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICustomProperty)->SetValue(get_abi(target), get_abi(value)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Data_ICustomProperty<D>::GetIndexedValue(Windows::Foundation::IInspectable const& target, Windows::Foundation::IInspectable const& index) const
{
    Windows::Foundation::IInspectable returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICustomProperty)->GetIndexedValue(get_abi(target), get_abi(index), put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Data_ICustomProperty<D>::SetIndexedValue(Windows::Foundation::IInspectable const& target, Windows::Foundation::IInspectable const& value, Windows::Foundation::IInspectable const& index) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICustomProperty)->SetIndexedValue(get_abi(target), get_abi(value), get_abi(index)));
}

template <typename D> bool consume_Windows_UI_Xaml_Data_ICustomProperty<D>::CanWrite() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICustomProperty)->get_CanWrite(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Data_ICustomProperty<D>::CanRead() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICustomProperty)->get_CanRead(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Data::ICustomProperty consume_Windows_UI_Xaml_Data_ICustomPropertyProvider<D>::GetCustomProperty(param::hstring const& name) const
{
    Windows::UI::Xaml::Data::ICustomProperty returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICustomPropertyProvider)->GetCustomProperty(get_abi(name), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Data::ICustomProperty consume_Windows_UI_Xaml_Data_ICustomPropertyProvider<D>::GetIndexedProperty(param::hstring const& name, Windows::UI::Xaml::Interop::TypeName const& type) const
{
    Windows::UI::Xaml::Data::ICustomProperty returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICustomPropertyProvider)->GetIndexedProperty(get_abi(name), get_abi(type), put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_Data_ICustomPropertyProvider<D>::GetStringRepresentation() const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICustomPropertyProvider)->GetStringRepresentation(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Interop::TypeName consume_Windows_UI_Xaml_Data_ICustomPropertyProvider<D>::Type() const
{
    Windows::UI::Xaml::Interop::TypeName value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ICustomPropertyProvider)->get_Type(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Data_IItemIndexRange<D>::FirstIndex() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IItemIndexRange)->get_FirstIndex(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_UI_Xaml_Data_IItemIndexRange<D>::Length() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IItemIndexRange)->get_Length(&value));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Data_IItemIndexRange<D>::LastIndex() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IItemIndexRange)->get_LastIndex(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Data::ItemIndexRange consume_Windows_UI_Xaml_Data_IItemIndexRangeFactory<D>::CreateInstance(int32_t firstIndex, uint32_t length, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Data::ItemIndexRange instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IItemIndexRangeFactory)->CreateInstance(firstIndex, length, get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> void consume_Windows_UI_Xaml_Data_IItemsRangeInfo<D>::RangesChanged(Windows::UI::Xaml::Data::ItemIndexRange const& visibleRange, param::vector_view<Windows::UI::Xaml::Data::ItemIndexRange> const& trackedItems) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IItemsRangeInfo)->RangesChanged(get_abi(visibleRange), get_abi(trackedItems)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Data_INotifyPropertyChanged<D>::PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::INotifyPropertyChanged)->add_PropertyChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Data::INotifyPropertyChanged> consume_Windows_UI_Xaml_Data_INotifyPropertyChanged<D>::PropertyChanged(auto_revoke_t, Windows::UI::Xaml::Data::PropertyChangedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Data::INotifyPropertyChanged>(this, &abi_t<Windows::UI::Xaml::Data::INotifyPropertyChanged>::remove_PropertyChanged, PropertyChanged(value));
}

template <typename D> void consume_Windows_UI_Xaml_Data_INotifyPropertyChanged<D>::PropertyChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::INotifyPropertyChanged)->remove_PropertyChanged(get_abi(token)));
}

template <typename D> hstring consume_Windows_UI_Xaml_Data_IPropertyChangedEventArgs<D>::PropertyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IPropertyChangedEventArgs)->get_PropertyName(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Data::PropertyChangedEventArgs consume_Windows_UI_Xaml_Data_IPropertyChangedEventArgsFactory<D>::CreateInstance(param::hstring const& name, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Data::PropertyChangedEventArgs instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IPropertyChangedEventArgsFactory)->CreateInstance(get_abi(name), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Data::RelativeSourceMode consume_Windows_UI_Xaml_Data_IRelativeSource<D>::Mode() const
{
    Windows::UI::Xaml::Data::RelativeSourceMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IRelativeSource)->get_Mode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Data_IRelativeSource<D>::Mode(Windows::UI::Xaml::Data::RelativeSourceMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IRelativeSource)->put_Mode(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Data::RelativeSource consume_Windows_UI_Xaml_Data_IRelativeSourceFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Data::RelativeSource instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IRelativeSourceFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> void consume_Windows_UI_Xaml_Data_ISelectionInfo<D>::SelectRange(Windows::UI::Xaml::Data::ItemIndexRange const& itemIndexRange) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ISelectionInfo)->SelectRange(get_abi(itemIndexRange)));
}

template <typename D> void consume_Windows_UI_Xaml_Data_ISelectionInfo<D>::DeselectRange(Windows::UI::Xaml::Data::ItemIndexRange const& itemIndexRange) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ISelectionInfo)->DeselectRange(get_abi(itemIndexRange)));
}

template <typename D> bool consume_Windows_UI_Xaml_Data_ISelectionInfo<D>::IsSelected(int32_t index) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ISelectionInfo)->IsSelected(index, &returnValue));
    return returnValue;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Data::ItemIndexRange> consume_Windows_UI_Xaml_Data_ISelectionInfo<D>::GetSelectedRanges() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Data::ItemIndexRange> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ISelectionInfo)->GetSelectedRanges(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Data::LoadMoreItemsResult> consume_Windows_UI_Xaml_Data_ISupportIncrementalLoading<D>::LoadMoreItemsAsync(uint32_t count) const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Data::LoadMoreItemsResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ISupportIncrementalLoading)->LoadMoreItemsAsync(count, put_abi(operation)));
    return operation;
}

template <typename D> bool consume_Windows_UI_Xaml_Data_ISupportIncrementalLoading<D>::HasMoreItems() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::ISupportIncrementalLoading)->get_HasMoreItems(&value));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Data_IValueConverter<D>::Convert(Windows::Foundation::IInspectable const& value, Windows::UI::Xaml::Interop::TypeName const& targetType, Windows::Foundation::IInspectable const& parameter, param::hstring const& language) const
{
    Windows::Foundation::IInspectable returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IValueConverter)->Convert(get_abi(value), get_abi(targetType), get_abi(parameter), get_abi(language), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Data_IValueConverter<D>::ConvertBack(Windows::Foundation::IInspectable const& value, Windows::UI::Xaml::Interop::TypeName const& targetType, Windows::Foundation::IInspectable const& parameter, param::hstring const& language) const
{
    Windows::Foundation::IInspectable returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Data::IValueConverter)->ConvertBack(get_abi(value), get_abi(targetType), get_abi(parameter), get_abi(language), put_abi(returnValue)));
    return returnValue;
}

template <> struct delegate<Windows::UI::Xaml::Data::CurrentChangingEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Data::CurrentChangingEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Data::CurrentChangingEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Data::CurrentChangingEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::Data::PropertyChangedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Data::PropertyChangedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Data::PropertyChangedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Data::PropertyChangedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::IBinding> : produce_base<D, Windows::UI::Xaml::Data::IBinding>
{
    HRESULT __stdcall get_Path(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Path());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Path(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Path(*reinterpret_cast<Windows::UI::Xaml::PropertyPath const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mode(abi_t<Windows::UI::Xaml::Data::BindingMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mode(abi_t<Windows::UI::Xaml::Data::BindingMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mode(*reinterpret_cast<Windows::UI::Xaml::Data::BindingMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RelativeSource(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RelativeSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RelativeSource(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RelativeSource(*reinterpret_cast<Windows::UI::Xaml::Data::RelativeSource const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ElementName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ElementName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ElementName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ElementName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Converter(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Converter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Converter(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Converter(*reinterpret_cast<Windows::UI::Xaml::Data::IValueConverter const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConverterParameter(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ConverterParameter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ConverterParameter(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConverterParameter(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConverterLanguage(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ConverterLanguage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ConverterLanguage(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConverterLanguage(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::IBinding2> : produce_base<D, Windows::UI::Xaml::Data::IBinding2>
{
    HRESULT __stdcall get_FallbackValue(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FallbackValue());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FallbackValue(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FallbackValue(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TargetNullValue(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetNullValue());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetNullValue(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetNullValue(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UpdateSourceTrigger(abi_t<Windows::UI::Xaml::Data::UpdateSourceTrigger>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UpdateSourceTrigger());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UpdateSourceTrigger(abi_t<Windows::UI::Xaml::Data::UpdateSourceTrigger> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateSourceTrigger(*reinterpret_cast<Windows::UI::Xaml::Data::UpdateSourceTrigger const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::IBindingBase> : produce_base<D, Windows::UI::Xaml::Data::IBindingBase>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::IBindingBaseFactory> : produce_base<D, Windows::UI::Xaml::Data::IBindingBaseFactory>
{
    HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::IBindingExpression> : produce_base<D, Windows::UI::Xaml::Data::IBindingExpression>
{
    HRESULT __stdcall get_DataItem(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DataItem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ParentBinding(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ParentBinding());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UpdateSource() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateSource();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::IBindingExpressionBase> : produce_base<D, Windows::UI::Xaml::Data::IBindingExpressionBase>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::IBindingExpressionBaseFactory> : produce_base<D, Windows::UI::Xaml::Data::IBindingExpressionBaseFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::IBindingExpressionFactory> : produce_base<D, Windows::UI::Xaml::Data::IBindingExpressionFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::IBindingFactory> : produce_base<D, Windows::UI::Xaml::Data::IBindingFactory>
{
    HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::IBindingOperations> : produce_base<D, Windows::UI::Xaml::Data::IBindingOperations>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::IBindingOperationsStatics> : produce_base<D, Windows::UI::Xaml::Data::IBindingOperationsStatics>
{
    HRESULT __stdcall SetBinding(::IUnknown* target, ::IUnknown* dp, ::IUnknown* binding) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetBinding(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&target), *reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&dp), *reinterpret_cast<Windows::UI::Xaml::Data::BindingBase const*>(&binding));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::ICollectionView> : produce_base<D, Windows::UI::Xaml::Data::ICollectionView>
{
    HRESULT __stdcall get_CurrentItem(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CurrentItem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentPosition(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CurrentPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCurrentAfterLast(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCurrentAfterLast());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCurrentBeforeFirst(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCurrentBeforeFirst());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CollectionGroups(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CollectionGroups());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasMoreItems(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasMoreItems());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CurrentChanged(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CurrentChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CurrentChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CurrentChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CurrentChanging(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CurrentChanging(*reinterpret_cast<Windows::UI::Xaml::Data::CurrentChangingEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CurrentChanging(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CurrentChanging(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MoveCurrentTo(::IUnknown* item, bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().MoveCurrentTo(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&item)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MoveCurrentToPosition(int32_t index, bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().MoveCurrentToPosition(index));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MoveCurrentToFirst(bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().MoveCurrentToFirst());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MoveCurrentToLast(bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().MoveCurrentToLast());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MoveCurrentToNext(bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().MoveCurrentToNext());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MoveCurrentToPrevious(bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().MoveCurrentToPrevious());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadMoreItemsAsync(uint32_t count, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().LoadMoreItemsAsync(count));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::ICollectionViewFactory> : produce_base<D, Windows::UI::Xaml::Data::ICollectionViewFactory>
{
    HRESULT __stdcall CreateView(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateView());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::ICollectionViewGroup> : produce_base<D, Windows::UI::Xaml::Data::ICollectionViewGroup>
{
    HRESULT __stdcall get_Group(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Group());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GroupItems(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GroupItems());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::ICollectionViewSource> : produce_base<D, Windows::UI::Xaml::Data::ICollectionViewSource>
{
    HRESULT __stdcall get_Source(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_View(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().View());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSourceGrouped(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSourceGrouped());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsSourceGrouped(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsSourceGrouped(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemsPath(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ItemsPath());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ItemsPath(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ItemsPath(*reinterpret_cast<Windows::UI::Xaml::PropertyPath const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::ICollectionViewSourceStatics> : produce_base<D, Windows::UI::Xaml::Data::ICollectionViewSourceStatics>
{
    HRESULT __stdcall get_SourceProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ViewProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ViewProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSourceGroupedProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSourceGroupedProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemsPathProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ItemsPathProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::ICurrentChangingEventArgs> : produce_base<D, Windows::UI::Xaml::Data::ICurrentChangingEventArgs>
{
    HRESULT __stdcall get_Cancel(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Cancel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Cancel(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Cancel(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCancelable(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCancelable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::ICurrentChangingEventArgsFactory> : produce_base<D, Windows::UI::Xaml::Data::ICurrentChangingEventArgsFactory>
{
    HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithCancelableParameter(bool isCancelable, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateWithCancelableParameter(isCancelable, *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::ICustomProperty> : produce_base<D, Windows::UI::Xaml::Data::ICustomProperty>
{
    HRESULT __stdcall get_Type(abi_t<Windows::UI::Xaml::Interop::TypeName>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetValue(::IUnknown* target, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetValue(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&target)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetValue(::IUnknown* target, ::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetValue(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&target), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetIndexedValue(::IUnknown* target, ::IUnknown* index, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetIndexedValue(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&target), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&index)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetIndexedValue(::IUnknown* target, ::IUnknown* value, ::IUnknown* index) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetIndexedValue(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&target), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&value), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&index));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanWrite(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanWrite());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanRead(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanRead());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::ICustomPropertyProvider> : produce_base<D, Windows::UI::Xaml::Data::ICustomPropertyProvider>
{
    HRESULT __stdcall GetCustomProperty(HSTRING name, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetCustomProperty(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetIndexedProperty(HSTRING name, abi_t<Windows::UI::Xaml::Interop::TypeName> type, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetIndexedProperty(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::UI::Xaml::Interop::TypeName const*>(&type)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStringRepresentation(HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetStringRepresentation());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Type(abi_t<Windows::UI::Xaml::Interop::TypeName>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::IItemIndexRange> : produce_base<D, Windows::UI::Xaml::Data::IItemIndexRange>
{
    HRESULT __stdcall get_FirstIndex(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FirstIndex());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Length(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Length());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastIndex(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastIndex());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::IItemIndexRangeFactory> : produce_base<D, Windows::UI::Xaml::Data::IItemIndexRangeFactory>
{
    HRESULT __stdcall CreateInstance(int32_t firstIndex, uint32_t length, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstance(firstIndex, length, *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::IItemsRangeInfo> : produce_base<D, Windows::UI::Xaml::Data::IItemsRangeInfo>
{
    HRESULT __stdcall RangesChanged(::IUnknown* visibleRange, ::IUnknown* trackedItems) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RangesChanged(*reinterpret_cast<Windows::UI::Xaml::Data::ItemIndexRange const*>(&visibleRange), *reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Data::ItemIndexRange> const*>(&trackedItems));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::INotifyPropertyChanged> : produce_base<D, Windows::UI::Xaml::Data::INotifyPropertyChanged>
{
    HRESULT __stdcall add_PropertyChanged(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PropertyChanged(*reinterpret_cast<Windows::UI::Xaml::Data::PropertyChangedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PropertyChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PropertyChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::IPropertyChangedEventArgs> : produce_base<D, Windows::UI::Xaml::Data::IPropertyChangedEventArgs>
{
    HRESULT __stdcall get_PropertyName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PropertyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::IPropertyChangedEventArgsFactory> : produce_base<D, Windows::UI::Xaml::Data::IPropertyChangedEventArgsFactory>
{
    HRESULT __stdcall CreateInstance(HSTRING name, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::IRelativeSource> : produce_base<D, Windows::UI::Xaml::Data::IRelativeSource>
{
    HRESULT __stdcall get_Mode(abi_t<Windows::UI::Xaml::Data::RelativeSourceMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mode(abi_t<Windows::UI::Xaml::Data::RelativeSourceMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mode(*reinterpret_cast<Windows::UI::Xaml::Data::RelativeSourceMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::IRelativeSourceFactory> : produce_base<D, Windows::UI::Xaml::Data::IRelativeSourceFactory>
{
    HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::ISelectionInfo> : produce_base<D, Windows::UI::Xaml::Data::ISelectionInfo>
{
    HRESULT __stdcall SelectRange(::IUnknown* itemIndexRange) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectRange(*reinterpret_cast<Windows::UI::Xaml::Data::ItemIndexRange const*>(&itemIndexRange));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeselectRange(::IUnknown* itemIndexRange) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeselectRange(*reinterpret_cast<Windows::UI::Xaml::Data::ItemIndexRange const*>(&itemIndexRange));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsSelected(int32_t index, bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().IsSelected(index));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSelectedRanges(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetSelectedRanges());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::ISupportIncrementalLoading> : produce_base<D, Windows::UI::Xaml::Data::ISupportIncrementalLoading>
{
    HRESULT __stdcall LoadMoreItemsAsync(uint32_t count, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().LoadMoreItemsAsync(count));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasMoreItems(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasMoreItems());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::IValueConverter> : produce_base<D, Windows::UI::Xaml::Data::IValueConverter>
{
    HRESULT __stdcall Convert(::IUnknown* value, abi_t<Windows::UI::Xaml::Interop::TypeName> targetType, ::IUnknown* parameter, HSTRING language, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().Convert(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value), *reinterpret_cast<Windows::UI::Xaml::Interop::TypeName const*>(&targetType), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&parameter), *reinterpret_cast<hstring const*>(&language)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConvertBack(::IUnknown* value, abi_t<Windows::UI::Xaml::Interop::TypeName> targetType, ::IUnknown* parameter, HSTRING language, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().ConvertBack(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value), *reinterpret_cast<Windows::UI::Xaml::Interop::TypeName const*>(&targetType), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&parameter), *reinterpret_cast<hstring const*>(&language)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Data {

inline Binding::Binding()
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<Binding, Windows::UI::Xaml::Data::IBindingFactory>().CreateInstance(outer, inner));
}

inline BindingBase::BindingBase()
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<BindingBase, Windows::UI::Xaml::Data::IBindingBaseFactory>().CreateInstance(outer, inner));
}

inline void BindingOperations::SetBinding(Windows::UI::Xaml::DependencyObject const& target, Windows::UI::Xaml::DependencyProperty const& dp, Windows::UI::Xaml::Data::BindingBase const& binding)
{
    get_activation_factory<BindingOperations, Windows::UI::Xaml::Data::IBindingOperationsStatics>().SetBinding(target, dp, binding);
}

inline CollectionViewSource::CollectionViewSource() :
    CollectionViewSource(activate_instance<CollectionViewSource>())
{}

inline Windows::UI::Xaml::DependencyProperty CollectionViewSource::SourceProperty()
{
    return get_activation_factory<CollectionViewSource, Windows::UI::Xaml::Data::ICollectionViewSourceStatics>().SourceProperty();
}

inline Windows::UI::Xaml::DependencyProperty CollectionViewSource::ViewProperty()
{
    return get_activation_factory<CollectionViewSource, Windows::UI::Xaml::Data::ICollectionViewSourceStatics>().ViewProperty();
}

inline Windows::UI::Xaml::DependencyProperty CollectionViewSource::IsSourceGroupedProperty()
{
    return get_activation_factory<CollectionViewSource, Windows::UI::Xaml::Data::ICollectionViewSourceStatics>().IsSourceGroupedProperty();
}

inline Windows::UI::Xaml::DependencyProperty CollectionViewSource::ItemsPathProperty()
{
    return get_activation_factory<CollectionViewSource, Windows::UI::Xaml::Data::ICollectionViewSourceStatics>().ItemsPathProperty();
}

inline CurrentChangingEventArgs::CurrentChangingEventArgs()
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<CurrentChangingEventArgs, Windows::UI::Xaml::Data::ICurrentChangingEventArgsFactory>().CreateInstance(outer, inner));
}

inline CurrentChangingEventArgs::CurrentChangingEventArgs(bool isCancelable)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<CurrentChangingEventArgs, Windows::UI::Xaml::Data::ICurrentChangingEventArgsFactory>().CreateWithCancelableParameter(isCancelable, outer, inner));
}

inline ItemIndexRange::ItemIndexRange(int32_t firstIndex, uint32_t length)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<ItemIndexRange, Windows::UI::Xaml::Data::IItemIndexRangeFactory>().CreateInstance(firstIndex, length, outer, inner));
}

inline PropertyChangedEventArgs::PropertyChangedEventArgs(param::hstring const& name)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<PropertyChangedEventArgs, Windows::UI::Xaml::Data::IPropertyChangedEventArgsFactory>().CreateInstance(name, outer, inner));
}

inline RelativeSource::RelativeSource()
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<RelativeSource, Windows::UI::Xaml::Data::IRelativeSourceFactory>().CreateInstance(outer, inner));
}

template <typename L> CurrentChangingEventHandler::CurrentChangingEventHandler(L handler) :
    CurrentChangingEventHandler(impl::make_delegate<CurrentChangingEventHandler>(std::forward<L>(handler)))
{}

template <typename F> CurrentChangingEventHandler::CurrentChangingEventHandler(F* handler) :
    CurrentChangingEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> CurrentChangingEventHandler::CurrentChangingEventHandler(O* object, M method) :
    CurrentChangingEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void CurrentChangingEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Data::CurrentChangingEventArgs const& e) const
{
    check_hresult((*(abi_t<CurrentChangingEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> PropertyChangedEventHandler::PropertyChangedEventHandler(L handler) :
    PropertyChangedEventHandler(impl::make_delegate<PropertyChangedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> PropertyChangedEventHandler::PropertyChangedEventHandler(F* handler) :
    PropertyChangedEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> PropertyChangedEventHandler::PropertyChangedEventHandler(O* object, M method) :
    PropertyChangedEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void PropertyChangedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Data::PropertyChangedEventArgs const& e) const
{
    check_hresult((*(abi_t<PropertyChangedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename D, typename ... Interfaces>
struct BindingT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Data::IBinding, Windows::UI::Xaml::Data::IBinding2, Windows::UI::Xaml::Data::IBindingBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = Binding;

protected:
    BindingT()
    {
        get_activation_factory<Windows::UI::Xaml::Data::Binding, Windows::UI::Xaml::Data::IBindingFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct BindingBaseT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Data::IBindingBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = BindingBase;

protected:
    BindingBaseT()
    {
        get_activation_factory<Windows::UI::Xaml::Data::BindingBase, Windows::UI::Xaml::Data::IBindingBaseFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct CurrentChangingEventArgsT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Data::ICurrentChangingEventArgs>
{
    using composable = CurrentChangingEventArgs;

protected:
    CurrentChangingEventArgsT()
    {
        get_activation_factory<Windows::UI::Xaml::Data::CurrentChangingEventArgs, Windows::UI::Xaml::Data::ICurrentChangingEventArgsFactory>().CreateInstance(*this, this->m_inner);
    }
    CurrentChangingEventArgsT(bool isCancelable)
    {
        get_activation_factory<Windows::UI::Xaml::Data::CurrentChangingEventArgs, Windows::UI::Xaml::Data::ICurrentChangingEventArgsFactory>().CreateWithCancelableParameter(isCancelable, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct ItemIndexRangeT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Data::IItemIndexRange>
{
    using composable = ItemIndexRange;

protected:
    ItemIndexRangeT(int32_t firstIndex, uint32_t length)
    {
        get_activation_factory<Windows::UI::Xaml::Data::ItemIndexRange, Windows::UI::Xaml::Data::IItemIndexRangeFactory>().CreateInstance(firstIndex, length, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct PropertyChangedEventArgsT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Data::IPropertyChangedEventArgs>
{
    using composable = PropertyChangedEventArgs;

protected:
    PropertyChangedEventArgsT(param::hstring const& name)
    {
        get_activation_factory<Windows::UI::Xaml::Data::PropertyChangedEventArgs, Windows::UI::Xaml::Data::IPropertyChangedEventArgsFactory>().CreateInstance(name, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct RelativeSourceT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Data::IRelativeSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = RelativeSource;

protected:
    RelativeSourceT()
    {
        get_activation_factory<Windows::UI::Xaml::Data::RelativeSource, Windows::UI::Xaml::Data::IRelativeSourceFactory>().CreateInstance(*this, this->m_inner);
    }
};

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Xaml::Data::IBinding> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::IBinding> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::IBinding2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::IBinding2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::IBindingBase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::IBindingBase> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::IBindingBaseFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::IBindingBaseFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::IBindingExpression> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::IBindingExpression> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::IBindingExpressionBase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::IBindingExpressionBase> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::IBindingExpressionBaseFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::IBindingExpressionBaseFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::IBindingExpressionFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::IBindingExpressionFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::IBindingFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::IBindingFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::IBindingOperations> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::IBindingOperations> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::IBindingOperationsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::IBindingOperationsStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::ICollectionView> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::ICollectionView> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::ICollectionViewFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::ICollectionViewFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::ICollectionViewGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::ICollectionViewGroup> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::ICollectionViewSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::ICollectionViewSource> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::ICollectionViewSourceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::ICollectionViewSourceStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::ICurrentChangingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::ICurrentChangingEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::ICurrentChangingEventArgsFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::ICurrentChangingEventArgsFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::ICustomProperty> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::ICustomProperty> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::ICustomPropertyProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::ICustomPropertyProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::IItemIndexRange> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::IItemIndexRange> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::IItemIndexRangeFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::IItemIndexRangeFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::IItemsRangeInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::IItemsRangeInfo> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::INotifyPropertyChanged> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::INotifyPropertyChanged> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::IPropertyChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::IPropertyChangedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::IPropertyChangedEventArgsFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::IPropertyChangedEventArgsFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::IRelativeSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::IRelativeSource> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::IRelativeSourceFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::IRelativeSourceFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::ISelectionInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::ISelectionInfo> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::ISupportIncrementalLoading> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::ISupportIncrementalLoading> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::IValueConverter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::IValueConverter> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::Binding> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::Binding> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::BindingBase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::BindingBase> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::BindingExpression> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::BindingExpression> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::BindingExpressionBase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::BindingExpressionBase> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::BindingOperations> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::BindingOperations> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::CollectionViewSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::CollectionViewSource> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::CurrentChangingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::CurrentChangingEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::ItemIndexRange> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::ItemIndexRange> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::PropertyChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::PropertyChangedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Data::RelativeSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Data::RelativeSource> {};

}

WINRT_WARNING_POP
