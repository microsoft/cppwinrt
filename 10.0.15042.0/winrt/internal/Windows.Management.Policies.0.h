// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Management::Policies {

struct INamedPolicyData;
struct INamedPolicyStatics;
struct NamedPolicyData;

}

namespace Windows::Management::Policies {

struct INamedPolicyData;
struct INamedPolicyStatics;
struct NamedPolicy;
struct NamedPolicyData;

}

namespace Windows::Management::Policies {

template <typename T> struct impl_INamedPolicyData;
template <typename T> struct impl_INamedPolicyStatics;

}

namespace Windows::Management::Policies {

enum class NamedPolicyKind
{
    Invalid = 0,
    Binary = 1,
    Boolean = 2,
    Int32 = 3,
    Int64 = 4,
    String = 5,
};

}

}
