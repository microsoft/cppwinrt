// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.UI.Xaml.Interop.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.UI.Xaml.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.UI.Xaml.Markup.3.h"
#include "Windows.UI.Xaml.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::UI::Xaml::Markup::IComponentConnector> : produce_base<D, Windows::UI::Xaml::Markup::IComponentConnector>
{
    HRESULT __stdcall abi_Connect(int32_t connectionId, abi_arg_in<Windows::IInspectable> target) noexcept override
    {
        try
        {
            this->shim().Connect(connectionId, *reinterpret_cast<const Windows::IInspectable *>(&target));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Markup::IComponentConnector2> : produce_base<D, Windows::UI::Xaml::Markup::IComponentConnector2>
{
    HRESULT __stdcall abi_GetBindingConnector(int32_t connectionId, abi_arg_in<Windows::IInspectable> target, abi_arg_out<Windows::UI::Xaml::Markup::IComponentConnector> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetBindingConnector(connectionId, *reinterpret_cast<const Windows::IInspectable *>(&target)));
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
struct produce<D, Windows::UI::Xaml::Markup::IDataTemplateComponent> : produce_base<D, Windows::UI::Xaml::Markup::IDataTemplateComponent>
{
    HRESULT __stdcall abi_Recycle() noexcept override
    {
        try
        {
            this->shim().Recycle();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ProcessBindings(abi_arg_in<Windows::IInspectable> item, int32_t itemIndex, int32_t phase, int32_t * nextPhase) noexcept override
    {
        try
        {
            this->shim().ProcessBindings(*reinterpret_cast<const Windows::IInspectable *>(&item), itemIndex, phase, *nextPhase);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Markup::IXamlBinaryWriter> : produce_base<D, Windows::UI::Xaml::Markup::IXamlBinaryWriter>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Markup::IXamlBinaryWriterStatics> : produce_base<D, Windows::UI::Xaml::Markup::IXamlBinaryWriterStatics>
{
    HRESULT __stdcall abi_Write(abi_arg_in<Windows::Foundation::Collections::IVector<Windows::Storage::Streams::IRandomAccessStream>> inputStreams, abi_arg_in<Windows::Foundation::Collections::IVector<Windows::Storage::Streams::IRandomAccessStream>> outputStreams, abi_arg_in<Windows::UI::Xaml::Markup::IXamlMetadataProvider> xamlMetadataProvider, abi_arg_out<Windows::UI::Xaml::Markup::XamlBinaryWriterErrorInformation> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().Write(*reinterpret_cast<const Windows::Foundation::Collections::IVector<Windows::Storage::Streams::IRandomAccessStream> *>(&inputStreams), *reinterpret_cast<const Windows::Foundation::Collections::IVector<Windows::Storage::Streams::IRandomAccessStream> *>(&outputStreams), *reinterpret_cast<const Windows::UI::Xaml::Markup::IXamlMetadataProvider *>(&xamlMetadataProvider)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Markup::IXamlBindingHelper> : produce_base<D, Windows::UI::Xaml::Markup::IXamlBindingHelper>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Markup::IXamlBindingHelperStatics> : produce_base<D, Windows::UI::Xaml::Markup::IXamlBindingHelperStatics>
{
    HRESULT __stdcall get_DataTemplateComponentProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DataTemplateComponentProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDataTemplateComponent(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_out<Windows::UI::Xaml::Markup::IDataTemplateComponent> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDataTemplateComponent(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetDataTemplateComponent(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_in<Windows::UI::Xaml::Markup::IDataTemplateComponent> value) noexcept override
    {
        try
        {
            this->shim().SetDataTemplateComponent(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element), *reinterpret_cast<const Windows::UI::Xaml::Markup::IDataTemplateComponent *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SuspendRendering(abi_arg_in<Windows::UI::Xaml::IUIElement> target) noexcept override
    {
        try
        {
            this->shim().SuspendRendering(*reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&target));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ResumeRendering(abi_arg_in<Windows::UI::Xaml::IUIElement> target) noexcept override
    {
        try
        {
            this->shim().ResumeRendering(*reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&target));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConvertValue(abi_arg_in<Windows::UI::Xaml::Interop::TypeName> type, abi_arg_in<Windows::IInspectable> value, abi_arg_out<Windows::IInspectable> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().ConvertValue(*reinterpret_cast<const Windows::UI::Xaml::Interop::TypeName *>(&type), *reinterpret_cast<const Windows::IInspectable *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPropertyFromString(abi_arg_in<Windows::IInspectable> dependencyObject, abi_arg_in<Windows::UI::Xaml::IDependencyProperty> propertyToSet, abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().SetPropertyFromString(*reinterpret_cast<const Windows::IInspectable *>(&dependencyObject), *reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&propertyToSet), *reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPropertyFromBoolean(abi_arg_in<Windows::IInspectable> dependencyObject, abi_arg_in<Windows::UI::Xaml::IDependencyProperty> propertyToSet, bool value) noexcept override
    {
        try
        {
            this->shim().SetPropertyFromBoolean(*reinterpret_cast<const Windows::IInspectable *>(&dependencyObject), *reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&propertyToSet), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPropertyFromChar16(abi_arg_in<Windows::IInspectable> dependencyObject, abi_arg_in<Windows::UI::Xaml::IDependencyProperty> propertyToSet, wchar_t value) noexcept override
    {
        try
        {
            this->shim().SetPropertyFromChar16(*reinterpret_cast<const Windows::IInspectable *>(&dependencyObject), *reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&propertyToSet), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPropertyFromDateTime(abi_arg_in<Windows::IInspectable> dependencyObject, abi_arg_in<Windows::UI::Xaml::IDependencyProperty> propertyToSet, abi_arg_in<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            this->shim().SetPropertyFromDateTime(*reinterpret_cast<const Windows::IInspectable *>(&dependencyObject), *reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&propertyToSet), *reinterpret_cast<const Windows::Foundation::DateTime *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPropertyFromDouble(abi_arg_in<Windows::IInspectable> dependencyObject, abi_arg_in<Windows::UI::Xaml::IDependencyProperty> propertyToSet, double value) noexcept override
    {
        try
        {
            this->shim().SetPropertyFromDouble(*reinterpret_cast<const Windows::IInspectable *>(&dependencyObject), *reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&propertyToSet), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPropertyFromInt32(abi_arg_in<Windows::IInspectable> dependencyObject, abi_arg_in<Windows::UI::Xaml::IDependencyProperty> propertyToSet, int32_t value) noexcept override
    {
        try
        {
            this->shim().SetPropertyFromInt32(*reinterpret_cast<const Windows::IInspectable *>(&dependencyObject), *reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&propertyToSet), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPropertyFromUInt32(abi_arg_in<Windows::IInspectable> dependencyObject, abi_arg_in<Windows::UI::Xaml::IDependencyProperty> propertyToSet, uint32_t value) noexcept override
    {
        try
        {
            this->shim().SetPropertyFromUInt32(*reinterpret_cast<const Windows::IInspectable *>(&dependencyObject), *reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&propertyToSet), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPropertyFromInt64(abi_arg_in<Windows::IInspectable> dependencyObject, abi_arg_in<Windows::UI::Xaml::IDependencyProperty> propertyToSet, int64_t value) noexcept override
    {
        try
        {
            this->shim().SetPropertyFromInt64(*reinterpret_cast<const Windows::IInspectable *>(&dependencyObject), *reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&propertyToSet), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPropertyFromUInt64(abi_arg_in<Windows::IInspectable> dependencyObject, abi_arg_in<Windows::UI::Xaml::IDependencyProperty> propertyToSet, uint64_t value) noexcept override
    {
        try
        {
            this->shim().SetPropertyFromUInt64(*reinterpret_cast<const Windows::IInspectable *>(&dependencyObject), *reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&propertyToSet), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPropertyFromSingle(abi_arg_in<Windows::IInspectable> dependencyObject, abi_arg_in<Windows::UI::Xaml::IDependencyProperty> propertyToSet, float value) noexcept override
    {
        try
        {
            this->shim().SetPropertyFromSingle(*reinterpret_cast<const Windows::IInspectable *>(&dependencyObject), *reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&propertyToSet), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPropertyFromPoint(abi_arg_in<Windows::IInspectable> dependencyObject, abi_arg_in<Windows::UI::Xaml::IDependencyProperty> propertyToSet, abi_arg_in<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            this->shim().SetPropertyFromPoint(*reinterpret_cast<const Windows::IInspectable *>(&dependencyObject), *reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&propertyToSet), *reinterpret_cast<const Windows::Foundation::Point *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPropertyFromRect(abi_arg_in<Windows::IInspectable> dependencyObject, abi_arg_in<Windows::UI::Xaml::IDependencyProperty> propertyToSet, abi_arg_in<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            this->shim().SetPropertyFromRect(*reinterpret_cast<const Windows::IInspectable *>(&dependencyObject), *reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&propertyToSet), *reinterpret_cast<const Windows::Foundation::Rect *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPropertyFromSize(abi_arg_in<Windows::IInspectable> dependencyObject, abi_arg_in<Windows::UI::Xaml::IDependencyProperty> propertyToSet, abi_arg_in<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            this->shim().SetPropertyFromSize(*reinterpret_cast<const Windows::IInspectable *>(&dependencyObject), *reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&propertyToSet), *reinterpret_cast<const Windows::Foundation::Size *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPropertyFromTimeSpan(abi_arg_in<Windows::IInspectable> dependencyObject, abi_arg_in<Windows::UI::Xaml::IDependencyProperty> propertyToSet, abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            this->shim().SetPropertyFromTimeSpan(*reinterpret_cast<const Windows::IInspectable *>(&dependencyObject), *reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&propertyToSet), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPropertyFromByte(abi_arg_in<Windows::IInspectable> dependencyObject, abi_arg_in<Windows::UI::Xaml::IDependencyProperty> propertyToSet, uint8_t value) noexcept override
    {
        try
        {
            this->shim().SetPropertyFromByte(*reinterpret_cast<const Windows::IInspectable *>(&dependencyObject), *reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&propertyToSet), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPropertyFromUri(abi_arg_in<Windows::IInspectable> dependencyObject, abi_arg_in<Windows::UI::Xaml::IDependencyProperty> propertyToSet, abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().SetPropertyFromUri(*reinterpret_cast<const Windows::IInspectable *>(&dependencyObject), *reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&propertyToSet), *reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPropertyFromObject(abi_arg_in<Windows::IInspectable> dependencyObject, abi_arg_in<Windows::UI::Xaml::IDependencyProperty> propertyToSet, abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().SetPropertyFromObject(*reinterpret_cast<const Windows::IInspectable *>(&dependencyObject), *reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&propertyToSet), *reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Markup::IXamlMember> : produce_base<D, Windows::UI::Xaml::Markup::IXamlMember>
{
    HRESULT __stdcall get_IsAttachable(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsAttachable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDependencyProperty(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsDependencyProperty());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsReadOnly(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsReadOnly());
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

    HRESULT __stdcall get_TargetType(abi_arg_out<Windows::UI::Xaml::Markup::IXamlType> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Type(abi_arg_out<Windows::UI::Xaml::Markup::IXamlType> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetValue(abi_arg_in<Windows::IInspectable> instance, abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetValue(*reinterpret_cast<const Windows::IInspectable *>(&instance)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetValue(abi_arg_in<Windows::IInspectable> instance, abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().SetValue(*reinterpret_cast<const Windows::IInspectable *>(&instance), *reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Markup::IXamlMetadataProvider> : produce_base<D, Windows::UI::Xaml::Markup::IXamlMetadataProvider>
{
    HRESULT __stdcall abi_GetXamlType(abi_arg_in<Windows::UI::Xaml::Interop::TypeName> type, abi_arg_out<Windows::UI::Xaml::Markup::IXamlType> xamlType) noexcept override
    {
        try
        {
            *xamlType = detach(this->shim().GetXamlType(*reinterpret_cast<const Windows::UI::Xaml::Interop::TypeName *>(&type)));
            return S_OK;
        }
        catch (...)
        {
            *xamlType = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetXamlTypeByFullName(abi_arg_in<hstring> fullName, abi_arg_out<Windows::UI::Xaml::Markup::IXamlType> xamlType) noexcept override
    {
        try
        {
            *xamlType = detach(this->shim().GetXamlType(*reinterpret_cast<const hstring *>(&fullName)));
            return S_OK;
        }
        catch (...)
        {
            *xamlType = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetXmlnsDefinitions(uint32_t * __definitionsSize, abi_arg_out<Windows::UI::Xaml::Markup::XmlnsDefinition> * definitions) noexcept override
    {
        try
        {
            std::tie(*__definitionsSize, *definitions) = detach(this->shim().GetXmlnsDefinitions());
            return S_OK;
        }
        catch (...)
        {
            *__definitionsSize = 0;
            *definitions = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Markup::IXamlReader> : produce_base<D, Windows::UI::Xaml::Markup::IXamlReader>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Markup::IXamlReaderStatics> : produce_base<D, Windows::UI::Xaml::Markup::IXamlReaderStatics>
{
    HRESULT __stdcall abi_Load(abi_arg_in<hstring> xaml, abi_arg_out<Windows::IInspectable> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().Load(*reinterpret_cast<const hstring *>(&xaml)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LoadWithInitialTemplateValidation(abi_arg_in<hstring> xaml, abi_arg_out<Windows::IInspectable> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().LoadWithInitialTemplateValidation(*reinterpret_cast<const hstring *>(&xaml)));
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
struct produce<D, Windows::UI::Xaml::Markup::IXamlType> : produce_base<D, Windows::UI::Xaml::Markup::IXamlType>
{
    HRESULT __stdcall get_BaseType(abi_arg_out<Windows::UI::Xaml::Markup::IXamlType> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BaseType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentProperty(abi_arg_out<Windows::UI::Xaml::Markup::IXamlMember> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FullName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FullName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsArray(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsArray());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCollection(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsCollection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsConstructible(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsConstructible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDictionary(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsDictionary());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsMarkupExtension(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsMarkupExtension());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsBindable(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsBindable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemType(abi_arg_out<Windows::UI::Xaml::Markup::IXamlType> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ItemType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyType(abi_arg_out<Windows::UI::Xaml::Markup::IXamlType> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeyType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UnderlyingType(abi_arg_out<Windows::UI::Xaml::Interop::TypeName> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UnderlyingType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ActivateInstance(abi_arg_out<Windows::IInspectable> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().ActivateInstance());
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromString(abi_arg_in<hstring> value, abi_arg_out<Windows::IInspectable> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateFromString(*reinterpret_cast<const hstring *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetMember(abi_arg_in<hstring> name, abi_arg_out<Windows::UI::Xaml::Markup::IXamlMember> xamlMember) noexcept override
    {
        try
        {
            *xamlMember = detach(this->shim().GetMember(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *xamlMember = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddToVector(abi_arg_in<Windows::IInspectable> instance, abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().AddToVector(*reinterpret_cast<const Windows::IInspectable *>(&instance), *reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddToMap(abi_arg_in<Windows::IInspectable> instance, abi_arg_in<Windows::IInspectable> key, abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().AddToMap(*reinterpret_cast<const Windows::IInspectable *>(&instance), *reinterpret_cast<const Windows::IInspectable *>(&key), *reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RunInitializer() noexcept override
    {
        try
        {
            this->shim().RunInitializer();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::UI::Xaml::Markup {

template <typename D> void impl_IComponentConnector<D>::Connect(int32_t connectionId, const Windows::IInspectable & target) const
{
    check_hresult(static_cast<const IComponentConnector &>(static_cast<const D &>(*this))->abi_Connect(connectionId, get(target)));
}

template <typename D> Windows::UI::Xaml::Markup::IComponentConnector impl_IComponentConnector2<D>::GetBindingConnector(int32_t connectionId, const Windows::IInspectable & target) const
{
    Windows::UI::Xaml::Markup::IComponentConnector returnValue;
    check_hresult(static_cast<const IComponentConnector2 &>(static_cast<const D &>(*this))->abi_GetBindingConnector(connectionId, get(target), put(returnValue)));
    return returnValue;
}

template <typename D> bool impl_IXamlMember<D>::IsAttachable() const
{
    bool value {};
    check_hresult(static_cast<const IXamlMember &>(static_cast<const D &>(*this))->get_IsAttachable(&value));
    return value;
}

template <typename D> bool impl_IXamlMember<D>::IsDependencyProperty() const
{
    bool value {};
    check_hresult(static_cast<const IXamlMember &>(static_cast<const D &>(*this))->get_IsDependencyProperty(&value));
    return value;
}

template <typename D> bool impl_IXamlMember<D>::IsReadOnly() const
{
    bool value {};
    check_hresult(static_cast<const IXamlMember &>(static_cast<const D &>(*this))->get_IsReadOnly(&value));
    return value;
}

template <typename D> hstring impl_IXamlMember<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IXamlMember &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Markup::IXamlType impl_IXamlMember<D>::TargetType() const
{
    Windows::UI::Xaml::Markup::IXamlType value;
    check_hresult(static_cast<const IXamlMember &>(static_cast<const D &>(*this))->get_TargetType(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Markup::IXamlType impl_IXamlMember<D>::Type() const
{
    Windows::UI::Xaml::Markup::IXamlType value;
    check_hresult(static_cast<const IXamlMember &>(static_cast<const D &>(*this))->get_Type(put(value)));
    return value;
}

template <typename D> Windows::IInspectable impl_IXamlMember<D>::GetValue(const Windows::IInspectable & instance) const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IXamlMember &>(static_cast<const D &>(*this))->abi_GetValue(get(instance), put(value)));
    return value;
}

template <typename D> void impl_IXamlMember<D>::SetValue(const Windows::IInspectable & instance, const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const IXamlMember &>(static_cast<const D &>(*this))->abi_SetValue(get(instance), get(value)));
}

template <typename D> Windows::UI::Xaml::Markup::IXamlType impl_IXamlType<D>::BaseType() const
{
    Windows::UI::Xaml::Markup::IXamlType value;
    check_hresult(static_cast<const IXamlType &>(static_cast<const D &>(*this))->get_BaseType(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Markup::IXamlMember impl_IXamlType<D>::ContentProperty() const
{
    Windows::UI::Xaml::Markup::IXamlMember value;
    check_hresult(static_cast<const IXamlType &>(static_cast<const D &>(*this))->get_ContentProperty(put(value)));
    return value;
}

template <typename D> hstring impl_IXamlType<D>::FullName() const
{
    hstring value;
    check_hresult(static_cast<const IXamlType &>(static_cast<const D &>(*this))->get_FullName(put(value)));
    return value;
}

template <typename D> bool impl_IXamlType<D>::IsArray() const
{
    bool value {};
    check_hresult(static_cast<const IXamlType &>(static_cast<const D &>(*this))->get_IsArray(&value));
    return value;
}

template <typename D> bool impl_IXamlType<D>::IsCollection() const
{
    bool value {};
    check_hresult(static_cast<const IXamlType &>(static_cast<const D &>(*this))->get_IsCollection(&value));
    return value;
}

template <typename D> bool impl_IXamlType<D>::IsConstructible() const
{
    bool value {};
    check_hresult(static_cast<const IXamlType &>(static_cast<const D &>(*this))->get_IsConstructible(&value));
    return value;
}

template <typename D> bool impl_IXamlType<D>::IsDictionary() const
{
    bool value {};
    check_hresult(static_cast<const IXamlType &>(static_cast<const D &>(*this))->get_IsDictionary(&value));
    return value;
}

template <typename D> bool impl_IXamlType<D>::IsMarkupExtension() const
{
    bool value {};
    check_hresult(static_cast<const IXamlType &>(static_cast<const D &>(*this))->get_IsMarkupExtension(&value));
    return value;
}

template <typename D> bool impl_IXamlType<D>::IsBindable() const
{
    bool value {};
    check_hresult(static_cast<const IXamlType &>(static_cast<const D &>(*this))->get_IsBindable(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Markup::IXamlType impl_IXamlType<D>::ItemType() const
{
    Windows::UI::Xaml::Markup::IXamlType value;
    check_hresult(static_cast<const IXamlType &>(static_cast<const D &>(*this))->get_ItemType(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Markup::IXamlType impl_IXamlType<D>::KeyType() const
{
    Windows::UI::Xaml::Markup::IXamlType value;
    check_hresult(static_cast<const IXamlType &>(static_cast<const D &>(*this))->get_KeyType(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Interop::TypeName impl_IXamlType<D>::UnderlyingType() const
{
    Windows::UI::Xaml::Interop::TypeName value {};
    check_hresult(static_cast<const IXamlType &>(static_cast<const D &>(*this))->get_UnderlyingType(put(value)));
    return value;
}

template <typename D> Windows::IInspectable impl_IXamlType<D>::ActivateInstance() const
{
    Windows::IInspectable instance;
    check_hresult(static_cast<const IXamlType &>(static_cast<const D &>(*this))->abi_ActivateInstance(put(instance)));
    return instance;
}

template <typename D> Windows::IInspectable impl_IXamlType<D>::CreateFromString(hstring_ref value) const
{
    Windows::IInspectable instance;
    check_hresult(static_cast<const IXamlType &>(static_cast<const D &>(*this))->abi_CreateFromString(get(value), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Markup::IXamlMember impl_IXamlType<D>::GetMember(hstring_ref name) const
{
    Windows::UI::Xaml::Markup::IXamlMember xamlMember;
    check_hresult(static_cast<const IXamlType &>(static_cast<const D &>(*this))->abi_GetMember(get(name), put(xamlMember)));
    return xamlMember;
}

template <typename D> void impl_IXamlType<D>::AddToVector(const Windows::IInspectable & instance, const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const IXamlType &>(static_cast<const D &>(*this))->abi_AddToVector(get(instance), get(value)));
}

template <typename D> void impl_IXamlType<D>::AddToMap(const Windows::IInspectable & instance, const Windows::IInspectable & key, const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const IXamlType &>(static_cast<const D &>(*this))->abi_AddToMap(get(instance), get(key), get(value)));
}

template <typename D> void impl_IXamlType<D>::RunInitializer() const
{
    check_hresult(static_cast<const IXamlType &>(static_cast<const D &>(*this))->abi_RunInitializer());
}

template <typename D> Windows::UI::Xaml::Markup::IXamlType impl_IXamlMetadataProvider<D>::GetXamlType(const Windows::UI::Xaml::Interop::TypeName & type) const
{
    Windows::UI::Xaml::Markup::IXamlType xamlType;
    check_hresult(static_cast<const IXamlMetadataProvider &>(static_cast<const D &>(*this))->abi_GetXamlType(get(type), put(xamlType)));
    return xamlType;
}

template <typename D> Windows::UI::Xaml::Markup::IXamlType impl_IXamlMetadataProvider<D>::GetXamlType(hstring_ref fullName) const
{
    Windows::UI::Xaml::Markup::IXamlType xamlType;
    check_hresult(static_cast<const IXamlMetadataProvider &>(static_cast<const D &>(*this))->abi_GetXamlTypeByFullName(get(fullName), put(xamlType)));
    return xamlType;
}

template <typename D> com_array<Windows::UI::Xaml::Markup::XmlnsDefinition> impl_IXamlMetadataProvider<D>::GetXmlnsDefinitions() const
{
    com_array<Windows::UI::Xaml::Markup::XmlnsDefinition> definitions {};
    check_hresult(static_cast<const IXamlMetadataProvider &>(static_cast<const D &>(*this))->abi_GetXmlnsDefinitions(put_size(definitions), put(definitions)));
    return definitions;
}

template <typename D> Windows::UI::Xaml::Markup::XamlBinaryWriterErrorInformation impl_IXamlBinaryWriterStatics<D>::Write(const Windows::Foundation::Collections::IVector<Windows::Storage::Streams::IRandomAccessStream> & inputStreams, const Windows::Foundation::Collections::IVector<Windows::Storage::Streams::IRandomAccessStream> & outputStreams, const Windows::UI::Xaml::Markup::IXamlMetadataProvider & xamlMetadataProvider) const
{
    Windows::UI::Xaml::Markup::XamlBinaryWriterErrorInformation returnValue {};
    check_hresult(static_cast<const IXamlBinaryWriterStatics &>(static_cast<const D &>(*this))->abi_Write(get(inputStreams), get(outputStreams), get(xamlMetadataProvider), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::IInspectable impl_IXamlReaderStatics<D>::Load(hstring_ref xaml) const
{
    Windows::IInspectable returnValue;
    check_hresult(static_cast<const IXamlReaderStatics &>(static_cast<const D &>(*this))->abi_Load(get(xaml), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::IInspectable impl_IXamlReaderStatics<D>::LoadWithInitialTemplateValidation(hstring_ref xaml) const
{
    Windows::IInspectable returnValue;
    check_hresult(static_cast<const IXamlReaderStatics &>(static_cast<const D &>(*this))->abi_LoadWithInitialTemplateValidation(get(xaml), put(returnValue)));
    return returnValue;
}

template <typename D> void impl_IDataTemplateComponent<D>::Recycle() const
{
    check_hresult(static_cast<const IDataTemplateComponent &>(static_cast<const D &>(*this))->abi_Recycle());
}

template <typename D> void impl_IDataTemplateComponent<D>::ProcessBindings(const Windows::IInspectable & item, int32_t itemIndex, int32_t phase, int32_t & nextPhase) const
{
    check_hresult(static_cast<const IDataTemplateComponent &>(static_cast<const D &>(*this))->abi_ProcessBindings(get(item), itemIndex, phase, &nextPhase));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IXamlBindingHelperStatics<D>::DataTemplateComponentProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IXamlBindingHelperStatics &>(static_cast<const D &>(*this))->get_DataTemplateComponentProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Markup::IDataTemplateComponent impl_IXamlBindingHelperStatics<D>::GetDataTemplateComponent(const Windows::UI::Xaml::DependencyObject & element) const
{
    Windows::UI::Xaml::Markup::IDataTemplateComponent value;
    check_hresult(static_cast<const IXamlBindingHelperStatics &>(static_cast<const D &>(*this))->abi_GetDataTemplateComponent(get(element), put(value)));
    return value;
}

template <typename D> void impl_IXamlBindingHelperStatics<D>::SetDataTemplateComponent(const Windows::UI::Xaml::DependencyObject & element, const Windows::UI::Xaml::Markup::IDataTemplateComponent & value) const
{
    check_hresult(static_cast<const IXamlBindingHelperStatics &>(static_cast<const D &>(*this))->abi_SetDataTemplateComponent(get(element), get(value)));
}

template <typename D> void impl_IXamlBindingHelperStatics<D>::SuspendRendering(const Windows::UI::Xaml::UIElement & target) const
{
    check_hresult(static_cast<const IXamlBindingHelperStatics &>(static_cast<const D &>(*this))->abi_SuspendRendering(get(target)));
}

template <typename D> void impl_IXamlBindingHelperStatics<D>::ResumeRendering(const Windows::UI::Xaml::UIElement & target) const
{
    check_hresult(static_cast<const IXamlBindingHelperStatics &>(static_cast<const D &>(*this))->abi_ResumeRendering(get(target)));
}

template <typename D> Windows::IInspectable impl_IXamlBindingHelperStatics<D>::ConvertValue(const Windows::UI::Xaml::Interop::TypeName & type, const Windows::IInspectable & value) const
{
    Windows::IInspectable returnValue;
    check_hresult(static_cast<const IXamlBindingHelperStatics &>(static_cast<const D &>(*this))->abi_ConvertValue(get(type), get(value), put(returnValue)));
    return returnValue;
}

template <typename D> void impl_IXamlBindingHelperStatics<D>::SetPropertyFromString(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, hstring_ref value) const
{
    check_hresult(static_cast<const IXamlBindingHelperStatics &>(static_cast<const D &>(*this))->abi_SetPropertyFromString(get(dependencyObject), get(propertyToSet), get(value)));
}

template <typename D> void impl_IXamlBindingHelperStatics<D>::SetPropertyFromBoolean(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, bool value) const
{
    check_hresult(static_cast<const IXamlBindingHelperStatics &>(static_cast<const D &>(*this))->abi_SetPropertyFromBoolean(get(dependencyObject), get(propertyToSet), value));
}

template <typename D> void impl_IXamlBindingHelperStatics<D>::SetPropertyFromChar16(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, wchar_t value) const
{
    check_hresult(static_cast<const IXamlBindingHelperStatics &>(static_cast<const D &>(*this))->abi_SetPropertyFromChar16(get(dependencyObject), get(propertyToSet), value));
}

template <typename D> void impl_IXamlBindingHelperStatics<D>::SetPropertyFromDateTime(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, const Windows::Foundation::DateTime & value) const
{
    check_hresult(static_cast<const IXamlBindingHelperStatics &>(static_cast<const D &>(*this))->abi_SetPropertyFromDateTime(get(dependencyObject), get(propertyToSet), get(value)));
}

template <typename D> void impl_IXamlBindingHelperStatics<D>::SetPropertyFromDouble(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, double value) const
{
    check_hresult(static_cast<const IXamlBindingHelperStatics &>(static_cast<const D &>(*this))->abi_SetPropertyFromDouble(get(dependencyObject), get(propertyToSet), value));
}

template <typename D> void impl_IXamlBindingHelperStatics<D>::SetPropertyFromInt32(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, int32_t value) const
{
    check_hresult(static_cast<const IXamlBindingHelperStatics &>(static_cast<const D &>(*this))->abi_SetPropertyFromInt32(get(dependencyObject), get(propertyToSet), value));
}

template <typename D> void impl_IXamlBindingHelperStatics<D>::SetPropertyFromUInt32(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, uint32_t value) const
{
    check_hresult(static_cast<const IXamlBindingHelperStatics &>(static_cast<const D &>(*this))->abi_SetPropertyFromUInt32(get(dependencyObject), get(propertyToSet), value));
}

template <typename D> void impl_IXamlBindingHelperStatics<D>::SetPropertyFromInt64(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, int64_t value) const
{
    check_hresult(static_cast<const IXamlBindingHelperStatics &>(static_cast<const D &>(*this))->abi_SetPropertyFromInt64(get(dependencyObject), get(propertyToSet), value));
}

template <typename D> void impl_IXamlBindingHelperStatics<D>::SetPropertyFromUInt64(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, uint64_t value) const
{
    check_hresult(static_cast<const IXamlBindingHelperStatics &>(static_cast<const D &>(*this))->abi_SetPropertyFromUInt64(get(dependencyObject), get(propertyToSet), value));
}

template <typename D> void impl_IXamlBindingHelperStatics<D>::SetPropertyFromSingle(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, float value) const
{
    check_hresult(static_cast<const IXamlBindingHelperStatics &>(static_cast<const D &>(*this))->abi_SetPropertyFromSingle(get(dependencyObject), get(propertyToSet), value));
}

template <typename D> void impl_IXamlBindingHelperStatics<D>::SetPropertyFromPoint(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, const Windows::Foundation::Point & value) const
{
    check_hresult(static_cast<const IXamlBindingHelperStatics &>(static_cast<const D &>(*this))->abi_SetPropertyFromPoint(get(dependencyObject), get(propertyToSet), get(value)));
}

template <typename D> void impl_IXamlBindingHelperStatics<D>::SetPropertyFromRect(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, const Windows::Foundation::Rect & value) const
{
    check_hresult(static_cast<const IXamlBindingHelperStatics &>(static_cast<const D &>(*this))->abi_SetPropertyFromRect(get(dependencyObject), get(propertyToSet), get(value)));
}

template <typename D> void impl_IXamlBindingHelperStatics<D>::SetPropertyFromSize(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, const Windows::Foundation::Size & value) const
{
    check_hresult(static_cast<const IXamlBindingHelperStatics &>(static_cast<const D &>(*this))->abi_SetPropertyFromSize(get(dependencyObject), get(propertyToSet), get(value)));
}

template <typename D> void impl_IXamlBindingHelperStatics<D>::SetPropertyFromTimeSpan(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const IXamlBindingHelperStatics &>(static_cast<const D &>(*this))->abi_SetPropertyFromTimeSpan(get(dependencyObject), get(propertyToSet), get(value)));
}

template <typename D> void impl_IXamlBindingHelperStatics<D>::SetPropertyFromByte(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, uint8_t value) const
{
    check_hresult(static_cast<const IXamlBindingHelperStatics &>(static_cast<const D &>(*this))->abi_SetPropertyFromByte(get(dependencyObject), get(propertyToSet), value));
}

template <typename D> void impl_IXamlBindingHelperStatics<D>::SetPropertyFromUri(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const IXamlBindingHelperStatics &>(static_cast<const D &>(*this))->abi_SetPropertyFromUri(get(dependencyObject), get(propertyToSet), get(value)));
}

template <typename D> void impl_IXamlBindingHelperStatics<D>::SetPropertyFromObject(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const IXamlBindingHelperStatics &>(static_cast<const D &>(*this))->abi_SetPropertyFromObject(get(dependencyObject), get(propertyToSet), get(value)));
}

inline Windows::UI::Xaml::Markup::XamlBinaryWriterErrorInformation XamlBinaryWriter::Write(const Windows::Foundation::Collections::IVector<Windows::Storage::Streams::IRandomAccessStream> & inputStreams, const Windows::Foundation::Collections::IVector<Windows::Storage::Streams::IRandomAccessStream> & outputStreams, const Windows::UI::Xaml::Markup::IXamlMetadataProvider & xamlMetadataProvider)
{
    return get_activation_factory<XamlBinaryWriter, IXamlBinaryWriterStatics>().Write(inputStreams, outputStreams, xamlMetadataProvider);
}

inline Windows::UI::Xaml::DependencyProperty XamlBindingHelper::DataTemplateComponentProperty()
{
    return get_activation_factory<XamlBindingHelper, IXamlBindingHelperStatics>().DataTemplateComponentProperty();
}

inline Windows::UI::Xaml::Markup::IDataTemplateComponent XamlBindingHelper::GetDataTemplateComponent(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<XamlBindingHelper, IXamlBindingHelperStatics>().GetDataTemplateComponent(element);
}

inline void XamlBindingHelper::SetDataTemplateComponent(const Windows::UI::Xaml::DependencyObject & element, const Windows::UI::Xaml::Markup::IDataTemplateComponent & value)
{
    get_activation_factory<XamlBindingHelper, IXamlBindingHelperStatics>().SetDataTemplateComponent(element, value);
}

inline void XamlBindingHelper::SuspendRendering(const Windows::UI::Xaml::UIElement & target)
{
    get_activation_factory<XamlBindingHelper, IXamlBindingHelperStatics>().SuspendRendering(target);
}

inline void XamlBindingHelper::ResumeRendering(const Windows::UI::Xaml::UIElement & target)
{
    get_activation_factory<XamlBindingHelper, IXamlBindingHelperStatics>().ResumeRendering(target);
}

inline Windows::IInspectable XamlBindingHelper::ConvertValue(const Windows::UI::Xaml::Interop::TypeName & type, const Windows::IInspectable & value)
{
    return get_activation_factory<XamlBindingHelper, IXamlBindingHelperStatics>().ConvertValue(type, value);
}

inline void XamlBindingHelper::SetPropertyFromString(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, hstring_ref value)
{
    get_activation_factory<XamlBindingHelper, IXamlBindingHelperStatics>().SetPropertyFromString(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromBoolean(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, bool value)
{
    get_activation_factory<XamlBindingHelper, IXamlBindingHelperStatics>().SetPropertyFromBoolean(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromChar16(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, wchar_t value)
{
    get_activation_factory<XamlBindingHelper, IXamlBindingHelperStatics>().SetPropertyFromChar16(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromDateTime(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, const Windows::Foundation::DateTime & value)
{
    get_activation_factory<XamlBindingHelper, IXamlBindingHelperStatics>().SetPropertyFromDateTime(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromDouble(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, double value)
{
    get_activation_factory<XamlBindingHelper, IXamlBindingHelperStatics>().SetPropertyFromDouble(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromInt32(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, int32_t value)
{
    get_activation_factory<XamlBindingHelper, IXamlBindingHelperStatics>().SetPropertyFromInt32(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromUInt32(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, uint32_t value)
{
    get_activation_factory<XamlBindingHelper, IXamlBindingHelperStatics>().SetPropertyFromUInt32(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromInt64(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, int64_t value)
{
    get_activation_factory<XamlBindingHelper, IXamlBindingHelperStatics>().SetPropertyFromInt64(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromUInt64(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, uint64_t value)
{
    get_activation_factory<XamlBindingHelper, IXamlBindingHelperStatics>().SetPropertyFromUInt64(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromSingle(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, float value)
{
    get_activation_factory<XamlBindingHelper, IXamlBindingHelperStatics>().SetPropertyFromSingle(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromPoint(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, const Windows::Foundation::Point & value)
{
    get_activation_factory<XamlBindingHelper, IXamlBindingHelperStatics>().SetPropertyFromPoint(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromRect(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, const Windows::Foundation::Rect & value)
{
    get_activation_factory<XamlBindingHelper, IXamlBindingHelperStatics>().SetPropertyFromRect(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromSize(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, const Windows::Foundation::Size & value)
{
    get_activation_factory<XamlBindingHelper, IXamlBindingHelperStatics>().SetPropertyFromSize(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromTimeSpan(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, const Windows::Foundation::TimeSpan & value)
{
    get_activation_factory<XamlBindingHelper, IXamlBindingHelperStatics>().SetPropertyFromTimeSpan(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromByte(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, uint8_t value)
{
    get_activation_factory<XamlBindingHelper, IXamlBindingHelperStatics>().SetPropertyFromByte(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromUri(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, const Windows::Foundation::Uri & value)
{
    get_activation_factory<XamlBindingHelper, IXamlBindingHelperStatics>().SetPropertyFromUri(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromObject(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, const Windows::IInspectable & value)
{
    get_activation_factory<XamlBindingHelper, IXamlBindingHelperStatics>().SetPropertyFromObject(dependencyObject, propertyToSet, value);
}

inline Windows::IInspectable XamlReader::Load(hstring_ref xaml)
{
    return get_activation_factory<XamlReader, IXamlReaderStatics>().Load(xaml);
}

inline Windows::IInspectable XamlReader::LoadWithInitialTemplateValidation(hstring_ref xaml)
{
    return get_activation_factory<XamlReader, IXamlReaderStatics>().LoadWithInitialTemplateValidation(xaml);
}

}

}
