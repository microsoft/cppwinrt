// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Media::Capture {

struct WhiteBalanceGain;

}

namespace Windows::Media::Capture {

using WhiteBalanceGain = ABI::Windows::Media::Capture::WhiteBalanceGain;

}

namespace ABI::Windows::Media::Capture {

struct IAdvancedCapturedPhoto;
struct IAdvancedCapturedPhoto2;
struct IAdvancedPhotoCapture;
struct IAppBroadcastBackgroundService;
struct IAppBroadcastBackgroundServiceSignInInfo;
struct IAppBroadcastBackgroundServiceStreamInfo;
struct IAppBroadcastCameraCaptureStateChangedEventArgs;
struct IAppBroadcastGlobalSettings;
struct IAppBroadcastHeartbeatRequestedEventArgs;
struct IAppBroadcastManagerStatics;
struct IAppBroadcastMicrophoneCaptureStateChangedEventArgs;
struct IAppBroadcastPlugIn;
struct IAppBroadcastPlugInManager;
struct IAppBroadcastPlugInManagerStatics;
struct IAppBroadcastPlugInStateChangedEventArgs;
struct IAppBroadcastPreview;
struct IAppBroadcastPreviewStateChangedEventArgs;
struct IAppBroadcastPreviewStreamReader;
struct IAppBroadcastPreviewStreamVideoFrame;
struct IAppBroadcastPreviewStreamVideoHeader;
struct IAppBroadcastProviderSettings;
struct IAppBroadcastServices;
struct IAppBroadcastSignInStateChangedEventArgs;
struct IAppBroadcastState;
struct IAppBroadcastStreamAudioFrame;
struct IAppBroadcastStreamAudioHeader;
struct IAppBroadcastStreamReader;
struct IAppBroadcastStreamStateChangedEventArgs;
struct IAppBroadcastStreamVideoFrame;
struct IAppBroadcastStreamVideoHeader;
struct IAppBroadcastTriggerDetails;
struct IAppBroadcastViewerCountChangedEventArgs;
struct IAppCapture;
struct IAppCaptureAlternateShortcutKeys;
struct IAppCaptureAlternateShortcutKeys2;
struct IAppCaptureAlternateShortcutKeys3;
struct IAppCaptureDurationGeneratedEventArgs;
struct IAppCaptureFileGeneratedEventArgs;
struct IAppCaptureManagerStatics;
struct IAppCaptureMicrophoneCaptureStateChangedEventArgs;
struct IAppCaptureRecordOperation;
struct IAppCaptureRecordingStateChangedEventArgs;
struct IAppCaptureServices;
struct IAppCaptureSettings;
struct IAppCaptureSettings2;
struct IAppCaptureSettings3;
struct IAppCaptureSettings4;
struct IAppCaptureSettings5;
struct IAppCaptureState;
struct IAppCaptureStatics;
struct ICameraCaptureUI;
struct ICameraCaptureUIPhotoCaptureSettings;
struct ICameraCaptureUIVideoCaptureSettings;
struct ICameraOptionsUIStatics;
struct ICapturedFrame;
struct ICapturedFrameControlValues;
struct ICapturedFrameControlValues2;
struct ICapturedFrameWithSoftwareBitmap;
struct ICapturedPhoto;
struct IGameBarServices;
struct IGameBarServicesCommandEventArgs;
struct IGameBarServicesManager;
struct IGameBarServicesManagerGameBarServicesCreatedEventArgs;
struct IGameBarServicesManagerStatics;
struct IGameBarServicesTargetInfo;
struct ILowLagMediaRecording;
struct ILowLagMediaRecording2;
struct ILowLagMediaRecording3;
struct ILowLagPhotoCapture;
struct ILowLagPhotoSequenceCapture;
struct IMediaCapture;
struct IMediaCapture2;
struct IMediaCapture3;
struct IMediaCapture4;
struct IMediaCapture5;
struct IMediaCapture6;
struct IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs;
struct IMediaCaptureFailedEventArgs;
struct IMediaCaptureFocusChangedEventArgs;
struct IMediaCaptureInitializationSettings;
struct IMediaCaptureInitializationSettings2;
struct IMediaCaptureInitializationSettings3;
struct IMediaCaptureInitializationSettings4;
struct IMediaCaptureInitializationSettings5;
struct IMediaCaptureInitializationSettings6;
struct IMediaCapturePauseResult;
struct IMediaCaptureSettings;
struct IMediaCaptureSettings2;
struct IMediaCaptureStatics;
struct IMediaCaptureStopResult;
struct IMediaCaptureVideoPreview;
struct IMediaCaptureVideoProfile;
struct IMediaCaptureVideoProfileMediaDescription;
struct IOptionalReferencePhotoCapturedEventArgs;
struct IPhotoCapturedEventArgs;
struct IPhotoConfirmationCapturedEventArgs;
struct IScreenCapture;
struct IScreenCaptureStatics;
struct ISourceSuspensionChangedEventArgs;
struct IVideoStreamConfiguration;
struct MediaCaptureFailedEventHandler;
struct RecordLimitationExceededEventHandler;
struct AdvancedCapturedPhoto;
struct AdvancedPhotoCapture;
struct AppBroadcastBackgroundService;
struct AppBroadcastBackgroundServiceSignInInfo;
struct AppBroadcastBackgroundServiceStreamInfo;
struct AppBroadcastCameraCaptureStateChangedEventArgs;
struct AppBroadcastGlobalSettings;
struct AppBroadcastHeartbeatRequestedEventArgs;
struct AppBroadcastMicrophoneCaptureStateChangedEventArgs;
struct AppBroadcastPlugIn;
struct AppBroadcastPlugInManager;
struct AppBroadcastPlugInStateChangedEventArgs;
struct AppBroadcastPreview;
struct AppBroadcastPreviewStateChangedEventArgs;
struct AppBroadcastPreviewStreamReader;
struct AppBroadcastPreviewStreamVideoFrame;
struct AppBroadcastPreviewStreamVideoHeader;
struct AppBroadcastProviderSettings;
struct AppBroadcastServices;
struct AppBroadcastSignInStateChangedEventArgs;
struct AppBroadcastState;
struct AppBroadcastStreamAudioFrame;
struct AppBroadcastStreamAudioHeader;
struct AppBroadcastStreamReader;
struct AppBroadcastStreamStateChangedEventArgs;
struct AppBroadcastStreamVideoFrame;
struct AppBroadcastStreamVideoHeader;
struct AppBroadcastTriggerDetails;
struct AppBroadcastViewerCountChangedEventArgs;
struct AppCapture;
struct AppCaptureAlternateShortcutKeys;
struct AppCaptureDurationGeneratedEventArgs;
struct AppCaptureFileGeneratedEventArgs;
struct AppCaptureMicrophoneCaptureStateChangedEventArgs;
struct AppCaptureRecordOperation;
struct AppCaptureRecordingStateChangedEventArgs;
struct AppCaptureServices;
struct AppCaptureSettings;
struct AppCaptureState;
struct CameraCaptureUI;
struct CameraCaptureUIPhotoCaptureSettings;
struct CameraCaptureUIVideoCaptureSettings;
struct CapturedFrame;
struct CapturedFrameControlValues;
struct CapturedPhoto;
struct GameBarServices;
struct GameBarServicesCommandEventArgs;
struct GameBarServicesManager;
struct GameBarServicesManagerGameBarServicesCreatedEventArgs;
struct GameBarServicesTargetInfo;
struct LowLagMediaRecording;
struct LowLagPhotoCapture;
struct LowLagPhotoSequenceCapture;
struct MediaCapture;
struct MediaCaptureDeviceExclusiveControlStatusChangedEventArgs;
struct MediaCaptureFailedEventArgs;
struct MediaCaptureFocusChangedEventArgs;
struct MediaCaptureInitializationSettings;
struct MediaCapturePauseResult;
struct MediaCaptureSettings;
struct MediaCaptureStopResult;
struct MediaCaptureVideoProfile;
struct MediaCaptureVideoProfileMediaDescription;
struct OptionalReferencePhotoCapturedEventArgs;
struct PhotoCapturedEventArgs;
struct PhotoConfirmationCapturedEventArgs;
struct ScreenCapture;
struct SourceSuspensionChangedEventArgs;
struct VideoStreamConfiguration;

}

