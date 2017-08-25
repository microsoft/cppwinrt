// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Management::Deployment {

struct PackageVolume;

}

WINRT_EXPORT namespace winrt::Windows::System {

struct User;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Store::Preview::InstallControl {

enum class AppInstallState
{
    Pending = 0,
    Starting = 1,
    AcquiringLicense = 2,
    Downloading = 3,
    RestoringData = 4,
    Installing = 5,
    Completed = 6,
    Canceled = 7,
    Paused = 8,
    Error = 9,
    PausedLowBattery = 10,
    PausedWiFiRecommended = 11,
    PausedWiFiRequired = 12,
    ReadyToDownload = 13,
};

enum class AppInstallType
{
    Install = 0,
    Update = 1,
    Repair = 2,
};

enum class AutoUpdateSetting
{
    Disabled = 0,
    Enabled = 1,
    DisabledByPolicy = 2,
    EnabledByPolicy = 3,
};

enum class GetEntitlementStatus
{
    Succeeded = 0,
    NoStoreAccount = 1,
    NetworkError = 2,
    ServerError = 3,
};

struct IAppInstallItem;
struct IAppInstallItem2;
struct IAppInstallItem3;
struct IAppInstallManager;
struct IAppInstallManager2;
struct IAppInstallManager3;
struct IAppInstallManager4;
struct IAppInstallManager5;
struct IAppInstallManagerItemEventArgs;
struct IAppInstallStatus;
struct IAppInstallStatus2;
struct IGetEntitlementResult;
struct AppInstallItem;
struct AppInstallManager;
struct AppInstallManagerItemEventArgs;
struct AppInstallStatus;
struct GetEntitlementResult;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager5>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallStatus>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallType>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementStatus>{ using type = enum_category; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem2" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem3>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem3" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager2" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager3" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager4" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager5>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager5" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManagerItemEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallStatus" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallStatus2" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IGetEntitlementResult" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallItem" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManagerItemEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallStatus" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.GetEntitlementResult" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallState" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallType>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallType" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.AutoUpdateSetting" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.GetEntitlementStatus" }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>{ static constexpr GUID value{ 0x49D3DFAB,0x168A,0x4CBF,{ 0xA9,0x3A,0x9E,0x44,0x8C,0x82,0x73,0x7D } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2>{ static constexpr GUID value{ 0xD3972AF8,0x40C0,0x4FD7,{ 0xAA,0x6C,0x0A,0xA1,0x3C,0xA6,0x18,0x8C } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem3>{ static constexpr GUID value{ 0x6F3DC998,0xDD47,0x433C,{ 0x92,0x34,0x56,0x01,0x72,0xD6,0x7A,0x45 } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>{ static constexpr GUID value{ 0x9353E170,0x8441,0x4B45,{ 0xBD,0x72,0x7C,0x2F,0xA9,0x25,0xBE,0xEE } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>{ static constexpr GUID value{ 0x16937851,0xED37,0x480D,{ 0x83,0x14,0x52,0xE2,0x7C,0x03,0xF0,0x4A } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3>{ static constexpr GUID value{ 0x95B24B17,0xE96A,0x4D0E,{ 0x84,0xE1,0xC8,0xCB,0x41,0x7A,0x01,0x78 } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4>{ static constexpr GUID value{ 0x260A2A16,0x5A9E,0x4EBD,{ 0xB9,0x44,0xF2,0xBA,0x75,0xC3,0x11,0x59 } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager5>{ static constexpr GUID value{ 0x3CD7BE4C,0x1BE9,0x4F7F,{ 0xB6,0x75,0xAA,0x1D,0x64,0xA5,0x29,0xB2 } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs>{ static constexpr GUID value{ 0xBC505743,0x4674,0x4DD1,{ 0x95,0x7E,0xC2,0x56,0x82,0x08,0x6A,0x14 } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus>{ static constexpr GUID value{ 0x936DCCFA,0x2450,0x4126,{ 0x88,0xB1,0x61,0x27,0xA6,0x44,0xDD,0x5C } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2>{ static constexpr GUID value{ 0x96E7818A,0x5E92,0x4AA9,{ 0x8E,0xDC,0x58,0xFE,0xD4,0xB8,0x7E,0x00 } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult>{ static constexpr GUID value{ 0x74FC843F,0x1A9E,0x4609,{ 0x8E,0x4D,0x81,0x90,0x86,0xD0,0x8A,0x3D } }; };
template <> struct default_interface<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>{ using type = Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem; };
template <> struct default_interface<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager>{ using type = Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager; };
template <> struct default_interface<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs>{ using type = Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallStatus>{ using type = Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus; };
template <> struct default_interface<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult>{ using type = Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem
{
    hstring ProductId() const;
    hstring PackageFamilyName() const;
    Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallType InstallType() const;
    bool IsUserInitiated() const;
    Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallStatus GetCurrentStatus() const;
    void Cancel() const;
    void Pause() const;
    void Restart() const;
    event_token Completed(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::Foundation::IInspectable> const& handler) const;
    using Completed_revoker = event_revoker<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>;
    Completed_revoker Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::Foundation::IInspectable> const& handler) const;
    void Completed(event_token const& token) const;
    event_token StatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::Foundation::IInspectable> const& handler) const;
    using StatusChanged_revoker = event_revoker<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>;
    StatusChanged_revoker StatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::Foundation::IInspectable> const& handler) const;
    void StatusChanged(event_token const& token) const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem2
{
    void Cancel(param::hstring const& correlationVector) const;
    void Pause(param::hstring const& correlationVector) const;
    void Restart(param::hstring const& correlationVector) const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem3
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> Children() const;
    bool ItemOperationsMightAffectOtherItems() const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem3> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> AppInstallItems() const;
    void Cancel(param::hstring const& productId) const;
    void Pause(param::hstring const& productId) const;
    void Restart(param::hstring const& productId) const;
    event_token ItemCompleted(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> const& handler) const;
    using ItemCompleted_revoker = event_revoker<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>;
    ItemCompleted_revoker ItemCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> const& handler) const;
    void ItemCompleted(event_token const& token) const;
    event_token ItemStatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> const& handler) const;
    using ItemStatusChanged_revoker = event_revoker<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>;
    ItemStatusChanged_revoker ItemStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> const& handler) const;
    void ItemStatusChanged(event_token const& token) const;
    Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting AutoUpdateSetting() const;
    void AutoUpdateSetting(Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting const& value) const;
    hstring AcquisitionIdentity() const;
    void AcquisitionIdentity(param::hstring const& value) const;
    Windows::Foundation::IAsyncOperation<bool> GetIsApplicableAsync(param::hstring const& productId, param::hstring const& skuId) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> StartAppInstallAsync(param::hstring const& productId, param::hstring const& skuId, bool repair, bool forceUseOfNonRemovableStorage) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> UpdateAppByPackageFamilyNameAsync(param::hstring const& packageFamilyName) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> SearchForUpdatesAsync(param::hstring const& productId, param::hstring const& skuId) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> SearchForAllUpdatesAsync() const;
    Windows::Foundation::IAsyncOperation<bool> IsStoreBlockedByPolicyAsync(param::hstring const& storeClientName, param::hstring const& storeClientPublisher) const;
    Windows::Foundation::IAsyncOperation<bool> GetIsAppAllowedToInstallAsync(param::hstring const& productId) const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager2
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> StartAppInstallAsync(param::hstring const& productId, param::hstring const& skuId, bool repair, bool forceUseOfNonRemovableStorage, param::hstring const& catalogId, param::hstring const& bundleId, param::hstring const& correlationVector) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> UpdateAppByPackageFamilyNameAsync(param::hstring const& packageFamilyName, param::hstring const& correlationVector) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> SearchForUpdatesAsync(param::hstring const& productId, param::hstring const& skuId, param::hstring const& catalogId, param::hstring const& correlationVector) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> SearchForAllUpdatesAsync(param::hstring const& correlationVector) const;
    Windows::Foundation::IAsyncOperation<bool> GetIsAppAllowedToInstallAsync(param::hstring const& productId, param::hstring const& skuId, param::hstring const& catalogId, param::hstring const& correlationVector) const;
    void Cancel(param::hstring const& productId, param::hstring const& correlationVector) const;
    void Pause(param::hstring const& productId, param::hstring const& correlationVector) const;
    void Restart(param::hstring const& productId, param::hstring const& correlationVector) const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager3
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> StartProductInstallAsync(param::hstring const& productId, param::hstring const& catalogId, param::hstring const& flightId, param::hstring const& clientId, bool repair, bool forceUseOfNonRemovableStorage, param::hstring const& correlationVector, Windows::Management::Deployment::PackageVolume const& targetVolume) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> StartProductInstallForUserAsync(Windows::System::User const& user, param::hstring const& productId, param::hstring const& catalogId, param::hstring const& flightId, param::hstring const& clientId, bool repair, bool forceUseOfNonRemovableStorage, param::hstring const& correlationVector, Windows::Management::Deployment::PackageVolume const& targetVolume) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> UpdateAppByPackageFamilyNameForUserAsync(Windows::System::User const& user, param::hstring const& packageFamilyName, param::hstring const& correlationVector) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> SearchForUpdatesForUserAsync(Windows::System::User const& user, param::hstring const& productId, param::hstring const& skuId, param::hstring const& catalogId, param::hstring const& correlationVector) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> SearchForAllUpdatesForUserAsync(Windows::System::User const& user, param::hstring const& correlationVector) const;
    Windows::Foundation::IAsyncOperation<bool> GetIsAppAllowedToInstallForUserAsync(Windows::System::User const& user, param::hstring const& productId, param::hstring const& skuId, param::hstring const& catalogId, param::hstring const& correlationVector) const;
    Windows::Foundation::IAsyncOperation<bool> GetIsApplicableForUserAsync(Windows::System::User const& user, param::hstring const& productId, param::hstring const& skuId) const;
    void MoveToFrontOfDownloadQueue(param::hstring const& productId, param::hstring const& correlationVector) const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager4
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult> GetFreeUserEntitlementAsync(param::hstring const& storeId, param::hstring const& campaignId, param::hstring const& correlationVector) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult> GetFreeUserEntitlementForUserAsync(Windows::System::User const& user, param::hstring const& storeId, param::hstring const& campaignId, param::hstring const& correlationVector) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult> GetFreeDeviceEntitlementAsync(param::hstring const& storeId, param::hstring const& campaignId, param::hstring const& correlationVector) const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager4<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager5
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> AppInstallItemsWithGroupSupport() const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager5> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager5<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManagerItemEventArgs
{
    Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem Item() const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManagerItemEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus
{
    Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState InstallState() const;
    uint64_t DownloadSizeInBytes() const;
    uint64_t BytesDownloaded() const;
    double PercentComplete() const;
    HRESULT ErrorCode() const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus2
{
    Windows::System::User User() const;
    bool ReadyForLaunch() const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IGetEntitlementResult
{
    Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementStatus Status() const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IGetEntitlementResult<D>; };

template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ProductId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PackageFamilyName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_InstallType(abi_t<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallType>* value) = 0;
    virtual HRESULT __stdcall get_IsUserInitiated(bool* value) = 0;
    virtual HRESULT __stdcall GetCurrentStatus(::IUnknown** result) = 0;
    virtual HRESULT __stdcall Cancel() = 0;
    virtual HRESULT __stdcall Pause() = 0;
    virtual HRESULT __stdcall Restart() = 0;
    virtual HRESULT __stdcall add_Completed(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Completed(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_StatusChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_StatusChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CancelWithTelemetry(HSTRING correlationVector) = 0;
    virtual HRESULT __stdcall PauseWithTelemetry(HSTRING correlationVector) = 0;
    virtual HRESULT __stdcall RestartWithTelemetry(HSTRING correlationVector) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Children(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ItemOperationsMightAffectOtherItems(bool* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AppInstallItems(::IUnknown** value) = 0;
    virtual HRESULT __stdcall Cancel(HSTRING productId) = 0;
    virtual HRESULT __stdcall Pause(HSTRING productId) = 0;
    virtual HRESULT __stdcall Restart(HSTRING productId) = 0;
    virtual HRESULT __stdcall add_ItemCompleted(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ItemCompleted(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ItemStatusChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ItemStatusChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_AutoUpdateSetting(abi_t<Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting>* value) = 0;
    virtual HRESULT __stdcall put_AutoUpdateSetting(abi_t<Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting> value) = 0;
    virtual HRESULT __stdcall get_AcquisitionIdentity(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_AcquisitionIdentity(HSTRING value) = 0;
    virtual HRESULT __stdcall GetIsApplicableAsync(HSTRING productId, HSTRING skuId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall StartAppInstallAsync(HSTRING productId, HSTRING skuId, bool repair, bool forceUseOfNonRemovableStorage, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall UpdateAppByPackageFamilyNameAsync(HSTRING packageFamilyName, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SearchForUpdatesAsync(HSTRING productId, HSTRING skuId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SearchForAllUpdatesAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall IsStoreBlockedByPolicyAsync(HSTRING storeClientName, HSTRING storeClientPublisher, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetIsAppAllowedToInstallAsync(HSTRING productId, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall StartAppInstallWithTelemetryAsync(HSTRING productId, HSTRING skuId, bool repair, bool forceUseOfNonRemovableStorage, HSTRING catalogId, HSTRING bundleId, HSTRING correlationVector, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall UpdateAppByPackageFamilyNameWithTelemetryAsync(HSTRING packageFamilyName, HSTRING correlationVector, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SearchForUpdatesWithTelemetryAsync(HSTRING productId, HSTRING skuId, HSTRING catalogId, HSTRING correlationVector, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SearchForAllUpdatesWithTelemetryAsync(HSTRING correlationVector, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetIsAppAllowedToInstallWithTelemetryAsync(HSTRING productId, HSTRING skuId, HSTRING catalogId, HSTRING correlationVector, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CancelWithTelemetry(HSTRING productId, HSTRING correlationVector) = 0;
    virtual HRESULT __stdcall PauseWithTelemetry(HSTRING productId, HSTRING correlationVector) = 0;
    virtual HRESULT __stdcall RestartWithTelemetry(HSTRING productId, HSTRING correlationVector) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall StartProductInstallAsync(HSTRING productId, HSTRING catalogId, HSTRING flightId, HSTRING clientId, bool repair, bool forceUseOfNonRemovableStorage, HSTRING correlationVector, ::IUnknown* targetVolume, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall StartProductInstallForUserAsync(::IUnknown* user, HSTRING productId, HSTRING catalogId, HSTRING flightId, HSTRING clientId, bool repair, bool forceUseOfNonRemovableStorage, HSTRING correlationVector, ::IUnknown* targetVolume, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall UpdateAppByPackageFamilyNameForUserAsync(::IUnknown* user, HSTRING packageFamilyName, HSTRING correlationVector, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SearchForUpdatesForUserAsync(::IUnknown* user, HSTRING productId, HSTRING skuId, HSTRING catalogId, HSTRING correlationVector, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SearchForAllUpdatesForUserAsync(::IUnknown* user, HSTRING correlationVector, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetIsAppAllowedToInstallForUserAsync(::IUnknown* user, HSTRING productId, HSTRING skuId, HSTRING catalogId, HSTRING correlationVector, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetIsApplicableForUserAsync(::IUnknown* user, HSTRING productId, HSTRING skuId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall MoveToFrontOfDownloadQueue(HSTRING productId, HSTRING correlationVector) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetFreeUserEntitlementAsync(HSTRING storeId, HSTRING campaignId, HSTRING correlationVector, ::IUnknown** ppAsyncOperation) = 0;
    virtual HRESULT __stdcall GetFreeUserEntitlementForUserAsync(::IUnknown* user, HSTRING storeId, HSTRING campaignId, HSTRING correlationVector, ::IUnknown** ppAsyncOperation) = 0;
    virtual HRESULT __stdcall GetFreeDeviceEntitlementAsync(HSTRING storeId, HSTRING campaignId, HSTRING correlationVector, ::IUnknown** ppAsyncOperation) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager5>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AppInstallItemsWithGroupSupport(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Item(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InstallState(abi_t<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState>* value) = 0;
    virtual HRESULT __stdcall get_DownloadSizeInBytes(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_BytesDownloaded(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_PercentComplete(double* value) = 0;
    virtual HRESULT __stdcall get_ErrorCode(abi_t<HRESULT>* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_User(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ReadyForLaunch(bool* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementStatus>* value) = 0;
};};

}
