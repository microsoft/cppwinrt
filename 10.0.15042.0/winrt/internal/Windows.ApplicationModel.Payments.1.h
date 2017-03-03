// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.ApplicationModel.Payments.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::Payments {

struct __declspec(uuid("5f2264e9-6f3a-4166-a018-0a0b06bb32b5")) __declspec(novtable) IPaymentAddress : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Country(hstring * value) = 0;
    virtual HRESULT __stdcall put_Country(hstring value) = 0;
    virtual HRESULT __stdcall get_AddressLines(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
    virtual HRESULT __stdcall put_AddressLines(Windows::Foundation::Collections::IVectorView<hstring> * value) = 0;
    virtual HRESULT __stdcall get_Region(hstring * value) = 0;
    virtual HRESULT __stdcall put_Region(hstring value) = 0;
    virtual HRESULT __stdcall get_City(hstring * value) = 0;
    virtual HRESULT __stdcall put_City(hstring value) = 0;
    virtual HRESULT __stdcall get_DependentLocality(hstring * value) = 0;
    virtual HRESULT __stdcall put_DependentLocality(hstring value) = 0;
    virtual HRESULT __stdcall get_PostalCode(hstring * value) = 0;
    virtual HRESULT __stdcall put_PostalCode(hstring value) = 0;
    virtual HRESULT __stdcall get_SortingCode(hstring * value) = 0;
    virtual HRESULT __stdcall put_SortingCode(hstring value) = 0;
    virtual HRESULT __stdcall get_LanguageCode(hstring * value) = 0;
    virtual HRESULT __stdcall put_LanguageCode(hstring value) = 0;
    virtual HRESULT __stdcall get_Organization(hstring * value) = 0;
    virtual HRESULT __stdcall put_Organization(hstring value) = 0;
    virtual HRESULT __stdcall get_Recipient(hstring * value) = 0;
    virtual HRESULT __stdcall put_Recipient(hstring value) = 0;
    virtual HRESULT __stdcall get_PhoneNumber(hstring * value) = 0;
    virtual HRESULT __stdcall put_PhoneNumber(hstring value) = 0;
    virtual HRESULT __stdcall get_Properties(Windows::Foundation::Collections::IPropertySet ** value) = 0;
};

struct __declspec(uuid("e3a3e9e0-b41f-4987-bdcb-071331f2daa4")) __declspec(novtable) IPaymentCurrencyAmount : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Currency(hstring * value) = 0;
    virtual HRESULT __stdcall put_Currency(hstring value) = 0;
    virtual HRESULT __stdcall get_CurrencySystem(hstring * value) = 0;
    virtual HRESULT __stdcall put_CurrencySystem(hstring value) = 0;
    virtual HRESULT __stdcall get_Value(hstring * value) = 0;
    virtual HRESULT __stdcall put_Value(hstring value) = 0;
};

struct __declspec(uuid("3257d338-140c-4575-8535-f773178c09a7")) __declspec(novtable) IPaymentCurrencyAmountFactory : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_Create(hstring value, hstring currency, Windows::ApplicationModel::Payments::IPaymentCurrencyAmount ** result) = 0;
    virtual HRESULT __stdcall abi_CreateWithCurrencySystem(hstring value, hstring currency, hstring currencySystem, Windows::ApplicationModel::Payments::IPaymentCurrencyAmount ** result) = 0;
};

struct __declspec(uuid("53bb2d7d-e0eb-4053-8eae-ce7c48e02945")) __declspec(novtable) IPaymentDetails : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Total(Windows::ApplicationModel::Payments::IPaymentItem ** value) = 0;
    virtual HRESULT __stdcall put_Total(Windows::ApplicationModel::Payments::IPaymentItem * value) = 0;
    virtual HRESULT __stdcall get_DisplayItems(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem> ** value) = 0;
    virtual HRESULT __stdcall put_DisplayItems(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem> * value) = 0;
    virtual HRESULT __stdcall get_ShippingOptions(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentShippingOption> ** value) = 0;
    virtual HRESULT __stdcall put_ShippingOptions(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentShippingOption> * value) = 0;
    virtual HRESULT __stdcall get_Modifiers(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentDetailsModifier> ** value) = 0;
    virtual HRESULT __stdcall put_Modifiers(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentDetailsModifier> * value) = 0;
};

struct __declspec(uuid("cfe8afee-c0ea-4ca1-8bc7-6de67b1f3763")) __declspec(novtable) IPaymentDetailsFactory : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_Create(Windows::ApplicationModel::Payments::IPaymentItem * total, Windows::ApplicationModel::Payments::IPaymentDetails ** result) = 0;
    virtual HRESULT __stdcall abi_CreateWithDisplayItems(Windows::ApplicationModel::Payments::IPaymentItem * total, Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentItem> * displayItems, Windows::ApplicationModel::Payments::IPaymentDetails ** result) = 0;
};

struct __declspec(uuid("be1c7d65-4323-41d7-b305-dfcb765f69de")) __declspec(novtable) IPaymentDetailsModifier : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_JsonData(hstring * value) = 0;
    virtual HRESULT __stdcall get_SupportedMethodIds(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
    virtual HRESULT __stdcall get_Total(Windows::ApplicationModel::Payments::IPaymentItem ** value) = 0;
    virtual HRESULT __stdcall get_AdditionalDisplayItems(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem> ** value) = 0;
};