namespace Windows::Media::Capture {

struct MediaCaptureFailedEventHandler;
struct RecordLimitationExceededEventHandler;
struct IAdvancedCapturedPhoto;
struct IAdvancedCapturedPhoto2;
struct IAdvancedPhotoCapture;
struct IAppBroadcastBackgroundService;
struct IAppBroadcastBackgroundServiceSignInInfo;
struct IAppBroadcastBackgroundServiceStreamInfo;
struct IAppBroadcastCameraCaptureStateChangedEventArgs;
struct IAppBroadcastGlobalSettings;
struct IAppBroadcastHeartbeatRequestedEventArgs;
struct IAppBroadcastManagerStatics;
struct IAppBroadcastMicrophoneCaptureStateChangedEventArgs;
struct IAppBroadcastPlugIn;
struct IAppBroadcastPlugInManager;
struct IAppBroadcastPlugInManagerStatics;
struct IAppBroadcastPlugInStateChangedEventArgs;
struct IAppBroadcastPreview;
struct IAppBroadcastPreviewStateChangedEventArgs;
struct IAppBroadcastPreviewStreamReader;
struct IAppBroadcastPreviewStreamVideoFrame;
struct IAppBroadcastPreviewStreamVideoHeader;
struct IAppBroadcastProviderSettings;
struct IAppBroadcastServices;
struct IAppBroadcastSignInStateChangedEventArgs;
struct IAppBroadcastState;
struct IAppBroadcastStreamAudioFrame;
struct IAppBroadcastStreamAudioHeader;
struct IAppBroadcastStreamReader;
struct IAppBroadcastStreamStateChangedEventArgs;
struct IAppBroadcastStreamVideoFrame;
struct IAppBroadcastStreamVideoHeader;
struct IAppBroadcastTriggerDetails;
struct IAppBroadcastViewerCountChangedEventArgs;
struct IAppCapture;
struct IAppCaptureAlternateShortcutKeys;
struct IAppCaptureAlternateShortcutKeys2;
struct IAppCaptureAlternateShortcutKeys3;
struct IAppCaptureDurationGeneratedEventArgs;
struct IAppCaptureFileGeneratedEventArgs;
struct IAppCaptureManagerStatics;
struct IAppCaptureMicrophoneCaptureStateChangedEventArgs;
struct IAppCaptureRecordOperation;
struct IAppCaptureRecordingStateChangedEventArgs;
struct IAppCaptureServices;
struct IAppCaptureSettings;
struct IAppCaptureSettings2;
struct IAppCaptureSettings3;
struct IAppCaptureSettings4;
struct IAppCaptureSettings5;
struct IAppCaptureState;
struct IAppCaptureStatics;
struct ICameraCaptureUI;
struct ICameraCaptureUIPhotoCaptureSettings;
struct ICameraCaptureUIVideoCaptureSettings;
struct ICameraOptionsUIStatics;
struct ICapturedFrame;
struct ICapturedFrameControlValues;
struct ICapturedFrameControlValues2;
struct ICapturedFrameWithSoftwareBitmap;
struct ICapturedPhoto;
struct IGameBarServices;
struct IGameBarServicesCommandEventArgs;
struct IGameBarServicesManager;
struct IGameBarServicesManagerGameBarServicesCreatedEventArgs;
struct IGameBarServicesManagerStatics;
struct IGameBarServicesTargetInfo;
struct ILowLagMediaRecording;
struct ILowLagMediaRecording2;
struct ILowLagMediaRecording3;
struct ILowLagPhotoCapture;
struct ILowLagPhotoSequenceCapture;
struct IMediaCapture;
struct IMediaCapture2;
struct IMediaCapture3;
struct IMediaCapture4;
struct IMediaCapture5;
struct IMediaCapture6;
struct IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs;
struct IMediaCaptureFailedEventArgs;
struct IMediaCaptureFocusChangedEventArgs;
struct IMediaCaptureInitializationSettings;
struct IMediaCaptureInitializationSettings2;
struct IMediaCaptureInitializationSettings3;
struct IMediaCaptureInitializationSettings4;
struct IMediaCaptureInitializationSettings5;
struct IMediaCaptureInitializationSettings6;
struct IMediaCapturePauseResult;
struct IMediaCaptureSettings;
struct IMediaCaptureSettings2;
struct IMediaCaptureStatics;
struct IMediaCaptureStopResult;
struct IMediaCaptureVideoPreview;
struct IMediaCaptureVideoProfile;
struct IMediaCaptureVideoProfileMediaDescription;
struct IOptionalReferencePhotoCapturedEventArgs;
struct IPhotoCapturedEventArgs;
struct IPhotoConfirmationCapturedEventArgs;
struct IScreenCapture;
struct IScreenCaptureStatics;
struct ISourceSuspensionChangedEventArgs;
struct IVideoStreamConfiguration;
struct AdvancedCapturedPhoto;
struct AdvancedPhotoCapture;
struct AppBroadcastBackgroundService;
struct AppBroadcastBackgroundServiceSignInInfo;
struct AppBroadcastBackgroundServiceStreamInfo;
struct AppBroadcastCameraCaptureStateChangedEventArgs;
struct AppBroadcastGlobalSettings;
struct AppBroadcastHeartbeatRequestedEventArgs;
struct AppBroadcastManager;
struct AppBroadcastMicrophoneCaptureStateChangedEventArgs;
struct AppBroadcastPlugIn;
struct AppBroadcastPlugInManager;
struct AppBroadcastPlugInStateChangedEventArgs;
struct AppBroadcastPreview;
struct AppBroadcastPreviewStateChangedEventArgs;
struct AppBroadcastPreviewStreamReader;
struct AppBroadcastPreviewStreamVideoFrame;
struct AppBroadcastPreviewStreamVideoHeader;
struct AppBroadcastProviderSettings;
struct AppBroadcastServices;
struct AppBroadcastSignInStateChangedEventArgs;
struct AppBroadcastState;
struct AppBroadcastStreamAudioFrame;
struct AppBroadcastStreamAudioHeader;
struct AppBroadcastStreamReader;
struct AppBroadcastStreamStateChangedEventArgs;
struct AppBroadcastStreamVideoFrame;
struct AppBroadcastStreamVideoHeader;
struct AppBroadcastTriggerDetails;
struct AppBroadcastViewerCountChangedEventArgs;
struct AppCapture;
struct AppCaptureAlternateShortcutKeys;
struct AppCaptureDurationGeneratedEventArgs;
struct AppCaptureFileGeneratedEventArgs;
struct AppCaptureManager;
struct AppCaptureMicrophoneCaptureStateChangedEventArgs;
struct AppCaptureRecordOperation;
struct AppCaptureRecordingStateChangedEventArgs;
struct AppCaptureServices;
struct AppCaptureSettings;
struct AppCaptureState;
struct CameraCaptureUI;
struct CameraCaptureUIPhotoCaptureSettings;
struct CameraCaptureUIVideoCaptureSettings;
struct CameraOptionsUI;
struct CapturedFrame;
struct CapturedFrameControlValues;
struct CapturedPhoto;
struct GameBarServices;
struct GameBarServicesCommandEventArgs;
struct GameBarServicesManager;
struct GameBarServicesManagerGameBarServicesCreatedEventArgs;
struct GameBarServicesTargetInfo;
struct LowLagMediaRecording;
struct LowLagPhotoCapture;
struct LowLagPhotoSequenceCapture;
struct MediaCapture;
struct MediaCaptureDeviceExclusiveControlStatusChangedEventArgs;
struct MediaCaptureFailedEventArgs;
struct MediaCaptureFocusChangedEventArgs;
struct MediaCaptureInitializationSettings;
struct MediaCapturePauseResult;
struct MediaCaptureSettings;
struct MediaCaptureStopResult;
struct MediaCaptureVideoProfile;
struct MediaCaptureVideoProfileMediaDescription;
struct OptionalReferencePhotoCapturedEventArgs;
struct PhotoCapturedEventArgs;
struct PhotoConfirmationCapturedEventArgs;
struct ScreenCapture;
struct SourceSuspensionChangedEventArgs;
struct VideoStreamConfiguration;

}

