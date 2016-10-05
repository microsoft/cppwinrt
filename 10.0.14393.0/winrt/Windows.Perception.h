// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Perception.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Perception::IPerceptionTimestamp> : produce_base<D, Windows::Perception::IPerceptionTimestamp>
{
    HRESULT __stdcall get_TargetTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PredictionAmount(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PredictionAmount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Perception::IPerceptionTimestampHelperStatics> : produce_base<D, Windows::Perception::IPerceptionTimestampHelperStatics>
{
    HRESULT __stdcall abi_FromHistoricalTargetTime(abi_arg_in<Windows::Foundation::DateTime> targetTime, abi_arg_out<Windows::Perception::IPerceptionTimestamp> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromHistoricalTargetTime(*reinterpret_cast<const Windows::Foundation::DateTime *>(&targetTime)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Perception {

template <typename D> Windows::Foundation::DateTime impl_IPerceptionTimestamp<D>::TargetTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IPerceptionTimestamp &>(static_cast<const D &>(*this))->get_TargetTime(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IPerceptionTimestamp<D>::PredictionAmount() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IPerceptionTimestamp &>(static_cast<const D &>(*this))->get_PredictionAmount(put(value)));
    return value;
}

template <typename D> Windows::Perception::PerceptionTimestamp impl_IPerceptionTimestampHelperStatics<D>::FromHistoricalTargetTime(const Windows::Foundation::DateTime & targetTime) const
{
    Windows::Perception::PerceptionTimestamp value { nullptr };
    check_hresult(static_cast<const IPerceptionTimestampHelperStatics &>(static_cast<const D &>(*this))->abi_FromHistoricalTargetTime(get(targetTime), put(value)));
    return value;
}

inline Windows::Perception::PerceptionTimestamp PerceptionTimestampHelper::FromHistoricalTargetTime(const Windows::Foundation::DateTime & targetTime)
{
    return get_activation_factory<PerceptionTimestampHelper, IPerceptionTimestampHelperStatics>().FromHistoricalTargetTime(targetTime);
}

}

}
