// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Services.Cortana.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
#define WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
template <> struct __declspec(uuid("cdb5efb3-5788-509d-9be1-71ccb8a3362a")) __declspec(novtable) IAsyncOperation<bool> : impl_IAsyncOperation<bool> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_36a12eae_2e24_5e07_bfd0_344a92990916
#define WINRT_GENERIC_36a12eae_2e24_5e07_bfd0_344a92990916
template <> struct __declspec(uuid("36a12eae-2e24-5e07-bfd0-344a92990916")) __declspec(novtable) IIterable<winrt::Windows::Services::Cortana::CortanaPermission> : impl_IIterable<winrt::Windows::Services::Cortana::CortanaPermission> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_838a3dd0_f0a3_508f_846a_d3c19e4fe7a0
#define WINRT_GENERIC_838a3dd0_f0a3_508f_846a_d3c19e4fe7a0
template <> struct __declspec(uuid("838a3dd0-f0a3-508f-846a-d3c19e4fe7a0")) __declspec(novtable) IAsyncOperation<winrt::Windows::Services::Cortana::CortanaPermissionsChangeResult> : impl_IAsyncOperation<winrt::Windows::Services::Cortana::CortanaPermissionsChangeResult> {};
#endif

#ifndef WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
#define WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
template <> struct __declspec(uuid("c1d3d1a2-ae17-5a5f-b5a2-bdcc8844889a")) __declspec(novtable) AsyncOperationCompletedHandler<bool> : impl_AsyncOperationCompletedHandler<bool> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_f21a49cc_f0fd_50b6_bd23_9233a159e6d4
#define WINRT_GENERIC_f21a49cc_f0fd_50b6_bd23_9233a159e6d4
template <> struct __declspec(uuid("f21a49cc-f0fd-50b6-bd23-9233a159e6d4")) __declspec(novtable) IVector<winrt::Windows::Services::Cortana::CortanaPermission> : impl_IVector<winrt::Windows::Services::Cortana::CortanaPermission> {};
#endif

#ifndef WINRT_GENERIC_06c95fee_01b8_587b_8940_e88fc2da9a4b
#define WINRT_GENERIC_06c95fee_01b8_587b_8940_e88fc2da9a4b
template <> struct __declspec(uuid("06c95fee-01b8-587b-8940-e88fc2da9a4b")) __declspec(novtable) IVectorView<winrt::Windows::Services::Cortana::CortanaPermission> : impl_IVectorView<winrt::Windows::Services::Cortana::CortanaPermission> {};
#endif

#ifndef WINRT_GENERIC_0f1ac33c_511a_52e8_af09_d89f7004e8c5
#define WINRT_GENERIC_0f1ac33c_511a_52e8_af09_d89f7004e8c5
template <> struct __declspec(uuid("0f1ac33c-511a-52e8-af09-d89f7004e8c5")) __declspec(novtable) IIterator<winrt::Windows::Services::Cortana::CortanaPermission> : impl_IIterator<winrt::Windows::Services::Cortana::CortanaPermission> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_ec1c6586_5e0d_5bc0_b84f_20052c5ac7a9
#define WINRT_GENERIC_ec1c6586_5e0d_5bc0_b84f_20052c5ac7a9
template <> struct __declspec(uuid("ec1c6586-5e0d-5bc0-b84f-20052c5ac7a9")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::Services::Cortana::CortanaPermissionsChangeResult> : impl_AsyncOperationCompletedHandler<winrt::Windows::Services::Cortana::CortanaPermissionsChangeResult> {};
#endif


}

namespace Windows::Services::Cortana {

struct ICortanaPermissionsManager :
    Windows::Foundation::IInspectable,
    impl::consume<ICortanaPermissionsManager>
{
    ICortanaPermissionsManager(std::nullptr_t = nullptr) noexcept {}
};

struct ICortanaPermissionsManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume<ICortanaPermissionsManagerStatics>
{
    ICortanaPermissionsManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ICortanaSettings :
    Windows::Foundation::IInspectable,
    impl::consume<ICortanaSettings>
{
    ICortanaSettings(std::nullptr_t = nullptr) noexcept {}
};

struct ICortanaSettingsStatics :
    Windows::Foundation::IInspectable,
    impl::consume<ICortanaSettingsStatics>
{
    ICortanaSettingsStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
