// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.Payments.Provider.1.h"

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


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_0cc32025_ac67_57e2_a0f6_3a8e116cef4c
#define WINRT_GENERIC_0cc32025_ac67_57e2_a0f6_3a8e116cef4c
template <> struct __declspec(uuid("0cc32025-ac67-57e2-a0f6-3a8e116cef4c")) __declspec(novtable) IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestChangedResult> : impl_IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestChangedResult> {};
#endif

#ifndef WINRT_GENERIC_c645e8ef_0863_55b4_8aed_42bd152d8004
#define WINRT_GENERIC_c645e8ef_0863_55b4_8aed_42bd152d8004
template <> struct __declspec(uuid("c645e8ef-0863-55b4-8aed-42bd152d8004")) __declspec(novtable) IAsyncOperation<Windows::ApplicationModel::Payments::Provider::PaymentTransactionAcceptResult> : impl_IAsyncOperation<Windows::ApplicationModel::Payments::Provider::PaymentTransactionAcceptResult> {};
#endif

#ifndef WINRT_GENERIC_e09a3f7d_6ad0_58cf_ab4c_2e4c9c791873
#define WINRT_GENERIC_e09a3f7d_6ad0_58cf_ab4c_2e4c9c791873
template <> struct __declspec(uuid("e09a3f7d-6ad0-58cf-ab4c-2e4c9c791873")) __declspec(novtable) IAsyncOperation<Windows::ApplicationModel::Payments::Provider::PaymentTransaction> : impl_IAsyncOperation<Windows::ApplicationModel::Payments::Provider::PaymentTransaction> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
#define WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
template <> struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236")) __declspec(novtable) IIterator<hstring> : impl_IIterator<hstring> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_bec8b726_9056_5e47_b22a_0da09aa84afe
#define WINRT_GENERIC_bec8b726_9056_5e47_b22a_0da09aa84afe
template <> struct __declspec(uuid("bec8b726-9056-5e47-b22a-0da09aa84afe")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::ApplicationModel::Payments::PaymentRequestChangedResult> : impl_AsyncOperationCompletedHandler<Windows::ApplicationModel::Payments::PaymentRequestChangedResult> {};
#endif

#ifndef WINRT_GENERIC_4538f88a_89af_50b9_8165_7e6269639884
#define WINRT_GENERIC_4538f88a_89af_50b9_8165_7e6269639884
template <> struct __declspec(uuid("4538f88a-89af-50b9-8165-7e6269639884")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::ApplicationModel::Payments::Provider::PaymentTransactionAcceptResult> : impl_AsyncOperationCompletedHandler<Windows::ApplicationModel::Payments::Provider::PaymentTransactionAcceptResult> {};
#endif

#ifndef WINRT_GENERIC_bd5b92e5_1086_5c3d_9de1_9982e776d193
#define WINRT_GENERIC_bd5b92e5_1086_5c3d_9de1_9982e776d193
template <> struct __declspec(uuid("bd5b92e5-1086-5c3d-9de1-9982e776d193")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::ApplicationModel::Payments::Provider::PaymentTransaction> : impl_AsyncOperationCompletedHandler<Windows::ApplicationModel::Payments::Provider::PaymentTransaction> {};
#endif


}

namespace Windows::ApplicationModel::Payments::Provider {

struct IPaymentAppManager :
    Windows::Foundation::IInspectable,
    impl::consume<IPaymentAppManager>
{
    IPaymentAppManager(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentAppManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IPaymentAppManagerStatics>
{
    IPaymentAppManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentTransaction :
    Windows::Foundation::IInspectable,
    impl::consume<IPaymentTransaction>
{
    IPaymentTransaction(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentTransactionAcceptResult :
    Windows::Foundation::IInspectable,
    impl::consume<IPaymentTransactionAcceptResult>
{
    IPaymentTransactionAcceptResult(std::nullptr_t = nullptr) noexcept {}
};

struct IPaymentTransactionStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IPaymentTransactionStatics>
{
    IPaymentTransactionStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
