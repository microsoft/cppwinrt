// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.ApplicationModel.Payments.2.h"
#include "winrt/Windows.ApplicationModel.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::Country() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_Country(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::Country(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_Country(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::AddressLines() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_AddressLines(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::AddressLines(param::async_vector_view<hstring> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_AddressLines(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::Region() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_Region(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::Region(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_Region(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::City() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_City(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::City(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_City(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::DependentLocality() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_DependentLocality(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::DependentLocality(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_DependentLocality(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::PostalCode() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_PostalCode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::PostalCode(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_PostalCode(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::SortingCode() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_SortingCode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::SortingCode(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_SortingCode(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::LanguageCode() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_LanguageCode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::LanguageCode(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_LanguageCode(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::Organization() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_Organization(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::Organization(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_Organization(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::Recipient() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_Recipient(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::Recipient(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_Recipient(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::PhoneNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_PhoneNumber(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::PhoneNumber(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_PhoneNumber(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::ValueSet consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::Properties() const
{
    Windows::Foundation::Collections::ValueSet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmount<D>::Currency() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentCurrencyAmount)->get_Currency(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmount<D>::Currency(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentCurrencyAmount)->put_Currency(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmount<D>::CurrencySystem() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentCurrencyAmount)->get_CurrencySystem(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmount<D>::CurrencySystem(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentCurrencyAmount)->put_CurrencySystem(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmount<D>::Value() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentCurrencyAmount)->get_Value(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmount<D>::Value(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentCurrencyAmount)->put_Value(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentCurrencyAmount consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmountFactory<D>::Create(param::hstring const& value, param::hstring const& currency) const
{
    Windows::ApplicationModel::Payments::PaymentCurrencyAmount result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory)->Create(get_abi(value), get_abi(currency), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentCurrencyAmount consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmountFactory<D>::CreateWithCurrencySystem(param::hstring const& value, param::hstring const& currency, param::hstring const& currencySystem) const
{
    Windows::ApplicationModel::Payments::PaymentCurrencyAmount result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory)->CreateWithCurrencySystem(get_abi(value), get_abi(currency), get_abi(currencySystem), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentItem consume_Windows_ApplicationModel_Payments_IPaymentDetails<D>::Total() const
{
    Windows::ApplicationModel::Payments::PaymentItem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetails)->get_Total(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentDetails<D>::Total(Windows::ApplicationModel::Payments::PaymentItem const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetails)->put_Total(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem> consume_Windows_ApplicationModel_Payments_IPaymentDetails<D>::DisplayItems() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetails)->get_DisplayItems(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentDetails<D>::DisplayItems(param::async_vector_view<Windows::ApplicationModel::Payments::PaymentItem> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetails)->put_DisplayItems(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentShippingOption> consume_Windows_ApplicationModel_Payments_IPaymentDetails<D>::ShippingOptions() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentShippingOption> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetails)->get_ShippingOptions(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentDetails<D>::ShippingOptions(param::async_vector_view<Windows::ApplicationModel::Payments::PaymentShippingOption> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetails)->put_ShippingOptions(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentDetailsModifier> consume_Windows_ApplicationModel_Payments_IPaymentDetails<D>::Modifiers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentDetailsModifier> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetails)->get_Modifiers(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentDetails<D>::Modifiers(param::async_vector_view<Windows::ApplicationModel::Payments::PaymentDetailsModifier> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetails)->put_Modifiers(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentDetails consume_Windows_ApplicationModel_Payments_IPaymentDetailsFactory<D>::Create(Windows::ApplicationModel::Payments::PaymentItem const& total) const
{
    Windows::ApplicationModel::Payments::PaymentDetails result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetailsFactory)->Create(get_abi(total), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentDetails consume_Windows_ApplicationModel_Payments_IPaymentDetailsFactory<D>::CreateWithDisplayItems(Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& displayItems) const
{
    Windows::ApplicationModel::Payments::PaymentDetails result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetailsFactory)->CreateWithDisplayItems(get_abi(total), get_abi(displayItems), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifier<D>::JsonData() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetailsModifier)->get_JsonData(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifier<D>::SupportedMethodIds() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetailsModifier)->get_SupportedMethodIds(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentItem consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifier<D>::Total() const
{
    Windows::ApplicationModel::Payments::PaymentItem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetailsModifier)->get_Total(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem> consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifier<D>::AdditionalDisplayItems() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetailsModifier)->get_AdditionalDisplayItems(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentDetailsModifier consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifierFactory<D>::Create(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total) const
{
    Windows::ApplicationModel::Payments::PaymentDetailsModifier result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory)->Create(get_abi(supportedMethodIds), get_abi(total), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentDetailsModifier consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifierFactory<D>::CreateWithAdditionalDisplayItems(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& additionalDisplayItems) const
{
    Windows::ApplicationModel::Payments::PaymentDetailsModifier result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory)->CreateWithAdditionalDisplayItems(get_abi(supportedMethodIds), get_abi(total), get_abi(additionalDisplayItems), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentDetailsModifier consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifierFactory<D>::CreateWithAdditionalDisplayItemsAndJsonData(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& additionalDisplayItems, param::hstring const& jsonData) const
{
    Windows::ApplicationModel::Payments::PaymentDetailsModifier result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory)->CreateWithAdditionalDisplayItemsAndJsonData(get_abi(supportedMethodIds), get_abi(total), get_abi(additionalDisplayItems), get_abi(jsonData), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentItem<D>::Label() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentItem)->get_Label(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentItem<D>::Label(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentItem)->put_Label(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentCurrencyAmount consume_Windows_ApplicationModel_Payments_IPaymentItem<D>::Amount() const
{
    Windows::ApplicationModel::Payments::PaymentCurrencyAmount value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentItem)->get_Amount(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentItem<D>::Amount(Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentItem)->put_Amount(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_Payments_IPaymentItem<D>::Pending() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentItem)->get_Pending(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentItem<D>::Pending(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentItem)->put_Pending(value));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentItem consume_Windows_ApplicationModel_Payments_IPaymentItemFactory<D>::Create(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount) const
{
    Windows::ApplicationModel::Payments::PaymentItem result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentItemFactory)->Create(get_abi(label), get_abi(amount), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> consume_Windows_ApplicationModel_Payments_IPaymentMediator<D>::GetSupportedMethodIdsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentMediator)->GetSupportedMethodIdsAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult> consume_Windows_ApplicationModel_Payments_IPaymentMediator<D>::SubmitPaymentRequestAsync(Windows::ApplicationModel::Payments::PaymentRequest const& paymentRequest) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentMediator)->SubmitPaymentRequestAsync(get_abi(paymentRequest), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult> consume_Windows_ApplicationModel_Payments_IPaymentMediator<D>::SubmitPaymentRequestAsync(Windows::ApplicationModel::Payments::PaymentRequest const& paymentRequest, Windows::ApplicationModel::Payments::PaymentRequestChangedHandler const& changeHandler) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentMediator)->SubmitPaymentRequestWithChangeHandlerAsync(get_abi(paymentRequest), get_abi(changeHandler), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentMerchantInfo<D>::PackageFullName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentMerchantInfo)->get_PackageFullName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_Payments_IPaymentMerchantInfo<D>::Uri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentMerchantInfo)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentMerchantInfo consume_Windows_ApplicationModel_Payments_IPaymentMerchantInfoFactory<D>::Create(Windows::Foundation::Uri const& uri) const
{
    Windows::ApplicationModel::Payments::PaymentMerchantInfo result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory)->Create(get_abi(uri), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_ApplicationModel_Payments_IPaymentMethodData<D>::SupportedMethodIds() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentMethodData)->get_SupportedMethodIds(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentMethodData<D>::JsonData() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentMethodData)->get_JsonData(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentMethodData consume_Windows_ApplicationModel_Payments_IPaymentMethodDataFactory<D>::Create(param::iterable<hstring> const& supportedMethodIds) const
{
    Windows::ApplicationModel::Payments::PaymentMethodData result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentMethodDataFactory)->Create(get_abi(supportedMethodIds), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentMethodData consume_Windows_ApplicationModel_Payments_IPaymentMethodDataFactory<D>::CreateWithJsonData(param::iterable<hstring> const& supportedMethodIds, param::hstring const& jsonData) const
{
    Windows::ApplicationModel::Payments::PaymentMethodData result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentMethodDataFactory)->CreateWithJsonData(get_abi(supportedMethodIds), get_abi(jsonData), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentOptionPresence consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::RequestPayerEmail() const
{
    Windows::ApplicationModel::Payments::PaymentOptionPresence value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->get_RequestPayerEmail(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::RequestPayerEmail(Windows::ApplicationModel::Payments::PaymentOptionPresence const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->put_RequestPayerEmail(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentOptionPresence consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::RequestPayerName() const
{
    Windows::ApplicationModel::Payments::PaymentOptionPresence value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->get_RequestPayerName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::RequestPayerName(Windows::ApplicationModel::Payments::PaymentOptionPresence const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->put_RequestPayerName(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentOptionPresence consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::RequestPayerPhoneNumber() const
{
    Windows::ApplicationModel::Payments::PaymentOptionPresence value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->get_RequestPayerPhoneNumber(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::RequestPayerPhoneNumber(Windows::ApplicationModel::Payments::PaymentOptionPresence const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->put_RequestPayerPhoneNumber(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::RequestShipping() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->get_RequestShipping(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::RequestShipping(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->put_RequestShipping(value));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentShippingType consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::ShippingType() const
{
    Windows::ApplicationModel::Payments::PaymentShippingType value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->get_ShippingType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::ShippingType(Windows::ApplicationModel::Payments::PaymentShippingType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->put_ShippingType(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentMerchantInfo consume_Windows_ApplicationModel_Payments_IPaymentRequest<D>::MerchantInfo() const
{
    Windows::ApplicationModel::Payments::PaymentMerchantInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequest)->get_MerchantInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentDetails consume_Windows_ApplicationModel_Payments_IPaymentRequest<D>::Details() const
{
    Windows::ApplicationModel::Payments::PaymentDetails value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequest)->get_Details(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentMethodData> consume_Windows_ApplicationModel_Payments_IPaymentRequest<D>::MethodData() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentMethodData> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequest)->get_MethodData(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentOptions consume_Windows_ApplicationModel_Payments_IPaymentRequest<D>::Options() const
{
    Windows::ApplicationModel::Payments::PaymentOptions value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequest)->get_Options(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentRequestChangeKind consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedArgs<D>::ChangeKind() const
{
    Windows::ApplicationModel::Payments::PaymentRequestChangeKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs)->get_ChangeKind(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentAddress consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedArgs<D>::ShippingAddress() const
{
    Windows::ApplicationModel::Payments::PaymentAddress value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs)->get_ShippingAddress(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentShippingOption consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedArgs<D>::SelectedShippingOption() const
{
    Windows::ApplicationModel::Payments::PaymentShippingOption value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs)->get_SelectedShippingOption(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedArgs<D>::Acknowledge(Windows::ApplicationModel::Payments::PaymentRequestChangedResult const& changeResult) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs)->Acknowledge(get_abi(changeResult)));
}

template <typename D> bool consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResult<D>::ChangeAcceptedByMerchant() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedResult)->get_ChangeAcceptedByMerchant(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResult<D>::ChangeAcceptedByMerchant(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedResult)->put_ChangeAcceptedByMerchant(value));
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResult<D>::Message() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedResult)->get_Message(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResult<D>::Message(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedResult)->put_Message(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentDetails consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResult<D>::UpdatedPaymentDetails() const
{
    Windows::ApplicationModel::Payments::PaymentDetails value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedResult)->get_UpdatedPaymentDetails(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResult<D>::UpdatedPaymentDetails(Windows::ApplicationModel::Payments::PaymentDetails const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedResult)->put_UpdatedPaymentDetails(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentRequestChangedResult consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResultFactory<D>::Create(bool changeAcceptedByMerchant) const
{
    Windows::ApplicationModel::Payments::PaymentRequestChangedResult result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory)->Create(changeAcceptedByMerchant, put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentRequestChangedResult consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResultFactory<D>::CreateWithPaymentDetails(bool changeAcceptedByMerchant, Windows::ApplicationModel::Payments::PaymentDetails const& updatedPaymentDetails) const
{
    Windows::ApplicationModel::Payments::PaymentRequestChangedResult result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory)->CreateWithPaymentDetails(changeAcceptedByMerchant, get_abi(updatedPaymentDetails), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentRequest consume_Windows_ApplicationModel_Payments_IPaymentRequestFactory<D>::Create(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData) const
{
    Windows::ApplicationModel::Payments::PaymentRequest result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestFactory)->Create(get_abi(details), get_abi(methodData), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentRequest consume_Windows_ApplicationModel_Payments_IPaymentRequestFactory<D>::CreateWithMerchantInfo(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData, Windows::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo) const
{
    Windows::ApplicationModel::Payments::PaymentRequest result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestFactory)->CreateWithMerchantInfo(get_abi(details), get_abi(methodData), get_abi(merchantInfo), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentRequest consume_Windows_ApplicationModel_Payments_IPaymentRequestFactory<D>::CreateWithMerchantInfoAndOptions(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData, Windows::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo, Windows::ApplicationModel::Payments::PaymentOptions const& options) const
{
    Windows::ApplicationModel::Payments::PaymentRequest result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestFactory)->CreateWithMerchantInfoAndOptions(get_abi(details), get_abi(methodData), get_abi(merchantInfo), get_abi(options), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentRequestStatus consume_Windows_ApplicationModel_Payments_IPaymentRequestSubmitResult<D>::Status() const
{
    Windows::ApplicationModel::Payments::PaymentRequestStatus value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentResponse consume_Windows_ApplicationModel_Payments_IPaymentRequestSubmitResult<D>::Response() const
{
    Windows::ApplicationModel::Payments::PaymentResponse value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult)->get_Response(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentToken consume_Windows_ApplicationModel_Payments_IPaymentResponse<D>::PaymentToken() const
{
    Windows::ApplicationModel::Payments::PaymentToken value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentResponse)->get_PaymentToken(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentShippingOption consume_Windows_ApplicationModel_Payments_IPaymentResponse<D>::ShippingOption() const
{
    Windows::ApplicationModel::Payments::PaymentShippingOption value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentResponse)->get_ShippingOption(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentAddress consume_Windows_ApplicationModel_Payments_IPaymentResponse<D>::ShippingAddress() const
{
    Windows::ApplicationModel::Payments::PaymentAddress value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentResponse)->get_ShippingAddress(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentResponse<D>::PayerEmail() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentResponse)->get_PayerEmail(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentResponse<D>::PayerName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentResponse)->get_PayerName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentResponse<D>::PayerPhoneNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentResponse)->get_PayerPhoneNumber(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Payments_IPaymentResponse<D>::CompleteAsync(Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus const& status) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentResponse)->CompleteAsync(get_abi(status), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentShippingOption<D>::Label() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOption)->get_Label(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentShippingOption<D>::Label(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOption)->put_Label(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentCurrencyAmount consume_Windows_ApplicationModel_Payments_IPaymentShippingOption<D>::Amount() const
{
    Windows::ApplicationModel::Payments::PaymentCurrencyAmount value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOption)->get_Amount(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentShippingOption<D>::Amount(Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOption)->put_Amount(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentShippingOption<D>::Tag() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOption)->get_Tag(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentShippingOption<D>::Tag(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOption)->put_Tag(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_Payments_IPaymentShippingOption<D>::IsSelected() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOption)->get_IsSelected(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentShippingOption<D>::IsSelected(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOption)->put_IsSelected(value));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentShippingOption consume_Windows_ApplicationModel_Payments_IPaymentShippingOptionFactory<D>::Create(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount) const
{
    Windows::ApplicationModel::Payments::PaymentShippingOption result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory)->Create(get_abi(label), get_abi(amount), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentShippingOption consume_Windows_ApplicationModel_Payments_IPaymentShippingOptionFactory<D>::CreateWithSelected(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount, bool selected) const
{
    Windows::ApplicationModel::Payments::PaymentShippingOption result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory)->CreateWithSelected(get_abi(label), get_abi(amount), selected, put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentShippingOption consume_Windows_ApplicationModel_Payments_IPaymentShippingOptionFactory<D>::CreateWithSelectedAndTag(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount, bool selected, param::hstring const& tag) const
{
    Windows::ApplicationModel::Payments::PaymentShippingOption result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory)->CreateWithSelectedAndTag(get_abi(label), get_abi(amount), selected, get_abi(tag), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentToken<D>::PaymentMethodId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentToken)->get_PaymentMethodId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentToken<D>::JsonDetails() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentToken)->get_JsonDetails(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentToken consume_Windows_ApplicationModel_Payments_IPaymentTokenFactory<D>::Create(param::hstring const& paymentMethodId) const
{
    Windows::ApplicationModel::Payments::PaymentToken result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentTokenFactory)->Create(get_abi(paymentMethodId), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentToken consume_Windows_ApplicationModel_Payments_IPaymentTokenFactory<D>::CreateWithJsonDetails(param::hstring const& paymentMethodId, param::hstring const& jsonDetails) const
{
    Windows::ApplicationModel::Payments::PaymentToken result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentTokenFactory)->CreateWithJsonDetails(get_abi(paymentMethodId), get_abi(jsonDetails), put_abi(result)));
    return result;
}

template <> struct delegate<Windows::ApplicationModel::Payments::PaymentRequestChangedHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::ApplicationModel::Payments::PaymentRequestChangedHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::ApplicationModel::Payments::PaymentRequestChangedHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* paymentRequest, ::IUnknown* args) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentRequest const*>(&paymentRequest), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentRequestChangedArgs const*>(&args));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentAddress> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentAddress>
{
    HRESULT __stdcall get_Country(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Country());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Country(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Country(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AddressLines(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AddressLines());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AddressLines(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddressLines(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<hstring> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Region(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Region());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Region(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Region(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_City(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().City());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_City(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().City(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DependentLocality(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DependentLocality());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DependentLocality(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DependentLocality(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PostalCode(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PostalCode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PostalCode(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PostalCode(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SortingCode(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SortingCode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SortingCode(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SortingCode(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LanguageCode(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LanguageCode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LanguageCode(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LanguageCode(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Organization(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Organization());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Organization(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Organization(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Recipient(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Recipient());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Recipient(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Recipient(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhoneNumber(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhoneNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PhoneNumber(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PhoneNumber(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentCurrencyAmount> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentCurrencyAmount>
{
    HRESULT __stdcall get_Currency(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Currency());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Currency(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Currency(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrencySystem(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CurrencySystem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CurrencySystem(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CurrencySystem(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory>
{
    HRESULT __stdcall Create(HSTRING value, HSTRING currency, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&value), *reinterpret_cast<hstring const*>(&currency)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithCurrencySystem(HSTRING value, HSTRING currency, HSTRING currencySystem, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithCurrencySystem(*reinterpret_cast<hstring const*>(&value), *reinterpret_cast<hstring const*>(&currency), *reinterpret_cast<hstring const*>(&currencySystem)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentDetails> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentDetails>
{
    HRESULT __stdcall get_Total(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Total());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Total(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Total(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentItem const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayItems(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayItems());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayItems(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayItems(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShippingOptions(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShippingOptions());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ShippingOptions(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShippingOptions(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentShippingOption> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Modifiers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Modifiers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Modifiers(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Modifiers(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentDetailsModifier> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentDetailsFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentDetailsFactory>
{
    HRESULT __stdcall Create(::IUnknown* total, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentItem const*>(&total)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithDisplayItems(::IUnknown* total, ::IUnknown* displayItems, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithDisplayItems(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentItem const*>(&total), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentItem> const*>(&displayItems)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentDetailsModifier> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentDetailsModifier>
{
    HRESULT __stdcall get_JsonData(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().JsonData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedMethodIds(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedMethodIds());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Total(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Total());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AdditionalDisplayItems(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AdditionalDisplayItems());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory>
{
    HRESULT __stdcall Create(::IUnknown* supportedMethodIds, ::IUnknown* total, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&supportedMethodIds), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentItem const*>(&total)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithAdditionalDisplayItems(::IUnknown* supportedMethodIds, ::IUnknown* total, ::IUnknown* additionalDisplayItems, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithAdditionalDisplayItems(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&supportedMethodIds), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentItem const*>(&total), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentItem> const*>(&additionalDisplayItems)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithAdditionalDisplayItemsAndJsonData(::IUnknown* supportedMethodIds, ::IUnknown* total, ::IUnknown* additionalDisplayItems, HSTRING jsonData, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithAdditionalDisplayItemsAndJsonData(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&supportedMethodIds), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentItem const*>(&total), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentItem> const*>(&additionalDisplayItems), *reinterpret_cast<hstring const*>(&jsonData)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentItem> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentItem>
{
    HRESULT __stdcall get_Label(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Label());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Label(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Label(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Amount(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Amount());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Amount(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Amount(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentCurrencyAmount const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pending(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Pending());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Pending(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Pending(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentItemFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentItemFactory>
{
    HRESULT __stdcall Create(HSTRING label, ::IUnknown* amount, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&label), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentCurrencyAmount const*>(&amount)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentMediator> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentMediator>
{
    HRESULT __stdcall GetSupportedMethodIdsAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetSupportedMethodIdsAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SubmitPaymentRequestAsync(::IUnknown* paymentRequest, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SubmitPaymentRequestAsync(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentRequest const*>(&paymentRequest)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SubmitPaymentRequestWithChangeHandlerAsync(::IUnknown* paymentRequest, ::IUnknown* changeHandler, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SubmitPaymentRequestAsync(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentRequest const*>(&paymentRequest), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentRequestChangedHandler const*>(&changeHandler)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentMerchantInfo> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentMerchantInfo>
{
    HRESULT __stdcall get_PackageFullName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PackageFullName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Uri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory>
{
    HRESULT __stdcall Create(::IUnknown* uri, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentMethodData> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentMethodData>
{
    HRESULT __stdcall get_SupportedMethodIds(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedMethodIds());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_JsonData(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().JsonData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentMethodDataFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentMethodDataFactory>
{
    HRESULT __stdcall Create(::IUnknown* supportedMethodIds, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&supportedMethodIds)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithJsonData(::IUnknown* supportedMethodIds, HSTRING jsonData, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithJsonData(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&supportedMethodIds), *reinterpret_cast<hstring const*>(&jsonData)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentOptions> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentOptions>
{
    HRESULT __stdcall get_RequestPayerEmail(abi_t<Windows::ApplicationModel::Payments::PaymentOptionPresence>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestPayerEmail());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RequestPayerEmail(abi_t<Windows::ApplicationModel::Payments::PaymentOptionPresence> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestPayerEmail(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentOptionPresence const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestPayerName(abi_t<Windows::ApplicationModel::Payments::PaymentOptionPresence>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestPayerName());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RequestPayerName(abi_t<Windows::ApplicationModel::Payments::PaymentOptionPresence> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestPayerName(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentOptionPresence const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestPayerPhoneNumber(abi_t<Windows::ApplicationModel::Payments::PaymentOptionPresence>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestPayerPhoneNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RequestPayerPhoneNumber(abi_t<Windows::ApplicationModel::Payments::PaymentOptionPresence> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestPayerPhoneNumber(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentOptionPresence const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestShipping(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestShipping());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RequestShipping(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestShipping(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShippingType(abi_t<Windows::ApplicationModel::Payments::PaymentShippingType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShippingType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ShippingType(abi_t<Windows::ApplicationModel::Payments::PaymentShippingType> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShippingType(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentShippingType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentRequest> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentRequest>
{
    HRESULT __stdcall get_MerchantInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MerchantInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Details(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Details());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MethodData(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MethodData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Options(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Options());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs>
{
    HRESULT __stdcall get_ChangeKind(abi_t<Windows::ApplicationModel::Payments::PaymentRequestChangeKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ChangeKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShippingAddress(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShippingAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedShippingOption(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SelectedShippingOption());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Acknowledge(::IUnknown* changeResult) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Acknowledge(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentRequestChangedResult const*>(&changeResult));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentRequestChangedResult> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentRequestChangedResult>
{
    HRESULT __stdcall get_ChangeAcceptedByMerchant(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ChangeAcceptedByMerchant());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ChangeAcceptedByMerchant(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ChangeAcceptedByMerchant(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Message(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Message());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Message(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Message(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UpdatedPaymentDetails(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UpdatedPaymentDetails());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UpdatedPaymentDetails(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdatedPaymentDetails(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentDetails const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory>
{
    HRESULT __stdcall Create(bool changeAcceptedByMerchant, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(changeAcceptedByMerchant));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithPaymentDetails(bool changeAcceptedByMerchant, ::IUnknown* updatedPaymentDetails, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithPaymentDetails(changeAcceptedByMerchant, *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentDetails const*>(&updatedPaymentDetails)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentRequestFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentRequestFactory>
{
    HRESULT __stdcall Create(::IUnknown* details, ::IUnknown* methodData, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentDetails const*>(&details), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentMethodData> const*>(&methodData)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithMerchantInfo(::IUnknown* details, ::IUnknown* methodData, ::IUnknown* merchantInfo, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithMerchantInfo(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentDetails const*>(&details), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentMethodData> const*>(&methodData), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentMerchantInfo const*>(&merchantInfo)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithMerchantInfoAndOptions(::IUnknown* details, ::IUnknown* methodData, ::IUnknown* merchantInfo, ::IUnknown* options, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithMerchantInfoAndOptions(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentDetails const*>(&details), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentMethodData> const*>(&methodData), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentMerchantInfo const*>(&merchantInfo), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult>
{
    HRESULT __stdcall get_Status(abi_t<Windows::ApplicationModel::Payments::PaymentRequestStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Response(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Response());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentResponse> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentResponse>
{
    HRESULT __stdcall get_PaymentToken(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PaymentToken());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShippingOption(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShippingOption());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShippingAddress(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShippingAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PayerEmail(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PayerEmail());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PayerName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PayerName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PayerPhoneNumber(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PayerPhoneNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CompleteAsync(abi_t<Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus> status, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CompleteAsync(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus const*>(&status)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentShippingOption> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentShippingOption>
{
    HRESULT __stdcall get_Label(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Label());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Label(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Label(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Amount(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Amount());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Amount(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Amount(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentCurrencyAmount const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tag(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Tag());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Tag(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Tag(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSelected(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSelected());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsSelected(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsSelected(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory>
{
    HRESULT __stdcall Create(HSTRING label, ::IUnknown* amount, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&label), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentCurrencyAmount const*>(&amount)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithSelected(HSTRING label, ::IUnknown* amount, bool selected, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithSelected(*reinterpret_cast<hstring const*>(&label), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentCurrencyAmount const*>(&amount), selected));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithSelectedAndTag(HSTRING label, ::IUnknown* amount, bool selected, HSTRING tag, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithSelectedAndTag(*reinterpret_cast<hstring const*>(&label), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentCurrencyAmount const*>(&amount), selected, *reinterpret_cast<hstring const*>(&tag)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentToken> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentToken>
{
    HRESULT __stdcall get_PaymentMethodId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PaymentMethodId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_JsonDetails(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().JsonDetails());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentTokenFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentTokenFactory>
{
    HRESULT __stdcall Create(HSTRING paymentMethodId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&paymentMethodId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithJsonDetails(HSTRING paymentMethodId, HSTRING jsonDetails, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithJsonDetails(*reinterpret_cast<hstring const*>(&paymentMethodId), *reinterpret_cast<hstring const*>(&jsonDetails)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Payments {

inline PaymentAddress::PaymentAddress() :
    PaymentAddress(activate_instance<PaymentAddress>())
{}

inline PaymentCurrencyAmount::PaymentCurrencyAmount(param::hstring const& value, param::hstring const& currency) :
    PaymentCurrencyAmount(get_activation_factory<PaymentCurrencyAmount, Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory>().Create(value, currency))
{}

inline PaymentCurrencyAmount::PaymentCurrencyAmount(param::hstring const& value, param::hstring const& currency, param::hstring const& currencySystem) :
    PaymentCurrencyAmount(get_activation_factory<PaymentCurrencyAmount, Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory>().CreateWithCurrencySystem(value, currency, currencySystem))
{}

inline PaymentDetails::PaymentDetails() :
    PaymentDetails(activate_instance<PaymentDetails>())
{}

inline PaymentDetails::PaymentDetails(Windows::ApplicationModel::Payments::PaymentItem const& total) :
    PaymentDetails(get_activation_factory<PaymentDetails, Windows::ApplicationModel::Payments::IPaymentDetailsFactory>().Create(total))
{}

inline PaymentDetails::PaymentDetails(Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& displayItems) :
    PaymentDetails(get_activation_factory<PaymentDetails, Windows::ApplicationModel::Payments::IPaymentDetailsFactory>().CreateWithDisplayItems(total, displayItems))
{}

inline PaymentDetailsModifier::PaymentDetailsModifier(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total) :
    PaymentDetailsModifier(get_activation_factory<PaymentDetailsModifier, Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory>().Create(supportedMethodIds, total))
{}

inline PaymentDetailsModifier::PaymentDetailsModifier(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& additionalDisplayItems) :
    PaymentDetailsModifier(get_activation_factory<PaymentDetailsModifier, Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory>().CreateWithAdditionalDisplayItems(supportedMethodIds, total, additionalDisplayItems))
{}

inline PaymentDetailsModifier::PaymentDetailsModifier(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& additionalDisplayItems, param::hstring const& jsonData) :
    PaymentDetailsModifier(get_activation_factory<PaymentDetailsModifier, Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory>().CreateWithAdditionalDisplayItemsAndJsonData(supportedMethodIds, total, additionalDisplayItems, jsonData))
{}

inline PaymentItem::PaymentItem(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount) :
    PaymentItem(get_activation_factory<PaymentItem, Windows::ApplicationModel::Payments::IPaymentItemFactory>().Create(label, amount))
{}

inline PaymentMediator::PaymentMediator() :
    PaymentMediator(activate_instance<PaymentMediator>())
{}

inline PaymentMerchantInfo::PaymentMerchantInfo() :
    PaymentMerchantInfo(activate_instance<PaymentMerchantInfo>())
{}

inline PaymentMerchantInfo::PaymentMerchantInfo(Windows::Foundation::Uri const& uri) :
    PaymentMerchantInfo(get_activation_factory<PaymentMerchantInfo, Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory>().Create(uri))
{}

inline PaymentMethodData::PaymentMethodData(param::iterable<hstring> const& supportedMethodIds) :
    PaymentMethodData(get_activation_factory<PaymentMethodData, Windows::ApplicationModel::Payments::IPaymentMethodDataFactory>().Create(supportedMethodIds))
{}

inline PaymentMethodData::PaymentMethodData(param::iterable<hstring> const& supportedMethodIds, param::hstring const& jsonData) :
    PaymentMethodData(get_activation_factory<PaymentMethodData, Windows::ApplicationModel::Payments::IPaymentMethodDataFactory>().CreateWithJsonData(supportedMethodIds, jsonData))
{}

inline PaymentOptions::PaymentOptions() :
    PaymentOptions(activate_instance<PaymentOptions>())
{}

inline PaymentRequest::PaymentRequest(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData) :
    PaymentRequest(get_activation_factory<PaymentRequest, Windows::ApplicationModel::Payments::IPaymentRequestFactory>().Create(details, methodData))
{}

inline PaymentRequest::PaymentRequest(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData, Windows::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo) :
    PaymentRequest(get_activation_factory<PaymentRequest, Windows::ApplicationModel::Payments::IPaymentRequestFactory>().CreateWithMerchantInfo(details, methodData, merchantInfo))
{}

inline PaymentRequest::PaymentRequest(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData, Windows::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo, Windows::ApplicationModel::Payments::PaymentOptions const& options) :
    PaymentRequest(get_activation_factory<PaymentRequest, Windows::ApplicationModel::Payments::IPaymentRequestFactory>().CreateWithMerchantInfoAndOptions(details, methodData, merchantInfo, options))
{}

inline PaymentRequestChangedResult::PaymentRequestChangedResult(bool changeAcceptedByMerchant) :
    PaymentRequestChangedResult(get_activation_factory<PaymentRequestChangedResult, Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory>().Create(changeAcceptedByMerchant))
{}

inline PaymentRequestChangedResult::PaymentRequestChangedResult(bool changeAcceptedByMerchant, Windows::ApplicationModel::Payments::PaymentDetails const& updatedPaymentDetails) :
    PaymentRequestChangedResult(get_activation_factory<PaymentRequestChangedResult, Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory>().CreateWithPaymentDetails(changeAcceptedByMerchant, updatedPaymentDetails))
{}

inline PaymentShippingOption::PaymentShippingOption(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount) :
    PaymentShippingOption(get_activation_factory<PaymentShippingOption, Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory>().Create(label, amount))
{}

inline PaymentShippingOption::PaymentShippingOption(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount, bool selected) :
    PaymentShippingOption(get_activation_factory<PaymentShippingOption, Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory>().CreateWithSelected(label, amount, selected))
{}

inline PaymentShippingOption::PaymentShippingOption(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount, bool selected, param::hstring const& tag) :
    PaymentShippingOption(get_activation_factory<PaymentShippingOption, Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory>().CreateWithSelectedAndTag(label, amount, selected, tag))
{}

inline PaymentToken::PaymentToken(param::hstring const& paymentMethodId) :
    PaymentToken(get_activation_factory<PaymentToken, Windows::ApplicationModel::Payments::IPaymentTokenFactory>().Create(paymentMethodId))
{}

inline PaymentToken::PaymentToken(param::hstring const& paymentMethodId, param::hstring const& jsonDetails) :
    PaymentToken(get_activation_factory<PaymentToken, Windows::ApplicationModel::Payments::IPaymentTokenFactory>().CreateWithJsonDetails(paymentMethodId, jsonDetails))
{}

template <typename L> PaymentRequestChangedHandler::PaymentRequestChangedHandler(L handler) :
    PaymentRequestChangedHandler(impl::make_delegate<PaymentRequestChangedHandler>(std::forward<L>(handler)))
{}

template <typename F> PaymentRequestChangedHandler::PaymentRequestChangedHandler(F* handler) :
    PaymentRequestChangedHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> PaymentRequestChangedHandler::PaymentRequestChangedHandler(O* object, M method) :
    PaymentRequestChangedHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void PaymentRequestChangedHandler::operator()(Windows::ApplicationModel::Payments::PaymentRequest const& paymentRequest, Windows::ApplicationModel::Payments::PaymentRequestChangedArgs const& args) const
{
    check_hresult((*(abi_t<PaymentRequestChangedHandler>**)this)->Invoke(get_abi(paymentRequest), get_abi(args)));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentAddress> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::IPaymentAddress> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentCurrencyAmount> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::IPaymentCurrencyAmount> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::IPaymentDetails> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentDetailsFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::IPaymentDetailsFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentDetailsModifier> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::IPaymentDetailsModifier> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentItem> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::IPaymentItem> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentItemFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::IPaymentItemFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentMediator> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::IPaymentMediator> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentMerchantInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::IPaymentMerchantInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentMethodData> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::IPaymentMethodData> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentMethodDataFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::IPaymentMethodDataFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::IPaymentOptions> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::IPaymentRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentRequestChangedResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::IPaymentRequestChangedResult> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentRequestFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::IPaymentRequestFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentResponse> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::IPaymentResponse> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentShippingOption> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::IPaymentShippingOption> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentToken> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::IPaymentToken> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentTokenFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::IPaymentTokenFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentAddress> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::PaymentAddress> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentCurrencyAmount> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::PaymentCurrencyAmount> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::PaymentDetails> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentDetailsModifier> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::PaymentDetailsModifier> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentItem> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::PaymentItem> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentMediator> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::PaymentMediator> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentMerchantInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::PaymentMerchantInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentMethodData> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::PaymentMethodData> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::PaymentOptions> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::PaymentRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentRequestChangedArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::PaymentRequestChangedArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentRequestChangedResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::PaymentRequestChangedResult> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentRequestSubmitResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::PaymentRequestSubmitResult> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentResponse> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::PaymentResponse> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentShippingOption> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::PaymentShippingOption> {};

template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentToken> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Payments::PaymentToken> {};

}

WINRT_WARNING_POP
