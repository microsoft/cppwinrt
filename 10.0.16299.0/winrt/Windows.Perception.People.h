// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Perception.People.2.h"
#include "winrt/Windows.Perception.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_Perception_People_IHeadPose<D>::Position() const noexcept
{
    Windows::Foundation::Numerics::float3 value{};
    check_terminate(WINRT_SHIM(Windows::Perception::People::IHeadPose)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_Perception_People_IHeadPose<D>::ForwardDirection() const noexcept
{
    Windows::Foundation::Numerics::float3 value{};
    check_terminate(WINRT_SHIM(Windows::Perception::People::IHeadPose)->get_ForwardDirection(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_Perception_People_IHeadPose<D>::UpDirection() const noexcept
{
    Windows::Foundation::Numerics::float3 value{};
    check_terminate(WINRT_SHIM(Windows::Perception::People::IHeadPose)->get_UpDirection(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Perception::People::IHeadPose> : produce_base<D, Windows::Perception::People::IHeadPose>
{
    HRESULT __stdcall get_Position(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Position());
        return S_OK;
    }

    HRESULT __stdcall get_ForwardDirection(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ForwardDirection());
        return S_OK;
    }

    HRESULT __stdcall get_UpDirection(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().UpDirection());
        return S_OK;
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Perception::People {

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Perception::People::IHeadPose> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::People::IHeadPose> {};

template<> struct hash<winrt::Windows::Perception::People::HeadPose> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Perception::People::HeadPose> {};

}

WINRT_WARNING_POP
