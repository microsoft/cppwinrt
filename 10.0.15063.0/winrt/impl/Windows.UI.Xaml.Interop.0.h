// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Interop {

enum class NotifyCollectionChangedAction
{
    Add = 0,
    Remove = 1,
    Replace = 2,
    Move = 3,
    Reset = 4,
};

enum class TypeKind
{
    Primitive = 0,
    Metadata = 1,
    Custom = 2,
};

struct IBindableIterable;
struct IBindableIterator;
struct IBindableObservableVector;
struct IBindableVector;
struct IBindableVectorView;
struct INotifyCollectionChanged;
struct INotifyCollectionChangedEventArgs;
struct INotifyCollectionChangedEventArgsFactory;
struct NotifyCollectionChangedEventArgs;
struct TypeName;
struct BindableVectorChangedEventHandler;
struct NotifyCollectionChangedEventHandler;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Xaml::Interop::IBindableIterable>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Interop::IBindableIterator>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Interop::IBindableObservableVector>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Interop::IBindableVector>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Interop::IBindableVectorView>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Interop::INotifyCollectionChanged>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgsFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Interop::NotifyCollectionChangedAction>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Interop::TypeKind>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Interop::TypeName>{ using type = struct_category<hstring,Windows::UI::Xaml::Interop::TypeKind>; };
template <> struct category<Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::Interop::NotifyCollectionChangedEventHandler>{ using type = delegate_category; };
template <> struct name<Windows::UI::Xaml::Interop::IBindableIterable>{ static constexpr auto & value{ L"Windows.UI.Xaml.Interop.IBindableIterable" }; };
template <> struct name<Windows::UI::Xaml::Interop::IBindableIterator>{ static constexpr auto & value{ L"Windows.UI.Xaml.Interop.IBindableIterator" }; };
template <> struct name<Windows::UI::Xaml::Interop::IBindableObservableVector>{ static constexpr auto & value{ L"Windows.UI.Xaml.Interop.IBindableObservableVector" }; };
template <> struct name<Windows::UI::Xaml::Interop::IBindableVector>{ static constexpr auto & value{ L"Windows.UI.Xaml.Interop.IBindableVector" }; };
template <> struct name<Windows::UI::Xaml::Interop::IBindableVectorView>{ static constexpr auto & value{ L"Windows.UI.Xaml.Interop.IBindableVectorView" }; };
template <> struct name<Windows::UI::Xaml::Interop::INotifyCollectionChanged>{ static constexpr auto & value{ L"Windows.UI.Xaml.Interop.INotifyCollectionChanged" }; };
template <> struct name<Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgsFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgsFactory" }; };
template <> struct name<Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Interop::NotifyCollectionChangedAction>{ static constexpr auto & value{ L"Windows.UI.Xaml.Interop.NotifyCollectionChangedAction" }; };
template <> struct name<Windows::UI::Xaml::Interop::TypeKind>{ static constexpr auto & value{ L"Windows.UI.Xaml.Interop.TypeKind" }; };
template <> struct name<Windows::UI::Xaml::Interop::TypeName>{ static constexpr auto & value{ L"Windows.UI.Xaml.Interop.TypeName" }; };
template <> struct name<Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Interop.BindableVectorChangedEventHandler" }; };
template <> struct name<Windows::UI::Xaml::Interop::NotifyCollectionChangedEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Interop.NotifyCollectionChangedEventHandler" }; };
template <> struct guid<Windows::UI::Xaml::Interop::IBindableIterable>{ static constexpr GUID value{ 0x036D2C08,0xDF29,0x41AF,{ 0x8A,0xA2,0xD7,0x74,0xBE,0x62,0xBA,0x6F } }; };
template <> struct guid<Windows::UI::Xaml::Interop::IBindableIterator>{ static constexpr GUID value{ 0x6A1D6C07,0x076D,0x49F2,{ 0x83,0x14,0xF5,0x2C,0x9C,0x9A,0x83,0x31 } }; };
template <> struct guid<Windows::UI::Xaml::Interop::IBindableObservableVector>{ static constexpr GUID value{ 0xFE1EB536,0x7E7F,0x4F90,{ 0xAC,0x9A,0x47,0x49,0x84,0xAA,0xE5,0x12 } }; };
template <> struct guid<Windows::UI::Xaml::Interop::IBindableVector>{ static constexpr GUID value{ 0x393DE7DE,0x6FD0,0x4C0D,{ 0xBB,0x71,0x47,0x24,0x4A,0x11,0x3E,0x93 } }; };
template <> struct guid<Windows::UI::Xaml::Interop::IBindableVectorView>{ static constexpr GUID value{ 0x346DD6E7,0x976E,0x4BC3,{ 0x81,0x5D,0xEC,0xE2,0x43,0xBC,0x0F,0x33 } }; };
template <> struct guid<Windows::UI::Xaml::Interop::INotifyCollectionChanged>{ static constexpr GUID value{ 0x28B167D5,0x1A31,0x465B,{ 0x9B,0x25,0xD5,0xC3,0xAE,0x68,0x6C,0x40 } }; };
template <> struct guid<Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs>{ static constexpr GUID value{ 0x4CF68D33,0xE3F2,0x4964,{ 0xB8,0x5E,0x94,0x5B,0x4F,0x7E,0x2F,0x21 } }; };
template <> struct guid<Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgsFactory>{ static constexpr GUID value{ 0xB30C3E3A,0xDF8D,0x44A5,{ 0x9A,0x38,0x7A,0xC0,0xD0,0x8C,0xE6,0x3D } }; };
template <> struct guid<Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler>{ static constexpr GUID value{ 0x624CD4E1,0xD007,0x43B1,{ 0x9C,0x03,0xAF,0x4D,0x3E,0x62,0x58,0xC4 } }; };
template <> struct guid<Windows::UI::Xaml::Interop::NotifyCollectionChangedEventHandler>{ static constexpr GUID value{ 0xCA10B37C,0xF382,0x4591,{ 0x85,0x57,0x5E,0x24,0x96,0x52,0x79,0xB0 } }; };
template <> struct default_interface<Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs>{ using type = Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs; };

