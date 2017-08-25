// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Perception::People {

struct IHeadPose;
struct HeadPose;

}

namespace winrt::impl {

template <> struct category<Windows::Perception::People::IHeadPose>{ using type = interface_category; };
template <> struct category<Windows::Perception::People::HeadPose>{ using type = class_category; };
template <> struct name<Windows::Perception::People::IHeadPose>{ static constexpr auto & value{ L"Windows.Perception.People.IHeadPose" }; };
template <> struct name<Windows::Perception::People::HeadPose>{ static constexpr auto & value{ L"Windows.Perception.People.HeadPose" }; };
template <> struct guid<Windows::Perception::People::IHeadPose>{ static constexpr GUID value{ 0x7F5AC5A5,0x49DB,0x379F,{ 0x94,0x29,0x32,0xA2,0xFA,0xF3,0x4F,0xA6 } }; };
template <> struct default_interface<Windows::Perception::People::HeadPose>{ using type = Windows::Perception::People::IHeadPose; };

template <typename D>
struct consume_Windows_Perception_People_IHeadPose
{
    Windows::Foundation::Numerics::float3 Position() const;
    Windows::Foundation::Numerics::float3 ForwardDirection() const;
    Windows::Foundation::Numerics::float3 UpDirection() const;
};
template <> struct consume<Windows::Perception::People::IHeadPose> { template <typename D> using type = consume_Windows_Perception_People_IHeadPose<D>; };

template <> struct abi<Windows::Perception::People::IHeadPose>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Numerics::float3>* value) = 0;
    virtual HRESULT __stdcall get_ForwardDirection(abi_t<Windows::Foundation::Numerics::float3>* value) = 0;
    virtual HRESULT __stdcall get_UpDirection(abi_t<Windows::Foundation::Numerics::float3>* value) = 0;
};};

}
