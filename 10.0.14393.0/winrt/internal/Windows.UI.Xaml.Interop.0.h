// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Xaml::Interop {

struct TypeName;

}

namespace Windows::UI::Xaml::Interop {

struct TypeName;

}

namespace ABI::Windows::UI::Xaml::Interop {

struct BindableVectorChangedEventHandler;
struct IBindableIterable;
struct IBindableIterator;
struct IBindableObservableVector;
struct IBindableVector;
struct IBindableVectorView;
struct INotifyCollectionChanged;
struct INotifyCollectionChangedEventArgs;
struct INotifyCollectionChangedEventArgsFactory;
struct NotifyCollectionChangedEventHandler;
struct NotifyCollectionChangedEventArgs;

}

namespace Windows::UI::Xaml::Interop {

struct BindableVectorChangedEventHandler;
struct NotifyCollectionChangedEventHandler;
struct IBindableIterable;
struct IBindableIterator;
struct IBindableObservableVector;
struct IBindableVector;
struct IBindableVectorView;
struct INotifyCollectionChanged;
struct INotifyCollectionChangedEventArgs;
struct INotifyCollectionChangedEventArgsFactory;
struct NotifyCollectionChangedEventArgs;

}

namespace Windows::UI::Xaml::Interop {

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

}

}
