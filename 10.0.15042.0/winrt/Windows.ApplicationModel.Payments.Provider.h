// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.ApplicationModel.Payments.3.h"
#include "internal/Windows.ApplicationModel.Payments.Provider.3.h"
#include "Windows.ApplicationModel.Payments.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::Provider::IPaymentAppManager> : produce_base<D, Windows::ApplicationModel::Payments::Provider::IPaymentAppManager>
{
    HRESULT __stdcall abi_RegisterAsync(impl::abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> supportedPaymentMethodIds, impl::abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RegisterAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&supportedPaymentMethodIds)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UnregisterAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().UnregisterAsync());
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
struct produce<D, Windows::ApplicationModel::Payments::Provider::IPaymentAppManagerStatics> : produce_base<D, Windows::ApplicationModel::Payments::Provider::IPaymentAppManagerStatics>
{
    HRESULT __stdcall get_Current(impl::abi_arg_out<Windows::ApplicationModel::Payments::Provider::IPaymentAppManager> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Current());
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
struct produce<D, Windows::ApplicationModel::Payments::Provider::IPaymentTransaction> : produce_base<D, Windows::ApplicationModel::Payments::Provider::IPaymentTransaction>
{
    HRESULT __stdcall get_PaymentRequest(impl::abi_arg_out<Windows::ApplicationModel::Payments::IPaymentRequest> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PaymentRequest());
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

