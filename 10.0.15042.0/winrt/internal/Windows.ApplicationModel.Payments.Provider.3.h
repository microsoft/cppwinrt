// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.Payments.Provider.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::ApplicationModel::Payments::Provider {

struct WINRT_EBO PaymentAppManager :
    Windows::ApplicationModel::Payments::Provider::IPaymentAppManager
{
    PaymentAppManager(std::nullptr_t) noexcept {}
    static Windows::ApplicationModel::Payments::Provider::PaymentAppManager Current();
};

struct WINRT_EBO PaymentTransaction :
    Windows::ApplicationModel::Payments::Provider::IPaymentTransaction
{
    PaymentTransaction(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::Provider::PaymentTransaction> FromIdAsync(hstring_view id);
};

struct WINRT_EBO PaymentTransactionAcceptResult :
    Windows::ApplicationModel::Payments::Provider::IPaymentTransactionAcceptResult
{
    PaymentTransactionAcceptResult(std::nullptr_t) noexcept {}
};

}

}
