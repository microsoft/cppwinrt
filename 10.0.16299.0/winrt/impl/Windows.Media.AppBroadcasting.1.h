// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.Media.AppBroadcasting.0.h"

WINRT_EXPORT namespace winrt::Windows::Media::AppBroadcasting {

struct WINRT_EBO IAppBroadcastingMonitor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastingMonitor>
{
    IAppBroadcastingMonitor(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastingStatus :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastingStatus>
{
    IAppBroadcastingStatus(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastingStatusDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastingStatusDetails>
{
    IAppBroadcastingStatusDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastingUI :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastingUI>
{
    IAppBroadcastingUI(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastingUIStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastingUIStatics>
{
    IAppBroadcastingUIStatics(std::nullptr_t = nullptr) noexcept {}
};

}
