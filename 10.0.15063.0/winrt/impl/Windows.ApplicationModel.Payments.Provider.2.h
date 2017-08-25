// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Payments.1.h"
#include "winrt/impl/Windows.ApplicationModel.Payments.Provider.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Payments::Provider {

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
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::Provider::PaymentTransaction> FromIdAsync(param::hstring const& id);
};

struct WINRT_EBO PaymentTransactionAcceptResult :
    Windows::ApplicationModel::Payments::Provider::IPaymentTransactionAcceptResult
{
    PaymentTransactionAcceptResult(std::nullptr_t) noexcept {}
};

}
