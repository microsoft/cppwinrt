// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Media::Devices {

struct CallControlEventHandler;
struct DialRequestedEventHandler;
struct IAdvancedPhotoCaptureSettings;
struct IAdvancedPhotoControl;
struct IAdvancedVideoCaptureDeviceController;
struct IAdvancedVideoCaptureDeviceController2;
struct IAdvancedVideoCaptureDeviceController3;
struct IAdvancedVideoCaptureDeviceController4;
struct IAudioDeviceController;
struct ICallControl;
struct ICallControlStatics;
struct IDefaultAudioDeviceChangedEventArgs;
struct IDialRequestedEventArgs;
struct IExposureCompensationControl;
struct IExposureControl;
struct IExposurePriorityVideoControl;
struct IFlashControl;
struct IFlashControl2;
struct IFocusControl;
struct IFocusControl2;
struct IFocusSettings;
struct IHdrVideoControl;
struct IIsoSpeedControl;
struct IIsoSpeedControl2;
struct IKeypadPressedEventArgs;
struct ILowLagPhotoControl;
struct ILowLagPhotoSequenceControl;
struct IMediaDeviceControl;
struct IMediaDeviceControlCapabilities;
struct IMediaDeviceController;
struct IMediaDeviceStatics;
struct IOpticalImageStabilizationControl;
struct IPhotoConfirmationControl;
struct IRedialRequestedEventArgs;
struct IRegionOfInterest;
struct IRegionOfInterest2;
struct IRegionsOfInterestControl;
struct ISceneModeControl;
struct ITorchControl;
struct IVideoDeviceController;
struct IWhiteBalanceControl;
struct IZoomControl;
struct IZoomControl2;
struct IZoomSettings;
struct KeypadPressedEventHandler;
struct RedialRequestedEventHandler;
struct AdvancedPhotoCaptureSettings;
struct AdvancedPhotoControl;
struct AudioDeviceController;
struct CallControl;
struct DefaultAudioCaptureDeviceChangedEventArgs;
struct DefaultAudioRenderDeviceChangedEventArgs;
struct DialRequestedEventArgs;
struct ExposureCompensationControl;
struct ExposureControl;
struct ExposurePriorityVideoControl;
struct FlashControl;
struct FocusControl;
struct FocusSettings;
struct HdrVideoControl;
struct IsoSpeedControl;
struct KeypadPressedEventArgs;
struct LowLagPhotoControl;
struct LowLagPhotoSequenceControl;
struct MediaDeviceControl;
struct MediaDeviceControlCapabilities;
struct OpticalImageStabilizationControl;
struct PhotoConfirmationControl;
struct RedialRequestedEventArgs;
struct RegionOfInterest;
struct RegionsOfInterestControl;
struct SceneModeControl;
struct TorchControl;
struct VideoDeviceController;
struct WhiteBalanceControl;
struct ZoomControl;
struct ZoomSettings;

}

namespace Windows::Media::Devices {

struct CallControlEventHandler;
struct DialRequestedEventHandler;
struct KeypadPressedEventHandler;
struct RedialRequestedEventHandler;
struct IAdvancedPhotoCaptureSettings;
struct IAdvancedPhotoControl;
struct IAdvancedVideoCaptureDeviceController;
struct IAdvancedVideoCaptureDeviceController2;
struct IAdvancedVideoCaptureDeviceController3;
struct IAdvancedVideoCaptureDeviceController4;
struct IAudioDeviceController;
struct ICallControl;
struct ICallControlStatics;
struct IDefaultAudioDeviceChangedEventArgs;
struct IDialRequestedEventArgs;
struct IExposureCompensationControl;
struct IExposureControl;
struct IExposurePriorityVideoControl;
struct IFlashControl;
struct IFlashControl2;
struct IFocusControl;
struct IFocusControl2;
struct IFocusSettings;
struct IHdrVideoControl;
struct IIsoSpeedControl;
struct IIsoSpeedControl2;
struct IKeypadPressedEventArgs;
struct ILowLagPhotoControl;
struct ILowLagPhotoSequenceControl;
struct IMediaDeviceControl;
struct IMediaDeviceControlCapabilities;
struct IMediaDeviceController;
struct IMediaDeviceStatics;
struct IOpticalImageStabilizationControl;
struct IPhotoConfirmationControl;
struct IRedialRequestedEventArgs;
struct IRegionOfInterest;
struct IRegionOfInterest2;
struct IRegionsOfInterestControl;
struct ISceneModeControl;
struct ITorchControl;
struct IVideoDeviceController;
struct IWhiteBalanceControl;
struct IZoomControl;
struct IZoomControl2;
struct IZoomSettings;
struct AdvancedPhotoCaptureSettings;
struct AdvancedPhotoControl;
struct AudioDeviceController;
struct CallControl;
struct DefaultAudioCaptureDeviceChangedEventArgs;
struct DefaultAudioRenderDeviceChangedEventArgs;
struct DialRequestedEventArgs;
struct ExposureCompensationControl;
struct ExposureControl;
struct ExposurePriorityVideoControl;
struct FlashControl;
struct FocusControl;
struct FocusSettings;
struct HdrVideoControl;
struct IsoSpeedControl;
struct KeypadPressedEventArgs;
struct LowLagPhotoControl;
struct LowLagPhotoSequenceControl;
struct MediaDevice;
struct MediaDeviceControl;
struct MediaDeviceControlCapabilities;
struct OpticalImageStabilizationControl;
struct PhotoConfirmationControl;
struct RedialRequestedEventArgs;
struct RegionOfInterest;
struct RegionsOfInterestControl;
struct SceneModeControl;
struct TorchControl;
struct VideoDeviceController;
struct WhiteBalanceControl;
struct ZoomControl;
struct ZoomSettings;

}

