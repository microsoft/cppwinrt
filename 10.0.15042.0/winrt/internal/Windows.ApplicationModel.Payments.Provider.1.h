// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.ApplicationModel.Payments.Provider.0.h"
#include "Windows.ApplicationModel.Payments.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.ApplicationModel.Payments.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::Payments::Provider {

struct __declspec(uuid("0e47aa53-8521-4969-a957-df2538a3a98f")) __declspec(novtable) IPaymentAppManager : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_RegisterAsync(Windows::Foundation::Collections::IIterable<hstring> * supportedPaymentMethodIds, Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_UnregisterAsync(Windows::Foundation::IAsyncAction ** result) = 0;
};

struct __declspec(uuid("a341ac28-fc89-4406-b4d9-34e7fe79dfb6")) __declspec(novtable) IPaymentAppManagerStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Current(Windows::ApplicationModel::Payments::Provider::IPaymentAppManager ** value) = 0;
};

struct __declspec(uuid("62581da0-26a5-4e9b-a6eb-66606cf001d3")) __declspec(novtable) IPaymentTransaction : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_PaymentRequest(Windows::ApplicationModel::Payments::IPaymentRequest ** value) = 0;
    virtual HRESULT __stdcall get_PayerEmail(hstring * value) = 0;
    virtual HRESULT __stdcall put_PayerEmail(hstring value) = 0;
    virtual HRESULT __stdcall get_PayerName(hstring * value) = 0;
    virtual HRESULT __stdcall put_PayerName(hstring value) = 0;
    virtual HRESULT __stdcall get_PayerPhoneNumber(hstring * value) = 0;
    virtual HRESULT __stdcall put_PayerPhoneNumber(hstring value) = 0;
    virtual HRESULT __stdcall abi_UpdateShippingAddressAsync(Windows::ApplicationModel::Payments::IPaymentAddress * shippingAddress, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestChangedResult> ** result) = 0;
    virtual HRESULT __stdcall abi_UpdateSelectedShippingOptionAsync(Windows::ApplicationModel::Payments::IPaymentShippingOption * selectedShippingOption, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestChangedResult> ** result) = 0;
    virtual HRESULT __stdcall abi_AcceptAsync(Windows::ApplicationModel::Payments::IPaymentToken * paymentToken, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::Provider::PaymentTransactionAcceptResult> ** result) = 0;
    virtual HRESULT __stdcall abi_Reject() = 0;
};

struct __declspec(uuid("060e3276-d30c-4817-95a2-df7ae9273b56")) __declspec(novtable) IPaymentTransactionAcceptResult : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus * value) = 0;
};

struct __declspec(uuid("8d639750-ee0a-4df5-9b1e-1c0f9ec59881")) __declspec(novtable) IPaymentTransactionStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_FromIdAsync(hstring id, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::Provider::PaymentTransaction> ** result) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::ApplicationModel::Payments::Provider::PaymentAppManager> { using default_interface = Windows::ApplicationModel::Payments::Provider::IPaymentAppManager; };
template <> struct traits<Windows::ApplicationModel::Payments::Provider::PaymentTransaction> { using default_interface = Windows::ApplicationModel::Payments::Provider::IPaymentTransaction; };
template <> struct traits<Windows::ApplicationModel::Payments::Provider::PaymentTransactionAcceptResult> { using default_interface = Windows::ApplicationModel::Payments::Provider::IPaymentTransactionAcceptResult; };

}

namespace Windows::ApplicationModel::Payments::Provider {

template <typename D>
struct WINRT_EBO impl_IPaymentAppManager
{
    Windows::Foundation::IAsyncAction RegisterAsync(iterable<hstring> supportedPaymentMethodIds) const;
    Windows::Foundation::IAsyncAction UnregisterAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IPaymentAppManagerStatics
{
    Windows::ApplicationModel::Payments::Provider::PaymentAppManager Current() const;
};

template <typename D>
struct WINRT_EBO impl_IPaymentTransaction
{
    Windows::ApplicationModel::Payments::PaymentRequest PaymentRequest() const;
    hstring PayerEmail() const;
    void PayerEmail(hstring_view value) const;
    hstring PayerName() const;
    void PayerName(hstring_view value) const;
    hstring PayerPhoneNumber() const;
    void PayerPhoneNumber(hstring_view value) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestChangedResult> UpdateShippingAddressAsync(const Windows::ApplicationModel::Payments::PaymentAddress & shippingAddress) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestChangedResult> UpdateSelectedShippingOptionAsync(const Windows::ApplicationModel::Payments::PaymentShippingOption & selectedShippingOption) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::Provider::PaymentTransactionAcceptResult> AcceptAsync(const Windows::ApplicationModel::Payments::PaymentToken & paymentToken) const;
    void Reject() const;
};

template <typename D>
struct WINRT_EBO impl_IPaymentTransactionAcceptResult
{
    Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus Status() const;
};

template <typename D>
struct WINRT_EBO impl_IPaymentTransactionStatics
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::Provider::PaymentTransaction> FromIdAsync(hstring_view id) const;
};

}

namespace impl {

template <> struct traits<Windows::ApplicationModel::Payments::Provider::IPaymentAppManager>
{
    using abi = ABI::Windows::ApplicationModel::Payments::Provider::IPaymentAppManager;
    template <typename D> using consume = Windows::ApplicationModel::Payments::Provider::impl_IPaymentAppManager<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::Provider::IPaymentAppManagerStatics>
{
    using abi = ABI::Windows::ApplicationModel::Payments::Provider::IPaymentAppManagerStatics;
    template <typename D> using consume = Windows::ApplicationModel::Payments::Provider::impl_IPaymentAppManagerStatics<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::Provider::IPaymentTransaction>
{
    using abi = ABI::Windows::ApplicationModel::Payments::Provider::IPaymentTransaction;
    template <typename D> using consume = Windows::ApplicationModel::Payments::Provider::impl_IPaymentTransaction<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::Provider::IPaymentTransactionAcceptResult>
{
    using abi = ABI::Windows::ApplicationModel::Payments::Provider::IPaymentTransactionAcceptResult;
    template <typename D> using consume = Windows::ApplicationModel::Payments::Provider::impl_IPaymentTransactionAcceptResult<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::Provider::IPaymentTransactionStatics>
{
    using abi = ABI::Windows::ApplicationModel::Payments::Provider::IPaymentTransactionStatics;
    template <typename D> using consume = Windows::ApplicationModel::Payments::Provider::impl_IPaymentTransactionStatics<D>;
};

template <> struct traits<Windows::ApplicationModel::Payments::Provider::PaymentAppManager>
{
    using abi = ABI::Windows::ApplicationModel::Payments::Provider::PaymentAppManager;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Payments.Provider.PaymentAppManager"; }
};

template <> struct traits<Windows::ApplicationModel::Payments::Provider::PaymentTransaction>
{
    using abi = ABI::Windows::ApplicationModel::Payments::Provider::PaymentTransaction;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Payments.Provider.PaymentTransaction"; }
};

template <> struct traits<Windows::ApplicationModel::Payments::Provider::PaymentTransactionAcceptResult>
{
    using abi = ABI::Windows::ApplicationModel::Payments::Provider::PaymentTransactionAcceptResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Payments.Provider.PaymentTransactionAcceptResult"; }
};

}

}
