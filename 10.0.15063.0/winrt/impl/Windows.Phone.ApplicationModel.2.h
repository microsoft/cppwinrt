// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Phone.ApplicationModel.1.h"

WINRT_EXPORT namespace winrt::Windows::Phone::ApplicationModel {

struct ApplicationProfile
{
    ApplicationProfile() = delete;
    static Windows::Phone::ApplicationModel::ApplicationProfileModes Modes();
};

}
