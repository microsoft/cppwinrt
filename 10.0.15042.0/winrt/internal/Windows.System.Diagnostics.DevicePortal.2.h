// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.System.Diagnostics.DevicePortal.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_2aad93a8_52fa_54b3_9556_15d651208b3f
#define WINRT_GENERIC_2aad93a8_52fa_54b3_9556_15d651208b3f
template <> struct __declspec(uuid("2aad93a8-52fa-54b3-9556-15d651208b3f")) __declspec(novtable) TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs> : impl_TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_d8e33ff8_8ac4_5fd9_b184_8ae87d828eb9
#define WINRT_GENERIC_d8e33ff8_8ac4_5fd9_b184_8ae87d828eb9
template <> struct __declspec(uuid("d8e33ff8-8ac4-5fd9-b184-8ae87d828eb9")) __declspec(novtable) TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs> : impl_TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs> {};
#endif


}

namespace Windows::System::Diagnostics::DevicePortal {

struct IDevicePortalConnection :
    Windows::Foundation::IInspectable,
    impl::consume<IDevicePortalConnection>
{
    IDevicePortalConnection(std::nullptr_t = nullptr) noexcept {}
};

struct IDevicePortalConnectionClosedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<IDevicePortalConnectionClosedEventArgs>
{
    IDevicePortalConnectionClosedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IDevicePortalConnectionRequestReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<IDevicePortalConnectionRequestReceivedEventArgs>
{
    IDevicePortalConnectionRequestReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IDevicePortalConnectionStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IDevicePortalConnectionStatics>
{
    IDevicePortalConnectionStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
