// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Geolocation {

struct GeoboundingBox;
struct Geocircle;
struct Geopoint;

}

WINRT_EXPORT namespace winrt::Windows::Services::Maps::OfflineMaps {

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

struct IOfflineMapPackage;
struct IOfflineMapPackageQueryResult;
struct IOfflineMapPackageStartDownloadResult;
struct IOfflineMapPackageStatics;
struct OfflineMapPackage;
struct OfflineMapPackageQueryResult;
struct OfflineMapPackageStartDownloadResult;

}

namespace winrt::impl {

template <> struct category<Windows::Services::Maps::OfflineMaps::IOfflineMapPackage>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics>{ using type = interface_category; };
template <> struct category<Windows::Services::Maps::OfflineMaps::OfflineMapPackage>{ using type = class_category; };
template <> struct category<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult>{ using type = class_category; };
template <> struct category<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult>{ using type = class_category; };
template <> struct category<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryStatus>{ using type = enum_category; };
template <> struct category<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadStatus>{ using type = enum_category; };
template <> struct category<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStatus>{ using type = enum_category; };
template <> struct name<Windows::Services::Maps::OfflineMaps::IOfflineMapPackage>{ static constexpr auto & value{ L"Windows.Services.Maps.OfflineMaps.IOfflineMapPackage" }; };
template <> struct name<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult>{ static constexpr auto & value{ L"Windows.Services.Maps.OfflineMaps.IOfflineMapPackageQueryResult" }; };
template <> struct name<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult>{ static constexpr auto & value{ L"Windows.Services.Maps.OfflineMaps.IOfflineMapPackageStartDownloadResult" }; };
template <> struct name<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics>{ static constexpr auto & value{ L"Windows.Services.Maps.OfflineMaps.IOfflineMapPackageStatics" }; };
template <> struct name<Windows::Services::Maps::OfflineMaps::OfflineMapPackage>{ static constexpr auto & value{ L"Windows.Services.Maps.OfflineMaps.OfflineMapPackage" }; };
template <> struct name<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult>{ static constexpr auto & value{ L"Windows.Services.Maps.OfflineMaps.OfflineMapPackageQueryResult" }; };
template <> struct name<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult>{ static constexpr auto & value{ L"Windows.Services.Maps.OfflineMaps.OfflineMapPackageStartDownloadResult" }; };
template <> struct name<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryStatus>{ static constexpr auto & value{ L"Windows.Services.Maps.OfflineMaps.OfflineMapPackageQueryStatus" }; };
template <> struct name<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadStatus>{ static constexpr auto & value{ L"Windows.Services.Maps.OfflineMaps.OfflineMapPackageStartDownloadStatus" }; };
template <> struct name<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStatus>{ static constexpr auto & value{ L"Windows.Services.Maps.OfflineMaps.OfflineMapPackageStatus" }; };
template <> struct guid<Windows::Services::Maps::OfflineMaps::IOfflineMapPackage>{ static constexpr GUID value{ 0xA797673B,0xA5B5,0x4144,{ 0xB5,0x25,0xE6,0x8C,0x88,0x62,0x66,0x4B } }; };
template <> struct guid<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult>{ static constexpr GUID value{ 0x55585411,0x39E1,0x4E41,{ 0xA4,0xE1,0x5F,0x48,0x72,0xBE,0xE1,0x99 } }; };
template <> struct guid<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult>{ static constexpr GUID value{ 0xD965B918,0xD4D6,0x4AFE,{ 0x93,0x78,0x3E,0xC7,0x1E,0xF1,0x1C,0x3D } }; };
template <> struct guid<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics>{ static constexpr GUID value{ 0x185E7922,0xA831,0x4AB0,{ 0x94,0x1F,0x69,0x98,0xFA,0x92,0x92,0x85 } }; };
template <> struct default_interface<Windows::Services::Maps::OfflineMaps::OfflineMapPackage>{ using type = Windows::Services::Maps::OfflineMaps::IOfflineMapPackage; };
template <> struct default_interface<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult>{ using type = Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult; };
template <> struct default_interface<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult>{ using type = Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult; };

template <typename D>
struct consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackage
{
    Windows::Services::Maps::OfflineMaps::OfflineMapPackageStatus Status() const;
    hstring DisplayName() const;
    hstring EnclosingRegionName() const;
    uint64_t EstimatedSizeInBytes() const;
    void StatusChanged(event_token const& token) const;
    event_token StatusChanged(Windows::Foundation::TypedEventHandler<Windows::Services::Maps::OfflineMaps::OfflineMapPackage, Windows::Foundation::IInspectable> const& value) const;
    using StatusChanged_revoker = event_revoker<Windows::Services::Maps::OfflineMaps::IOfflineMapPackage>;
    StatusChanged_revoker StatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::Maps::OfflineMaps::OfflineMapPackage, Windows::Foundation::IInspectable> const& value) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult> RequestStartDownloadAsync() const;
};
template <> struct consume<Windows::Services::Maps::OfflineMaps::IOfflineMapPackage> { template <typename D> using type = consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackage<D>; };

template <typename D>
struct consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageQueryResult
{
    Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryStatus Status() const;
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::OfflineMaps::OfflineMapPackage> Packages() const;
};
template <> struct consume<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult> { template <typename D> using type = consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageQueryResult<D>; };

template <typename D>
struct consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageStartDownloadResult
{
    Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadStatus Status() const;
};
template <> struct consume<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult> { template <typename D> using type = consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageStartDownloadResult<D>; };

template <typename D>
struct consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> FindPackagesAsync(Windows::Devices::Geolocation::Geopoint const& queryPoint) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> FindPackagesInBoundingBoxAsync(Windows::Devices::Geolocation::GeoboundingBox const& queryBoundingBox) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> FindPackagesInGeocircleAsync(Windows::Devices::Geolocation::Geocircle const& queryCircle) const;
};
template <> struct consume<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics> { template <typename D> using type = consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageStatics<D>; };

template <> struct abi<Windows::Services::Maps::OfflineMaps::IOfflineMapPackage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStatus>* value) = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_EnclosingRegionName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_EstimatedSizeInBytes(uint64_t* value) = 0;
    virtual HRESULT __stdcall remove_StatusChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_StatusChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall RequestStartDownloadAsync(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryStatus>* value) = 0;
    virtual HRESULT __stdcall get_Packages(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadStatus>* value) = 0;
};};

template <> struct abi<Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FindPackagesAsync(::IUnknown* queryPoint, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall FindPackagesInBoundingBoxAsync(::IUnknown* queryBoundingBox, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall FindPackagesInGeocircleAsync(::IUnknown* queryCircle, ::IUnknown** result) = 0;
};};

}
