// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Interop.1.h"
#include "winrt/impl/Windows.UI.Xaml.Markup.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Markup {

struct XamlBinaryWriterErrorInformation
{
    uint32_t InputStreamIndex;
    uint32_t LineNumber;
    uint32_t LinePosition;
};

struct XmlnsDefinition
{
    hstring XmlNamespace;
    hstring Namespace;
};

struct WINRT_EBO XamlBinaryWriter :
    Windows::UI::Xaml::Markup::IXamlBinaryWriter
{
    XamlBinaryWriter(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Markup::XamlBinaryWriterErrorInformation Write(param::vector<Windows::Storage::Streams::IRandomAccessStream> const& inputStreams, param::vector<Windows::Storage::Streams::IRandomAccessStream> const& outputStreams, Windows::UI::Xaml::Markup::IXamlMetadataProvider const& xamlMetadataProvider);
};

struct WINRT_EBO XamlBindingHelper :
    Windows::UI::Xaml::Markup::IXamlBindingHelper
{
    XamlBindingHelper(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::DependencyProperty DataTemplateComponentProperty();
    static Windows::UI::Xaml::Markup::IDataTemplateComponent GetDataTemplateComponent(Windows::UI::Xaml::DependencyObject const& element);
    static void SetDataTemplateComponent(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Markup::IDataTemplateComponent const& value);
    static void SuspendRendering(Windows::UI::Xaml::UIElement const& target);
    static void ResumeRendering(Windows::UI::Xaml::UIElement const& target);
    static Windows::Foundation::IInspectable ConvertValue(Windows::UI::Xaml::Interop::TypeName const& type, Windows::Foundation::IInspectable const& value);
    static void SetPropertyFromString(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, param::hstring const& value);
    static void SetPropertyFromBoolean(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, bool value);
    static void SetPropertyFromChar16(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, char16_t value);
    static void SetPropertyFromDateTime(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::DateTime const& value);
    static void SetPropertyFromDouble(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, double value);
    static void SetPropertyFromInt32(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, int32_t value);
    static void SetPropertyFromUInt32(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, uint32_t value);
    static void SetPropertyFromInt64(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, int64_t value);
    static void SetPropertyFromUInt64(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, uint64_t value);
    static void SetPropertyFromSingle(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, float value);
    static void SetPropertyFromPoint(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::Point const& value);
    static void SetPropertyFromRect(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::Rect const& value);
    static void SetPropertyFromSize(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::Size const& value);
    static void SetPropertyFromTimeSpan(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::TimeSpan const& value);
    static void SetPropertyFromByte(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, uint8_t value);
    static void SetPropertyFromUri(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::Uri const& value);
    static void SetPropertyFromObject(Windows::Foundation::IInspectable const& dependencyObject, Windows::UI::Xaml::DependencyProperty const& propertyToSet, Windows::Foundation::IInspectable const& value);
};

struct WINRT_EBO XamlMarkupHelper :
    Windows::UI::Xaml::Markup::IXamlMarkupHelper
{
    XamlMarkupHelper(std::nullptr_t) noexcept {}
    static void UnloadObject(Windows::UI::Xaml::DependencyObject const& element);
};

struct WINRT_EBO XamlReader :
    Windows::UI::Xaml::Markup::IXamlReader
{
    XamlReader(std::nullptr_t) noexcept {}
    static Windows::Foundation::IInspectable Load(param::hstring const& xaml);
    static Windows::Foundation::IInspectable LoadWithInitialTemplateValidation(param::hstring const& xaml);
};

}
