// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.UI.Xaml.Markup.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_2736b66b_daa3_5e0c_9842_6a0f44b5440b
#define WINRT_GENERIC_2736b66b_daa3_5e0c_9842_6a0f44b5440b
template <> struct __declspec(uuid("2736b66b-daa3-5e0c-9842-6a0f44b5440b")) __declspec(novtable) IVector<Windows::Storage::Streams::IRandomAccessStream> : impl_IVector<Windows::Storage::Streams::IRandomAccessStream> {};
#endif

#ifndef WINRT_GENERIC_c875446a_587f_58da_897e_3bbe5ec7c30b
#define WINRT_GENERIC_c875446a_587f_58da_897e_3bbe5ec7c30b
template <> struct __declspec(uuid("c875446a-587f-58da-897e-3bbe5ec7c30b")) __declspec(novtable) IIterator<Windows::Storage::Streams::IRandomAccessStream> : impl_IIterator<Windows::Storage::Streams::IRandomAccessStream> {};
#endif

#ifndef WINRT_GENERIC_ba666a00_1555_5df4_81a5_07d23f7ffceb
#define WINRT_GENERIC_ba666a00_1555_5df4_81a5_07d23f7ffceb
template <> struct __declspec(uuid("ba666a00-1555-5df4-81a5-07d23f7ffceb")) __declspec(novtable) IIterable<Windows::Storage::Streams::IRandomAccessStream> : impl_IIterable<Windows::Storage::Streams::IRandomAccessStream> {};
#endif

#ifndef WINRT_GENERIC_92cd0a46_2266_5cd6_9293_e111299f2793
#define WINRT_GENERIC_92cd0a46_2266_5cd6_9293_e111299f2793
template <> struct __declspec(uuid("92cd0a46-2266-5cd6-9293-e111299f2793")) __declspec(novtable) IVectorView<Windows::Storage::Streams::IRandomAccessStream> : impl_IVectorView<Windows::Storage::Streams::IRandomAccessStream> {};
#endif


}