template <> struct abi<Windows::UI::Xaml::Interop::TypeName>{ struct type
{
    HSTRING Name;
    abi_t<Windows::UI::Xaml::Interop::TypeKind> Kind;
};};

template <typename D>
struct consume_Windows_UI_Xaml_Interop_IBindableIterable
{
    Windows::UI::Xaml::Interop::IBindableIterator First() const;
};
template <> struct consume<Windows::UI::Xaml::Interop::IBindableIterable> { template <typename D> using type = consume_Windows_UI_Xaml_Interop_IBindableIterable<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Interop_IBindableIterator
{
    Windows::Foundation::IInspectable Current() const;
    bool HasCurrent() const;
    bool MoveNext() const;
};
template <> struct consume<Windows::UI::Xaml::Interop::IBindableIterator> { template <typename D> using type = consume_Windows_UI_Xaml_Interop_IBindableIterator<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Interop_IBindableObservableVector
{
    event_token VectorChanged(Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler const& value) const;
    using VectorChanged_revoker = event_revoker<Windows::UI::Xaml::Interop::IBindableObservableVector>;
    VectorChanged_revoker VectorChanged(auto_revoke_t, Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler const& value) const;
    void VectorChanged(event_token const& token) const;
};
template <> struct consume<Windows::UI::Xaml::Interop::IBindableObservableVector> { template <typename D> using type = consume_Windows_UI_Xaml_Interop_IBindableObservableVector<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Interop_IBindableVector
{
    Windows::Foundation::IInspectable GetAt(uint32_t index) const;
    uint32_t Size() const;
    Windows::UI::Xaml::Interop::IBindableVectorView GetView() const;
    bool IndexOf(Windows::Foundation::IInspectable const& value, uint32_t& index) const;
    void SetAt(uint32_t index, Windows::Foundation::IInspectable const& value) const;
    void InsertAt(uint32_t index, Windows::Foundation::IInspectable const& value) const;
    void RemoveAt(uint32_t index) const;
    void Append(Windows::Foundation::IInspectable const& value) const;
    void RemoveAtEnd() const;
    void Clear() const;
};
template <> struct consume<Windows::UI::Xaml::Interop::IBindableVector> { template <typename D> using type = consume_Windows_UI_Xaml_Interop_IBindableVector<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Interop_IBindableVectorView
{
    Windows::Foundation::IInspectable GetAt(uint32_t index) const;
    uint32_t Size() const;
    bool IndexOf(Windows::Foundation::IInspectable const& value, uint32_t& index) const;
};
template <> struct consume<Windows::UI::Xaml::Interop::IBindableVectorView> { template <typename D> using type = consume_Windows_UI_Xaml_Interop_IBindableVectorView<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Interop_INotifyCollectionChanged
{
    event_token CollectionChanged(Windows::UI::Xaml::Interop::NotifyCollectionChangedEventHandler const& value) const;
    using CollectionChanged_revoker = event_revoker<Windows::UI::Xaml::Interop::INotifyCollectionChanged>;
    CollectionChanged_revoker CollectionChanged(auto_revoke_t, Windows::UI::Xaml::Interop::NotifyCollectionChangedEventHandler const& value) const;
    void CollectionChanged(event_token const& token) const;
};
template <> struct consume<Windows::UI::Xaml::Interop::INotifyCollectionChanged> { template <typename D> using type = consume_Windows_UI_Xaml_Interop_INotifyCollectionChanged<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Interop_INotifyCollectionChangedEventArgs
{
    Windows::UI::Xaml::Interop::NotifyCollectionChangedAction Action() const;
    Windows::UI::Xaml::Interop::IBindableVector NewItems() const;
    Windows::UI::Xaml::Interop::IBindableVector OldItems() const;
    int32_t NewStartingIndex() const;
    int32_t OldStartingIndex() const;
};
template <> struct consume<Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Interop_INotifyCollectionChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Interop_INotifyCollectionChangedEventArgsFactory
{
    Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs CreateInstanceWithAllParameters(Windows::UI::Xaml::Interop::NotifyCollectionChangedAction const& action, Windows::UI::Xaml::Interop::IBindableVector const& newItems, Windows::UI::Xaml::Interop::IBindableVector const& oldItems, int32_t newIndex, int32_t oldIndex, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgsFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Interop_INotifyCollectionChangedEventArgsFactory<D>; };

template <> struct abi<Windows::UI::Xaml::Interop::IBindableIterable>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall First(::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Interop::IBindableIterator>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Current(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_HasCurrent(bool* value) = 0;
    virtual HRESULT __stdcall MoveNext(bool* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Interop::IBindableObservableVector>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_VectorChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_VectorChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Interop::IBindableVector>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetAt(uint32_t index, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall get_Size(uint32_t* value) = 0;
    virtual HRESULT __stdcall GetView(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall IndexOf(::IUnknown* value, uint32_t* index, bool* returnValue) = 0;
    virtual HRESULT __stdcall SetAt(uint32_t index, ::IUnknown* value) = 0;
    virtual HRESULT __stdcall InsertAt(uint32_t index, ::IUnknown* value) = 0;
    virtual HRESULT __stdcall RemoveAt(uint32_t index) = 0;
    virtual HRESULT __stdcall Append(::IUnknown* value) = 0;
    virtual HRESULT __stdcall RemoveAtEnd() = 0;
    virtual HRESULT __stdcall Clear() = 0;
};};

template <> struct abi<Windows::UI::Xaml::Interop::IBindableVectorView>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetAt(uint32_t index, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall get_Size(uint32_t* value) = 0;
    virtual HRESULT __stdcall IndexOf(::IUnknown* value, uint32_t* index, bool* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Interop::INotifyCollectionChanged>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_CollectionChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_CollectionChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Action(abi_t<Windows::UI::Xaml::Interop::NotifyCollectionChangedAction>* value) = 0;
    virtual HRESULT __stdcall get_NewItems(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_OldItems(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NewStartingIndex(int32_t* value) = 0;
    virtual HRESULT __stdcall get_OldStartingIndex(int32_t* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithAllParameters(abi_t<Windows::UI::Xaml::Interop::NotifyCollectionChangedAction> action, ::IUnknown* newItems, ::IUnknown* oldItems, int32_t newIndex, int32_t oldIndex, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* vector, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Interop::NotifyCollectionChangedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

}