struct __declspec(uuid("79005286-54de-429c-9e4f-5dce6e10ebce")) __declspec(novtable) IPaymentDetailsModifierFactory : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_Create(Windows::Foundation::Collections::IIterable<hstring> * supportedMethodIds, Windows::ApplicationModel::Payments::IPaymentItem * total, Windows::ApplicationModel::Payments::IPaymentDetailsModifier ** result) = 0;
    virtual HRESULT __stdcall abi_CreateWithAdditionalDisplayItems(Windows::Foundation::Collections::IIterable<hstring> * supportedMethodIds, Windows::ApplicationModel::Payments::IPaymentItem * total, Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentItem> * additionalDisplayItems, Windows::ApplicationModel::Payments::IPaymentDetailsModifier ** result) = 0;
    virtual HRESULT __stdcall abi_CreateWithAdditionalDisplayItemsAndJsonData(Windows::Foundation::Collections::IIterable<hstring> * supportedMethodIds, Windows::ApplicationModel::Payments::IPaymentItem * total, Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentItem> * additionalDisplayItems, hstring jsonData, Windows::ApplicationModel::Payments::IPaymentDetailsModifier ** result) = 0;
};

struct __declspec(uuid("685ac88b-79b2-4b76-9e03-a876223dfe72")) __declspec(novtable) IPaymentItem : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Label(hstring * value) = 0;
    virtual HRESULT __stdcall put_Label(hstring value) = 0;
    virtual HRESULT __stdcall get_Amount(Windows::ApplicationModel::Payments::IPaymentCurrencyAmount ** value) = 0;
    virtual HRESULT __stdcall put_Amount(Windows::ApplicationModel::Payments::IPaymentCurrencyAmount * value) = 0;
    virtual HRESULT __stdcall get_Pending(bool * value) = 0;
    virtual HRESULT __stdcall put_Pending(bool value) = 0;
};

struct __declspec(uuid("c6ab7ad8-2503-4d1d-a778-02b2e5927b2c")) __declspec(novtable) IPaymentItemFactory : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_Create(hstring label, Windows::ApplicationModel::Payments::IPaymentCurrencyAmount * amount, Windows::ApplicationModel::Payments::IPaymentItem ** result) = 0;
};

struct __declspec(uuid("fb0ee829-ec0c-449a-83da-7ae3073365a2")) __declspec(novtable) IPaymentMediator : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_GetSupportedMethodIdsAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> ** result) = 0;
    virtual HRESULT __stdcall abi_SubmitPaymentRequestAsync(Windows::ApplicationModel::Payments::IPaymentRequest * paymentRequest, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult> ** result) = 0;
    virtual HRESULT __stdcall abi_SubmitPaymentRequestWithChangeHandlerAsync(Windows::ApplicationModel::Payments::IPaymentRequest * paymentRequest, Windows::ApplicationModel::Payments::PaymentRequestChangedHandler * changeHandler, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult> ** result) = 0;
};

struct __declspec(uuid("63445050-0e94-4ed6-aacb-e6012bd327a7")) __declspec(novtable) IPaymentMerchantInfo : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_PackageFullName(hstring * value) = 0;
    virtual HRESULT __stdcall get_Uri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
};

struct __declspec(uuid("9e89ced3-ccb7-4167-a8ec-e10ae96dbcd1")) __declspec(novtable) IPaymentMerchantInfoFactory : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_Create(Windows::Foundation::IUriRuntimeClass * uri, Windows::ApplicationModel::Payments::IPaymentMerchantInfo ** result) = 0;
};

struct __declspec(uuid("d1d3caf4-de98-4129-b1b7-c3ad86237bf4")) __declspec(novtable) IPaymentMethodData : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_SupportedMethodIds(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
    virtual HRESULT __stdcall get_JsonData(hstring * value) = 0;
};

struct __declspec(uuid("8addd27f-9baa-4a82-8342-a8210992a36b")) __declspec(novtable) IPaymentMethodDataFactory : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_Create(Windows::Foundation::Collections::IIterable<hstring> * supportedMethodIds, Windows::ApplicationModel::Payments::IPaymentMethodData ** result) = 0;
    virtual HRESULT __stdcall abi_CreateWithJsonData(Windows::Foundation::Collections::IIterable<hstring> * supportedMethodIds, hstring jsonData, Windows::ApplicationModel::Payments::IPaymentMethodData ** result) = 0;
};

struct __declspec(uuid("aaa30854-1f2b-4365-8251-01b58915a5bc")) __declspec(novtable) IPaymentOptions : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_RequestPayerEmail(winrt::Windows::ApplicationModel::Payments::PaymentOptionPresence * value) = 0;
    virtual HRESULT __stdcall put_RequestPayerEmail(winrt::Windows::ApplicationModel::Payments::PaymentOptionPresence value) = 0;
    virtual HRESULT __stdcall get_RequestPayerName(winrt::Windows::ApplicationModel::Payments::PaymentOptionPresence * value) = 0;
    virtual HRESULT __stdcall put_RequestPayerName(winrt::Windows::ApplicationModel::Payments::PaymentOptionPresence value) = 0;
    virtual HRESULT __stdcall get_RequestPayerPhoneNumber(winrt::Windows::ApplicationModel::Payments::PaymentOptionPresence * value) = 0;
    virtual HRESULT __stdcall put_RequestPayerPhoneNumber(winrt::Windows::ApplicationModel::Payments::PaymentOptionPresence value) = 0;
    virtual HRESULT __stdcall get_RequestShipping(bool * value) = 0;
    virtual HRESULT __stdcall put_RequestShipping(bool value) = 0;
    virtual HRESULT __stdcall get_ShippingType(winrt::Windows::ApplicationModel::Payments::PaymentShippingType * value) = 0;
    virtual HRESULT __stdcall put_ShippingType(winrt::Windows::ApplicationModel::Payments::PaymentShippingType value) = 0;
};