    HRESULT __stdcall put_PayerEmail(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PayerEmail(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
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

    HRESULT __stdcall put_PayerName(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PayerName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
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

    HRESULT __stdcall put_PayerPhoneNumber(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PayerPhoneNumber(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UpdateShippingAddressAsync(impl::abi_arg_in<Windows::ApplicationModel::Payments::IPaymentAddress> shippingAddress, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestChangedResult>> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().UpdateShippingAddressAsync(*reinterpret_cast<const Windows::ApplicationModel::Payments::PaymentAddress *>(&shippingAddress)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UpdateSelectedShippingOptionAsync(impl::abi_arg_in<Windows::ApplicationModel::Payments::IPaymentShippingOption> selectedShippingOption, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestChangedResult>> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().UpdateSelectedShippingOptionAsync(*reinterpret_cast<const Windows::ApplicationModel::Payments::PaymentShippingOption *>(&selectedShippingOption)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AcceptAsync(impl::abi_arg_in<Windows::ApplicationModel::Payments::IPaymentToken> paymentToken, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::Provider::PaymentTransactionAcceptResult>> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().AcceptAsync(*reinterpret_cast<const Windows::ApplicationModel::Payments::PaymentToken *>(&paymentToken)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Reject() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Reject();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::Provider::IPaymentTransactionAcceptResult> : produce_base<D, Windows::ApplicationModel::Payments::Provider::IPaymentTransactionAcceptResult>
{
    HRESULT __stdcall get_Status(Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus * value) noexcept override
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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::Provider::IPaymentTransactionStatics> : produce_base<D, Windows::ApplicationModel::Payments::Provider::IPaymentTransactionStatics>
{
    HRESULT __stdcall abi_FromIdAsync(impl::abi_arg_in<hstring> id, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::Provider::PaymentTransaction>> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<const hstring *>(&id)));
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

namespace Windows::ApplicationModel::Payments::Provider {

template <typename D> Windows::Foundation::IAsyncAction impl_IPaymentAppManager<D>::RegisterAsync(iterable<hstring> supportedPaymentMethodIds) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(WINRT_SHIM(IPaymentAppManager)->abi_RegisterAsync(get_abi(supportedPaymentMethodIds), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IPaymentAppManager<D>::UnregisterAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(WINRT_SHIM(IPaymentAppManager)->abi_UnregisterAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::Provider::PaymentAppManager impl_IPaymentAppManagerStatics<D>::Current() const
{
    Windows::ApplicationModel::Payments::Provider::PaymentAppManager value { nullptr };
    check_hresult(WINRT_SHIM(IPaymentAppManagerStatics)->get_Current(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentRequest impl_IPaymentTransaction<D>::PaymentRequest() const
{
    Windows::ApplicationModel::Payments::PaymentRequest value { nullptr };
    check_hresult(WINRT_SHIM(IPaymentTransaction)->get_PaymentRequest(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IPaymentTransaction<D>::PayerEmail() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPaymentTransaction)->get_PayerEmail(put_abi(value)));
    return value;
}

template <typename D> void impl_IPaymentTransaction<D>::PayerEmail(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IPaymentTransaction)->put_PayerEmail(get_abi(value)));
}

template <typename D> hstring impl_IPaymentTransaction<D>::PayerName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPaymentTransaction)->get_PayerName(put_abi(value)));
    return value;
}

template <typename D> void impl_IPaymentTransaction<D>::PayerName(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IPaymentTransaction)->put_PayerName(get_abi(value)));
}

template <typename D> hstring impl_IPaymentTransaction<D>::PayerPhoneNumber() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IPaymentTransaction)->get_PayerPhoneNumber(put_abi(value)));
    return value;
}

template <typename D> void impl_IPaymentTransaction<D>::PayerPhoneNumber(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IPaymentTransaction)->put_PayerPhoneNumber(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestChangedResult> impl_IPaymentTransaction<D>::UpdateShippingAddressAsync(const Windows::ApplicationModel::Payments::PaymentAddress & shippingAddress) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestChangedResult> result;
    check_hresult(WINRT_SHIM(IPaymentTransaction)->abi_UpdateShippingAddressAsync(get_abi(shippingAddress), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestChangedResult> impl_IPaymentTransaction<D>::UpdateSelectedShippingOptionAsync(const Windows::ApplicationModel::Payments::PaymentShippingOption & selectedShippingOption) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestChangedResult> result;
    check_hresult(WINRT_SHIM(IPaymentTransaction)->abi_UpdateSelectedShippingOptionAsync(get_abi(selectedShippingOption), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::Provider::PaymentTransactionAcceptResult> impl_IPaymentTransaction<D>::AcceptAsync(const Windows::ApplicationModel::Payments::PaymentToken & paymentToken) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::Provider::PaymentTransactionAcceptResult> result;
    check_hresult(WINRT_SHIM(IPaymentTransaction)->abi_AcceptAsync(get_abi(paymentToken), put_abi(result)));
    return result;
}

template <typename D> void impl_IPaymentTransaction<D>::Reject() const
{
    check_hresult(WINRT_SHIM(IPaymentTransaction)->abi_Reject());
}

template <typename D> Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus impl_IPaymentTransactionAcceptResult<D>::Status() const
{
    Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus value {};
    check_hresult(WINRT_SHIM(IPaymentTransactionAcceptResult)->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::Provider::PaymentTransaction> impl_IPaymentTransactionStatics<D>::FromIdAsync(hstring_view id) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::Provider::PaymentTransaction> result;
    check_hresult(WINRT_SHIM(IPaymentTransactionStatics)->abi_FromIdAsync(get_abi(id), put_abi(result)));
    return result;
}

inline Windows::ApplicationModel::Payments::Provider::PaymentAppManager PaymentAppManager::Current()
{
    return get_activation_factory<PaymentAppManager, IPaymentAppManagerStatics>().Current();
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::Provider::PaymentTransaction> PaymentTransaction::FromIdAsync(hstring_view id)
{
    return get_activation_factory<PaymentTransaction, IPaymentTransactionStatics>().FromIdAsync(id);
}

}

}

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::Provider::IPaymentAppManager>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::Provider::IPaymentAppManager & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::Provider::IPaymentAppManagerStatics>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::Provider::IPaymentAppManagerStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::Provider::IPaymentTransaction>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::Provider::IPaymentTransaction & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::Provider::IPaymentTransactionAcceptResult>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::Provider::IPaymentTransactionAcceptResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::Provider::IPaymentTransactionStatics>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::Provider::IPaymentTransactionStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::Provider::PaymentAppManager>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::Provider::PaymentAppManager & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::Provider::PaymentTransaction>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::Provider::PaymentTransaction & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Payments::Provider::PaymentTransactionAcceptResult>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Payments::Provider::PaymentTransactionAcceptResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
