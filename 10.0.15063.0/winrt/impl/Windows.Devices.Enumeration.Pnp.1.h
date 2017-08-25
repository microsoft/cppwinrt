// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Enumeration.0.h"
#include "winrt/impl/Windows.Devices.Enumeration.Pnp.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration::Pnp {

struct WINRT_EBO IPnpObject :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPnpObject>
{
    IPnpObject(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPnpObjectStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPnpObjectStatics>
{
    IPnpObjectStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPnpObjectUpdate :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPnpObjectUpdate>
{
    IPnpObjectUpdate(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPnpObjectWatcher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPnpObjectWatcher>
{
    IPnpObjectWatcher(std::nullptr_t = nullptr) noexcept {}
};

}