namespace Windows::Media::Capture {

template <typename T> struct impl_IAdvancedCapturedPhoto;
template <typename T> struct impl_IAdvancedCapturedPhoto2;
template <typename T> struct impl_IAdvancedPhotoCapture;
template <typename T> struct impl_IAppBroadcastBackgroundService;
template <typename T> struct impl_IAppBroadcastBackgroundServiceSignInInfo;
template <typename T> struct impl_IAppBroadcastBackgroundServiceStreamInfo;
template <typename T> struct impl_IAppBroadcastCameraCaptureStateChangedEventArgs;
template <typename T> struct impl_IAppBroadcastGlobalSettings;
template <typename T> struct impl_IAppBroadcastHeartbeatRequestedEventArgs;
template <typename T> struct impl_IAppBroadcastManagerStatics;
template <typename T> struct impl_IAppBroadcastMicrophoneCaptureStateChangedEventArgs;
template <typename T> struct impl_IAppBroadcastPlugIn;
template <typename T> struct impl_IAppBroadcastPlugInManager;
template <typename T> struct impl_IAppBroadcastPlugInManagerStatics;
template <typename T> struct impl_IAppBroadcastPlugInStateChangedEventArgs;
template <typename T> struct impl_IAppBroadcastPreview;
template <typename T> struct impl_IAppBroadcastPreviewStateChangedEventArgs;
template <typename T> struct impl_IAppBroadcastPreviewStreamReader;
template <typename T> struct impl_IAppBroadcastPreviewStreamVideoFrame;
template <typename T> struct impl_IAppBroadcastPreviewStreamVideoHeader;
template <typename T> struct impl_IAppBroadcastProviderSettings;
template <typename T> struct impl_IAppBroadcastServices;
template <typename T> struct impl_IAppBroadcastSignInStateChangedEventArgs;
template <typename T> struct impl_IAppBroadcastState;
template <typename T> struct impl_IAppBroadcastStreamAudioFrame;
template <typename T> struct impl_IAppBroadcastStreamAudioHeader;
template <typename T> struct impl_IAppBroadcastStreamReader;
template <typename T> struct impl_IAppBroadcastStreamStateChangedEventArgs;
template <typename T> struct impl_IAppBroadcastStreamVideoFrame;
template <typename T> struct impl_IAppBroadcastStreamVideoHeader;
template <typename T> struct impl_IAppBroadcastTriggerDetails;
template <typename T> struct impl_IAppBroadcastViewerCountChangedEventArgs;
template <typename T> struct impl_IAppCapture;
template <typename T> struct impl_IAppCaptureAlternateShortcutKeys;
template <typename T> struct impl_IAppCaptureAlternateShortcutKeys2;
template <typename T> struct impl_IAppCaptureAlternateShortcutKeys3;
template <typename T> struct impl_IAppCaptureDurationGeneratedEventArgs;
template <typename T> struct impl_IAppCaptureFileGeneratedEventArgs;
template <typename T> struct impl_IAppCaptureManagerStatics;
template <typename T> struct impl_IAppCaptureMicrophoneCaptureStateChangedEventArgs;
template <typename T> struct impl_IAppCaptureRecordOperation;
template <typename T> struct impl_IAppCaptureRecordingStateChangedEventArgs;
template <typename T> struct impl_IAppCaptureServices;
template <typename T> struct impl_IAppCaptureSettings;
template <typename T> struct impl_IAppCaptureSettings2;
template <typename T> struct impl_IAppCaptureSettings3;
template <typename T> struct impl_IAppCaptureSettings4;
template <typename T> struct impl_IAppCaptureSettings5;
template <typename T> struct impl_IAppCaptureState;
template <typename T> struct impl_IAppCaptureStatics;
template <typename T> struct impl_ICameraCaptureUI;
template <typename T> struct impl_ICameraCaptureUIPhotoCaptureSettings;
template <typename T> struct impl_ICameraCaptureUIVideoCaptureSettings;
template <typename T> struct impl_ICameraOptionsUIStatics;
template <typename T> struct impl_ICapturedFrame;
template <typename T> struct impl_ICapturedFrameControlValues;
template <typename T> struct impl_ICapturedFrameControlValues2;
template <typename T> struct impl_ICapturedFrameWithSoftwareBitmap;
template <typename T> struct impl_ICapturedPhoto;
template <typename T> struct impl_IGameBarServices;
template <typename T> struct impl_IGameBarServicesCommandEventArgs;
template <typename T> struct impl_IGameBarServicesManager;
template <typename T> struct impl_IGameBarServicesManagerGameBarServicesCreatedEventArgs;
template <typename T> struct impl_IGameBarServicesManagerStatics;
template <typename T> struct impl_IGameBarServicesTargetInfo;
template <typename T> struct impl_ILowLagMediaRecording;
template <typename T> struct impl_ILowLagMediaRecording2;
template <typename T> struct impl_ILowLagMediaRecording3;
template <typename T> struct impl_ILowLagPhotoCapture;
template <typename T> struct impl_ILowLagPhotoSequenceCapture;
template <typename T> struct impl_IMediaCapture;
template <typename T> struct impl_IMediaCapture2;
template <typename T> struct impl_IMediaCapture3;
template <typename T> struct impl_IMediaCapture4;
template <typename T> struct impl_IMediaCapture5;
template <typename T> struct impl_IMediaCapture6;
template <typename T> struct impl_IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs;
template <typename T> struct impl_IMediaCaptureFailedEventArgs;
template <typename T> struct impl_IMediaCaptureFocusChangedEventArgs;
template <typename T> struct impl_IMediaCaptureInitializationSettings;
template <typename T> struct impl_IMediaCaptureInitializationSettings2;
template <typename T> struct impl_IMediaCaptureInitializationSettings3;
template <typename T> struct impl_IMediaCaptureInitializationSettings4;
template <typename T> struct impl_IMediaCaptureInitializationSettings5;
template <typename T> struct impl_IMediaCaptureInitializationSettings6;
template <typename T> struct impl_IMediaCapturePauseResult;
template <typename T> struct impl_IMediaCaptureSettings;
template <typename T> struct impl_IMediaCaptureSettings2;
template <typename T> struct impl_IMediaCaptureStatics;
template <typename T> struct impl_IMediaCaptureStopResult;
template <typename T> struct impl_IMediaCaptureVideoPreview;
template <typename T> struct impl_IMediaCaptureVideoProfile;
template <typename T> struct impl_IMediaCaptureVideoProfileMediaDescription;
template <typename T> struct impl_IOptionalReferencePhotoCapturedEventArgs;
template <typename T> struct impl_IPhotoCapturedEventArgs;
template <typename T> struct impl_IPhotoConfirmationCapturedEventArgs;
template <typename T> struct impl_IScreenCapture;
template <typename T> struct impl_IScreenCaptureStatics;
template <typename T> struct impl_ISourceSuspensionChangedEventArgs;
template <typename T> struct impl_IVideoStreamConfiguration;
template <typename T> struct impl_MediaCaptureFailedEventHandler;
template <typename T> struct impl_RecordLimitationExceededEventHandler;

}

