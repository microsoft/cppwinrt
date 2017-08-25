// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct ValueSet;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Payments {

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
struct PaymentRequestChangedHandler;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::Payments::IPaymentAddress>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::IPaymentCurrencyAmount>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::IPaymentDetails>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::IPaymentDetailsFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::IPaymentDetailsModifier>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::IPaymentItem>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::IPaymentItemFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::IPaymentMediator>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::IPaymentMerchantInfo>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::IPaymentMethodData>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::IPaymentMethodDataFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::IPaymentOptions>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::IPaymentRequest>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::IPaymentRequestChangedResult>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::IPaymentRequestFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::IPaymentResponse>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::IPaymentShippingOption>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::IPaymentToken>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::IPaymentTokenFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::PaymentAddress>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Payments::PaymentCurrencyAmount>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Payments::PaymentDetails>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Payments::PaymentDetailsModifier>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Payments::PaymentItem>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Payments::PaymentMediator>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Payments::PaymentMerchantInfo>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Payments::PaymentMethodData>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Payments::PaymentOptions>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Payments::PaymentRequest>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Payments::PaymentRequestChangedArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Payments::PaymentRequestChangedResult>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Payments::PaymentResponse>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Payments::PaymentShippingOption>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Payments::PaymentToken>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Payments::PaymentOptionPresence>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Payments::PaymentRequestChangeKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Payments::PaymentRequestStatus>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Payments::PaymentShippingType>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Payments::PaymentRequestChangedHandler>{ using type = delegate_category; };
template <> struct name<Windows::ApplicationModel::Payments::IPaymentAddress>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentAddress" }; };
template <> struct name<Windows::ApplicationModel::Payments::IPaymentCurrencyAmount>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentCurrencyAmount" }; };
template <> struct name<Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentCurrencyAmountFactory" }; };
template <> struct name<Windows::ApplicationModel::Payments::IPaymentDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentDetails" }; };
template <> struct name<Windows::ApplicationModel::Payments::IPaymentDetailsFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentDetailsFactory" }; };
template <> struct name<Windows::ApplicationModel::Payments::IPaymentDetailsModifier>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentDetailsModifier" }; };
template <> struct name<Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentDetailsModifierFactory" }; };
template <> struct name<Windows::ApplicationModel::Payments::IPaymentItem>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentItem" }; };
template <> struct name<Windows::ApplicationModel::Payments::IPaymentItemFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentItemFactory" }; };
template <> struct name<Windows::ApplicationModel::Payments::IPaymentMediator>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentMediator" }; };
template <> struct name<Windows::ApplicationModel::Payments::IPaymentMerchantInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentMerchantInfo" }; };
template <> struct name<Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentMerchantInfoFactory" }; };
template <> struct name<Windows::ApplicationModel::Payments::IPaymentMethodData>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentMethodData" }; };
template <> struct name<Windows::ApplicationModel::Payments::IPaymentMethodDataFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentMethodDataFactory" }; };
template <> struct name<Windows::ApplicationModel::Payments::IPaymentOptions>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentOptions" }; };
template <> struct name<Windows::ApplicationModel::Payments::IPaymentRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentRequest" }; };
template <> struct name<Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentRequestChangedArgs" }; };
template <> struct name<Windows::ApplicationModel::Payments::IPaymentRequestChangedResult>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentRequestChangedResult" }; };
template <> struct name<Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentRequestChangedResultFactory" }; };
template <> struct name<Windows::ApplicationModel::Payments::IPaymentRequestFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentRequestFactory" }; };
template <> struct name<Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentRequestSubmitResult" }; };
template <> struct name<Windows::ApplicationModel::Payments::IPaymentResponse>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentResponse" }; };
template <> struct name<Windows::ApplicationModel::Payments::IPaymentShippingOption>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentShippingOption" }; };
template <> struct name<Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentShippingOptionFactory" }; };
template <> struct name<Windows::ApplicationModel::Payments::IPaymentToken>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentToken" }; };
template <> struct name<Windows::ApplicationModel::Payments::IPaymentTokenFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.IPaymentTokenFactory" }; };
template <> struct name<Windows::ApplicationModel::Payments::PaymentAddress>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentAddress" }; };
template <> struct name<Windows::ApplicationModel::Payments::PaymentCurrencyAmount>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentCurrencyAmount" }; };
template <> struct name<Windows::ApplicationModel::Payments::PaymentDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentDetails" }; };
template <> struct name<Windows::ApplicationModel::Payments::PaymentDetailsModifier>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentDetailsModifier" }; };
template <> struct name<Windows::ApplicationModel::Payments::PaymentItem>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentItem" }; };
template <> struct name<Windows::ApplicationModel::Payments::PaymentMediator>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentMediator" }; };
template <> struct name<Windows::ApplicationModel::Payments::PaymentMerchantInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentMerchantInfo" }; };
template <> struct name<Windows::ApplicationModel::Payments::PaymentMethodData>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentMethodData" }; };
template <> struct name<Windows::ApplicationModel::Payments::PaymentOptions>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentOptions" }; };
template <> struct name<Windows::ApplicationModel::Payments::PaymentRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentRequest" }; };
template <> struct name<Windows::ApplicationModel::Payments::PaymentRequestChangedArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentRequestChangedArgs" }; };
template <> struct name<Windows::ApplicationModel::Payments::PaymentRequestChangedResult>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentRequestChangedResult" }; };
template <> struct name<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentRequestSubmitResult" }; };
template <> struct name<Windows::ApplicationModel::Payments::PaymentResponse>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentResponse" }; };
template <> struct name<Windows::ApplicationModel::Payments::PaymentShippingOption>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentShippingOption" }; };
template <> struct name<Windows::ApplicationModel::Payments::PaymentToken>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentToken" }; };
template <> struct name<Windows::ApplicationModel::Payments::PaymentOptionPresence>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentOptionPresence" }; };
template <> struct name<Windows::ApplicationModel::Payments::PaymentRequestChangeKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentRequestChangeKind" }; };
template <> struct name<Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentRequestCompletionStatus" }; };
template <> struct name<Windows::ApplicationModel::Payments::PaymentRequestStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentRequestStatus" }; };
template <> struct name<Windows::ApplicationModel::Payments::PaymentShippingType>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentShippingType" }; };
template <> struct name<Windows::ApplicationModel::Payments::PaymentRequestChangedHandler>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.PaymentRequestChangedHandler" }; };
template <> struct guid<Windows::ApplicationModel::Payments::IPaymentAddress>{ static constexpr GUID value{ 0x5F2264E9,0x6F3A,0x4166,{ 0xA0,0x18,0x0A,0x0B,0x06,0xBB,0x32,0xB5 } }; };
template <> struct guid<Windows::ApplicationModel::Payments::IPaymentCurrencyAmount>{ static constexpr GUID value{ 0xE3A3E9E0,0xB41F,0x4987,{ 0xBD,0xCB,0x07,0x13,0x31,0xF2,0xDA,0xA4 } }; };
template <> struct guid<Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory>{ static constexpr GUID value{ 0x3257D338,0x140C,0x4575,{ 0x85,0x35,0xF7,0x73,0x17,0x8C,0x09,0xA7 } }; };
template <> struct guid<Windows::ApplicationModel::Payments::IPaymentDetails>{ static constexpr GUID value{ 0x53BB2D7D,0xE0EB,0x4053,{ 0x8E,0xAE,0xCE,0x7C,0x48,0xE0,0x29,0x45 } }; };
template <> struct guid<Windows::ApplicationModel::Payments::IPaymentDetailsFactory>{ static constexpr GUID value{ 0xCFE8AFEE,0xC0EA,0x4CA1,{ 0x8B,0xC7,0x6D,0xE6,0x7B,0x1F,0x37,0x63 } }; };
template <> struct guid<Windows::ApplicationModel::Payments::IPaymentDetailsModifier>{ static constexpr GUID value{ 0xBE1C7D65,0x4323,0x41D7,{ 0xB3,0x05,0xDF,0xCB,0x76,0x5F,0x69,0xDE } }; };
template <> struct guid<Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory>{ static constexpr GUID value{ 0x79005286,0x54DE,0x429C,{ 0x9E,0x4F,0x5D,0xCE,0x6E,0x10,0xEB,0xCE } }; };
template <> struct guid<Windows::ApplicationModel::Payments::IPaymentItem>{ static constexpr GUID value{ 0x685AC88B,0x79B2,0x4B76,{ 0x9E,0x03,0xA8,0x76,0x22,0x3D,0xFE,0x72 } }; };
template <> struct guid<Windows::ApplicationModel::Payments::IPaymentItemFactory>{ static constexpr GUID value{ 0xC6AB7AD8,0x2503,0x4D1D,{ 0xA7,0x78,0x02,0xB2,0xE5,0x92,0x7B,0x2C } }; };
template <> struct guid<Windows::ApplicationModel::Payments::IPaymentMediator>{ static constexpr GUID value{ 0xFB0EE829,0xEC0C,0x449A,{ 0x83,0xDA,0x7A,0xE3,0x07,0x33,0x65,0xA2 } }; };
template <> struct guid<Windows::ApplicationModel::Payments::IPaymentMerchantInfo>{ static constexpr GUID value{ 0x63445050,0x0E94,0x4ED6,{ 0xAA,0xCB,0xE6,0x01,0x2B,0xD3,0x27,0xA7 } }; };
template <> struct guid<Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory>{ static constexpr GUID value{ 0x9E89CED3,0xCCB7,0x4167,{ 0xA8,0xEC,0xE1,0x0A,0xE9,0x6D,0xBC,0xD1 } }; };
template <> struct guid<Windows::ApplicationModel::Payments::IPaymentMethodData>{ static constexpr GUID value{ 0xD1D3CAF4,0xDE98,0x4129,{ 0xB1,0xB7,0xC3,0xAD,0x86,0x23,0x7B,0xF4 } }; };
template <> struct guid<Windows::ApplicationModel::Payments::IPaymentMethodDataFactory>{ static constexpr GUID value{ 0x8ADDD27F,0x9BAA,0x4A82,{ 0x83,0x42,0xA8,0x21,0x09,0x92,0xA3,0x6B } }; };
template <> struct guid<Windows::ApplicationModel::Payments::IPaymentOptions>{ static constexpr GUID value{ 0xAAA30854,0x1F2B,0x4365,{ 0x82,0x51,0x01,0xB5,0x89,0x15,0xA5,0xBC } }; };
template <> struct guid<Windows::ApplicationModel::Payments::IPaymentRequest>{ static constexpr GUID value{ 0xB74942E1,0xED7B,0x47EB,{ 0xBC,0x08,0x78,0xCC,0x5D,0x68,0x96,0xB6 } }; };
template <> struct guid<Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs>{ static constexpr GUID value{ 0xC6145E44,0xCD8B,0x4BE4,{ 0xB5,0x55,0x27,0xC9,0x91,0x94,0xC0,0xC5 } }; };
template <> struct guid<Windows::ApplicationModel::Payments::IPaymentRequestChangedResult>{ static constexpr GUID value{ 0xDF699E5C,0x16C4,0x47AD,{ 0x94,0x01,0x84,0x40,0xEC,0x07,0x57,0xDB } }; };
template <> struct guid<Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory>{ static constexpr GUID value{ 0x08740F56,0x1D33,0x4431,{ 0x81,0x4B,0x67,0xEA,0x24,0xBF,0x21,0xDB } }; };
template <> struct guid<Windows::ApplicationModel::Payments::IPaymentRequestFactory>{ static constexpr GUID value{ 0x3E8A79DC,0x6B74,0x42D3,{ 0xB1,0x03,0xF0,0xDE,0x35,0xFB,0x18,0x48 } }; };
template <> struct guid<Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult>{ static constexpr GUID value{ 0x7B9C3912,0x30F2,0x4E90,{ 0xB2,0x49,0x8C,0xE7,0xD7,0x8F,0xFE,0x56 } }; };
template <> struct guid<Windows::ApplicationModel::Payments::IPaymentResponse>{ static constexpr GUID value{ 0xE1389457,0x8BD2,0x4888,{ 0x9F,0xA8,0x97,0x98,0x55,0x45,0x10,0x8E } }; };
template <> struct guid<Windows::ApplicationModel::Payments::IPaymentShippingOption>{ static constexpr GUID value{ 0x13372ADA,0x9753,0x4574,{ 0x89,0x66,0x93,0x14,0x5A,0x76,0xC7,0xF9 } }; };
template <> struct guid<Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory>{ static constexpr GUID value{ 0x5DE5F917,0xB2D7,0x446B,{ 0x9D,0x73,0x61,0x23,0xFB,0xCA,0x3B,0xC6 } }; };
template <> struct guid<Windows::ApplicationModel::Payments::IPaymentToken>{ static constexpr GUID value{ 0xBBCAC013,0xCCD0,0x41F2,{ 0xB2,0xA1,0x0A,0x2E,0x4B,0x5D,0xCE,0x25 } }; };
template <> struct guid<Windows::ApplicationModel::Payments::IPaymentTokenFactory>{ static constexpr GUID value{ 0x988CD7AA,0x4753,0x4904,{ 0x83,0x73,0xDD,0x7B,0x08,0xB9,0x95,0xC1 } }; };
template <> struct guid<Windows::ApplicationModel::Payments::PaymentRequestChangedHandler>{ static constexpr GUID value{ 0x5078B9E1,0xF398,0x4F2C,{ 0xA2,0x7E,0x94,0xD3,0x71,0xCF,0x6C,0x7D } }; };
template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentAddress>{ using type = Windows::ApplicationModel::Payments::IPaymentAddress; };
template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentCurrencyAmount>{ using type = Windows::ApplicationModel::Payments::IPaymentCurrencyAmount; };
template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentDetails>{ using type = Windows::ApplicationModel::Payments::IPaymentDetails; };
template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentDetailsModifier>{ using type = Windows::ApplicationModel::Payments::IPaymentDetailsModifier; };
template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentItem>{ using type = Windows::ApplicationModel::Payments::IPaymentItem; };
template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentMediator>{ using type = Windows::ApplicationModel::Payments::IPaymentMediator; };
template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentMerchantInfo>{ using type = Windows::ApplicationModel::Payments::IPaymentMerchantInfo; };
template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentMethodData>{ using type = Windows::ApplicationModel::Payments::IPaymentMethodData; };
template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentOptions>{ using type = Windows::ApplicationModel::Payments::IPaymentOptions; };
template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentRequest>{ using type = Windows::ApplicationModel::Payments::IPaymentRequest; };
template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentRequestChangedArgs>{ using type = Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs; };
template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentRequestChangedResult>{ using type = Windows::ApplicationModel::Payments::IPaymentRequestChangedResult; };
template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult>{ using type = Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult; };
template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentResponse>{ using type = Windows::ApplicationModel::Payments::IPaymentResponse; };
template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentShippingOption>{ using type = Windows::ApplicationModel::Payments::IPaymentShippingOption; };
template <> struct default_interface<Windows::ApplicationModel::Payments::PaymentToken>{ using type = Windows::ApplicationModel::Payments::IPaymentToken; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_IPaymentAddress
{
    hstring Country() const;
    void Country(param::hstring const& value) const;
    Windows::Foundation::Collections::IVectorView<hstring> AddressLines() const;
    void AddressLines(param::async_vector_view<hstring> const& value) const;
    hstring Region() const;
    void Region(param::hstring const& value) const;
    hstring City() const;
    void City(param::hstring const& value) const;
    hstring DependentLocality() const;
    void DependentLocality(param::hstring const& value) const;
    hstring PostalCode() const;
    void PostalCode(param::hstring const& value) const;
    hstring SortingCode() const;
    void SortingCode(param::hstring const& value) const;
    hstring LanguageCode() const;
    void LanguageCode(param::hstring const& value) const;
    hstring Organization() const;
    void Organization(param::hstring const& value) const;
    hstring Recipient() const;
    void Recipient(param::hstring const& value) const;
    hstring PhoneNumber() const;
    void PhoneNumber(param::hstring const& value) const;
    Windows::Foundation::Collections::ValueSet Properties() const;
};
template <> struct consume<Windows::ApplicationModel::Payments::IPaymentAddress> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmount
{
    hstring Currency() const;
    void Currency(param::hstring const& value) const;
    hstring CurrencySystem() const;
    void CurrencySystem(param::hstring const& value) const;
    hstring Value() const;
    void Value(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Payments::IPaymentCurrencyAmount> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmount<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmountFactory
{
    Windows::ApplicationModel::Payments::PaymentCurrencyAmount Create(param::hstring const& value, param::hstring const& currency) const;
    Windows::ApplicationModel::Payments::PaymentCurrencyAmount CreateWithCurrencySystem(param::hstring const& value, param::hstring const& currency, param::hstring const& currencySystem) const;
};
template <> struct consume<Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmountFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_IPaymentDetails
{
    Windows::ApplicationModel::Payments::PaymentItem Total() const;
    void Total(Windows::ApplicationModel::Payments::PaymentItem const& value) const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem> DisplayItems() const;
    void DisplayItems(param::async_vector_view<Windows::ApplicationModel::Payments::PaymentItem> const& value) const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentShippingOption> ShippingOptions() const;
    void ShippingOptions(param::async_vector_view<Windows::ApplicationModel::Payments::PaymentShippingOption> const& value) const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentDetailsModifier> Modifiers() const;
    void Modifiers(param::async_vector_view<Windows::ApplicationModel::Payments::PaymentDetailsModifier> const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Payments::IPaymentDetails> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentDetails<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_IPaymentDetailsFactory
{
    Windows::ApplicationModel::Payments::PaymentDetails Create(Windows::ApplicationModel::Payments::PaymentItem const& total) const;
    Windows::ApplicationModel::Payments::PaymentDetails CreateWithDisplayItems(Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& displayItems) const;
};
template <> struct consume<Windows::ApplicationModel::Payments::IPaymentDetailsFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentDetailsFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifier
{
    hstring JsonData() const;
    Windows::Foundation::Collections::IVectorView<hstring> SupportedMethodIds() const;
    Windows::ApplicationModel::Payments::PaymentItem Total() const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem> AdditionalDisplayItems() const;
};
template <> struct consume<Windows::ApplicationModel::Payments::IPaymentDetailsModifier> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifier<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifierFactory
{
    Windows::ApplicationModel::Payments::PaymentDetailsModifier Create(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total) const;
    Windows::ApplicationModel::Payments::PaymentDetailsModifier CreateWithAdditionalDisplayItems(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& additionalDisplayItems) const;
    Windows::ApplicationModel::Payments::PaymentDetailsModifier CreateWithAdditionalDisplayItemsAndJsonData(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& additionalDisplayItems, param::hstring const& jsonData) const;
};
template <> struct consume<Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifierFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_IPaymentItem
{
    hstring Label() const;
    void Label(param::hstring const& value) const;
    Windows::ApplicationModel::Payments::PaymentCurrencyAmount Amount() const;
    void Amount(Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& value) const;
    bool Pending() const;
    void Pending(bool value) const;
};
template <> struct consume<Windows::ApplicationModel::Payments::IPaymentItem> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentItem<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_IPaymentItemFactory
{
    Windows::ApplicationModel::Payments::PaymentItem Create(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount) const;
};
template <> struct consume<Windows::ApplicationModel::Payments::IPaymentItemFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentItemFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_IPaymentMediator
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> GetSupportedMethodIdsAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult> SubmitPaymentRequestAsync(Windows::ApplicationModel::Payments::PaymentRequest const& paymentRequest) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult> SubmitPaymentRequestAsync(Windows::ApplicationModel::Payments::PaymentRequest const& paymentRequest, Windows::ApplicationModel::Payments::PaymentRequestChangedHandler const& changeHandler) const;
};
template <> struct consume<Windows::ApplicationModel::Payments::IPaymentMediator> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentMediator<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_IPaymentMerchantInfo
{
    hstring PackageFullName() const;
    Windows::Foundation::Uri Uri() const;
};
template <> struct consume<Windows::ApplicationModel::Payments::IPaymentMerchantInfo> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentMerchantInfo<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_IPaymentMerchantInfoFactory
{
    Windows::ApplicationModel::Payments::PaymentMerchantInfo Create(Windows::Foundation::Uri const& uri) const;
};
template <> struct consume<Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentMerchantInfoFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_IPaymentMethodData
{
    Windows::Foundation::Collections::IVectorView<hstring> SupportedMethodIds() const;
    hstring JsonData() const;
};
template <> struct consume<Windows::ApplicationModel::Payments::IPaymentMethodData> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentMethodData<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_IPaymentMethodDataFactory
{
    Windows::ApplicationModel::Payments::PaymentMethodData Create(param::iterable<hstring> const& supportedMethodIds) const;
    Windows::ApplicationModel::Payments::PaymentMethodData CreateWithJsonData(param::iterable<hstring> const& supportedMethodIds, param::hstring const& jsonData) const;
};
template <> struct consume<Windows::ApplicationModel::Payments::IPaymentMethodDataFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentMethodDataFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_IPaymentOptions
{
    Windows::ApplicationModel::Payments::PaymentOptionPresence RequestPayerEmail() const;
    void RequestPayerEmail(Windows::ApplicationModel::Payments::PaymentOptionPresence const& value) const;
    Windows::ApplicationModel::Payments::PaymentOptionPresence RequestPayerName() const;
    void RequestPayerName(Windows::ApplicationModel::Payments::PaymentOptionPresence const& value) const;
    Windows::ApplicationModel::Payments::PaymentOptionPresence RequestPayerPhoneNumber() const;
    void RequestPayerPhoneNumber(Windows::ApplicationModel::Payments::PaymentOptionPresence const& value) const;
    bool RequestShipping() const;
    void RequestShipping(bool value) const;
    Windows::ApplicationModel::Payments::PaymentShippingType ShippingType() const;
    void ShippingType(Windows::ApplicationModel::Payments::PaymentShippingType const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Payments::IPaymentOptions> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_IPaymentRequest
{
    Windows::ApplicationModel::Payments::PaymentMerchantInfo MerchantInfo() const;
    Windows::ApplicationModel::Payments::PaymentDetails Details() const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentMethodData> MethodData() const;
    Windows::ApplicationModel::Payments::PaymentOptions Options() const;
};
template <> struct consume<Windows::ApplicationModel::Payments::IPaymentRequest> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentRequest<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedArgs
{
    Windows::ApplicationModel::Payments::PaymentRequestChangeKind ChangeKind() const;
    Windows::ApplicationModel::Payments::PaymentAddress ShippingAddress() const;
    Windows::ApplicationModel::Payments::PaymentShippingOption SelectedShippingOption() const;
    void Acknowledge(Windows::ApplicationModel::Payments::PaymentRequestChangedResult const& changeResult) const;
};
template <> struct consume<Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResult
{
    bool ChangeAcceptedByMerchant() const;
    void ChangeAcceptedByMerchant(bool value) const;
    hstring Message() const;
    void Message(param::hstring const& value) const;
    Windows::ApplicationModel::Payments::PaymentDetails UpdatedPaymentDetails() const;
    void UpdatedPaymentDetails(Windows::ApplicationModel::Payments::PaymentDetails const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Payments::IPaymentRequestChangedResult> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResult<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResultFactory
{
    Windows::ApplicationModel::Payments::PaymentRequestChangedResult Create(bool changeAcceptedByMerchant) const;
    Windows::ApplicationModel::Payments::PaymentRequestChangedResult CreateWithPaymentDetails(bool changeAcceptedByMerchant, Windows::ApplicationModel::Payments::PaymentDetails const& updatedPaymentDetails) const;
};
template <> struct consume<Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResultFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_IPaymentRequestFactory
{
    Windows::ApplicationModel::Payments::PaymentRequest Create(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData) const;
    Windows::ApplicationModel::Payments::PaymentRequest CreateWithMerchantInfo(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData, Windows::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo) const;
    Windows::ApplicationModel::Payments::PaymentRequest CreateWithMerchantInfoAndOptions(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData, Windows::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo, Windows::ApplicationModel::Payments::PaymentOptions const& options) const;
};
template <> struct consume<Windows::ApplicationModel::Payments::IPaymentRequestFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentRequestFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_IPaymentRequestSubmitResult
{
    Windows::ApplicationModel::Payments::PaymentRequestStatus Status() const;
    Windows::ApplicationModel::Payments::PaymentResponse Response() const;
};
template <> struct consume<Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentRequestSubmitResult<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_IPaymentResponse
{
    Windows::ApplicationModel::Payments::PaymentToken PaymentToken() const;
    Windows::ApplicationModel::Payments::PaymentShippingOption ShippingOption() const;
    Windows::ApplicationModel::Payments::PaymentAddress ShippingAddress() const;
    hstring PayerEmail() const;
    hstring PayerName() const;
    hstring PayerPhoneNumber() const;
    Windows::Foundation::IAsyncAction CompleteAsync(Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus const& status) const;
};
template <> struct consume<Windows::ApplicationModel::Payments::IPaymentResponse> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentResponse<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_IPaymentShippingOption
{
    hstring Label() const;
    void Label(param::hstring const& value) const;
    Windows::ApplicationModel::Payments::PaymentCurrencyAmount Amount() const;
    void Amount(Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& value) const;
    hstring Tag() const;
    void Tag(param::hstring const& value) const;
    bool IsSelected() const;
    void IsSelected(bool value) const;
};
template <> struct consume<Windows::ApplicationModel::Payments::IPaymentShippingOption> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentShippingOption<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_IPaymentShippingOptionFactory
{
    Windows::ApplicationModel::Payments::PaymentShippingOption Create(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount) const;
    Windows::ApplicationModel::Payments::PaymentShippingOption CreateWithSelected(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount, bool selected) const;
    Windows::ApplicationModel::Payments::PaymentShippingOption CreateWithSelectedAndTag(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount, bool selected, param::hstring const& tag) const;
};
template <> struct consume<Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentShippingOptionFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_IPaymentToken
{
    hstring PaymentMethodId() const;
    hstring JsonDetails() const;
};
template <> struct consume<Windows::ApplicationModel::Payments::IPaymentToken> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentToken<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_IPaymentTokenFactory
{
    Windows::ApplicationModel::Payments::PaymentToken Create(param::hstring const& paymentMethodId) const;
    Windows::ApplicationModel::Payments::PaymentToken CreateWithJsonDetails(param::hstring const& paymentMethodId, param::hstring const& jsonDetails) const;
};
template <> struct consume<Windows::ApplicationModel::Payments::IPaymentTokenFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_IPaymentTokenFactory<D>; };

template <> struct abi<Windows::ApplicationModel::Payments::IPaymentAddress>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Country(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Country(HSTRING value) = 0;
    virtual HRESULT __stdcall get_AddressLines(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_AddressLines(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Region(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Region(HSTRING value) = 0;
    virtual HRESULT __stdcall get_City(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_City(HSTRING value) = 0;
    virtual HRESULT __stdcall get_DependentLocality(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_DependentLocality(HSTRING value) = 0;
    virtual HRESULT __stdcall get_PostalCode(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_PostalCode(HSTRING value) = 0;
    virtual HRESULT __stdcall get_SortingCode(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_SortingCode(HSTRING value) = 0;
    virtual HRESULT __stdcall get_LanguageCode(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_LanguageCode(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Organization(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Organization(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Recipient(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Recipient(HSTRING value) = 0;
    virtual HRESULT __stdcall get_PhoneNumber(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_PhoneNumber(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::IPaymentCurrencyAmount>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Currency(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Currency(HSTRING value) = 0;
    virtual HRESULT __stdcall get_CurrencySystem(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_CurrencySystem(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Value(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Value(HSTRING value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING value, HSTRING currency, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateWithCurrencySystem(HSTRING value, HSTRING currency, HSTRING currencySystem, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::IPaymentDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Total(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Total(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_DisplayItems(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_DisplayItems(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ShippingOptions(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ShippingOptions(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Modifiers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Modifiers(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::IPaymentDetailsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* total, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateWithDisplayItems(::IUnknown* total, ::IUnknown* displayItems, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::IPaymentDetailsModifier>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_JsonData(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SupportedMethodIds(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Total(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AdditionalDisplayItems(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* supportedMethodIds, ::IUnknown* total, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateWithAdditionalDisplayItems(::IUnknown* supportedMethodIds, ::IUnknown* total, ::IUnknown* additionalDisplayItems, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateWithAdditionalDisplayItemsAndJsonData(::IUnknown* supportedMethodIds, ::IUnknown* total, ::IUnknown* additionalDisplayItems, HSTRING jsonData, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::IPaymentItem>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Label(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Label(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Amount(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Amount(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Pending(bool* value) = 0;
    virtual HRESULT __stdcall put_Pending(bool value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::IPaymentItemFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING label, ::IUnknown* amount, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::IPaymentMediator>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetSupportedMethodIdsAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall SubmitPaymentRequestAsync(::IUnknown* paymentRequest, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall SubmitPaymentRequestWithChangeHandlerAsync(::IUnknown* paymentRequest, ::IUnknown* changeHandler, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::IPaymentMerchantInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PackageFullName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Uri(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* uri, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::IPaymentMethodData>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SupportedMethodIds(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_JsonData(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::IPaymentMethodDataFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* supportedMethodIds, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateWithJsonData(::IUnknown* supportedMethodIds, HSTRING jsonData, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::IPaymentOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RequestPayerEmail(abi_t<Windows::ApplicationModel::Payments::PaymentOptionPresence>* value) = 0;
    virtual HRESULT __stdcall put_RequestPayerEmail(abi_t<Windows::ApplicationModel::Payments::PaymentOptionPresence> value) = 0;
    virtual HRESULT __stdcall get_RequestPayerName(abi_t<Windows::ApplicationModel::Payments::PaymentOptionPresence>* value) = 0;
    virtual HRESULT __stdcall put_RequestPayerName(abi_t<Windows::ApplicationModel::Payments::PaymentOptionPresence> value) = 0;
    virtual HRESULT __stdcall get_RequestPayerPhoneNumber(abi_t<Windows::ApplicationModel::Payments::PaymentOptionPresence>* value) = 0;
    virtual HRESULT __stdcall put_RequestPayerPhoneNumber(abi_t<Windows::ApplicationModel::Payments::PaymentOptionPresence> value) = 0;
    virtual HRESULT __stdcall get_RequestShipping(bool* value) = 0;
    virtual HRESULT __stdcall put_RequestShipping(bool value) = 0;
    virtual HRESULT __stdcall get_ShippingType(abi_t<Windows::ApplicationModel::Payments::PaymentShippingType>* value) = 0;
    virtual HRESULT __stdcall put_ShippingType(abi_t<Windows::ApplicationModel::Payments::PaymentShippingType> value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::IPaymentRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MerchantInfo(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Details(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MethodData(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Options(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ChangeKind(abi_t<Windows::ApplicationModel::Payments::PaymentRequestChangeKind>* value) = 0;
    virtual HRESULT __stdcall get_ShippingAddress(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SelectedShippingOption(::IUnknown** value) = 0;
    virtual HRESULT __stdcall Acknowledge(::IUnknown* changeResult) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::IPaymentRequestChangedResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ChangeAcceptedByMerchant(bool* value) = 0;
    virtual HRESULT __stdcall put_ChangeAcceptedByMerchant(bool value) = 0;
    virtual HRESULT __stdcall get_Message(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Message(HSTRING value) = 0;
    virtual HRESULT __stdcall get_UpdatedPaymentDetails(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_UpdatedPaymentDetails(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(bool changeAcceptedByMerchant, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateWithPaymentDetails(bool changeAcceptedByMerchant, ::IUnknown* updatedPaymentDetails, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::IPaymentRequestFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* details, ::IUnknown* methodData, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateWithMerchantInfo(::IUnknown* details, ::IUnknown* methodData, ::IUnknown* merchantInfo, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateWithMerchantInfoAndOptions(::IUnknown* details, ::IUnknown* methodData, ::IUnknown* merchantInfo, ::IUnknown* options, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::ApplicationModel::Payments::PaymentRequestStatus>* value) = 0;
    virtual HRESULT __stdcall get_Response(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::IPaymentResponse>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PaymentToken(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ShippingOption(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ShippingAddress(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PayerEmail(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PayerName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PayerPhoneNumber(HSTRING* value) = 0;
    virtual HRESULT __stdcall CompleteAsync(abi_t<Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus> status, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::IPaymentShippingOption>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Label(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Label(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Amount(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Amount(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Tag(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Tag(HSTRING value) = 0;
    virtual HRESULT __stdcall get_IsSelected(bool* value) = 0;
    virtual HRESULT __stdcall put_IsSelected(bool value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING label, ::IUnknown* amount, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateWithSelected(HSTRING label, ::IUnknown* amount, bool selected, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateWithSelectedAndTag(HSTRING label, ::IUnknown* amount, bool selected, HSTRING tag, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::IPaymentToken>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PaymentMethodId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_JsonDetails(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::IPaymentTokenFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING paymentMethodId, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateWithJsonDetails(HSTRING paymentMethodId, HSTRING jsonDetails, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::PaymentRequestChangedHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* paymentRequest, ::IUnknown* args) = 0;
};};

}
