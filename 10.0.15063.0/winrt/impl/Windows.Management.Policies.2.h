// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Management.Policies.1.h"

WINRT_EXPORT namespace winrt::Windows::Management::Policies {

struct NamedPolicy
{
    NamedPolicy() = delete;
    static Windows::Management::Policies::NamedPolicyData GetPolicyFromPath(param::hstring const& area, param::hstring const& name);
    static Windows::Management::Policies::NamedPolicyData GetPolicyFromPathForUser(Windows::System::User const& user, param::hstring const& area, param::hstring const& name);
};

struct WINRT_EBO NamedPolicyData :
    Windows::Management::Policies::INamedPolicyData
{
    NamedPolicyData(std::nullptr_t) noexcept {}
};

}
