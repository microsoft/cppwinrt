// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.ApplicationModel.Payments.3.h"
#include "Windows.ApplicationModel.h"

WINRT_EXPORT namespace winrt {

namespace Windows::ApplicationModel::Payments {

template <typename L> PaymentRequestChangedHandler::PaymentRequestChangedHandler(L lambda) :
    PaymentRequestChangedHandler(impl::make_delegate<impl_PaymentRequestChangedHandler<L>, PaymentRequestChangedHandler>(std::forward<L>(lambda)))
{}

template <typename F> PaymentRequestChangedHandler::PaymentRequestChangedHandler(F * function) :
    PaymentRequestChangedHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> PaymentRequestChangedHandler::PaymentRequestChangedHandler(O * object, M method) :
    PaymentRequestChangedHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void PaymentRequestChangedHandler::operator()(const Windows::ApplicationModel::Payments::PaymentRequest & paymentRequest, const Windows::ApplicationModel::Payments::PaymentRequestChangedArgs & args) const
{
    check_hresult((*(abi<PaymentRequestChangedHandler> **)this)->abi_Invoke(get_abi(paymentRequest), get_abi(args)));
}

}

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentAddress> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentAddress>
{
    HRESULT __stdcall get_Country(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall put_Country(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Country(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AddressLines(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
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

    HRESULT __stdcall put_AddressLines(impl::abi_arg_in<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddressLines(*reinterpret_cast<const Windows::Foundation::Collections::IVectorView<hstring> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Region(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall put_Region(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Region(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_City(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall put_City(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().City(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DependentLocality(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall put_DependentLocality(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DependentLocality(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PostalCode(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall put_PostalCode(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PostalCode(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SortingCode(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall put_SortingCode(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SortingCode(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LanguageCode(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall put_LanguageCode(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LanguageCode(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Organization(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall put_Organization(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Organization(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Recipient(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall put_Recipient(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Recipient(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhoneNumber(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall put_PhoneNumber(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PhoneNumber(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(impl::abi_arg_out<Windows::Foundation::Collections::IPropertySet> value) noexcept override
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
    HRESULT __stdcall get_Currency(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall put_Currency(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Currency(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrencySystem(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall put_CurrencySystem(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CurrencySystem(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall put_Value(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(*reinterpret_cast<const hstring *>(&value));
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
    HRESULT __stdcall abi_Create(impl::abi_arg_in<hstring> value, impl::abi_arg_in<hstring> currency, impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentCurrencyAmount> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<const hstring *>(&value), *reinterpret_cast<const hstring *>(&currency)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithCurrencySystem(impl::abi_arg_in<hstring> value, impl::abi_arg_in<hstring> currency, impl::abi_arg_in<hstring> currencySystem, impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentCurrencyAmount> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithCurrencySystem(*reinterpret_cast<const hstring *>(&value), *reinterpret_cast<const hstring *>(&currency), *reinterpret_cast<const hstring *>(&currencySystem)));
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
    HRESULT __stdcall get_Total(impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentItem> value) noexcept override
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

    HRESULT __stdcall put_Total(impl::abi_arg_in<Windows::ApplicationModel::Payments::IPaymentItem> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Total(*reinterpret_cast<const Windows::ApplicationModel::Payments::PaymentItem *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayItems(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem>> value) noexcept override
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

    HRESULT __stdcall put_DisplayItems(impl::abi_arg_in<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayItems(*reinterpret_cast<const Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShippingOptions(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentShippingOption>> value) noexcept override
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

    HRESULT __stdcall put_ShippingOptions(impl::abi_arg_in<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentShippingOption>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShippingOptions(*reinterpret_cast<const Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentShippingOption> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Modifiers(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentDetailsModifier>> value) noexcept override
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

    HRESULT __stdcall put_Modifiers(impl::abi_arg_in<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentDetailsModifier>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Modifiers(*reinterpret_cast<const Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentDetailsModifier> *>(&value));
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
    HRESULT __stdcall abi_Create(impl::abi_arg_in<Windows::ApplicationModel::Payments::IPaymentItem> total, impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentDetails> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<const Windows::ApplicationModel::Payments::PaymentItem *>(&total)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithDisplayItems(impl::abi_arg_in<Windows::ApplicationModel::Payments::IPaymentItem> total, impl::abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentItem>> displayItems, impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentDetails> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithDisplayItems(*reinterpret_cast<const Windows::ApplicationModel::Payments::PaymentItem *>(&total), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentItem> *>(&displayItems)));
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
    HRESULT __stdcall get_JsonData(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_SupportedMethodIds(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
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

    HRESULT __stdcall get_Total(impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentItem> value) noexcept override
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

    HRESULT __stdcall get_AdditionalDisplayItems(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem>> value) noexcept override
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
    HRESULT __stdcall abi_Create(impl::abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> supportedMethodIds, impl::abi_arg_in<Windows::ApplicationModel::Payments::IPaymentItem> total, impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentDetailsModifier> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&supportedMethodIds), *reinterpret_cast<const Windows::ApplicationModel::Payments::PaymentItem *>(&total)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithAdditionalDisplayItems(impl::abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> supportedMethodIds, impl::abi_arg_in<Windows::ApplicationModel::Payments::IPaymentItem> total, impl::abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentItem>> additionalDisplayItems, impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentDetailsModifier> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithAdditionalDisplayItems(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&supportedMethodIds), *reinterpret_cast<const Windows::ApplicationModel::Payments::PaymentItem *>(&total), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentItem> *>(&additionalDisplayItems)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithAdditionalDisplayItemsAndJsonData(impl::abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> supportedMethodIds, impl::abi_arg_in<Windows::ApplicationModel::Payments::IPaymentItem> total, impl::abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentItem>> additionalDisplayItems, impl::abi_arg_in<hstring> jsonData, impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentDetailsModifier> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithAdditionalDisplayItemsAndJsonData(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&supportedMethodIds), *reinterpret_cast<const Windows::ApplicationModel::Payments::PaymentItem *>(&total), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentItem> *>(&additionalDisplayItems), *reinterpret_cast<const hstring *>(&jsonData)));
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
    HRESULT __stdcall get_Label(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall put_Label(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Label(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Amount(impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentCurrencyAmount> value) noexcept override
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

    HRESULT __stdcall put_Amount(impl::abi_arg_in<Windows::ApplicationModel::Payments::IPaymentCurrencyAmount> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Amount(*reinterpret_cast<const Windows::ApplicationModel::Payments::PaymentCurrencyAmount *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pending(bool * value) noexcept override
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
    HRESULT __stdcall abi_Create(impl::abi_arg_in<hstring> label, impl::abi_arg_in<Windows::ApplicationModel::Payments::IPaymentCurrencyAmount> amount, impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentItem> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<const hstring *>(&label), *reinterpret_cast<const Windows::ApplicationModel::Payments::PaymentCurrencyAmount *>(&amount)));
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
    HRESULT __stdcall abi_GetSupportedMethodIdsAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>>> result) noexcept override
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

    HRESULT __stdcall abi_SubmitPaymentRequestAsync(impl::abi_arg_in<Windows::ApplicationModel::Payments::IPaymentRequest> paymentRequest, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult>> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SubmitPaymentRequestAsync(*reinterpret_cast<const Windows::ApplicationModel::Payments::PaymentRequest *>(&paymentRequest)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SubmitPaymentRequestWithChangeHandlerAsync(impl::abi_arg_in<Windows::ApplicationModel::Payments::IPaymentRequest> paymentRequest, impl::abi_arg_in<Windows::ApplicationModel::Payments::PaymentRequestChangedHandler> changeHandler, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult>> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SubmitPaymentRequestAsync(*reinterpret_cast<const Windows::ApplicationModel::Payments::PaymentRequest *>(&paymentRequest), *reinterpret_cast<const Windows::ApplicationModel::Payments::PaymentRequestChangedHandler *>(&changeHandler)));
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
    HRESULT __stdcall get_PackageFullName(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_Uri(impl::abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
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
    HRESULT __stdcall abi_Create(impl::abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentMerchantInfo> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
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
    HRESULT __stdcall get_SupportedMethodIds(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
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

    HRESULT __stdcall get_JsonData(impl::abi_arg_out<hstring> value) noexcept override
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
    HRESULT __stdcall abi_Create(impl::abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> supportedMethodIds, impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentMethodData> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&supportedMethodIds)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithJsonData(impl::abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> supportedMethodIds, impl::abi_arg_in<hstring> jsonData, impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentMethodData> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithJsonData(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&supportedMethodIds), *reinterpret_cast<const hstring *>(&jsonData)));
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
    HRESULT __stdcall get_RequestPayerEmail(Windows::ApplicationModel::Payments::PaymentOptionPresence * value) noexcept override
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

    HRESULT __stdcall put_RequestPayerEmail(Windows::ApplicationModel::Payments::PaymentOptionPresence value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestPayerEmail(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestPayerName(Windows::ApplicationModel::Payments::PaymentOptionPresence * value) noexcept override
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

    HRESULT __stdcall put_RequestPayerName(Windows::ApplicationModel::Payments::PaymentOptionPresence value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestPayerName(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestPayerPhoneNumber(Windows::ApplicationModel::Payments::PaymentOptionPresence * value) noexcept override
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

    HRESULT __stdcall put_RequestPayerPhoneNumber(Windows::ApplicationModel::Payments::PaymentOptionPresence value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestPayerPhoneNumber(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestShipping(bool * value) noexcept override
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

    HRESULT __stdcall get_ShippingType(Windows::ApplicationModel::Payments::PaymentShippingType * value) noexcept override
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

    HRESULT __stdcall put_ShippingType(Windows::ApplicationModel::Payments::PaymentShippingType value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShippingType(value);
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
    HRESULT __stdcall get_MerchantInfo(impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentMerchantInfo> value) noexcept override
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

    HRESULT __stdcall get_Details(impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentDetails> value) noexcept override
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

    HRESULT __stdcall get_MethodData(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentMethodData>> value) noexcept override
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

    HRESULT __stdcall get_Options(impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentOptions> value) noexcept override
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
    HRESULT __stdcall get_ChangeKind(Windows::ApplicationModel::Payments::PaymentRequestChangeKind * value) noexcept override
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

    HRESULT __stdcall get_ShippingAddress(impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentAddress> value) noexcept override
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

    HRESULT __stdcall get_SelectedShippingOption(impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentShippingOption> value) noexcept override
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

    HRESULT __stdcall abi_Acknowledge(impl::abi_arg_in<Windows::ApplicationModel::Payments::IPaymentRequestChangedResult> changeResult) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Acknowledge(*reinterpret_cast<const Windows::ApplicationModel::Payments::PaymentRequestChangedResult *>(&changeResult));
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
    HRESULT __stdcall get_ChangeAcceptedByMerchant(bool * value) noexcept override
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

    HRESULT __stdcall get_Message(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall put_Message(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Message(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UpdatedPaymentDetails(impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentDetails> value) noexcept override
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

    HRESULT __stdcall put_UpdatedPaymentDetails(impl::abi_arg_in<Windows::ApplicationModel::Payments::IPaymentDetails> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdatedPaymentDetails(*reinterpret_cast<const Windows::ApplicationModel::Payments::PaymentDetails *>(&value));
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
    HRESULT __stdcall abi_Create(bool changeAcceptedByMerchant, impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentRequestChangedResult> result) noexcept override
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

    HRESULT __stdcall abi_CreateWithPaymentDetails(bool changeAcceptedByMerchant, impl::abi_arg_in<Windows::ApplicationModel::Payments::IPaymentDetails> updatedPaymentDetails, impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentRequestChangedResult> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithPaymentDetails(changeAcceptedByMerchant, *reinterpret_cast<const Windows::ApplicationModel::Payments::PaymentDetails *>(&updatedPaymentDetails)));
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
    HRESULT __stdcall abi_Create(impl::abi_arg_in<Windows::ApplicationModel::Payments::IPaymentDetails> details, impl::abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentMethodData>> methodData, impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentRequest> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<const Windows::ApplicationModel::Payments::PaymentDetails *>(&details), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentMethodData> *>(&methodData)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithMerchantInfo(impl::abi_arg_in<Windows::ApplicationModel::Payments::IPaymentDetails> details, impl::abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentMethodData>> methodData, impl::abi_arg_in<Windows::ApplicationModel::Payments::IPaymentMerchantInfo> merchantInfo, impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentRequest> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithMerchantInfo(*reinterpret_cast<const Windows::ApplicationModel::Payments::PaymentDetails *>(&details), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentMethodData> *>(&methodData), *reinterpret_cast<const Windows::ApplicationModel::Payments::PaymentMerchantInfo *>(&merchantInfo)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithMerchantInfoAndOptions(impl::abi_arg_in<Windows::ApplicationModel::Payments::IPaymentDetails> details, impl::abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentMethodData>> methodData, impl::abi_arg_in<Windows::ApplicationModel::Payments::IPaymentMerchantInfo> merchantInfo, impl::abi_arg_in<Windows::ApplicationModel::Payments::IPaymentOptions> options, impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentRequest> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithMerchantInfoAndOptions(*reinterpret_cast<const Windows::ApplicationModel::Payments::PaymentDetails *>(&details), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentMethodData> *>(&methodData), *reinterpret_cast<const Windows::ApplicationModel::Payments::PaymentMerchantInfo *>(&merchantInfo), *reinterpret_cast<const Windows::ApplicationModel::Payments::PaymentOptions *>(&options)));
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
    HRESULT __stdcall get_Status(Windows::ApplicationModel::Payments::PaymentRequestStatus * value) noexcept override
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

    HRESULT __stdcall get_Response(impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentResponse> value) noexcept override
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
    HRESULT __stdcall get_PaymentToken(impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentToken> value) noexcept override
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

    HRESULT __stdcall get_ShippingOption(impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentShippingOption> value) noexcept override
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

    HRESULT __stdcall get_ShippingAddress(impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentAddress> value) noexcept override
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

    HRESULT __stdcall get_PayerEmail(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_PayerName(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_PayerPhoneNumber(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall abi_CompleteAsync(Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus status, impl::abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CompleteAsync(status));
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
    HRESULT __stdcall get_Label(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall put_Label(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Label(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Amount(impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentCurrencyAmount> value) noexcept override
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

    HRESULT __stdcall put_Amount(impl::abi_arg_in<Windows::ApplicationModel::Payments::IPaymentCurrencyAmount> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Amount(*reinterpret_cast<const Windows::ApplicationModel::Payments::PaymentCurrencyAmount *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tag(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall put_Tag(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Tag(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSelected(bool * value) noexcept override
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
    HRESULT __stdcall abi_Create(impl::abi_arg_in<hstring> label, impl::abi_arg_in<Windows::ApplicationModel::Payments::IPaymentCurrencyAmount> amount, impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentShippingOption> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<const hstring *>(&label), *reinterpret_cast<const Windows::ApplicationModel::Payments::PaymentCurrencyAmount *>(&amount)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithSelected(impl::abi_arg_in<hstring> label, impl::abi_arg_in<Windows::ApplicationModel::Payments::IPaymentCurrencyAmount> amount, bool selected, impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentShippingOption> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithSelected(*reinterpret_cast<const hstring *>(&label), *reinterpret_cast<const Windows::ApplicationModel::Payments::PaymentCurrencyAmount *>(&amount), selected));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithSelectedAndTag(impl::abi_arg_in<hstring> label, impl::abi_arg_in<Windows::ApplicationModel::Payments::IPaymentCurrencyAmount> amount, bool selected, impl::abi_arg_in<hstring> tag, impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentShippingOption> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithSelectedAndTag(*reinterpret_cast<const hstring *>(&label), *reinterpret_cast<const Windows::ApplicationModel::Payments::PaymentCurrencyAmount *>(&amount), selected, *reinterpret_cast<const hstring *>(&tag)));
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
    HRESULT __stdcall get_PaymentMethodId(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_JsonDetails(impl::abi_arg_out<hstring> value) noexcept override
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
    HRESULT __stdcall abi_Create(impl::abi_arg_in<hstring> paymentMethodId, impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentToken> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<const hstring *>(&paymentMethodId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithJsonDetails(impl::abi_arg_in<hstring> paymentMethodId, impl::abi_arg_in<hstring> jsonDetails, impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentToken> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithJsonDetails(*reinterpret_cast<const hstring *>(&paymentMethodId), *reinterpret_cast<const hstring *>(&jsonDetails)));
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

namespace Windows::ApplicationModel::Payments {

template <typename D> Windows::ApplicationModel::Payments::PaymentMerchantInfo impl_IPaymentRequest<D>::MerchantInfo() const
{
    Windows::ApplicationModel::Payments::PaymentMerchantInfo value { nullptr };
    check_hresult(WINRT_SHIM(IPaymentRequest)->get_MerchantInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentDetails impl_IPaymentRequest<D>::Details() const
{
    Windows::ApplicationModel::Payments::PaymentDetails value { nullptr };
    check_hresult(WINRT_SHIM(IPaymentRequest)->get_Details(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentMethodData> impl_IPaymentRequest<D>::MethodData() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentMethodData> value;
    check_hresult(WINRT_SHIM(IPaymentRequest)->get_MethodData(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentOptions impl_IPaymentRequest<D>::Options() const
{
    Windows::ApplicationModel::Payments::PaymentOptions value { nullptr };
    check_hresult(WINRT_SHIM(IPaymentRequest)->get_Options(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentRequest impl_IPaymentRequestFactory<D>::Create(const Windows::ApplicationModel::Payments::PaymentDetails & details, iterable<Windows::ApplicationModel::Payments::PaymentMethodData> methodData) const
{
    Windows::ApplicationModel::Payments::PaymentRequest result { nullptr };
    check_hresult(WINRT_SHIM(IPaymentRequestFactory)->abi_Create(get_abi(details), get_abi(methodData), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentRequest impl_IPaymentRequestFactory<D>::CreateWithMerchantInfo(const Windows::ApplicationModel::Payments::PaymentDetails & details, iterable<Windows::ApplicationModel::Payments::PaymentMethodData> methodData, const Windows::ApplicationModel::Payments::PaymentMerchantInfo & merchantInfo) const
{
    Windows::ApplicationModel::Payments::PaymentRequest result { nullptr };
    check_hresult(WINRT_SHIM(IPaymentRequestFactory)->abi_CreateWithMerchantInfo(get_abi(details), get_abi(methodData), get_abi(merchantInfo), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentRequest impl_IPaymentRequestFactory<D>::CreateWithMerchantInfoAndOptions(const Windows::ApplicationModel::Payments::PaymentDetails & details, iterable<Windows::ApplicationModel::Payments::PaymentMethodData> methodData, const Windows::ApplicationModel::Payments::PaymentMerchantInfo & merchantInfo, const Windows::ApplicationModel::Payments::PaymentOptions & options) const
{
    Windows::ApplicationModel::Payments::PaymentRequest result { nullptr };
    check_hresult(WINRT_SHIM(IPaymentRequestFactory)->abi_CreateWithMerchantInfoAndOptions(get_abi(details), get_abi(methodData), get_abi(merchantInfo), get_abi(options), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentToken impl_IPaymentResponse<D>::PaymentToken() const
{
    Windows::ApplicationModel::Payments::PaymentToken value { nullptr };
    check_hresult(WINRT_SHIM(IPaymentResponse)->get_PaymentToken(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentShippingOption impl_IPaymentResponse<D>::ShippingOption() const
{
    Windows::ApplicationModel::Payments::PaymentShippingOption value { nullptr };
    check_hresult(WINRT_SHIM(IPaymentResponse)->get_ShippingOption(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentAddress impl_IPaymentResponse<D>::ShippingAddress() const
{
    Windows::ApplicationModel::Payments::PaymentAddress value { nullptr };
    check_hresult(WINRT_SHIM(IPaymentResponse)->get_ShippingAddress(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IPaymentResponse<D>::PayerEmail() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPaymentResponse)->get_PayerEmail(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IPaymentResponse<D>::PayerName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPaymentResponse)->get_PayerName(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IPaymentResponse<D>::PayerPhoneNumber() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPaymentResponse)->get_PayerPhoneNumber(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IPaymentResponse<D>::CompleteAsync(Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus status) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(WINRT_SHIM(IPaymentResponse)->abi_CompleteAsync(status, put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentItem impl_IPaymentDetails<D>::Total() const
{
    Windows::ApplicationModel::Payments::PaymentItem value { nullptr };
    check_hresult(WINRT_SHIM(IPaymentDetails)->get_Total(put_abi(value)));
    return value;
}

template <typename D> void impl_IPaymentDetails<D>::Total(const Windows::ApplicationModel::Payments::PaymentItem & value) const
{
    check_hresult(WINRT_SHIM(IPaymentDetails)->put_Total(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem> impl_IPaymentDetails<D>::DisplayItems() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem> value;
    check_hresult(WINRT_SHIM(IPaymentDetails)->get_DisplayItems(put_abi(value)));
    return value;
}

template <typename D> void impl_IPaymentDetails<D>::DisplayItems(const Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem> & value) const
{
    check_hresult(WINRT_SHIM(IPaymentDetails)->put_DisplayItems(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentShippingOption> impl_IPaymentDetails<D>::ShippingOptions() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentShippingOption> value;
    check_hresult(WINRT_SHIM(IPaymentDetails)->get_ShippingOptions(put_abi(value)));
    return value;
}

template <typename D> void impl_IPaymentDetails<D>::ShippingOptions(const Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentShippingOption> & value) const
{
    check_hresult(WINRT_SHIM(IPaymentDetails)->put_ShippingOptions(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentDetailsModifier> impl_IPaymentDetails<D>::Modifiers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentDetailsModifier> value;
    check_hresult(WINRT_SHIM(IPaymentDetails)->get_Modifiers(put_abi(value)));
    return value;
}

template <typename D> void impl_IPaymentDetails<D>::Modifiers(const Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentDetailsModifier> & value) const
{
    check_hresult(WINRT_SHIM(IPaymentDetails)->put_Modifiers(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentDetails impl_IPaymentDetailsFactory<D>::Create(const Windows::ApplicationModel::Payments::PaymentItem & total) const
{
    Windows::ApplicationModel::Payments::PaymentDetails result { nullptr };
    check_hresult(WINRT_SHIM(IPaymentDetailsFactory)->abi_Create(get_abi(total), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentDetails impl_IPaymentDetailsFactory<D>::CreateWithDisplayItems(const Windows::ApplicationModel::Payments::PaymentItem & total, iterable<Windows::ApplicationModel::Payments::PaymentItem> displayItems) const
{
    Windows::ApplicationModel::Payments::PaymentDetails result { nullptr };
    check_hresult(WINRT_SHIM(IPaymentDetailsFactory)->abi_CreateWithDisplayItems(get_abi(total), get_abi(displayItems), put_abi(result)));
    return result;
}

template <typename D> hstring impl_IPaymentDetailsModifier<D>::JsonData() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPaymentDetailsModifier)->get_JsonData(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IPaymentDetailsModifier<D>::SupportedMethodIds() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(WINRT_SHIM(IPaymentDetailsModifier)->get_SupportedMethodIds(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentItem impl_IPaymentDetailsModifier<D>::Total() const
{
    Windows::ApplicationModel::Payments::PaymentItem value { nullptr };
    check_hresult(WINRT_SHIM(IPaymentDetailsModifier)->get_Total(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem> impl_IPaymentDetailsModifier<D>::AdditionalDisplayItems() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem> value;
    check_hresult(WINRT_SHIM(IPaymentDetailsModifier)->get_AdditionalDisplayItems(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentDetailsModifier impl_IPaymentDetailsModifierFactory<D>::Create(iterable<hstring> supportedMethodIds, const Windows::ApplicationModel::Payments::PaymentItem & total) const
{
    Windows::ApplicationModel::Payments::PaymentDetailsModifier result { nullptr };
    check_hresult(WINRT_SHIM(IPaymentDetailsModifierFactory)->abi_Create(get_abi(supportedMethodIds), get_abi(total), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentDetailsModifier impl_IPaymentDetailsModifierFactory<D>::CreateWithAdditionalDisplayItems(iterable<hstring> supportedMethodIds, const Windows::ApplicationModel::Payments::PaymentItem & total, iterable<Windows::ApplicationModel::Payments::PaymentItem> additionalDisplayItems) const
{
    Windows::ApplicationModel::Payments::PaymentDetailsModifier result { nullptr };
    check_hresult(WINRT_SHIM(IPaymentDetailsModifierFactory)->abi_CreateWithAdditionalDisplayItems(get_abi(supportedMethodIds), get_abi(total), get_abi(additionalDisplayItems), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentDetailsModifier impl_IPaymentDetailsModifierFactory<D>::CreateWithAdditionalDisplayItemsAndJsonData(iterable<hstring> supportedMethodIds, const Windows::ApplicationModel::Payments::PaymentItem & total, iterable<Windows::ApplicationModel::Payments::PaymentItem> additionalDisplayItems, hstring_view jsonData) const
{
    Windows::ApplicationModel::Payments::PaymentDetailsModifier result { nullptr };
    check_hresult(WINRT_SHIM(IPaymentDetailsModifierFactory)->abi_CreateWithAdditionalDisplayItemsAndJsonData(get_abi(supportedMethodIds), get_abi(total), get_abi(additionalDisplayItems), get_abi(jsonData), put_abi(result)));
    return result;
}

template <typename D> hstring impl_IPaymentToken<D>::PaymentMethodId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPaymentToken)->get_PaymentMethodId(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IPaymentToken<D>::JsonDetails() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPaymentToken)->get_JsonDetails(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentToken impl_IPaymentTokenFactory<D>::Create(hstring_view paymentMethodId) const
{
    Windows::ApplicationModel::Payments::PaymentToken result { nullptr };
    check_hresult(WINRT_SHIM(IPaymentTokenFactory)->abi_Create(get_abi(paymentMethodId), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentToken impl_IPaymentTokenFactory<D>::CreateWithJsonDetails(hstring_view paymentMethodId, hstring_view jsonDetails) const
{
    Windows::ApplicationModel::Payments::PaymentToken result { nullptr };
    check_hresult(WINRT_SHIM(IPaymentTokenFactory)->abi_CreateWithJsonDetails(get_abi(paymentMethodId), get_abi(jsonDetails), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IPaymentMethodData<D>::SupportedMethodIds() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(WINRT_SHIM(IPaymentMethodData)->get_SupportedMethodIds(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IPaymentMethodData<D>::JsonData() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPaymentMethodData)->get_JsonData(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentMethodData impl_IPaymentMethodDataFactory<D>::Create(iterable<hstring> supportedMethodIds) const
{
    Windows::ApplicationModel::Payments::PaymentMethodData result { nullptr };
    check_hresult(WINRT_SHIM(IPaymentMethodDataFactory)->abi_Create(get_abi(supportedMethodIds), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentMethodData impl_IPaymentMethodDataFactory<D>::CreateWithJsonData(iterable<hstring> supportedMethodIds, hstring_view jsonData) const
{
    Windows::ApplicationModel::Payments::PaymentMethodData result { nullptr };
    check_hresult(WINRT_SHIM(IPaymentMethodDataFactory)->abi_CreateWithJsonData(get_abi(supportedMethodIds), get_abi(jsonData), put_abi(result)));
    return result;
}

template <typename D> hstring impl_IPaymentCurrencyAmount<D>::Currency() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPaymentCurrencyAmount)->get_Currency(put_abi(value)));
    return value;
}

template <typename D> void impl_IPaymentCurrencyAmount<D>::Currency(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IPaymentCurrencyAmount)->put_Currency(get_abi(value)));
}

template <typename D> hstring impl_IPaymentCurrencyAmount<D>::CurrencySystem() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPaymentCurrencyAmount)->get_CurrencySystem(put_abi(value)));
    return value;
}

template <typename D> void impl_IPaymentCurrencyAmount<D>::CurrencySystem(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IPaymentCurrencyAmount)->put_CurrencySystem(get_abi(value)));
}

template <typename D> hstring impl_IPaymentCurrencyAmount<D>::Value() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPaymentCurrencyAmount)->get_Value(put_abi(value)));
    return value;
}

template <typename D> void impl_IPaymentCurrencyAmount<D>::Value(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IPaymentCurrencyAmount)->put_Value(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentCurrencyAmount impl_IPaymentCurrencyAmountFactory<D>::Create(hstring_view value, hstring_view currency) const
{
    Windows::ApplicationModel::Payments::PaymentCurrencyAmount result { nullptr };
    check_hresult(WINRT_SHIM(IPaymentCurrencyAmountFactory)->abi_Create(get_abi(value), get_abi(currency), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentCurrencyAmount impl_IPaymentCurrencyAmountFactory<D>::CreateWithCurrencySystem(hstring_view value, hstring_view currency, hstring_view currencySystem) const
{
    Windows::ApplicationModel::Payments::PaymentCurrencyAmount result { nullptr };
    check_hresult(WINRT_SHIM(IPaymentCurrencyAmountFactory)->abi_CreateWithCurrencySystem(get_abi(value), get_abi(currency), get_abi(currencySystem), put_abi(result)));
    return result;
}

template <typename D> hstring impl_IPaymentItem<D>::Label() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPaymentItem)->get_Label(put_abi(value)));
    return value;
}

template <typename D> void impl_IPaymentItem<D>::Label(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IPaymentItem)->put_Label(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentCurrencyAmount impl_IPaymentItem<D>::Amount() const
{
    Windows::ApplicationModel::Payments::PaymentCurrencyAmount value { nullptr };
    check_hresult(WINRT_SHIM(IPaymentItem)->get_Amount(put_abi(value)));
    return value;
}

template <typename D> void impl_IPaymentItem<D>::Amount(const Windows::ApplicationModel::Payments::PaymentCurrencyAmount & value) const
{
    check_hresult(WINRT_SHIM(IPaymentItem)->put_Amount(get_abi(value)));
}

template <typename D> bool impl_IPaymentItem<D>::Pending() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPaymentItem)->get_Pending(&value));
    return value;
}

template <typename D> void impl_IPaymentItem<D>::Pending(bool value) const
{
    check_hresult(WINRT_SHIM(IPaymentItem)->put_Pending(value));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentItem impl_IPaymentItemFactory<D>::Create(hstring_view label, const Windows::ApplicationModel::Payments::PaymentCurrencyAmount & amount) const
{
    Windows::ApplicationModel::Payments::PaymentItem result { nullptr };
    check_hresult(WINRT_SHIM(IPaymentItemFactory)->abi_Create(get_abi(label), get_abi(amount), put_abi(result)));
    return result;
}

template <typename D> hstring impl_IPaymentShippingOption<D>::Label() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPaymentShippingOption)->get_Label(put_abi(value)));
    return value;
}

template <typename D> void impl_IPaymentShippingOption<D>::Label(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IPaymentShippingOption)->put_Label(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentCurrencyAmount impl_IPaymentShippingOption<D>::Amount() const
{
    Windows::ApplicationModel::Payments::PaymentCurrencyAmount value { nullptr };
    check_hresult(WINRT_SHIM(IPaymentShippingOption)->get_Amount(put_abi(value)));
    return value;
}

template <typename D> void impl_IPaymentShippingOption<D>::Amount(const Windows::ApplicationModel::Payments::PaymentCurrencyAmount & value) const
{
    check_hresult(WINRT_SHIM(IPaymentShippingOption)->put_Amount(get_abi(value)));
}

template <typename D> hstring impl_IPaymentShippingOption<D>::Tag() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPaymentShippingOption)->get_Tag(put_abi(value)));
    return value;
}

template <typename D> void impl_IPaymentShippingOption<D>::Tag(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IPaymentShippingOption)->put_Tag(get_abi(value)));
}

template <typename D> bool impl_IPaymentShippingOption<D>::IsSelected() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPaymentShippingOption)->get_IsSelected(&value));
    return value;
}

template <typename D> void impl_IPaymentShippingOption<D>::IsSelected(bool value) const
{
    check_hresult(WINRT_SHIM(IPaymentShippingOption)->put_IsSelected(value));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentShippingOption impl_IPaymentShippingOptionFactory<D>::Create(hstring_view label, const Windows::ApplicationModel::Payments::PaymentCurrencyAmount & amount) const
{
    Windows::ApplicationModel::Payments::PaymentShippingOption result { nullptr };
    check_hresult(WINRT_SHIM(IPaymentShippingOptionFactory)->abi_Create(get_abi(label), get_abi(amount), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentShippingOption impl_IPaymentShippingOptionFactory<D>::CreateWithSelected(hstring_view label, const Windows::ApplicationModel::Payments::PaymentCurrencyAmount & amount, bool selected) const
{
    Windows::ApplicationModel::Payments::PaymentShippingOption result { nullptr };
    check_hresult(WINRT_SHIM(IPaymentShippingOptionFactory)->abi_CreateWithSelected(get_abi(label), get_abi(amount), selected, put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentShippingOption impl_IPaymentShippingOptionFactory<D>::CreateWithSelectedAndTag(hstring_view label, const Windows::ApplicationModel::Payments::PaymentCurrencyAmount & amount, bool selected, hstring_view tag) const
{
    Windows::ApplicationModel::Payments::PaymentShippingOption result { nullptr };
    check_hresult(WINRT_SHIM(IPaymentShippingOptionFactory)->abi_CreateWithSelectedAndTag(get_abi(label), get_abi(amount), selected, get_abi(tag), put_abi(result)));
    return result;
}

template <typename D> hstring impl_IPaymentAddress<D>::Country() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPaymentAddress)->get_Country(put_abi(value)));
    return value;
}

template <typename D> void impl_IPaymentAddress<D>::Country(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IPaymentAddress)->put_Country(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IPaymentAddress<D>::AddressLines() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(WINRT_SHIM(IPaymentAddress)->get_AddressLines(put_abi(value)));
    return value;
}

template <typename D> void impl_IPaymentAddress<D>::AddressLines(const Windows::Foundation::Collections::IVectorView<hstring> & value) const
{
    check_hresult(WINRT_SHIM(IPaymentAddress)->put_AddressLines(get_abi(value)));
}

template <typename D> hstring impl_IPaymentAddress<D>::Region() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPaymentAddress)->get_Region(put_abi(value)));
    return value;
}

template <typename D> void impl_IPaymentAddress<D>::Region(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IPaymentAddress)->put_Region(get_abi(value)));
}

template <typename D> hstring impl_IPaymentAddress<D>::City() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPaymentAddress)->get_City(put_abi(value)));
    return value;
}

template <typename D> void impl_IPaymentAddress<D>::City(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IPaymentAddress)->put_City(get_abi(value)));
}

template <typename D> hstring impl_IPaymentAddress<D>::DependentLocality() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPaymentAddress)->get_DependentLocality(put_abi(value)));
    return value;
}

template <typename D> void impl_IPaymentAddress<D>::DependentLocality(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IPaymentAddress)->put_DependentLocality(get_abi(value)));
}

template <typename D> hstring impl_IPaymentAddress<D>::PostalCode() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPaymentAddress)->get_PostalCode(put_abi(value)));
    return value;
}

template <typename D> void impl_IPaymentAddress<D>::PostalCode(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IPaymentAddress)->put_PostalCode(get_abi(value)));
}

template <typename D> hstring impl_IPaymentAddress<D>::SortingCode() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPaymentAddress)->get_SortingCode(put_abi(value)));
    return value;
}

template <typename D> void impl_IPaymentAddress<D>::SortingCode(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IPaymentAddress)->put_SortingCode(get_abi(value)));
}

template <typename D> hstring impl_IPaymentAddress<D>::LanguageCode() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPaymentAddress)->get_LanguageCode(put_abi(value)));
    return value;
}

template <typename D> void impl_IPaymentAddress<D>::LanguageCode(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IPaymentAddress)->put_LanguageCode(get_abi(value)));
}

template <typename D> hstring impl_IPaymentAddress<D>::Organization() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPaymentAddress)->get_Organization(put_abi(value)));
    return value;
}

template <typename D> void impl_IPaymentAddress<D>::Organization(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IPaymentAddress)->put_Organization(get_abi(value)));
}

template <typename D> hstring impl_IPaymentAddress<D>::Recipient() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPaymentAddress)->get_Recipient(put_abi(value)));
    return value;
}

template <typename D> void impl_IPaymentAddress<D>::Recipient(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IPaymentAddress)->put_Recipient(get_abi(value)));
}

template <typename D> hstring impl_IPaymentAddress<D>::PhoneNumber() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPaymentAddress)->get_PhoneNumber(put_abi(value)));
    return value;
}

template <typename D> void impl_IPaymentAddress<D>::PhoneNumber(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IPaymentAddress)->put_PhoneNumber(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::ValueSet impl_IPaymentAddress<D>::Properties() const
{
    Windows::Foundation::Collections::ValueSet value { nullptr };
    check_hresult(WINRT_SHIM(IPaymentAddress)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IPaymentMerchantInfo<D>::PackageFullName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPaymentMerchantInfo)->get_PackageFullName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IPaymentMerchantInfo<D>::Uri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(WINRT_SHIM(IPaymentMerchantInfo)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentMerchantInfo impl_IPaymentMerchantInfoFactory<D>::Create(const Windows::Foundation::Uri & uri) const
{
    Windows::ApplicationModel::Payments::PaymentMerchantInfo result { nullptr };
    check_hresult(WINRT_SHIM(IPaymentMerchantInfoFactory)->abi_Create(get_abi(uri), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentOptionPresence impl_IPaymentOptions<D>::RequestPayerEmail() const
{
    Windows::ApplicationModel::Payments::PaymentOptionPresence value {};
    check_hresult(WINRT_SHIM(IPaymentOptions)->get_RequestPayerEmail(&value));
    return value;
}

template <typename D> void impl_IPaymentOptions<D>::RequestPayerEmail(Windows::ApplicationModel::Payments::PaymentOptionPresence value) const
{
    check_hresult(WINRT_SHIM(IPaymentOptions)->put_RequestPayerEmail(value));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentOptionPresence impl_IPaymentOptions<D>::RequestPayerName() const
{
    Windows::ApplicationModel::Payments::PaymentOptionPresence value {};
    check_hresult(WINRT_SHIM(IPaymentOptions)->get_RequestPayerName(&value));
    return value;
}

template <typename D> void impl_IPaymentOptions<D>::RequestPayerName(Windows::ApplicationModel::Payments::PaymentOptionPresence value) const
{
    check_hresult(WINRT_SHIM(IPaymentOptions)->put_RequestPayerName(value));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentOptionPresence impl_IPaymentOptions<D>::RequestPayerPhoneNumber() const
{
    Windows::ApplicationModel::Payments::PaymentOptionPresence value {};
    check_hresult(WINRT_SHIM(IPaymentOptions)->get_RequestPayerPhoneNumber(&value));
    return value;
}

template <typename D> void impl_IPaymentOptions<D>::RequestPayerPhoneNumber(Windows::ApplicationModel::Payments::PaymentOptionPresence value) const
{
    check_hresult(WINRT_SHIM(IPaymentOptions)->put_RequestPayerPhoneNumber(value));
}

template <typename D> bool impl_IPaymentOptions<D>::RequestShipping() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPaymentOptions)->get_RequestShipping(&value));
    return value;
}

template <typename D> void impl_IPaymentOptions<D>::RequestShipping(bool value) const
{
    check_hresult(WINRT_SHIM(IPaymentOptions)->put_RequestShipping(value));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentShippingType impl_IPaymentOptions<D>::ShippingType() const
{
    Windows::ApplicationModel::Payments::PaymentShippingType value {};
    check_hresult(WINRT_SHIM(IPaymentOptions)->get_ShippingType(&value));
    return value;
}

template <typename D> void impl_IPaymentOptions<D>::ShippingType(Windows::ApplicationModel::Payments::PaymentShippingType value) const
{
    check_hresult(WINRT_SHIM(IPaymentOptions)->put_ShippingType(value));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentRequestChangeKind impl_IPaymentRequestChangedArgs<D>::ChangeKind() const
{
    Windows::ApplicationModel::Payments::PaymentRequestChangeKind value {};
    check_hresult(WINRT_SHIM(IPaymentRequestChangedArgs)->get_ChangeKind(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentAddress impl_IPaymentRequestChangedArgs<D>::ShippingAddress() const
{
    Windows::ApplicationModel::Payments::PaymentAddress value { nullptr };
    check_hresult(WINRT_SHIM(IPaymentRequestChangedArgs)->get_ShippingAddress(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentShippingOption impl_IPaymentRequestChangedArgs<D>::SelectedShippingOption() const
{
    Windows::ApplicationModel::Payments::PaymentShippingOption value { nullptr };
    check_hresult(WINRT_SHIM(IPaymentRequestChangedArgs)->get_SelectedShippingOption(put_abi(value)));
    return value;
}

template <typename D> void impl_IPaymentRequestChangedArgs<D>::Acknowledge(const Windows::ApplicationModel::Payments::PaymentRequestChangedResult & changeResult) const
{
    check_hresult(WINRT_SHIM(IPaymentRequestChangedArgs)->abi_Acknowledge(get_abi(changeResult)));
}

template <typename D> bool impl_IPaymentRequestChangedResult<D>::ChangeAcceptedByMerchant() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPaymentRequestChangedResult)->get_ChangeAcceptedByMerchant(&value));
    return value;
}

template <typename D> void impl_IPaymentRequestChangedResult<D>::ChangeAcceptedByMerchant(bool value) const
{
    check_hresult(WINRT_SHIM(IPaymentRequestChangedResult)->put_ChangeAcceptedByMerchant(value));
}

template <typename D> hstring impl_IPaymentRequestChangedResult<D>::Message() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPaymentRequestChangedResult)->get_Message(put_abi(value)));
    return value;
}

template <typename D> void impl_IPaymentRequestChangedResult<D>::Message(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IPaymentRequestChangedResult)->put_Message(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentDetails impl_IPaymentRequestChangedResult<D>::UpdatedPaymentDetails() const
{
    Windows::ApplicationModel::Payments::PaymentDetails value { nullptr };
    check_hresult(WINRT_SHIM(IPaymentRequestChangedResult)->get_UpdatedPaymentDetails(put_abi(value)));
    return value;
}

template <typename D> void impl_IPaymentRequestChangedResult<D>::UpdatedPaymentDetails(const Windows::ApplicationModel::Payments::PaymentDetails & value) const
{
    check_hresult(WINRT_SHIM(IPaymentRequestChangedResult)->put_UpdatedPaymentDetails(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentRequestChangedResult impl_IPaymentRequestChangedResultFactory<D>::Create(bool changeAcceptedByMerchant) const
{
    Windows::ApplicationModel::Payments::PaymentRequestChangedResult result { nullptr };
    check_hresult(WINRT_SHIM(IPaymentRequestChangedResultFactory)->abi_Create(changeAcceptedByMerchant, put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentRequestChangedResult impl_IPaymentRequestChangedResultFactory<D>::CreateWithPaymentDetails(bool changeAcceptedByMerchant, const Windows::ApplicationModel::Payments::PaymentDetails & updatedPaymentDetails) const
{
    Windows::ApplicationModel::Payments::PaymentRequestChangedResult result { nullptr };
    check_hresult(WINRT_SHIM(IPaymentRequestChangedResultFactory)->abi_CreateWithPaymentDetails(changeAcceptedByMerchant, get_abi(updatedPaymentDetails), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> impl_IPaymentMediator<D>::GetSupportedMethodIdsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> result;
    check_hresult(WINRT_SHIM(IPaymentMediator)->abi_GetSupportedMethodIdsAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult> impl_IPaymentMediator<D>::SubmitPaymentRequestAsync(const Windows::ApplicationModel::Payments::PaymentRequest & paymentRequest) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult> result;
    check_hresult(WINRT_SHIM(IPaymentMediator)->abi_SubmitPaymentRequestAsync(get_abi(paymentRequest), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult> impl_IPaymentMediator<D>::SubmitPaymentRequestAsync(const Windows::ApplicationModel::Payments::PaymentRequest & paymentRequest, const Windows::ApplicationModel::Payments::PaymentRequestChangedHandler & changeHandler) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult> result;
    check_hresult(WINRT_SHIM(IPaymentMediator)->abi_SubmitPaymentRequestWithChangeHandlerAsync(get_abi(paymentRequest), get_abi(changeHandler), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentRequestStatus impl_IPaymentRequestSubmitResult<D>::Status() const
{
    Windows::ApplicationModel::Payments::PaymentRequestStatus value {};
    check_hresult(WINRT_SHIM(IPaymentRequestSubmitResult)->get_Status(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentResponse impl_IPaymentRequestSubmitResult<D>::Response() const
{
    Windows::ApplicationModel::Payments::PaymentResponse value { nullptr };
    check_hresult(WINRT_SHIM(IPaymentRequestSubmitResult)->get_Response(put_abi(value)));
    return value;
}

inline PaymentAddress::PaymentAddress() :
    PaymentAddress(activate_instance<PaymentAddress>())
{}

inline PaymentCurrencyAmount::PaymentCurrencyAmount(hstring_view value, hstring_view currency) :
    PaymentCurrencyAmount(get_activation_factory<PaymentCurrencyAmount, IPaymentCurrencyAmountFactory>().Create(value, currency))
{}

inline PaymentCurrencyAmount::PaymentCurrencyAmount(hstring_view value, hstring_view currency, hstring_view currencySystem) :
    PaymentCurrencyAmount(get_activation_factory<PaymentCurrencyAmount, IPaymentCurrencyAmountFactory>().CreateWithCurrencySystem(value, currency, currencySystem))
{}

inline PaymentDetails::PaymentDetails() :
    PaymentDetails(activate_instance<PaymentDetails>())
{}

inline PaymentDetails::PaymentDetails(const Windows::ApplicationModel::Payments::PaymentItem & total) :
    PaymentDetails(get_activation_factory<PaymentDetails, IPaymentDetailsFactory>().Create(total))
{}

inline PaymentDetails::PaymentDetails(const Windows::ApplicationModel::Payments::PaymentItem & total, iterable<Windows::ApplicationModel::Payments::PaymentItem> displayItems) :
    PaymentDetails(get_activation_factory<PaymentDetails, IPaymentDetailsFactory>().CreateWithDisplayItems(total, displayItems))
{}

inline PaymentDetailsModifier::PaymentDetailsModifier(iterable<hstring> supportedMethodIds, const Windows::ApplicationModel::Payments::PaymentItem & total) :
    PaymentDetailsModifier(get_activation_factory<PaymentDetailsModifier, IPaymentDetailsModifierFactory>().Create(supportedMethodIds, total))
{}

inline PaymentDetailsModifier::PaymentDetailsModifier(iterable<hstring> supportedMethodIds, const Windows::ApplicationModel::Payments::PaymentItem & total, iterable<Windows::ApplicationModel::Payments::PaymentItem> additionalDisplayItems) :
    PaymentDetailsModifier(get_activation_factory<PaymentDetailsModifier, IPaymentDetailsModifierFactory>().CreateWithAdditionalDisplayItems(supportedMethodIds, total, additionalDisplayItems))
{}

inline PaymentDetailsModifier::PaymentDetailsModifier(iterable<hstring> supportedMethodIds, const Windows::ApplicationModel::Payments::PaymentItem & total, iterable<Windows::ApplicationModel::Payments::PaymentItem> additionalDisplayItems, hstring_view jsonData) :
    PaymentDetailsModifier(get_activation_factory<PaymentDetailsModifier, IPaymentDetailsModifierFactory>().CreateWithAdditionalDisplayItemsAndJsonData(supportedMethodIds, total, additionalDisplayItems, jsonData))
{}

inline PaymentItem::PaymentItem(hstring_view label, const Windows::ApplicationModel::Payments::PaymentCurrencyAmount & amount) :
    PaymentItem(get_activation_factory<PaymentItem, IPaymentItemFactory>().Create(label, amount))
{}

inline PaymentMediator::PaymentMediator() :
    PaymentMediator(activate_instance<PaymentMediator>())
{}

inline PaymentMerchantInfo::PaymentMerchantInfo() :
    PaymentMerchantInfo(activate_instance<PaymentMerchantInfo>())
{}

inline PaymentMerchantInfo::PaymentMerchantInfo(const Windows::Foundation::Uri & uri) :
    PaymentMerchantInfo(get_activation_factory<PaymentMerchantInfo, IPaymentMerchantInfoFactory>().Create(uri))
{}

inline PaymentMethodData::PaymentMethodData(iterable<hstring> supportedMethodIds) :
    PaymentMethodData(get_activation_factory<PaymentMethodData, IPaymentMethodDataFactory>().Create(supportedMethodIds))
{}

inline PaymentMethodData::PaymentMethodData(iterable<hstring> supportedMethodIds, hstring_view jsonData) :
    PaymentMethodData(get_activation_factory<PaymentMethodData, IPaymentMethodDataFactory>().CreateWithJsonData(supportedMethodIds, jsonData))
{}

inline PaymentOptions::PaymentOptions() :
    PaymentOptions(activate_instance<PaymentOptions>())
{}

inline PaymentRequest::PaymentRequest(const Windows::ApplicationModel::Payments::PaymentDetails & details, iterable<Windows::ApplicationModel::Payments::PaymentMethodData> methodData) :
    PaymentRequest(get_activation_factory<PaymentRequest, IPaymentRequestFactory>().Create(details, methodData))
{}

inline PaymentRequest::PaymentRequest(const Windows::ApplicationModel::Payments::PaymentDetails & details, iterable<Windows::ApplicationModel::Payments::PaymentMethodData> methodData, const Windows::ApplicationModel::Payments::PaymentMerchantInfo & merchantInfo) :
    PaymentRequest(get_activation_factory<PaymentRequest, IPaymentRequestFactory>().CreateWithMerchantInfo(details, methodData, merchantInfo))
{}

inline PaymentRequest::PaymentRequest(const Windows::ApplicationModel::Payments::PaymentDetails & details, iterable<Windows::ApplicationModel::Payments::PaymentMethodData> methodData, const Windows::ApplicationModel::Payments::PaymentMerchantInfo & merchantInfo, const Windows::ApplicationModel::Payments::PaymentOptions & options) :
    PaymentRequest(get_activation_factory<PaymentRequest, IPaymentRequestFactory>().CreateWithMerchantInfoAndOptions(details, methodData, merchantInfo, options))
{}

inline PaymentRequestChangedResult::PaymentRequestChangedResult(bool changeAcceptedByMerchant) :
    PaymentRequestChangedResult(get_activation_factory<PaymentRequestChangedResult, IPaymentRequestChangedResultFactory>().Create(changeAcceptedByMerchant))
{}

inline PaymentRequestChangedResult::PaymentRequestChangedResult(bool changeAcceptedByMerchant, const Windows::ApplicationModel::Payments::PaymentDetails & updatedPaymentDetails) :
    PaymentRequestChangedResult(get_activation_factory<PaymentRequestChangedResult, IPaymentRequestChangedResultFactory>().CreateWithPaymentDetails(changeAcceptedByMerchant, updatedPaymentDetails))
{}

inline PaymentShippingOption::PaymentShippingOption(hstring_view label, const Windows::ApplicationModel::Payments::PaymentCurrencyAmount & amount) :
    PaymentShippingOption(get_activation_factory<PaymentShippingOption, IPaymentShippingOptionFactory>().Create(label, amount))
{}

inline PaymentShippingOption::PaymentShippingOption(hstring_view label, const Windows::ApplicationModel::Payments::PaymentCurrencyAmount & amount, bool selected) :
    PaymentShippingOption(get_activation_factory<PaymentShippingOption, IPaymentShippingOptionFactory>().CreateWithSelected(label, amount, selected))
{}

inline PaymentShippingOption::PaymentShippingOption(hstring_view label, const Windows::ApplicationModel::Payments::PaymentCurrencyAmount & amount, bool selected, hstring_view tag) :
    PaymentShippingOption(get_activation_factory<PaymentShippingOption, IPaymentShippingOptionFactory>().CreateWithSelectedAndTag(label, amount, selected, tag))
{}

inline PaymentToken::PaymentToken(hstring_view paymentMethodId) :
    PaymentToken(get_activation_factory<PaymentToken, IPaymentTokenFactory>().Create(paymentMethodId))
{}

inline PaymentToken::PaymentToken(hstring_view paymentMethodId, hstring_view jsonDetails) :
    PaymentToken(get_activation_factory<PaymentToken, IPaymentTokenFactory>().CreateWithJsonDetails(paymentMethodId, jsonDetails))
{}

}

}

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::IPaymentAddress>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::IPaymentAddress & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::IPaymentCurrencyAmount>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::IPaymentCurrencyAmount & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::IPaymentDetails>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::IPaymentDetails & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::IPaymentDetailsFactory>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::IPaymentDetailsFactory & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::IPaymentDetailsModifier>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::IPaymentDetailsModifier & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::IPaymentItem>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::IPaymentItem & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::IPaymentItemFactory>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::IPaymentItemFactory & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::IPaymentMediator>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::IPaymentMediator & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::IPaymentMerchantInfo>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::IPaymentMerchantInfo & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::IPaymentMethodData>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::IPaymentMethodData & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::IPaymentMethodDataFactory>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::IPaymentMethodDataFactory & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::IPaymentOptions>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::IPaymentOptions & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::IPaymentRequest>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::IPaymentRequest & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::IPaymentRequestChangedResult>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::IPaymentRequestChangedResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::IPaymentRequestFactory>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::IPaymentRequestFactory & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::IPaymentResponse>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::IPaymentResponse & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::IPaymentShippingOption>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::IPaymentShippingOption & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::IPaymentToken>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::IPaymentToken & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::IPaymentTokenFactory>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::IPaymentTokenFactory & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::PaymentAddress>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::PaymentAddress & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::PaymentCurrencyAmount>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::PaymentCurrencyAmount & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::PaymentDetails>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::PaymentDetails & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::PaymentDetailsModifier>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::PaymentDetailsModifier & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::PaymentItem>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::PaymentItem & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::PaymentMediator>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::PaymentMediator & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::PaymentMerchantInfo>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::PaymentMerchantInfo & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::PaymentMethodData>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::PaymentMethodData & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::PaymentOptions>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::PaymentOptions & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::PaymentRequest>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::PaymentRequest & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::PaymentRequestChangedArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::PaymentRequestChangedArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::PaymentRequestChangedResult>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::PaymentRequestChangedResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::PaymentRequestSubmitResult>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::PaymentRequestSubmitResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::PaymentResponse>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::PaymentResponse & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::PaymentShippingOption>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::PaymentShippingOption & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::PaymentToken>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::PaymentToken & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
