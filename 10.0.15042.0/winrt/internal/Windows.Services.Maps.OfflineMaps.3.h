// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Services.Maps.OfflineMaps.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Services::Maps::OfflineMaps {

struct WINRT_EBO OfflineMapPackage :
    Windows::Services::Maps::OfflineMaps::IOfflineMapPackage
{
    OfflineMapPackage(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> FindPackagesAsync(const Windows::Devices::Geolocation::Geopoint & queryPoint);
    static Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> FindPackagesInBoundingBoxAsync(const Windows::Devices::Geolocation::GeoboundingBox & queryBoundingBox);
    static Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> FindPackagesInGeocircleAsync(const Windows::Devices::Geolocation::Geocircle & queryCircle);
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

}
