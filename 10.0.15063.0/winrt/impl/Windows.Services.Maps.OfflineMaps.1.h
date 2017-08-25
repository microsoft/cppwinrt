// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Geolocation.0.h"
#include "winrt/impl/Windows.Services.Maps.OfflineMaps.0.h"

WINRT_EXPORT namespace winrt::Windows::Services::Maps::OfflineMaps {

struct WINRT_EBO IOfflineMapPackage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOfflineMapPackage>
{
    IOfflineMapPackage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IOfflineMapPackageQueryResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOfflineMapPackageQueryResult>
{
    IOfflineMapPackageQueryResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IOfflineMapPackageStartDownloadResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOfflineMapPackageStartDownloadResult>
{
    IOfflineMapPackageStartDownloadResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IOfflineMapPackageStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOfflineMapPackageStatics>
{
    IOfflineMapPackageStatics(std::nullptr_t = nullptr) noexcept {}
};

}