struct __declspec(uuid("b74942e1-ed7b-47eb-bc08-78cc5d6896b6")) __declspec(novtable) IPaymentRequest : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_MerchantInfo(Windows::ApplicationModel::Payments::IPaymentMerchantInfo ** value) = 0;
    virtual HRESULT __stdcall get_Details(Windows::ApplicationModel::Payments::IPaymentDetails ** value) = 0;
    virtual HRESULT __stdcall get_MethodData(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentMethodData> ** value) = 0;
    virtual HRESULT __stdcall get_Options(Windows::ApplicationModel::Payments::IPaymentOptions ** value) = 0;
};

struct __declspec(uuid("c6145e44-cd8b-4be4-b555-27c99194c0c5")) __declspec(novtable) IPaymentRequestChangedArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_ChangeKind(winrt::Windows::ApplicationModel::Payments::PaymentRequestChangeKind * value) = 0;
    virtual HRESULT __stdcall get_ShippingAddress(Windows::ApplicationModel::Payments::IPaymentAddress ** value) = 0;
    virtual HRESULT __stdcall get_SelectedShippingOption(Windows::ApplicationModel::Payments::IPaymentShippingOption ** value) = 0;
    virtual HRESULT __stdcall abi_Acknowledge(Windows::ApplicationModel::Payments::IPaymentRequestChangedResult * changeResult) = 0;
};

struct __declspec(uuid("df699e5c-16c4-47ad-9401-8440ec0757db")) __declspec(novtable) IPaymentRequestChangedResult : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_ChangeAcceptedByMerchant(bool * value) = 0;
    virtual HRESULT __stdcall put_ChangeAcceptedByMerchant(bool value) = 0;
    virtual HRESULT __stdcall get_Message(hstring * value) = 0;
    virtual HRESULT __stdcall put_Message(hstring value) = 0;
    virtual HRESULT __stdcall get_UpdatedPaymentDetails(Windows::ApplicationModel::Payments::IPaymentDetails ** value) = 0;
    virtual HRESULT __stdcall put_UpdatedPaymentDetails(Windows::ApplicationModel::Payments::IPaymentDetails * value) = 0;
};

struct __declspec(uuid("08740f56-1d33-4431-814b-67ea24bf21db")) __declspec(novtable) IPaymentRequestChangedResultFactory : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_Create(bool changeAcceptedByMerchant, Windows::ApplicationModel::Payments::IPaymentRequestChangedResult ** result) = 0;
    virtual HRESULT __stdcall abi_CreateWithPaymentDetails(bool changeAcceptedByMerchant, Windows::ApplicationModel::Payments::IPaymentDetails * updatedPaymentDetails, Windows::ApplicationModel::Payments::IPaymentRequestChangedResult ** result) = 0;
};

struct __declspec(uuid("3e8a79dc-6b74-42d3-b103-f0de35fb1848")) __declspec(novtable) IPaymentRequestFactory : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_Create(Windows::ApplicationModel::Payments::IPaymentDetails * details, Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentMethodData> * methodData, Windows::ApplicationModel::Payments::IPaymentRequest ** result) = 0;
    virtual HRESULT __stdcall abi_CreateWithMerchantInfo(Windows::ApplicationModel::Payments::IPaymentDetails * details, Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentMethodData> * methodData, Windows::ApplicationModel::Payments::IPaymentMerchantInfo * merchantInfo, Windows::ApplicationModel::Payments::IPaymentRequest ** result) = 0;
    virtual HRESULT __stdcall abi_CreateWithMerchantInfoAndOptions(Windows::ApplicationModel::Payments::IPaymentDetails * details, Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentMethodData> * methodData, Windows::ApplicationModel::Payments::IPaymentMerchantInfo * merchantInfo, Windows::ApplicationModel::Payments::IPaymentOptions * options, Windows::ApplicationModel::Payments::IPaymentRequest ** result) = 0;
};

struct __declspec(uuid("7b9c3912-30f2-4e90-b249-8ce7d78ffe56")) __declspec(novtable) IPaymentRequestSubmitResult : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::ApplicationModel::Payments::PaymentRequestStatus * value) = 0;
    virtual HRESULT __stdcall get_Response(Windows::ApplicationModel::Payments::IPaymentResponse ** value) = 0;
};

struct __declspec(uuid("e1389457-8bd2-4888-9fa8-97985545108e")) __declspec(novtable) IPaymentResponse : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_PaymentToken(Windows::ApplicationModel::Payments::IPaymentToken ** value) = 0;
    virtual HRESULT __stdcall get_ShippingOption(Windows::ApplicationModel::Payments::IPaymentShippingOption ** value) = 0;
    virtual HRESULT __stdcall get_ShippingAddress(Windows::ApplicationModel::Payments::IPaymentAddress ** value) = 0;
    virtual HRESULT __stdcall get_PayerEmail(hstring * value) = 0;
    virtual HRESULT __stdcall get_PayerName(hstring * value) = 0;
    virtual HRESULT __stdcall get_PayerPhoneNumber(hstring * value) = 0;
    virtual HRESULT __stdcall abi_CompleteAsync(winrt::Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus status, Windows::Foundation::IAsyncAction ** result) = 0;
};

