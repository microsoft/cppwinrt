// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.System.RemoteSystems.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.ApplicationModel.AppService.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::AppService {

struct WINRT_EBO IAppServiceCatalogStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppServiceCatalogStatics>
{
    IAppServiceCatalogStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppServiceClosedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppServiceClosedEventArgs>
{
    IAppServiceClosedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppServiceConnection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppServiceConnection>,
    impl::require<IAppServiceConnection, Windows::Foundation::IClosable>
{
    IAppServiceConnection(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppServiceConnection2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppServiceConnection2>
{
    IAppServiceConnection2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppServiceDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppServiceDeferral>
{
    IAppServiceDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppServiceRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppServiceRequest>
{
    IAppServiceRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppServiceRequestReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppServiceRequestReceivedEventArgs>
{
    IAppServiceRequestReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppServiceResponse :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppServiceResponse>
{
    IAppServiceResponse(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppServiceTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppServiceTriggerDetails>
{
    IAppServiceTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppServiceTriggerDetails2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppServiceTriggerDetails2>
{
    IAppServiceTriggerDetails2(std::nullptr_t = nullptr) noexcept {}
};

}
