// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Media.Core.Preview.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Media::Core::Preview {

struct SoundLevelBroker
{
    SoundLevelBroker() = delete;
    static Windows::Media::SoundLevel SoundLevel();
    static event_token SoundLevelChanged(const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & handler);
    using SoundLevelChanged_revoker = factory_event_revoker<ISoundLevelBrokerStatics>;
    static SoundLevelChanged_revoker SoundLevelChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & handler);
    static void SoundLevelChanged(event_token token);
};

}

}
