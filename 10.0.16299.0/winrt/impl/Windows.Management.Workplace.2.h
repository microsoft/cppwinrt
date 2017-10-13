// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Management.Workplace.1.h"

WINRT_EXPORT namespace winrt::Windows::Management::Workplace {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::Management::Workplace {

struct MdmPolicy
{
    MdmPolicy() = delete;
    static bool IsBrowserAllowed();
    static bool IsCameraAllowed();
    static bool IsMicrosoftAccountAllowed();
    static bool IsStoreAllowed();
    static Windows::Management::Workplace::MessagingSyncPolicy GetMessagingSyncPolicy();
};

struct WorkplaceSettings
{
    WorkplaceSettings() = delete;
    static bool IsMicrosoftAccountOptional();
};

}
