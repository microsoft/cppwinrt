// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Geolocation.1.h"
#include "winrt/impl/Windows.Services.Maps.OfflineMaps.1.h"

WINRT_EXPORT namespace winrt::Windows::Services::Maps::OfflineMaps {

struct WINRT_EBO OfflineMapPackage :
    Windows::Services::Maps::OfflineMaps::IOfflineMapPackage
{
    OfflineMapPackage(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> FindPackagesAsync(Windows::Devices::Geolocation::Geopoint const& queryPoint);
    static Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> FindPackagesInBoundingBoxAsync(Windows::Devices::Geolocation::GeoboundingBox const& queryBoundingBox);
    static Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> FindPackagesInGeocircleAsync(Windows::Devices::Geolocation::Geocircle const& queryCircle);
};

struct WINRT_EBO OfflineMapPackageQueryResult :
    Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult
{
    OfflineMapPackageQueryResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO OfflineMapPackageStartDownloadResult :
    Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult
{
    OfflineMapPackageStartDownloadResult(std::nullptr_t) noexcept {}
};

}