namespace Windows::Media::Devices {

enum class AdvancedPhotoMode
{
    Auto = 0,
    Standard = 1,
    Hdr = 2,
    LowLight = 3,
};

enum class AudioDeviceRole
{
    Default = 0,
    Communications = 1,
};

enum class AutoFocusRange
{
    FullRange = 0,
    Macro = 1,
    Normal = 2,
};

enum class CameraStreamState
{
    NotStreaming = 0,
    Streaming = 1,
    BlockedForPrivacy = 2,
    Shutdown = 3,
};

enum class CaptureSceneMode
{
    Auto = 0,
    Manual = 1,
    Macro = 2,
    Portrait = 3,
    Sport = 4,
    Snow = 5,
    Night = 6,
    Beach = 7,
    Sunset = 8,
    Candlelight = 9,
    Landscape = 10,
    NightPortrait = 11,
    Backlit = 12,
};

enum class CaptureUse
{
    None = 0,
    Photo = 1,
    Video = 2,
};

enum class ColorTemperaturePreset
{
    Auto = 0,
    Manual = 1,
    Cloudy = 2,
    Daylight = 3,
    Flash = 4,
    Fluorescent = 5,
    Tungsten = 6,
    Candlelight = 7,
};

enum class FocusMode
{
    Auto = 0,
    Single = 1,
    Continuous = 2,
    Manual = 3,
};

enum class FocusPreset
{
    Auto = 0,
    Manual = 1,
    AutoMacro = 2,
    AutoNormal = 3,
    AutoInfinity = 4,
    AutoHyperfocal = 5,
};

enum class HdrVideoMode
{
    Off = 0,
    On = 1,
    Auto = 2,
};

enum class IsoSpeedPreset
{
    Auto = 0,
    Iso50 = 1,
    Iso80 = 2,
    Iso100 = 3,
    Iso200 = 4,
    Iso400 = 5,
    Iso800 = 6,
    Iso1600 = 7,
    Iso3200 = 8,
    Iso6400 = 9,
    Iso12800 = 10,
    Iso25600 = 11,
};

enum class ManualFocusDistance
{
    Infinity = 0,
    Hyperfocal = 1,
    Nearest = 2,
};

enum class MediaCaptureFocusState
{
    Uninitialized = 0,
    Lost = 1,
    Searching = 2,
    Focused = 3,
    Failed = 4,
};

enum class MediaCaptureOptimization
{
    Default = 0,
    Quality = 1,
    Latency = 2,
    Power = 3,
    LatencyThenQuality = 4,
    LatencyThenPower = 5,
    PowerAndQuality = 6,
};

enum class MediaCapturePauseBehavior
{
    RetainHardwareResources = 0,
    ReleaseHardwareResources = 1,
};

enum class OpticalImageStabilizationMode
{
    Off = 0,
    On = 1,
    Auto = 2,
};

enum class RegionOfInterestType
{
    Unknown = 0,
    Face = 1,
};

enum class TelephonyKey
{
    D0 = 0,
    D1 = 1,
    D2 = 2,
    D3 = 3,
    D4 = 4,
    D5 = 5,
    D6 = 6,
    D7 = 7,
    D8 = 8,
    D9 = 9,
    Star = 10,
    Pound = 11,
    A = 12,
    B = 13,
    C = 14,
    D = 15,
};

enum class ZoomTransitionMode
{
    Auto = 0,
    Direct = 1,
    Smooth = 2,
};

}

}
