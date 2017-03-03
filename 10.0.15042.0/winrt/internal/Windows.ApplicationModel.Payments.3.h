// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.Payments.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::ApplicationModel::Payments {

template <typename H> struct impl_PaymentRequestChangedHandler : implements<impl_PaymentRequestChangedHandler<H>, abi<PaymentRequestChangedHandler>>, H
{
    impl_PaymentRequestChangedHandler(H && handler) : H(std::forward<H>(handler)) {}

    HRESULT __stdcall abi_Invoke(impl::abi_arg_in<Windows::ApplicationModel::Payments::IPaymentRequest> paymentRequest, impl::abi_arg_in<Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs> args) noexcept override
    {
        try
        {
            (*this)(*reinterpret_cast<const Windows::ApplicationModel::Payments::PaymentRequest *>(&paymentRequest), *reinterpret_cast<const Windows::ApplicationModel::Payments::PaymentRequestChangedArgs *>(&args));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::ApplicationModel::Payments {

struct WINRT_EBO PaymentAddress :
    Windows::ApplicationModel::Payments::IPaymentAddress
{
    PaymentAddress(std::nullptr_t) noexcept {}
    PaymentAddress();
};

struct WINRT_EBO PaymentCurrencyAmount :
    Windows::ApplicationModel::Payments::IPaymentCurrencyAmount
{
    PaymentCurrencyAmount(std::nullptr_t) noexcept {}
    PaymentCurrencyAmount(hstring_view value, hstring_view currency);
    PaymentCurrencyAmount(hstring_view value, hstring_view currency, hstring_view currencySystem);
};

struct WINRT_EBO PaymentDetails :
    Windows::ApplicationModel::Payments::IPaymentDetails
{
    PaymentDetails(std::nullptr_t) noexcept {}
    PaymentDetails();
    PaymentDetails(const Windows::ApplicationModel::Payments::PaymentItem & total);
    PaymentDetails(const Windows::ApplicationModel::Payments::PaymentItem & total, iterable<Windows::ApplicationModel::Payments::PaymentItem> displayItems);
};

struct WINRT_EBO PaymentDetailsModifier :
    Windows::ApplicationModel::Payments::IPaymentDetailsModifier
{
    PaymentDetailsModifier(std::nullptr_t) noexcept {}
    PaymentDetailsModifier(iterable<hstring> supportedMethodIds, const Windows::ApplicationModel::Payments::PaymentItem & total);
    PaymentDetailsModifier(iterable<hstring> supportedMethodIds, const Windows::ApplicationModel::Payments::PaymentItem & total, iterable<Windows::ApplicationModel::Payments::PaymentItem> additionalDisplayItems);
    PaymentDetailsModifier(iterable<hstring> supportedMethodIds, const Windows::ApplicationModel::Payments::PaymentItem & total, iterable<Windows::ApplicationModel::Payments::PaymentItem> additionalDisplayItems, hstring_view jsonData);
};

struct WINRT_EBO PaymentItem :
    Windows::ApplicationModel::Payments::IPaymentItem
{
    PaymentItem(std::nullptr_t) noexcept {}
    PaymentItem(hstring_view label, const Windows::ApplicationModel::Payments::PaymentCurrencyAmount & amount);
};

struct WINRT_EBO PaymentMediator :
    Windows::ApplicationModel::Payments::IPaymentMediator
{
    PaymentMediator(std::nullptr_t) noexcept {}
    PaymentMediator();
};

struct WINRT_EBO PaymentMerchantInfo :
    Windows::ApplicationModel::Payments::IPaymentMerchantInfo
{
    PaymentMerchantInfo(std::nullptr_t) noexcept {}
    PaymentMerchantInfo();
    PaymentMerchantInfo(const Windows::Foundation::Uri & uri);
};

struct WINRT_EBO PaymentMethodData :
    Windows::ApplicationModel::Payments::IPaymentMethodData
{
    PaymentMethodData(std::nullptr_t) noexcept {}
    PaymentMethodData(iterable<hstring> supportedMethodIds);
    PaymentMethodData(iterable<hstring> supportedMethodIds, hstring_view jsonData);
};

struct WINRT_EBO PaymentOptions :
    Windows::ApplicationModel::Payments::IPaymentOptions
{
    PaymentOptions(std::nullptr_t) noexcept {}
    PaymentOptions();
};

struct WINRT_EBO PaymentRequest :
    Windows::ApplicationModel::Payments::IPaymentRequest
{
    PaymentRequest(std::nullptr_t) noexcept {}
    PaymentRequest(const Windows::ApplicationModel::Payments::PaymentDetails & details, iterable<Windows::ApplicationModel::Payments::PaymentMethodData> methodData);
    PaymentRequest(const Windows::ApplicationModel::Payments::PaymentDetails & details, iterable<Windows::ApplicationModel::Payments::PaymentMethodData> methodData, const Windows::ApplicationModel::Payments::PaymentMerchantInfo & merchantInfo);
    PaymentRequest(const Windows::ApplicationModel::Payments::PaymentDetails & details, iterable<Windows::ApplicationModel::Payments::PaymentMethodData> methodData, const Windows::ApplicationModel::Payments::PaymentMerchantInfo & merchantInfo, const Windows::ApplicationModel::Payments::PaymentOptions & options);
};

struct WINRT_EBO PaymentRequestChangedArgs :
    Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs
{
    PaymentRequestChangedArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PaymentRequestChangedResult :
    Windows::ApplicationModel::Payments::IPaymentRequestChangedResult
{
    PaymentRequestChangedResult(std::nullptr_t) noexcept {}
    PaymentRequestChangedResult(bool changeAcceptedByMerchant);
    PaymentRequestChangedResult(bool changeAcceptedByMerchant, const Windows::ApplicationModel::Payments::PaymentDetails & updatedPaymentDetails);
};

struct WINRT_EBO PaymentRequestSubmitResult :
    Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult
{
    PaymentRequestSubmitResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PaymentResponse :
    Windows::ApplicationModel::Payments::IPaymentResponse
{
    PaymentResponse(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PaymentShippingOption :
    Windows::ApplicationModel::Payments::IPaymentShippingOption
{
    PaymentShippingOption(std::nullptr_t) noexcept {}
    PaymentShippingOption(hstring_view label, const Windows::ApplicationModel::Payments::PaymentCurrencyAmount & amount);
    PaymentShippingOption(hstring_view label, const Windows::ApplicationModel::Payments::PaymentCurrencyAmount & amount, bool selected);
    PaymentShippingOption(hstring_view label, const Windows::ApplicationModel::Payments::PaymentCurrencyAmount & amount, bool selected, hstring_view tag);
};

struct WINRT_EBO PaymentToken :
    Windows::ApplicationModel::Payments::IPaymentToken
{
    PaymentToken(std::nullptr_t) noexcept {}
    PaymentToken(hstring_view paymentMethodId);
    PaymentToken(hstring_view paymentMethodId, hstring_view jsonDetails);
};

}

}
