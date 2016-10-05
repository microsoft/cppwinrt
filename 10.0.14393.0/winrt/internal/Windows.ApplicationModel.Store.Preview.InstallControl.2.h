// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.Store.Preview.InstallControl.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
#define WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
template <> struct __declspec(uuid("cdb5efb3-5788-509d-9be1-71ccb8a3362a")) __declspec(novtable) IAsyncOperation<bool> : impl_IAsyncOperation<bool> {};
#endif

#ifndef WINRT_GENERIC_92730467_501e_5b05_8826_926f86925b03
#define WINRT_GENERIC_92730467_501e_5b05_8826_926f86925b03
template <> struct __declspec(uuid("92730467-501e-5b05-8826-926f86925b03")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::IInspectable> : impl_TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::IInspectable> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_48d7f874_a83c_55db_b2e6_940be9569869
#define WINRT_GENERIC_48d7f874_a83c_55db_b2e6_940be9569869
template <> struct __declspec(uuid("48d7f874-a83c-55db-b2e6-940be9569869")) __declspec(novtable) IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> : impl_IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_abf1c837_dacd_5446_a032_3ee902880244
#define WINRT_GENERIC_abf1c837_dacd_5446_a032_3ee902880244
template <> struct __declspec(uuid("abf1c837-dacd-5446-a032-3ee902880244")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> {};
#endif

#ifndef WINRT_GENERIC_83b51cbf_35e0_59ad_ab3e_ffb3f03704f9
#define WINRT_GENERIC_83b51cbf_35e0_59ad_ab3e_ffb3f03704f9
template <> struct __declspec(uuid("83b51cbf-35e0-59ad-ab3e-ffb3f03704f9")) __declspec(novtable) IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> : impl_IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> {};
#endif

#ifndef WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
#define WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
template <> struct __declspec(uuid("c1d3d1a2-ae17-5a5f-b5a2-bdcc8844889a")) __declspec(novtable) AsyncOperationCompletedHandler<bool> : impl_AsyncOperationCompletedHandler<bool> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_ccaca81b_6cf7_56f0_b7ff_8ac5191e79bf
#define WINRT_GENERIC_ccaca81b_6cf7_56f0_b7ff_8ac5191e79bf
template <> struct __declspec(uuid("ccaca81b-6cf7-56f0-b7ff-8ac5191e79bf")) __declspec(novtable) IIterator<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> : impl_IIterator<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> {};
#endif

#ifndef WINRT_GENERIC_93e1cdc8_503f_55b1_915b_c0dc7888ce31
#define WINRT_GENERIC_93e1cdc8_503f_55b1_915b_c0dc7888ce31
template <> struct __declspec(uuid("93e1cdc8-503f-55b1-915b-c0dc7888ce31")) __declspec(novtable) IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> : impl_IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_a85c1ceb_0e8c_5422_b2ef_ad48ed338706
#define WINRT_GENERIC_a85c1ceb_0e8c_5422_b2ef_ad48ed338706
template <> struct __declspec(uuid("a85c1ceb-0e8c-5422-b2ef-ad48ed338706")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> : impl_AsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> {};
#endif

#ifndef WINRT_GENERIC_9267e107_2ac6_5e0d_86e9_3154f616c68b
#define WINRT_GENERIC_9267e107_2ac6_5e0d_86e9_3154f616c68b
template <> struct __declspec(uuid("9267e107-2ac6-5e0d-86e9-3154f616c68b")) __declspec(novtable) IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> : impl_IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> {};
#endif

#ifndef WINRT_GENERIC_f92bfe4e_cf96_54cf_ab89_388ca004b5a9
#define WINRT_GENERIC_f92bfe4e_cf96_54cf_ab89_388ca004b5a9
template <> struct __declspec(uuid("f92bfe4e-cf96-54cf-ab89-388ca004b5a9")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> : impl_AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> {};
#endif


}

namespace Windows::ApplicationModel::Store::Preview::InstallControl {

template <typename D>
struct WINRT_EBO impl_IAppInstallItem
{
    hstring ProductId() const;
    hstring PackageFamilyName() const;
    Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallType InstallType() const;
    bool IsUserInitiated() const;
    Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallStatus GetCurrentStatus() const;
    void Cancel() const;
    void Pause() const;
    void Restart() const;
    event_token Completed(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::IInspectable> & handler) const;
    using Completed_revoker = event_revoker<IAppInstallItem>;
    Completed_revoker Completed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::IInspectable> & handler) const;
    void Completed(event_token token) const;
    event_token StatusChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::IInspectable> & handler) const;
    using StatusChanged_revoker = event_revoker<IAppInstallItem>;
    StatusChanged_revoker StatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::IInspectable> & handler) const;
    void StatusChanged(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IAppInstallItem2
{
    void Cancel(hstring_ref correlationVector) const;
    void Pause(hstring_ref correlationVector) const;
    void Restart(hstring_ref correlationVector) const;
};

template <typename D>
struct WINRT_EBO impl_IAppInstallManager
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> AppInstallItems() const;
    void Cancel(hstring_ref productId) const;
    void Pause(hstring_ref productId) const;
    void Restart(hstring_ref productId) const;
    event_token ItemCompleted(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> & handler) const;
    using ItemCompleted_revoker = event_revoker<IAppInstallManager>;
    ItemCompleted_revoker ItemCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> & handler) const;
    void ItemCompleted(event_token token) const;
    event_token ItemStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> & handler) const;
    using ItemStatusChanged_revoker = event_revoker<IAppInstallManager>;
    ItemStatusChanged_revoker ItemStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> & handler) const;
    void ItemStatusChanged(event_token token) const;
    Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting AutoUpdateSetting() const;
    void AutoUpdateSetting(Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting value) const;
    hstring AcquisitionIdentity() const;
    void AcquisitionIdentity(hstring_ref value) const;
    Windows::Foundation::IAsyncOperation<bool> GetIsApplicableAsync(hstring_ref productId, hstring_ref skuId) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> StartAppInstallAsync(hstring_ref productId, hstring_ref skuId, bool repair, bool forceUseOfNonRemovableStorage) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> UpdateAppByPackageFamilyNameAsync(hstring_ref packageFamilyName) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> SearchForUpdatesAsync(hstring_ref productId, hstring_ref skuId) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> SearchForAllUpdatesAsync() const;
    Windows::Foundation::IAsyncOperation<bool> IsStoreBlockedByPolicyAsync(hstring_ref storeClientName, hstring_ref storeClientPublisher) const;
    Windows::Foundation::IAsyncOperation<bool> GetIsAppAllowedToInstallAsync(hstring_ref productId) const;
};

