// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Payments.0.h"
#include "winrt/impl/Windows.ApplicationModel.Payments.Provider.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Payments::Provider {

struct WINRT_EBO IPaymentAppManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentAppManager>
{
    IPaymentAppManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaymentAppManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentAppManagerStatics>
{
    IPaymentAppManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaymentTransaction :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentTransaction>
{
    IPaymentTransaction(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaymentTransactionAcceptResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentTransactionAcceptResult>
{
    IPaymentTransactionAcceptResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaymentTransactionStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentTransactionStatics>
{
    IPaymentTransactionStatics(std::nullptr_t = nullptr) noexcept {}
};

}
