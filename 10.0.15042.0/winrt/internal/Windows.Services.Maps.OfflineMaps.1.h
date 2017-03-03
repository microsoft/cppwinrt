// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Services.Maps.OfflineMaps.0.h"
#include "Windows.Devices.Geolocation.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Services::Maps::OfflineMaps {

struct __declspec(uuid("a797673b-a5b5-4144-b525-e68c8862664b")) __declspec(novtable) IOfflineMapPackage : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStatus * value) = 0;
    virtual HRESULT __stdcall get_DisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall get_EnclosingRegionName(hstring * value) = 0;
    virtual HRESULT __stdcall get_EstimatedSizeInBytes(uint64_t * value) = 0;
    virtual HRESULT __stdcall remove_StatusChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_StatusChanged(Windows::Foundation::TypedEventHandler<Windows::Services::Maps::OfflineMaps::OfflineMapPackage, Windows::Foundation::IInspectable> * value, event_token * token) = 0;
    virtual HRESULT __stdcall abi_RequestStartDownloadAsync(Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult> ** value) = 0;
};

struct __declspec(uuid("55585411-39e1-4e41-a4e1-5f4872bee199")) __declspec(novtable) IOfflineMapPackageQueryResult : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryStatus * value) = 0;
    virtual HRESULT __stdcall get_Packages(Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::OfflineMaps::OfflineMapPackage> ** value) = 0;
};

struct __declspec(uuid("d965b918-d4d6-4afe-9378-3ec71ef11c3d")) __declspec(novtable) IOfflineMapPackageStartDownloadResult : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadStatus * value) = 0;
};

struct __declspec(uuid("185e7922-a831-4ab0-941f-6998fa929285")) __declspec(novtable) IOfflineMapPackageStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_FindPackagesAsync(Windows::Devices::Geolocation::IGeopoint * queryPoint, Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> ** result) = 0;
    virtual HRESULT __stdcall abi_FindPackagesInBoundingBoxAsync(Windows::Devices::Geolocation::IGeoboundingBox * queryBoundingBox, Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> ** result) = 0;
    virtual HRESULT __stdcall abi_FindPackagesInGeocircleAsync(Windows::Devices::Geolocation::IGeocircle * queryCircle, Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> ** result) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Services::Maps::OfflineMaps::OfflineMapPackage> { using default_interface = Windows::Services::Maps::OfflineMaps::IOfflineMapPackage; };
template <> struct traits<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> { using default_interface = Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult; };
template <> struct traits<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult> { using default_interface = Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult; };

}

namespace Windows::Services::Maps::OfflineMaps {

template <typename D>
struct WINRT_EBO impl_IOfflineMapPackage
{
    Windows::Services::Maps::OfflineMaps::OfflineMapPackageStatus Status() const;
    hstring DisplayName() const;
    hstring EnclosingRegionName() const;
    uint64_t EstimatedSizeInBytes() const;
    void StatusChanged(event_token token) const;
    event_token StatusChanged(const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::OfflineMaps::OfflineMapPackage, Windows::Foundation::IInspectable> & value) const;
    using StatusChanged_revoker = event_revoker<IOfflineMapPackage>;
    StatusChanged_revoker StatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Services::Maps::OfflineMaps::OfflineMapPackage, Windows::Foundation::IInspectable> & value) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult> RequestStartDownloadAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IOfflineMapPackageQueryResult
{
    Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryStatus Status() const;
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::OfflineMaps::OfflineMapPackage> Packages() const;
};

template <typename D>
struct WINRT_EBO impl_IOfflineMapPackageStartDownloadResult
{
    Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadStatus Status() const;
};

template <typename D>
struct WINRT_EBO impl_IOfflineMapPackageStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> FindPackagesAsync(const Windows::Devices::Geolocation::Geopoint & queryPoint) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> FindPackagesInBoundingBoxAsync(const Windows::Devices::Geolocation::GeoboundingBox & queryBoundingBox) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> FindPackagesInGeocircleAsync(const Windows::Devices::Geolocation::Geocircle & queryCircle) const;
};

}

namespace impl {

template <> struct traits<Windows::Services::Maps::OfflineMaps::IOfflineMapPackage>
{
    using abi = ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackage;
    template <typename D> using consume = Windows::Services::Maps::OfflineMaps::impl_IOfflineMapPackage<D>;
};

template <> struct traits<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult>
{
    using abi = ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult;
    template <typename D> using consume = Windows::Services::Maps::OfflineMaps::impl_IOfflineMapPackageQueryResult<D>;
};

template <> struct traits<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult>
{
    using abi = ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult;
    template <typename D> using consume = Windows::Services::Maps::OfflineMaps::impl_IOfflineMapPackageStartDownloadResult<D>;
};

template <> struct traits<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics>
{
    using abi = ABI::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics;
    template <typename D> using consume = Windows::Services::Maps::OfflineMaps::impl_IOfflineMapPackageStatics<D>;
};

template <> struct traits<Windows::Services::Maps::OfflineMaps::OfflineMapPackage>
{
    using abi = ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackage;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Maps.OfflineMaps.OfflineMapPackage"; }
};

template <> struct traits<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult>
{
    using abi = ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Maps.OfflineMaps.OfflineMapPackageQueryResult"; }
};

template <> struct traits<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult>
{
    using abi = ABI::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Services.Maps.OfflineMaps.OfflineMapPackageStartDownloadResult"; }
};

}

}
