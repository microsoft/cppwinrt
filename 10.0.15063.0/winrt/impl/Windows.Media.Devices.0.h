// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Media::Capture {

enum class MediaStreamType;
enum class PowerlineFrequency;

}

WINRT_EXPORT namespace winrt::Windows::Media::Devices::Core {

struct VariablePhotoSequenceController;

}

WINRT_EXPORT namespace winrt::Windows::Media::MediaProperties {

enum class MediaPixelFormat;
enum class MediaThumbnailFormat;
struct IMediaEncodingProperties;
struct MediaRatio;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;

}

WINRT_EXPORT namespace winrt::Windows::Media::Devices {

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

enum class [[deprecated("IsoSpeedPreset may not be available in future versions of Windows Phone. Starting with Windows Phone 8.1, use SetAutoAsync, Auto, SetValueAsync, and Value instead")]] IsoSpeedPreset
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

enum class SendCommandStatus
{
    Success = 0,
    DeviceNotAvailable = 1,
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

enum class VideoDeviceControllerGetDevicePropertyStatus
{
    Success = 0,
    UnknownFailure = 1,
    BufferTooSmall = 2,
    NotSupported = 3,
    DeviceNotAvailable = 4,
    MaxPropertyValueSizeTooSmall = 5,
    MaxPropertyValueSizeRequired = 6,
};

enum class VideoDeviceControllerSetDevicePropertyStatus
{
    Success = 0,
    UnknownFailure = 1,
    NotSupported = 2,
    InvalidValue = 3,
    DeviceNotAvailable = 4,
    NotInControl = 5,
};

enum class ZoomTransitionMode
{
    Auto = 0,
    Direct = 1,
    Smooth = 2,
};

struct IAdvancedPhotoCaptureSettings;
struct IAdvancedPhotoControl;
struct IAdvancedVideoCaptureDeviceController;
struct IAdvancedVideoCaptureDeviceController2;
struct IAdvancedVideoCaptureDeviceController3;
struct IAdvancedVideoCaptureDeviceController4;
struct IAdvancedVideoCaptureDeviceController5;
struct IAudioDeviceController;
struct IAudioDeviceModule;
struct IAudioDeviceModuleNotificationEventArgs;
struct IAudioDeviceModulesManager;
struct IAudioDeviceModulesManagerFactory;
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
struct IModuleCommandResult;
struct IOpticalImageStabilizationControl;
struct IPhotoConfirmationControl;
struct IRedialRequestedEventArgs;
struct IRegionOfInterest;
struct IRegionOfInterest2;
struct IRegionsOfInterestControl;
struct ISceneModeControl;
struct ITorchControl;
struct IVideoDeviceController;
struct IVideoDeviceControllerGetDevicePropertyResult;
struct IWhiteBalanceControl;
struct IZoomControl;
struct IZoomControl2;
struct IZoomSettings;
struct AdvancedPhotoCaptureSettings;
struct AdvancedPhotoControl;
struct AudioDeviceController;
struct AudioDeviceModule;
struct AudioDeviceModuleNotificationEventArgs;
struct AudioDeviceModulesManager;
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
struct ModuleCommandResult;
struct OpticalImageStabilizationControl;
struct PhotoConfirmationControl;
struct RedialRequestedEventArgs;
struct RegionOfInterest;
struct RegionsOfInterestControl;
struct SceneModeControl;
struct TorchControl;
struct VideoDeviceController;
struct VideoDeviceControllerGetDevicePropertyResult;
struct WhiteBalanceControl;
struct ZoomControl;
struct ZoomSettings;
struct CallControlEventHandler;
struct DialRequestedEventHandler;
struct KeypadPressedEventHandler;
struct RedialRequestedEventHandler;

}

namespace winrt::impl {

template <> struct category<Windows::Media::Devices::IAdvancedPhotoCaptureSettings>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IAdvancedPhotoControl>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController3>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IAudioDeviceController>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IAudioDeviceModule>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IAudioDeviceModulesManager>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IAudioDeviceModulesManagerFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::ICallControl>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::ICallControlStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IDialRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IExposureCompensationControl>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IExposureControl>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IExposurePriorityVideoControl>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IFlashControl>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IFlashControl2>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IFocusControl>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IFocusControl2>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IFocusSettings>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IHdrVideoControl>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IIsoSpeedControl>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IIsoSpeedControl2>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IKeypadPressedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::ILowLagPhotoControl>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::ILowLagPhotoSequenceControl>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IMediaDeviceControl>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IMediaDeviceControlCapabilities>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IMediaDeviceController>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IMediaDeviceStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IModuleCommandResult>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IOpticalImageStabilizationControl>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IPhotoConfirmationControl>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IRedialRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IRegionOfInterest>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IRegionOfInterest2>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IRegionsOfInterestControl>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::ISceneModeControl>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::ITorchControl>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IVideoDeviceController>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IWhiteBalanceControl>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IZoomControl>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IZoomControl2>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::IZoomSettings>{ using type = interface_category; };
template <> struct category<Windows::Media::Devices::AdvancedPhotoCaptureSettings>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::AdvancedPhotoControl>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::AudioDeviceController>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::AudioDeviceModule>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::AudioDeviceModulesManager>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::CallControl>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::DialRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::ExposureCompensationControl>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::ExposureControl>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::ExposurePriorityVideoControl>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::FlashControl>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::FocusControl>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::FocusSettings>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::HdrVideoControl>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::IsoSpeedControl>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::KeypadPressedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::LowLagPhotoControl>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::LowLagPhotoSequenceControl>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::MediaDevice>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::MediaDeviceControl>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::MediaDeviceControlCapabilities>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::ModuleCommandResult>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::OpticalImageStabilizationControl>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::PhotoConfirmationControl>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::RedialRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::RegionOfInterest>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::RegionsOfInterestControl>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::SceneModeControl>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::TorchControl>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::VideoDeviceController>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyResult>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::WhiteBalanceControl>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::ZoomControl>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::ZoomSettings>{ using type = class_category; };
template <> struct category<Windows::Media::Devices::AdvancedPhotoMode>{ using type = enum_category; };
template <> struct category<Windows::Media::Devices::AudioDeviceRole>{ using type = enum_category; };
template <> struct category<Windows::Media::Devices::AutoFocusRange>{ using type = enum_category; };
template <> struct category<Windows::Media::Devices::CameraStreamState>{ using type = enum_category; };
template <> struct category<Windows::Media::Devices::CaptureSceneMode>{ using type = enum_category; };
template <> struct category<Windows::Media::Devices::CaptureUse>{ using type = enum_category; };
template <> struct category<Windows::Media::Devices::ColorTemperaturePreset>{ using type = enum_category; };
template <> struct category<Windows::Media::Devices::FocusMode>{ using type = enum_category; };
template <> struct category<Windows::Media::Devices::FocusPreset>{ using type = enum_category; };
template <> struct category<Windows::Media::Devices::HdrVideoMode>{ using type = enum_category; };
template <> struct category<Windows::Media::Devices::IsoSpeedPreset>{ using type = enum_category; };
template <> struct category<Windows::Media::Devices::ManualFocusDistance>{ using type = enum_category; };
template <> struct category<Windows::Media::Devices::MediaCaptureFocusState>{ using type = enum_category; };
template <> struct category<Windows::Media::Devices::MediaCaptureOptimization>{ using type = enum_category; };
template <> struct category<Windows::Media::Devices::MediaCapturePauseBehavior>{ using type = enum_category; };
template <> struct category<Windows::Media::Devices::OpticalImageStabilizationMode>{ using type = enum_category; };
template <> struct category<Windows::Media::Devices::RegionOfInterestType>{ using type = enum_category; };
template <> struct category<Windows::Media::Devices::SendCommandStatus>{ using type = enum_category; };
template <> struct category<Windows::Media::Devices::TelephonyKey>{ using type = enum_category; };
template <> struct category<Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyStatus>{ using type = enum_category; };
template <> struct category<Windows::Media::Devices::VideoDeviceControllerSetDevicePropertyStatus>{ using type = enum_category; };
template <> struct category<Windows::Media::Devices::ZoomTransitionMode>{ using type = enum_category; };
template <> struct category<Windows::Media::Devices::CallControlEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::Media::Devices::DialRequestedEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::Media::Devices::KeypadPressedEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::Media::Devices::RedialRequestedEventHandler>{ using type = delegate_category; };
template <> struct name<Windows::Media::Devices::IAdvancedPhotoCaptureSettings>{ static constexpr auto & value{ L"Windows.Media.Devices.IAdvancedPhotoCaptureSettings" }; };
template <> struct name<Windows::Media::Devices::IAdvancedPhotoControl>{ static constexpr auto & value{ L"Windows.Media.Devices.IAdvancedPhotoControl" }; };
template <> struct name<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController>{ static constexpr auto & value{ L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController" }; };
template <> struct name<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2>{ static constexpr auto & value{ L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController2" }; };
template <> struct name<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController3>{ static constexpr auto & value{ L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController3" }; };
template <> struct name<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4>{ static constexpr auto & value{ L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController4" }; };
template <> struct name<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5>{ static constexpr auto & value{ L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController5" }; };
template <> struct name<Windows::Media::Devices::IAudioDeviceController>{ static constexpr auto & value{ L"Windows.Media.Devices.IAudioDeviceController" }; };
template <> struct name<Windows::Media::Devices::IAudioDeviceModule>{ static constexpr auto & value{ L"Windows.Media.Devices.IAudioDeviceModule" }; };
template <> struct name<Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs>{ static constexpr auto & value{ L"Windows.Media.Devices.IAudioDeviceModuleNotificationEventArgs" }; };
template <> struct name<Windows::Media::Devices::IAudioDeviceModulesManager>{ static constexpr auto & value{ L"Windows.Media.Devices.IAudioDeviceModulesManager" }; };
template <> struct name<Windows::Media::Devices::IAudioDeviceModulesManagerFactory>{ static constexpr auto & value{ L"Windows.Media.Devices.IAudioDeviceModulesManagerFactory" }; };
template <> struct name<Windows::Media::Devices::ICallControl>{ static constexpr auto & value{ L"Windows.Media.Devices.ICallControl" }; };
template <> struct name<Windows::Media::Devices::ICallControlStatics>{ static constexpr auto & value{ L"Windows.Media.Devices.ICallControlStatics" }; };
template <> struct name<Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Devices.IDefaultAudioDeviceChangedEventArgs" }; };
template <> struct name<Windows::Media::Devices::IDialRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Devices.IDialRequestedEventArgs" }; };
template <> struct name<Windows::Media::Devices::IExposureCompensationControl>{ static constexpr auto & value{ L"Windows.Media.Devices.IExposureCompensationControl" }; };
template <> struct name<Windows::Media::Devices::IExposureControl>{ static constexpr auto & value{ L"Windows.Media.Devices.IExposureControl" }; };
template <> struct name<Windows::Media::Devices::IExposurePriorityVideoControl>{ static constexpr auto & value{ L"Windows.Media.Devices.IExposurePriorityVideoControl" }; };
template <> struct name<Windows::Media::Devices::IFlashControl>{ static constexpr auto & value{ L"Windows.Media.Devices.IFlashControl" }; };
template <> struct name<Windows::Media::Devices::IFlashControl2>{ static constexpr auto & value{ L"Windows.Media.Devices.IFlashControl2" }; };
template <> struct name<Windows::Media::Devices::IFocusControl>{ static constexpr auto & value{ L"Windows.Media.Devices.IFocusControl" }; };
template <> struct name<Windows::Media::Devices::IFocusControl2>{ static constexpr auto & value{ L"Windows.Media.Devices.IFocusControl2" }; };
template <> struct name<Windows::Media::Devices::IFocusSettings>{ static constexpr auto & value{ L"Windows.Media.Devices.IFocusSettings" }; };
template <> struct name<Windows::Media::Devices::IHdrVideoControl>{ static constexpr auto & value{ L"Windows.Media.Devices.IHdrVideoControl" }; };
template <> struct name<Windows::Media::Devices::IIsoSpeedControl>{ static constexpr auto & value{ L"Windows.Media.Devices.IIsoSpeedControl" }; };
template <> struct name<Windows::Media::Devices::IIsoSpeedControl2>{ static constexpr auto & value{ L"Windows.Media.Devices.IIsoSpeedControl2" }; };
template <> struct name<Windows::Media::Devices::IKeypadPressedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Devices.IKeypadPressedEventArgs" }; };
template <> struct name<Windows::Media::Devices::ILowLagPhotoControl>{ static constexpr auto & value{ L"Windows.Media.Devices.ILowLagPhotoControl" }; };
template <> struct name<Windows::Media::Devices::ILowLagPhotoSequenceControl>{ static constexpr auto & value{ L"Windows.Media.Devices.ILowLagPhotoSequenceControl" }; };
template <> struct name<Windows::Media::Devices::IMediaDeviceControl>{ static constexpr auto & value{ L"Windows.Media.Devices.IMediaDeviceControl" }; };
template <> struct name<Windows::Media::Devices::IMediaDeviceControlCapabilities>{ static constexpr auto & value{ L"Windows.Media.Devices.IMediaDeviceControlCapabilities" }; };
template <> struct name<Windows::Media::Devices::IMediaDeviceController>{ static constexpr auto & value{ L"Windows.Media.Devices.IMediaDeviceController" }; };
template <> struct name<Windows::Media::Devices::IMediaDeviceStatics>{ static constexpr auto & value{ L"Windows.Media.Devices.IMediaDeviceStatics" }; };
template <> struct name<Windows::Media::Devices::IModuleCommandResult>{ static constexpr auto & value{ L"Windows.Media.Devices.IModuleCommandResult" }; };
template <> struct name<Windows::Media::Devices::IOpticalImageStabilizationControl>{ static constexpr auto & value{ L"Windows.Media.Devices.IOpticalImageStabilizationControl" }; };
template <> struct name<Windows::Media::Devices::IPhotoConfirmationControl>{ static constexpr auto & value{ L"Windows.Media.Devices.IPhotoConfirmationControl" }; };
template <> struct name<Windows::Media::Devices::IRedialRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Devices.IRedialRequestedEventArgs" }; };
template <> struct name<Windows::Media::Devices::IRegionOfInterest>{ static constexpr auto & value{ L"Windows.Media.Devices.IRegionOfInterest" }; };
template <> struct name<Windows::Media::Devices::IRegionOfInterest2>{ static constexpr auto & value{ L"Windows.Media.Devices.IRegionOfInterest2" }; };
template <> struct name<Windows::Media::Devices::IRegionsOfInterestControl>{ static constexpr auto & value{ L"Windows.Media.Devices.IRegionsOfInterestControl" }; };
template <> struct name<Windows::Media::Devices::ISceneModeControl>{ static constexpr auto & value{ L"Windows.Media.Devices.ISceneModeControl" }; };
template <> struct name<Windows::Media::Devices::ITorchControl>{ static constexpr auto & value{ L"Windows.Media.Devices.ITorchControl" }; };
template <> struct name<Windows::Media::Devices::IVideoDeviceController>{ static constexpr auto & value{ L"Windows.Media.Devices.IVideoDeviceController" }; };
template <> struct name<Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult>{ static constexpr auto & value{ L"Windows.Media.Devices.IVideoDeviceControllerGetDevicePropertyResult" }; };
template <> struct name<Windows::Media::Devices::IWhiteBalanceControl>{ static constexpr auto & value{ L"Windows.Media.Devices.IWhiteBalanceControl" }; };
template <> struct name<Windows::Media::Devices::IZoomControl>{ static constexpr auto & value{ L"Windows.Media.Devices.IZoomControl" }; };
template <> struct name<Windows::Media::Devices::IZoomControl2>{ static constexpr auto & value{ L"Windows.Media.Devices.IZoomControl2" }; };
template <> struct name<Windows::Media::Devices::IZoomSettings>{ static constexpr auto & value{ L"Windows.Media.Devices.IZoomSettings" }; };
template <> struct name<Windows::Media::Devices::AdvancedPhotoCaptureSettings>{ static constexpr auto & value{ L"Windows.Media.Devices.AdvancedPhotoCaptureSettings" }; };
template <> struct name<Windows::Media::Devices::AdvancedPhotoControl>{ static constexpr auto & value{ L"Windows.Media.Devices.AdvancedPhotoControl" }; };
template <> struct name<Windows::Media::Devices::AudioDeviceController>{ static constexpr auto & value{ L"Windows.Media.Devices.AudioDeviceController" }; };
template <> struct name<Windows::Media::Devices::AudioDeviceModule>{ static constexpr auto & value{ L"Windows.Media.Devices.AudioDeviceModule" }; };
template <> struct name<Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs>{ static constexpr auto & value{ L"Windows.Media.Devices.AudioDeviceModuleNotificationEventArgs" }; };
template <> struct name<Windows::Media::Devices::AudioDeviceModulesManager>{ static constexpr auto & value{ L"Windows.Media.Devices.AudioDeviceModulesManager" }; };
template <> struct name<Windows::Media::Devices::CallControl>{ static constexpr auto & value{ L"Windows.Media.Devices.CallControl" }; };
template <> struct name<Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Devices.DefaultAudioCaptureDeviceChangedEventArgs" }; };
template <> struct name<Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Devices.DefaultAudioRenderDeviceChangedEventArgs" }; };
template <> struct name<Windows::Media::Devices::DialRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Devices.DialRequestedEventArgs" }; };
template <> struct name<Windows::Media::Devices::ExposureCompensationControl>{ static constexpr auto & value{ L"Windows.Media.Devices.ExposureCompensationControl" }; };
template <> struct name<Windows::Media::Devices::ExposureControl>{ static constexpr auto & value{ L"Windows.Media.Devices.ExposureControl" }; };
template <> struct name<Windows::Media::Devices::ExposurePriorityVideoControl>{ static constexpr auto & value{ L"Windows.Media.Devices.ExposurePriorityVideoControl" }; };
template <> struct name<Windows::Media::Devices::FlashControl>{ static constexpr auto & value{ L"Windows.Media.Devices.FlashControl" }; };
template <> struct name<Windows::Media::Devices::FocusControl>{ static constexpr auto & value{ L"Windows.Media.Devices.FocusControl" }; };
template <> struct name<Windows::Media::Devices::FocusSettings>{ static constexpr auto & value{ L"Windows.Media.Devices.FocusSettings" }; };
template <> struct name<Windows::Media::Devices::HdrVideoControl>{ static constexpr auto & value{ L"Windows.Media.Devices.HdrVideoControl" }; };
template <> struct name<Windows::Media::Devices::IsoSpeedControl>{ static constexpr auto & value{ L"Windows.Media.Devices.IsoSpeedControl" }; };
template <> struct name<Windows::Media::Devices::KeypadPressedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Devices.KeypadPressedEventArgs" }; };
template <> struct name<Windows::Media::Devices::LowLagPhotoControl>{ static constexpr auto & value{ L"Windows.Media.Devices.LowLagPhotoControl" }; };
template <> struct name<Windows::Media::Devices::LowLagPhotoSequenceControl>{ static constexpr auto & value{ L"Windows.Media.Devices.LowLagPhotoSequenceControl" }; };
template <> struct name<Windows::Media::Devices::MediaDevice>{ static constexpr auto & value{ L"Windows.Media.Devices.MediaDevice" }; };
template <> struct name<Windows::Media::Devices::MediaDeviceControl>{ static constexpr auto & value{ L"Windows.Media.Devices.MediaDeviceControl" }; };
template <> struct name<Windows::Media::Devices::MediaDeviceControlCapabilities>{ static constexpr auto & value{ L"Windows.Media.Devices.MediaDeviceControlCapabilities" }; };
template <> struct name<Windows::Media::Devices::ModuleCommandResult>{ static constexpr auto & value{ L"Windows.Media.Devices.ModuleCommandResult" }; };
template <> struct name<Windows::Media::Devices::OpticalImageStabilizationControl>{ static constexpr auto & value{ L"Windows.Media.Devices.OpticalImageStabilizationControl" }; };
template <> struct name<Windows::Media::Devices::PhotoConfirmationControl>{ static constexpr auto & value{ L"Windows.Media.Devices.PhotoConfirmationControl" }; };
template <> struct name<Windows::Media::Devices::RedialRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Devices.RedialRequestedEventArgs" }; };
template <> struct name<Windows::Media::Devices::RegionOfInterest>{ static constexpr auto & value{ L"Windows.Media.Devices.RegionOfInterest" }; };
template <> struct name<Windows::Media::Devices::RegionsOfInterestControl>{ static constexpr auto & value{ L"Windows.Media.Devices.RegionsOfInterestControl" }; };
template <> struct name<Windows::Media::Devices::SceneModeControl>{ static constexpr auto & value{ L"Windows.Media.Devices.SceneModeControl" }; };
template <> struct name<Windows::Media::Devices::TorchControl>{ static constexpr auto & value{ L"Windows.Media.Devices.TorchControl" }; };
template <> struct name<Windows::Media::Devices::VideoDeviceController>{ static constexpr auto & value{ L"Windows.Media.Devices.VideoDeviceController" }; };
template <> struct name<Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyResult>{ static constexpr auto & value{ L"Windows.Media.Devices.VideoDeviceControllerGetDevicePropertyResult" }; };
template <> struct name<Windows::Media::Devices::WhiteBalanceControl>{ static constexpr auto & value{ L"Windows.Media.Devices.WhiteBalanceControl" }; };
template <> struct name<Windows::Media::Devices::ZoomControl>{ static constexpr auto & value{ L"Windows.Media.Devices.ZoomControl" }; };
template <> struct name<Windows::Media::Devices::ZoomSettings>{ static constexpr auto & value{ L"Windows.Media.Devices.ZoomSettings" }; };
template <> struct name<Windows::Media::Devices::AdvancedPhotoMode>{ static constexpr auto & value{ L"Windows.Media.Devices.AdvancedPhotoMode" }; };
template <> struct name<Windows::Media::Devices::AudioDeviceRole>{ static constexpr auto & value{ L"Windows.Media.Devices.AudioDeviceRole" }; };
template <> struct name<Windows::Media::Devices::AutoFocusRange>{ static constexpr auto & value{ L"Windows.Media.Devices.AutoFocusRange" }; };
template <> struct name<Windows::Media::Devices::CameraStreamState>{ static constexpr auto & value{ L"Windows.Media.Devices.CameraStreamState" }; };
template <> struct name<Windows::Media::Devices::CaptureSceneMode>{ static constexpr auto & value{ L"Windows.Media.Devices.CaptureSceneMode" }; };
template <> struct name<Windows::Media::Devices::CaptureUse>{ static constexpr auto & value{ L"Windows.Media.Devices.CaptureUse" }; };
template <> struct name<Windows::Media::Devices::ColorTemperaturePreset>{ static constexpr auto & value{ L"Windows.Media.Devices.ColorTemperaturePreset" }; };
template <> struct name<Windows::Media::Devices::FocusMode>{ static constexpr auto & value{ L"Windows.Media.Devices.FocusMode" }; };
template <> struct name<Windows::Media::Devices::FocusPreset>{ static constexpr auto & value{ L"Windows.Media.Devices.FocusPreset" }; };
template <> struct name<Windows::Media::Devices::HdrVideoMode>{ static constexpr auto & value{ L"Windows.Media.Devices.HdrVideoMode" }; };
template <> struct name<Windows::Media::Devices::IsoSpeedPreset>{ static constexpr auto & value{ L"Windows.Media.Devices.IsoSpeedPreset" }; };
template <> struct name<Windows::Media::Devices::ManualFocusDistance>{ static constexpr auto & value{ L"Windows.Media.Devices.ManualFocusDistance" }; };
template <> struct name<Windows::Media::Devices::MediaCaptureFocusState>{ static constexpr auto & value{ L"Windows.Media.Devices.MediaCaptureFocusState" }; };
template <> struct name<Windows::Media::Devices::MediaCaptureOptimization>{ static constexpr auto & value{ L"Windows.Media.Devices.MediaCaptureOptimization" }; };
template <> struct name<Windows::Media::Devices::MediaCapturePauseBehavior>{ static constexpr auto & value{ L"Windows.Media.Devices.MediaCapturePauseBehavior" }; };
template <> struct name<Windows::Media::Devices::OpticalImageStabilizationMode>{ static constexpr auto & value{ L"Windows.Media.Devices.OpticalImageStabilizationMode" }; };
template <> struct name<Windows::Media::Devices::RegionOfInterestType>{ static constexpr auto & value{ L"Windows.Media.Devices.RegionOfInterestType" }; };
template <> struct name<Windows::Media::Devices::SendCommandStatus>{ static constexpr auto & value{ L"Windows.Media.Devices.SendCommandStatus" }; };
template <> struct name<Windows::Media::Devices::TelephonyKey>{ static constexpr auto & value{ L"Windows.Media.Devices.TelephonyKey" }; };
template <> struct name<Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyStatus>{ static constexpr auto & value{ L"Windows.Media.Devices.VideoDeviceControllerGetDevicePropertyStatus" }; };
template <> struct name<Windows::Media::Devices::VideoDeviceControllerSetDevicePropertyStatus>{ static constexpr auto & value{ L"Windows.Media.Devices.VideoDeviceControllerSetDevicePropertyStatus" }; };
template <> struct name<Windows::Media::Devices::ZoomTransitionMode>{ static constexpr auto & value{ L"Windows.Media.Devices.ZoomTransitionMode" }; };
template <> struct name<Windows::Media::Devices::CallControlEventHandler>{ static constexpr auto & value{ L"Windows.Media.Devices.CallControlEventHandler" }; };
template <> struct name<Windows::Media::Devices::DialRequestedEventHandler>{ static constexpr auto & value{ L"Windows.Media.Devices.DialRequestedEventHandler" }; };
template <> struct name<Windows::Media::Devices::KeypadPressedEventHandler>{ static constexpr auto & value{ L"Windows.Media.Devices.KeypadPressedEventHandler" }; };
template <> struct name<Windows::Media::Devices::RedialRequestedEventHandler>{ static constexpr auto & value{ L"Windows.Media.Devices.RedialRequestedEventHandler" }; };
template <> struct guid<Windows::Media::Devices::IAdvancedPhotoCaptureSettings>{ static constexpr GUID value{ 0x08F3863A,0x0018,0x445B,{ 0x93,0xD2,0x64,0x6D,0x1C,0x5E,0xD0,0x5C } }; };
template <> struct guid<Windows::Media::Devices::IAdvancedPhotoControl>{ static constexpr GUID value{ 0xC5B15486,0x9001,0x4682,{ 0x93,0x09,0x68,0xEA,0xE0,0x08,0x0E,0xEC } }; };
template <> struct guid<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController>{ static constexpr GUID value{ 0xDE6FF4D3,0x2B96,0x4583,{ 0x80,0xAB,0xB5,0xB0,0x1D,0xC6,0xA8,0xD7 } }; };
template <> struct guid<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2>{ static constexpr GUID value{ 0x8BB94F8F,0xF11A,0x43DB,{ 0xB4,0x02,0x11,0x93,0x0B,0x80,0xAE,0x56 } }; };
template <> struct guid<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController3>{ static constexpr GUID value{ 0xA98B8F34,0xEE0D,0x470C,{ 0xB9,0xF0,0x42,0x29,0xC4,0xBB,0xD0,0x89 } }; };
template <> struct guid<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4>{ static constexpr GUID value{ 0xEA9FBFAF,0xD371,0x41C3,{ 0x9A,0x17,0x82,0x4A,0x87,0xEB,0xDF,0xD2 } }; };
template <> struct guid<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5>{ static constexpr GUID value{ 0x33512B17,0xB9CB,0x4A23,{ 0xB8,0x75,0xF9,0xEA,0xAB,0x53,0x54,0x92 } }; };
template <> struct guid<Windows::Media::Devices::IAudioDeviceController>{ static constexpr GUID value{ 0xEDD4A388,0x79C7,0x4F7C,{ 0x90,0xE8,0xEF,0x93,0x4B,0x21,0x58,0x0A } }; };
template <> struct guid<Windows::Media::Devices::IAudioDeviceModule>{ static constexpr GUID value{ 0x86CFAC36,0x47C1,0x4B33,{ 0x98,0x52,0x87,0x73,0xEC,0x4B,0xE1,0x23 } }; };
template <> struct guid<Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs>{ static constexpr GUID value{ 0xE3E3CCAF,0x224C,0x48BE,{ 0x95,0x6B,0x9A,0x13,0x13,0x4E,0x96,0xE8 } }; };
template <> struct guid<Windows::Media::Devices::IAudioDeviceModulesManager>{ static constexpr GUID value{ 0x6AA40C4D,0x960A,0x4D1C,{ 0xB3,0x18,0x00,0x22,0x60,0x45,0x47,0xED } }; };
template <> struct guid<Windows::Media::Devices::IAudioDeviceModulesManagerFactory>{ static constexpr GUID value{ 0x8DB03670,0xE64D,0x4773,{ 0x96,0xC0,0xBC,0x7E,0xBF,0x0E,0x06,0x3F } }; };
template <> struct guid<Windows::Media::Devices::ICallControl>{ static constexpr GUID value{ 0xA520D0D6,0xAE8D,0x45DB,{ 0x80,0x11,0xCA,0x49,0xD3,0xB3,0xE5,0x78 } }; };
template <> struct guid<Windows::Media::Devices::ICallControlStatics>{ static constexpr GUID value{ 0x03945AD5,0x85AB,0x40E1,{ 0xAF,0x19,0x56,0xC9,0x43,0x03,0xB0,0x19 } }; };
template <> struct guid<Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs>{ static constexpr GUID value{ 0x110F882F,0x1C05,0x4657,{ 0xA1,0x8E,0x47,0xC9,0xB6,0x9F,0x07,0xAB } }; };
template <> struct guid<Windows::Media::Devices::IDialRequestedEventArgs>{ static constexpr GUID value{ 0x037B929E,0x953C,0x4286,{ 0x88,0x66,0x4F,0x0F,0x37,0x6C,0x85,0x5A } }; };
template <> struct guid<Windows::Media::Devices::IExposureCompensationControl>{ static constexpr GUID value{ 0x81C8E834,0xDCEC,0x4011,{ 0xA6,0x10,0x1F,0x38,0x47,0xE6,0x4A,0xCA } }; };
template <> struct guid<Windows::Media::Devices::IExposureControl>{ static constexpr GUID value{ 0x09E8CBE2,0xAD96,0x4F28,{ 0xA0,0xE0,0x96,0xED,0x7E,0x1B,0x5F,0xD2 } }; };
template <> struct guid<Windows::Media::Devices::IExposurePriorityVideoControl>{ static constexpr GUID value{ 0x2CB240A3,0x5168,0x4271,{ 0x9E,0xA5,0x47,0x62,0x1A,0x98,0xA3,0x52 } }; };
template <> struct guid<Windows::Media::Devices::IFlashControl>{ static constexpr GUID value{ 0xDEF41DBE,0x7D68,0x45E3,{ 0x8C,0x0F,0xBE,0x7B,0xB3,0x28,0x37,0xD0 } }; };
template <> struct guid<Windows::Media::Devices::IFlashControl2>{ static constexpr GUID value{ 0x7D29CC9E,0x75E1,0x4AF7,{ 0xBD,0x7D,0x4E,0x38,0xE1,0xC0,0x6C,0xD6 } }; };
template <> struct guid<Windows::Media::Devices::IFocusControl>{ static constexpr GUID value{ 0xC0D889F6,0x5228,0x4453,{ 0xB1,0x53,0x85,0x60,0x65,0x92,0xB2,0x38 } }; };
template <> struct guid<Windows::Media::Devices::IFocusControl2>{ static constexpr GUID value{ 0x3F7CFF48,0xC534,0x4E9E,{ 0x94,0xC3,0x52,0xEF,0x2A,0xFD,0x5D,0x07 } }; };
template <> struct guid<Windows::Media::Devices::IFocusSettings>{ static constexpr GUID value{ 0x79958F6B,0x3263,0x4275,{ 0x85,0xD6,0xAE,0xAE,0x89,0x1C,0x96,0xEE } }; };
template <> struct guid<Windows::Media::Devices::IHdrVideoControl>{ static constexpr GUID value{ 0x55D8E2D0,0x30C0,0x43BF,{ 0x9B,0x9A,0x97,0x99,0xD7,0x0C,0xED,0x94 } }; };
template <> struct guid<Windows::Media::Devices::IIsoSpeedControl>{ static constexpr GUID value{ 0x27B6C322,0x25AD,0x4F1B,{ 0xAA,0xAB,0x52,0x4A,0xB3,0x76,0xCA,0x33 } }; };
template <> struct guid<Windows::Media::Devices::IIsoSpeedControl2>{ static constexpr GUID value{ 0x6F1578F2,0x6D77,0x4F8A,{ 0x8C,0x2F,0x61,0x30,0xB6,0x39,0x50,0x53 } }; };
template <> struct guid<Windows::Media::Devices::IKeypadPressedEventArgs>{ static constexpr GUID value{ 0xD3A43900,0xB4FA,0x49CD,{ 0x94,0x42,0x89,0xAF,0x65,0x68,0xF6,0x01 } }; };
template <> struct guid<Windows::Media::Devices::ILowLagPhotoControl>{ static constexpr GUID value{ 0x6D5C4DD0,0xFADF,0x415D,{ 0xAE,0xE6,0x3B,0xAA,0x52,0x93,0x00,0xC9 } }; };
template <> struct guid<Windows::Media::Devices::ILowLagPhotoSequenceControl>{ static constexpr GUID value{ 0x3DCF909D,0x6D16,0x409C,{ 0xBA,0xFE,0xB9,0xA5,0x94,0xC6,0xFD,0xE6 } }; };
template <> struct guid<Windows::Media::Devices::IMediaDeviceControl>{ static constexpr GUID value{ 0xEFA8DFA9,0x6F75,0x4863,{ 0xBA,0x0B,0x58,0x3F,0x30,0x36,0xB4,0xDE } }; };
template <> struct guid<Windows::Media::Devices::IMediaDeviceControlCapabilities>{ static constexpr GUID value{ 0x23005816,0xEB85,0x43E2,{ 0xB9,0x2B,0x82,0x40,0xD5,0xEE,0x70,0xEC } }; };
template <> struct guid<Windows::Media::Devices::IMediaDeviceController>{ static constexpr GUID value{ 0xF6F8F5CE,0x209A,0x48FB,{ 0x86,0xFC,0xD4,0x45,0x78,0xF3,0x17,0xE6 } }; };
template <> struct guid<Windows::Media::Devices::IMediaDeviceStatics>{ static constexpr GUID value{ 0xAA2D9A40,0x909F,0x4BBA,{ 0xBF,0x8B,0x0C,0x0D,0x29,0x6F,0x14,0xF0 } }; };
template <> struct guid<Windows::Media::Devices::IModuleCommandResult>{ static constexpr GUID value{ 0x520D1EB4,0x1374,0x4C7D,{ 0xB1,0xE4,0x39,0xDC,0xDF,0x3E,0xAE,0x4E } }; };
template <> struct guid<Windows::Media::Devices::IOpticalImageStabilizationControl>{ static constexpr GUID value{ 0xBFAD9C1D,0x00BC,0x423B,{ 0x8E,0xB2,0xA0,0x17,0x8C,0xA9,0x42,0x47 } }; };
template <> struct guid<Windows::Media::Devices::IPhotoConfirmationControl>{ static constexpr GUID value{ 0xC8F3F363,0xFF5E,0x4582,{ 0xA9,0xA8,0x05,0x50,0xF8,0x5A,0x4A,0x76 } }; };
template <> struct guid<Windows::Media::Devices::IRedialRequestedEventArgs>{ static constexpr GUID value{ 0x7EB55209,0x76AB,0x4C31,{ 0xB4,0x0E,0x4B,0x58,0x37,0x9D,0x58,0x0C } }; };
template <> struct guid<Windows::Media::Devices::IRegionOfInterest>{ static constexpr GUID value{ 0xE5ECC834,0xCE66,0x4E05,{ 0xA7,0x8F,0xCF,0x39,0x1A,0x5E,0xC2,0xD1 } }; };
template <> struct guid<Windows::Media::Devices::IRegionOfInterest2>{ static constexpr GUID value{ 0x19FE2A91,0x73AA,0x4D51,{ 0x8A,0x9D,0x56,0xCC,0xF7,0xDB,0x7F,0x54 } }; };
template <> struct guid<Windows::Media::Devices::IRegionsOfInterestControl>{ static constexpr GUID value{ 0xC323F527,0xAB0B,0x4558,{ 0x8B,0x5B,0xDF,0x56,0x93,0xDB,0x03,0x78 } }; };
template <> struct guid<Windows::Media::Devices::ISceneModeControl>{ static constexpr GUID value{ 0xD48E5AF7,0x8D59,0x4854,{ 0x8C,0x62,0x12,0xC7,0x0B,0xA8,0x9B,0x7C } }; };
template <> struct guid<Windows::Media::Devices::ITorchControl>{ static constexpr GUID value{ 0xA6053665,0x8250,0x416C,{ 0x91,0x9A,0x72,0x42,0x96,0xAF,0xA3,0x06 } }; };
template <> struct guid<Windows::Media::Devices::IVideoDeviceController>{ static constexpr GUID value{ 0x99555575,0x2E2E,0x40B8,{ 0xB6,0xC7,0xF8,0x2D,0x10,0x01,0x32,0x10 } }; };
template <> struct guid<Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult>{ static constexpr GUID value{ 0xC5D88395,0x6ED5,0x4790,{ 0x8B,0x5D,0x0E,0xF1,0x39,0x35,0xD0,0xF8 } }; };
template <> struct guid<Windows::Media::Devices::IWhiteBalanceControl>{ static constexpr GUID value{ 0x781F047E,0x7162,0x49C8,{ 0xA8,0xF9,0x94,0x81,0xC5,0x65,0x36,0x3E } }; };
template <> struct guid<Windows::Media::Devices::IZoomControl>{ static constexpr GUID value{ 0x3A1E0B12,0x32DA,0x4C17,{ 0xBF,0xD7,0x8D,0x0C,0x73,0xC8,0xF5,0xA5 } }; };
template <> struct guid<Windows::Media::Devices::IZoomControl2>{ static constexpr GUID value{ 0x69843DB0,0x2E99,0x4641,{ 0x85,0x29,0x18,0x4F,0x31,0x9D,0x16,0x71 } }; };
template <> struct guid<Windows::Media::Devices::IZoomSettings>{ static constexpr GUID value{ 0x6AD66B24,0x14B4,0x4BFD,{ 0xB1,0x8F,0x88,0xFE,0x24,0x46,0x3B,0x52 } }; };
template <> struct guid<Windows::Media::Devices::CallControlEventHandler>{ static constexpr GUID value{ 0x596F759F,0x50DF,0x4454,{ 0xBC,0x63,0x4D,0x3D,0x01,0xB6,0x19,0x58 } }; };
template <> struct guid<Windows::Media::Devices::DialRequestedEventHandler>{ static constexpr GUID value{ 0x5ABBFFDB,0xC21F,0x4BC4,{ 0x89,0x1B,0x25,0x7E,0x28,0xC1,0xB1,0xA4 } }; };
template <> struct guid<Windows::Media::Devices::KeypadPressedEventHandler>{ static constexpr GUID value{ 0xE637A454,0xC527,0x422C,{ 0x89,0x26,0xC9,0xAF,0x83,0xB5,0x59,0xA0 } }; };
template <> struct guid<Windows::Media::Devices::RedialRequestedEventHandler>{ static constexpr GUID value{ 0xBAF257D1,0x4EBD,0x4B84,{ 0x9F,0x47,0x6E,0xC4,0x3D,0x75,0xD8,0xB1 } }; };
template <> struct default_interface<Windows::Media::Devices::AdvancedPhotoCaptureSettings>{ using type = Windows::Media::Devices::IAdvancedPhotoCaptureSettings; };
template <> struct default_interface<Windows::Media::Devices::AdvancedPhotoControl>{ using type = Windows::Media::Devices::IAdvancedPhotoControl; };
template <> struct default_interface<Windows::Media::Devices::AudioDeviceController>{ using type = Windows::Media::Devices::IAudioDeviceController; };
template <> struct default_interface<Windows::Media::Devices::AudioDeviceModule>{ using type = Windows::Media::Devices::IAudioDeviceModule; };
template <> struct default_interface<Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs>{ using type = Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs; };
template <> struct default_interface<Windows::Media::Devices::AudioDeviceModulesManager>{ using type = Windows::Media::Devices::IAudioDeviceModulesManager; };
template <> struct default_interface<Windows::Media::Devices::CallControl>{ using type = Windows::Media::Devices::ICallControl; };
template <> struct default_interface<Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs>{ using type = Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs; };
template <> struct default_interface<Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs>{ using type = Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs; };
template <> struct default_interface<Windows::Media::Devices::DialRequestedEventArgs>{ using type = Windows::Media::Devices::IDialRequestedEventArgs; };
template <> struct default_interface<Windows::Media::Devices::ExposureCompensationControl>{ using type = Windows::Media::Devices::IExposureCompensationControl; };
template <> struct default_interface<Windows::Media::Devices::ExposureControl>{ using type = Windows::Media::Devices::IExposureControl; };
template <> struct default_interface<Windows::Media::Devices::ExposurePriorityVideoControl>{ using type = Windows::Media::Devices::IExposurePriorityVideoControl; };
template <> struct default_interface<Windows::Media::Devices::FlashControl>{ using type = Windows::Media::Devices::IFlashControl; };
template <> struct default_interface<Windows::Media::Devices::FocusControl>{ using type = Windows::Media::Devices::IFocusControl; };
template <> struct default_interface<Windows::Media::Devices::FocusSettings>{ using type = Windows::Media::Devices::IFocusSettings; };
template <> struct default_interface<Windows::Media::Devices::HdrVideoControl>{ using type = Windows::Media::Devices::IHdrVideoControl; };
template <> struct default_interface<Windows::Media::Devices::IsoSpeedControl>{ using type = Windows::Media::Devices::IIsoSpeedControl; };
template <> struct default_interface<Windows::Media::Devices::KeypadPressedEventArgs>{ using type = Windows::Media::Devices::IKeypadPressedEventArgs; };
template <> struct default_interface<Windows::Media::Devices::LowLagPhotoControl>{ using type = Windows::Media::Devices::ILowLagPhotoControl; };
template <> struct default_interface<Windows::Media::Devices::LowLagPhotoSequenceControl>{ using type = Windows::Media::Devices::ILowLagPhotoSequenceControl; };
template <> struct default_interface<Windows::Media::Devices::MediaDeviceControl>{ using type = Windows::Media::Devices::IMediaDeviceControl; };
template <> struct default_interface<Windows::Media::Devices::MediaDeviceControlCapabilities>{ using type = Windows::Media::Devices::IMediaDeviceControlCapabilities; };
template <> struct default_interface<Windows::Media::Devices::ModuleCommandResult>{ using type = Windows::Media::Devices::IModuleCommandResult; };
template <> struct default_interface<Windows::Media::Devices::OpticalImageStabilizationControl>{ using type = Windows::Media::Devices::IOpticalImageStabilizationControl; };
template <> struct default_interface<Windows::Media::Devices::PhotoConfirmationControl>{ using type = Windows::Media::Devices::IPhotoConfirmationControl; };
template <> struct default_interface<Windows::Media::Devices::RedialRequestedEventArgs>{ using type = Windows::Media::Devices::IRedialRequestedEventArgs; };
template <> struct default_interface<Windows::Media::Devices::RegionOfInterest>{ using type = Windows::Media::Devices::IRegionOfInterest; };
template <> struct default_interface<Windows::Media::Devices::RegionsOfInterestControl>{ using type = Windows::Media::Devices::IRegionsOfInterestControl; };
template <> struct default_interface<Windows::Media::Devices::SceneModeControl>{ using type = Windows::Media::Devices::ISceneModeControl; };
template <> struct default_interface<Windows::Media::Devices::TorchControl>{ using type = Windows::Media::Devices::ITorchControl; };
template <> struct default_interface<Windows::Media::Devices::VideoDeviceController>{ using type = Windows::Media::Devices::IVideoDeviceController; };
template <> struct default_interface<Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyResult>{ using type = Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult; };
template <> struct default_interface<Windows::Media::Devices::WhiteBalanceControl>{ using type = Windows::Media::Devices::IWhiteBalanceControl; };
template <> struct default_interface<Windows::Media::Devices::ZoomControl>{ using type = Windows::Media::Devices::IZoomControl; };
template <> struct default_interface<Windows::Media::Devices::ZoomSettings>{ using type = Windows::Media::Devices::IZoomSettings; };

template <typename D>
struct consume_Windows_Media_Devices_IAdvancedPhotoCaptureSettings
{
    Windows::Media::Devices::AdvancedPhotoMode Mode() const;
    void Mode(Windows::Media::Devices::AdvancedPhotoMode const& value) const;
};
template <> struct consume<Windows::Media::Devices::IAdvancedPhotoCaptureSettings> { template <typename D> using type = consume_Windows_Media_Devices_IAdvancedPhotoCaptureSettings<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IAdvancedPhotoControl
{
    bool Supported() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::AdvancedPhotoMode> SupportedModes() const;
    Windows::Media::Devices::AdvancedPhotoMode Mode() const;
    void Configure(Windows::Media::Devices::AdvancedPhotoCaptureSettings const& settings) const;
};
template <> struct consume<Windows::Media::Devices::IAdvancedPhotoControl> { template <typename D> using type = consume_Windows_Media_Devices_IAdvancedPhotoControl<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController
{
    void SetDeviceProperty(param::hstring const& propertyId, Windows::Foundation::IInspectable const& propertyValue) const;
    Windows::Foundation::IInspectable GetDeviceProperty(param::hstring const& propertyId) const;
};
template <> struct consume<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController> { template <typename D> using type = consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2
{
    Windows::Media::Devices::LowLagPhotoSequenceControl LowLagPhotoSequence() const;
    Windows::Media::Devices::LowLagPhotoControl LowLagPhoto() const;
    Windows::Media::Devices::SceneModeControl SceneModeControl() const;
    Windows::Media::Devices::TorchControl TorchControl() const;
    Windows::Media::Devices::FlashControl FlashControl() const;
    Windows::Media::Devices::WhiteBalanceControl WhiteBalanceControl() const;
    Windows::Media::Devices::ExposureControl ExposureControl() const;
    Windows::Media::Devices::FocusControl FocusControl() const;
    Windows::Media::Devices::ExposureCompensationControl ExposureCompensationControl() const;
    Windows::Media::Devices::IsoSpeedControl IsoSpeedControl() const;
    Windows::Media::Devices::RegionsOfInterestControl RegionsOfInterestControl() const;
    Windows::Media::Devices::CaptureUse PrimaryUse() const;
    void PrimaryUse(Windows::Media::Devices::CaptureUse const& value) const;
};
template <> struct consume<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2> { template <typename D> using type = consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController3
{
    Windows::Media::Devices::Core::VariablePhotoSequenceController VariablePhotoSequenceController() const;
    Windows::Media::Devices::PhotoConfirmationControl PhotoConfirmationControl() const;
    Windows::Media::Devices::ZoomControl ZoomControl() const;
};
template <> struct consume<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController3> { template <typename D> using type = consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController3<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController4
{
    Windows::Media::Devices::ExposurePriorityVideoControl ExposurePriorityVideoControl() const;
    Windows::Media::Devices::MediaCaptureOptimization DesiredOptimization() const;
    void DesiredOptimization(Windows::Media::Devices::MediaCaptureOptimization const& value) const;
    Windows::Media::Devices::HdrVideoControl HdrVideoControl() const;
    Windows::Media::Devices::OpticalImageStabilizationControl OpticalImageStabilizationControl() const;
    Windows::Media::Devices::AdvancedPhotoControl AdvancedPhotoControl() const;
};
template <> struct consume<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4> { template <typename D> using type = consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController4<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController5
{
    hstring Id() const;
    Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyResult GetDevicePropertyById(param::hstring const& propertyId, optional<uint32_t> const& maxPropertyValueSize) const;
    Windows::Media::Devices::VideoDeviceControllerSetDevicePropertyStatus SetDevicePropertyById(param::hstring const& propertyId, Windows::Foundation::IInspectable const& propertyValue) const;
    Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyResult GetDevicePropertyByExtendedId(array_view<uint8_t const> extendedPropertyId, optional<uint32_t> const& maxPropertyValueSize) const;
    Windows::Media::Devices::VideoDeviceControllerSetDevicePropertyStatus SetDevicePropertyByExtendedId(array_view<uint8_t const> extendedPropertyId, array_view<uint8_t const> propertyValue) const;
};
template <> struct consume<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5> { template <typename D> using type = consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController5<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IAudioDeviceController
{
    void Muted(bool value) const;
    bool Muted() const;
    void VolumePercent(float value) const;
    float VolumePercent() const;
};
template <> struct consume<Windows::Media::Devices::IAudioDeviceController> { template <typename D> using type = consume_Windows_Media_Devices_IAudioDeviceController<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IAudioDeviceModule
{
    hstring ClassId() const;
    hstring DisplayName() const;
    uint32_t InstanceId() const;
    uint32_t MajorVersion() const;
    uint32_t MinorVersion() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult> SendCommandAsync(Windows::Storage::Streams::IBuffer const& Command) const;
};
template <> struct consume<Windows::Media::Devices::IAudioDeviceModule> { template <typename D> using type = consume_Windows_Media_Devices_IAudioDeviceModule<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IAudioDeviceModuleNotificationEventArgs
{
    Windows::Media::Devices::AudioDeviceModule Module() const;
    Windows::Storage::Streams::IBuffer NotificationData() const;
};
template <> struct consume<Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs> { template <typename D> using type = consume_Windows_Media_Devices_IAudioDeviceModuleNotificationEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IAudioDeviceModulesManager
{
    event_token ModuleNotificationReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager, Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs> const& handler) const;
    using ModuleNotificationReceived_revoker = event_revoker<Windows::Media::Devices::IAudioDeviceModulesManager>;
    ModuleNotificationReceived_revoker ModuleNotificationReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager, Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs> const& handler) const;
    void ModuleNotificationReceived(event_token const& token) const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::AudioDeviceModule> FindAllById(param::hstring const& moduleId) const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::AudioDeviceModule> FindAll() const;
};
template <> struct consume<Windows::Media::Devices::IAudioDeviceModulesManager> { template <typename D> using type = consume_Windows_Media_Devices_IAudioDeviceModulesManager<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IAudioDeviceModulesManagerFactory
{
    Windows::Media::Devices::AudioDeviceModulesManager Create(param::hstring const& deviceId) const;
};
template <> struct consume<Windows::Media::Devices::IAudioDeviceModulesManagerFactory> { template <typename D> using type = consume_Windows_Media_Devices_IAudioDeviceModulesManagerFactory<D>; };

template <typename D>
struct consume_Windows_Media_Devices_ICallControl
{
    uint64_t IndicateNewIncomingCall(bool enableRinger, param::hstring const& callerId) const;
    uint64_t IndicateNewOutgoingCall() const;
    void IndicateActiveCall(uint64_t callToken) const;
    void EndCall(uint64_t callToken) const;
    bool HasRinger() const;
    event_token AnswerRequested(Windows::Media::Devices::CallControlEventHandler const& handler) const;
    using AnswerRequested_revoker = event_revoker<Windows::Media::Devices::ICallControl>;
    AnswerRequested_revoker AnswerRequested(auto_revoke_t, Windows::Media::Devices::CallControlEventHandler const& handler) const;
    void AnswerRequested(event_token const& token) const;
    event_token HangUpRequested(Windows::Media::Devices::CallControlEventHandler const& handler) const;
    using HangUpRequested_revoker = event_revoker<Windows::Media::Devices::ICallControl>;
    HangUpRequested_revoker HangUpRequested(auto_revoke_t, Windows::Media::Devices::CallControlEventHandler const& handler) const;
    void HangUpRequested(event_token const& token) const;
    event_token DialRequested(Windows::Media::Devices::DialRequestedEventHandler const& handler) const;
    using DialRequested_revoker = event_revoker<Windows::Media::Devices::ICallControl>;
    DialRequested_revoker DialRequested(auto_revoke_t, Windows::Media::Devices::DialRequestedEventHandler const& handler) const;
    void DialRequested(event_token const& token) const;
    event_token RedialRequested(Windows::Media::Devices::RedialRequestedEventHandler const& handler) const;
    using RedialRequested_revoker = event_revoker<Windows::Media::Devices::ICallControl>;
    RedialRequested_revoker RedialRequested(auto_revoke_t, Windows::Media::Devices::RedialRequestedEventHandler const& handler) const;
    void RedialRequested(event_token const& token) const;
    event_token KeypadPressed(Windows::Media::Devices::KeypadPressedEventHandler const& handler) const;
    using KeypadPressed_revoker = event_revoker<Windows::Media::Devices::ICallControl>;
    KeypadPressed_revoker KeypadPressed(auto_revoke_t, Windows::Media::Devices::KeypadPressedEventHandler const& handler) const;
    void KeypadPressed(event_token const& token) const;
    event_token AudioTransferRequested(Windows::Media::Devices::CallControlEventHandler const& handler) const;
    using AudioTransferRequested_revoker = event_revoker<Windows::Media::Devices::ICallControl>;
    AudioTransferRequested_revoker AudioTransferRequested(auto_revoke_t, Windows::Media::Devices::CallControlEventHandler const& handler) const;
    void AudioTransferRequested(event_token const& token) const;
};
template <> struct consume<Windows::Media::Devices::ICallControl> { template <typename D> using type = consume_Windows_Media_Devices_ICallControl<D>; };

template <typename D>
struct consume_Windows_Media_Devices_ICallControlStatics
{
    Windows::Media::Devices::CallControl GetDefault() const;
    Windows::Media::Devices::CallControl FromId(param::hstring const& deviceId) const;
};
template <> struct consume<Windows::Media::Devices::ICallControlStatics> { template <typename D> using type = consume_Windows_Media_Devices_ICallControlStatics<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IDefaultAudioDeviceChangedEventArgs
{
    hstring Id() const;
    Windows::Media::Devices::AudioDeviceRole Role() const;
};
template <> struct consume<Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs> { template <typename D> using type = consume_Windows_Media_Devices_IDefaultAudioDeviceChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IDialRequestedEventArgs
{
    void Handled() const;
    Windows::Foundation::IInspectable Contact() const;
};
template <> struct consume<Windows::Media::Devices::IDialRequestedEventArgs> { template <typename D> using type = consume_Windows_Media_Devices_IDialRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IExposureCompensationControl
{
    bool Supported() const;
    float Min() const;
    float Max() const;
    float Step() const;
    float Value() const;
    Windows::Foundation::IAsyncAction SetValueAsync(float value) const;
};
template <> struct consume<Windows::Media::Devices::IExposureCompensationControl> { template <typename D> using type = consume_Windows_Media_Devices_IExposureCompensationControl<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IExposureControl
{
    bool Supported() const;
    bool Auto() const;
    Windows::Foundation::IAsyncAction SetAutoAsync(bool value) const;
    Windows::Foundation::TimeSpan Min() const;
    Windows::Foundation::TimeSpan Max() const;
    Windows::Foundation::TimeSpan Step() const;
    Windows::Foundation::TimeSpan Value() const;
    Windows::Foundation::IAsyncAction SetValueAsync(Windows::Foundation::TimeSpan const& shutterDuration) const;
};
template <> struct consume<Windows::Media::Devices::IExposureControl> { template <typename D> using type = consume_Windows_Media_Devices_IExposureControl<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IExposurePriorityVideoControl
{
    bool Supported() const;
    bool Enabled() const;
    void Enabled(bool value) const;
};
template <> struct consume<Windows::Media::Devices::IExposurePriorityVideoControl> { template <typename D> using type = consume_Windows_Media_Devices_IExposurePriorityVideoControl<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IFlashControl
{
    bool Supported() const;
    bool PowerSupported() const;
    bool RedEyeReductionSupported() const;
    bool Enabled() const;
    void Enabled(bool value) const;
    bool Auto() const;
    void Auto(bool value) const;
    bool RedEyeReduction() const;
    void RedEyeReduction(bool value) const;
    float PowerPercent() const;
    void PowerPercent(float value) const;
};
template <> struct consume<Windows::Media::Devices::IFlashControl> { template <typename D> using type = consume_Windows_Media_Devices_IFlashControl<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IFlashControl2
{
    bool AssistantLightSupported() const;
    bool AssistantLightEnabled() const;
    void AssistantLightEnabled(bool value) const;
};
template <> struct consume<Windows::Media::Devices::IFlashControl2> { template <typename D> using type = consume_Windows_Media_Devices_IFlashControl2<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IFocusControl
{
    bool Supported() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::FocusPreset> SupportedPresets() const;
    Windows::Media::Devices::FocusPreset Preset() const;
    Windows::Foundation::IAsyncAction SetPresetAsync(Windows::Media::Devices::FocusPreset const& preset) const;
    Windows::Foundation::IAsyncAction SetPresetAsync(Windows::Media::Devices::FocusPreset const& preset, bool completeBeforeFocus) const;
    uint32_t Min() const;
    uint32_t Max() const;
    uint32_t Step() const;
    uint32_t Value() const;
    Windows::Foundation::IAsyncAction SetValueAsync(uint32_t focus) const;
    Windows::Foundation::IAsyncAction FocusAsync() const;
};
template <> struct consume<Windows::Media::Devices::IFocusControl> { template <typename D> using type = consume_Windows_Media_Devices_IFocusControl<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IFocusControl2
{
    bool FocusChangedSupported() const;
    bool WaitForFocusSupported() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::FocusMode> SupportedFocusModes() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::ManualFocusDistance> SupportedFocusDistances() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::AutoFocusRange> SupportedFocusRanges() const;
    Windows::Media::Devices::FocusMode Mode() const;
    Windows::Media::Devices::MediaCaptureFocusState FocusState() const;
    Windows::Foundation::IAsyncAction UnlockAsync() const;
    Windows::Foundation::IAsyncAction LockAsync() const;
    void Configure(Windows::Media::Devices::FocusSettings const& settings) const;
};
template <> struct consume<Windows::Media::Devices::IFocusControl2> { template <typename D> using type = consume_Windows_Media_Devices_IFocusControl2<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IFocusSettings
{
    Windows::Media::Devices::FocusMode Mode() const;
    void Mode(Windows::Media::Devices::FocusMode const& value) const;
    Windows::Media::Devices::AutoFocusRange AutoFocusRange() const;
    void AutoFocusRange(Windows::Media::Devices::AutoFocusRange const& value) const;
    Windows::Foundation::IReference<uint32_t> Value() const;
    void Value(optional<uint32_t> const& value) const;
    Windows::Foundation::IReference<Windows::Media::Devices::ManualFocusDistance> Distance() const;
    void Distance(optional<Windows::Media::Devices::ManualFocusDistance> const& value) const;
    bool WaitForFocus() const;
    void WaitForFocus(bool value) const;
    bool DisableDriverFallback() const;
    void DisableDriverFallback(bool value) const;
};
template <> struct consume<Windows::Media::Devices::IFocusSettings> { template <typename D> using type = consume_Windows_Media_Devices_IFocusSettings<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IHdrVideoControl
{
    bool Supported() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::HdrVideoMode> SupportedModes() const;
    Windows::Media::Devices::HdrVideoMode Mode() const;
    void Mode(Windows::Media::Devices::HdrVideoMode const& value) const;
};
template <> struct consume<Windows::Media::Devices::IHdrVideoControl> { template <typename D> using type = consume_Windows_Media_Devices_IHdrVideoControl<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IIsoSpeedControl
{
    bool Supported() const;
    [[deprecated("SupportedPresets may not be available in future versions of Windows Phone. Starting with Windows Phone 8.1, use SetAutoAsync, Auto, SetValueAsync, and Value instead")]] Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::IsoSpeedPreset> SupportedPresets() const;
    [[deprecated("Preset may not be available in future versions of Windows Phone. Starting with Windows Phone 8.1, use SetAutoAsync, Auto, SetValueAsync, and Value instead")]] Windows::Media::Devices::IsoSpeedPreset Preset() const;
    [[deprecated("SetPresetAsync may not be available in future versions of Windows Phone. Starting with Windows Phone 8.1, use SetAutoAsync, Auto, SetValueAsync, and Value instead")]] Windows::Foundation::IAsyncAction SetPresetAsync(Windows::Media::Devices::IsoSpeedPreset const& preset) const;
};
template <> struct consume<Windows::Media::Devices::IIsoSpeedControl> { template <typename D> using type = consume_Windows_Media_Devices_IIsoSpeedControl<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IIsoSpeedControl2
{
    uint32_t Min() const;
    uint32_t Max() const;
    uint32_t Step() const;
    uint32_t Value() const;
    Windows::Foundation::IAsyncAction SetValueAsync(uint32_t isoSpeed) const;
    bool Auto() const;
    Windows::Foundation::IAsyncAction SetAutoAsync() const;
};
template <> struct consume<Windows::Media::Devices::IIsoSpeedControl2> { template <typename D> using type = consume_Windows_Media_Devices_IIsoSpeedControl2<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IKeypadPressedEventArgs
{
    Windows::Media::Devices::TelephonyKey TelephonyKey() const;
};
template <> struct consume<Windows::Media::Devices::IKeypadPressedEventArgs> { template <typename D> using type = consume_Windows_Media_Devices_IKeypadPressedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Devices_ILowLagPhotoControl
{
    Windows::Media::MediaProperties::MediaRatio GetHighestConcurrentFrameRate(Windows::Media::MediaProperties::IMediaEncodingProperties const& captureProperties) const;
    Windows::Media::MediaProperties::MediaRatio GetCurrentFrameRate() const;
    bool ThumbnailEnabled() const;
    void ThumbnailEnabled(bool value) const;
    Windows::Media::MediaProperties::MediaThumbnailFormat ThumbnailFormat() const;
    void ThumbnailFormat(Windows::Media::MediaProperties::MediaThumbnailFormat const& value) const;
    uint32_t DesiredThumbnailSize() const;
    void DesiredThumbnailSize(uint32_t value) const;
    uint32_t HardwareAcceleratedThumbnailSupported() const;
};
template <> struct consume<Windows::Media::Devices::ILowLagPhotoControl> { template <typename D> using type = consume_Windows_Media_Devices_ILowLagPhotoControl<D>; };

template <typename D>
struct consume_Windows_Media_Devices_ILowLagPhotoSequenceControl
{
    bool Supported() const;
    uint32_t MaxPastPhotos() const;
    float MaxPhotosPerSecond() const;
    uint32_t PastPhotoLimit() const;
    void PastPhotoLimit(uint32_t value) const;
    float PhotosPerSecondLimit() const;
    void PhotosPerSecondLimit(float value) const;
    Windows::Media::MediaProperties::MediaRatio GetHighestConcurrentFrameRate(Windows::Media::MediaProperties::IMediaEncodingProperties const& captureProperties) const;
    Windows::Media::MediaProperties::MediaRatio GetCurrentFrameRate() const;
    bool ThumbnailEnabled() const;
    void ThumbnailEnabled(bool value) const;
    Windows::Media::MediaProperties::MediaThumbnailFormat ThumbnailFormat() const;
    void ThumbnailFormat(Windows::Media::MediaProperties::MediaThumbnailFormat const& value) const;
    uint32_t DesiredThumbnailSize() const;
    void DesiredThumbnailSize(uint32_t value) const;
    uint32_t HardwareAcceleratedThumbnailSupported() const;
};
template <> struct consume<Windows::Media::Devices::ILowLagPhotoSequenceControl> { template <typename D> using type = consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IMediaDeviceControl
{
    Windows::Media::Devices::MediaDeviceControlCapabilities Capabilities() const;
    bool TryGetValue(double& value) const;
    bool TrySetValue(double value) const;
    bool TryGetAuto(bool& value) const;
    bool TrySetAuto(bool value) const;
};
template <> struct consume<Windows::Media::Devices::IMediaDeviceControl> { template <typename D> using type = consume_Windows_Media_Devices_IMediaDeviceControl<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IMediaDeviceControlCapabilities
{
    bool Supported() const;
    double Min() const;
    double Max() const;
    double Step() const;
    double Default() const;
    bool AutoModeSupported() const;
};
template <> struct consume<Windows::Media::Devices::IMediaDeviceControlCapabilities> { template <typename D> using type = consume_Windows_Media_Devices_IMediaDeviceControlCapabilities<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IMediaDeviceController
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::MediaProperties::IMediaEncodingProperties> GetAvailableMediaStreamProperties(Windows::Media::Capture::MediaStreamType const& mediaStreamType) const;
    Windows::Media::MediaProperties::IMediaEncodingProperties GetMediaStreamProperties(Windows::Media::Capture::MediaStreamType const& mediaStreamType) const;
    Windows::Foundation::IAsyncAction SetMediaStreamPropertiesAsync(Windows::Media::Capture::MediaStreamType const& mediaStreamType, Windows::Media::MediaProperties::IMediaEncodingProperties const& mediaEncodingProperties) const;
};
template <> struct consume<Windows::Media::Devices::IMediaDeviceController> { template <typename D> using type = consume_Windows_Media_Devices_IMediaDeviceController<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IMediaDeviceStatics
{
    hstring GetAudioCaptureSelector() const;
    hstring GetAudioRenderSelector() const;
    hstring GetVideoCaptureSelector() const;
    hstring GetDefaultAudioCaptureId(Windows::Media::Devices::AudioDeviceRole const& role) const;
    hstring GetDefaultAudioRenderId(Windows::Media::Devices::AudioDeviceRole const& role) const;
    event_token DefaultAudioCaptureDeviceChanged(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs> const& handler) const;
    using DefaultAudioCaptureDeviceChanged_revoker = event_revoker<Windows::Media::Devices::IMediaDeviceStatics>;
    DefaultAudioCaptureDeviceChanged_revoker DefaultAudioCaptureDeviceChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs> const& handler) const;
    void DefaultAudioCaptureDeviceChanged(event_token const& cookie) const;
    event_token DefaultAudioRenderDeviceChanged(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs> const& handler) const;
    using DefaultAudioRenderDeviceChanged_revoker = event_revoker<Windows::Media::Devices::IMediaDeviceStatics>;
    DefaultAudioRenderDeviceChanged_revoker DefaultAudioRenderDeviceChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs> const& handler) const;
    void DefaultAudioRenderDeviceChanged(event_token const& cookie) const;
};
template <> struct consume<Windows::Media::Devices::IMediaDeviceStatics> { template <typename D> using type = consume_Windows_Media_Devices_IMediaDeviceStatics<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IModuleCommandResult
{
    Windows::Media::Devices::SendCommandStatus Status() const;
    Windows::Storage::Streams::IBuffer Result() const;
};
template <> struct consume<Windows::Media::Devices::IModuleCommandResult> { template <typename D> using type = consume_Windows_Media_Devices_IModuleCommandResult<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IOpticalImageStabilizationControl
{
    bool Supported() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::OpticalImageStabilizationMode> SupportedModes() const;
    Windows::Media::Devices::OpticalImageStabilizationMode Mode() const;
    void Mode(Windows::Media::Devices::OpticalImageStabilizationMode const& value) const;
};
template <> struct consume<Windows::Media::Devices::IOpticalImageStabilizationControl> { template <typename D> using type = consume_Windows_Media_Devices_IOpticalImageStabilizationControl<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IPhotoConfirmationControl
{
    bool Supported() const;
    bool Enabled() const;
    void Enabled(bool value) const;
    Windows::Media::MediaProperties::MediaPixelFormat PixelFormat() const;
    void PixelFormat(Windows::Media::MediaProperties::MediaPixelFormat const& format) const;
};
template <> struct consume<Windows::Media::Devices::IPhotoConfirmationControl> { template <typename D> using type = consume_Windows_Media_Devices_IPhotoConfirmationControl<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IRedialRequestedEventArgs
{
    void Handled() const;
};
template <> struct consume<Windows::Media::Devices::IRedialRequestedEventArgs> { template <typename D> using type = consume_Windows_Media_Devices_IRedialRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IRegionOfInterest
{
    bool AutoFocusEnabled() const;
    void AutoFocusEnabled(bool value) const;
    bool AutoWhiteBalanceEnabled() const;
    void AutoWhiteBalanceEnabled(bool value) const;
    bool AutoExposureEnabled() const;
    void AutoExposureEnabled(bool value) const;
    Windows::Foundation::Rect Bounds() const;
    void Bounds(Windows::Foundation::Rect const& value) const;
};
template <> struct consume<Windows::Media::Devices::IRegionOfInterest> { template <typename D> using type = consume_Windows_Media_Devices_IRegionOfInterest<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IRegionOfInterest2
{
    Windows::Media::Devices::RegionOfInterestType Type() const;
    void Type(Windows::Media::Devices::RegionOfInterestType const& value) const;
    bool BoundsNormalized() const;
    void BoundsNormalized(bool value) const;
    uint32_t Weight() const;
    void Weight(uint32_t value) const;
};
template <> struct consume<Windows::Media::Devices::IRegionOfInterest2> { template <typename D> using type = consume_Windows_Media_Devices_IRegionOfInterest2<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IRegionsOfInterestControl
{
    uint32_t MaxRegions() const;
    Windows::Foundation::IAsyncAction SetRegionsAsync(param::async_iterable<Windows::Media::Devices::RegionOfInterest> const& regions) const;
    Windows::Foundation::IAsyncAction SetRegionsAsync(param::async_iterable<Windows::Media::Devices::RegionOfInterest> const& regions, bool lockValues) const;
    Windows::Foundation::IAsyncAction ClearRegionsAsync() const;
    bool AutoFocusSupported() const;
    bool AutoWhiteBalanceSupported() const;
    bool AutoExposureSupported() const;
};
template <> struct consume<Windows::Media::Devices::IRegionsOfInterestControl> { template <typename D> using type = consume_Windows_Media_Devices_IRegionsOfInterestControl<D>; };

template <typename D>
struct consume_Windows_Media_Devices_ISceneModeControl
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::CaptureSceneMode> SupportedModes() const;
    Windows::Media::Devices::CaptureSceneMode Value() const;
    Windows::Foundation::IAsyncAction SetValueAsync(Windows::Media::Devices::CaptureSceneMode const& sceneMode) const;
};
template <> struct consume<Windows::Media::Devices::ISceneModeControl> { template <typename D> using type = consume_Windows_Media_Devices_ISceneModeControl<D>; };

template <typename D>
struct consume_Windows_Media_Devices_ITorchControl
{
    bool Supported() const;
    bool PowerSupported() const;
    bool Enabled() const;
    void Enabled(bool value) const;
    float PowerPercent() const;
    void PowerPercent(float value) const;
};
template <> struct consume<Windows::Media::Devices::ITorchControl> { template <typename D> using type = consume_Windows_Media_Devices_ITorchControl<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IVideoDeviceController
{
    Windows::Media::Devices::MediaDeviceControl Brightness() const;
    Windows::Media::Devices::MediaDeviceControl Contrast() const;
    Windows::Media::Devices::MediaDeviceControl Hue() const;
    Windows::Media::Devices::MediaDeviceControl WhiteBalance() const;
    Windows::Media::Devices::MediaDeviceControl BacklightCompensation() const;
    Windows::Media::Devices::MediaDeviceControl Pan() const;
    Windows::Media::Devices::MediaDeviceControl Tilt() const;
    Windows::Media::Devices::MediaDeviceControl Zoom() const;
    Windows::Media::Devices::MediaDeviceControl Roll() const;
    Windows::Media::Devices::MediaDeviceControl Exposure() const;
    Windows::Media::Devices::MediaDeviceControl Focus() const;
    bool TrySetPowerlineFrequency(Windows::Media::Capture::PowerlineFrequency const& value) const;
    bool TryGetPowerlineFrequency(Windows::Media::Capture::PowerlineFrequency& value) const;
};
template <> struct consume<Windows::Media::Devices::IVideoDeviceController> { template <typename D> using type = consume_Windows_Media_Devices_IVideoDeviceController<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IVideoDeviceControllerGetDevicePropertyResult
{
    Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyStatus Status() const;
    Windows::Foundation::IInspectable Value() const;
};
template <> struct consume<Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult> { template <typename D> using type = consume_Windows_Media_Devices_IVideoDeviceControllerGetDevicePropertyResult<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IWhiteBalanceControl
{
    bool Supported() const;
    Windows::Media::Devices::ColorTemperaturePreset Preset() const;
    Windows::Foundation::IAsyncAction SetPresetAsync(Windows::Media::Devices::ColorTemperaturePreset const& preset) const;
    uint32_t Min() const;
    uint32_t Max() const;
    uint32_t Step() const;
    uint32_t Value() const;
    Windows::Foundation::IAsyncAction SetValueAsync(uint32_t temperature) const;
};
template <> struct consume<Windows::Media::Devices::IWhiteBalanceControl> { template <typename D> using type = consume_Windows_Media_Devices_IWhiteBalanceControl<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IZoomControl
{
    bool Supported() const;
    float Min() const;
    float Max() const;
    float Step() const;
    float Value() const;
    void Value(float value) const;
};
template <> struct consume<Windows::Media::Devices::IZoomControl> { template <typename D> using type = consume_Windows_Media_Devices_IZoomControl<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IZoomControl2
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::ZoomTransitionMode> SupportedModes() const;
    Windows::Media::Devices::ZoomTransitionMode Mode() const;
    void Configure(Windows::Media::Devices::ZoomSettings const& settings) const;
};
template <> struct consume<Windows::Media::Devices::IZoomControl2> { template <typename D> using type = consume_Windows_Media_Devices_IZoomControl2<D>; };

template <typename D>
struct consume_Windows_Media_Devices_IZoomSettings
{
    Windows::Media::Devices::ZoomTransitionMode Mode() const;
    void Mode(Windows::Media::Devices::ZoomTransitionMode const& value) const;
    float Value() const;
    void Value(float value) const;
};
template <> struct consume<Windows::Media::Devices::IZoomSettings> { template <typename D> using type = consume_Windows_Media_Devices_IZoomSettings<D>; };

template <> struct abi<Windows::Media::Devices::IAdvancedPhotoCaptureSettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Mode(abi_t<Windows::Media::Devices::AdvancedPhotoMode>* value) = 0;
    virtual HRESULT __stdcall put_Mode(abi_t<Windows::Media::Devices::AdvancedPhotoMode> value) = 0;
};};

template <> struct abi<Windows::Media::Devices::IAdvancedPhotoControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Supported(bool* value) = 0;
    virtual HRESULT __stdcall get_SupportedModes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Mode(abi_t<Windows::Media::Devices::AdvancedPhotoMode>* value) = 0;
    virtual HRESULT __stdcall Configure(::IUnknown* settings) = 0;
};};

template <> struct abi<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetDeviceProperty(HSTRING propertyId, ::IUnknown* propertyValue) = 0;
    virtual HRESULT __stdcall GetDeviceProperty(HSTRING propertyId, ::IUnknown** propertyValue) = 0;
};};

template <> struct abi<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LowLagPhotoSequence(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LowLagPhoto(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SceneModeControl(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TorchControl(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FlashControl(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_WhiteBalanceControl(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ExposureControl(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FocusControl(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ExposureCompensationControl(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsoSpeedControl(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RegionsOfInterestControl(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PrimaryUse(abi_t<Windows::Media::Devices::CaptureUse>* value) = 0;
    virtual HRESULT __stdcall put_PrimaryUse(abi_t<Windows::Media::Devices::CaptureUse> value) = 0;
};};

template <> struct abi<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_VariablePhotoSequenceController(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PhotoConfirmationControl(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ZoomControl(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ExposurePriorityVideoControl(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DesiredOptimization(abi_t<Windows::Media::Devices::MediaCaptureOptimization>* value) = 0;
    virtual HRESULT __stdcall put_DesiredOptimization(abi_t<Windows::Media::Devices::MediaCaptureOptimization> value) = 0;
    virtual HRESULT __stdcall get_HdrVideoControl(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_OpticalImageStabilizationControl(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AdvancedPhotoControl(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall GetDevicePropertyById(HSTRING propertyId, ::IUnknown* maxPropertyValueSize, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall SetDevicePropertyById(HSTRING propertyId, ::IUnknown* propertyValue, abi_t<Windows::Media::Devices::VideoDeviceControllerSetDevicePropertyStatus>* value) = 0;
    virtual HRESULT __stdcall GetDevicePropertyByExtendedId(uint32_t __extendedPropertyIdSize, uint8_t* extendedPropertyId, ::IUnknown* maxPropertyValueSize, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall SetDevicePropertyByExtendedId(uint32_t __extendedPropertyIdSize, uint8_t* extendedPropertyId, uint32_t __propertyValueSize, uint8_t* propertyValue, abi_t<Windows::Media::Devices::VideoDeviceControllerSetDevicePropertyStatus>* value) = 0;
};};

template <> struct abi<Windows::Media::Devices::IAudioDeviceController>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_Muted(bool value) = 0;
    virtual HRESULT __stdcall get_Muted(bool* value) = 0;
    virtual HRESULT __stdcall put_VolumePercent(float value) = 0;
    virtual HRESULT __stdcall get_VolumePercent(float* value) = 0;
};};

template <> struct abi<Windows::Media::Devices::IAudioDeviceModule>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ClassId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_InstanceId(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_MajorVersion(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_MinorVersion(uint32_t* value) = 0;
    virtual HRESULT __stdcall SendCommandAsync(::IUnknown* Command, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Module(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NotificationData(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Devices::IAudioDeviceModulesManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_ModuleNotificationReceived(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ModuleNotificationReceived(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall FindAllById(HSTRING moduleId, ::IUnknown** modules) = 0;
    virtual HRESULT __stdcall FindAll(::IUnknown** modules) = 0;
};};

template <> struct abi<Windows::Media::Devices::IAudioDeviceModulesManagerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING deviceId, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Media::Devices::ICallControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IndicateNewIncomingCall(bool enableRinger, HSTRING callerId, uint64_t* callToken) = 0;
    virtual HRESULT __stdcall IndicateNewOutgoingCall(uint64_t* callToken) = 0;
    virtual HRESULT __stdcall IndicateActiveCall(uint64_t callToken) = 0;
    virtual HRESULT __stdcall EndCall(uint64_t callToken) = 0;
    virtual HRESULT __stdcall get_HasRinger(bool* value) = 0;
    virtual HRESULT __stdcall add_AnswerRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_AnswerRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_HangUpRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_HangUpRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_DialRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_DialRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_RedialRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_RedialRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_KeypadPressed(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_KeypadPressed(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_AudioTransferRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_AudioTransferRequested(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Media::Devices::ICallControlStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** callControl) = 0;
    virtual HRESULT __stdcall FromId(HSTRING deviceId, ::IUnknown** callControl) = 0;
};};

template <> struct abi<Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Role(abi_t<Windows::Media::Devices::AudioDeviceRole>* value) = 0;
};};

template <> struct abi<Windows::Media::Devices::IDialRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Handled() = 0;
    virtual HRESULT __stdcall get_Contact(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Devices::IExposureCompensationControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Supported(bool* value) = 0;
    virtual HRESULT __stdcall get_Min(float* value) = 0;
    virtual HRESULT __stdcall get_Max(float* value) = 0;
    virtual HRESULT __stdcall get_Step(float* value) = 0;
    virtual HRESULT __stdcall get_Value(float* value) = 0;
    virtual HRESULT __stdcall SetValueAsync(float value, ::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Media::Devices::IExposureControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Supported(bool* value) = 0;
    virtual HRESULT __stdcall get_Auto(bool* value) = 0;
    virtual HRESULT __stdcall SetAutoAsync(bool value, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall get_Min(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_Max(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_Step(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_Value(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall SetValueAsync(abi_t<Windows::Foundation::TimeSpan> shutterDuration, ::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Media::Devices::IExposurePriorityVideoControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Supported(bool* value) = 0;
    virtual HRESULT __stdcall get_Enabled(bool* value) = 0;
    virtual HRESULT __stdcall put_Enabled(bool value) = 0;
};};

template <> struct abi<Windows::Media::Devices::IFlashControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Supported(bool* value) = 0;
    virtual HRESULT __stdcall get_PowerSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_RedEyeReductionSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_Enabled(bool* value) = 0;
    virtual HRESULT __stdcall put_Enabled(bool value) = 0;
    virtual HRESULT __stdcall get_Auto(bool* value) = 0;
    virtual HRESULT __stdcall put_Auto(bool value) = 0;
    virtual HRESULT __stdcall get_RedEyeReduction(bool* value) = 0;
    virtual HRESULT __stdcall put_RedEyeReduction(bool value) = 0;
    virtual HRESULT __stdcall get_PowerPercent(float* value) = 0;
    virtual HRESULT __stdcall put_PowerPercent(float value) = 0;
};};

template <> struct abi<Windows::Media::Devices::IFlashControl2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AssistantLightSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_AssistantLightEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_AssistantLightEnabled(bool value) = 0;
};};

template <> struct abi<Windows::Media::Devices::IFocusControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Supported(bool* value) = 0;
    virtual HRESULT __stdcall get_SupportedPresets(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Preset(abi_t<Windows::Media::Devices::FocusPreset>* value) = 0;
    virtual HRESULT __stdcall SetPresetAsync(abi_t<Windows::Media::Devices::FocusPreset> preset, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall SetPresetWithCompletionOptionAsync(abi_t<Windows::Media::Devices::FocusPreset> preset, bool completeBeforeFocus, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall get_Min(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Max(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Step(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Value(uint32_t* value) = 0;
    virtual HRESULT __stdcall SetValueAsync(uint32_t focus, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall FocusAsync(::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Media::Devices::IFocusControl2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FocusChangedSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_WaitForFocusSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_SupportedFocusModes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SupportedFocusDistances(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SupportedFocusRanges(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Mode(abi_t<Windows::Media::Devices::FocusMode>* value) = 0;
    virtual HRESULT __stdcall get_FocusState(abi_t<Windows::Media::Devices::MediaCaptureFocusState>* value) = 0;
    virtual HRESULT __stdcall UnlockAsync(::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall LockAsync(::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall Configure(::IUnknown* settings) = 0;
};};

template <> struct abi<Windows::Media::Devices::IFocusSettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Mode(abi_t<Windows::Media::Devices::FocusMode>* value) = 0;
    virtual HRESULT __stdcall put_Mode(abi_t<Windows::Media::Devices::FocusMode> value) = 0;
    virtual HRESULT __stdcall get_AutoFocusRange(abi_t<Windows::Media::Devices::AutoFocusRange>* value) = 0;
    virtual HRESULT __stdcall put_AutoFocusRange(abi_t<Windows::Media::Devices::AutoFocusRange> value) = 0;
    virtual HRESULT __stdcall get_Value(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Value(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Distance(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Distance(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_WaitForFocus(bool* value) = 0;
    virtual HRESULT __stdcall put_WaitForFocus(bool value) = 0;
    virtual HRESULT __stdcall get_DisableDriverFallback(bool* value) = 0;
    virtual HRESULT __stdcall put_DisableDriverFallback(bool value) = 0;
};};

template <> struct abi<Windows::Media::Devices::IHdrVideoControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Supported(bool* value) = 0;
    virtual HRESULT __stdcall get_SupportedModes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Mode(abi_t<Windows::Media::Devices::HdrVideoMode>* value) = 0;
    virtual HRESULT __stdcall put_Mode(abi_t<Windows::Media::Devices::HdrVideoMode> value) = 0;
};};

template <> struct abi<Windows::Media::Devices::IIsoSpeedControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Supported(bool* value) = 0;
    virtual HRESULT __stdcall get_SupportedPresets(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Preset(abi_t<Windows::Media::Devices::IsoSpeedPreset>* value) = 0;
    virtual HRESULT __stdcall SetPresetAsync(abi_t<Windows::Media::Devices::IsoSpeedPreset> preset, ::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Media::Devices::IIsoSpeedControl2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Min(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Max(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Step(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Value(uint32_t* value) = 0;
    virtual HRESULT __stdcall SetValueAsync(uint32_t isoSpeed, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall get_Auto(bool* value) = 0;
    virtual HRESULT __stdcall SetAutoAsync(::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Media::Devices::IKeypadPressedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TelephonyKey(abi_t<Windows::Media::Devices::TelephonyKey>* telephonyKey) = 0;
};};

template <> struct abi<Windows::Media::Devices::ILowLagPhotoControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetHighestConcurrentFrameRate(::IUnknown* captureProperties, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetCurrentFrameRate(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ThumbnailEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_ThumbnailEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_ThumbnailFormat(abi_t<Windows::Media::MediaProperties::MediaThumbnailFormat>* value) = 0;
    virtual HRESULT __stdcall put_ThumbnailFormat(abi_t<Windows::Media::MediaProperties::MediaThumbnailFormat> value) = 0;
    virtual HRESULT __stdcall get_DesiredThumbnailSize(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_DesiredThumbnailSize(uint32_t value) = 0;
    virtual HRESULT __stdcall get_HardwareAcceleratedThumbnailSupported(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Media::Devices::ILowLagPhotoSequenceControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Supported(bool* value) = 0;
    virtual HRESULT __stdcall get_MaxPastPhotos(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_MaxPhotosPerSecond(float* value) = 0;
    virtual HRESULT __stdcall get_PastPhotoLimit(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_PastPhotoLimit(uint32_t value) = 0;
    virtual HRESULT __stdcall get_PhotosPerSecondLimit(float* value) = 0;
    virtual HRESULT __stdcall put_PhotosPerSecondLimit(float value) = 0;
    virtual HRESULT __stdcall GetHighestConcurrentFrameRate(::IUnknown* captureProperties, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetCurrentFrameRate(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ThumbnailEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_ThumbnailEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_ThumbnailFormat(abi_t<Windows::Media::MediaProperties::MediaThumbnailFormat>* value) = 0;
    virtual HRESULT __stdcall put_ThumbnailFormat(abi_t<Windows::Media::MediaProperties::MediaThumbnailFormat> value) = 0;
    virtual HRESULT __stdcall get_DesiredThumbnailSize(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_DesiredThumbnailSize(uint32_t value) = 0;
    virtual HRESULT __stdcall get_HardwareAcceleratedThumbnailSupported(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Media::Devices::IMediaDeviceControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Capabilities(::IUnknown** value) = 0;
    virtual HRESULT __stdcall TryGetValue(double* value, bool* succeeded) = 0;
    virtual HRESULT __stdcall TrySetValue(double value, bool* succeeded) = 0;
    virtual HRESULT __stdcall TryGetAuto(bool* value, bool* succeeded) = 0;
    virtual HRESULT __stdcall TrySetAuto(bool value, bool* succeeded) = 0;
};};

template <> struct abi<Windows::Media::Devices::IMediaDeviceControlCapabilities>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Supported(bool* value) = 0;
    virtual HRESULT __stdcall get_Min(double* value) = 0;
    virtual HRESULT __stdcall get_Max(double* value) = 0;
    virtual HRESULT __stdcall get_Step(double* value) = 0;
    virtual HRESULT __stdcall get_Default(double* value) = 0;
    virtual HRESULT __stdcall get_AutoModeSupported(bool* value) = 0;
};};

template <> struct abi<Windows::Media::Devices::IMediaDeviceController>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetAvailableMediaStreamProperties(abi_t<Windows::Media::Capture::MediaStreamType> mediaStreamType, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetMediaStreamProperties(abi_t<Windows::Media::Capture::MediaStreamType> mediaStreamType, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall SetMediaStreamPropertiesAsync(abi_t<Windows::Media::Capture::MediaStreamType> mediaStreamType, ::IUnknown* mediaEncodingProperties, ::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Media::Devices::IMediaDeviceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetAudioCaptureSelector(HSTRING* selector) = 0;
    virtual HRESULT __stdcall GetAudioRenderSelector(HSTRING* selector) = 0;
    virtual HRESULT __stdcall GetVideoCaptureSelector(HSTRING* selector) = 0;
    virtual HRESULT __stdcall GetDefaultAudioCaptureId(abi_t<Windows::Media::Devices::AudioDeviceRole> role, HSTRING* deviceId) = 0;
    virtual HRESULT __stdcall GetDefaultAudioRenderId(abi_t<Windows::Media::Devices::AudioDeviceRole> role, HSTRING* deviceId) = 0;
    virtual HRESULT __stdcall add_DefaultAudioCaptureDeviceChanged(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_DefaultAudioCaptureDeviceChanged(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_DefaultAudioRenderDeviceChanged(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_DefaultAudioRenderDeviceChanged(abi_t<event_token> cookie) = 0;
};};

template <> struct abi<Windows::Media::Devices::IModuleCommandResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Media::Devices::SendCommandStatus>* value) = 0;
    virtual HRESULT __stdcall get_Result(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Devices::IOpticalImageStabilizationControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Supported(bool* value) = 0;
    virtual HRESULT __stdcall get_SupportedModes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Mode(abi_t<Windows::Media::Devices::OpticalImageStabilizationMode>* value) = 0;
    virtual HRESULT __stdcall put_Mode(abi_t<Windows::Media::Devices::OpticalImageStabilizationMode> value) = 0;
};};

template <> struct abi<Windows::Media::Devices::IPhotoConfirmationControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Supported(bool* pbSupported) = 0;
    virtual HRESULT __stdcall get_Enabled(bool* value) = 0;
    virtual HRESULT __stdcall put_Enabled(bool value) = 0;
    virtual HRESULT __stdcall get_PixelFormat(abi_t<Windows::Media::MediaProperties::MediaPixelFormat>* format) = 0;
    virtual HRESULT __stdcall put_PixelFormat(abi_t<Windows::Media::MediaProperties::MediaPixelFormat> format) = 0;
};};

template <> struct abi<Windows::Media::Devices::IRedialRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Handled() = 0;
};};

template <> struct abi<Windows::Media::Devices::IRegionOfInterest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AutoFocusEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_AutoFocusEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_AutoWhiteBalanceEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_AutoWhiteBalanceEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_AutoExposureEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_AutoExposureEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_Bounds(abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall put_Bounds(abi_t<Windows::Foundation::Rect> value) = 0;
};};

template <> struct abi<Windows::Media::Devices::IRegionOfInterest2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Type(abi_t<Windows::Media::Devices::RegionOfInterestType>* value) = 0;
    virtual HRESULT __stdcall put_Type(abi_t<Windows::Media::Devices::RegionOfInterestType> value) = 0;
    virtual HRESULT __stdcall get_BoundsNormalized(bool* value) = 0;
    virtual HRESULT __stdcall put_BoundsNormalized(bool value) = 0;
    virtual HRESULT __stdcall get_Weight(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_Weight(uint32_t value) = 0;
};};

template <> struct abi<Windows::Media::Devices::IRegionsOfInterestControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MaxRegions(uint32_t* value) = 0;
    virtual HRESULT __stdcall SetRegionsAsync(::IUnknown* regions, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall SetRegionsWithLockAsync(::IUnknown* regions, bool lockValues, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall ClearRegionsAsync(::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall get_AutoFocusSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_AutoWhiteBalanceSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_AutoExposureSupported(bool* value) = 0;
};};

template <> struct abi<Windows::Media::Devices::ISceneModeControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SupportedModes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Value(abi_t<Windows::Media::Devices::CaptureSceneMode>* value) = 0;
    virtual HRESULT __stdcall SetValueAsync(abi_t<Windows::Media::Devices::CaptureSceneMode> sceneMode, ::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Media::Devices::ITorchControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Supported(bool* value) = 0;
    virtual HRESULT __stdcall get_PowerSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_Enabled(bool* value) = 0;
    virtual HRESULT __stdcall put_Enabled(bool value) = 0;
    virtual HRESULT __stdcall get_PowerPercent(float* value) = 0;
    virtual HRESULT __stdcall put_PowerPercent(float value) = 0;
};};

template <> struct abi<Windows::Media::Devices::IVideoDeviceController>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Brightness(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Contrast(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Hue(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_WhiteBalance(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_BacklightCompensation(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Pan(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Tilt(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Zoom(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Roll(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Exposure(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Focus(::IUnknown** value) = 0;
    virtual HRESULT __stdcall TrySetPowerlineFrequency(abi_t<Windows::Media::Capture::PowerlineFrequency> value, bool* succeeded) = 0;
    virtual HRESULT __stdcall TryGetPowerlineFrequency(abi_t<Windows::Media::Capture::PowerlineFrequency>* value, bool* succeeded) = 0;
};};

template <> struct abi<Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyStatus>* value) = 0;
    virtual HRESULT __stdcall get_Value(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Devices::IWhiteBalanceControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Supported(bool* value) = 0;
    virtual HRESULT __stdcall get_Preset(abi_t<Windows::Media::Devices::ColorTemperaturePreset>* value) = 0;
    virtual HRESULT __stdcall SetPresetAsync(abi_t<Windows::Media::Devices::ColorTemperaturePreset> preset, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall get_Min(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Max(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Step(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Value(uint32_t* value) = 0;
    virtual HRESULT __stdcall SetValueAsync(uint32_t temperature, ::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Media::Devices::IZoomControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Supported(bool* value) = 0;
    virtual HRESULT __stdcall get_Min(float* value) = 0;
    virtual HRESULT __stdcall get_Max(float* value) = 0;
    virtual HRESULT __stdcall get_Step(float* value) = 0;
    virtual HRESULT __stdcall get_Value(float* value) = 0;
    virtual HRESULT __stdcall put_Value(float value) = 0;
};};

template <> struct abi<Windows::Media::Devices::IZoomControl2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SupportedModes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Mode(abi_t<Windows::Media::Devices::ZoomTransitionMode>* value) = 0;
    virtual HRESULT __stdcall Configure(::IUnknown* settings) = 0;
};};

template <> struct abi<Windows::Media::Devices::IZoomSettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Mode(abi_t<Windows::Media::Devices::ZoomTransitionMode>* value) = 0;
    virtual HRESULT __stdcall put_Mode(abi_t<Windows::Media::Devices::ZoomTransitionMode> value) = 0;
    virtual HRESULT __stdcall get_Value(float* value) = 0;
    virtual HRESULT __stdcall put_Value(float value) = 0;
};};

template <> struct abi<Windows::Media::Devices::CallControlEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender) = 0;
};};

template <> struct abi<Windows::Media::Devices::DialRequestedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::Media::Devices::KeypadPressedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::Media::Devices::RedialRequestedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

}
