// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Payments {

enum class PaymentRequestCompletionStatus;
struct PaymentAddress;
struct PaymentRequest;
struct PaymentRequestChangedResult;
struct PaymentShippingOption;
struct PaymentToken;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Payments::Provider {

struct IPaymentAppManager;
struct IPaymentAppManagerStatics;
struct IPaymentTransaction;
struct IPaymentTransactionAcceptResult;
struct IPaymentTransactionStatics;
struct PaymentAppManager;
struct PaymentTransaction;
struct PaymentTransactionAcceptResult;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::Payments::Provider::IPaymentAppManager>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::Provider::IPaymentAppManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::Provider::IPaymentTransaction>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::Provider::IPaymentTransactionAcceptResult>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::Provider::IPaymentTransactionStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Payments::Provider::PaymentAppManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Payments::Provider::PaymentTransaction>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Payments::Provider::PaymentTransactionAcceptResult>{ using type = class_category; };
template <> struct name<Windows::ApplicationModel::Payments::Provider::IPaymentAppManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.Provider.IPaymentAppManager" }; };
template <> struct name<Windows::ApplicationModel::Payments::Provider::IPaymentAppManagerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.Provider.IPaymentAppManagerStatics" }; };
template <> struct name<Windows::ApplicationModel::Payments::Provider::IPaymentTransaction>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.Provider.IPaymentTransaction" }; };
template <> struct name<Windows::ApplicationModel::Payments::Provider::IPaymentTransactionAcceptResult>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.Provider.IPaymentTransactionAcceptResult" }; };
template <> struct name<Windows::ApplicationModel::Payments::Provider::IPaymentTransactionStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.Provider.IPaymentTransactionStatics" }; };
template <> struct name<Windows::ApplicationModel::Payments::Provider::PaymentAppManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.Provider.PaymentAppManager" }; };
template <> struct name<Windows::ApplicationModel::Payments::Provider::PaymentTransaction>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.Provider.PaymentTransaction" }; };
template <> struct name<Windows::ApplicationModel::Payments::Provider::PaymentTransactionAcceptResult>{ static constexpr auto & value{ L"Windows.ApplicationModel.Payments.Provider.PaymentTransactionAcceptResult" }; };
template <> struct guid<Windows::ApplicationModel::Payments::Provider::IPaymentAppManager>{ static constexpr GUID value{ 0x0E47AA53,0x8521,0x4969,{ 0xA9,0x57,0xDF,0x25,0x38,0xA3,0xA9,0x8F } }; };
template <> struct guid<Windows::ApplicationModel::Payments::Provider::IPaymentAppManagerStatics>{ static constexpr GUID value{ 0xA341AC28,0xFC89,0x4406,{ 0xB4,0xD9,0x34,0xE7,0xFE,0x79,0xDF,0xB6 } }; };
template <> struct guid<Windows::ApplicationModel::Payments::Provider::IPaymentTransaction>{ static constexpr GUID value{ 0x62581DA0,0x26A5,0x4E9B,{ 0xA6,0xEB,0x66,0x60,0x6C,0xF0,0x01,0xD3 } }; };
template <> struct guid<Windows::ApplicationModel::Payments::Provider::IPaymentTransactionAcceptResult>{ static constexpr GUID value{ 0x060E3276,0xD30C,0x4817,{ 0x95,0xA2,0xDF,0x7A,0xE9,0x27,0x3B,0x56 } }; };
template <> struct guid<Windows::ApplicationModel::Payments::Provider::IPaymentTransactionStatics>{ static constexpr GUID value{ 0x8D639750,0xEE0A,0x4DF5,{ 0x9B,0x1E,0x1C,0x0F,0x9E,0xC5,0x98,0x81 } }; };
template <> struct default_interface<Windows::ApplicationModel::Payments::Provider::PaymentAppManager>{ using type = Windows::ApplicationModel::Payments::Provider::IPaymentAppManager; };
template <> struct default_interface<Windows::ApplicationModel::Payments::Provider::PaymentTransaction>{ using type = Windows::ApplicationModel::Payments::Provider::IPaymentTransaction; };
template <> struct default_interface<Windows::ApplicationModel::Payments::Provider::PaymentTransactionAcceptResult>{ using type = Windows::ApplicationModel::Payments::Provider::IPaymentTransactionAcceptResult; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_Provider_IPaymentAppManager
{
    Windows::Foundation::IAsyncAction RegisterAsync(param::async_iterable<hstring> const& supportedPaymentMethodIds) const;
    Windows::Foundation::IAsyncAction UnregisterAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Payments::Provider::IPaymentAppManager> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_Provider_IPaymentAppManager<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_Provider_IPaymentAppManagerStatics
{
    Windows::ApplicationModel::Payments::Provider::PaymentAppManager Current() const;
};
template <> struct consume<Windows::ApplicationModel::Payments::Provider::IPaymentAppManagerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_Provider_IPaymentAppManagerStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_Provider_IPaymentTransaction
{
    Windows::ApplicationModel::Payments::PaymentRequest PaymentRequest() const;
    hstring PayerEmail() const;
    void PayerEmail(param::hstring const& value) const;
    hstring PayerName() const;
    void PayerName(param::hstring const& value) const;
    hstring PayerPhoneNumber() const;
    void PayerPhoneNumber(param::hstring const& value) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestChangedResult> UpdateShippingAddressAsync(Windows::ApplicationModel::Payments::PaymentAddress const& shippingAddress) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestChangedResult> UpdateSelectedShippingOptionAsync(Windows::ApplicationModel::Payments::PaymentShippingOption const& selectedShippingOption) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::Provider::PaymentTransactionAcceptResult> AcceptAsync(Windows::ApplicationModel::Payments::PaymentToken const& paymentToken) const;
    void Reject() const;
};
template <> struct consume<Windows::ApplicationModel::Payments::Provider::IPaymentTransaction> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_Provider_IPaymentTransaction<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_Provider_IPaymentTransactionAcceptResult
{
    Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus Status() const;
};
template <> struct consume<Windows::ApplicationModel::Payments::Provider::IPaymentTransactionAcceptResult> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_Provider_IPaymentTransactionAcceptResult<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Payments_Provider_IPaymentTransactionStatics
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::Provider::PaymentTransaction> FromIdAsync(param::hstring const& id) const;
};
template <> struct consume<Windows::ApplicationModel::Payments::Provider::IPaymentTransactionStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Payments_Provider_IPaymentTransactionStatics<D>; };

template <> struct abi<Windows::ApplicationModel::Payments::Provider::IPaymentAppManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RegisterAsync(::IUnknown* supportedPaymentMethodIds, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall UnregisterAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::Provider::IPaymentAppManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Current(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::Provider::IPaymentTransaction>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PaymentRequest(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PayerEmail(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_PayerEmail(HSTRING value) = 0;
    virtual HRESULT __stdcall get_PayerName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_PayerName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_PayerPhoneNumber(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_PayerPhoneNumber(HSTRING value) = 0;
    virtual HRESULT __stdcall UpdateShippingAddressAsync(::IUnknown* shippingAddress, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall UpdateSelectedShippingOptionAsync(::IUnknown* selectedShippingOption, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall AcceptAsync(::IUnknown* paymentToken, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall Reject() = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::Provider::IPaymentTransactionAcceptResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus>* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Payments::Provider::IPaymentTransactionStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FromIdAsync(HSTRING id, ::IUnknown** result) = 0;
};};

}
