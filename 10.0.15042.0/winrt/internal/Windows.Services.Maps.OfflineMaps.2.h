// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Services.Maps.OfflineMaps.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_2522ebc2_bd9f_551b_b90e_6c28152958a0
#define WINRT_GENERIC_2522ebc2_bd9f_551b_b90e_6c28152958a0
template <> struct __declspec(uuid("2522ebc2-bd9f-551b-b90e-6c28152958a0")) __declspec(novtable) IVectorView<Windows::Services::Maps::OfflineMaps::OfflineMapPackage> : impl_IVectorView<Windows::Services::Maps::OfflineMaps::OfflineMapPackage> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_2d2e0d20_826f_560c_b1c1_b4bd6fbf329a
#define WINRT_GENERIC_2d2e0d20_826f_560c_b1c1_b4bd6fbf329a
template <> struct __declspec(uuid("2d2e0d20-826f-560c-b1c1-b4bd6fbf329a")) __declspec(novtable) TypedEventHandler<Windows::Services::Maps::OfflineMaps::OfflineMapPackage, Windows::Foundation::IInspectable> : impl_TypedEventHandler<Windows::Services::Maps::OfflineMaps::OfflineMapPackage, Windows::Foundation::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_911272f7_f5aa_5393_94a1_e96adfad3da4
#define WINRT_GENERIC_911272f7_f5aa_5393_94a1_e96adfad3da4
template <> struct __declspec(uuid("911272f7-f5aa-5393-94a1-e96adfad3da4")) __declspec(novtable) IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult> : impl_IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult> {};
#endif

#ifndef WINRT_GENERIC_c01a663d_6d9b_5385_ae68_0a65a9544514
#define WINRT_GENERIC_c01a663d_6d9b_5385_ae68_0a65a9544514
template <> struct __declspec(uuid("c01a663d-6d9b-5385-ae68-0a65a9544514")) __declspec(novtable) IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> : impl_IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_8168fc50_f30b_5eba_9a9b_013d55d129b0
#define WINRT_GENERIC_8168fc50_f30b_5eba_9a9b_013d55d129b0
template <> struct __declspec(uuid("8168fc50-f30b-5eba-9a9b-013d55d129b0")) __declspec(novtable) IVector<Windows::Services::Maps::OfflineMaps::OfflineMapPackage> : impl_IVector<Windows::Services::Maps::OfflineMaps::OfflineMapPackage> {};
#endif

#ifndef WINRT_GENERIC_750f4d37_3766_5842_a425_ccd9b8d80786
#define WINRT_GENERIC_750f4d37_3766_5842_a425_ccd9b8d80786
template <> struct __declspec(uuid("750f4d37-3766-5842-a425-ccd9b8d80786")) __declspec(novtable) IIterator<Windows::Services::Maps::OfflineMaps::OfflineMapPackage> : impl_IIterator<Windows::Services::Maps::OfflineMaps::OfflineMapPackage> {};
#endif

#ifndef WINRT_GENERIC_7522287c_0af2_586c_bb3f_457c07984a6f
#define WINRT_GENERIC_7522287c_0af2_586c_bb3f_457c07984a6f
template <> struct __declspec(uuid("7522287c-0af2-586c-bb3f-457c07984a6f")) __declspec(novtable) IIterable<Windows::Services::Maps::OfflineMaps::OfflineMapPackage> : impl_IIterable<Windows::Services::Maps::OfflineMaps::OfflineMapPackage> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_8654a79e_c52f_5f98_af0a_522466c27246
#define WINRT_GENERIC_8654a79e_c52f_5f98_af0a_522466c27246
template <> struct __declspec(uuid("8654a79e-c52f-5f98-af0a-522466c27246")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult> : impl_AsyncOperationCompletedHandler<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult> {};
#endif

#ifndef WINRT_GENERIC_8a4df3c9_2595_5bec_8ba1_c1d955f168c0
#define WINRT_GENERIC_8a4df3c9_2595_5bec_8ba1_c1d955f168c0
template <> struct __declspec(uuid("8a4df3c9-2595-5bec-8ba1-c1d955f168c0")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> : impl_AsyncOperationCompletedHandler<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> {};
#endif


}

namespace Windows::Services::Maps::OfflineMaps {

struct IOfflineMapPackage :
    Windows::Foundation::IInspectable,
    impl::consume<IOfflineMapPackage>
{
    IOfflineMapPackage(std::nullptr_t = nullptr) noexcept {}
};

struct IOfflineMapPackageQueryResult :
    Windows::Foundation::IInspectable,
    impl::consume<IOfflineMapPackageQueryResult>
{
    IOfflineMapPackageQueryResult(std::nullptr_t = nullptr) noexcept {}
};

struct IOfflineMapPackageStartDownloadResult :
    Windows::Foundation::IInspectable,
    impl::consume<IOfflineMapPackageStartDownloadResult>
{
    IOfflineMapPackageStartDownloadResult(std::nullptr_t = nullptr) noexcept {}
};

struct IOfflineMapPackageStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IOfflineMapPackageStatics>
{
    IOfflineMapPackageStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
