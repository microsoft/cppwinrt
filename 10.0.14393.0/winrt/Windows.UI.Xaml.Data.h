// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.UI.Xaml.Interop.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.UI.Xaml.3.h"
#include "internal/Windows.UI.Xaml.Data.3.h"
#include "Windows.UI.Xaml.h"
#include "internal/Windows.UI.Xaml.Data.5.h"

WINRT_EXPORT namespace winrt {

namespace Windows::UI::Xaml::Data {

template <typename L> CurrentChangingEventHandler::CurrentChangingEventHandler(L lambda) :
    CurrentChangingEventHandler(impl::make_delegate<impl_CurrentChangingEventHandler<L>, CurrentChangingEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> CurrentChangingEventHandler::CurrentChangingEventHandler(F * function) :
    CurrentChangingEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> CurrentChangingEventHandler::CurrentChangingEventHandler(O * object, M method) :
    CurrentChangingEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void CurrentChangingEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Data::CurrentChangingEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> PropertyChangedEventHandler::PropertyChangedEventHandler(L lambda) :
    PropertyChangedEventHandler(impl::make_delegate<impl_PropertyChangedEventHandler<L>, PropertyChangedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> PropertyChangedEventHandler::PropertyChangedEventHandler(F * function) :
    PropertyChangedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> PropertyChangedEventHandler::PropertyChangedEventHandler(O * object, M method) :
    PropertyChangedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void PropertyChangedEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Data::PropertyChangedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

}

namespace impl {

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::IBinding> : produce_base<D, Windows::UI::Xaml::Data::IBinding>
{
    HRESULT __stdcall get_Path(abi_arg_out<Windows::UI::Xaml::IPropertyPath> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Path());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Path(abi_arg_in<Windows::UI::Xaml::IPropertyPath> value) noexcept override
    {
        try
        {
            this->shim().Path(*reinterpret_cast<const Windows::UI::Xaml::PropertyPath *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mode(Windows::UI::Xaml::Data::BindingMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mode(Windows::UI::Xaml::Data::BindingMode value) noexcept override
    {
        try
        {
            this->shim().Mode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().Source(*reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RelativeSource(abi_arg_out<Windows::UI::Xaml::Data::IRelativeSource> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RelativeSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RelativeSource(abi_arg_in<Windows::UI::Xaml::Data::IRelativeSource> value) noexcept override
    {
        try
        {
            this->shim().RelativeSource(*reinterpret_cast<const Windows::UI::Xaml::Data::RelativeSource *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ElementName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ElementName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ElementName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ElementName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Converter(abi_arg_out<Windows::UI::Xaml::Data::IValueConverter> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Converter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Converter(abi_arg_in<Windows::UI::Xaml::Data::IValueConverter> value) noexcept override
    {
        try
        {
            this->shim().Converter(*reinterpret_cast<const Windows::UI::Xaml::Data::IValueConverter *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConverterParameter(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ConverterParameter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ConverterParameter(abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().ConverterParameter(*reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConverterLanguage(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ConverterLanguage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ConverterLanguage(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ConverterLanguage(*reinterpret_cast<const hstring *>(&value));
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
    HRESULT __stdcall get_FallbackValue(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FallbackValue());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FallbackValue(abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().FallbackValue(*reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TargetNullValue(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetNullValue());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetNullValue(abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().TargetNullValue(*reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UpdateSourceTrigger(Windows::UI::Xaml::Data::UpdateSourceTrigger * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UpdateSourceTrigger());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UpdateSourceTrigger(Windows::UI::Xaml::Data::UpdateSourceTrigger value) noexcept override
    {
        try
        {
            this->shim().UpdateSourceTrigger(value);
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
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Data::IBindingBase> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::IBindingExpression> : produce_base<D, Windows::UI::Xaml::Data::IBindingExpression>
{
    HRESULT __stdcall get_DataItem(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DataItem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ParentBinding(abi_arg_out<Windows::UI::Xaml::Data::IBinding> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ParentBinding());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UpdateSource() noexcept override
    {
        try
        {
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
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Data::IBinding> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
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
    HRESULT __stdcall abi_SetBinding(abi_arg_in<Windows::UI::Xaml::IDependencyObject> target, abi_arg_in<Windows::UI::Xaml::IDependencyProperty> dp, abi_arg_in<Windows::UI::Xaml::Data::IBindingBase> binding) noexcept override
    {
        try
        {
            this->shim().SetBinding(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&target), *reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&dp), *reinterpret_cast<const Windows::UI::Xaml::Data::BindingBase *>(&binding));
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
    HRESULT __stdcall get_CurrentItem(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CurrentItem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentPosition(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CurrentPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCurrentAfterLast(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsCurrentAfterLast());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCurrentBeforeFirst(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsCurrentBeforeFirst());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CollectionGroups(abi_arg_out<Windows::Foundation::Collections::IObservableVector<Windows::IInspectable>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CollectionGroups());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasMoreItems(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HasMoreItems());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CurrentChanged(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().CurrentChanged(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CurrentChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().CurrentChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CurrentChanging(abi_arg_in<Windows::UI::Xaml::Data::CurrentChangingEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().CurrentChanging(*reinterpret_cast<const Windows::UI::Xaml::Data::CurrentChangingEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CurrentChanging(event_token token) noexcept override
    {
        try
        {
            this->shim().CurrentChanging(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MoveCurrentTo(abi_arg_in<Windows::IInspectable> item, bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().MoveCurrentTo(*reinterpret_cast<const Windows::IInspectable *>(&item)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MoveCurrentToPosition(int32_t index, bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().MoveCurrentToPosition(index));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MoveCurrentToFirst(bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().MoveCurrentToFirst());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MoveCurrentToLast(bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().MoveCurrentToLast());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MoveCurrentToNext(bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().MoveCurrentToNext());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MoveCurrentToPrevious(bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().MoveCurrentToPrevious());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LoadMoreItemsAsync(uint32_t count, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Data::LoadMoreItemsResult>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().LoadMoreItemsAsync(count));
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
    HRESULT __stdcall abi_CreateView(abi_arg_out<Windows::UI::Xaml::Data::ICollectionView> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateView());
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
    HRESULT __stdcall get_Group(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Group());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GroupItems(abi_arg_out<Windows::Foundation::Collections::IObservableVector<Windows::IInspectable>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GroupItems());
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
    HRESULT __stdcall get_Source(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().Source(*reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_View(abi_arg_out<Windows::UI::Xaml::Data::ICollectionView> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().View());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSourceGrouped(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsSourceGrouped());
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
            this->shim().IsSourceGrouped(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemsPath(abi_arg_out<Windows::UI::Xaml::IPropertyPath> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ItemsPath());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ItemsPath(abi_arg_in<Windows::UI::Xaml::IPropertyPath> value) noexcept override
    {
        try
        {
            this->shim().ItemsPath(*reinterpret_cast<const Windows::UI::Xaml::PropertyPath *>(&value));
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
    HRESULT __stdcall get_SourceProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SourceProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ViewProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ViewProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSourceGroupedProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsSourceGroupedProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemsPathProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ItemsPathProperty());
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
    HRESULT __stdcall get_Cancel(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Cancel());
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
            this->shim().Cancel(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCancelable(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsCancelable());
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
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Data::ICurrentChangingEventArgs> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithCancelableParameter(bool isCancelable, abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Data::ICurrentChangingEventArgs> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateWithCancelableParameter(isCancelable, *reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::ICustomProperty> : produce_base<D, Windows::UI::Xaml::Data::ICustomProperty>
{
    HRESULT __stdcall get_Type(abi_arg_out<Windows::UI::Xaml::Interop::TypeName> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetValue(abi_arg_in<Windows::IInspectable> target, abi_arg_out<Windows::IInspectable> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetValue(*reinterpret_cast<const Windows::IInspectable *>(&target)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetValue(abi_arg_in<Windows::IInspectable> target, abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().SetValue(*reinterpret_cast<const Windows::IInspectable *>(&target), *reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIndexedValue(abi_arg_in<Windows::IInspectable> target, abi_arg_in<Windows::IInspectable> index, abi_arg_out<Windows::IInspectable> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetIndexedValue(*reinterpret_cast<const Windows::IInspectable *>(&target), *reinterpret_cast<const Windows::IInspectable *>(&index)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetIndexedValue(abi_arg_in<Windows::IInspectable> target, abi_arg_in<Windows::IInspectable> value, abi_arg_in<Windows::IInspectable> index) noexcept override
    {
        try
        {
            this->shim().SetIndexedValue(*reinterpret_cast<const Windows::IInspectable *>(&target), *reinterpret_cast<const Windows::IInspectable *>(&value), *reinterpret_cast<const Windows::IInspectable *>(&index));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanWrite(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanWrite());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanRead(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanRead());
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
    HRESULT __stdcall abi_GetCustomProperty(abi_arg_in<hstring> name, abi_arg_out<Windows::UI::Xaml::Data::ICustomProperty> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetCustomProperty(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIndexedProperty(abi_arg_in<hstring> name, abi_arg_in<Windows::UI::Xaml::Interop::TypeName> type, abi_arg_out<Windows::UI::Xaml::Data::ICustomProperty> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetIndexedProperty(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::UI::Xaml::Interop::TypeName *>(&type)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetStringRepresentation(abi_arg_out<hstring> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetStringRepresentation());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Type(abi_arg_out<Windows::UI::Xaml::Interop::TypeName> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Type());
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
    HRESULT __stdcall get_FirstIndex(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FirstIndex());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Length(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Length());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastIndex(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LastIndex());
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
    HRESULT __stdcall abi_CreateInstance(int32_t firstIndex, uint32_t length, abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Data::IItemIndexRange> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(firstIndex, length, *reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::IItemsRangeInfo> : produce_base<D, Windows::UI::Xaml::Data::IItemsRangeInfo>
{
    HRESULT __stdcall abi_RangesChanged(abi_arg_in<Windows::UI::Xaml::Data::IItemIndexRange> visibleRange, abi_arg_in<Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Data::ItemIndexRange>> trackedItems) noexcept override
    {
        try
        {
            this->shim().RangesChanged(*reinterpret_cast<const Windows::UI::Xaml::Data::ItemIndexRange *>(&visibleRange), *reinterpret_cast<const Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Data::ItemIndexRange> *>(&trackedItems));
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
    HRESULT __stdcall add_PropertyChanged(abi_arg_in<Windows::UI::Xaml::Data::PropertyChangedEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PropertyChanged(*reinterpret_cast<const Windows::UI::Xaml::Data::PropertyChangedEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PropertyChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().PropertyChanged(token);
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
    HRESULT __stdcall get_PropertyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PropertyName());
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
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<hstring> name, abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Data::IPropertyChangedEventArgs> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::IRelativeSource> : produce_base<D, Windows::UI::Xaml::Data::IRelativeSource>
{
    HRESULT __stdcall get_Mode(Windows::UI::Xaml::Data::RelativeSourceMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mode(Windows::UI::Xaml::Data::RelativeSourceMode value) noexcept override
    {
        try
        {
            this->shim().Mode(value);
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
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Data::IRelativeSource> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Data::ISelectionInfo> : produce_base<D, Windows::UI::Xaml::Data::ISelectionInfo>
{
    HRESULT __stdcall abi_SelectRange(abi_arg_in<Windows::UI::Xaml::Data::IItemIndexRange> itemIndexRange) noexcept override
    {
        try
        {
            this->shim().SelectRange(*reinterpret_cast<const Windows::UI::Xaml::Data::ItemIndexRange *>(&itemIndexRange));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeselectRange(abi_arg_in<Windows::UI::Xaml::Data::IItemIndexRange> itemIndexRange) noexcept override
    {
        try
        {
            this->shim().DeselectRange(*reinterpret_cast<const Windows::UI::Xaml::Data::ItemIndexRange *>(&itemIndexRange));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsSelected(int32_t index, bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().IsSelected(index));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSelectedRanges(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Data::ItemIndexRange>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetSelectedRanges());
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
    HRESULT __stdcall abi_LoadMoreItemsAsync(uint32_t count, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Data::LoadMoreItemsResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().LoadMoreItemsAsync(count));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasMoreItems(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HasMoreItems());
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
    HRESULT __stdcall abi_Convert(abi_arg_in<Windows::IInspectable> value, abi_arg_in<Windows::UI::Xaml::Interop::TypeName> targetType, abi_arg_in<Windows::IInspectable> parameter, abi_arg_in<hstring> language, abi_arg_out<Windows::IInspectable> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().Convert(*reinterpret_cast<const Windows::IInspectable *>(&value), *reinterpret_cast<const Windows::UI::Xaml::Interop::TypeName *>(&targetType), *reinterpret_cast<const Windows::IInspectable *>(&parameter), *reinterpret_cast<const hstring *>(&language)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConvertBack(abi_arg_in<Windows::IInspectable> value, abi_arg_in<Windows::UI::Xaml::Interop::TypeName> targetType, abi_arg_in<Windows::IInspectable> parameter, abi_arg_in<hstring> language, abi_arg_out<Windows::IInspectable> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().ConvertBack(*reinterpret_cast<const Windows::IInspectable *>(&value), *reinterpret_cast<const Windows::UI::Xaml::Interop::TypeName *>(&targetType), *reinterpret_cast<const Windows::IInspectable *>(&parameter), *reinterpret_cast<const hstring *>(&language)));
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

namespace Windows::UI::Xaml::Data {

template <typename D> void impl_IItemsRangeInfo<D>::RangesChanged(const Windows::UI::Xaml::Data::ItemIndexRange & visibleRange, const Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Data::ItemIndexRange> & trackedItems) const
{
    check_hresult(static_cast<const IItemsRangeInfo &>(static_cast<const D &>(*this))->abi_RangesChanged(get(visibleRange), get(trackedItems)));
}

template <typename D> void impl_ISelectionInfo<D>::SelectRange(const Windows::UI::Xaml::Data::ItemIndexRange & itemIndexRange) const
{
    check_hresult(static_cast<const ISelectionInfo &>(static_cast<const D &>(*this))->abi_SelectRange(get(itemIndexRange)));
}

template <typename D> void impl_ISelectionInfo<D>::DeselectRange(const Windows::UI::Xaml::Data::ItemIndexRange & itemIndexRange) const
{
    check_hresult(static_cast<const ISelectionInfo &>(static_cast<const D &>(*this))->abi_DeselectRange(get(itemIndexRange)));
}

template <typename D> bool impl_ISelectionInfo<D>::IsSelected(int32_t index) const
{
    bool returnValue {};
    check_hresult(static_cast<const ISelectionInfo &>(static_cast<const D &>(*this))->abi_IsSelected(index, &returnValue));
    return returnValue;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Data::ItemIndexRange> impl_ISelectionInfo<D>::GetSelectedRanges() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Data::ItemIndexRange> returnValue;
    check_hresult(static_cast<const ISelectionInfo &>(static_cast<const D &>(*this))->abi_GetSelectedRanges(put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Interop::TypeName impl_ICustomProperty<D>::Type() const
{
    Windows::UI::Xaml::Interop::TypeName value {};
    check_hresult(static_cast<const ICustomProperty &>(static_cast<const D &>(*this))->get_Type(put(value)));
    return value;
}

template <typename D> hstring impl_ICustomProperty<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const ICustomProperty &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> Windows::IInspectable impl_ICustomProperty<D>::GetValue(const Windows::IInspectable & target) const
{
    Windows::IInspectable returnValue;
    check_hresult(static_cast<const ICustomProperty &>(static_cast<const D &>(*this))->abi_GetValue(get(target), put(returnValue)));
    return returnValue;
}

template <typename D> void impl_ICustomProperty<D>::SetValue(const Windows::IInspectable & target, const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const ICustomProperty &>(static_cast<const D &>(*this))->abi_SetValue(get(target), get(value)));
}

template <typename D> Windows::IInspectable impl_ICustomProperty<D>::GetIndexedValue(const Windows::IInspectable & target, const Windows::IInspectable & index) const
{
    Windows::IInspectable returnValue;
    check_hresult(static_cast<const ICustomProperty &>(static_cast<const D &>(*this))->abi_GetIndexedValue(get(target), get(index), put(returnValue)));
    return returnValue;
}

template <typename D> void impl_ICustomProperty<D>::SetIndexedValue(const Windows::IInspectable & target, const Windows::IInspectable & value, const Windows::IInspectable & index) const
{
    check_hresult(static_cast<const ICustomProperty &>(static_cast<const D &>(*this))->abi_SetIndexedValue(get(target), get(value), get(index)));
}

template <typename D> bool impl_ICustomProperty<D>::CanWrite() const
{
    bool value {};
    check_hresult(static_cast<const ICustomProperty &>(static_cast<const D &>(*this))->get_CanWrite(&value));
    return value;
}

template <typename D> bool impl_ICustomProperty<D>::CanRead() const
{
    bool value {};
    check_hresult(static_cast<const ICustomProperty &>(static_cast<const D &>(*this))->get_CanRead(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Data::ICustomProperty impl_ICustomPropertyProvider<D>::GetCustomProperty(hstring_ref name) const
{
    Windows::UI::Xaml::Data::ICustomProperty returnValue;
    check_hresult(static_cast<const ICustomPropertyProvider &>(static_cast<const D &>(*this))->abi_GetCustomProperty(get(name), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Data::ICustomProperty impl_ICustomPropertyProvider<D>::GetIndexedProperty(hstring_ref name, const Windows::UI::Xaml::Interop::TypeName & type) const
{
    Windows::UI::Xaml::Data::ICustomProperty returnValue;
    check_hresult(static_cast<const ICustomPropertyProvider &>(static_cast<const D &>(*this))->abi_GetIndexedProperty(get(name), get(type), put(returnValue)));
    return returnValue;
}

template <typename D> hstring impl_ICustomPropertyProvider<D>::GetStringRepresentation() const
{
    hstring returnValue;
    check_hresult(static_cast<const ICustomPropertyProvider &>(static_cast<const D &>(*this))->abi_GetStringRepresentation(put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Interop::TypeName impl_ICustomPropertyProvider<D>::Type() const
{
    Windows::UI::Xaml::Interop::TypeName value {};
    check_hresult(static_cast<const ICustomPropertyProvider &>(static_cast<const D &>(*this))->get_Type(put(value)));
    return value;
}

template <typename D> event_token impl_INotifyPropertyChanged<D>::PropertyChanged(const Windows::UI::Xaml::Data::PropertyChangedEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const INotifyPropertyChanged &>(static_cast<const D &>(*this))->add_PropertyChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<INotifyPropertyChanged> impl_INotifyPropertyChanged<D>::PropertyChanged(auto_revoke_t, const Windows::UI::Xaml::Data::PropertyChangedEventHandler & value) const
{
    return impl::make_event_revoker<D, INotifyPropertyChanged>(this, &ABI::Windows::UI::Xaml::Data::INotifyPropertyChanged::remove_PropertyChanged, PropertyChanged(value));
}

template <typename D> void impl_INotifyPropertyChanged<D>::PropertyChanged(event_token token) const
{
    check_hresult(static_cast<const INotifyPropertyChanged &>(static_cast<const D &>(*this))->remove_PropertyChanged(token));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Data::LoadMoreItemsResult> impl_ISupportIncrementalLoading<D>::LoadMoreItemsAsync(uint32_t count) const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Data::LoadMoreItemsResult> operation;
    check_hresult(static_cast<const ISupportIncrementalLoading &>(static_cast<const D &>(*this))->abi_LoadMoreItemsAsync(count, put(operation)));
    return operation;
}

template <typename D> bool impl_ISupportIncrementalLoading<D>::HasMoreItems() const
{
    bool value {};
    check_hresult(static_cast<const ISupportIncrementalLoading &>(static_cast<const D &>(*this))->get_HasMoreItems(&value));
    return value;
}

template <typename D> Windows::IInspectable impl_IValueConverter<D>::Convert(const Windows::IInspectable & value, const Windows::UI::Xaml::Interop::TypeName & targetType, const Windows::IInspectable & parameter, hstring_ref language) const
{
    Windows::IInspectable returnValue;
    check_hresult(static_cast<const IValueConverter &>(static_cast<const D &>(*this))->abi_Convert(get(value), get(targetType), get(parameter), get(language), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::IInspectable impl_IValueConverter<D>::ConvertBack(const Windows::IInspectable & value, const Windows::UI::Xaml::Interop::TypeName & targetType, const Windows::IInspectable & parameter, hstring_ref language) const
{
    Windows::IInspectable returnValue;
    check_hresult(static_cast<const IValueConverter &>(static_cast<const D &>(*this))->abi_ConvertBack(get(value), get(targetType), get(parameter), get(language), put(returnValue)));
    return returnValue;
}

template <typename D> void impl_IBindingOperationsStatics<D>::SetBinding(const Windows::UI::Xaml::DependencyObject & target, const Windows::UI::Xaml::DependencyProperty & dp, const Windows::UI::Xaml::Data::BindingBase & binding) const
{
    check_hresult(static_cast<const IBindingOperationsStatics &>(static_cast<const D &>(*this))->abi_SetBinding(get(target), get(dp), get(binding)));
}

template <typename D> bool impl_ICurrentChangingEventArgs<D>::Cancel() const
{
    bool value {};
    check_hresult(static_cast<const ICurrentChangingEventArgs &>(static_cast<const D &>(*this))->get_Cancel(&value));
    return value;
}

template <typename D> void impl_ICurrentChangingEventArgs<D>::Cancel(bool value) const
{
    check_hresult(static_cast<const ICurrentChangingEventArgs &>(static_cast<const D &>(*this))->put_Cancel(value));
}

template <typename D> bool impl_ICurrentChangingEventArgs<D>::IsCancelable() const
{
    bool value {};
    check_hresult(static_cast<const ICurrentChangingEventArgs &>(static_cast<const D &>(*this))->get_IsCancelable(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Data::CurrentChangingEventArgs impl_ICurrentChangingEventArgsFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Data::CurrentChangingEventArgs instance { nullptr };
    check_hresult(static_cast<const ICurrentChangingEventArgsFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Data::CurrentChangingEventArgs impl_ICurrentChangingEventArgsFactory<D>::CreateWithCancelableParameter(bool isCancelable, const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Data::CurrentChangingEventArgs instance { nullptr };
    check_hresult(static_cast<const ICurrentChangingEventArgsFactory &>(static_cast<const D &>(*this))->abi_CreateWithCancelableParameter(isCancelable, get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> hstring impl_IPropertyChangedEventArgs<D>::PropertyName() const
{
    hstring value;
    check_hresult(static_cast<const IPropertyChangedEventArgs &>(static_cast<const D &>(*this))->get_PropertyName(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Data::PropertyChangedEventArgs impl_IPropertyChangedEventArgsFactory<D>::CreateInstance(hstring_ref name, const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Data::PropertyChangedEventArgs instance { nullptr };
    check_hresult(static_cast<const IPropertyChangedEventArgsFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(name), get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Data::BindingBase impl_IBindingBaseFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Data::BindingBase instance { nullptr };
    check_hresult(static_cast<const IBindingBaseFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::IInspectable impl_IBindingExpression<D>::DataItem() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IBindingExpression &>(static_cast<const D &>(*this))->get_DataItem(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Data::Binding impl_IBindingExpression<D>::ParentBinding() const
{
    Windows::UI::Xaml::Data::Binding value { nullptr };
    check_hresult(static_cast<const IBindingExpression &>(static_cast<const D &>(*this))->get_ParentBinding(put(value)));
    return value;
}

template <typename D> void impl_IBindingExpression<D>::UpdateSource() const
{
    check_hresult(static_cast<const IBindingExpression &>(static_cast<const D &>(*this))->abi_UpdateSource());
}

template <typename D> Windows::UI::Xaml::Data::RelativeSourceMode impl_IRelativeSource<D>::Mode() const
{
    Windows::UI::Xaml::Data::RelativeSourceMode value {};
    check_hresult(static_cast<const IRelativeSource &>(static_cast<const D &>(*this))->get_Mode(&value));
    return value;
}

template <typename D> void impl_IRelativeSource<D>::Mode(Windows::UI::Xaml::Data::RelativeSourceMode value) const
{
    check_hresult(static_cast<const IRelativeSource &>(static_cast<const D &>(*this))->put_Mode(value));
}

template <typename D> Windows::UI::Xaml::Data::RelativeSource impl_IRelativeSourceFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Data::RelativeSource instance { nullptr };
    check_hresult(static_cast<const IRelativeSourceFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::PropertyPath impl_IBinding<D>::Path() const
{
    Windows::UI::Xaml::PropertyPath value { nullptr };
    check_hresult(static_cast<const IBinding &>(static_cast<const D &>(*this))->get_Path(put(value)));
    return value;
}

template <typename D> void impl_IBinding<D>::Path(const Windows::UI::Xaml::PropertyPath & value) const
{
    check_hresult(static_cast<const IBinding &>(static_cast<const D &>(*this))->put_Path(get(value)));
}

template <typename D> Windows::UI::Xaml::Data::BindingMode impl_IBinding<D>::Mode() const
{
    Windows::UI::Xaml::Data::BindingMode value {};
    check_hresult(static_cast<const IBinding &>(static_cast<const D &>(*this))->get_Mode(&value));
    return value;
}

template <typename D> void impl_IBinding<D>::Mode(Windows::UI::Xaml::Data::BindingMode value) const
{
    check_hresult(static_cast<const IBinding &>(static_cast<const D &>(*this))->put_Mode(value));
}

template <typename D> Windows::IInspectable impl_IBinding<D>::Source() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IBinding &>(static_cast<const D &>(*this))->get_Source(put(value)));
    return value;
}

template <typename D> void impl_IBinding<D>::Source(const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const IBinding &>(static_cast<const D &>(*this))->put_Source(get(value)));
}

template <typename D> Windows::UI::Xaml::Data::RelativeSource impl_IBinding<D>::RelativeSource() const
{
    Windows::UI::Xaml::Data::RelativeSource value { nullptr };
    check_hresult(static_cast<const IBinding &>(static_cast<const D &>(*this))->get_RelativeSource(put(value)));
    return value;
}

template <typename D> void impl_IBinding<D>::RelativeSource(const Windows::UI::Xaml::Data::RelativeSource & value) const
{
    check_hresult(static_cast<const IBinding &>(static_cast<const D &>(*this))->put_RelativeSource(get(value)));
}

template <typename D> hstring impl_IBinding<D>::ElementName() const
{
    hstring value;
    check_hresult(static_cast<const IBinding &>(static_cast<const D &>(*this))->get_ElementName(put(value)));
    return value;
}

template <typename D> void impl_IBinding<D>::ElementName(hstring_ref value) const
{
    check_hresult(static_cast<const IBinding &>(static_cast<const D &>(*this))->put_ElementName(get(value)));
}

template <typename D> Windows::UI::Xaml::Data::IValueConverter impl_IBinding<D>::Converter() const
{
    Windows::UI::Xaml::Data::IValueConverter value;
    check_hresult(static_cast<const IBinding &>(static_cast<const D &>(*this))->get_Converter(put(value)));
    return value;
}

template <typename D> void impl_IBinding<D>::Converter(const Windows::UI::Xaml::Data::IValueConverter & value) const
{
    check_hresult(static_cast<const IBinding &>(static_cast<const D &>(*this))->put_Converter(get(value)));
}

template <typename D> Windows::IInspectable impl_IBinding<D>::ConverterParameter() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IBinding &>(static_cast<const D &>(*this))->get_ConverterParameter(put(value)));
    return value;
}

template <typename D> void impl_IBinding<D>::ConverterParameter(const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const IBinding &>(static_cast<const D &>(*this))->put_ConverterParameter(get(value)));
}

template <typename D> hstring impl_IBinding<D>::ConverterLanguage() const
{
    hstring value;
    check_hresult(static_cast<const IBinding &>(static_cast<const D &>(*this))->get_ConverterLanguage(put(value)));
    return value;
}

template <typename D> void impl_IBinding<D>::ConverterLanguage(hstring_ref value) const
{
    check_hresult(static_cast<const IBinding &>(static_cast<const D &>(*this))->put_ConverterLanguage(get(value)));
}

template <typename D> Windows::UI::Xaml::Data::Binding impl_IBindingFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Data::Binding instance { nullptr };
    check_hresult(static_cast<const IBindingFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::IInspectable impl_IBinding2<D>::FallbackValue() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IBinding2 &>(static_cast<const D &>(*this))->get_FallbackValue(put(value)));
    return value;
}

template <typename D> void impl_IBinding2<D>::FallbackValue(const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const IBinding2 &>(static_cast<const D &>(*this))->put_FallbackValue(get(value)));
}

template <typename D> Windows::IInspectable impl_IBinding2<D>::TargetNullValue() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IBinding2 &>(static_cast<const D &>(*this))->get_TargetNullValue(put(value)));
    return value;
}

template <typename D> void impl_IBinding2<D>::TargetNullValue(const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const IBinding2 &>(static_cast<const D &>(*this))->put_TargetNullValue(get(value)));
}

template <typename D> Windows::UI::Xaml::Data::UpdateSourceTrigger impl_IBinding2<D>::UpdateSourceTrigger() const
{
    Windows::UI::Xaml::Data::UpdateSourceTrigger value {};
    check_hresult(static_cast<const IBinding2 &>(static_cast<const D &>(*this))->get_UpdateSourceTrigger(&value));
    return value;
}

template <typename D> void impl_IBinding2<D>::UpdateSourceTrigger(Windows::UI::Xaml::Data::UpdateSourceTrigger value) const
{
    check_hresult(static_cast<const IBinding2 &>(static_cast<const D &>(*this))->put_UpdateSourceTrigger(value));
}

template <typename D> Windows::IInspectable impl_ICollectionView<D>::CurrentItem() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const ICollectionView &>(static_cast<const D &>(*this))->get_CurrentItem(put(value)));
    return value;
}

template <typename D> int32_t impl_ICollectionView<D>::CurrentPosition() const
{
    int32_t value {};
    check_hresult(static_cast<const ICollectionView &>(static_cast<const D &>(*this))->get_CurrentPosition(&value));
    return value;
}

template <typename D> bool impl_ICollectionView<D>::IsCurrentAfterLast() const
{
    bool value {};
    check_hresult(static_cast<const ICollectionView &>(static_cast<const D &>(*this))->get_IsCurrentAfterLast(&value));
    return value;
}

template <typename D> bool impl_ICollectionView<D>::IsCurrentBeforeFirst() const
{
    bool value {};
    check_hresult(static_cast<const ICollectionView &>(static_cast<const D &>(*this))->get_IsCurrentBeforeFirst(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IObservableVector<Windows::IInspectable> impl_ICollectionView<D>::CollectionGroups() const
{
    Windows::Foundation::Collections::IObservableVector<Windows::IInspectable> value;
    check_hresult(static_cast<const ICollectionView &>(static_cast<const D &>(*this))->get_CollectionGroups(put(value)));
    return value;
}

template <typename D> bool impl_ICollectionView<D>::HasMoreItems() const
{
    bool value {};
    check_hresult(static_cast<const ICollectionView &>(static_cast<const D &>(*this))->get_HasMoreItems(&value));
    return value;
}

template <typename D> event_token impl_ICollectionView<D>::CurrentChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const ICollectionView &>(static_cast<const D &>(*this))->add_CurrentChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<ICollectionView> impl_ICollectionView<D>::CurrentChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, ICollectionView>(this, &ABI::Windows::UI::Xaml::Data::ICollectionView::remove_CurrentChanged, CurrentChanged(value));
}

template <typename D> void impl_ICollectionView<D>::CurrentChanged(event_token token) const
{
    check_hresult(static_cast<const ICollectionView &>(static_cast<const D &>(*this))->remove_CurrentChanged(token));
}

template <typename D> event_token impl_ICollectionView<D>::CurrentChanging(const Windows::UI::Xaml::Data::CurrentChangingEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const ICollectionView &>(static_cast<const D &>(*this))->add_CurrentChanging(get(value), &token));
    return token;
}

template <typename D> event_revoker<ICollectionView> impl_ICollectionView<D>::CurrentChanging(auto_revoke_t, const Windows::UI::Xaml::Data::CurrentChangingEventHandler & value) const
{
    return impl::make_event_revoker<D, ICollectionView>(this, &ABI::Windows::UI::Xaml::Data::ICollectionView::remove_CurrentChanging, CurrentChanging(value));
}

template <typename D> void impl_ICollectionView<D>::CurrentChanging(event_token token) const
{
    check_hresult(static_cast<const ICollectionView &>(static_cast<const D &>(*this))->remove_CurrentChanging(token));
}

template <typename D> bool impl_ICollectionView<D>::MoveCurrentTo(const Windows::IInspectable & item) const
{
    bool returnValue {};
    check_hresult(static_cast<const ICollectionView &>(static_cast<const D &>(*this))->abi_MoveCurrentTo(get(item), &returnValue));
    return returnValue;
}

template <typename D> bool impl_ICollectionView<D>::MoveCurrentToPosition(int32_t index) const
{
    bool returnValue {};
    check_hresult(static_cast<const ICollectionView &>(static_cast<const D &>(*this))->abi_MoveCurrentToPosition(index, &returnValue));
    return returnValue;
}

template <typename D> bool impl_ICollectionView<D>::MoveCurrentToFirst() const
{
    bool returnValue {};
    check_hresult(static_cast<const ICollectionView &>(static_cast<const D &>(*this))->abi_MoveCurrentToFirst(&returnValue));
    return returnValue;
}

template <typename D> bool impl_ICollectionView<D>::MoveCurrentToLast() const
{
    bool returnValue {};
    check_hresult(static_cast<const ICollectionView &>(static_cast<const D &>(*this))->abi_MoveCurrentToLast(&returnValue));
    return returnValue;
}

template <typename D> bool impl_ICollectionView<D>::MoveCurrentToNext() const
{
    bool returnValue {};
    check_hresult(static_cast<const ICollectionView &>(static_cast<const D &>(*this))->abi_MoveCurrentToNext(&returnValue));
    return returnValue;
}

template <typename D> bool impl_ICollectionView<D>::MoveCurrentToPrevious() const
{
    bool returnValue {};
    check_hresult(static_cast<const ICollectionView &>(static_cast<const D &>(*this))->abi_MoveCurrentToPrevious(&returnValue));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Data::LoadMoreItemsResult> impl_ICollectionView<D>::LoadMoreItemsAsync(uint32_t count) const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Data::LoadMoreItemsResult> returnValue;
    check_hresult(static_cast<const ICollectionView &>(static_cast<const D &>(*this))->abi_LoadMoreItemsAsync(count, put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Data::ICollectionView impl_ICollectionViewFactory<D>::CreateView() const
{
    Windows::UI::Xaml::Data::ICollectionView result;
    check_hresult(static_cast<const ICollectionViewFactory &>(static_cast<const D &>(*this))->abi_CreateView(put(result)));
    return result;
}

template <typename D> Windows::IInspectable impl_ICollectionViewGroup<D>::Group() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const ICollectionViewGroup &>(static_cast<const D &>(*this))->get_Group(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IObservableVector<Windows::IInspectable> impl_ICollectionViewGroup<D>::GroupItems() const
{
    Windows::Foundation::Collections::IObservableVector<Windows::IInspectable> value;
    check_hresult(static_cast<const ICollectionViewGroup &>(static_cast<const D &>(*this))->get_GroupItems(put(value)));
    return value;
}

template <typename D> int32_t impl_IItemIndexRange<D>::FirstIndex() const
{
    int32_t value {};
    check_hresult(static_cast<const IItemIndexRange &>(static_cast<const D &>(*this))->get_FirstIndex(&value));
    return value;
}

template <typename D> uint32_t impl_IItemIndexRange<D>::Length() const
{
    uint32_t value {};
    check_hresult(static_cast<const IItemIndexRange &>(static_cast<const D &>(*this))->get_Length(&value));
    return value;
}

template <typename D> int32_t impl_IItemIndexRange<D>::LastIndex() const
{
    int32_t value {};
    check_hresult(static_cast<const IItemIndexRange &>(static_cast<const D &>(*this))->get_LastIndex(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Data::ItemIndexRange impl_IItemIndexRangeFactory<D>::CreateInstance(int32_t firstIndex, uint32_t length, const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Data::ItemIndexRange instance { nullptr };
    check_hresult(static_cast<const IItemIndexRangeFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(firstIndex, length, get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::IInspectable impl_ICollectionViewSource<D>::Source() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const ICollectionViewSource &>(static_cast<const D &>(*this))->get_Source(put(value)));
    return value;
}

template <typename D> void impl_ICollectionViewSource<D>::Source(const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const ICollectionViewSource &>(static_cast<const D &>(*this))->put_Source(get(value)));
}

template <typename D> Windows::UI::Xaml::Data::ICollectionView impl_ICollectionViewSource<D>::View() const
{
    Windows::UI::Xaml::Data::ICollectionView value;
    check_hresult(static_cast<const ICollectionViewSource &>(static_cast<const D &>(*this))->get_View(put(value)));
    return value;
}

template <typename D> bool impl_ICollectionViewSource<D>::IsSourceGrouped() const
{
    bool value {};
    check_hresult(static_cast<const ICollectionViewSource &>(static_cast<const D &>(*this))->get_IsSourceGrouped(&value));
    return value;
}

template <typename D> void impl_ICollectionViewSource<D>::IsSourceGrouped(bool value) const
{
    check_hresult(static_cast<const ICollectionViewSource &>(static_cast<const D &>(*this))->put_IsSourceGrouped(value));
}

template <typename D> Windows::UI::Xaml::PropertyPath impl_ICollectionViewSource<D>::ItemsPath() const
{
    Windows::UI::Xaml::PropertyPath value { nullptr };
    check_hresult(static_cast<const ICollectionViewSource &>(static_cast<const D &>(*this))->get_ItemsPath(put(value)));
    return value;
}

template <typename D> void impl_ICollectionViewSource<D>::ItemsPath(const Windows::UI::Xaml::PropertyPath & value) const
{
    check_hresult(static_cast<const ICollectionViewSource &>(static_cast<const D &>(*this))->put_ItemsPath(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ICollectionViewSourceStatics<D>::SourceProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ICollectionViewSourceStatics &>(static_cast<const D &>(*this))->get_SourceProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ICollectionViewSourceStatics<D>::ViewProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ICollectionViewSourceStatics &>(static_cast<const D &>(*this))->get_ViewProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ICollectionViewSourceStatics<D>::IsSourceGroupedProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ICollectionViewSourceStatics &>(static_cast<const D &>(*this))->get_IsSourceGroupedProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ICollectionViewSourceStatics<D>::ItemsPathProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ICollectionViewSourceStatics &>(static_cast<const D &>(*this))->get_ItemsPathProperty(put(value)));
    return value;
}

inline Binding::Binding()
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<Binding, IBindingFactory>().CreateInstance(outer, inner));
}

inline BindingBase::BindingBase()
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<BindingBase, IBindingBaseFactory>().CreateInstance(outer, inner));
}

inline void BindingOperations::SetBinding(const Windows::UI::Xaml::DependencyObject & target, const Windows::UI::Xaml::DependencyProperty & dp, const Windows::UI::Xaml::Data::BindingBase & binding)
{
    get_activation_factory<BindingOperations, IBindingOperationsStatics>().SetBinding(target, dp, binding);
}

inline CollectionViewSource::CollectionViewSource() :
    CollectionViewSource(activate_instance<CollectionViewSource>())
{}

inline Windows::UI::Xaml::DependencyProperty CollectionViewSource::SourceProperty()
{
    return get_activation_factory<CollectionViewSource, ICollectionViewSourceStatics>().SourceProperty();
}

inline Windows::UI::Xaml::DependencyProperty CollectionViewSource::ViewProperty()
{
    return get_activation_factory<CollectionViewSource, ICollectionViewSourceStatics>().ViewProperty();
}

inline Windows::UI::Xaml::DependencyProperty CollectionViewSource::IsSourceGroupedProperty()
{
    return get_activation_factory<CollectionViewSource, ICollectionViewSourceStatics>().IsSourceGroupedProperty();
}

inline Windows::UI::Xaml::DependencyProperty CollectionViewSource::ItemsPathProperty()
{
    return get_activation_factory<CollectionViewSource, ICollectionViewSourceStatics>().ItemsPathProperty();
}

inline CurrentChangingEventArgs::CurrentChangingEventArgs()
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<CurrentChangingEventArgs, ICurrentChangingEventArgsFactory>().CreateInstance(outer, inner));
}

inline CurrentChangingEventArgs::CurrentChangingEventArgs(bool isCancelable)
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<CurrentChangingEventArgs, ICurrentChangingEventArgsFactory>().CreateWithCancelableParameter(isCancelable, outer, inner));
}

inline ItemIndexRange::ItemIndexRange(int32_t firstIndex, uint32_t length)
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<ItemIndexRange, IItemIndexRangeFactory>().CreateInstance(firstIndex, length, outer, inner));
}

inline PropertyChangedEventArgs::PropertyChangedEventArgs(hstring_ref name)
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<PropertyChangedEventArgs, IPropertyChangedEventArgsFactory>().CreateInstance(name, outer, inner));
}

inline RelativeSource::RelativeSource()
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<RelativeSource, IRelativeSourceFactory>().CreateInstance(outer, inner));
}

}

}
