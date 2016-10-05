// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Devices.Enumeration.Pnp.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Devices::Enumeration::Pnp {

struct WINRT_EBO PnpObject :
    Windows::Devices::Enumeration::Pnp::IPnpObject
{
    PnpObject(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObject> CreateFromIdAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType type, hstring_ref id, const Windows::Foundation::Collections::IIterable<hstring> & requestedProperties);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection> FindAllAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType type, const Windows::Foundation::Collections::IIterable<hstring> & requestedProperties);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection> FindAllAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType type, const Windows::Foundation::Collections::IIterable<hstring> & requestedProperties, hstring_ref aqsFilter);
    static Windows::Devices::Enumeration::Pnp::PnpObjectWatcher CreateWatcher(Windows::Devices::Enumeration::Pnp::PnpObjectType type, const Windows::Foundation::Collections::IIterable<hstring> & requestedProperties);
    static Windows::Devices::Enumeration::Pnp::PnpObjectWatcher CreateWatcher(Windows::Devices::Enumeration::Pnp::PnpObjectType type, const Windows::Foundation::Collections::IIterable<hstring> & requestedProperties, hstring_ref aqsFilter);
};

struct WINRT_EBO PnpObjectCollection :
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Enumeration::Pnp::PnpObject>
{
    PnpObjectCollection(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PnpObjectUpdate :
    Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate
{
    PnpObjectUpdate(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PnpObjectWatcher :
    Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher
{
    PnpObjectWatcher(std::nullptr_t) noexcept {}
};

}

}
