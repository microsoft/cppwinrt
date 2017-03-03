// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Graphics.Display.Core.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
#define WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
template <> struct __declspec(uuid("cdb5efb3-5788-509d-9be1-71ccb8a3362a")) __declspec(novtable) IAsyncOperation<bool> : impl_IAsyncOperation<bool> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_7d0e7c64_df0e_539a_ab5f_3c260026c5ce
#define WINRT_GENERIC_7d0e7c64_df0e_539a_ab5f_3c260026c5ce
template <> struct __declspec(uuid("7d0e7c64-df0e-539a-ab5f-3c260026c5ce")) __declspec(novtable) IVectorView<Windows::Graphics::Display::Core::HdmiDisplayMode> : impl_IVectorView<Windows::Graphics::Display::Core::HdmiDisplayMode> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_d109932b_9ce1_5cdd_94c7_93c60c833aa3
#define WINRT_GENERIC_d109932b_9ce1_5cdd_94c7_93c60c833aa3
template <> struct __declspec(uuid("d109932b-9ce1-5cdd-94c7-93c60c833aa3")) __declspec(novtable) TypedEventHandler<Windows::Graphics::Display::Core::HdmiDisplayInformation, Windows::Foundation::IInspectable> : impl_TypedEventHandler<Windows::Graphics::Display::Core::HdmiDisplayInformation, Windows::Foundation::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
#define WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
template <> struct __declspec(uuid("c1d3d1a2-ae17-5a5f-b5a2-bdcc8844889a")) __declspec(novtable) AsyncOperationCompletedHandler<bool> : impl_AsyncOperationCompletedHandler<bool> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_361306c9_ca16_55a6_9542_6f95c5a28b82
#define WINRT_GENERIC_361306c9_ca16_55a6_9542_6f95c5a28b82
template <> struct __declspec(uuid("361306c9-ca16-55a6-9542-6f95c5a28b82")) __declspec(novtable) IVector<Windows::Graphics::Display::Core::HdmiDisplayMode> : impl_IVector<Windows::Graphics::Display::Core::HdmiDisplayMode> {};
#endif

#ifndef WINRT_GENERIC_d66eb831_e22c_5ee3_af45_e1c03de4bc62
#define WINRT_GENERIC_d66eb831_e22c_5ee3_af45_e1c03de4bc62
template <> struct __declspec(uuid("d66eb831-e22c-5ee3-af45-e1c03de4bc62")) __declspec(novtable) IIterator<Windows::Graphics::Display::Core::HdmiDisplayMode> : impl_IIterator<Windows::Graphics::Display::Core::HdmiDisplayMode> {};
#endif

#ifndef WINRT_GENERIC_497e3d51_0ea1_5be0_8dba_8f7f4ce4fb33
#define WINRT_GENERIC_497e3d51_0ea1_5be0_8dba_8f7f4ce4fb33
template <> struct __declspec(uuid("497e3d51-0ea1-5be0-8dba-8f7f4ce4fb33")) __declspec(novtable) IIterable<Windows::Graphics::Display::Core::HdmiDisplayMode> : impl_IIterable<Windows::Graphics::Display::Core::HdmiDisplayMode> {};
#endif


}

namespace Windows::Graphics::Display::Core {

struct IHdmiDisplayInformation :
    Windows::Foundation::IInspectable,
    impl::consume<IHdmiDisplayInformation>
{
    IHdmiDisplayInformation(std::nullptr_t = nullptr) noexcept {}
};

struct IHdmiDisplayInformationStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IHdmiDisplayInformationStatics>
{
    IHdmiDisplayInformationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IHdmiDisplayMode :
    Windows::Foundation::IInspectable,
    impl::consume<IHdmiDisplayMode>
{
    IHdmiDisplayMode(std::nullptr_t = nullptr) noexcept {}
};

}

}
