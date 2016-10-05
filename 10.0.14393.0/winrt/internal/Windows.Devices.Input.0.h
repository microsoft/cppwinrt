// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Input {

struct PointerDeviceUsage;
struct MouseDelta;

}

namespace Windows::Devices::Input {

using PointerDeviceUsage = ABI::Windows::Devices::Input::PointerDeviceUsage;
using MouseDelta = ABI::Windows::Devices::Input::MouseDelta;

}

namespace ABI::Windows::Devices::Input {

struct IKeyboardCapabilities;
struct IMouseCapabilities;
struct IMouseDevice;
struct IMouseDeviceStatics;
struct IMouseEventArgs;
struct IPointerDevice;
struct IPointerDevice2;
struct IPointerDeviceStatics;
struct ITouchCapabilities;
struct KeyboardCapabilities;
struct MouseCapabilities;
struct MouseDevice;
struct MouseEventArgs;
struct PointerDevice;
struct TouchCapabilities;

}

namespace Windows::Devices::Input {

struct IKeyboardCapabilities;
struct IMouseCapabilities;
struct IMouseDevice;
struct IMouseDeviceStatics;
struct IMouseEventArgs;
struct IPointerDevice;
struct IPointerDevice2;
struct IPointerDeviceStatics;
struct ITouchCapabilities;
struct KeyboardCapabilities;
struct MouseCapabilities;
struct MouseDevice;
struct MouseEventArgs;
struct PointerDevice;
struct TouchCapabilities;

}

namespace Windows::Devices::Input {

enum class PointerDeviceType
{
    Touch = 0,
    Pen = 1,
    Mouse = 2,
};

}

}