struct __declspec(uuid("13372ada-9753-4574-8966-93145a76c7f9")) __declspec(novtable) IPaymentShippingOption : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Label(hstring * value) = 0;
    virtual HRESULT __stdcall put_Label(hstring value) = 0;
    virtual HRESULT __stdcall get_Amount(Windows::ApplicationModel::Payments::IPaymentCurrencyAmount ** value) = 0;
    virtual HRESULT __stdcall put_Amount(Windows::ApplicationModel::Payments::IPaymentCurrencyAmount * value) = 0;
    virtual HRESULT __stdcall get_Tag(hstring * value) = 0;
    virtual HRESULT __stdcall put_Tag(hstring value) = 0;
    virtual HRESULT __stdcall get_IsSelected(bool * value) = 0;
    virtual HRESULT __stdcall put_IsSelected(bool value) = 0;
};

struct __declspec(uuid("5de5f917-b2d7-446b-9d73-6123fbca3bc6")) __declspec(novtable) IPaymentShippingOptionFactory : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_Create(hstring label, Windows::ApplicationModel::Payments::IPaymentCurrencyAmount * amount, Windows::ApplicationModel::Payments::IPaymentShippingOption ** result) = 0;
    virtual HRESULT __stdcall abi_CreateWithSelected(hstring label, Windows::ApplicationModel::Payments::IPaymentCurrencyAmount * amount, bool selected, Windows::ApplicationModel::Payments::IPaymentShippingOption ** result) = 0;
    virtual HRESULT __stdcall abi_CreateWithSelectedAndTag(hstring label, Windows::ApplicationModel::Payments::IPaymentCurrencyAmount * amount, bool selected, hstring tag, Windows::ApplicationModel::Payments::IPaymentShippingOption ** result) = 0;
};

struct __declspec(uuid("bbcac013-ccd0-41f2-b2a1-0a2e4b5dce25")) __declspec(novtable) IPaymentToken : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_PaymentMethodId(hstring * value) = 0;
    virtual HRESULT __stdcall get_JsonDetails(hstring * value) = 0;
};

struct __declspec(uuid("988cd7aa-4753-4904-8373-dd7b08b995c1")) __declspec(novtable) IPaymentTokenFactory : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_Create(hstring paymentMethodId, Windows::ApplicationModel::Payments::IPaymentToken ** result) = 0;
    virtual HRESULT __stdcall abi_CreateWithJsonDetails(hstring paymentMethodId, hstring jsonDetails, Windows::ApplicationModel::Payments::IPaymentToken ** result) = 0;
};

struct __declspec(uuid("5078b9e1-f398-4f2c-a27e-94d371cf6c7d")) __declspec(novtable) PaymentRequestChangedHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::ApplicationModel::Payments::IPaymentRequest * paymentRequest, Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs * args) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::ApplicationModel::Payments::PaymentAddress> { using default_interface = Windows::ApplicationModel::Payments::IPaymentAddress; };
template <> struct traits<Windows::ApplicationModel::Payments::PaymentCurrencyAmount> { using default_interface = Windows::ApplicationModel::Payments::IPaymentCurrencyAmount; };
template <> struct traits<Windows::ApplicationModel::Payments::PaymentDetails> { using default_interface = Windows::ApplicationModel::Payments::IPaymentDetails; };
template <> struct traits<Windows::ApplicationModel::Payments::PaymentDetailsModifier> { using default_interface = Windows::ApplicationModel::Payments::IPaymentDetailsModifier; };
template <> struct traits<Windows::ApplicationModel::Payments::PaymentItem> { using default_interface = Windows::ApplicationModel::Payments::IPaymentItem; };
template <> struct traits<Windows::ApplicationModel::Payments::PaymentMediator> { using default_interface = Windows::ApplicationModel::Payments::IPaymentMediator; };
template <> struct traits<Windows::ApplicationModel::Payments::PaymentMerchantInfo> { using default_interface = Windows::ApplicationModel::Payments::IPaymentMerchantInfo; };
template <> struct traits<Windows::ApplicationModel::Payments::PaymentMethodData> { using default_interface = Windows::ApplicationModel::Payments::IPaymentMethodData; };
template <> struct traits<Windows::ApplicationModel::Payments::PaymentOptions> { using default_interface = Windows::ApplicationModel::Payments::IPaymentOptions; };
template <> struct traits<Windows::ApplicationModel::Payments::PaymentRequest> { using default_interface = Windows::ApplicationModel::Payments::IPaymentRequest; };
template <> struct traits<Windows::ApplicationModel::Payments::PaymentRequestChangedArgs> { using default_interface = Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs; };
template <> struct traits<Windows::ApplicationModel::Payments::PaymentRequestChangedResult> { using default_interface = Windows::ApplicationModel::Payments::IPaymentRequestChangedResult; };
template <> struct traits<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult> { using default_interface = Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult; };
template <> struct traits<Windows::ApplicationModel::Payments::PaymentResponse> { using default_interface = Windows::ApplicationModel::Payments::IPaymentResponse; };
template <> struct traits<Windows::ApplicationModel::Payments::PaymentShippingOption> { using default_interface = Windows::ApplicationModel::Payments::IPaymentShippingOption; };
template <> struct traits<Windows::ApplicationModel::Payments::PaymentToken> { using default_interface = Windows::ApplicationModel::Payments::IPaymentToken; };

}

