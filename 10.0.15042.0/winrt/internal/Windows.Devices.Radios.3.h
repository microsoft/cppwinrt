// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Devices.Radios.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Devices::Radios {

struct WINRT_EBO Radio :
    Windows::Devices::Radios::IRadio
{
    Radio(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Radios::Radio>> GetRadiosAsync();
    static hstring GetDeviceSelector();
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::Radio> FromIdAsync(hstring_view deviceId);
    static Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Radios::RadioAccessStatus> RequestAccessAsync();
};

}

}
