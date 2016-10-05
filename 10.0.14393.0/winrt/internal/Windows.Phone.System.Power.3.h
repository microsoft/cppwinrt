// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Phone.System.Power.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Phone::System::Power {

struct PowerManager
{
    PowerManager() = delete;
    static Windows::Phone::System::Power::PowerSavingMode PowerSavingMode();
    static event_token PowerSavingModeChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & changeHandler);
    using PowerSavingModeChanged_revoker = factory_event_revoker<IPowerManagerStatics>;
    static PowerSavingModeChanged_revoker PowerSavingModeChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & changeHandler);
    static void PowerSavingModeChanged(event_token token);
    static bool PowerSavingModeEnabled();
};

}

}
