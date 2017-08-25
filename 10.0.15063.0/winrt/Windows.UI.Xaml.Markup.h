// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Windows.UI.Xaml.Interop.2.h"
#include "winrt/impl/Windows.UI.Xaml.Markup.2.h"
#include "winrt/Windows.UI.Xaml.h"

namespace winrt::impl {

template <typename D> void consume_Windows_UI_Xaml_Markup_IComponentConnector<D>::Connect(int32_t connectionId, Windows::Foundation::IInspectable const& target) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IComponentConnector)->Connect(connectionId, get_abi(target)));
}

template <typename D> Windows::UI::Xaml::Markup::IComponentConnector consume_Windows_UI_Xaml_Markup_IComponentConnector2<D>::GetBindingConnector(int32_t connectionId, Windows::Foundation::IInspectable const& target) const
{
    Windows::UI::Xaml::Markup::IComponentConnector returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IComponentConnector2)->GetBindingConnector(connectionId, get_abi(target), put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Markup_IDataTemplateComponent<D>::Recycle() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IDataTemplateComponent)->Recycle());
}

template <typename D> void consume_Windows_UI_Xaml_Markup_IDataTemplateComponent<D>::ProcessBindings(Windows::Foundation::IInspectable const& item, int32_t itemIndex, int32_t phase, int32_t& nextPhase) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IDataTemplateComponent)->ProcessBindings(get_abi(item), itemIndex, phase, &nextPhase));
}

template <typename D> Windows::UI::Xaml::Markup::XamlBinaryWriterErrorInformation consume_Windows_UI_Xaml_Markup_IXamlBinaryWriterStatics<D>::Write(param::vector<Windows::Storage::Streams::IRandomAccessStream> const& inputStreams, param::vector<Windows::Storage::Streams::IRandomAccessStream> const& outputStreams, Windows::UI::Xaml::Markup::IXamlMetadataProvider const& xamlMetadataProvider) const
{
    Windows::UI::Xaml::Markup::XamlBinaryWriterErrorInformation returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlBinaryWriterStatics)->Write(get_abi(inputStreams), get_abi(outputStreams), get_abi(xamlMetadataProvider), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Markup_IXamlBindingHelperStatics<D>::DataTemplateComponentProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlBindingHelperStatics)->get_DataTemplateComponentProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Markup::IDataTemplateComponent consume_Windows_UI_Xaml_Markup_IXamlBindingHelperStatics<D>::GetDataTemplateComponent(Windows::UI::Xaml::DependencyObject const& element) const
{
    Windows::UI::Xaml::Markup::IDataTemplateComponent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlBindingHelperStatics)->GetDataTemplateComponent(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Markup_IXamlBindingHelperStatics<D>::SetDataTemplateComponent(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Markup::IDataTemplateComponent const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlBindingHelperStatics)->SetDataTemplateComponent(get_abi(element), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Xaml_Markup_IXamlBindingHelperStatics<D>::SuspendRendering(Windows::UI::Xaml::UIElement const& target) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlBindingHelperStatics)->SuspendRendering(get_abi(target)));
}

template <typename D> void consume_Windows_UI_Xaml_Markup_IXamlBindingHelperStatics<D>::ResumeRendering(Windows::UI::Xaml::UIElement const& target) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlBindingHelperStatics)->ResumeRendering(get_abi(target)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Markup_IXamlBindingHelperStatics<D>::ConvertValue(Windows::UI::Xaml::Interop::TypeName const& type, Windows::Foundation::IInspectable const& value) const
{
    Windows::Foundation::IInspectable returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlBindingHelperStatics)->ConvertValue(get_abi(type), get_abi(value), put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Markup_IXamlBindingHelperStatics<D>::SetPropertyFromString(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlBindingHelperStatics)->SetPropertyFromString(get_abi(dependencyObject), get_abi(propertyToSet), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Xaml_Markup_IXamlBindingHelperStatics<D>::SetPropertyFromBoolean(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlBindingHelperStatics)->SetPropertyFromBoolean(get_abi(dependencyObject), get_abi(propertyToSet), value));
}

template <typename D> void consume_Windows_UI_Xaml_Markup_IXamlBindingHelperStatics<D>::SetPropertyFromChar16(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, char16_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlBindingHelperStatics)->SetPropertyFromChar16(get_abi(dependencyObject), get_abi(propertyToSet), value));
}

