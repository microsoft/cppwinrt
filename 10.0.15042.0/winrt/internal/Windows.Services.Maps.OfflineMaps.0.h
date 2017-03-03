// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Services::Maps::OfflineMaps {

struct IOfflineMapPackage;
struct IOfflineMapPackageQueryResult;
struct IOfflineMapPackageStartDownloadResult;
struct IOfflineMapPackageStatics;
struct OfflineMapPackage;
struct OfflineMapPackageQueryResult;
struct OfflineMapPackageStartDownloadResult;

}

namespace Windows::Services::Maps::OfflineMaps {

struct IOfflineMapPackage;
struct IOfflineMapPackageQueryResult;
struct IOfflineMapPackageStartDownloadResult;
struct IOfflineMapPackageStatics;
struct OfflineMapPackage;
struct OfflineMapPackageQueryResult;
struct OfflineMapPackageStartDownloadResult;

}

namespace Windows::Services::Maps::OfflineMaps {

template <typename T> struct impl_IOfflineMapPackage;
template <typename T> struct impl_IOfflineMapPackageQueryResult;
template <typename T> struct impl_IOfflineMapPackageStartDownloadResult;
template <typename T> struct impl_IOfflineMapPackageStatics;

}

namespace Windows::Services::Maps::OfflineMaps {

enum class OfflineMapPackageQueryStatus
{
    Success = 0,
    UnknownError = 1,
    InvalidCredentials = 2,
    NetworkFailure = 3,
};

enum class OfflineMapPackageStartDownloadStatus
{
    Success = 0,
    UnknownError = 1,
    InvalidCredentials = 2,
    DeniedWithoutCapability = 3,
};

enum class OfflineMapPackageStatus
{
    NotDownloaded = 0,
    Downloading = 1,
    Downloaded = 2,
    Deleting = 3,
};

}

}
