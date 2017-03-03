// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Management.Policies.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_791a3c00_5aa2_5f0e_bb17_3480bc2d96cc
#define WINRT_GENERIC_791a3c00_5aa2_5f0e_bb17_3480bc2d96cc
template <> struct __declspec(uuid("791a3c00-5aa2-5f0e-bb17-3480bc2d96cc")) __declspec(novtable) TypedEventHandler<Windows::Management::Policies::NamedPolicyData, Windows::Foundation::IInspectable> : impl_TypedEventHandler<Windows::Management::Policies::NamedPolicyData, Windows::Foundation::IInspectable> {};
#endif


}

namespace Windows::Management::Policies {

struct INamedPolicyData :
    Windows::Foundation::IInspectable,
    impl::consume<INamedPolicyData>
{
    INamedPolicyData(std::nullptr_t = nullptr) noexcept {}
};

struct INamedPolicyStatics :
    Windows::Foundation::IInspectable,
    impl::consume<INamedPolicyStatics>
{
    INamedPolicyStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
