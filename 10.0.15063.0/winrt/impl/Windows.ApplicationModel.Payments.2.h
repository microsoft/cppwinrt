// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.ApplicationModel.Payments.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Payments {

struct PaymentRequestChangedHandler : Windows::Foundation::IUnknown
{
    PaymentRequestChangedHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> PaymentRequestChangedHandler(L lambda);
    template <typename F> PaymentRequestChangedHandler(F* function);
    template <typename O, typename M> PaymentRequestChangedHandler(O* object, M method);
    void operator()(Windows::ApplicationModel::Payments::PaymentRequest const& paymentRequest, Windows::ApplicationModel::Payments::PaymentRequestChangedArgs const& args) const;
};

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
    PaymentCurrencyAmount(param::hstring const& value, param::hstring const& currency);
    PaymentCurrencyAmount(param::hstring const& value, param::hstring const& currency, param::hstring const& currencySystem);
};

struct WINRT_EBO PaymentDetails :
    Windows::ApplicationModel::Payments::IPaymentDetails
{
    PaymentDetails(std::nullptr_t) noexcept {}
    PaymentDetails();
    PaymentDetails(Windows::ApplicationModel::Payments::PaymentItem const& total);
    PaymentDetails(Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& displayItems);
};

struct WINRT_EBO PaymentDetailsModifier :
    Windows::ApplicationModel::Payments::IPaymentDetailsModifier
{
    PaymentDetailsModifier(std::nullptr_t) noexcept {}
    PaymentDetailsModifier(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total);
    PaymentDetailsModifier(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& additionalDisplayItems);
    PaymentDetailsModifier(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& additionalDisplayItems, param::hstring const& jsonData);
};

struct WINRT_EBO PaymentItem :
    Windows::ApplicationModel::Payments::IPaymentItem
{
    PaymentItem(std::nullptr_t) noexcept {}
    PaymentItem(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount);
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
    PaymentMerchantInfo(Windows::Foundation::Uri const& uri);
};

struct WINRT_EBO PaymentMethodData :
    Windows::ApplicationModel::Payments::IPaymentMethodData
{
    PaymentMethodData(std::nullptr_t) noexcept {}
    PaymentMethodData(param::iterable<hstring> const& supportedMethodIds);
    PaymentMethodData(param::iterable<hstring> const& supportedMethodIds, param::hstring const& jsonData);
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
    PaymentRequest(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData);
    PaymentRequest(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData, Windows::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo);
    PaymentRequest(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData, Windows::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo, Windows::ApplicationModel::Payments::PaymentOptions const& options);
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
    PaymentRequestChangedResult(bool changeAcceptedByMerchant, Windows::ApplicationModel::Payments::PaymentDetails const& updatedPaymentDetails);
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
    PaymentShippingOption(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount);
    PaymentShippingOption(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount, bool selected);
    PaymentShippingOption(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount, bool selected, param::hstring const& tag);
};

struct WINRT_EBO PaymentToken :
    Windows::ApplicationModel::Payments::IPaymentToken
{
    PaymentToken(std::nullptr_t) noexcept {}
    PaymentToken(param::hstring const& paymentMethodId);
    PaymentToken(param::hstring const& paymentMethodId, param::hstring const& jsonDetails);
};

}
