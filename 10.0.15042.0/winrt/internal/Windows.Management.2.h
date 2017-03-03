// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Management.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
#define WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
template <> struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e")) __declspec(novtable) IIterable<hstring> : impl_IIterable<hstring> {};
#endif

#ifndef WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
#define WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
template <> struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e")) __declspec(novtable) IVectorView<hstring> : impl_IVectorView<hstring> {};
#endif

#ifndef WINRT_GENERIC_98b9acc1_4b56_532e_ac73_03d5291cca90
#define WINRT_GENERIC_98b9acc1_4b56_532e_ac73_03d5291cca90
template <> struct __declspec(uuid("98b9acc1-4b56-532e-ac73-03d5291cca90")) __declspec(novtable) IVector<hstring> : impl_IVector<hstring> {};
#endif

#ifndef WINRT_GENERIC_2b94038c_24aa_5261_80d8_c90f7970644a
#define WINRT_GENERIC_2b94038c_24aa_5261_80d8_c90f7970644a
template <> struct __declspec(uuid("2b94038c-24aa-5261-80d8-c90f7970644a")) __declspec(novtable) IVectorView<Windows::Management::MdmAlert> : impl_IVectorView<Windows::Management::MdmAlert> {};
#endif

#ifndef WINRT_GENERIC_a0a617dc_210c_529f_b5e9_29aeceebb5a8
#define WINRT_GENERIC_a0a617dc_210c_529f_b5e9_29aeceebb5a8
template <> struct __declspec(uuid("a0a617dc-210c-529f-b5e9-29aeceebb5a8")) __declspec(novtable) IIterable<Windows::Management::MdmAlert> : impl_IIterable<Windows::Management::MdmAlert> {};
#endif

#ifndef WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
#define WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
template <> struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236")) __declspec(novtable) IIterator<hstring> : impl_IIterator<hstring> {};
#endif

#ifndef WINRT_GENERIC_5a9f3193_1c55_58d5_90dd_a5109f00004e
#define WINRT_GENERIC_5a9f3193_1c55_58d5_90dd_a5109f00004e
template <> struct __declspec(uuid("5a9f3193-1c55-58d5-90dd-a5109f00004e")) __declspec(novtable) IVector<Windows::Management::MdmAlert> : impl_IVector<Windows::Management::MdmAlert> {};
#endif

#ifndef WINRT_GENERIC_b4a6ebea_b19f_5da5_b3d1_e859f1f4df17
#define WINRT_GENERIC_b4a6ebea_b19f_5da5_b3d1_e859f1f4df17
template <> struct __declspec(uuid("b4a6ebea-b19f-5da5-b3d1-e859f1f4df17")) __declspec(novtable) IIterator<Windows::Management::MdmAlert> : impl_IIterator<Windows::Management::MdmAlert> {};
#endif


}

namespace Windows::Management {

struct IMdmAlert :
    Windows::Foundation::IInspectable,
    impl::consume<IMdmAlert>
{
    IMdmAlert(std::nullptr_t = nullptr) noexcept {}
};

struct IMdmSession :
    Windows::Foundation::IInspectable,
    impl::consume<IMdmSession>
{
    IMdmSession(std::nullptr_t = nullptr) noexcept {}
};

struct IMdmSessionManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IMdmSessionManagerStatics>
{
    IMdmSessionManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