template <typename D>
struct WINRT_EBO impl_IAppInstallManager2
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> StartAppInstallAsync(hstring_ref productId, hstring_ref skuId, bool repair, bool forceUseOfNonRemovableStorage, hstring_ref catalogId, hstring_ref bundleId, hstring_ref correlationVector) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> UpdateAppByPackageFamilyNameAsync(hstring_ref packageFamilyName, hstring_ref correlationVector) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> SearchForUpdatesAsync(hstring_ref productId, hstring_ref skuId, hstring_ref catalogId, hstring_ref correlationVector) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> SearchForAllUpdatesAsync(hstring_ref correlationVector) const;
    Windows::Foundation::IAsyncOperation<bool> GetIsAppAllowedToInstallAsync(hstring_ref productId, hstring_ref skuId, hstring_ref catalogId, hstring_ref correlationVector) const;
    void Cancel(hstring_ref productId, hstring_ref correlationVector) const;
    void Pause(hstring_ref productId, hstring_ref correlationVector) const;
    void Restart(hstring_ref productId, hstring_ref correlationVector) const;
};

template <typename D>
struct WINRT_EBO impl_IAppInstallManager3
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> StartProductInstallAsync(hstring_ref productId, hstring_ref catalogId, hstring_ref flightId, hstring_ref clientId, bool repair, bool forceUseOfNonRemovableStorage, hstring_ref correlationVector, const Windows::Management::Deployment::PackageVolume & targetVolume) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> StartProductInstallForUserAsync(const Windows::System::User & user, hstring_ref productId, hstring_ref catalogId, hstring_ref flightId, hstring_ref clientId, bool repair, bool forceUseOfNonRemovableStorage, hstring_ref correlationVector, const Windows::Management::Deployment::PackageVolume & targetVolume) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> UpdateAppByPackageFamilyNameForUserAsync(const Windows::System::User & user, hstring_ref packageFamilyName, hstring_ref correlationVector) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> SearchForUpdatesForUserAsync(const Windows::System::User & user, hstring_ref productId, hstring_ref skuId, hstring_ref catalogId, hstring_ref correlationVector) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> SearchForAllUpdatesForUserAsync(const Windows::System::User & user, hstring_ref correlationVector) const;
    Windows::Foundation::IAsyncOperation<bool> GetIsAppAllowedToInstallForUserAsync(const Windows::System::User & user, hstring_ref productId, hstring_ref skuId, hstring_ref catalogId, hstring_ref correlationVector) const;
    Windows::Foundation::IAsyncOperation<bool> GetIsApplicableForUserAsync(const Windows::System::User & user, hstring_ref productId, hstring_ref skuId) const;
    void MoveToFrontOfDownloadQueue(hstring_ref productId, hstring_ref correlationVector) const;
};

