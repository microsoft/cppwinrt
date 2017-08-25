// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Phone.System.Power.1.h"

WINRT_EXPORT namespace winrt::Windows::Phone::System::Power {

struct PowerManager
{
    PowerManager() = delete;
    static Windows::Phone::System::Power::PowerSavingMode PowerSavingMode();
    static event_token PowerSavingModeChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler);
    using PowerSavingModeChanged_revoker = factory_event_revoker<Windows::Phone::System::Power::IPowerManagerStatics>;
    static PowerSavingModeChanged_revoker PowerSavingModeChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler);
    static void PowerSavingModeChanged(event_token const& token);
    static bool PowerSavingModeEnabled();
};

}