template <typename D> void consume_Windows_UI_Xaml_Markup_IXamlBindingHelperStatics<D>::SetPropertyFromDateTime(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlBindingHelperStatics)->SetPropertyFromDateTime(get_abi(dependencyObject), get_abi(propertyToSet), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Xaml_Markup_IXamlBindingHelperStatics<D>::SetPropertyFromDouble(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlBindingHelperStatics)->SetPropertyFromDouble(get_abi(dependencyObject), get_abi(propertyToSet), value));
}

template <typename D> void consume_Windows_UI_Xaml_Markup_IXamlBindingHelperStatics<D>::SetPropertyFromInt32(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlBindingHelperStatics)->SetPropertyFromInt32(get_abi(dependencyObject), get_abi(propertyToSet), value));
}

template <typename D> void consume_Windows_UI_Xaml_Markup_IXamlBindingHelperStatics<D>::SetPropertyFromUInt32(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlBindingHelperStatics)->SetPropertyFromUInt32(get_abi(dependencyObject), get_abi(propertyToSet), value));
}

template <typename D> void consume_Windows_UI_Xaml_Markup_IXamlBindingHelperStatics<D>::SetPropertyFromInt64(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, int64_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlBindingHelperStatics)->SetPropertyFromInt64(get_abi(dependencyObject), get_abi(propertyToSet), value));
}

template <typename D> void consume_Windows_UI_Xaml_Markup_IXamlBindingHelperStatics<D>::SetPropertyFromUInt64(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, uint64_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlBindingHelperStatics)->SetPropertyFromUInt64(get_abi(dependencyObject), get_abi(propertyToSet), value));
}

template <typename D> void consume_Windows_UI_Xaml_Markup_IXamlBindingHelperStatics<D>::SetPropertyFromSingle(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlBindingHelperStatics)->SetPropertyFromSingle(get_abi(dependencyObject), get_abi(propertyToSet), value));
}