template <typename D>
struct WINRT_EBO impl_IAppInstallManagerItemEventArgs
{
    Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem Item() const;
};

template <typename D>
struct WINRT_EBO impl_IAppInstallStatus
{
    Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState InstallState() const;
    uint64_t DownloadSizeInBytes() const;
    uint64_t BytesDownloaded() const;
    double PercentComplete() const;
    HRESULT ErrorCode() const;
};

template <typename D>
struct WINRT_EBO impl_IAppInstallStatus2
{
    Windows::System::User User() const;
    bool ReadyForLaunch() const;
};

struct IAppInstallItem :
    Windows::IInspectable,
    impl::consume<IAppInstallItem>
{
    IAppInstallItem(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppInstallItem>(m_ptr); }
};

struct IAppInstallItem2 :
    Windows::IInspectable,
    impl::consume<IAppInstallItem2>
{
    IAppInstallItem2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppInstallItem2>(m_ptr); }
};

struct IAppInstallManager :
    Windows::IInspectable,
    impl::consume<IAppInstallManager>
{
    IAppInstallManager(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppInstallManager>(m_ptr); }
};

struct IAppInstallManager2 :
    Windows::IInspectable,
    impl::consume<IAppInstallManager2>
{
    IAppInstallManager2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppInstallManager2>(m_ptr); }
};

struct IAppInstallManager3 :
    Windows::IInspectable,
    impl::consume<IAppInstallManager3>
{
    IAppInstallManager3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppInstallManager3>(m_ptr); }
};

struct IAppInstallManagerItemEventArgs :
    Windows::IInspectable,
    impl::consume<IAppInstallManagerItemEventArgs>
{
    IAppInstallManagerItemEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppInstallManagerItemEventArgs>(m_ptr); }
};

struct IAppInstallStatus :
    Windows::IInspectable,
    impl::consume<IAppInstallStatus>
{
    IAppInstallStatus(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppInstallStatus>(m_ptr); }
};

struct IAppInstallStatus2 :
    Windows::IInspectable,
    impl::consume<IAppInstallStatus2>
{
    IAppInstallStatus2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppInstallStatus2>(m_ptr); }
};

}

}
