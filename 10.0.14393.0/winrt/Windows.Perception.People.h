// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Perception.People.3.h"
#include "Windows.Perception.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Perception::People::IHeadPose> : produce_base<D, Windows::Perception::People::IHeadPose>
{
    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ForwardDirection(abi_arg_out<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ForwardDirection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UpDirection(abi_arg_out<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UpDirection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Perception::People {

template <typename D> Windows::Foundation::Numerics::float3 impl_IHeadPose<D>::Position() const
{
    Windows::Foundation::Numerics::float3 value {};
    check_hresult(static_cast<const IHeadPose &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 impl_IHeadPose<D>::ForwardDirection() const
{
    Windows::Foundation::Numerics::float3 value {};
    check_hresult(static_cast<const IHeadPose &>(static_cast<const D &>(*this))->get_ForwardDirection(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 impl_IHeadPose<D>::UpDirection() const
{
    Windows::Foundation::Numerics::float3 value {};
    check_hresult(static_cast<const IHeadPose &>(static_cast<const D &>(*this))->get_UpDirection(put(value)));
    return value;
}

}

}
