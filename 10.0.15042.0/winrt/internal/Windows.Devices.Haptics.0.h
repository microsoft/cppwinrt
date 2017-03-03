// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Haptics {

struct IKnownSimpleHapticsControllerWaveformsStatics;
struct ISimpleHapticsController;
struct ISimpleHapticsControllerFeedback;
struct IVibrationDevice;
struct IVibrationDeviceStatics;
struct SimpleHapticsController;
struct SimpleHapticsControllerFeedback;
struct VibrationDevice;

}

namespace Windows::Devices::Haptics {

struct IKnownSimpleHapticsControllerWaveformsStatics;
struct ISimpleHapticsController;
struct ISimpleHapticsControllerFeedback;
struct IVibrationDevice;
struct IVibrationDeviceStatics;
struct KnownSimpleHapticsControllerWaveforms;
struct SimpleHapticsController;
struct SimpleHapticsControllerFeedback;
struct VibrationDevice;

}

namespace Windows::Devices::Haptics {

template <typename T> struct impl_IKnownSimpleHapticsControllerWaveformsStatics;
template <typename T> struct impl_ISimpleHapticsController;
template <typename T> struct impl_ISimpleHapticsControllerFeedback;
template <typename T> struct impl_IVibrationDevice;
template <typename T> struct impl_IVibrationDeviceStatics;

}

namespace Windows::Devices::Haptics {

enum class VibrationAccessStatus
{
    Allowed = 0,
    DeniedByUser = 1,
    DeniedBySystem = 2,
    DeniedByEnergySaver = 3,
};

}

}
