// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.UI.Xaml.3.h"
#include "internal/Windows.UI.Xaml.Automation.Peers.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.UI.Xaml.Automation.3.h"
#include "Windows.UI.Xaml.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics>
{
    HRESULT __stdcall get_AnnotationTypeIdProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AnnotationTypeIdProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AnnotationTypeNameProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AnnotationTypeNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AuthorProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AuthorProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DateTimeProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DateTimeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TargetProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IAutomationAnnotation> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationAnnotation>
{
    HRESULT __stdcall get_Type(Windows::UI::Xaml::Automation::AnnotationType * value) noexcept override
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

    HRESULT __stdcall put_Type(Windows::UI::Xaml::Automation::AnnotationType value) noexcept override
    {
        try
        {
            this->shim().Type(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Element(abi_arg_out<Windows::UI::Xaml::IUIElement> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Element());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Element(abi_arg_in<Windows::UI::Xaml::IUIElement> value) noexcept override
    {
        try
        {
            this->shim().Element(*reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IAutomationAnnotationFactory> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationAnnotationFactory>
{
    HRESULT __stdcall abi_CreateInstance(Windows::UI::Xaml::Automation::AnnotationType type, abi_arg_out<Windows::UI::Xaml::Automation::IAutomationAnnotation> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(type));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithElementParameter(Windows::UI::Xaml::Automation::AnnotationType type, abi_arg_in<Windows::UI::Xaml::IUIElement> element, abi_arg_out<Windows::UI::Xaml::Automation::IAutomationAnnotation> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateWithElementParameter(type, *reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IAutomationAnnotationStatics> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationAnnotationStatics>
{
    HRESULT __stdcall get_TypeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TypeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ElementProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ElementProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>
{
    HRESULT __stdcall get_AcceleratorKeyProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AcceleratorKeyProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AccessKeyProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AccessKeyProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutomationIdProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AutomationIdProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BoundingRectangleProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BoundingRectangleProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClassNameProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ClassNameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClickablePointProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ClickablePointProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ControlTypeProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ControlTypeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasKeyboardFocusProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HasKeyboardFocusProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HelpTextProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HelpTextProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsContentElementProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsContentElementProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsControlElementProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsControlElementProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsEnabledProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsKeyboardFocusableProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsKeyboardFocusableProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsOffscreenProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsOffscreenProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPasswordProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsPasswordProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsRequiredForFormProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsRequiredForFormProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemStatusProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ItemStatusProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemTypeProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ItemTypeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LabeledByProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LabeledByProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalizedControlTypeProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocalizedControlTypeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NameProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OrientationProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OrientationProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LiveSettingProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LiveSettingProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics2> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics2>
{
    HRESULT __stdcall get_ControlledPeersProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ControlledPeersProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics3> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics3>
{
    HRESULT __stdcall get_PositionInSetProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PositionInSetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SizeOfSetProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SizeOfSetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LevelProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LevelProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AnnotationsProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AnnotationsProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics4> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics4>
{
    HRESULT __stdcall get_LandmarkTypeProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LandmarkTypeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalizedLandmarkTypeProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocalizedLandmarkTypeProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5>
{
    HRESULT __stdcall get_IsPeripheralProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsPeripheralProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDataValidForFormProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsDataValidForFormProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FullDescriptionProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FullDescriptionProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DescribedByProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DescribedByProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FlowsToProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FlowsToProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FlowsFromProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FlowsFromProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IAutomationProperties> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationProperties>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>
{
    HRESULT __stdcall get_AcceleratorKeyProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AcceleratorKeyProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAcceleratorKey(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetAcceleratorKey(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetAcceleratorKey(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().SetAcceleratorKey(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element), *reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AccessKeyProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AccessKeyProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAccessKey(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetAccessKey(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetAccessKey(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().SetAccessKey(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element), *reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutomationIdProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AutomationIdProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAutomationId(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetAutomationId(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetAutomationId(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().SetAutomationId(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element), *reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HelpTextProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HelpTextProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetHelpText(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetHelpText(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetHelpText(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().SetHelpText(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element), *reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsRequiredForFormProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsRequiredForFormProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIsRequiredForForm(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetIsRequiredForForm(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetIsRequiredForForm(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, bool value) noexcept override
    {
        try
        {
            this->shim().SetIsRequiredForForm(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemStatusProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ItemStatusProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetItemStatus(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetItemStatus(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetItemStatus(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().SetItemStatus(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element), *reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemTypeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ItemTypeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetItemType(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetItemType(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetItemType(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().SetItemType(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element), *reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LabeledByProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LabeledByProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetLabeledBy(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_out<Windows::UI::Xaml::IUIElement> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetLabeledBy(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetLabeledBy(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_in<Windows::UI::Xaml::IUIElement> value) noexcept override
    {
        try
        {
            this->shim().SetLabeledBy(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element), *reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NameProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetName(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetName(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetName(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().SetName(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element), *reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LiveSettingProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LiveSettingProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetLiveSetting(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetLiveSetting(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetLiveSetting(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting value) noexcept override
    {
        try
        {
            this->shim().SetLiveSetting(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2>
{
    HRESULT __stdcall get_AccessibilityViewProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AccessibilityViewProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAccessibilityView(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, Windows::UI::Xaml::Automation::Peers::AccessibilityView * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetAccessibilityView(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetAccessibilityView(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, Windows::UI::Xaml::Automation::Peers::AccessibilityView value) noexcept override
    {
        try
        {
            this->shim().SetAccessibilityView(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ControlledPeersProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ControlledPeersProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetControlledPeers(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::UIElement>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetControlledPeers(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
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
struct produce<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3>
{
    HRESULT __stdcall get_PositionInSetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PositionInSetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPositionInSet(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetPositionInSet(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPositionInSet(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, int32_t value) noexcept override
    {
        try
        {
            this->shim().SetPositionInSet(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SizeOfSetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SizeOfSetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSizeOfSet(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetSizeOfSet(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetSizeOfSet(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, int32_t value) noexcept override
    {
        try
        {
            this->shim().SetSizeOfSet(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LevelProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LevelProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetLevel(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetLevel(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetLevel(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, int32_t value) noexcept override
    {
        try
        {
            this->shim().SetLevel(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AnnotationsProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AnnotationsProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAnnotations(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::AutomationAnnotation>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetAnnotations(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
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
struct produce<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4>
{
    HRESULT __stdcall get_LandmarkTypeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LandmarkTypeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetLandmarkType(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetLandmarkType(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetLandmarkType(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType value) noexcept override
    {
        try
        {
            this->shim().SetLandmarkType(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalizedLandmarkTypeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocalizedLandmarkTypeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetLocalizedLandmarkType(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetLocalizedLandmarkType(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetLocalizedLandmarkType(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().SetLocalizedLandmarkType(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element), *reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5>
{
    HRESULT __stdcall get_IsPeripheralProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsPeripheralProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIsPeripheral(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetIsPeripheral(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetIsPeripheral(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, bool value) noexcept override
    {
        try
        {
            this->shim().SetIsPeripheral(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDataValidForFormProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsDataValidForFormProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIsDataValidForForm(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetIsDataValidForForm(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetIsDataValidForForm(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, bool value) noexcept override
    {
        try
        {
            this->shim().SetIsDataValidForForm(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FullDescriptionProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FullDescriptionProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFullDescription(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetFullDescription(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetFullDescription(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().SetFullDescription(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element), *reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalizedControlTypeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocalizedControlTypeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetLocalizedControlType(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetLocalizedControlType(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetLocalizedControlType(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().SetLocalizedControlType(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element), *reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DescribedByProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DescribedByProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDescribedBy(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDescribedBy(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FlowsToProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FlowsToProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFlowsTo(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetFlowsTo(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FlowsFromProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FlowsFromProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFlowsFrom(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetFlowsFrom(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
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
struct produce<D, Windows::UI::Xaml::Automation::IAutomationProperty> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationProperty>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IDockPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IDockPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IDockPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IDockPatternIdentifiersStatics>
{
    HRESULT __stdcall get_DockPositionProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DockPositionProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IDragPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IDragPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IDragPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IDragPatternIdentifiersStatics>
{
    HRESULT __stdcall get_DropEffectProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DropEffectProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DropEffectsProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DropEffectsProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GrabbedItemsProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GrabbedItemsProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsGrabbedProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsGrabbedProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiersStatics>
{
    HRESULT __stdcall get_DropTargetEffectProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DropTargetEffectProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DropTargetEffectsProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DropTargetEffectsProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiersStatics>
{
    HRESULT __stdcall get_ExpandCollapseStateProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExpandCollapseStateProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IGridItemPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IGridItemPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics>
{
    HRESULT __stdcall get_ColumnProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ColumnProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ColumnSpanProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ColumnSpanProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContainingGridProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContainingGridProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RowProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RowProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RowSpanProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RowSpanProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IGridPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IGridPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IGridPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IGridPatternIdentifiersStatics>
{
    HRESULT __stdcall get_ColumnCountProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ColumnCountProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RowCountProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RowCountProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiersStatics>
{
    HRESULT __stdcall get_CurrentViewProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CurrentViewProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedViewsProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportedViewsProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics>
{
    HRESULT __stdcall get_IsReadOnlyProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsReadOnlyProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LargeChangeProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LargeChangeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaximumProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaximumProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinimumProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MinimumProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SmallChangeProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SmallChangeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ValueProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ValueProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IScrollPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IScrollPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics>
{
    HRESULT __stdcall get_HorizontallyScrollableProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HorizontallyScrollableProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalScrollPercentProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HorizontalScrollPercentProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalViewSizeProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HorizontalViewSizeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NoScroll(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NoScroll());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticallyScrollableProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VerticallyScrollableProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalScrollPercentProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VerticalScrollPercentProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalViewSizeProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VerticalViewSizeProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiersStatics>
{
    HRESULT __stdcall get_IsSelectedProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsSelectedProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectionContainerProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectionContainerProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::ISelectionPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::ISelectionPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::ISelectionPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::ISelectionPatternIdentifiersStatics>
{
    HRESULT __stdcall get_CanSelectMultipleProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanSelectMultipleProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSelectionRequiredProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsSelectionRequiredProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectionProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectionProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiersStatics>
{
    HRESULT __stdcall get_FormulaProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FormulaProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IStylesPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IStylesPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics>
{
    HRESULT __stdcall get_ExtendedPropertiesProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExtendedPropertiesProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FillColorProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FillColorProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FillPatternColorProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FillPatternColorProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FillPatternStyleProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FillPatternStyleProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShapeProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ShapeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StyleIdProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StyleIdProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StyleNameProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StyleNameProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::ITableItemPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::ITableItemPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::ITableItemPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::ITableItemPatternIdentifiersStatics>
{
    HRESULT __stdcall get_ColumnHeaderItemsProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ColumnHeaderItemsProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RowHeaderItemsProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RowHeaderItemsProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::ITablePatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::ITablePatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::ITablePatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::ITablePatternIdentifiersStatics>
{
    HRESULT __stdcall get_ColumnHeadersProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ColumnHeadersProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RowHeadersProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RowHeadersProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RowOrColumnMajorProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RowOrColumnMajorProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::ITogglePatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::ITogglePatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::ITogglePatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::ITogglePatternIdentifiersStatics>
{
    HRESULT __stdcall get_ToggleStateProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ToggleStateProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::ITransformPattern2Identifiers> : produce_base<D, Windows::UI::Xaml::Automation::ITransformPattern2Identifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::ITransformPattern2IdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::ITransformPattern2IdentifiersStatics>
{
    HRESULT __stdcall get_CanZoomProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanZoomProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZoomLevelProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ZoomLevelProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxZoomProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxZoomProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinZoomProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MinZoomProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::ITransformPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::ITransformPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::ITransformPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::ITransformPatternIdentifiersStatics>
{
    HRESULT __stdcall get_CanMoveProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanMoveProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanResizeProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanResizeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanRotateProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanRotateProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IValuePatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IValuePatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IValuePatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IValuePatternIdentifiersStatics>
{
    HRESULT __stdcall get_IsReadOnlyProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsReadOnlyProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ValueProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ValueProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::IWindowPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IWindowPatternIdentifiers>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics>
{
    HRESULT __stdcall get_CanMaximizeProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanMaximizeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanMinimizeProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanMinimizeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsModalProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsModalProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsTopmostProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsTopmostProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WindowInteractionStateProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WindowInteractionStateProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WindowVisualStateProperty(abi_arg_out<Windows::UI::Xaml::Automation::IAutomationProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WindowVisualStateProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::UI::Xaml::Automation {

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAnnotationPatternIdentifiersStatics<D>::AnnotationTypeIdProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAnnotationPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_AnnotationTypeIdProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAnnotationPatternIdentifiersStatics<D>::AnnotationTypeNameProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAnnotationPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_AnnotationTypeNameProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAnnotationPatternIdentifiersStatics<D>::AuthorProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAnnotationPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_AuthorProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAnnotationPatternIdentifiersStatics<D>::DateTimeProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAnnotationPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_DateTimeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAnnotationPatternIdentifiersStatics<D>::TargetProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAnnotationPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_TargetProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics<D>::AcceleratorKeyProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics &>(static_cast<const D &>(*this))->get_AcceleratorKeyProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics<D>::AccessKeyProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics &>(static_cast<const D &>(*this))->get_AccessKeyProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics<D>::AutomationIdProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics &>(static_cast<const D &>(*this))->get_AutomationIdProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics<D>::BoundingRectangleProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics &>(static_cast<const D &>(*this))->get_BoundingRectangleProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics<D>::ClassNameProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics &>(static_cast<const D &>(*this))->get_ClassNameProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics<D>::ClickablePointProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics &>(static_cast<const D &>(*this))->get_ClickablePointProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics<D>::ControlTypeProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics &>(static_cast<const D &>(*this))->get_ControlTypeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics<D>::HasKeyboardFocusProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics &>(static_cast<const D &>(*this))->get_HasKeyboardFocusProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics<D>::HelpTextProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics &>(static_cast<const D &>(*this))->get_HelpTextProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics<D>::IsContentElementProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics &>(static_cast<const D &>(*this))->get_IsContentElementProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics<D>::IsControlElementProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics &>(static_cast<const D &>(*this))->get_IsControlElementProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics<D>::IsEnabledProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics &>(static_cast<const D &>(*this))->get_IsEnabledProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics<D>::IsKeyboardFocusableProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics &>(static_cast<const D &>(*this))->get_IsKeyboardFocusableProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics<D>::IsOffscreenProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics &>(static_cast<const D &>(*this))->get_IsOffscreenProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics<D>::IsPasswordProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics &>(static_cast<const D &>(*this))->get_IsPasswordProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics<D>::IsRequiredForFormProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics &>(static_cast<const D &>(*this))->get_IsRequiredForFormProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics<D>::ItemStatusProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics &>(static_cast<const D &>(*this))->get_ItemStatusProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics<D>::ItemTypeProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics &>(static_cast<const D &>(*this))->get_ItemTypeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics<D>::LabeledByProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics &>(static_cast<const D &>(*this))->get_LabeledByProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics<D>::LocalizedControlTypeProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics &>(static_cast<const D &>(*this))->get_LocalizedControlTypeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics<D>::NameProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics &>(static_cast<const D &>(*this))->get_NameProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics<D>::OrientationProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics &>(static_cast<const D &>(*this))->get_OrientationProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics<D>::LiveSettingProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics &>(static_cast<const D &>(*this))->get_LiveSettingProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics2<D>::ControlledPeersProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics2 &>(static_cast<const D &>(*this))->get_ControlledPeersProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics3<D>::PositionInSetProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics3 &>(static_cast<const D &>(*this))->get_PositionInSetProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics3<D>::SizeOfSetProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics3 &>(static_cast<const D &>(*this))->get_SizeOfSetProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics3<D>::LevelProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics3 &>(static_cast<const D &>(*this))->get_LevelProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics3<D>::AnnotationsProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics3 &>(static_cast<const D &>(*this))->get_AnnotationsProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics4<D>::LandmarkTypeProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics4 &>(static_cast<const D &>(*this))->get_LandmarkTypeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics4<D>::LocalizedLandmarkTypeProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics4 &>(static_cast<const D &>(*this))->get_LocalizedLandmarkTypeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics5<D>::IsPeripheralProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics5 &>(static_cast<const D &>(*this))->get_IsPeripheralProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics5<D>::IsDataValidForFormProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics5 &>(static_cast<const D &>(*this))->get_IsDataValidForFormProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics5<D>::FullDescriptionProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics5 &>(static_cast<const D &>(*this))->get_FullDescriptionProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics5<D>::DescribedByProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics5 &>(static_cast<const D &>(*this))->get_DescribedByProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics5<D>::FlowsToProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics5 &>(static_cast<const D &>(*this))->get_FlowsToProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IAutomationElementIdentifiersStatics5<D>::FlowsFromProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IAutomationElementIdentifiersStatics5 &>(static_cast<const D &>(*this))->get_FlowsFromProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IAutomationPropertiesStatics<D>::AcceleratorKeyProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->get_AcceleratorKeyProperty(put(value)));
    return value;
}

template <typename D> hstring impl_IAutomationPropertiesStatics<D>::GetAcceleratorKey(const Windows::UI::Xaml::DependencyObject & element) const
{
    hstring value;
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->abi_GetAcceleratorKey(get(element), put(value)));
    return value;
}

template <typename D> void impl_IAutomationPropertiesStatics<D>::SetAcceleratorKey(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value) const
{
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->abi_SetAcceleratorKey(get(element), get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IAutomationPropertiesStatics<D>::AccessKeyProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->get_AccessKeyProperty(put(value)));
    return value;
}

template <typename D> hstring impl_IAutomationPropertiesStatics<D>::GetAccessKey(const Windows::UI::Xaml::DependencyObject & element) const
{
    hstring value;
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->abi_GetAccessKey(get(element), put(value)));
    return value;
}

template <typename D> void impl_IAutomationPropertiesStatics<D>::SetAccessKey(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value) const
{
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->abi_SetAccessKey(get(element), get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IAutomationPropertiesStatics<D>::AutomationIdProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->get_AutomationIdProperty(put(value)));
    return value;
}

template <typename D> hstring impl_IAutomationPropertiesStatics<D>::GetAutomationId(const Windows::UI::Xaml::DependencyObject & element) const
{
    hstring value;
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->abi_GetAutomationId(get(element), put(value)));
    return value;
}

template <typename D> void impl_IAutomationPropertiesStatics<D>::SetAutomationId(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value) const
{
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->abi_SetAutomationId(get(element), get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IAutomationPropertiesStatics<D>::HelpTextProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->get_HelpTextProperty(put(value)));
    return value;
}

template <typename D> hstring impl_IAutomationPropertiesStatics<D>::GetHelpText(const Windows::UI::Xaml::DependencyObject & element) const
{
    hstring value;
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->abi_GetHelpText(get(element), put(value)));
    return value;
}

template <typename D> void impl_IAutomationPropertiesStatics<D>::SetHelpText(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value) const
{
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->abi_SetHelpText(get(element), get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IAutomationPropertiesStatics<D>::IsRequiredForFormProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->get_IsRequiredForFormProperty(put(value)));
    return value;
}

template <typename D> bool impl_IAutomationPropertiesStatics<D>::GetIsRequiredForForm(const Windows::UI::Xaml::DependencyObject & element) const
{
    bool value {};
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->abi_GetIsRequiredForForm(get(element), &value));
    return value;
}

template <typename D> void impl_IAutomationPropertiesStatics<D>::SetIsRequiredForForm(const Windows::UI::Xaml::DependencyObject & element, bool value) const
{
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->abi_SetIsRequiredForForm(get(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IAutomationPropertiesStatics<D>::ItemStatusProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->get_ItemStatusProperty(put(value)));
    return value;
}

template <typename D> hstring impl_IAutomationPropertiesStatics<D>::GetItemStatus(const Windows::UI::Xaml::DependencyObject & element) const
{
    hstring value;
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->abi_GetItemStatus(get(element), put(value)));
    return value;
}

template <typename D> void impl_IAutomationPropertiesStatics<D>::SetItemStatus(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value) const
{
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->abi_SetItemStatus(get(element), get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IAutomationPropertiesStatics<D>::ItemTypeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->get_ItemTypeProperty(put(value)));
    return value;
}

template <typename D> hstring impl_IAutomationPropertiesStatics<D>::GetItemType(const Windows::UI::Xaml::DependencyObject & element) const
{
    hstring value;
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->abi_GetItemType(get(element), put(value)));
    return value;
}

template <typename D> void impl_IAutomationPropertiesStatics<D>::SetItemType(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value) const
{
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->abi_SetItemType(get(element), get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IAutomationPropertiesStatics<D>::LabeledByProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->get_LabeledByProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::UIElement impl_IAutomationPropertiesStatics<D>::GetLabeledBy(const Windows::UI::Xaml::DependencyObject & element) const
{
    Windows::UI::Xaml::UIElement value { nullptr };
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->abi_GetLabeledBy(get(element), put(value)));
    return value;
}

template <typename D> void impl_IAutomationPropertiesStatics<D>::SetLabeledBy(const Windows::UI::Xaml::DependencyObject & element, const Windows::UI::Xaml::UIElement & value) const
{
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->abi_SetLabeledBy(get(element), get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IAutomationPropertiesStatics<D>::NameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->get_NameProperty(put(value)));
    return value;
}

template <typename D> hstring impl_IAutomationPropertiesStatics<D>::GetName(const Windows::UI::Xaml::DependencyObject & element) const
{
    hstring value;
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->abi_GetName(get(element), put(value)));
    return value;
}

template <typename D> void impl_IAutomationPropertiesStatics<D>::SetName(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value) const
{
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->abi_SetName(get(element), get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IAutomationPropertiesStatics<D>::LiveSettingProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->get_LiveSettingProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting impl_IAutomationPropertiesStatics<D>::GetLiveSetting(const Windows::UI::Xaml::DependencyObject & element) const
{
    Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting value {};
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->abi_GetLiveSetting(get(element), &value));
    return value;
}

template <typename D> void impl_IAutomationPropertiesStatics<D>::SetLiveSetting(const Windows::UI::Xaml::DependencyObject & element, Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting value) const
{
    check_hresult(static_cast<const IAutomationPropertiesStatics &>(static_cast<const D &>(*this))->abi_SetLiveSetting(get(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IAutomationPropertiesStatics2<D>::AccessibilityViewProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IAutomationPropertiesStatics2 &>(static_cast<const D &>(*this))->get_AccessibilityViewProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AccessibilityView impl_IAutomationPropertiesStatics2<D>::GetAccessibilityView(const Windows::UI::Xaml::DependencyObject & element) const
{
    Windows::UI::Xaml::Automation::Peers::AccessibilityView value {};
    check_hresult(static_cast<const IAutomationPropertiesStatics2 &>(static_cast<const D &>(*this))->abi_GetAccessibilityView(get(element), &value));
    return value;
}

template <typename D> void impl_IAutomationPropertiesStatics2<D>::SetAccessibilityView(const Windows::UI::Xaml::DependencyObject & element, Windows::UI::Xaml::Automation::Peers::AccessibilityView value) const
{
    check_hresult(static_cast<const IAutomationPropertiesStatics2 &>(static_cast<const D &>(*this))->abi_SetAccessibilityView(get(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IAutomationPropertiesStatics2<D>::ControlledPeersProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IAutomationPropertiesStatics2 &>(static_cast<const D &>(*this))->get_ControlledPeersProperty(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::UIElement> impl_IAutomationPropertiesStatics2<D>::GetControlledPeers(const Windows::UI::Xaml::DependencyObject & element) const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::UIElement> value;
    check_hresult(static_cast<const IAutomationPropertiesStatics2 &>(static_cast<const D &>(*this))->abi_GetControlledPeers(get(element), put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IAutomationPropertiesStatics3<D>::PositionInSetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IAutomationPropertiesStatics3 &>(static_cast<const D &>(*this))->get_PositionInSetProperty(put(value)));
    return value;
}

template <typename D> int32_t impl_IAutomationPropertiesStatics3<D>::GetPositionInSet(const Windows::UI::Xaml::DependencyObject & element) const
{
    int32_t value {};
    check_hresult(static_cast<const IAutomationPropertiesStatics3 &>(static_cast<const D &>(*this))->abi_GetPositionInSet(get(element), &value));
    return value;
}

template <typename D> void impl_IAutomationPropertiesStatics3<D>::SetPositionInSet(const Windows::UI::Xaml::DependencyObject & element, int32_t value) const
{
    check_hresult(static_cast<const IAutomationPropertiesStatics3 &>(static_cast<const D &>(*this))->abi_SetPositionInSet(get(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IAutomationPropertiesStatics3<D>::SizeOfSetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IAutomationPropertiesStatics3 &>(static_cast<const D &>(*this))->get_SizeOfSetProperty(put(value)));
    return value;
}

template <typename D> int32_t impl_IAutomationPropertiesStatics3<D>::GetSizeOfSet(const Windows::UI::Xaml::DependencyObject & element) const
{
    int32_t value {};
    check_hresult(static_cast<const IAutomationPropertiesStatics3 &>(static_cast<const D &>(*this))->abi_GetSizeOfSet(get(element), &value));
    return value;
}

template <typename D> void impl_IAutomationPropertiesStatics3<D>::SetSizeOfSet(const Windows::UI::Xaml::DependencyObject & element, int32_t value) const
{
    check_hresult(static_cast<const IAutomationPropertiesStatics3 &>(static_cast<const D &>(*this))->abi_SetSizeOfSet(get(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IAutomationPropertiesStatics3<D>::LevelProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IAutomationPropertiesStatics3 &>(static_cast<const D &>(*this))->get_LevelProperty(put(value)));
    return value;
}

template <typename D> int32_t impl_IAutomationPropertiesStatics3<D>::GetLevel(const Windows::UI::Xaml::DependencyObject & element) const
{
    int32_t value {};
    check_hresult(static_cast<const IAutomationPropertiesStatics3 &>(static_cast<const D &>(*this))->abi_GetLevel(get(element), &value));
    return value;
}

template <typename D> void impl_IAutomationPropertiesStatics3<D>::SetLevel(const Windows::UI::Xaml::DependencyObject & element, int32_t value) const
{
    check_hresult(static_cast<const IAutomationPropertiesStatics3 &>(static_cast<const D &>(*this))->abi_SetLevel(get(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IAutomationPropertiesStatics3<D>::AnnotationsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IAutomationPropertiesStatics3 &>(static_cast<const D &>(*this))->get_AnnotationsProperty(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::AutomationAnnotation> impl_IAutomationPropertiesStatics3<D>::GetAnnotations(const Windows::UI::Xaml::DependencyObject & element) const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::AutomationAnnotation> value;
    check_hresult(static_cast<const IAutomationPropertiesStatics3 &>(static_cast<const D &>(*this))->abi_GetAnnotations(get(element), put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IAutomationPropertiesStatics4<D>::LandmarkTypeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IAutomationPropertiesStatics4 &>(static_cast<const D &>(*this))->get_LandmarkTypeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType impl_IAutomationPropertiesStatics4<D>::GetLandmarkType(const Windows::UI::Xaml::DependencyObject & element) const
{
    Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType value {};
    check_hresult(static_cast<const IAutomationPropertiesStatics4 &>(static_cast<const D &>(*this))->abi_GetLandmarkType(get(element), &value));
    return value;
}

template <typename D> void impl_IAutomationPropertiesStatics4<D>::SetLandmarkType(const Windows::UI::Xaml::DependencyObject & element, Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType value) const
{
    check_hresult(static_cast<const IAutomationPropertiesStatics4 &>(static_cast<const D &>(*this))->abi_SetLandmarkType(get(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IAutomationPropertiesStatics4<D>::LocalizedLandmarkTypeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IAutomationPropertiesStatics4 &>(static_cast<const D &>(*this))->get_LocalizedLandmarkTypeProperty(put(value)));
    return value;
}

template <typename D> hstring impl_IAutomationPropertiesStatics4<D>::GetLocalizedLandmarkType(const Windows::UI::Xaml::DependencyObject & element) const
{
    hstring value;
    check_hresult(static_cast<const IAutomationPropertiesStatics4 &>(static_cast<const D &>(*this))->abi_GetLocalizedLandmarkType(get(element), put(value)));
    return value;
}

template <typename D> void impl_IAutomationPropertiesStatics4<D>::SetLocalizedLandmarkType(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value) const
{
    check_hresult(static_cast<const IAutomationPropertiesStatics4 &>(static_cast<const D &>(*this))->abi_SetLocalizedLandmarkType(get(element), get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IAutomationPropertiesStatics5<D>::IsPeripheralProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IAutomationPropertiesStatics5 &>(static_cast<const D &>(*this))->get_IsPeripheralProperty(put(value)));
    return value;
}

template <typename D> bool impl_IAutomationPropertiesStatics5<D>::GetIsPeripheral(const Windows::UI::Xaml::DependencyObject & element) const
{
    bool value {};
    check_hresult(static_cast<const IAutomationPropertiesStatics5 &>(static_cast<const D &>(*this))->abi_GetIsPeripheral(get(element), &value));
    return value;
}

template <typename D> void impl_IAutomationPropertiesStatics5<D>::SetIsPeripheral(const Windows::UI::Xaml::DependencyObject & element, bool value) const
{
    check_hresult(static_cast<const IAutomationPropertiesStatics5 &>(static_cast<const D &>(*this))->abi_SetIsPeripheral(get(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IAutomationPropertiesStatics5<D>::IsDataValidForFormProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IAutomationPropertiesStatics5 &>(static_cast<const D &>(*this))->get_IsDataValidForFormProperty(put(value)));
    return value;
}

template <typename D> bool impl_IAutomationPropertiesStatics5<D>::GetIsDataValidForForm(const Windows::UI::Xaml::DependencyObject & element) const
{
    bool value {};
    check_hresult(static_cast<const IAutomationPropertiesStatics5 &>(static_cast<const D &>(*this))->abi_GetIsDataValidForForm(get(element), &value));
    return value;
}

template <typename D> void impl_IAutomationPropertiesStatics5<D>::SetIsDataValidForForm(const Windows::UI::Xaml::DependencyObject & element, bool value) const
{
    check_hresult(static_cast<const IAutomationPropertiesStatics5 &>(static_cast<const D &>(*this))->abi_SetIsDataValidForForm(get(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IAutomationPropertiesStatics5<D>::FullDescriptionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IAutomationPropertiesStatics5 &>(static_cast<const D &>(*this))->get_FullDescriptionProperty(put(value)));
    return value;
}

template <typename D> hstring impl_IAutomationPropertiesStatics5<D>::GetFullDescription(const Windows::UI::Xaml::DependencyObject & element) const
{
    hstring value;
    check_hresult(static_cast<const IAutomationPropertiesStatics5 &>(static_cast<const D &>(*this))->abi_GetFullDescription(get(element), put(value)));
    return value;
}

template <typename D> void impl_IAutomationPropertiesStatics5<D>::SetFullDescription(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value) const
{
    check_hresult(static_cast<const IAutomationPropertiesStatics5 &>(static_cast<const D &>(*this))->abi_SetFullDescription(get(element), get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IAutomationPropertiesStatics5<D>::LocalizedControlTypeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IAutomationPropertiesStatics5 &>(static_cast<const D &>(*this))->get_LocalizedControlTypeProperty(put(value)));
    return value;
}

template <typename D> hstring impl_IAutomationPropertiesStatics5<D>::GetLocalizedControlType(const Windows::UI::Xaml::DependencyObject & element) const
{
    hstring value;
    check_hresult(static_cast<const IAutomationPropertiesStatics5 &>(static_cast<const D &>(*this))->abi_GetLocalizedControlType(get(element), put(value)));
    return value;
}

template <typename D> void impl_IAutomationPropertiesStatics5<D>::SetLocalizedControlType(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value) const
{
    check_hresult(static_cast<const IAutomationPropertiesStatics5 &>(static_cast<const D &>(*this))->abi_SetLocalizedControlType(get(element), get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IAutomationPropertiesStatics5<D>::DescribedByProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IAutomationPropertiesStatics5 &>(static_cast<const D &>(*this))->get_DescribedByProperty(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> impl_IAutomationPropertiesStatics5<D>::GetDescribedBy(const Windows::UI::Xaml::DependencyObject & element) const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> value;
    check_hresult(static_cast<const IAutomationPropertiesStatics5 &>(static_cast<const D &>(*this))->abi_GetDescribedBy(get(element), put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IAutomationPropertiesStatics5<D>::FlowsToProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IAutomationPropertiesStatics5 &>(static_cast<const D &>(*this))->get_FlowsToProperty(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> impl_IAutomationPropertiesStatics5<D>::GetFlowsTo(const Windows::UI::Xaml::DependencyObject & element) const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> value;
    check_hresult(static_cast<const IAutomationPropertiesStatics5 &>(static_cast<const D &>(*this))->abi_GetFlowsTo(get(element), put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IAutomationPropertiesStatics5<D>::FlowsFromProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IAutomationPropertiesStatics5 &>(static_cast<const D &>(*this))->get_FlowsFromProperty(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> impl_IAutomationPropertiesStatics5<D>::GetFlowsFrom(const Windows::UI::Xaml::DependencyObject & element) const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> value;
    check_hresult(static_cast<const IAutomationPropertiesStatics5 &>(static_cast<const D &>(*this))->abi_GetFlowsFrom(get(element), put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IDockPatternIdentifiersStatics<D>::DockPositionProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IDockPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_DockPositionProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IDragPatternIdentifiersStatics<D>::DropEffectProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IDragPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_DropEffectProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IDragPatternIdentifiersStatics<D>::DropEffectsProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IDragPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_DropEffectsProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IDragPatternIdentifiersStatics<D>::GrabbedItemsProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IDragPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_GrabbedItemsProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IDragPatternIdentifiersStatics<D>::IsGrabbedProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IDragPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_IsGrabbedProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IDropTargetPatternIdentifiersStatics<D>::DropTargetEffectProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IDropTargetPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_DropTargetEffectProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IDropTargetPatternIdentifiersStatics<D>::DropTargetEffectsProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IDropTargetPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_DropTargetEffectsProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IExpandCollapsePatternIdentifiersStatics<D>::ExpandCollapseStateProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IExpandCollapsePatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_ExpandCollapseStateProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IGridItemPatternIdentifiersStatics<D>::ColumnProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IGridItemPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_ColumnProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IGridItemPatternIdentifiersStatics<D>::ColumnSpanProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IGridItemPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_ColumnSpanProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IGridItemPatternIdentifiersStatics<D>::ContainingGridProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IGridItemPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_ContainingGridProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IGridItemPatternIdentifiersStatics<D>::RowProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IGridItemPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_RowProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IGridItemPatternIdentifiersStatics<D>::RowSpanProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IGridItemPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_RowSpanProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IGridPatternIdentifiersStatics<D>::ColumnCountProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IGridPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_ColumnCountProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IGridPatternIdentifiersStatics<D>::RowCountProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IGridPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_RowCountProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IMultipleViewPatternIdentifiersStatics<D>::CurrentViewProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IMultipleViewPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_CurrentViewProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IMultipleViewPatternIdentifiersStatics<D>::SupportedViewsProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IMultipleViewPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_SupportedViewsProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IRangeValuePatternIdentifiersStatics<D>::IsReadOnlyProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IRangeValuePatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_IsReadOnlyProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IRangeValuePatternIdentifiersStatics<D>::LargeChangeProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IRangeValuePatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_LargeChangeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IRangeValuePatternIdentifiersStatics<D>::MaximumProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IRangeValuePatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_MaximumProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IRangeValuePatternIdentifiersStatics<D>::MinimumProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IRangeValuePatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_MinimumProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IRangeValuePatternIdentifiersStatics<D>::SmallChangeProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IRangeValuePatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_SmallChangeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IRangeValuePatternIdentifiersStatics<D>::ValueProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IRangeValuePatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_ValueProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IScrollPatternIdentifiersStatics<D>::HorizontallyScrollableProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IScrollPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_HorizontallyScrollableProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IScrollPatternIdentifiersStatics<D>::HorizontalScrollPercentProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IScrollPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_HorizontalScrollPercentProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IScrollPatternIdentifiersStatics<D>::HorizontalViewSizeProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IScrollPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_HorizontalViewSizeProperty(put(value)));
    return value;
}

template <typename D> double impl_IScrollPatternIdentifiersStatics<D>::NoScroll() const
{
    double value {};
    check_hresult(static_cast<const IScrollPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_NoScroll(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IScrollPatternIdentifiersStatics<D>::VerticallyScrollableProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IScrollPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_VerticallyScrollableProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IScrollPatternIdentifiersStatics<D>::VerticalScrollPercentProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IScrollPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_VerticalScrollPercentProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IScrollPatternIdentifiersStatics<D>::VerticalViewSizeProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IScrollPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_VerticalViewSizeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_ISelectionItemPatternIdentifiersStatics<D>::IsSelectedProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const ISelectionItemPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_IsSelectedProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_ISelectionItemPatternIdentifiersStatics<D>::SelectionContainerProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const ISelectionItemPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_SelectionContainerProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_ISelectionPatternIdentifiersStatics<D>::CanSelectMultipleProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const ISelectionPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_CanSelectMultipleProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_ISelectionPatternIdentifiersStatics<D>::IsSelectionRequiredProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const ISelectionPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_IsSelectionRequiredProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_ISelectionPatternIdentifiersStatics<D>::SelectionProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const ISelectionPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_SelectionProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_ISpreadsheetItemPatternIdentifiersStatics<D>::FormulaProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const ISpreadsheetItemPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_FormulaProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IStylesPatternIdentifiersStatics<D>::ExtendedPropertiesProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IStylesPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_ExtendedPropertiesProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IStylesPatternIdentifiersStatics<D>::FillColorProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IStylesPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_FillColorProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IStylesPatternIdentifiersStatics<D>::FillPatternColorProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IStylesPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_FillPatternColorProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IStylesPatternIdentifiersStatics<D>::FillPatternStyleProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IStylesPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_FillPatternStyleProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IStylesPatternIdentifiersStatics<D>::ShapeProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IStylesPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_ShapeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IStylesPatternIdentifiersStatics<D>::StyleIdProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IStylesPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_StyleIdProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IStylesPatternIdentifiersStatics<D>::StyleNameProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IStylesPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_StyleNameProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_ITableItemPatternIdentifiersStatics<D>::ColumnHeaderItemsProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const ITableItemPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_ColumnHeaderItemsProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_ITableItemPatternIdentifiersStatics<D>::RowHeaderItemsProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const ITableItemPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_RowHeaderItemsProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_ITablePatternIdentifiersStatics<D>::ColumnHeadersProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const ITablePatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_ColumnHeadersProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_ITablePatternIdentifiersStatics<D>::RowHeadersProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const ITablePatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_RowHeadersProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_ITablePatternIdentifiersStatics<D>::RowOrColumnMajorProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const ITablePatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_RowOrColumnMajorProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_ITogglePatternIdentifiersStatics<D>::ToggleStateProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const ITogglePatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_ToggleStateProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_ITransformPattern2IdentifiersStatics<D>::CanZoomProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const ITransformPattern2IdentifiersStatics &>(static_cast<const D &>(*this))->get_CanZoomProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_ITransformPattern2IdentifiersStatics<D>::ZoomLevelProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const ITransformPattern2IdentifiersStatics &>(static_cast<const D &>(*this))->get_ZoomLevelProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_ITransformPattern2IdentifiersStatics<D>::MaxZoomProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const ITransformPattern2IdentifiersStatics &>(static_cast<const D &>(*this))->get_MaxZoomProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_ITransformPattern2IdentifiersStatics<D>::MinZoomProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const ITransformPattern2IdentifiersStatics &>(static_cast<const D &>(*this))->get_MinZoomProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_ITransformPatternIdentifiersStatics<D>::CanMoveProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const ITransformPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_CanMoveProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_ITransformPatternIdentifiersStatics<D>::CanResizeProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const ITransformPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_CanResizeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_ITransformPatternIdentifiersStatics<D>::CanRotateProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const ITransformPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_CanRotateProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IValuePatternIdentifiersStatics<D>::IsReadOnlyProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IValuePatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_IsReadOnlyProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IValuePatternIdentifiersStatics<D>::ValueProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IValuePatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_ValueProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IWindowPatternIdentifiersStatics<D>::CanMaximizeProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IWindowPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_CanMaximizeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IWindowPatternIdentifiersStatics<D>::CanMinimizeProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IWindowPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_CanMinimizeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IWindowPatternIdentifiersStatics<D>::IsModalProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IWindowPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_IsModalProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IWindowPatternIdentifiersStatics<D>::IsTopmostProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IWindowPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_IsTopmostProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IWindowPatternIdentifiersStatics<D>::WindowInteractionStateProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IWindowPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_WindowInteractionStateProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationProperty impl_IWindowPatternIdentifiersStatics<D>::WindowVisualStateProperty() const
{
    Windows::UI::Xaml::Automation::AutomationProperty value { nullptr };
    check_hresult(static_cast<const IWindowPatternIdentifiersStatics &>(static_cast<const D &>(*this))->get_WindowVisualStateProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AnnotationType impl_IAutomationAnnotation<D>::Type() const
{
    Windows::UI::Xaml::Automation::AnnotationType value {};
    check_hresult(static_cast<const IAutomationAnnotation &>(static_cast<const D &>(*this))->get_Type(&value));
    return value;
}

template <typename D> void impl_IAutomationAnnotation<D>::Type(Windows::UI::Xaml::Automation::AnnotationType value) const
{
    check_hresult(static_cast<const IAutomationAnnotation &>(static_cast<const D &>(*this))->put_Type(value));
}

template <typename D> Windows::UI::Xaml::UIElement impl_IAutomationAnnotation<D>::Element() const
{
    Windows::UI::Xaml::UIElement value { nullptr };
    check_hresult(static_cast<const IAutomationAnnotation &>(static_cast<const D &>(*this))->get_Element(put(value)));
    return value;
}

template <typename D> void impl_IAutomationAnnotation<D>::Element(const Windows::UI::Xaml::UIElement & value) const
{
    check_hresult(static_cast<const IAutomationAnnotation &>(static_cast<const D &>(*this))->put_Element(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IAutomationAnnotationStatics<D>::TypeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IAutomationAnnotationStatics &>(static_cast<const D &>(*this))->get_TypeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IAutomationAnnotationStatics<D>::ElementProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IAutomationAnnotationStatics &>(static_cast<const D &>(*this))->get_ElementProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationAnnotation impl_IAutomationAnnotationFactory<D>::CreateInstance(Windows::UI::Xaml::Automation::AnnotationType type) const
{
    Windows::UI::Xaml::Automation::AutomationAnnotation instance { nullptr };
    check_hresult(static_cast<const IAutomationAnnotationFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(type, put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::AutomationAnnotation impl_IAutomationAnnotationFactory<D>::CreateWithElementParameter(Windows::UI::Xaml::Automation::AnnotationType type, const Windows::UI::Xaml::UIElement & element) const
{
    Windows::UI::Xaml::Automation::AutomationAnnotation instance { nullptr };
    check_hresult(static_cast<const IAutomationAnnotationFactory &>(static_cast<const D &>(*this))->abi_CreateWithElementParameter(type, get(element), put(instance)));
    return instance;
}

inline Windows::UI::Xaml::Automation::AutomationProperty AnnotationPatternIdentifiers::AnnotationTypeIdProperty()
{
    return get_activation_factory<AnnotationPatternIdentifiers, IAnnotationPatternIdentifiersStatics>().AnnotationTypeIdProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AnnotationPatternIdentifiers::AnnotationTypeNameProperty()
{
    return get_activation_factory<AnnotationPatternIdentifiers, IAnnotationPatternIdentifiersStatics>().AnnotationTypeNameProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AnnotationPatternIdentifiers::AuthorProperty()
{
    return get_activation_factory<AnnotationPatternIdentifiers, IAnnotationPatternIdentifiersStatics>().AuthorProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AnnotationPatternIdentifiers::DateTimeProperty()
{
    return get_activation_factory<AnnotationPatternIdentifiers, IAnnotationPatternIdentifiersStatics>().DateTimeProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AnnotationPatternIdentifiers::TargetProperty()
{
    return get_activation_factory<AnnotationPatternIdentifiers, IAnnotationPatternIdentifiersStatics>().TargetProperty();
}

inline AutomationAnnotation::AutomationAnnotation() :
    AutomationAnnotation(activate_instance<AutomationAnnotation>())
{}

inline AutomationAnnotation::AutomationAnnotation(Windows::UI::Xaml::Automation::AnnotationType type) :
    AutomationAnnotation(get_activation_factory<AutomationAnnotation, IAutomationAnnotationFactory>().CreateInstance(type))
{}

inline AutomationAnnotation::AutomationAnnotation(Windows::UI::Xaml::Automation::AnnotationType type, const Windows::UI::Xaml::UIElement & element) :
    AutomationAnnotation(get_activation_factory<AutomationAnnotation, IAutomationAnnotationFactory>().CreateWithElementParameter(type, element))
{}

inline Windows::UI::Xaml::DependencyProperty AutomationAnnotation::TypeProperty()
{
    return get_activation_factory<AutomationAnnotation, IAutomationAnnotationStatics>().TypeProperty();
}

inline Windows::UI::Xaml::DependencyProperty AutomationAnnotation::ElementProperty()
{
    return get_activation_factory<AutomationAnnotation, IAutomationAnnotationStatics>().ElementProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::AcceleratorKeyProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>().AcceleratorKeyProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::AccessKeyProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>().AccessKeyProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::AutomationIdProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>().AutomationIdProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::BoundingRectangleProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>().BoundingRectangleProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::ClassNameProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>().ClassNameProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::ClickablePointProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>().ClickablePointProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::ControlTypeProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>().ControlTypeProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::HasKeyboardFocusProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>().HasKeyboardFocusProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::HelpTextProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>().HelpTextProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::IsContentElementProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>().IsContentElementProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::IsControlElementProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>().IsControlElementProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::IsEnabledProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>().IsEnabledProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::IsKeyboardFocusableProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>().IsKeyboardFocusableProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::IsOffscreenProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>().IsOffscreenProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::IsPasswordProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>().IsPasswordProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::IsRequiredForFormProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>().IsRequiredForFormProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::ItemStatusProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>().ItemStatusProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::ItemTypeProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>().ItemTypeProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::LabeledByProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>().LabeledByProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::LocalizedControlTypeProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>().LocalizedControlTypeProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::NameProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>().NameProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::OrientationProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>().OrientationProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::LiveSettingProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>().LiveSettingProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::ControlledPeersProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics2>().ControlledPeersProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::PositionInSetProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics3>().PositionInSetProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::SizeOfSetProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics3>().SizeOfSetProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::LevelProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics3>().LevelProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::AnnotationsProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics3>().AnnotationsProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::LandmarkTypeProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics4>().LandmarkTypeProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::LocalizedLandmarkTypeProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics4>().LocalizedLandmarkTypeProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::IsPeripheralProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics5>().IsPeripheralProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::IsDataValidForFormProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics5>().IsDataValidForFormProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::FullDescriptionProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics5>().FullDescriptionProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::DescribedByProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics5>().DescribedByProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::FlowsToProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics5>().FlowsToProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty AutomationElementIdentifiers::FlowsFromProperty()
{
    return get_activation_factory<AutomationElementIdentifiers, IAutomationElementIdentifiersStatics5>().FlowsFromProperty();
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::AcceleratorKeyProperty()
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().AcceleratorKeyProperty();
}

inline hstring AutomationProperties::GetAcceleratorKey(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().GetAcceleratorKey(element);
}

inline void AutomationProperties::SetAcceleratorKey(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value)
{
    get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().SetAcceleratorKey(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::AccessKeyProperty()
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().AccessKeyProperty();
}

inline hstring AutomationProperties::GetAccessKey(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().GetAccessKey(element);
}

inline void AutomationProperties::SetAccessKey(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value)
{
    get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().SetAccessKey(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::AutomationIdProperty()
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().AutomationIdProperty();
}

inline hstring AutomationProperties::GetAutomationId(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().GetAutomationId(element);
}

inline void AutomationProperties::SetAutomationId(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value)
{
    get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().SetAutomationId(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::HelpTextProperty()
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().HelpTextProperty();
}

inline hstring AutomationProperties::GetHelpText(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().GetHelpText(element);
}

inline void AutomationProperties::SetHelpText(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value)
{
    get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().SetHelpText(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::IsRequiredForFormProperty()
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().IsRequiredForFormProperty();
}

inline bool AutomationProperties::GetIsRequiredForForm(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().GetIsRequiredForForm(element);
}

inline void AutomationProperties::SetIsRequiredForForm(const Windows::UI::Xaml::DependencyObject & element, bool value)
{
    get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().SetIsRequiredForForm(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::ItemStatusProperty()
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().ItemStatusProperty();
}

inline hstring AutomationProperties::GetItemStatus(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().GetItemStatus(element);
}

inline void AutomationProperties::SetItemStatus(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value)
{
    get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().SetItemStatus(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::ItemTypeProperty()
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().ItemTypeProperty();
}

inline hstring AutomationProperties::GetItemType(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().GetItemType(element);
}

inline void AutomationProperties::SetItemType(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value)
{
    get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().SetItemType(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::LabeledByProperty()
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().LabeledByProperty();
}

inline Windows::UI::Xaml::UIElement AutomationProperties::GetLabeledBy(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().GetLabeledBy(element);
}

inline void AutomationProperties::SetLabeledBy(const Windows::UI::Xaml::DependencyObject & element, const Windows::UI::Xaml::UIElement & value)
{
    get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().SetLabeledBy(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::NameProperty()
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().NameProperty();
}

inline hstring AutomationProperties::GetName(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().GetName(element);
}

inline void AutomationProperties::SetName(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value)
{
    get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().SetName(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::LiveSettingProperty()
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().LiveSettingProperty();
}

inline Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting AutomationProperties::GetLiveSetting(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().GetLiveSetting(element);
}

inline void AutomationProperties::SetLiveSetting(const Windows::UI::Xaml::DependencyObject & element, Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting value)
{
    get_activation_factory<AutomationProperties, IAutomationPropertiesStatics>().SetLiveSetting(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::AccessibilityViewProperty()
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics2>().AccessibilityViewProperty();
}

inline Windows::UI::Xaml::Automation::Peers::AccessibilityView AutomationProperties::GetAccessibilityView(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics2>().GetAccessibilityView(element);
}

inline void AutomationProperties::SetAccessibilityView(const Windows::UI::Xaml::DependencyObject & element, Windows::UI::Xaml::Automation::Peers::AccessibilityView value)
{
    get_activation_factory<AutomationProperties, IAutomationPropertiesStatics2>().SetAccessibilityView(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::ControlledPeersProperty()
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics2>().ControlledPeersProperty();
}

inline Windows::Foundation::Collections::IVector<Windows::UI::Xaml::UIElement> AutomationProperties::GetControlledPeers(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics2>().GetControlledPeers(element);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::PositionInSetProperty()
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics3>().PositionInSetProperty();
}

inline int32_t AutomationProperties::GetPositionInSet(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics3>().GetPositionInSet(element);
}

inline void AutomationProperties::SetPositionInSet(const Windows::UI::Xaml::DependencyObject & element, int32_t value)
{
    get_activation_factory<AutomationProperties, IAutomationPropertiesStatics3>().SetPositionInSet(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::SizeOfSetProperty()
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics3>().SizeOfSetProperty();
}

inline int32_t AutomationProperties::GetSizeOfSet(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics3>().GetSizeOfSet(element);
}

inline void AutomationProperties::SetSizeOfSet(const Windows::UI::Xaml::DependencyObject & element, int32_t value)
{
    get_activation_factory<AutomationProperties, IAutomationPropertiesStatics3>().SetSizeOfSet(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::LevelProperty()
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics3>().LevelProperty();
}

inline int32_t AutomationProperties::GetLevel(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics3>().GetLevel(element);
}

inline void AutomationProperties::SetLevel(const Windows::UI::Xaml::DependencyObject & element, int32_t value)
{
    get_activation_factory<AutomationProperties, IAutomationPropertiesStatics3>().SetLevel(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::AnnotationsProperty()
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics3>().AnnotationsProperty();
}

inline Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::AutomationAnnotation> AutomationProperties::GetAnnotations(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics3>().GetAnnotations(element);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::LandmarkTypeProperty()
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics4>().LandmarkTypeProperty();
}

inline Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType AutomationProperties::GetLandmarkType(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics4>().GetLandmarkType(element);
}

inline void AutomationProperties::SetLandmarkType(const Windows::UI::Xaml::DependencyObject & element, Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType value)
{
    get_activation_factory<AutomationProperties, IAutomationPropertiesStatics4>().SetLandmarkType(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::LocalizedLandmarkTypeProperty()
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics4>().LocalizedLandmarkTypeProperty();
}

inline hstring AutomationProperties::GetLocalizedLandmarkType(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics4>().GetLocalizedLandmarkType(element);
}

inline void AutomationProperties::SetLocalizedLandmarkType(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value)
{
    get_activation_factory<AutomationProperties, IAutomationPropertiesStatics4>().SetLocalizedLandmarkType(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::IsPeripheralProperty()
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics5>().IsPeripheralProperty();
}

inline bool AutomationProperties::GetIsPeripheral(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics5>().GetIsPeripheral(element);
}

inline void AutomationProperties::SetIsPeripheral(const Windows::UI::Xaml::DependencyObject & element, bool value)
{
    get_activation_factory<AutomationProperties, IAutomationPropertiesStatics5>().SetIsPeripheral(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::IsDataValidForFormProperty()
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics5>().IsDataValidForFormProperty();
}

inline bool AutomationProperties::GetIsDataValidForForm(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics5>().GetIsDataValidForForm(element);
}

inline void AutomationProperties::SetIsDataValidForForm(const Windows::UI::Xaml::DependencyObject & element, bool value)
{
    get_activation_factory<AutomationProperties, IAutomationPropertiesStatics5>().SetIsDataValidForForm(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::FullDescriptionProperty()
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics5>().FullDescriptionProperty();
}

inline hstring AutomationProperties::GetFullDescription(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics5>().GetFullDescription(element);
}

inline void AutomationProperties::SetFullDescription(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value)
{
    get_activation_factory<AutomationProperties, IAutomationPropertiesStatics5>().SetFullDescription(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::LocalizedControlTypeProperty()
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics5>().LocalizedControlTypeProperty();
}

inline hstring AutomationProperties::GetLocalizedControlType(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics5>().GetLocalizedControlType(element);
}

inline void AutomationProperties::SetLocalizedControlType(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value)
{
    get_activation_factory<AutomationProperties, IAutomationPropertiesStatics5>().SetLocalizedControlType(element, value);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::DescribedByProperty()
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics5>().DescribedByProperty();
}

inline Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> AutomationProperties::GetDescribedBy(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics5>().GetDescribedBy(element);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::FlowsToProperty()
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics5>().FlowsToProperty();
}

inline Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> AutomationProperties::GetFlowsTo(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics5>().GetFlowsTo(element);
}

inline Windows::UI::Xaml::DependencyProperty AutomationProperties::FlowsFromProperty()
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics5>().FlowsFromProperty();
}

inline Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject> AutomationProperties::GetFlowsFrom(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<AutomationProperties, IAutomationPropertiesStatics5>().GetFlowsFrom(element);
}

inline Windows::UI::Xaml::Automation::AutomationProperty DockPatternIdentifiers::DockPositionProperty()
{
    return get_activation_factory<DockPatternIdentifiers, IDockPatternIdentifiersStatics>().DockPositionProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty DragPatternIdentifiers::DropEffectProperty()
{
    return get_activation_factory<DragPatternIdentifiers, IDragPatternIdentifiersStatics>().DropEffectProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty DragPatternIdentifiers::DropEffectsProperty()
{
    return get_activation_factory<DragPatternIdentifiers, IDragPatternIdentifiersStatics>().DropEffectsProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty DragPatternIdentifiers::GrabbedItemsProperty()
{
    return get_activation_factory<DragPatternIdentifiers, IDragPatternIdentifiersStatics>().GrabbedItemsProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty DragPatternIdentifiers::IsGrabbedProperty()
{
    return get_activation_factory<DragPatternIdentifiers, IDragPatternIdentifiersStatics>().IsGrabbedProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty DropTargetPatternIdentifiers::DropTargetEffectProperty()
{
    return get_activation_factory<DropTargetPatternIdentifiers, IDropTargetPatternIdentifiersStatics>().DropTargetEffectProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty DropTargetPatternIdentifiers::DropTargetEffectsProperty()
{
    return get_activation_factory<DropTargetPatternIdentifiers, IDropTargetPatternIdentifiersStatics>().DropTargetEffectsProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty ExpandCollapsePatternIdentifiers::ExpandCollapseStateProperty()
{
    return get_activation_factory<ExpandCollapsePatternIdentifiers, IExpandCollapsePatternIdentifiersStatics>().ExpandCollapseStateProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty GridItemPatternIdentifiers::ColumnProperty()
{
    return get_activation_factory<GridItemPatternIdentifiers, IGridItemPatternIdentifiersStatics>().ColumnProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty GridItemPatternIdentifiers::ColumnSpanProperty()
{
    return get_activation_factory<GridItemPatternIdentifiers, IGridItemPatternIdentifiersStatics>().ColumnSpanProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty GridItemPatternIdentifiers::ContainingGridProperty()
{
    return get_activation_factory<GridItemPatternIdentifiers, IGridItemPatternIdentifiersStatics>().ContainingGridProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty GridItemPatternIdentifiers::RowProperty()
{
    return get_activation_factory<GridItemPatternIdentifiers, IGridItemPatternIdentifiersStatics>().RowProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty GridItemPatternIdentifiers::RowSpanProperty()
{
    return get_activation_factory<GridItemPatternIdentifiers, IGridItemPatternIdentifiersStatics>().RowSpanProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty GridPatternIdentifiers::ColumnCountProperty()
{
    return get_activation_factory<GridPatternIdentifiers, IGridPatternIdentifiersStatics>().ColumnCountProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty GridPatternIdentifiers::RowCountProperty()
{
    return get_activation_factory<GridPatternIdentifiers, IGridPatternIdentifiersStatics>().RowCountProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty MultipleViewPatternIdentifiers::CurrentViewProperty()
{
    return get_activation_factory<MultipleViewPatternIdentifiers, IMultipleViewPatternIdentifiersStatics>().CurrentViewProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty MultipleViewPatternIdentifiers::SupportedViewsProperty()
{
    return get_activation_factory<MultipleViewPatternIdentifiers, IMultipleViewPatternIdentifiersStatics>().SupportedViewsProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty RangeValuePatternIdentifiers::IsReadOnlyProperty()
{
    return get_activation_factory<RangeValuePatternIdentifiers, IRangeValuePatternIdentifiersStatics>().IsReadOnlyProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty RangeValuePatternIdentifiers::LargeChangeProperty()
{
    return get_activation_factory<RangeValuePatternIdentifiers, IRangeValuePatternIdentifiersStatics>().LargeChangeProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty RangeValuePatternIdentifiers::MaximumProperty()
{
    return get_activation_factory<RangeValuePatternIdentifiers, IRangeValuePatternIdentifiersStatics>().MaximumProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty RangeValuePatternIdentifiers::MinimumProperty()
{
    return get_activation_factory<RangeValuePatternIdentifiers, IRangeValuePatternIdentifiersStatics>().MinimumProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty RangeValuePatternIdentifiers::SmallChangeProperty()
{
    return get_activation_factory<RangeValuePatternIdentifiers, IRangeValuePatternIdentifiersStatics>().SmallChangeProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty RangeValuePatternIdentifiers::ValueProperty()
{
    return get_activation_factory<RangeValuePatternIdentifiers, IRangeValuePatternIdentifiersStatics>().ValueProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty ScrollPatternIdentifiers::HorizontallyScrollableProperty()
{
    return get_activation_factory<ScrollPatternIdentifiers, IScrollPatternIdentifiersStatics>().HorizontallyScrollableProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty ScrollPatternIdentifiers::HorizontalScrollPercentProperty()
{
    return get_activation_factory<ScrollPatternIdentifiers, IScrollPatternIdentifiersStatics>().HorizontalScrollPercentProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty ScrollPatternIdentifiers::HorizontalViewSizeProperty()
{
    return get_activation_factory<ScrollPatternIdentifiers, IScrollPatternIdentifiersStatics>().HorizontalViewSizeProperty();
}

inline double ScrollPatternIdentifiers::NoScroll()
{
    return get_activation_factory<ScrollPatternIdentifiers, IScrollPatternIdentifiersStatics>().NoScroll();
}

inline Windows::UI::Xaml::Automation::AutomationProperty ScrollPatternIdentifiers::VerticallyScrollableProperty()
{
    return get_activation_factory<ScrollPatternIdentifiers, IScrollPatternIdentifiersStatics>().VerticallyScrollableProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty ScrollPatternIdentifiers::VerticalScrollPercentProperty()
{
    return get_activation_factory<ScrollPatternIdentifiers, IScrollPatternIdentifiersStatics>().VerticalScrollPercentProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty ScrollPatternIdentifiers::VerticalViewSizeProperty()
{
    return get_activation_factory<ScrollPatternIdentifiers, IScrollPatternIdentifiersStatics>().VerticalViewSizeProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty SelectionItemPatternIdentifiers::IsSelectedProperty()
{
    return get_activation_factory<SelectionItemPatternIdentifiers, ISelectionItemPatternIdentifiersStatics>().IsSelectedProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty SelectionItemPatternIdentifiers::SelectionContainerProperty()
{
    return get_activation_factory<SelectionItemPatternIdentifiers, ISelectionItemPatternIdentifiersStatics>().SelectionContainerProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty SelectionPatternIdentifiers::CanSelectMultipleProperty()
{
    return get_activation_factory<SelectionPatternIdentifiers, ISelectionPatternIdentifiersStatics>().CanSelectMultipleProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty SelectionPatternIdentifiers::IsSelectionRequiredProperty()
{
    return get_activation_factory<SelectionPatternIdentifiers, ISelectionPatternIdentifiersStatics>().IsSelectionRequiredProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty SelectionPatternIdentifiers::SelectionProperty()
{
    return get_activation_factory<SelectionPatternIdentifiers, ISelectionPatternIdentifiersStatics>().SelectionProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty SpreadsheetItemPatternIdentifiers::FormulaProperty()
{
    return get_activation_factory<SpreadsheetItemPatternIdentifiers, ISpreadsheetItemPatternIdentifiersStatics>().FormulaProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty StylesPatternIdentifiers::ExtendedPropertiesProperty()
{
    return get_activation_factory<StylesPatternIdentifiers, IStylesPatternIdentifiersStatics>().ExtendedPropertiesProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty StylesPatternIdentifiers::FillColorProperty()
{
    return get_activation_factory<StylesPatternIdentifiers, IStylesPatternIdentifiersStatics>().FillColorProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty StylesPatternIdentifiers::FillPatternColorProperty()
{
    return get_activation_factory<StylesPatternIdentifiers, IStylesPatternIdentifiersStatics>().FillPatternColorProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty StylesPatternIdentifiers::FillPatternStyleProperty()
{
    return get_activation_factory<StylesPatternIdentifiers, IStylesPatternIdentifiersStatics>().FillPatternStyleProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty StylesPatternIdentifiers::ShapeProperty()
{
    return get_activation_factory<StylesPatternIdentifiers, IStylesPatternIdentifiersStatics>().ShapeProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty StylesPatternIdentifiers::StyleIdProperty()
{
    return get_activation_factory<StylesPatternIdentifiers, IStylesPatternIdentifiersStatics>().StyleIdProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty StylesPatternIdentifiers::StyleNameProperty()
{
    return get_activation_factory<StylesPatternIdentifiers, IStylesPatternIdentifiersStatics>().StyleNameProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty TableItemPatternIdentifiers::ColumnHeaderItemsProperty()
{
    return get_activation_factory<TableItemPatternIdentifiers, ITableItemPatternIdentifiersStatics>().ColumnHeaderItemsProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty TableItemPatternIdentifiers::RowHeaderItemsProperty()
{
    return get_activation_factory<TableItemPatternIdentifiers, ITableItemPatternIdentifiersStatics>().RowHeaderItemsProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty TablePatternIdentifiers::ColumnHeadersProperty()
{
    return get_activation_factory<TablePatternIdentifiers, ITablePatternIdentifiersStatics>().ColumnHeadersProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty TablePatternIdentifiers::RowHeadersProperty()
{
    return get_activation_factory<TablePatternIdentifiers, ITablePatternIdentifiersStatics>().RowHeadersProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty TablePatternIdentifiers::RowOrColumnMajorProperty()
{
    return get_activation_factory<TablePatternIdentifiers, ITablePatternIdentifiersStatics>().RowOrColumnMajorProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty TogglePatternIdentifiers::ToggleStateProperty()
{
    return get_activation_factory<TogglePatternIdentifiers, ITogglePatternIdentifiersStatics>().ToggleStateProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty TransformPattern2Identifiers::CanZoomProperty()
{
    return get_activation_factory<TransformPattern2Identifiers, ITransformPattern2IdentifiersStatics>().CanZoomProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty TransformPattern2Identifiers::ZoomLevelProperty()
{
    return get_activation_factory<TransformPattern2Identifiers, ITransformPattern2IdentifiersStatics>().ZoomLevelProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty TransformPattern2Identifiers::MaxZoomProperty()
{
    return get_activation_factory<TransformPattern2Identifiers, ITransformPattern2IdentifiersStatics>().MaxZoomProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty TransformPattern2Identifiers::MinZoomProperty()
{
    return get_activation_factory<TransformPattern2Identifiers, ITransformPattern2IdentifiersStatics>().MinZoomProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty TransformPatternIdentifiers::CanMoveProperty()
{
    return get_activation_factory<TransformPatternIdentifiers, ITransformPatternIdentifiersStatics>().CanMoveProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty TransformPatternIdentifiers::CanResizeProperty()
{
    return get_activation_factory<TransformPatternIdentifiers, ITransformPatternIdentifiersStatics>().CanResizeProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty TransformPatternIdentifiers::CanRotateProperty()
{
    return get_activation_factory<TransformPatternIdentifiers, ITransformPatternIdentifiersStatics>().CanRotateProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty ValuePatternIdentifiers::IsReadOnlyProperty()
{
    return get_activation_factory<ValuePatternIdentifiers, IValuePatternIdentifiersStatics>().IsReadOnlyProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty ValuePatternIdentifiers::ValueProperty()
{
    return get_activation_factory<ValuePatternIdentifiers, IValuePatternIdentifiersStatics>().ValueProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty WindowPatternIdentifiers::CanMaximizeProperty()
{
    return get_activation_factory<WindowPatternIdentifiers, IWindowPatternIdentifiersStatics>().CanMaximizeProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty WindowPatternIdentifiers::CanMinimizeProperty()
{
    return get_activation_factory<WindowPatternIdentifiers, IWindowPatternIdentifiersStatics>().CanMinimizeProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty WindowPatternIdentifiers::IsModalProperty()
{
    return get_activation_factory<WindowPatternIdentifiers, IWindowPatternIdentifiersStatics>().IsModalProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty WindowPatternIdentifiers::IsTopmostProperty()
{
    return get_activation_factory<WindowPatternIdentifiers, IWindowPatternIdentifiersStatics>().IsTopmostProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty WindowPatternIdentifiers::WindowInteractionStateProperty()
{
    return get_activation_factory<WindowPatternIdentifiers, IWindowPatternIdentifiersStatics>().WindowInteractionStateProperty();
}

inline Windows::UI::Xaml::Automation::AutomationProperty WindowPatternIdentifiers::WindowVisualStateProperty()
{
    return get_activation_factory<WindowPatternIdentifiers, IWindowPatternIdentifiersStatics>().WindowVisualStateProperty();
}

}

}
