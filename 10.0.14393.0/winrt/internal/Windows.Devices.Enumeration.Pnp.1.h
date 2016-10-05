// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Devices.Enumeration.Pnp.0.h"
#include "Windows.Devices.Enumeration.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Enumeration::Pnp {

struct __declspec(uuid("95c66258-733b-4a8f-93a3-db078ac870c1")) __declspec(novtable) IPnpObject : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Type(winrt::Windows::Devices::Enumeration::Pnp::PnpObjectType * value) = 0;
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall get_Properties(Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> ** value) = 0;
    virtual HRESULT __stdcall abi_Update(Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate * updateInfo) = 0;
};

struct __declspec(uuid("b3c32a3d-d168-4660-bbf3-a733b14b6e01")) __declspec(novtable) IPnpObjectStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateFromIdAsync(winrt::Windows::Devices::Enumeration::Pnp::PnpObjectType type, hstring id, Windows::Foundation::Collections::IIterable<hstring> * requestedProperties, Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObject> ** asyncOp) = 0;
    virtual HRESULT __stdcall abi_FindAllAsync(winrt::Windows::Devices::Enumeration::Pnp::PnpObjectType type, Windows::Foundation::Collections::IIterable<hstring> * requestedProperties, Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection> ** asyncOp) = 0;
    virtual HRESULT __stdcall abi_FindAllAsyncAqsFilter(winrt::Windows::Devices::Enumeration::Pnp::PnpObjectType type, Windows::Foundation::Collections::IIterable<hstring> * requestedProperties, hstring aqsFilter, Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection> ** asyncOp) = 0;
    virtual HRESULT __stdcall abi_CreateWatcher(winrt::Windows::Devices::Enumeration::Pnp::PnpObjectType type, Windows::Foundation::Collections::IIterable<hstring> * requestedProperties, Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher ** watcher) = 0;
    virtual HRESULT __stdcall abi_CreateWatcherAqsFilter(winrt::Windows::Devices::Enumeration::Pnp::PnpObjectType type, Windows::Foundation::Collections::IIterable<hstring> * requestedProperties, hstring aqsFilter, Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher ** watcher) = 0;
};

struct __declspec(uuid("6f59e812-001e-4844-bcc6-432886856a17")) __declspec(novtable) IPnpObjectUpdate : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Type(winrt::Windows::Devices::Enumeration::Pnp::PnpObjectType * value) = 0;
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall get_Properties(Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> ** value) = 0;
};

struct __declspec(uuid("83c95ca8-4772-4a7a-aca8-e48c42a89c44")) __declspec(novtable) IPnpObjectWatcher : Windows::IInspectable
{
    virtual HRESULT __stdcall add_Added(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObject> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Added(event_token token) = 0;
    virtual HRESULT __stdcall add_Updated(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Updated(event_token token) = 0;
    virtual HRESULT __stdcall add_Removed(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Removed(event_token token) = 0;
    virtual HRESULT __stdcall add_EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_EnumerationCompleted(event_token token) = 0;
    virtual HRESULT __stdcall add_Stopped(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Stopped(event_token token) = 0;
    virtual HRESULT __stdcall get_Status(winrt::Windows::Devices::Enumeration::DeviceWatcherStatus * status) = 0;
    virtual HRESULT __stdcall abi_Start() = 0;
    virtual HRESULT __stdcall abi_Stop() = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Devices::Enumeration::Pnp::PnpObject> { using default_interface = Windows::Devices::Enumeration::Pnp::IPnpObject; };
template <> struct traits<Windows::Devices::Enumeration::Pnp::PnpObjectCollection> { using default_interface = Windows::Foundation::Collections::IVectorView<Windows::Devices::Enumeration::Pnp::PnpObject>; };
template <> struct traits<Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> { using default_interface = Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate; };
template <> struct traits<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher> { using default_interface = Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher; };

}

namespace Windows::Devices::Enumeration::Pnp {

template <typename T> struct impl_IPnpObject;
template <typename T> struct impl_IPnpObjectStatics;
template <typename T> struct impl_IPnpObjectUpdate;
template <typename T> struct impl_IPnpObjectWatcher;

}

namespace impl {

template <> struct traits<Windows::Devices::Enumeration::Pnp::IPnpObject>
{
    using abi = ABI::Windows::Devices::Enumeration::Pnp::IPnpObject;
    template <typename D> using consume = Windows::Devices::Enumeration::Pnp::impl_IPnpObject<D>;
};

template <> struct traits<Windows::Devices::Enumeration::Pnp::IPnpObjectStatics>
{
    using abi = ABI::Windows::Devices::Enumeration::Pnp::IPnpObjectStatics;
    template <typename D> using consume = Windows::Devices::Enumeration::Pnp::impl_IPnpObjectStatics<D>;
};

template <> struct traits<Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate>
{
    using abi = ABI::Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate;
    template <typename D> using consume = Windows::Devices::Enumeration::Pnp::impl_IPnpObjectUpdate<D>;
};

template <> struct traits<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>
{
    using abi = ABI::Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher;
    template <typename D> using consume = Windows::Devices::Enumeration::Pnp::impl_IPnpObjectWatcher<D>;
};

template <> struct traits<Windows::Devices::Enumeration::Pnp::PnpObject>
{
    using abi = ABI::Windows::Devices::Enumeration::Pnp::PnpObject;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Enumeration.Pnp.PnpObject"; }
};

template <> struct traits<Windows::Devices::Enumeration::Pnp::PnpObjectCollection>
{
    using abi = ABI::Windows::Devices::Enumeration::Pnp::PnpObjectCollection;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Enumeration.Pnp.PnpObjectCollection"; }
};

template <> struct traits<Windows::Devices::Enumeration::Pnp::PnpObjectUpdate>
{
    using abi = ABI::Windows::Devices::Enumeration::Pnp::PnpObjectUpdate;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Enumeration.Pnp.PnpObjectUpdate"; }
};

template <> struct traits<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher>
{
    using abi = ABI::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Enumeration.Pnp.PnpObjectWatcher"; }
};

}

}