namespace Windows::UI::Xaml::Markup {

template <typename D>
struct WINRT_EBO impl_IComponentConnector
{
    void Connect(int32_t connectionId, const Windows::IInspectable & target) const;
};

template <typename D>
struct WINRT_EBO impl_IComponentConnector2
{
    Windows::UI::Xaml::Markup::IComponentConnector GetBindingConnector(int32_t connectionId, const Windows::IInspectable & target) const;
};

template <typename D>
struct WINRT_EBO impl_IDataTemplateComponent
{
    void Recycle() const;
    void ProcessBindings(const Windows::IInspectable & item, int32_t itemIndex, int32_t phase, int32_t & nextPhase) const;
};

template <typename D>
struct WINRT_EBO impl_IXamlBinaryWriter
{
};

template <typename D>
struct WINRT_EBO impl_IXamlBinaryWriterStatics
{
    Windows::UI::Xaml::Markup::XamlBinaryWriterErrorInformation Write(const Windows::Foundation::Collections::IVector<Windows::Storage::Streams::IRandomAccessStream> & inputStreams, const Windows::Foundation::Collections::IVector<Windows::Storage::Streams::IRandomAccessStream> & outputStreams, const Windows::UI::Xaml::Markup::IXamlMetadataProvider & xamlMetadataProvider) const;
};

template <typename D>
struct WINRT_EBO impl_IXamlBindingHelper
{
};

template <typename D>
struct WINRT_EBO impl_IXamlBindingHelperStatics
{
    Windows::UI::Xaml::DependencyProperty DataTemplateComponentProperty() const;
    Windows::UI::Xaml::Markup::IDataTemplateComponent GetDataTemplateComponent(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetDataTemplateComponent(const Windows::UI::Xaml::DependencyObject & element, const Windows::UI::Xaml::Markup::IDataTemplateComponent & value) const;
    void SuspendRendering(const Windows::UI::Xaml::UIElement & target) const;
    void ResumeRendering(const Windows::UI::Xaml::UIElement & target) const;
    Windows::IInspectable ConvertValue(const Windows::UI::Xaml::Interop::TypeName & type, const Windows::IInspectable & value) const;
    void SetPropertyFromString(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, hstring_ref value) const;
    void SetPropertyFromBoolean(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, bool value) const;
    void SetPropertyFromChar16(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, wchar_t value) const;
    void SetPropertyFromDateTime(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, const Windows::Foundation::DateTime & value) const;
    void SetPropertyFromDouble(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, double value) const;
    void SetPropertyFromInt32(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, int32_t value) const;
    void SetPropertyFromUInt32(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, uint32_t value) const;
    void SetPropertyFromInt64(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, int64_t value) const;
    void SetPropertyFromUInt64(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, uint64_t value) const;
    void SetPropertyFromSingle(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, float value) const;
    void SetPropertyFromPoint(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, const Windows::Foundation::Point & value) const;
    void SetPropertyFromRect(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, const Windows::Foundation::Rect & value) const;
    void SetPropertyFromSize(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, const Windows::Foundation::Size & value) const;
    void SetPropertyFromTimeSpan(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, const Windows::Foundation::TimeSpan & value) const;
    void SetPropertyFromByte(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, uint8_t value) const;
    void SetPropertyFromUri(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, const Windows::Foundation::Uri & value) const;
    void SetPropertyFromObject(const Windows::IInspectable & dependencyObject, const Windows::UI::Xaml::DependencyProperty & propertyToSet, const Windows::IInspectable & value) const;
};

template <typename D>
struct WINRT_EBO impl_IXamlMember
{
    bool IsAttachable() const;
    bool IsDependencyProperty() const;
    bool IsReadOnly() const;
    hstring Name() const;
    Windows::UI::Xaml::Markup::IXamlType TargetType() const;
    Windows::UI::Xaml::Markup::IXamlType Type() const;
    Windows::IInspectable GetValue(const Windows::IInspectable & instance) const;
    void SetValue(const Windows::IInspectable & instance, const Windows::IInspectable & value) const;
};

template <typename D>
struct WINRT_EBO impl_IXamlMetadataProvider
{
    Windows::UI::Xaml::Markup::IXamlType GetXamlType(const Windows::UI::Xaml::Interop::TypeName & type) const;
    Windows::UI::Xaml::Markup::IXamlType GetXamlType(hstring_ref fullName) const;
    com_array<Windows::UI::Xaml::Markup::XmlnsDefinition> GetXmlnsDefinitions() const;
};

template <typename D>
struct WINRT_EBO impl_IXamlReader
{
};

template <typename D>
struct WINRT_EBO impl_IXamlReaderStatics
{
    Windows::IInspectable Load(hstring_ref xaml) const;
    Windows::IInspectable LoadWithInitialTemplateValidation(hstring_ref xaml) const;
};

template <typename D>
struct WINRT_EBO impl_IXamlType
{
    Windows::UI::Xaml::Markup::IXamlType BaseType() const;
    Windows::UI::Xaml::Markup::IXamlMember ContentProperty() const;
    hstring FullName() const;
    bool IsArray() const;
    bool IsCollection() const;
    bool IsConstructible() const;
    bool IsDictionary() const;
    bool IsMarkupExtension() const;
    bool IsBindable() const;
    Windows::UI::Xaml::Markup::IXamlType ItemType() const;
    Windows::UI::Xaml::Markup::IXamlType KeyType() const;
    Windows::UI::Xaml::Interop::TypeName UnderlyingType() const;
    Windows::IInspectable ActivateInstance() const;
    Windows::IInspectable CreateFromString(hstring_ref value) const;
    Windows::UI::Xaml::Markup::IXamlMember GetMember(hstring_ref name) const;
    void AddToVector(const Windows::IInspectable & instance, const Windows::IInspectable & value) const;
    void AddToMap(const Windows::IInspectable & instance, const Windows::IInspectable & key, const Windows::IInspectable & value) const;
    void RunInitializer() const;
};

struct IComponentConnector :
    Windows::IInspectable,
    impl::consume<IComponentConnector>
{
    IComponentConnector(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IComponentConnector>(m_ptr); }
};

struct IComponentConnector2 :
    Windows::IInspectable,
    impl::consume<IComponentConnector2>
{
    IComponentConnector2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IComponentConnector2>(m_ptr); }
};

struct IDataTemplateComponent :
    Windows::IInspectable,
    impl::consume<IDataTemplateComponent>
{
    IDataTemplateComponent(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDataTemplateComponent>(m_ptr); }
};

struct IXamlBinaryWriter :
    Windows::IInspectable,
    impl::consume<IXamlBinaryWriter>
{
    IXamlBinaryWriter(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXamlBinaryWriter>(m_ptr); }
};

struct IXamlBinaryWriterStatics :
    Windows::IInspectable,
    impl::consume<IXamlBinaryWriterStatics>
{
    IXamlBinaryWriterStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXamlBinaryWriterStatics>(m_ptr); }
};

struct IXamlBindingHelper :
    Windows::IInspectable,
    impl::consume<IXamlBindingHelper>
{
    IXamlBindingHelper(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXamlBindingHelper>(m_ptr); }
};

struct IXamlBindingHelperStatics :
    Windows::IInspectable,
    impl::consume<IXamlBindingHelperStatics>
{
    IXamlBindingHelperStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXamlBindingHelperStatics>(m_ptr); }
};

struct IXamlMember :
    Windows::IInspectable,
    impl::consume<IXamlMember>
{
    IXamlMember(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXamlMember>(m_ptr); }
};

struct IXamlMetadataProvider :
    Windows::IInspectable,
    impl::consume<IXamlMetadataProvider>
{
    IXamlMetadataProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXamlMetadataProvider>(m_ptr); }
};

struct IXamlReader :
    Windows::IInspectable,
    impl::consume<IXamlReader>
{
    IXamlReader(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXamlReader>(m_ptr); }
};

struct IXamlReaderStatics :
    Windows::IInspectable,
    impl::consume<IXamlReaderStatics>
{
    IXamlReaderStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXamlReaderStatics>(m_ptr); }
};

struct IXamlType :
    Windows::IInspectable,
    impl::consume<IXamlType>
{
    IXamlType(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXamlType>(m_ptr); }
};

}

}
