// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.ApplicationModel.Calls.Background.3.h"
#include "Windows.ApplicationModel.Calls.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails> : produce_base<D, Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails>
{
    HRESULT __stdcall get_PhoneNumber(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PhoneNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LineId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LineId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CallBlockedReason(Windows::ApplicationModel::Calls::Background::PhoneCallBlockedReason * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CallBlockedReason());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails> : produce_base<D, Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails>
{
    HRESULT __stdcall get_RequestId(GUID * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RequestId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhoneNumber(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().PhoneNumber());
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
struct produce<D, Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails> : produce_base<D, Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails>
{
    HRESULT __stdcall get_LineId(GUID * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().LineId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ChangeType(Windows::ApplicationModel::Calls::Background::PhoneLineChangeKind * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ChangeType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_HasLinePropertyChanged(Windows::ApplicationModel::Calls::Background::PhoneLineProperties lineProperty, bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().HasLinePropertyChanged(lineProperty));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails> : produce_base<D, Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails>
{
    HRESULT __stdcall get_LineId(GUID * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().LineId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VoicemailCount(int32_t * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().VoicemailCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OperatorMessage(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().OperatorMessage());
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

namespace Windows::ApplicationModel::Calls::Background {

template <typename D> hstring impl_IPhoneCallBlockedTriggerDetails<D>::PhoneNumber() const
{
    hstring value;
    check_hresult(static_cast<const IPhoneCallBlockedTriggerDetails &>(static_cast<const D &>(*this))->get_PhoneNumber(put(value)));
    return value;
}

template <typename D> GUID impl_IPhoneCallBlockedTriggerDetails<D>::LineId() const
{
    GUID value {};
    check_hresult(static_cast<const IPhoneCallBlockedTriggerDetails &>(static_cast<const D &>(*this))->get_LineId(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Calls::Background::PhoneCallBlockedReason impl_IPhoneCallBlockedTriggerDetails<D>::CallBlockedReason() const
{
    Windows::ApplicationModel::Calls::Background::PhoneCallBlockedReason value {};
    check_hresult(static_cast<const IPhoneCallBlockedTriggerDetails &>(static_cast<const D &>(*this))->get_CallBlockedReason(&value));
    return value;
}

template <typename D> GUID impl_IPhoneCallOriginDataRequestTriggerDetails<D>::RequestId() const
{
    GUID result {};
    check_hresult(static_cast<const IPhoneCallOriginDataRequestTriggerDetails &>(static_cast<const D &>(*this))->get_RequestId(&result));
    return result;
}

template <typename D> hstring impl_IPhoneCallOriginDataRequestTriggerDetails<D>::PhoneNumber() const
{
    hstring result;
    check_hresult(static_cast<const IPhoneCallOriginDataRequestTriggerDetails &>(static_cast<const D &>(*this))->get_PhoneNumber(put(result)));
    return result;
}

template <typename D> GUID impl_IPhoneNewVoicemailMessageTriggerDetails<D>::LineId() const
{
    GUID result {};
    check_hresult(static_cast<const IPhoneNewVoicemailMessageTriggerDetails &>(static_cast<const D &>(*this))->get_LineId(&result));
    return result;
}

template <typename D> int32_t impl_IPhoneNewVoicemailMessageTriggerDetails<D>::VoicemailCount() const
{
    int32_t result {};
    check_hresult(static_cast<const IPhoneNewVoicemailMessageTriggerDetails &>(static_cast<const D &>(*this))->get_VoicemailCount(&result));
    return result;
}

template <typename D> hstring impl_IPhoneNewVoicemailMessageTriggerDetails<D>::OperatorMessage() const
{
    hstring result;
    check_hresult(static_cast<const IPhoneNewVoicemailMessageTriggerDetails &>(static_cast<const D &>(*this))->get_OperatorMessage(put(result)));
    return result;
}

template <typename D> GUID impl_IPhoneLineChangedTriggerDetails<D>::LineId() const
{
    GUID result {};
    check_hresult(static_cast<const IPhoneLineChangedTriggerDetails &>(static_cast<const D &>(*this))->get_LineId(&result));
    return result;
}

template <typename D> Windows::ApplicationModel::Calls::Background::PhoneLineChangeKind impl_IPhoneLineChangedTriggerDetails<D>::ChangeType() const
{
    Windows::ApplicationModel::Calls::Background::PhoneLineChangeKind result {};
    check_hresult(static_cast<const IPhoneLineChangedTriggerDetails &>(static_cast<const D &>(*this))->get_ChangeType(&result));
    return result;
}

template <typename D> bool impl_IPhoneLineChangedTriggerDetails<D>::HasLinePropertyChanged(Windows::ApplicationModel::Calls::Background::PhoneLineProperties lineProperty) const
{
    bool result {};
    check_hresult(static_cast<const IPhoneLineChangedTriggerDetails &>(static_cast<const D &>(*this))->abi_HasLinePropertyChanged(lineProperty, &result));
    return result;
}

}

}
