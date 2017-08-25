// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.ApplicationModel.Payments.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Payments {

struct WINRT_EBO IPaymentAddress :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentAddress>
{
    IPaymentAddress(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaymentCurrencyAmount :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentCurrencyAmount>
{
    IPaymentCurrencyAmount(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaymentCurrencyAmountFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentCurrencyAmountFactory>
{
    IPaymentCurrencyAmountFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaymentDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentDetails>
{
    IPaymentDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaymentDetailsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentDetailsFactory>
{
    IPaymentDetailsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaymentDetailsModifier :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentDetailsModifier>
{
    IPaymentDetailsModifier(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaymentDetailsModifierFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentDetailsModifierFactory>
{
    IPaymentDetailsModifierFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaymentItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentItem>
{
    IPaymentItem(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaymentItemFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentItemFactory>
{
    IPaymentItemFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaymentMediator :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentMediator>
{
    IPaymentMediator(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaymentMerchantInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentMerchantInfo>
{
    IPaymentMerchantInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaymentMerchantInfoFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentMerchantInfoFactory>
{
    IPaymentMerchantInfoFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaymentMethodData :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentMethodData>
{
    IPaymentMethodData(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaymentMethodDataFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentMethodDataFactory>
{
    IPaymentMethodDataFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaymentOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentOptions>
{
    IPaymentOptions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaymentRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentRequest>
{
    IPaymentRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaymentRequestChangedArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentRequestChangedArgs>
{
    IPaymentRequestChangedArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaymentRequestChangedResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentRequestChangedResult>
{
    IPaymentRequestChangedResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaymentRequestChangedResultFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentRequestChangedResultFactory>
{
    IPaymentRequestChangedResultFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaymentRequestFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentRequestFactory>
{
    IPaymentRequestFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaymentRequestSubmitResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentRequestSubmitResult>
{
    IPaymentRequestSubmitResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaymentResponse :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentResponse>
{
    IPaymentResponse(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaymentShippingOption :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentShippingOption>
{
    IPaymentShippingOption(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaymentShippingOptionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentShippingOptionFactory>
{
    IPaymentShippingOptionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaymentToken :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentToken>
{
    IPaymentToken(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPaymentTokenFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPaymentTokenFactory>
{
    IPaymentTokenFactory(std::nullptr_t = nullptr) noexcept {}
};

}