template <typename D> void consume_Windows_UI_Xaml_Markup_IXamlBindingHelperStatics<D>::SetPropertyFromPoint(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::Point const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlBindingHelperStatics)->SetPropertyFromPoint(get_abi(dependencyObject), get_abi(propertyToSet), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Xaml_Markup_IXamlBindingHelperStatics<D>::SetPropertyFromRect(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::Rect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlBindingHelperStatics)->SetPropertyFromRect(get_abi(dependencyObject), get_abi(propertyToSet), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Xaml_Markup_IXamlBindingHelperStatics<D>::SetPropertyFromSize(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::Size const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlBindingHelperStatics)->SetPropertyFromSize(get_abi(dependencyObject), get_abi(propertyToSet), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Xaml_Markup_IXamlBindingHelperStatics<D>::SetPropertyFromTimeSpan(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlBindingHelperStatics)->SetPropertyFromTimeSpan(get_abi(dependencyObject), get_abi(propertyToSet), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Xaml_Markup_IXamlBindingHelperStatics<D>::SetPropertyFromByte(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlBindingHelperStatics)->SetPropertyFromByte(get_abi(dependencyObject), get_abi(propertyToSet), value));
}

template <typename D> void consume_Windows_UI_Xaml_Markup_IXamlBindingHelperStatics<D>::SetPropertyFromUri(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlBindingHelperStatics)->SetPropertyFromUri(get_abi(dependencyObject), get_abi(propertyToSet), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Xaml_Markup_IXamlBindingHelperStatics<D>::SetPropertyFromObject(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlBindingHelperStatics)->SetPropertyFromObject(get_abi(dependencyObject), get_abi(propertyToSet), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Xaml_Markup_IXamlMarkupHelperStatics<D>::UnloadObject(Windows::UI::Xaml::DependencyObject const& element) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlMarkupHelperStatics)->UnloadObject(get_abi(element)));
}

template <typename D> bool consume_Windows_UI_Xaml_Markup_IXamlMember<D>::IsAttachable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlMember)->get_IsAttachable(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Markup_IXamlMember<D>::IsDependencyProperty() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlMember)->get_IsDependencyProperty(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Markup_IXamlMember<D>::IsReadOnly() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlMember)->get_IsReadOnly(&value));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Markup_IXamlMember<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlMember)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Markup::IXamlType consume_Windows_UI_Xaml_Markup_IXamlMember<D>::TargetType() const
{
    Windows::UI::Xaml::Markup::IXamlType value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlMember)->get_TargetType(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Markup::IXamlType consume_Windows_UI_Xaml_Markup_IXamlMember<D>::Type() const
{
    Windows::UI::Xaml::Markup::IXamlType value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlMember)->get_Type(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Markup_IXamlMember<D>::GetValue(Windows::Foundation::IInspectable const& instance) const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlMember)->GetValue(get_abi(instance), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Markup_IXamlMember<D>::SetValue(Windows::Foundation::IInspectable const& instance, Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlMember)->SetValue(get_abi(instance), get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Markup::IXamlType consume_Windows_UI_Xaml_Markup_IXamlMetadataProvider<D>::GetXamlType(Windows::UI::Xaml::Interop::TypeName const& type) const
{
    Windows::UI::Xaml::Markup::IXamlType xamlType{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlMetadataProvider)->GetXamlType(get_abi(type), put_abi(xamlType)));
    return xamlType;
}

template <typename D> Windows::UI::Xaml::Markup::IXamlType consume_Windows_UI_Xaml_Markup_IXamlMetadataProvider<D>::GetXamlType(param::hstring const& fullName) const
{
    Windows::UI::Xaml::Markup::IXamlType xamlType{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlMetadataProvider)->GetXamlTypeByFullName(get_abi(fullName), put_abi(xamlType)));
    return xamlType;
}

template <typename D> com_array<Windows::UI::Xaml::Markup::XmlnsDefinition> consume_Windows_UI_Xaml_Markup_IXamlMetadataProvider<D>::GetXmlnsDefinitions() const
{
    com_array<Windows::UI::Xaml::Markup::XmlnsDefinition> definitions;
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlMetadataProvider)->GetXmlnsDefinitions(impl::put_size_abi(definitions), put_abi(definitions)));
    return definitions;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Markup_IXamlReaderStatics<D>::Load(param::hstring const& xaml) const
{
    Windows::Foundation::IInspectable returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlReaderStatics)->Load(get_abi(xaml), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Markup_IXamlReaderStatics<D>::LoadWithInitialTemplateValidation(param::hstring const& xaml) const
{
    Windows::Foundation::IInspectable returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlReaderStatics)->LoadWithInitialTemplateValidation(get_abi(xaml), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Markup::IXamlType consume_Windows_UI_Xaml_Markup_IXamlType<D>::BaseType() const
{
    Windows::UI::Xaml::Markup::IXamlType value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlType)->get_BaseType(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Markup::IXamlMember consume_Windows_UI_Xaml_Markup_IXamlType<D>::ContentProperty() const
{
    Windows::UI::Xaml::Markup::IXamlMember value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlType)->get_ContentProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Markup_IXamlType<D>::FullName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlType)->get_FullName(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Markup_IXamlType<D>::IsArray() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlType)->get_IsArray(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Markup_IXamlType<D>::IsCollection() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlType)->get_IsCollection(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Markup_IXamlType<D>::IsConstructible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlType)->get_IsConstructible(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Markup_IXamlType<D>::IsDictionary() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlType)->get_IsDictionary(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Markup_IXamlType<D>::IsMarkupExtension() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlType)->get_IsMarkupExtension(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Markup_IXamlType<D>::IsBindable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlType)->get_IsBindable(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Markup::IXamlType consume_Windows_UI_Xaml_Markup_IXamlType<D>::ItemType() const
{
    Windows::UI::Xaml::Markup::IXamlType value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlType)->get_ItemType(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Markup::IXamlType consume_Windows_UI_Xaml_Markup_IXamlType<D>::KeyType() const
{
    Windows::UI::Xaml::Markup::IXamlType value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlType)->get_KeyType(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Interop::TypeName consume_Windows_UI_Xaml_Markup_IXamlType<D>::UnderlyingType() const
{
    Windows::UI::Xaml::Interop::TypeName value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlType)->get_UnderlyingType(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Markup_IXamlType<D>::ActivateInstance() const
{
    Windows::Foundation::IInspectable instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlType)->ActivateInstance(put_abi(instance)));
    return instance;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Markup_IXamlType<D>::CreateFromString(param::hstring const& value) const
{
    Windows::Foundation::IInspectable instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlType)->CreateFromString(get_abi(value), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Markup::IXamlMember consume_Windows_UI_Xaml_Markup_IXamlType<D>::GetMember(param::hstring const& name) const
{
    Windows::UI::Xaml::Markup::IXamlMember xamlMember{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlType)->GetMember(get_abi(name), put_abi(xamlMember)));
    return xamlMember;
}

template <typename D> void consume_Windows_UI_Xaml_Markup_IXamlType<D>::AddToVector(Windows::Foundation::IInspectable const& instance, Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlType)->AddToVector(get_abi(instance), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Xaml_Markup_IXamlType<D>::AddToMap(Windows::Foundation::IInspectable const& instance, Windows::Foundation::IInspectable const& key, Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlType)->AddToMap(get_abi(instance), get_abi(key), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Xaml_Markup_IXamlType<D>::RunInitializer() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Markup::IXamlType)->RunInitializer());
}

template <typename D>
struct produce<D, Windows::UI::Xaml::Markup::IComponentConnector> : produce_base<D, Windows::UI::Xaml::Markup::IComponentConnector>
{
    HRESULT __stdcall Connect(int32_t connectionId, ::IUnknown* target) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Connect(connectionId, *reinterpret_cast<Windows::Foundation::IInspectable const*>(&target));
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
    HRESULT __stdcall GetBindingConnector(int32_t connectionId, ::IUnknown* target, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetBindingConnector(connectionId, *reinterpret_cast<Windows::Foundation::IInspectable const*>(&target)));
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
    HRESULT __stdcall Recycle() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Recycle();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ProcessBindings(::IUnknown* item, int32_t itemIndex, int32_t phase, int32_t* nextPhase) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProcessBindings(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&item), itemIndex, phase, *nextPhase);
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
    HRESULT __stdcall Write(::IUnknown* inputStreams, ::IUnknown* outputStreams, ::IUnknown* xamlMetadataProvider, abi_t<Windows::UI::Xaml::Markup::XamlBinaryWriterErrorInformation>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().Write(*reinterpret_cast<Windows::Foundation::Collections::IVector<Windows::Storage::Streams::IRandomAccessStream> const*>(&inputStreams), *reinterpret_cast<Windows::Foundation::Collections::IVector<Windows::Storage::Streams::IRandomAccessStream> const*>(&outputStreams), *reinterpret_cast<Windows::UI::Xaml::Markup::IXamlMetadataProvider const*>(&xamlMetadataProvider)));
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
    HRESULT __stdcall get_DataTemplateComponentProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DataTemplateComponentProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDataTemplateComponent(::IUnknown* element, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDataTemplateComponent(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetDataTemplateComponent(::IUnknown* element, ::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDataTemplateComponent(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<Windows::UI::Xaml::Markup::IDataTemplateComponent const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SuspendRendering(::IUnknown* target) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SuspendRendering(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&target));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ResumeRendering(::IUnknown* target) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResumeRendering(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&target));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConvertValue(abi_t<Windows::UI::Xaml::Interop::TypeName> type, ::IUnknown* value, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().ConvertValue(*reinterpret_cast<Windows::UI::Xaml::Interop::TypeName const*>(&type), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPropertyFromString(::IUnknown* dependencyObject, ::IUnknown* propertyToSet, HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPropertyFromString(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&dependencyObject), *reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&propertyToSet), *reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPropertyFromBoolean(::IUnknown* dependencyObject, ::IUnknown* propertyToSet, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPropertyFromBoolean(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&dependencyObject), *reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&propertyToSet), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPropertyFromChar16(::IUnknown* dependencyObject, ::IUnknown* propertyToSet, char16_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPropertyFromChar16(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&dependencyObject), *reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&propertyToSet), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPropertyFromDateTime(::IUnknown* dependencyObject, ::IUnknown* propertyToSet, abi_t<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPropertyFromDateTime(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&dependencyObject), *reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&propertyToSet), *reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPropertyFromDouble(::IUnknown* dependencyObject, ::IUnknown* propertyToSet, double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPropertyFromDouble(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&dependencyObject), *reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&propertyToSet), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPropertyFromInt32(::IUnknown* dependencyObject, ::IUnknown* propertyToSet, int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPropertyFromInt32(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&dependencyObject), *reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&propertyToSet), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPropertyFromUInt32(::IUnknown* dependencyObject, ::IUnknown* propertyToSet, uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPropertyFromUInt32(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&dependencyObject), *reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&propertyToSet), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPropertyFromInt64(::IUnknown* dependencyObject, ::IUnknown* propertyToSet, int64_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPropertyFromInt64(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&dependencyObject), *reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&propertyToSet), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPropertyFromUInt64(::IUnknown* dependencyObject, ::IUnknown* propertyToSet, uint64_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPropertyFromUInt64(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&dependencyObject), *reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&propertyToSet), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPropertyFromSingle(::IUnknown* dependencyObject, ::IUnknown* propertyToSet, float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPropertyFromSingle(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&dependencyObject), *reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&propertyToSet), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPropertyFromPoint(::IUnknown* dependencyObject, ::IUnknown* propertyToSet, abi_t<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPropertyFromPoint(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&dependencyObject), *reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&propertyToSet), *reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPropertyFromRect(::IUnknown* dependencyObject, ::IUnknown* propertyToSet, abi_t<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPropertyFromRect(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&dependencyObject), *reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&propertyToSet), *reinterpret_cast<Windows::Foundation::Rect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPropertyFromSize(::IUnknown* dependencyObject, ::IUnknown* propertyToSet, abi_t<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPropertyFromSize(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&dependencyObject), *reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&propertyToSet), *reinterpret_cast<Windows::Foundation::Size const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPropertyFromTimeSpan(::IUnknown* dependencyObject, ::IUnknown* propertyToSet, abi_t<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPropertyFromTimeSpan(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&dependencyObject), *reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&propertyToSet), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPropertyFromByte(::IUnknown* dependencyObject, ::IUnknown* propertyToSet, uint8_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPropertyFromByte(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&dependencyObject), *reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&propertyToSet), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPropertyFromUri(::IUnknown* dependencyObject, ::IUnknown* propertyToSet, ::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPropertyFromUri(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&dependencyObject), *reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&propertyToSet), *reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPropertyFromObject(::IUnknown* dependencyObject, ::IUnknown* propertyToSet, ::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPropertyFromObject(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&dependencyObject), *reinterpret_cast<Windows::UI::Xaml::DependencyProperty const*>(&propertyToSet), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Markup::IXamlMarkupHelper> : produce_base<D, Windows::UI::Xaml::Markup::IXamlMarkupHelper>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Markup::IXamlMarkupHelperStatics> : produce_base<D, Windows::UI::Xaml::Markup::IXamlMarkupHelperStatics>
{
    HRESULT __stdcall UnloadObject(::IUnknown* element) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UnloadObject(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element));
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
    HRESULT __stdcall get_IsAttachable(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsAttachable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDependencyProperty(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDependencyProperty());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsReadOnly(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsReadOnly());
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

    HRESULT __stdcall get_TargetType(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Type(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetValue(::IUnknown* instance, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetValue(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&instance)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetValue(::IUnknown* instance, ::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetValue(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&instance), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
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
    HRESULT __stdcall GetXamlType(abi_t<Windows::UI::Xaml::Interop::TypeName> type, ::IUnknown** xamlType) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *xamlType = detach_abi(this->shim().GetXamlType(*reinterpret_cast<Windows::UI::Xaml::Interop::TypeName const*>(&type)));
            return S_OK;
        }
        catch (...)
        {
            *xamlType = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetXamlTypeByFullName(HSTRING fullName, ::IUnknown** xamlType) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *xamlType = detach_abi(this->shim().GetXamlType(*reinterpret_cast<hstring const*>(&fullName)));
            return S_OK;
        }
        catch (...)
        {
            *xamlType = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetXmlnsDefinitions(uint32_t* __definitionsSize, abi_t<Windows::UI::Xaml::Markup::XmlnsDefinition>** definitions) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__definitionsSize, *definitions) = detach_abi(this->shim().GetXmlnsDefinitions());
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
    HRESULT __stdcall Load(HSTRING xaml, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().Load(*reinterpret_cast<hstring const*>(&xaml)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadWithInitialTemplateValidation(HSTRING xaml, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().LoadWithInitialTemplateValidation(*reinterpret_cast<hstring const*>(&xaml)));
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
    HRESULT __stdcall get_BaseType(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BaseType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FullName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FullName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsArray(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsArray());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCollection(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCollection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsConstructible(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsConstructible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDictionary(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDictionary());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsMarkupExtension(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsMarkupExtension());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsBindable(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsBindable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemType(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ItemType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyType(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UnderlyingType(abi_t<Windows::UI::Xaml::Interop::TypeName>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UnderlyingType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ActivateInstance(::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().ActivateInstance());
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromString(HSTRING value, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateFromString(*reinterpret_cast<hstring const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetMember(HSTRING name, ::IUnknown** xamlMember) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *xamlMember = detach_abi(this->shim().GetMember(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *xamlMember = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddToVector(::IUnknown* instance, ::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddToVector(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&instance), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddToMap(::IUnknown* instance, ::IUnknown* key, ::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddToMap(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&instance), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&key), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RunInitializer() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
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

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Markup {

inline Windows::UI::Xaml::Markup::XamlBinaryWriterErrorInformation XamlBinaryWriter::Write(param::vector<Windows::Storage::Streams::IRandomAccessStream> const& inputStreams, param::vector<Windows::Storage::Streams::IRandomAccessStream> const& outputStreams, Windows::UI::Xaml::Markup::IXamlMetadataProvider const& xamlMetadataProvider)
{
    return get_activation_factory<XamlBinaryWriter, Windows::UI::Xaml::Markup::IXamlBinaryWriterStatics>().Write(inputStreams, outputStreams, xamlMetadataProvider);
}

inline Windows::UI::Xaml::DependencyProperty XamlBindingHelper::DataTemplateComponentProperty()
{
    return get_activation_factory<XamlBindingHelper, Windows::UI::Xaml::Markup::IXamlBindingHelperStatics>().DataTemplateComponentProperty();
}

inline Windows::UI::Xaml::Markup::IDataTemplateComponent XamlBindingHelper::GetDataTemplateComponent(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<XamlBindingHelper, Windows::UI::Xaml::Markup::IXamlBindingHelperStatics>().GetDataTemplateComponent(element);
}

inline void XamlBindingHelper::SetDataTemplateComponent(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Markup::IDataTemplateComponent const& value)
{
    get_activation_factory<XamlBindingHelper, Windows::UI::Xaml::Markup::IXamlBindingHelperStatics>().SetDataTemplateComponent(element, value);
}

inline void XamlBindingHelper::SuspendRendering(Windows::UI::Xaml::UIElement const& target)
{
    get_activation_factory<XamlBindingHelper, Windows::UI::Xaml::Markup::IXamlBindingHelperStatics>().SuspendRendering(target);
}

inline void XamlBindingHelper::ResumeRendering(Windows::UI::Xaml::UIElement const& target)
{
    get_activation_factory<XamlBindingHelper, Windows::UI::Xaml::Markup::IXamlBindingHelperStatics>().ResumeRendering(target);
}

inline Windows::Foundation::IInspectable XamlBindingHelper::ConvertValue(Windows::UI::Xaml::Interop::TypeName const& type, Windows::Foundation::IInspectable const& value)
{
    return get_activation_factory<XamlBindingHelper, Windows::UI::Xaml::Markup::IXamlBindingHelperStatics>().ConvertValue(type, value);
}

inline void XamlBindingHelper::SetPropertyFromString(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, param::hstring const& value)
{
    get_activation_factory<XamlBindingHelper, Windows::UI::Xaml::Markup::IXamlBindingHelperStatics>().SetPropertyFromString(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromBoolean(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, bool value)
{
    get_activation_factory<XamlBindingHelper, Windows::UI::Xaml::Markup::IXamlBindingHelperStatics>().SetPropertyFromBoolean(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromChar16(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, char16_t value)
{
    get_activation_factory<XamlBindingHelper, Windows::UI::Xaml::Markup::IXamlBindingHelperStatics>().SetPropertyFromChar16(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromDateTime(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::DateTime const& value)
{
    get_activation_factory<XamlBindingHelper, Windows::UI::Xaml::Markup::IXamlBindingHelperStatics>().SetPropertyFromDateTime(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromDouble(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, double value)
{
    get_activation_factory<XamlBindingHelper, Windows::UI::Xaml::Markup::IXamlBindingHelperStatics>().SetPropertyFromDouble(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromInt32(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, int32_t value)
{
    get_activation_factory<XamlBindingHelper, Windows::UI::Xaml::Markup::IXamlBindingHelperStatics>().SetPropertyFromInt32(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromUInt32(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, uint32_t value)
{
    get_activation_factory<XamlBindingHelper, Windows::UI::Xaml::Markup::IXamlBindingHelperStatics>().SetPropertyFromUInt32(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromInt64(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, int64_t value)
{
    get_activation_factory<XamlBindingHelper, Windows::UI::Xaml::Markup::IXamlBindingHelperStatics>().SetPropertyFromInt64(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromUInt64(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, uint64_t value)
{
    get_activation_factory<XamlBindingHelper, Windows::UI::Xaml::Markup::IXamlBindingHelperStatics>().SetPropertyFromUInt64(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromSingle(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, float value)
{
    get_activation_factory<XamlBindingHelper, Windows::UI::Xaml::Markup::IXamlBindingHelperStatics>().SetPropertyFromSingle(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromPoint(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::Point const& value)
{
    get_activation_factory<XamlBindingHelper, Windows::UI::Xaml::Markup::IXamlBindingHelperStatics>().SetPropertyFromPoint(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromRect(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::Rect const& value)
{
    get_activation_factory<XamlBindingHelper, Windows::UI::Xaml::Markup::IXamlBindingHelperStatics>().SetPropertyFromRect(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromSize(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::Size const& value)
{
    get_activation_factory<XamlBindingHelper, Windows::UI::Xaml::Markup::IXamlBindingHelperStatics>().SetPropertyFromSize(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromTimeSpan(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::TimeSpan const& value)
{
    get_activation_factory<XamlBindingHelper, Windows::UI::Xaml::Markup::IXamlBindingHelperStatics>().SetPropertyFromTimeSpan(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromByte(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, uint8_t value)
{
    get_activation_factory<XamlBindingHelper, Windows::UI::Xaml::Markup::IXamlBindingHelperStatics>().SetPropertyFromByte(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromUri(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::Uri const& value)
{
    get_activation_factory<XamlBindingHelper, Windows::UI::Xaml::Markup::IXamlBindingHelperStatics>().SetPropertyFromUri(dependencyObject, propertyToSet, value);
}

inline void XamlBindingHelper::SetPropertyFromObject(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::IInspectable const& value)
{
    get_activation_factory<XamlBindingHelper, Windows::UI::Xaml::Markup::IXamlBindingHelperStatics>().SetPropertyFromObject(dependencyObject, propertyToSet, value);
}

inline void XamlMarkupHelper::UnloadObject(Windows::UI::Xaml::DependencyObject const& element)
{
    get_activation_factory<XamlMarkupHelper, Windows::UI::Xaml::Markup::IXamlMarkupHelperStatics>().UnloadObject(element);
}

inline Windows::Foundation::IInspectable XamlReader::Load(param::hstring const& xaml)
{
    return get_activation_factory<XamlReader, Windows::UI::Xaml::Markup::IXamlReaderStatics>().Load(xaml);
}

inline Windows::Foundation::IInspectable XamlReader::LoadWithInitialTemplateValidation(param::hstring const& xaml)
{
    return get_activation_factory<XamlReader, Windows::UI::Xaml::Markup::IXamlReaderStatics>().LoadWithInitialTemplateValidation(xaml);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Xaml::Markup::IComponentConnector> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Markup::IComponentConnector> {};

template<> struct hash<winrt::Windows::UI::Xaml::Markup::IComponentConnector2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Markup::IComponentConnector2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Markup::IDataTemplateComponent> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Markup::IDataTemplateComponent> {};

template<> struct hash<winrt::Windows::UI::Xaml::Markup::IXamlBinaryWriter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Markup::IXamlBinaryWriter> {};

template<> struct hash<winrt::Windows::UI::Xaml::Markup::IXamlBinaryWriterStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Markup::IXamlBinaryWriterStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Markup::IXamlBindingHelper> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Markup::IXamlBindingHelper> {};

template<> struct hash<winrt::Windows::UI::Xaml::Markup::IXamlBindingHelperStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Markup::IXamlBindingHelperStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Markup::IXamlMarkupHelper> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Markup::IXamlMarkupHelper> {};

template<> struct hash<winrt::Windows::UI::Xaml::Markup::IXamlMarkupHelperStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Markup::IXamlMarkupHelperStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Markup::IXamlMember> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Markup::IXamlMember> {};

template<> struct hash<winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider> {};

template<> struct hash<winrt::Windows::UI::Xaml::Markup::IXamlReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Markup::IXamlReader> {};

template<> struct hash<winrt::Windows::UI::Xaml::Markup::IXamlReaderStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Markup::IXamlReaderStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Markup::IXamlType> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Markup::IXamlType> {};

template<> struct hash<winrt::Windows::UI::Xaml::Markup::XamlBinaryWriter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Markup::XamlBinaryWriter> {};

template<> struct hash<winrt::Windows::UI::Xaml::Markup::XamlBindingHelper> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Markup::XamlBindingHelper> {};

template<> struct hash<winrt::Windows::UI::Xaml::Markup::XamlMarkupHelper> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Markup::XamlMarkupHelper> {};

template<> struct hash<winrt::Windows::UI::Xaml::Markup::XamlReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Markup::XamlReader> {};

}

WINRT_WARNING_POP
