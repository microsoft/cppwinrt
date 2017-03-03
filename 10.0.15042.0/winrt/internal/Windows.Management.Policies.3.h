// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Management.Policies.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Management::Policies {

struct NamedPolicy
{
    NamedPolicy() = delete;
    static Windows::Management::Policies::NamedPolicyData GetPolicyFromPath(hstring_view area, hstring_view name);
    static Windows::Management::Policies::NamedPolicyData GetPolicyFromPathForUser(const Windows::System::User & user, hstring_view area, hstring_view name);
};

struct WINRT_EBO NamedPolicyData :
    Windows::Management::Policies::INamedPolicyData
{
    NamedPolicyData(std::nullptr_t) noexcept {}
};

}

}