namespace Windows::Media::Capture {

enum class AppBroadcastCameraCaptureState
{
    Stopped = 0,
    Started = 1,
    Failed = 2,
};

enum class AppBroadcastCameraOverlayLocation
{
    TopLeft = 0,
    TopCenter = 1,
    TopRight = 2,
    MiddleLeft = 3,
    MiddleCenter = 4,
    MiddleRight = 5,
    BottomLeft = 6,
    BottomCenter = 7,
    BottomRight = 8,
};

enum class AppBroadcastCameraOverlaySize
{
    Small = 0,
    Medium = 1,
    Large = 2,
};

enum class AppBroadcastCaptureTargetType
{
    AppView = 0,
    EntireDisplay = 1,
};

enum class AppBroadcastExitBroadcastModeReason
{
    NormalExit = 0,
    UserCanceled = 1,
    AuthorizationFail = 2,
    ForegroundAppActivated = 3,
};

enum class AppBroadcastMicrophoneCaptureState
{
    Stopped = 0,
    Started = 1,
    Failed = 2,
};

enum class AppBroadcastPlugInState
{
    Unknown = 0,
    Initialized = 1,
    MicrosoftSignInRequired = 2,
    OAuthSignInRequired = 3,
    ProviderSignInRequired = 4,
    InBandwidthTest = 5,
    ReadyToBroadcast = 6,
};

enum class AppBroadcastPreviewState
{
    Started = 0,
    Stopped = 1,
    Failed = 2,
};

enum class AppBroadcastSignInResult
{
    Success = 0,
    AuthenticationFailed = 1,
    Unauthorized = 2,
    ServiceUnavailable = 3,
    Unknown = 4,
};

enum class AppBroadcastSignInState
{
    NotSignedIn = 0,
    MicrosoftSignInInProgress = 1,
    MicrosoftSignInComplete = 2,
    OAuthSignInInProgress = 3,
    OAuthSignInComplete = 4,
};

enum class AppBroadcastStreamState
{
    Initializing = 0,
    StreamReady = 1,
    Started = 2,
    Paused = 3,
    Terminated = 4,
};

enum class AppBroadcastTerminationReason
{
    NormalTermination = 0,
    LostConnectionToService = 1,
    NoNetworkConnectivity = 2,
    ServiceAbort = 3,
    ServiceError = 4,
    ServiceUnavailable = 5,
    InternalError = 6,
    UnsupportedFormat = 7,
    BackgroundTaskTerminated = 8,
    BackgroundTaskUnresponsive = 9,
};

enum class AppBroadcastVideoEncodingBitrateMode
{
    Custom = 0,
    Auto = 1,
};

enum class AppBroadcastVideoEncodingResolutionMode
{
    Custom = 0,
    Auto = 1,
};

enum class AppCaptureHistoricalBufferLengthUnit
{
    Megabytes = 0,
    Seconds = 1,
};

enum class AppCaptureMicrophoneCaptureState
{
    Stopped = 0,
    Started = 1,
    Failed = 2,
};

enum class AppCaptureRecordingState
{
    InProgress = 0,
    Completed = 1,
    Failed = 2,
};

enum class AppCaptureVideoEncodingBitrateMode
{
    Custom = 0,
    High = 1,
    Standard = 2,
};

enum class AppCaptureVideoEncodingFrameRateMode
{
    Standard = 0,
    High = 1,
};

enum class AppCaptureVideoEncodingResolutionMode
{
    Custom = 0,
    High = 1,
    Standard = 2,
};

enum class CameraCaptureUIMaxPhotoResolution
{
    HighestAvailable = 0,
    VerySmallQvga = 1,
    SmallVga = 2,
    MediumXga = 3,
    Large3M = 4,
    VeryLarge5M = 5,
};

enum class CameraCaptureUIMaxVideoResolution
{
    HighestAvailable = 0,
    LowDefinition = 1,
    StandardDefinition = 2,
    HighDefinition = 3,
};

enum class CameraCaptureUIMode
{
    PhotoOrVideo = 0,
    Photo = 1,
    Video = 2,
};

enum class CameraCaptureUIPhotoFormat
{
    Jpeg = 0,
    Png = 1,
    JpegXR = 2,
};

enum class CameraCaptureUIVideoFormat
{
    Mp4 = 0,
    Wmv = 1,
};

enum class ForegroundActivationArgument
{
    SignInRequired = 0,
    MoreSettings = 1,
};

enum class GameBarCommand
{
    OpenGameBar = 0,
    RecordHistoricalBuffer = 1,
    ToggleStartStopRecord = 2,
    StartRecord = 3,
    StopRecord = 4,
    TakeScreenshot = 5,
    StartBroadcast = 6,
    StopBroadcast = 7,
    PauseBroadcast = 8,
    ResumeBroadcast = 9,
    ToggleStartStopBroadcast = 10,
    ToggleMicrophoneCapture = 11,
    ToggleCameraCapture = 12,
    ToggleRecordingIndicator = 13,
};

enum class GameBarCommandOrigin
{
    ShortcutKey = 0,
    Cortana = 1,
    AppCommand = 2,
};

enum class GameBarServicesDisplayMode
{
    Windowed = 0,
    FullScreenExclusive = 1,
};

enum class GameBarTargetCapturePolicy
{
    EnabledBySystem = 0,
    EnabledByUser = 1,
    NotEnabled = 2,
    ProhibitedBySystem = 3,
    ProhibitedByPublisher = 4,
};

enum class KnownVideoProfile
{
    VideoRecording = 0,
    HighQualityPhoto = 1,
    BalancedVideoAndPhoto = 2,
    VideoConferencing = 3,
    PhotoSequence = 4,
};

enum class MediaCaptureDeviceExclusiveControlStatus
{
    ExclusiveControlAvailable = 0,
    SharedReadOnlyAvailable = 1,
};

enum class MediaCaptureMemoryPreference
{
    Auto = 0,
    Cpu = 1,
};

enum class MediaCaptureSharingMode
{
    ExclusiveControl = 0,
    SharedReadOnly = 1,
};

enum class MediaCaptureThermalStatus
{
    Normal = 0,
    Overheated = 1,
};

enum class MediaCategory
{
    Other = 0,
    Communications = 1,
    Media = 2,
    GameChat = 3,
    Speech = 4,
};

enum class MediaStreamType
{
    VideoPreview = 0,
    VideoRecord = 1,
    Audio = 2,
    Photo = 3,
};

enum class PhotoCaptureSource
{
    Auto = 0,
    VideoPreview = 1,
    Photo = 2,
};

enum class PowerlineFrequency
{
    Disabled = 0,
    FiftyHertz = 1,
    SixtyHertz = 2,
    Auto = 3,
};

enum class StreamingCaptureMode
{
    AudioAndVideo = 0,
    Audio = 1,
    Video = 2,
};

enum class VideoDeviceCharacteristic
{
    AllStreamsIndependent = 0,
    PreviewRecordStreamsIdentical = 1,
    PreviewPhotoStreamsIdentical = 2,
    RecordPhotoStreamsIdentical = 3,
    AllStreamsIdentical = 4,
};

enum class VideoRotation
{
    None = 0,
    Clockwise90Degrees = 1,
    Clockwise180Degrees = 2,
    Clockwise270Degrees = 3,
};

}

}