namespace Windows::ApplicationModel::Payments {

template <typename D>
struct WINRT_EBO impl_IPaymentAddress
{
    hstring Country() const;
    void Country(hstring_view value) const;
    Windows::Foundation::Collections::IVectorView<hstring> AddressLines() const;
    void AddressLines(const Windows::Foundation::Collections::IVectorView<hstring> & value) const;
    hstring Region() const;
    void Region(hstring_view value) const;
    hstring City() const;
    void City(hstring_view value) const;
    hstring DependentLocality() const;
    void DependentLocality(hstring_view value) const;
    hstring PostalCode() const;
    void PostalCode(hstring_view value) const;
    hstring SortingCode() const;
    void SortingCode(hstring_view value) const;
    hstring LanguageCode() const;
    void LanguageCode(hstring_view value) const;
    hstring Organization() const;
    void Organization(hstring_view value) const;
    hstring Recipient() const;
    void Recipient(hstring_view value) const;
    hstring PhoneNumber() const;
    void PhoneNumber(hstring_view value) const;
    Windows::Foundation::Collections::ValueSet Properties() const;
};

template <typename D>
struct WINRT_EBO impl_IPaymentCurrencyAmount
{
    hstring Currency() const;
    void Currency(hstring_view value) const;
    hstring CurrencySystem() const;
    void CurrencySystem(hstring_view value) const;
    hstring Value() const;
    void Value(hstring_view value) const;
};

template <typename D>
struct WINRT_EBO impl_IPaymentCurrencyAmountFactory
{
    Windows::ApplicationModel::Payments::PaymentCurrencyAmount Create(hstring_view value, hstring_view currency) const;
    Windows::ApplicationModel::Payments::PaymentCurrencyAmount CreateWithCurrencySystem(hstring_view value, hstring_view currency, hstring_view currencySystem) const;
};

template <typename D>
struct WINRT_EBO impl_IPaymentDetails
{
    Windows::ApplicationModel::Payments::PaymentItem Total() const;
    void Total(const Windows::ApplicationModel::Payments::PaymentItem & value) const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem> DisplayItems() const;
    void DisplayItems(const Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem> & value) const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentShippingOption> ShippingOptions() const;
    void ShippingOptions(const Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentShippingOption> & value) const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentDetailsModifier> Modifiers() const;
    void Modifiers(const Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentDetailsModifier> & value) const;
};

template <typename D>
struct WINRT_EBO impl_IPaymentDetailsFactory
{
    Windows::ApplicationModel::Payments::PaymentDetails Create(const Windows::ApplicationModel::Payments::PaymentItem & total) const;
    Windows::ApplicationModel::Payments::PaymentDetails CreateWithDisplayItems(const Windows::ApplicationModel::Payments::PaymentItem & total, iterable<Windows::ApplicationModel::Payments::PaymentItem> displayItems) const;
};

template <typename D>
struct WINRT_EBO impl_IPaymentDetailsModifier
{
    hstring JsonData() const;
    Windows::Foundation::Collections::IVectorView<hstring> SupportedMethodIds() const;
    Windows::ApplicationModel::Payments::PaymentItem Total() const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem> AdditionalDisplayItems() const;
};

template <typename D>
struct WINRT_EBO impl_IPaymentDetailsModifierFactory
{
    Windows::ApplicationModel::Payments::PaymentDetailsModifier Create(iterable<hstring> supportedMethodIds, const Windows::ApplicationModel::Payments::PaymentItem & total) const;
    Windows::ApplicationModel::Payments::PaymentDetailsModifier CreateWithAdditionalDisplayItems(iterable<hstring> supportedMethodIds, const Windows::ApplicationModel::Payments::PaymentItem & total, iterable<Windows::ApplicationModel::Payments::PaymentItem> additionalDisplayItems) const;
    Windows::ApplicationModel::Payments::PaymentDetailsModifier CreateWithAdditionalDisplayItemsAndJsonData(iterable<hstring> supportedMethodIds, const Windows::ApplicationModel::Payments::PaymentItem & total, iterable<Windows::ApplicationModel::Payments::PaymentItem> additionalDisplayItems, hstring_view jsonData) const;
};

template <typename D>
struct WINRT_EBO impl_IPaymentItem
{
    hstring Label() const;
    void Label(hstring_view value) const;
    Windows::ApplicationModel::Payments::PaymentCurrencyAmount Amount() const;
    void Amount(const Windows::ApplicationModel::Payments::PaymentCurrencyAmount & value) const;
    bool Pending() const;
    void Pending(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_IPaymentItemFactory
{
    Windows::ApplicationModel::Payments::PaymentItem Create(hstring_view label, const Windows::ApplicationModel::Payments::PaymentCurrencyAmount & amount) const;
};

template <typename D>
struct WINRT_EBO impl_IPaymentMediator
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> GetSupportedMethodIdsAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult> SubmitPaymentRequestAsync(const Windows::ApplicationModel::Payments::PaymentRequest & paymentRequest) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult> SubmitPaymentRequestAsync(const Windows::ApplicationModel::Payments::PaymentRequest & paymentRequest, const Windows::ApplicationModel::Payments::PaymentRequestChangedHandler & changeHandler) const;
};

template <typename D>
struct WINRT_EBO impl_IPaymentMerchantInfo
{
    hstring PackageFullName() const;
    Windows::Foundation::Uri Uri() const;
};

template <typename D>
struct WINRT_EBO impl_IPaymentMerchantInfoFactory
{
    Windows::ApplicationModel::Payments::PaymentMerchantInfo Create(const Windows::Foundation::Uri & uri) const;
};

template <typename D>
struct WINRT_EBO impl_IPaymentMethodData
{
    Windows::Foundation::Collections::IVectorView<hstring> SupportedMethodIds() const;
    hstring JsonData() const;
};

template <typename D>
struct WINRT_EBO impl_IPaymentMethodDataFactory
{
    Windows::ApplicationModel::Payments::PaymentMethodData Create(iterable<hstring> supportedMethodIds) const;
    Windows::ApplicationModel::Payments::PaymentMethodData CreateWithJsonData(iterable<hstring> supportedMethodIds, hstring_view jsonData) const;
};

template <typename D>
struct WINRT_EBO impl_IPaymentOptions
{
    Windows::ApplicationModel::Payments::PaymentOptionPresence RequestPayerEmail() const;
    void RequestPayerEmail(Windows::ApplicationModel::Payments::PaymentOptionPresence value) const;
    Windows::ApplicationModel::Payments::PaymentOptionPresence RequestPayerName() const;
    void RequestPayerName(Windows::ApplicationModel::Payments::PaymentOptionPresence value) const;
    Windows::ApplicationModel::Payments::PaymentOptionPresence RequestPayerPhoneNumber() const;
    void RequestPayerPhoneNumber(Windows::ApplicationModel::Payments::PaymentOptionPresence value) const;
    bool RequestShipping() const;
    void RequestShipping(bool value) const;
    Windows::ApplicationModel::Payments::PaymentShippingType ShippingType() const;
    void ShippingType(Windows::ApplicationModel::Payments::PaymentShippingType value) const;
};

template <typename D>
struct WINRT_EBO impl_IPaymentRequest
{
    Windows::ApplicationModel::Payments::PaymentMerchantInfo MerchantInfo() const;
    Windows::ApplicationModel::Payments::PaymentDetails Details() const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentMethodData> MethodData() const;
    Windows::ApplicationModel::Payments::PaymentOptions Options() const;
};

template <typename D>
struct WINRT_EBO impl_IPaymentRequestChangedArgs
{
    Windows::ApplicationModel::Payments::PaymentRequestChangeKind ChangeKind() const;
    Windows::ApplicationModel::Payments::PaymentAddress ShippingAddress() const;
    Windows::ApplicationModel::Payments::PaymentShippingOption SelectedShippingOption() const;
    void Acknowledge(const Windows::ApplicationModel::Payments::PaymentRequestChangedResult & changeResult) const;
};

template <typename D>
struct WINRT_EBO impl_IPaymentRequestChangedResult
{
    bool ChangeAcceptedByMerchant() const;
    void ChangeAcceptedByMerchant(bool value) const;
    hstring Message() const;
    void Message(hstring_view value) const;
    Windows::ApplicationModel::Payments::PaymentDetails UpdatedPaymentDetails() const;
    void UpdatedPaymentDetails(const Windows::ApplicationModel::Payments::PaymentDetails & value) const;
};

template <typename D>
struct WINRT_EBO impl_IPaymentRequestChangedResultFactory
{
    Windows::ApplicationModel::Payments::PaymentRequestChangedResult Create(bool changeAcceptedByMerchant) const;
    Windows::ApplicationModel::Payments::PaymentRequestChangedResult CreateWithPaymentDetails(bool changeAcceptedByMerchant, const Windows::ApplicationModel::Payments::PaymentDetails & updatedPaymentDetails) const;
};

template <typename D>
struct WINRT_EBO impl_IPaymentRequestFactory
{
    Windows::ApplicationModel::Payments::PaymentRequest Create(const Windows::ApplicationModel::Payments::PaymentDetails & details, iterable<Windows::ApplicationModel::Payments::PaymentMethodData> methodData) const;
    Windows::ApplicationModel::Payments::PaymentRequest CreateWithMerchantInfo(const Windows::ApplicationModel::Payments::PaymentDetails & details, iterable<Windows::ApplicationModel::Payments::PaymentMethodData> methodData, const Windows::ApplicationModel::Payments::PaymentMerchantInfo & merchantInfo) const;
    Windows::ApplicationModel::Payments::PaymentRequest CreateWithMerchantInfoAndOptions(const Windows::ApplicationModel::Payments::PaymentDetails & details, iterable<Windows::ApplicationModel::Payments::PaymentMethodData> methodData, const Windows::ApplicationModel::Payments::PaymentMerchantInfo & merchantInfo, const Windows::ApplicationModel::Payments::PaymentOptions & options) const;
};

template <typename D>
struct WINRT_EBO impl_IPaymentRequestSubmitResult
{
    Windows::ApplicationModel::Payments::PaymentRequestStatus Status() const;
    Windows::ApplicationModel::Payments::PaymentResponse Response() const;
};

template <typename D>
struct WINRT_EBO impl_IPaymentResponse
{
    Windows::ApplicationModel::Payments::PaymentToken PaymentToken() const;
    Windows::ApplicationModel::Payments::PaymentShippingOption ShippingOption() const;
    Windows::ApplicationModel::Payments::PaymentAddress ShippingAddress() const;
    hstring PayerEmail() const;
    hstring PayerName() const;
    hstring PayerPhoneNumber() const;
    Windows::Foundation::IAsyncAction CompleteAsync(Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus status) const;
};

template <typename D>
struct WINRT_EBO impl_IPaymentShippingOption
{
    hstring Label() const;
    void Label(hstring_view value) const;
    Windows::ApplicationModel::Payments::PaymentCurrencyAmount Amount() const;
    void Amount(const Windows::ApplicationModel::Payments::PaymentCurrencyAmount & value) const;
    hstring Tag() const;
    void Tag(hstring_view value) const;
    bool IsSelected() const;
    void IsSelected(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_IPaymentShippingOptionFactory
{
    Windows::ApplicationModel::Payments::PaymentShippingOption Create(hstring_view label, const Windows::ApplicationModel::Payments::PaymentCurrencyAmount & amount) const;
    Windows::ApplicationModel::Payments::PaymentShippingOption CreateWithSelected(hstring_view label, const Windows::ApplicationModel::Payments::PaymentCurrencyAmount & amount, bool selected) const;
    Windows::ApplicationModel::Payments::PaymentShippingOption CreateWithSelectedAndTag(hstring_view label, const Windows::ApplicationModel::Payments::PaymentCurrencyAmount & amount, bool selected, hstring_view tag) const;
};

template <typename D>
struct WINRT_EBO impl_IPaymentToken
{
    hstring PaymentMethodId() const;
    hstring JsonDetails() const;
};

template <typename D>
struct WINRT_EBO impl_IPaymentTokenFactory
{
    Windows::ApplicationModel::Payments::PaymentToken Create(hstring_view paymentMethodId) const;
    Windows::ApplicationModel::Payments::PaymentToken CreateWithJsonDetails(hstring_view paymentMethodId, hstring_view jsonDetails) const;
};

}

namespace impl {

template <> struct traits<Windows::ApplicationModel::Payments::IPaymentAddress>
{
    using abi = ABI::Windows::ApplicationModel::Payments::IPaymentAddress;
    template <typename D> using consume = Windows::ApplicationModel::Payments::impl_IPaymentAddress<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::IPaymentCurrencyAmount>
{
    using abi = ABI::Windows::ApplicationModel::Payments::IPaymentCurrencyAmount;
    template <typename D> using consume = Windows::ApplicationModel::Payments::impl_IPaymentCurrencyAmount<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory>
{
    using abi = ABI::Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory;
    template <typename D> using consume = Windows::ApplicationModel::Payments::impl_IPaymentCurrencyAmountFactory<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::IPaymentDetails>
{
    using abi = ABI::Windows::ApplicationModel::Payments::IPaymentDetails;
    template <typename D> using consume = Windows::ApplicationModel::Payments::impl_IPaymentDetails<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::IPaymentDetailsFactory>
{
    using abi = ABI::Windows::ApplicationModel::Payments::IPaymentDetailsFactory;
    template <typename D> using consume = Windows::ApplicationModel::Payments::impl_IPaymentDetailsFactory<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::IPaymentDetailsModifier>
{
    using abi = ABI::Windows::ApplicationModel::Payments::IPaymentDetailsModifier;
    template <typename D> using consume = Windows::ApplicationModel::Payments::impl_IPaymentDetailsModifier<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory>
{
    using abi = ABI::Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory;
    template <typename D> using consume = Windows::ApplicationModel::Payments::impl_IPaymentDetailsModifierFactory<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::IPaymentItem>
{
    using abi = ABI::Windows::ApplicationModel::Payments::IPaymentItem;
    template <typename D> using consume = Windows::ApplicationModel::Payments::impl_IPaymentItem<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::IPaymentItemFactory>
{
    using abi = ABI::Windows::ApplicationModel::Payments::IPaymentItemFactory;
    template <typename D> using consume = Windows::ApplicationModel::Payments::impl_IPaymentItemFactory<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::IPaymentMediator>
{
    using abi = ABI::Windows::ApplicationModel::Payments::IPaymentMediator;
    template <typename D> using consume = Windows::ApplicationModel::Payments::impl_IPaymentMediator<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::IPaymentMerchantInfo>
{
    using abi = ABI::Windows::ApplicationModel::Payments::IPaymentMerchantInfo;
    template <typename D> using consume = Windows::ApplicationModel::Payments::impl_IPaymentMerchantInfo<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory>
{
    using abi = ABI::Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory;
    template <typename D> using consume = Windows::ApplicationModel::Payments::impl_IPaymentMerchantInfoFactory<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::IPaymentMethodData>
{
    using abi = ABI::Windows::ApplicationModel::Payments::IPaymentMethodData;
    template <typename D> using consume = Windows::ApplicationModel::Payments::impl_IPaymentMethodData<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::IPaymentMethodDataFactory>
{
    using abi = ABI::Windows::ApplicationModel::Payments::IPaymentMethodDataFactory;
    template <typename D> using consume = Windows::ApplicationModel::Payments::impl_IPaymentMethodDataFactory<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::IPaymentOptions>
{
    using abi = ABI::Windows::ApplicationModel::Payments::IPaymentOptions;
    template <typename D> using consume = Windows::ApplicationModel::Payments::impl_IPaymentOptions<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::IPaymentRequest>
{
    using abi = ABI::Windows::ApplicationModel::Payments::IPaymentRequest;
    template <typename D> using consume = Windows::ApplicationModel::Payments::impl_IPaymentRequest<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs>
{
    using abi = ABI::Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs;
    template <typename D> using consume = Windows::ApplicationModel::Payments::impl_IPaymentRequestChangedArgs<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::IPaymentRequestChangedResult>
{
    using abi = ABI::Windows::ApplicationModel::Payments::IPaymentRequestChangedResult;
    template <typename D> using consume = Windows::ApplicationModel::Payments::impl_IPaymentRequestChangedResult<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory>
{
    using abi = ABI::Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory;
    template <typename D> using consume = Windows::ApplicationModel::Payments::impl_IPaymentRequestChangedResultFactory<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::IPaymentRequestFactory>
{
    using abi = ABI::Windows::ApplicationModel::Payments::IPaymentRequestFactory;
    template <typename D> using consume = Windows::ApplicationModel::Payments::impl_IPaymentRequestFactory<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult>
{
    using abi = ABI::Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult;
    template <typename D> using consume = Windows::ApplicationModel::Payments::impl_IPaymentRequestSubmitResult<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::IPaymentResponse>
{
    using abi = ABI::Windows::ApplicationModel::Payments::IPaymentResponse;
    template <typename D> using consume = Windows::ApplicationModel::Payments::impl_IPaymentResponse<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::IPaymentShippingOption>
{
    using abi = ABI::Windows::ApplicationModel::Payments::IPaymentShippingOption;
    template <typename D> using consume = Windows::ApplicationModel::Payments::impl_IPaymentShippingOption<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory>
{
    using abi = ABI::Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory;
    template <typename D> using consume = Windows::ApplicationModel::Payments::impl_IPaymentShippingOptionFactory<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::IPaymentToken>
{
    using abi = ABI::Windows::ApplicationModel::Payments::IPaymentToken;
    template <typename D> using consume = Windows::ApplicationModel::Payments::impl_IPaymentToken<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::IPaymentTokenFactory>
{
    using abi = ABI::Windows::ApplicationModel::Payments::IPaymentTokenFactory;
    template <typename D> using consume = Windows::ApplicationModel::Payments::impl_IPaymentTokenFactory<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::PaymentRequestChangedHandler>
{
    using abi = ABI::Windows::ApplicationModel::Payments::PaymentRequestChangedHandler;
};

template <> struct traits<Windows::ApplicationModel::Payments::PaymentAddress>
{
    using abi = ABI::Windows::ApplicationModel::Payments::PaymentAddress;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Payments.PaymentAddress"; }
};

template <> struct traits<Windows::ApplicationModel::Payments::PaymentCurrencyAmount>
{
    using abi = ABI::Windows::ApplicationModel::Payments::PaymentCurrencyAmount;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Payments.PaymentCurrencyAmount"; }
};

template <> struct traits<Windows::ApplicationModel::Payments::PaymentDetails>
{
    using abi = ABI::Windows::ApplicationModel::Payments::PaymentDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Payments.PaymentDetails"; }
};

template <> struct traits<Windows::ApplicationModel::Payments::PaymentDetailsModifier>
{
    using abi = ABI::Windows::ApplicationModel::Payments::PaymentDetailsModifier;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Payments.PaymentDetailsModifier"; }
};

template <> struct traits<Windows::ApplicationModel::Payments::PaymentItem>
{
    using abi = ABI::Windows::ApplicationModel::Payments::PaymentItem;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Payments.PaymentItem"; }
};

template <> struct traits<Windows::ApplicationModel::Payments::PaymentMediator>
{
    using abi = ABI::Windows::ApplicationModel::Payments::PaymentMediator;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Payments.PaymentMediator"; }
};

template <> struct traits<Windows::ApplicationModel::Payments::PaymentMerchantInfo>
{
    using abi = ABI::Windows::ApplicationModel::Payments::PaymentMerchantInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Payments.PaymentMerchantInfo"; }
};

template <> struct traits<Windows::ApplicationModel::Payments::PaymentMethodData>
{
    using abi = ABI::Windows::ApplicationModel::Payments::PaymentMethodData;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Payments.PaymentMethodData"; }
};

template <> struct traits<Windows::ApplicationModel::Payments::PaymentOptions>
{
    using abi = ABI::Windows::ApplicationModel::Payments::PaymentOptions;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Payments.PaymentOptions"; }
};

template <> struct traits<Windows::ApplicationModel::Payments::PaymentRequest>
{
    using abi = ABI::Windows::ApplicationModel::Payments::PaymentRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Payments.PaymentRequest"; }
};

template <> struct traits<Windows::ApplicationModel::Payments::PaymentRequestChangedArgs>
{
    using abi = ABI::Windows::ApplicationModel::Payments::PaymentRequestChangedArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Payments.PaymentRequestChangedArgs"; }
};

template <> struct traits<Windows::ApplicationModel::Payments::PaymentRequestChangedResult>
{
    using abi = ABI::Windows::ApplicationModel::Payments::PaymentRequestChangedResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Payments.PaymentRequestChangedResult"; }
};

template <> struct traits<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult>
{
    using abi = ABI::Windows::ApplicationModel::Payments::PaymentRequestSubmitResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Payments.PaymentRequestSubmitResult"; }
};

template <> struct traits<Windows::ApplicationModel::Payments::PaymentResponse>
{
    using abi = ABI::Windows::ApplicationModel::Payments::PaymentResponse;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Payments.PaymentResponse"; }
};

template <> struct traits<Windows::ApplicationModel::Payments::PaymentShippingOption>
{
    using abi = ABI::Windows::ApplicationModel::Payments::PaymentShippingOption;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Payments.PaymentShippingOption"; }
};

template <> struct traits<Windows::ApplicationModel::Payments::PaymentToken>
{
    using abi = ABI::Windows::ApplicationModel::Payments::PaymentToken;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Payments.PaymentToken"; }
};

}

}
