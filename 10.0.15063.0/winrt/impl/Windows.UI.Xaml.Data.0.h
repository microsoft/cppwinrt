// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI::Xaml {

struct DependencyObject;
struct DependencyProperty;
struct PropertyPath;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Interop {

struct TypeName;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Data {

enum class BindingMode
{
    OneWay = 1,
    OneTime = 2,
    TwoWay = 3,
};

enum class RelativeSourceMode
{
    None = 0,
    TemplatedParent = 1,
    Self = 2,
};

enum class UpdateSourceTrigger
{
    Default = 0,
    PropertyChanged = 1,
    Explicit = 2,
};

struct IBinding;
struct IBinding2;
struct IBindingBase;
struct IBindingBaseFactory;
struct IBindingExpression;
struct IBindingExpressionBase;
struct IBindingExpressionBaseFactory;
struct IBindingExpressionFactory;
struct IBindingFactory;
struct IBindingOperations;
struct IBindingOperationsStatics;
struct ICollectionView;
struct ICollectionViewFactory;
struct ICollectionViewGroup;
struct ICollectionViewSource;
struct ICollectionViewSourceStatics;
struct ICurrentChangingEventArgs;
struct ICurrentChangingEventArgsFactory;
struct ICustomProperty;
struct ICustomPropertyProvider;
struct IItemIndexRange;
struct IItemIndexRangeFactory;
struct IItemsRangeInfo;
struct INotifyPropertyChanged;
struct IPropertyChangedEventArgs;
struct IPropertyChangedEventArgsFactory;
struct IRelativeSource;
struct IRelativeSourceFactory;
struct ISelectionInfo;
struct ISupportIncrementalLoading;
struct IValueConverter;
struct Binding;
struct BindingBase;
struct BindingExpression;
struct BindingExpressionBase;
struct BindingOperations;
struct CollectionViewSource;
struct CurrentChangingEventArgs;
struct ItemIndexRange;
struct PropertyChangedEventArgs;
struct RelativeSource;
struct LoadMoreItemsResult;
struct CurrentChangingEventHandler;
struct PropertyChangedEventHandler;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Xaml::Data::IBinding>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::IBinding2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::IBindingBase>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::IBindingBaseFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::IBindingExpression>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::IBindingExpressionBase>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::IBindingExpressionBaseFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::IBindingExpressionFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::IBindingFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::IBindingOperations>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::IBindingOperationsStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::ICollectionView>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::ICollectionViewFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::ICollectionViewGroup>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::ICollectionViewSource>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::ICollectionViewSourceStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::ICurrentChangingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::ICurrentChangingEventArgsFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::ICustomProperty>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::ICustomPropertyProvider>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::IItemIndexRange>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::IItemIndexRangeFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::IItemsRangeInfo>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::INotifyPropertyChanged>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::IPropertyChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::IPropertyChangedEventArgsFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::IRelativeSource>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::IRelativeSourceFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::ISelectionInfo>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::ISupportIncrementalLoading>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::IValueConverter>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Data::Binding>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Data::BindingBase>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Data::BindingExpression>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Data::BindingExpressionBase>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Data::BindingOperations>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Data::CollectionViewSource>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Data::CurrentChangingEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Data::ItemIndexRange>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Data::PropertyChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Data::RelativeSource>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Data::BindingMode>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Data::RelativeSourceMode>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Data::UpdateSourceTrigger>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Data::LoadMoreItemsResult>{ using type = struct_category<uint32_t>; };
template <> struct category<Windows::UI::Xaml::Data::CurrentChangingEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::Data::PropertyChangedEventHandler>{ using type = delegate_category; };
template <> struct name<Windows::UI::Xaml::Data::IBinding>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.IBinding" }; };
template <> struct name<Windows::UI::Xaml::Data::IBinding2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.IBinding2" }; };
template <> struct name<Windows::UI::Xaml::Data::IBindingBase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.IBindingBase" }; };
template <> struct name<Windows::UI::Xaml::Data::IBindingBaseFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.IBindingBaseFactory" }; };
template <> struct name<Windows::UI::Xaml::Data::IBindingExpression>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.IBindingExpression" }; };
template <> struct name<Windows::UI::Xaml::Data::IBindingExpressionBase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.IBindingExpressionBase" }; };
template <> struct name<Windows::UI::Xaml::Data::IBindingExpressionBaseFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.IBindingExpressionBaseFactory" }; };
template <> struct name<Windows::UI::Xaml::Data::IBindingExpressionFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.IBindingExpressionFactory" }; };
template <> struct name<Windows::UI::Xaml::Data::IBindingFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.IBindingFactory" }; };
template <> struct name<Windows::UI::Xaml::Data::IBindingOperations>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.IBindingOperations" }; };
template <> struct name<Windows::UI::Xaml::Data::IBindingOperationsStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.IBindingOperationsStatics" }; };
template <> struct name<Windows::UI::Xaml::Data::ICollectionView>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.ICollectionView" }; };
template <> struct name<Windows::UI::Xaml::Data::ICollectionViewFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.ICollectionViewFactory" }; };
template <> struct name<Windows::UI::Xaml::Data::ICollectionViewGroup>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.ICollectionViewGroup" }; };
template <> struct name<Windows::UI::Xaml::Data::ICollectionViewSource>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.ICollectionViewSource" }; };
template <> struct name<Windows::UI::Xaml::Data::ICollectionViewSourceStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.ICollectionViewSourceStatics" }; };
template <> struct name<Windows::UI::Xaml::Data::ICurrentChangingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.ICurrentChangingEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Data::ICurrentChangingEventArgsFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.ICurrentChangingEventArgsFactory" }; };
template <> struct name<Windows::UI::Xaml::Data::ICustomProperty>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.ICustomProperty" }; };
template <> struct name<Windows::UI::Xaml::Data::ICustomPropertyProvider>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.ICustomPropertyProvider" }; };
template <> struct name<Windows::UI::Xaml::Data::IItemIndexRange>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.IItemIndexRange" }; };
template <> struct name<Windows::UI::Xaml::Data::IItemIndexRangeFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.IItemIndexRangeFactory" }; };
template <> struct name<Windows::UI::Xaml::Data::IItemsRangeInfo>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.IItemsRangeInfo" }; };
template <> struct name<Windows::UI::Xaml::Data::INotifyPropertyChanged>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.INotifyPropertyChanged" }; };
template <> struct name<Windows::UI::Xaml::Data::IPropertyChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.IPropertyChangedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Data::IPropertyChangedEventArgsFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.IPropertyChangedEventArgsFactory" }; };
template <> struct name<Windows::UI::Xaml::Data::IRelativeSource>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.IRelativeSource" }; };
template <> struct name<Windows::UI::Xaml::Data::IRelativeSourceFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.IRelativeSourceFactory" }; };
template <> struct name<Windows::UI::Xaml::Data::ISelectionInfo>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.ISelectionInfo" }; };
template <> struct name<Windows::UI::Xaml::Data::ISupportIncrementalLoading>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.ISupportIncrementalLoading" }; };
template <> struct name<Windows::UI::Xaml::Data::IValueConverter>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.IValueConverter" }; };
template <> struct name<Windows::UI::Xaml::Data::Binding>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.Binding" }; };
template <> struct name<Windows::UI::Xaml::Data::BindingBase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.BindingBase" }; };
template <> struct name<Windows::UI::Xaml::Data::BindingExpression>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.BindingExpression" }; };
template <> struct name<Windows::UI::Xaml::Data::BindingExpressionBase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.BindingExpressionBase" }; };
template <> struct name<Windows::UI::Xaml::Data::BindingOperations>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.BindingOperations" }; };
template <> struct name<Windows::UI::Xaml::Data::CollectionViewSource>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.CollectionViewSource" }; };
template <> struct name<Windows::UI::Xaml::Data::CurrentChangingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.CurrentChangingEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Data::ItemIndexRange>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.ItemIndexRange" }; };
template <> struct name<Windows::UI::Xaml::Data::PropertyChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.PropertyChangedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Data::RelativeSource>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.RelativeSource" }; };
template <> struct name<Windows::UI::Xaml::Data::BindingMode>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.BindingMode" }; };
template <> struct name<Windows::UI::Xaml::Data::RelativeSourceMode>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.RelativeSourceMode" }; };
template <> struct name<Windows::UI::Xaml::Data::UpdateSourceTrigger>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.UpdateSourceTrigger" }; };
template <> struct name<Windows::UI::Xaml::Data::LoadMoreItemsResult>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.LoadMoreItemsResult" }; };
template <> struct name<Windows::UI::Xaml::Data::CurrentChangingEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.CurrentChangingEventHandler" }; };
template <> struct name<Windows::UI::Xaml::Data::PropertyChangedEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Data.PropertyChangedEventHandler" }; };
template <> struct guid<Windows::UI::Xaml::Data::IBinding>{ static constexpr GUID value{ 0x3F7A0C6B,0xD00F,0x4730,{ 0x8C,0x1D,0x48,0xE1,0x6C,0x46,0xF9,0xCA } }; };
template <> struct guid<Windows::UI::Xaml::Data::IBinding2>{ static constexpr GUID value{ 0x34F96FCB,0x0406,0x48B3,{ 0x9E,0x82,0xF3,0x33,0xEC,0x4C,0x69,0x10 } }; };
template <> struct guid<Windows::UI::Xaml::Data::IBindingBase>{ static constexpr GUID value{ 0x1589A2AB,0x3D15,0x49BC,{ 0xA4,0x47,0x8A,0x54,0x48,0xE5,0x88,0x70 } }; };
template <> struct guid<Windows::UI::Xaml::Data::IBindingBaseFactory>{ static constexpr GUID value{ 0x22DAFC3A,0x7701,0x4666,{ 0xA1,0xBA,0x98,0x59,0xBD,0xCF,0xEC,0x34 } }; };
template <> struct guid<Windows::UI::Xaml::Data::IBindingExpression>{ static constexpr GUID value{ 0x516A19A5,0xC2FD,0x4A9E,{ 0x9F,0xD3,0x9A,0xA4,0x2F,0x99,0x5A,0x3C } }; };
template <> struct guid<Windows::UI::Xaml::Data::IBindingExpressionBase>{ static constexpr GUID value{ 0xFDED3154,0xE954,0x4F67,{ 0x8F,0xB6,0x6E,0xD7,0x9B,0x3A,0x1C,0xB3 } }; };
template <> struct guid<Windows::UI::Xaml::Data::IBindingExpressionBaseFactory>{ static constexpr GUID value{ 0xEA7116A7,0xC2D9,0x4375,{ 0xB4,0x71,0x66,0xB9,0xC4,0x8C,0x79,0x30 } }; };
template <> struct guid<Windows::UI::Xaml::Data::IBindingExpressionFactory>{ static constexpr GUID value{ 0x1CB55CD9,0xDB72,0x40B3,{ 0xA2,0xB5,0x24,0xEE,0x6E,0xA5,0xC3,0x28 } }; };
template <> struct guid<Windows::UI::Xaml::Data::IBindingFactory>{ static constexpr GUID value{ 0xFF42BB08,0xC39E,0x4F7E,{ 0x84,0x34,0xA1,0x56,0x90,0x83,0x88,0x3C } }; };
template <> struct guid<Windows::UI::Xaml::Data::IBindingOperations>{ static constexpr GUID value{ 0x6FFFD738,0x9839,0x419C,{ 0xA1,0x7A,0x4B,0x36,0x04,0xE1,0x52,0x4E } }; };
template <> struct guid<Windows::UI::Xaml::Data::IBindingOperationsStatics>{ static constexpr GUID value{ 0xE155EF73,0x95A0,0x4AAB,{ 0x8C,0x7D,0x2A,0x47,0xDA,0x07,0x3C,0x79 } }; };
template <> struct guid<Windows::UI::Xaml::Data::ICollectionView>{ static constexpr GUID value{ 0x8BE8BFE4,0xDBEF,0x44DF,{ 0x81,0x26,0xA3,0x1A,0x89,0x12,0x1D,0xDC } }; };
template <> struct guid<Windows::UI::Xaml::Data::ICollectionViewFactory>{ static constexpr GUID value{ 0x34D4AAF4,0x8E72,0x4950,{ 0x91,0x92,0xEC,0xD0,0x7D,0x39,0x9D,0x0A } }; };
template <> struct guid<Windows::UI::Xaml::Data::ICollectionViewGroup>{ static constexpr GUID value{ 0x7E01B9D8,0xD7B5,0x48B6,{ 0xB3,0x1C,0x5B,0xB5,0xBD,0xF5,0xF0,0x9B } }; };
template <> struct guid<Windows::UI::Xaml::Data::ICollectionViewSource>{ static constexpr GUID value{ 0xA66A1146,0xD2FB,0x4EAD,{ 0xBE,0x9F,0x35,0x78,0xA4,0x66,0xDC,0xFE } }; };
template <> struct guid<Windows::UI::Xaml::Data::ICollectionViewSourceStatics>{ static constexpr GUID value{ 0x173A0710,0x46AF,0x4C0C,{ 0x81,0x8B,0x21,0xB6,0xEF,0x81,0xBF,0x65 } }; };
template <> struct guid<Windows::UI::Xaml::Data::ICurrentChangingEventArgs>{ static constexpr GUID value{ 0xF9891E29,0x51CC,0x47DD,{ 0xA5,0xB9,0x35,0xDC,0x49,0x14,0xAF,0x69 } }; };
template <> struct guid<Windows::UI::Xaml::Data::ICurrentChangingEventArgsFactory>{ static constexpr GUID value{ 0x153BBEEE,0x62F3,0x48CF,{ 0x81,0x83,0x8B,0xE2,0x6D,0xE3,0xA6,0x6E } }; };
template <> struct guid<Windows::UI::Xaml::Data::ICustomProperty>{ static constexpr GUID value{ 0x30DA92C0,0x23E8,0x42A0,{ 0xAE,0x7C,0x73,0x4A,0x0E,0x5D,0x27,0x82 } }; };
template <> struct guid<Windows::UI::Xaml::Data::ICustomPropertyProvider>{ static constexpr GUID value{ 0x7C925755,0x3E48,0x42B4,{ 0x86,0x77,0x76,0x37,0x22,0x67,0x03,0x3F } }; };
template <> struct guid<Windows::UI::Xaml::Data::IItemIndexRange>{ static constexpr GUID value{ 0x83B834BE,0x0583,0x4A26,{ 0x9B,0x64,0x8B,0xF4,0xA2,0xF6,0x57,0x04 } }; };
template <> struct guid<Windows::UI::Xaml::Data::IItemIndexRangeFactory>{ static constexpr GUID value{ 0x86E2C440,0x2E7A,0x4C7D,{ 0xA6,0x64,0xE8,0xAB,0xF0,0x7B,0xFC,0x7E } }; };
template <> struct guid<Windows::UI::Xaml::Data::IItemsRangeInfo>{ static constexpr GUID value{ 0xF05F5665,0x71FD,0x45A2,{ 0xBE,0x13,0xA0,0x81,0xD2,0x94,0xA6,0x8D } }; };
template <> struct guid<Windows::UI::Xaml::Data::INotifyPropertyChanged>{ static constexpr GUID value{ 0xCF75D69C,0xF2F4,0x486B,{ 0xB3,0x02,0xBB,0x4C,0x09,0xBA,0xEB,0xFA } }; };
template <> struct guid<Windows::UI::Xaml::Data::IPropertyChangedEventArgs>{ static constexpr GUID value{ 0x4F33A9A0,0x5CF4,0x47A4,{ 0xB1,0x6F,0xD7,0xFA,0xAF,0x17,0x45,0x7E } }; };
template <> struct guid<Windows::UI::Xaml::Data::IPropertyChangedEventArgsFactory>{ static constexpr GUID value{ 0x6DCC9C03,0xE0C7,0x4EEE,{ 0x8E,0xA9,0x37,0xE3,0x40,0x6E,0xEB,0x1C } }; };
template <> struct guid<Windows::UI::Xaml::Data::IRelativeSource>{ static constexpr GUID value{ 0x2397CE84,0x2822,0x483A,{ 0xB4,0x99,0xD0,0xF0,0x31,0xE0,0x6C,0x6B } }; };
template <> struct guid<Windows::UI::Xaml::Data::IRelativeSourceFactory>{ static constexpr GUID value{ 0xEF8392CD,0x446E,0x4F93,{ 0xAA,0xCB,0x9B,0x12,0x55,0x57,0x74,0x60 } }; };
template <> struct guid<Windows::UI::Xaml::Data::ISelectionInfo>{ static constexpr GUID value{ 0x2E12CA86,0xE1ED,0x4245,{ 0xBE,0x49,0x20,0x7E,0x42,0xAE,0xC5,0x24 } }; };
template <> struct guid<Windows::UI::Xaml::Data::ISupportIncrementalLoading>{ static constexpr GUID value{ 0x7F5EE992,0x7694,0x4E6C,{ 0xA5,0x1B,0xE3,0x4B,0xF4,0x3D,0xE7,0x43 } }; };
template <> struct guid<Windows::UI::Xaml::Data::IValueConverter>{ static constexpr GUID value{ 0xE6F2FEF0,0x0712,0x487F,{ 0xB3,0x13,0xF3,0x00,0xB8,0xD7,0x9A,0xA1 } }; };
template <> struct guid<Windows::UI::Xaml::Data::CurrentChangingEventHandler>{ static constexpr GUID value{ 0xF3888DB8,0x139F,0x4DCE,{ 0x8D,0xC9,0xF7,0xF1,0x44,0x4D,0x11,0x85 } }; };
template <> struct guid<Windows::UI::Xaml::Data::PropertyChangedEventHandler>{ static constexpr GUID value{ 0x50F19C16,0x0A22,0x4D8E,{ 0xA0,0x89,0x1E,0xA9,0x95,0x16,0x57,0xD2 } }; };
template <> struct default_interface<Windows::UI::Xaml::Data::Binding>{ using type = Windows::UI::Xaml::Data::IBinding; };
template <> struct default_interface<Windows::UI::Xaml::Data::BindingBase>{ using type = Windows::UI::Xaml::Data::IBindingBase; };
template <> struct default_interface<Windows::UI::Xaml::Data::BindingExpression>{ using type = Windows::UI::Xaml::Data::IBindingExpression; };
template <> struct default_interface<Windows::UI::Xaml::Data::BindingExpressionBase>{ using type = Windows::UI::Xaml::Data::IBindingExpressionBase; };
template <> struct default_interface<Windows::UI::Xaml::Data::BindingOperations>{ using type = Windows::UI::Xaml::Data::IBindingOperations; };
template <> struct default_interface<Windows::UI::Xaml::Data::CollectionViewSource>{ using type = Windows::UI::Xaml::Data::ICollectionViewSource; };
template <> struct default_interface<Windows::UI::Xaml::Data::CurrentChangingEventArgs>{ using type = Windows::UI::Xaml::Data::ICurrentChangingEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Data::ItemIndexRange>{ using type = Windows::UI::Xaml::Data::IItemIndexRange; };
template <> struct default_interface<Windows::UI::Xaml::Data::PropertyChangedEventArgs>{ using type = Windows::UI::Xaml::Data::IPropertyChangedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Data::RelativeSource>{ using type = Windows::UI::Xaml::Data::IRelativeSource; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_IBinding
{
    Windows::UI::Xaml::PropertyPath Path() const;
    void Path(Windows::UI::Xaml::PropertyPath const& value) const;
    Windows::UI::Xaml::Data::BindingMode Mode() const;
    void Mode(Windows::UI::Xaml::Data::BindingMode const& value) const;
    Windows::Foundation::IInspectable Source() const;
    void Source(Windows::Foundation::IInspectable const& value) const;
    Windows::UI::Xaml::Data::RelativeSource RelativeSource() const;
    void RelativeSource(Windows::UI::Xaml::Data::RelativeSource const& value) const;
    hstring ElementName() const;
    void ElementName(param::hstring const& value) const;
    Windows::UI::Xaml::Data::IValueConverter Converter() const;
    void Converter(Windows::UI::Xaml::Data::IValueConverter const& value) const;
    Windows::Foundation::IInspectable ConverterParameter() const;
    void ConverterParameter(Windows::Foundation::IInspectable const& value) const;
    hstring ConverterLanguage() const;
    void ConverterLanguage(param::hstring const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Data::IBinding> { template <typename D> using type = consume_Windows_UI_Xaml_Data_IBinding<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_IBinding2
{
    Windows::Foundation::IInspectable FallbackValue() const;
    void FallbackValue(Windows::Foundation::IInspectable const& value) const;
    Windows::Foundation::IInspectable TargetNullValue() const;
    void TargetNullValue(Windows::Foundation::IInspectable const& value) const;
    Windows::UI::Xaml::Data::UpdateSourceTrigger UpdateSourceTrigger() const;
    void UpdateSourceTrigger(Windows::UI::Xaml::Data::UpdateSourceTrigger const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Data::IBinding2> { template <typename D> using type = consume_Windows_UI_Xaml_Data_IBinding2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_IBindingBase
{
};
template <> struct consume<Windows::UI::Xaml::Data::IBindingBase> { template <typename D> using type = consume_Windows_UI_Xaml_Data_IBindingBase<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_IBindingBaseFactory
{
    Windows::UI::Xaml::Data::BindingBase CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Data::IBindingBaseFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Data_IBindingBaseFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_IBindingExpression
{
    Windows::Foundation::IInspectable DataItem() const;
    Windows::UI::Xaml::Data::Binding ParentBinding() const;
    void UpdateSource() const;
};
template <> struct consume<Windows::UI::Xaml::Data::IBindingExpression> { template <typename D> using type = consume_Windows_UI_Xaml_Data_IBindingExpression<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_IBindingExpressionBase
{
};
template <> struct consume<Windows::UI::Xaml::Data::IBindingExpressionBase> { template <typename D> using type = consume_Windows_UI_Xaml_Data_IBindingExpressionBase<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_IBindingExpressionBaseFactory
{
};
template <> struct consume<Windows::UI::Xaml::Data::IBindingExpressionBaseFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Data_IBindingExpressionBaseFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_IBindingExpressionFactory
{
};
template <> struct consume<Windows::UI::Xaml::Data::IBindingExpressionFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Data_IBindingExpressionFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_IBindingFactory
{
    Windows::UI::Xaml::Data::Binding CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Data::IBindingFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Data_IBindingFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_IBindingOperations
{
};
template <> struct consume<Windows::UI::Xaml::Data::IBindingOperations> { template <typename D> using type = consume_Windows_UI_Xaml_Data_IBindingOperations<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_IBindingOperationsStatics
{
    void SetBinding(Windows::UI::Xaml::DependencyObject const& target, Windows::UI::Xaml::DependencyProperty const& dp, Windows::UI::Xaml::Data::BindingBase const& binding) const;
};
template <> struct consume<Windows::UI::Xaml::Data::IBindingOperationsStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Data_IBindingOperationsStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_ICollectionView
{
    Windows::Foundation::IInspectable CurrentItem() const;
    int32_t CurrentPosition() const;
    bool IsCurrentAfterLast() const;
    bool IsCurrentBeforeFirst() const;
    Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> CollectionGroups() const;
    bool HasMoreItems() const;
    event_token CurrentChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const;
    using CurrentChanged_revoker = event_revoker<Windows::UI::Xaml::Data::ICollectionView>;
    CurrentChanged_revoker CurrentChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const;
    void CurrentChanged(event_token const& token) const;
    event_token CurrentChanging(Windows::UI::Xaml::Data::CurrentChangingEventHandler const& value) const;
    using CurrentChanging_revoker = event_revoker<Windows::UI::Xaml::Data::ICollectionView>;
    CurrentChanging_revoker CurrentChanging(auto_revoke_t, Windows::UI::Xaml::Data::CurrentChangingEventHandler const& value) const;
    void CurrentChanging(event_token const& token) const;
    bool MoveCurrentTo(Windows::Foundation::IInspectable const& item) const;
    bool MoveCurrentToPosition(int32_t index) const;
    bool MoveCurrentToFirst() const;
    bool MoveCurrentToLast() const;
    bool MoveCurrentToNext() const;
    bool MoveCurrentToPrevious() const;
    Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Data::LoadMoreItemsResult> LoadMoreItemsAsync(uint32_t count) const;
};
template <> struct consume<Windows::UI::Xaml::Data::ICollectionView> { template <typename D> using type = consume_Windows_UI_Xaml_Data_ICollectionView<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_ICollectionViewFactory
{
    Windows::UI::Xaml::Data::ICollectionView CreateView() const;
};
template <> struct consume<Windows::UI::Xaml::Data::ICollectionViewFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Data_ICollectionViewFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_ICollectionViewGroup
{
    Windows::Foundation::IInspectable Group() const;
    Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> GroupItems() const;
};
template <> struct consume<Windows::UI::Xaml::Data::ICollectionViewGroup> { template <typename D> using type = consume_Windows_UI_Xaml_Data_ICollectionViewGroup<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_ICollectionViewSource
{
    Windows::Foundation::IInspectable Source() const;
    void Source(Windows::Foundation::IInspectable const& value) const;
    Windows::UI::Xaml::Data::ICollectionView View() const;
    bool IsSourceGrouped() const;
    void IsSourceGrouped(bool value) const;
    Windows::UI::Xaml::PropertyPath ItemsPath() const;
    void ItemsPath(Windows::UI::Xaml::PropertyPath const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Data::ICollectionViewSource> { template <typename D> using type = consume_Windows_UI_Xaml_Data_ICollectionViewSource<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_ICollectionViewSourceStatics
{
    Windows::UI::Xaml::DependencyProperty SourceProperty() const;
    Windows::UI::Xaml::DependencyProperty ViewProperty() const;
    Windows::UI::Xaml::DependencyProperty IsSourceGroupedProperty() const;
    Windows::UI::Xaml::DependencyProperty ItemsPathProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Data::ICollectionViewSourceStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Data_ICollectionViewSourceStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_ICurrentChangingEventArgs
{
    bool Cancel() const;
    void Cancel(bool value) const;
    bool IsCancelable() const;
};
template <> struct consume<Windows::UI::Xaml::Data::ICurrentChangingEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Data_ICurrentChangingEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_ICurrentChangingEventArgsFactory
{
    Windows::UI::Xaml::Data::CurrentChangingEventArgs CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
    Windows::UI::Xaml::Data::CurrentChangingEventArgs CreateWithCancelableParameter(bool isCancelable, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Data::ICurrentChangingEventArgsFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Data_ICurrentChangingEventArgsFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_ICustomProperty
{
    Windows::UI::Xaml::Interop::TypeName Type() const;
    hstring Name() const;
    Windows::Foundation::IInspectable GetValue(Windows::Foundation::IInspectable const& target) const;
    void SetValue(Windows::Foundation::IInspectable const& target, Windows::Foundation::IInspectable const& value) const;
    Windows::Foundation::IInspectable GetIndexedValue(Windows::Foundation::IInspectable const& target, Windows::Foundation::IInspectable const& index) const;
    void SetIndexedValue(Windows::Foundation::IInspectable const& target, Windows::Foundation::IInspectable const& value, Windows::Foundation::IInspectable const& index) const;
    bool CanWrite() const;
    bool CanRead() const;
};
template <> struct consume<Windows::UI::Xaml::Data::ICustomProperty> { template <typename D> using type = consume_Windows_UI_Xaml_Data_ICustomProperty<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_ICustomPropertyProvider
{
    Windows::UI::Xaml::Data::ICustomProperty GetCustomProperty(param::hstring const& name) const;
    Windows::UI::Xaml::Data::ICustomProperty GetIndexedProperty(param::hstring const& name, Windows::UI::Xaml::Interop::TypeName const& type) const;
    hstring GetStringRepresentation() const;
    Windows::UI::Xaml::Interop::TypeName Type() const;
};
template <> struct consume<Windows::UI::Xaml::Data::ICustomPropertyProvider> { template <typename D> using type = consume_Windows_UI_Xaml_Data_ICustomPropertyProvider<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_IItemIndexRange
{
    int32_t FirstIndex() const;
    uint32_t Length() const;
    int32_t LastIndex() const;
};
template <> struct consume<Windows::UI::Xaml::Data::IItemIndexRange> { template <typename D> using type = consume_Windows_UI_Xaml_Data_IItemIndexRange<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_IItemIndexRangeFactory
{
    Windows::UI::Xaml::Data::ItemIndexRange CreateInstance(int32_t firstIndex, uint32_t length, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Data::IItemIndexRangeFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Data_IItemIndexRangeFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_IItemsRangeInfo
{
    void RangesChanged(Windows::UI::Xaml::Data::ItemIndexRange const& visibleRange, param::vector_view<Windows::UI::Xaml::Data::ItemIndexRange> const& trackedItems) const;
};
template <> struct consume<Windows::UI::Xaml::Data::IItemsRangeInfo> { template <typename D> using type = consume_Windows_UI_Xaml_Data_IItemsRangeInfo<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_INotifyPropertyChanged
{
    event_token PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& value) const;
    using PropertyChanged_revoker = event_revoker<Windows::UI::Xaml::Data::INotifyPropertyChanged>;
    PropertyChanged_revoker PropertyChanged(auto_revoke_t, Windows::UI::Xaml::Data::PropertyChangedEventHandler const& value) const;
    void PropertyChanged(event_token const& token) const;
};
template <> struct consume<Windows::UI::Xaml::Data::INotifyPropertyChanged> { template <typename D> using type = consume_Windows_UI_Xaml_Data_INotifyPropertyChanged<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_IPropertyChangedEventArgs
{
    hstring PropertyName() const;
};
template <> struct consume<Windows::UI::Xaml::Data::IPropertyChangedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Data_IPropertyChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_IPropertyChangedEventArgsFactory
{
    Windows::UI::Xaml::Data::PropertyChangedEventArgs CreateInstance(param::hstring const& name, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Data::IPropertyChangedEventArgsFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Data_IPropertyChangedEventArgsFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_IRelativeSource
{
    Windows::UI::Xaml::Data::RelativeSourceMode Mode() const;
    void Mode(Windows::UI::Xaml::Data::RelativeSourceMode const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Data::IRelativeSource> { template <typename D> using type = consume_Windows_UI_Xaml_Data_IRelativeSource<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_IRelativeSourceFactory
{
    Windows::UI::Xaml::Data::RelativeSource CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Data::IRelativeSourceFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Data_IRelativeSourceFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_ISelectionInfo
{
    void SelectRange(Windows::UI::Xaml::Data::ItemIndexRange const& itemIndexRange) const;
    void DeselectRange(Windows::UI::Xaml::Data::ItemIndexRange const& itemIndexRange) const;
    bool IsSelected(int32_t index) const;
    Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Data::ItemIndexRange> GetSelectedRanges() const;
};
template <> struct consume<Windows::UI::Xaml::Data::ISelectionInfo> { template <typename D> using type = consume_Windows_UI_Xaml_Data_ISelectionInfo<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_ISupportIncrementalLoading
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Data::LoadMoreItemsResult> LoadMoreItemsAsync(uint32_t count) const;
    bool HasMoreItems() const;
};
template <> struct consume<Windows::UI::Xaml::Data::ISupportIncrementalLoading> { template <typename D> using type = consume_Windows_UI_Xaml_Data_ISupportIncrementalLoading<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Data_IValueConverter
{
    Windows::Foundation::IInspectable Convert(Windows::Foundation::IInspectable const& value, Windows::UI::Xaml::Interop::TypeName const& targetType, Windows::Foundation::IInspectable const& parameter, param::hstring const& language) const;
    Windows::Foundation::IInspectable ConvertBack(Windows::Foundation::IInspectable const& value, Windows::UI::Xaml::Interop::TypeName const& targetType, Windows::Foundation::IInspectable const& parameter, param::hstring const& language) const;
};
template <> struct consume<Windows::UI::Xaml::Data::IValueConverter> { template <typename D> using type = consume_Windows_UI_Xaml_Data_IValueConverter<D>; };

template <> struct abi<Windows::UI::Xaml::Data::IBinding>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Path(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Path(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Mode(abi_t<Windows::UI::Xaml::Data::BindingMode>* value) = 0;
    virtual HRESULT __stdcall put_Mode(abi_t<Windows::UI::Xaml::Data::BindingMode> value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_RelativeSource(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_RelativeSource(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ElementName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_ElementName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Converter(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Converter(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ConverterParameter(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ConverterParameter(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ConverterLanguage(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_ConverterLanguage(HSTRING value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Data::IBinding2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FallbackValue(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_FallbackValue(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_TargetNullValue(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_TargetNullValue(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_UpdateSourceTrigger(abi_t<Windows::UI::Xaml::Data::UpdateSourceTrigger>* value) = 0;
    virtual HRESULT __stdcall put_UpdateSourceTrigger(abi_t<Windows::UI::Xaml::Data::UpdateSourceTrigger> value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Data::IBindingBase>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Data::IBindingBaseFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Data::IBindingExpression>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DataItem(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ParentBinding(::IUnknown** value) = 0;
    virtual HRESULT __stdcall UpdateSource() = 0;
};};

template <> struct abi<Windows::UI::Xaml::Data::IBindingExpressionBase>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Data::IBindingExpressionBaseFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Data::IBindingExpressionFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Data::IBindingFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Data::IBindingOperations>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Data::IBindingOperationsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetBinding(::IUnknown* target, ::IUnknown* dp, ::IUnknown* binding) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Data::ICollectionView>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CurrentItem(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CurrentPosition(int32_t* value) = 0;
    virtual HRESULT __stdcall get_IsCurrentAfterLast(bool* value) = 0;
    virtual HRESULT __stdcall get_IsCurrentBeforeFirst(bool* value) = 0;
    virtual HRESULT __stdcall get_CollectionGroups(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_HasMoreItems(bool* value) = 0;
    virtual HRESULT __stdcall add_CurrentChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_CurrentChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_CurrentChanging(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_CurrentChanging(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall MoveCurrentTo(::IUnknown* item, bool* returnValue) = 0;
    virtual HRESULT __stdcall MoveCurrentToPosition(int32_t index, bool* returnValue) = 0;
    virtual HRESULT __stdcall MoveCurrentToFirst(bool* returnValue) = 0;
    virtual HRESULT __stdcall MoveCurrentToLast(bool* returnValue) = 0;
    virtual HRESULT __stdcall MoveCurrentToNext(bool* returnValue) = 0;
    virtual HRESULT __stdcall MoveCurrentToPrevious(bool* returnValue) = 0;
    virtual HRESULT __stdcall LoadMoreItemsAsync(uint32_t count, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Data::ICollectionViewFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateView(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Data::ICollectionViewGroup>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Group(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_GroupItems(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Data::ICollectionViewSource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Source(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_View(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsSourceGrouped(bool* value) = 0;
    virtual HRESULT __stdcall put_IsSourceGrouped(bool value) = 0;
    virtual HRESULT __stdcall get_ItemsPath(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ItemsPath(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Data::ICollectionViewSourceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SourceProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ViewProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsSourceGroupedProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ItemsPathProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Data::ICurrentChangingEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Cancel(bool* value) = 0;
    virtual HRESULT __stdcall put_Cancel(bool value) = 0;
    virtual HRESULT __stdcall get_IsCancelable(bool* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Data::ICurrentChangingEventArgsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
    virtual HRESULT __stdcall CreateWithCancelableParameter(bool isCancelable, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Data::ICustomProperty>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Type(abi_t<Windows::UI::Xaml::Interop::TypeName>* value) = 0;
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall GetValue(::IUnknown* target, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall SetValue(::IUnknown* target, ::IUnknown* value) = 0;
    virtual HRESULT __stdcall GetIndexedValue(::IUnknown* target, ::IUnknown* index, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall SetIndexedValue(::IUnknown* target, ::IUnknown* value, ::IUnknown* index) = 0;
    virtual HRESULT __stdcall get_CanWrite(bool* value) = 0;
    virtual HRESULT __stdcall get_CanRead(bool* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Data::ICustomPropertyProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetCustomProperty(HSTRING name, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetIndexedProperty(HSTRING name, abi_t<Windows::UI::Xaml::Interop::TypeName> type, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetStringRepresentation(HSTRING* returnValue) = 0;
    virtual HRESULT __stdcall get_Type(abi_t<Windows::UI::Xaml::Interop::TypeName>* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Data::IItemIndexRange>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FirstIndex(int32_t* value) = 0;
    virtual HRESULT __stdcall get_Length(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_LastIndex(int32_t* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Data::IItemIndexRangeFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(int32_t firstIndex, uint32_t length, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Data::IItemsRangeInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RangesChanged(::IUnknown* visibleRange, ::IUnknown* trackedItems) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Data::INotifyPropertyChanged>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_PropertyChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PropertyChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Data::IPropertyChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PropertyName(HSTRING* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Data::IPropertyChangedEventArgsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(HSTRING name, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Data::IRelativeSource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Mode(abi_t<Windows::UI::Xaml::Data::RelativeSourceMode>* value) = 0;
    virtual HRESULT __stdcall put_Mode(abi_t<Windows::UI::Xaml::Data::RelativeSourceMode> value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Data::IRelativeSourceFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Data::ISelectionInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SelectRange(::IUnknown* itemIndexRange) = 0;
    virtual HRESULT __stdcall DeselectRange(::IUnknown* itemIndexRange) = 0;
    virtual HRESULT __stdcall IsSelected(int32_t index, bool* returnValue) = 0;
    virtual HRESULT __stdcall GetSelectedRanges(::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Data::ISupportIncrementalLoading>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall LoadMoreItemsAsync(uint32_t count, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall get_HasMoreItems(bool* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Data::IValueConverter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Convert(::IUnknown* value, abi_t<Windows::UI::Xaml::Interop::TypeName> targetType, ::IUnknown* parameter, HSTRING language, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall ConvertBack(::IUnknown* value, abi_t<Windows::UI::Xaml::Interop::TypeName> targetType, ::IUnknown* parameter, HSTRING language, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Data::CurrentChangingEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Data::PropertyChangedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

}
