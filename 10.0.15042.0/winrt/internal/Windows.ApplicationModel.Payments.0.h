// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::Payments {

struct IPaymentAddress;
struct IPaymentCurrencyAmount;
struct IPaymentCurrencyAmountFactory;
struct IPaymentDetails;
struct IPaymentDetailsFactory;
struct IPaymentDetailsModifier;
struct IPaymentDetailsModifierFactory;
struct IPaymentItem;
struct IPaymentItemFactory;
struct IPaymentMediator;
struct IPaymentMerchantInfo;
struct IPaymentMerchantInfoFactory;
struct IPaymentMethodData;
struct IPaymentMethodDataFactory;
struct IPaymentOptions;
struct IPaymentRequest;
struct IPaymentRequestChangedArgs;
struct IPaymentRequestChangedResult;
struct IPaymentRequestChangedResultFactory;
struct IPaymentRequestFactory;
struct IPaymentRequestSubmitResult;
struct IPaymentResponse;
struct IPaymentShippingOption;
struct IPaymentShippingOptionFactory;
struct IPaymentToken;
struct IPaymentTokenFactory;
struct PaymentRequestChangedHandler;
struct PaymentAddress;
struct PaymentCurrencyAmount;
struct PaymentDetails;
struct PaymentDetailsModifier;
struct PaymentItem;
struct PaymentMediator;
struct PaymentMerchantInfo;
struct PaymentMethodData;
struct PaymentOptions;
struct PaymentRequest;
struct PaymentRequestChangedArgs;
struct PaymentRequestChangedResult;
struct PaymentRequestSubmitResult;
struct PaymentResponse;
struct PaymentShippingOption;
struct PaymentToken;

}

namespace Windows::ApplicationModel::Payments {

struct PaymentRequestChangedHandler;
struct IPaymentAddress;
struct IPaymentCurrencyAmount;
struct IPaymentCurrencyAmountFactory;
struct IPaymentDetails;
struct IPaymentDetailsFactory;
struct IPaymentDetailsModifier;
struct IPaymentDetailsModifierFactory;
struct IPaymentItem;
struct IPaymentItemFactory;
struct IPaymentMediator;
struct IPaymentMerchantInfo;
struct IPaymentMerchantInfoFactory;
struct IPaymentMethodData;
struct IPaymentMethodDataFactory;
struct IPaymentOptions;
struct IPaymentRequest;
struct IPaymentRequestChangedArgs;
struct IPaymentRequestChangedResult;
struct IPaymentRequestChangedResultFactory;
struct IPaymentRequestFactory;
struct IPaymentRequestSubmitResult;
struct IPaymentResponse;
struct IPaymentShippingOption;
struct IPaymentShippingOptionFactory;
struct IPaymentToken;
struct IPaymentTokenFactory;
struct PaymentAddress;
struct PaymentCurrencyAmount;
struct PaymentDetails;
struct PaymentDetailsModifier;
struct PaymentItem;
struct PaymentMediator;
struct PaymentMerchantInfo;
struct PaymentMethodData;
struct PaymentOptions;
struct PaymentRequest;
struct PaymentRequestChangedArgs;
struct PaymentRequestChangedResult;
struct PaymentRequestSubmitResult;
struct PaymentResponse;
struct PaymentShippingOption;
struct PaymentToken;

}

namespace Windows::ApplicationModel::Payments {

template <typename T> struct impl_IPaymentAddress;
template <typename T> struct impl_IPaymentCurrencyAmount;
template <typename T> struct impl_IPaymentCurrencyAmountFactory;
template <typename T> struct impl_IPaymentDetails;
template <typename T> struct impl_IPaymentDetailsFactory;
template <typename T> struct impl_IPaymentDetailsModifier;
template <typename T> struct impl_IPaymentDetailsModifierFactory;
template <typename T> struct impl_IPaymentItem;
template <typename T> struct impl_IPaymentItemFactory;
template <typename T> struct impl_IPaymentMediator;
template <typename T> struct impl_IPaymentMerchantInfo;
template <typename T> struct impl_IPaymentMerchantInfoFactory;
template <typename T> struct impl_IPaymentMethodData;
template <typename T> struct impl_IPaymentMethodDataFactory;
template <typename T> struct impl_IPaymentOptions;
template <typename T> struct impl_IPaymentRequest;
template <typename T> struct impl_IPaymentRequestChangedArgs;
template <typename T> struct impl_IPaymentRequestChangedResult;
template <typename T> struct impl_IPaymentRequestChangedResultFactory;
template <typename T> struct impl_IPaymentRequestFactory;
template <typename T> struct impl_IPaymentRequestSubmitResult;
template <typename T> struct impl_IPaymentResponse;
template <typename T> struct impl_IPaymentShippingOption;
template <typename T> struct impl_IPaymentShippingOptionFactory;
template <typename T> struct impl_IPaymentToken;
template <typename T> struct impl_IPaymentTokenFactory;
template <typename T> struct impl_PaymentRequestChangedHandler;

}

namespace Windows::ApplicationModel::Payments {

enum class PaymentOptionPresence
{
    None = 0,
    Optional = 1,
    Required = 2,
};

enum class PaymentRequestChangeKind
{
    ShippingOption = 0,
    ShippingAddress = 1,
};

enum class PaymentRequestCompletionStatus
{
    Succeeded = 0,
    Failed = 1,
    Unknown = 2,
};

enum class PaymentRequestStatus
{
    Succeeded = 0,
    Failed = 1,
    Canceled = 2,
};

enum class PaymentShippingType
{
    Shipping = 0,
    Delivery = 1,
    Pickup = 2,
};

}

}
