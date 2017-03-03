// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Phone.ApplicationModel.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Phone::ApplicationModel {

struct ApplicationProfile
{
    ApplicationProfile() = delete;
    static Windows::Phone::ApplicationModel::ApplicationProfileModes Modes();
};

}

}
