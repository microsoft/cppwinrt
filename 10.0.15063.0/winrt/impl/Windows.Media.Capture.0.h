// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct IPropertySet;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging {

enum class BitmapAlphaMode;
enum class BitmapPixelFormat;
struct BitmapSize;
struct SoftwareBitmap;

}

WINRT_EXPORT namespace winrt::Windows::Media {

enum class AudioProcessing;
struct IMediaExtension;
struct VideoFrame;

}

WINRT_EXPORT namespace winrt::Windows::Media::Capture::Core {

struct VariablePhotoSequenceCapture;

}

WINRT_EXPORT namespace winrt::Windows::Media::Capture::Frames {

struct MediaFrameReader;
struct MediaFrameSource;
struct MediaFrameSourceGroup;
struct MultiSourceMediaFrameReader;

}

WINRT_EXPORT namespace winrt::Windows::Media::Core {

struct IMediaSource;

}

WINRT_EXPORT namespace winrt::Windows::Media::Devices {

enum class AdvancedPhotoMode;
enum class CameraStreamState;
enum class CaptureSceneMode;
enum class MediaCaptureFocusState;
enum class MediaCapturePauseBehavior;
struct AudioDeviceController;
struct VideoDeviceController;

}

WINRT_EXPORT namespace winrt::Windows::Media::Effects {

struct IAudioEffectDefinition;
struct IVideoEffectDefinition;

}

WINRT_EXPORT namespace winrt::Windows::Media::MediaProperties {

struct IMediaEncodingProperties;
struct ImageEncodingProperties;
struct MediaEncodingProfile;
struct MediaPropertySet;
struct MediaRatio;
struct VideoEncodingProperties;

}

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Web {

struct WebAuthenticationResult;

}

WINRT_EXPORT namespace winrt::Windows::Storage {

struct IStorageFile;
struct StorageFile;
struct StorageFolder;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

enum class InputStreamOptions : unsigned;
struct IBuffer;
struct IInputStream;
struct IOutputStream;
struct IRandomAccessStream;
struct IRandomAccessStreamReference;

}

WINRT_EXPORT namespace winrt::Windows::System {

enum class VirtualKey;
enum class VirtualKeyModifiers : unsigned;
struct User;

}

WINRT_EXPORT namespace winrt::Windows::Media::Capture {

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
struct WhiteBalanceGain;
struct MediaCaptureFailedEventHandler;
struct RecordLimitationExceededEventHandler;

}

namespace winrt::impl {

template <> struct category<Windows::Media::Capture::IAdvancedCapturedPhoto>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAdvancedCapturedPhoto2>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAdvancedPhotoCapture>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppBroadcastBackgroundService>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppBroadcastGlobalSettings>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppBroadcastManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppBroadcastPlugIn>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppBroadcastPlugInManager>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppBroadcastPlugInManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppBroadcastPreview>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppBroadcastPreviewStreamReader>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppBroadcastProviderSettings>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppBroadcastServices>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppBroadcastState>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppBroadcastStreamAudioFrame>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppBroadcastStreamAudioHeader>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppBroadcastStreamReader>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppBroadcastStreamVideoFrame>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppBroadcastStreamVideoHeader>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppBroadcastTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppCapture>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppCaptureManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppCaptureRecordOperation>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppCaptureServices>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppCaptureSettings>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppCaptureSettings2>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppCaptureSettings3>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppCaptureSettings4>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppCaptureSettings5>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppCaptureState>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IAppCaptureStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::ICameraCaptureUI>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::ICameraOptionsUIStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::ICapturedFrame>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::ICapturedFrameControlValues>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::ICapturedFrameControlValues2>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::ICapturedPhoto>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IGameBarServices>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IGameBarServicesCommandEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IGameBarServicesManager>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IGameBarServicesManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IGameBarServicesTargetInfo>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::ILowLagMediaRecording>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::ILowLagMediaRecording2>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::ILowLagMediaRecording3>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::ILowLagPhotoCapture>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::ILowLagPhotoSequenceCapture>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCapture>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCapture2>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCapture3>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCapture4>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCapture5>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCapture6>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureFailedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureInitializationSettings>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureInitializationSettings2>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureInitializationSettings3>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureInitializationSettings4>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureInitializationSettings5>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureInitializationSettings6>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCapturePauseResult>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureSettings>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureSettings2>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureStopResult>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureVideoPreview>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureVideoProfile>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IPhotoCapturedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IScreenCapture>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IScreenCaptureStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::ISourceSuspensionChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::IVideoStreamConfiguration>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::AdvancedCapturedPhoto>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AdvancedPhotoCapture>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastBackgroundService>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastGlobalSettings>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastManager>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastPlugIn>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastPlugInManager>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastPreview>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastPreviewStreamReader>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastPreviewStreamVideoFrame>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastPreviewStreamVideoHeader>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastProviderSettings>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastServices>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastState>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastStreamAudioFrame>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastStreamAudioHeader>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastStreamReader>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastStreamVideoFrame>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastStreamVideoHeader>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppCapture>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppCaptureAlternateShortcutKeys>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppCaptureFileGeneratedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppCaptureManager>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppCaptureRecordOperation>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppCaptureServices>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppCaptureSettings>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppCaptureState>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::CameraCaptureUI>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::CameraOptionsUI>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::CapturedFrame>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::CapturedFrameControlValues>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::CapturedPhoto>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::GameBarServices>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::GameBarServicesCommandEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::GameBarServicesManager>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::GameBarServicesTargetInfo>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::LowLagMediaRecording>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::LowLagPhotoCapture>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::LowLagPhotoSequenceCapture>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::MediaCapture>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::MediaCaptureFailedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::MediaCaptureFocusChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::MediaCaptureInitializationSettings>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::MediaCapturePauseResult>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::MediaCaptureSettings>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::MediaCaptureStopResult>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::MediaCaptureVideoProfile>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::PhotoCapturedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::PhotoConfirmationCapturedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::ScreenCapture>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::SourceSuspensionChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::VideoStreamConfiguration>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastCameraCaptureState>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastCameraOverlayLocation>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastCameraOverlaySize>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastCaptureTargetType>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastExitBroadcastModeReason>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastMicrophoneCaptureState>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastPlugInState>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastPreviewState>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastSignInResult>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastSignInState>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastStreamState>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastTerminationReason>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::AppCaptureMicrophoneCaptureState>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::AppCaptureRecordingState>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::CameraCaptureUIMaxVideoResolution>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::CameraCaptureUIMode>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::CameraCaptureUIPhotoFormat>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::CameraCaptureUIVideoFormat>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::ForegroundActivationArgument>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::GameBarCommand>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::GameBarCommandOrigin>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::GameBarServicesDisplayMode>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::GameBarTargetCapturePolicy>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::KnownVideoProfile>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatus>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::MediaCaptureMemoryPreference>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::MediaCaptureSharingMode>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::MediaCaptureThermalStatus>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::MediaCategory>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::MediaStreamType>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::PhotoCaptureSource>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::PowerlineFrequency>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::StreamingCaptureMode>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::VideoDeviceCharacteristic>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::VideoRotation>{ using type = enum_category; };
template <> struct category<Windows::Media::Capture::WhiteBalanceGain>{ using type = struct_category<double,double,double>; };
template <> struct category<Windows::Media::Capture::MediaCaptureFailedEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::Media::Capture::RecordLimitationExceededEventHandler>{ using type = delegate_category; };
template <> struct name<Windows::Media::Capture::IAdvancedCapturedPhoto>{ static constexpr auto & value{ L"Windows.Media.Capture.IAdvancedCapturedPhoto" }; };
template <> struct name<Windows::Media::Capture::IAdvancedCapturedPhoto2>{ static constexpr auto & value{ L"Windows.Media.Capture.IAdvancedCapturedPhoto2" }; };
template <> struct name<Windows::Media::Capture::IAdvancedPhotoCapture>{ static constexpr auto & value{ L"Windows.Media.Capture.IAdvancedPhotoCapture" }; };
template <> struct name<Windows::Media::Capture::IAppBroadcastBackgroundService>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastBackgroundService" }; };
template <> struct name<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastBackgroundServiceSignInInfo" }; };
template <> struct name<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastBackgroundServiceStreamInfo" }; };
template <> struct name<Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastCameraCaptureStateChangedEventArgs" }; };
template <> struct name<Windows::Media::Capture::IAppBroadcastGlobalSettings>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastGlobalSettings" }; };
template <> struct name<Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastHeartbeatRequestedEventArgs" }; };
template <> struct name<Windows::Media::Capture::IAppBroadcastManagerStatics>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastManagerStatics" }; };
template <> struct name<Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastMicrophoneCaptureStateChangedEventArgs" }; };
template <> struct name<Windows::Media::Capture::IAppBroadcastPlugIn>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastPlugIn" }; };
template <> struct name<Windows::Media::Capture::IAppBroadcastPlugInManager>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastPlugInManager" }; };
template <> struct name<Windows::Media::Capture::IAppBroadcastPlugInManagerStatics>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastPlugInManagerStatics" }; };
template <> struct name<Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastPlugInStateChangedEventArgs" }; };
template <> struct name<Windows::Media::Capture::IAppBroadcastPreview>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastPreview" }; };
template <> struct name<Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastPreviewStateChangedEventArgs" }; };
template <> struct name<Windows::Media::Capture::IAppBroadcastPreviewStreamReader>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastPreviewStreamReader" }; };
template <> struct name<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastPreviewStreamVideoFrame" }; };
template <> struct name<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastPreviewStreamVideoHeader" }; };
template <> struct name<Windows::Media::Capture::IAppBroadcastProviderSettings>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastProviderSettings" }; };
template <> struct name<Windows::Media::Capture::IAppBroadcastServices>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastServices" }; };
template <> struct name<Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastSignInStateChangedEventArgs" }; };
template <> struct name<Windows::Media::Capture::IAppBroadcastState>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastState" }; };
template <> struct name<Windows::Media::Capture::IAppBroadcastStreamAudioFrame>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastStreamAudioFrame" }; };
template <> struct name<Windows::Media::Capture::IAppBroadcastStreamAudioHeader>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastStreamAudioHeader" }; };
template <> struct name<Windows::Media::Capture::IAppBroadcastStreamReader>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastStreamReader" }; };
template <> struct name<Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastStreamStateChangedEventArgs" }; };
template <> struct name<Windows::Media::Capture::IAppBroadcastStreamVideoFrame>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastStreamVideoFrame" }; };
template <> struct name<Windows::Media::Capture::IAppBroadcastStreamVideoHeader>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastStreamVideoHeader" }; };
template <> struct name<Windows::Media::Capture::IAppBroadcastTriggerDetails>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastTriggerDetails" }; };
template <> struct name<Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppBroadcastViewerCountChangedEventArgs" }; };
template <> struct name<Windows::Media::Capture::IAppCapture>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppCapture" }; };
template <> struct name<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureAlternateShortcutKeys" }; };
template <> struct name<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureAlternateShortcutKeys2" }; };
template <> struct name<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureAlternateShortcutKeys3" }; };
template <> struct name<Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureDurationGeneratedEventArgs" }; };
template <> struct name<Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureFileGeneratedEventArgs" }; };
template <> struct name<Windows::Media::Capture::IAppCaptureManagerStatics>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureManagerStatics" }; };
template <> struct name<Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureMicrophoneCaptureStateChangedEventArgs" }; };
template <> struct name<Windows::Media::Capture::IAppCaptureRecordOperation>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureRecordOperation" }; };
template <> struct name<Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureRecordingStateChangedEventArgs" }; };
template <> struct name<Windows::Media::Capture::IAppCaptureServices>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureServices" }; };
template <> struct name<Windows::Media::Capture::IAppCaptureSettings>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureSettings" }; };
template <> struct name<Windows::Media::Capture::IAppCaptureSettings2>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureSettings2" }; };
template <> struct name<Windows::Media::Capture::IAppCaptureSettings3>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureSettings3" }; };
template <> struct name<Windows::Media::Capture::IAppCaptureSettings4>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureSettings4" }; };
template <> struct name<Windows::Media::Capture::IAppCaptureSettings5>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureSettings5" }; };
template <> struct name<Windows::Media::Capture::IAppCaptureState>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureState" }; };
template <> struct name<Windows::Media::Capture::IAppCaptureStatics>{ static constexpr auto & value{ L"Windows.Media.Capture.IAppCaptureStatics" }; };
template <> struct name<Windows::Media::Capture::ICameraCaptureUI>{ static constexpr auto & value{ L"Windows.Media.Capture.ICameraCaptureUI" }; };
template <> struct name<Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings>{ static constexpr auto & value{ L"Windows.Media.Capture.ICameraCaptureUIPhotoCaptureSettings" }; };
template <> struct name<Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings>{ static constexpr auto & value{ L"Windows.Media.Capture.ICameraCaptureUIVideoCaptureSettings" }; };
template <> struct name<Windows::Media::Capture::ICameraOptionsUIStatics>{ static constexpr auto & value{ L"Windows.Media.Capture.ICameraOptionsUIStatics" }; };
template <> struct name<Windows::Media::Capture::ICapturedFrame>{ static constexpr auto & value{ L"Windows.Media.Capture.ICapturedFrame" }; };
template <> struct name<Windows::Media::Capture::ICapturedFrameControlValues>{ static constexpr auto & value{ L"Windows.Media.Capture.ICapturedFrameControlValues" }; };
template <> struct name<Windows::Media::Capture::ICapturedFrameControlValues2>{ static constexpr auto & value{ L"Windows.Media.Capture.ICapturedFrameControlValues2" }; };
template <> struct name<Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap>{ static constexpr auto & value{ L"Windows.Media.Capture.ICapturedFrameWithSoftwareBitmap" }; };
template <> struct name<Windows::Media::Capture::ICapturedPhoto>{ static constexpr auto & value{ L"Windows.Media.Capture.ICapturedPhoto" }; };
template <> struct name<Windows::Media::Capture::IGameBarServices>{ static constexpr auto & value{ L"Windows.Media.Capture.IGameBarServices" }; };
template <> struct name<Windows::Media::Capture::IGameBarServicesCommandEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.IGameBarServicesCommandEventArgs" }; };
template <> struct name<Windows::Media::Capture::IGameBarServicesManager>{ static constexpr auto & value{ L"Windows.Media.Capture.IGameBarServicesManager" }; };
template <> struct name<Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.IGameBarServicesManagerGameBarServicesCreatedEventArgs" }; };
template <> struct name<Windows::Media::Capture::IGameBarServicesManagerStatics>{ static constexpr auto & value{ L"Windows.Media.Capture.IGameBarServicesManagerStatics" }; };
template <> struct name<Windows::Media::Capture::IGameBarServicesTargetInfo>{ static constexpr auto & value{ L"Windows.Media.Capture.IGameBarServicesTargetInfo" }; };
template <> struct name<Windows::Media::Capture::ILowLagMediaRecording>{ static constexpr auto & value{ L"Windows.Media.Capture.ILowLagMediaRecording" }; };
template <> struct name<Windows::Media::Capture::ILowLagMediaRecording2>{ static constexpr auto & value{ L"Windows.Media.Capture.ILowLagMediaRecording2" }; };
template <> struct name<Windows::Media::Capture::ILowLagMediaRecording3>{ static constexpr auto & value{ L"Windows.Media.Capture.ILowLagMediaRecording3" }; };
template <> struct name<Windows::Media::Capture::ILowLagPhotoCapture>{ static constexpr auto & value{ L"Windows.Media.Capture.ILowLagPhotoCapture" }; };
template <> struct name<Windows::Media::Capture::ILowLagPhotoSequenceCapture>{ static constexpr auto & value{ L"Windows.Media.Capture.ILowLagPhotoSequenceCapture" }; };
template <> struct name<Windows::Media::Capture::IMediaCapture>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCapture" }; };
template <> struct name<Windows::Media::Capture::IMediaCapture2>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCapture2" }; };
template <> struct name<Windows::Media::Capture::IMediaCapture3>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCapture3" }; };
template <> struct name<Windows::Media::Capture::IMediaCapture4>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCapture4" }; };
template <> struct name<Windows::Media::Capture::IMediaCapture5>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCapture5" }; };
template <> struct name<Windows::Media::Capture::IMediaCapture6>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCapture6" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureFailedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureFailedEventArgs" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureFocusChangedEventArgs" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureInitializationSettings>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureInitializationSettings" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureInitializationSettings2>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureInitializationSettings2" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureInitializationSettings3>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureInitializationSettings3" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureInitializationSettings4>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureInitializationSettings4" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureInitializationSettings5>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureInitializationSettings5" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureInitializationSettings6>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureInitializationSettings6" }; };
template <> struct name<Windows::Media::Capture::IMediaCapturePauseResult>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCapturePauseResult" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureSettings>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureSettings" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureSettings2>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureSettings2" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureStatics>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureStatics" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureStopResult>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureStopResult" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureVideoPreview>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureVideoPreview" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureVideoProfile>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureVideoProfile" }; };
template <> struct name<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription>{ static constexpr auto & value{ L"Windows.Media.Capture.IMediaCaptureVideoProfileMediaDescription" }; };
template <> struct name<Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.IOptionalReferencePhotoCapturedEventArgs" }; };
template <> struct name<Windows::Media::Capture::IPhotoCapturedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.IPhotoCapturedEventArgs" }; };
template <> struct name<Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.IPhotoConfirmationCapturedEventArgs" }; };
template <> struct name<Windows::Media::Capture::IScreenCapture>{ static constexpr auto & value{ L"Windows.Media.Capture.IScreenCapture" }; };
template <> struct name<Windows::Media::Capture::IScreenCaptureStatics>{ static constexpr auto & value{ L"Windows.Media.Capture.IScreenCaptureStatics" }; };
template <> struct name<Windows::Media::Capture::ISourceSuspensionChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.ISourceSuspensionChangedEventArgs" }; };
template <> struct name<Windows::Media::Capture::IVideoStreamConfiguration>{ static constexpr auto & value{ L"Windows.Media.Capture.IVideoStreamConfiguration" }; };
template <> struct name<Windows::Media::Capture::AdvancedCapturedPhoto>{ static constexpr auto & value{ L"Windows.Media.Capture.AdvancedCapturedPhoto" }; };
template <> struct name<Windows::Media::Capture::AdvancedPhotoCapture>{ static constexpr auto & value{ L"Windows.Media.Capture.AdvancedPhotoCapture" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastBackgroundService>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastBackgroundService" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastBackgroundServiceSignInInfo" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastBackgroundServiceStreamInfo" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastCameraCaptureStateChangedEventArgs" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastGlobalSettings>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastGlobalSettings" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastHeartbeatRequestedEventArgs" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastManager>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastManager" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastMicrophoneCaptureStateChangedEventArgs" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastPlugIn>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastPlugIn" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastPlugInManager>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastPlugInManager" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastPlugInStateChangedEventArgs" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastPreview>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastPreview" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastPreviewStateChangedEventArgs" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastPreviewStreamReader>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastPreviewStreamReader" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastPreviewStreamVideoFrame>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastPreviewStreamVideoFrame" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastPreviewStreamVideoHeader>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastPreviewStreamVideoHeader" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastProviderSettings>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastProviderSettings" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastServices>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastServices" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastSignInStateChangedEventArgs" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastState>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastState" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastStreamAudioFrame>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastStreamAudioFrame" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastStreamAudioHeader>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastStreamAudioHeader" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastStreamReader>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastStreamReader" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastStreamStateChangedEventArgs" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastStreamVideoFrame>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastStreamVideoFrame" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastStreamVideoHeader>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastStreamVideoHeader" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastTriggerDetails>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastTriggerDetails" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastViewerCountChangedEventArgs" }; };
template <> struct name<Windows::Media::Capture::AppCapture>{ static constexpr auto & value{ L"Windows.Media.Capture.AppCapture" }; };
template <> struct name<Windows::Media::Capture::AppCaptureAlternateShortcutKeys>{ static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureAlternateShortcutKeys" }; };
template <> struct name<Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureDurationGeneratedEventArgs" }; };
template <> struct name<Windows::Media::Capture::AppCaptureFileGeneratedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureFileGeneratedEventArgs" }; };
template <> struct name<Windows::Media::Capture::AppCaptureManager>{ static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureManager" }; };
template <> struct name<Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureMicrophoneCaptureStateChangedEventArgs" }; };
template <> struct name<Windows::Media::Capture::AppCaptureRecordOperation>{ static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureRecordOperation" }; };
template <> struct name<Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureRecordingStateChangedEventArgs" }; };
template <> struct name<Windows::Media::Capture::AppCaptureServices>{ static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureServices" }; };
template <> struct name<Windows::Media::Capture::AppCaptureSettings>{ static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureSettings" }; };
template <> struct name<Windows::Media::Capture::AppCaptureState>{ static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureState" }; };
template <> struct name<Windows::Media::Capture::CameraCaptureUI>{ static constexpr auto & value{ L"Windows.Media.Capture.CameraCaptureUI" }; };
template <> struct name<Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings>{ static constexpr auto & value{ L"Windows.Media.Capture.CameraCaptureUIPhotoCaptureSettings" }; };
template <> struct name<Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings>{ static constexpr auto & value{ L"Windows.Media.Capture.CameraCaptureUIVideoCaptureSettings" }; };
template <> struct name<Windows::Media::Capture::CameraOptionsUI>{ static constexpr auto & value{ L"Windows.Media.Capture.CameraOptionsUI" }; };
template <> struct name<Windows::Media::Capture::CapturedFrame>{ static constexpr auto & value{ L"Windows.Media.Capture.CapturedFrame" }; };
template <> struct name<Windows::Media::Capture::CapturedFrameControlValues>{ static constexpr auto & value{ L"Windows.Media.Capture.CapturedFrameControlValues" }; };
template <> struct name<Windows::Media::Capture::CapturedPhoto>{ static constexpr auto & value{ L"Windows.Media.Capture.CapturedPhoto" }; };
template <> struct name<Windows::Media::Capture::GameBarServices>{ static constexpr auto & value{ L"Windows.Media.Capture.GameBarServices" }; };
template <> struct name<Windows::Media::Capture::GameBarServicesCommandEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.GameBarServicesCommandEventArgs" }; };
template <> struct name<Windows::Media::Capture::GameBarServicesManager>{ static constexpr auto & value{ L"Windows.Media.Capture.GameBarServicesManager" }; };
template <> struct name<Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.GameBarServicesManagerGameBarServicesCreatedEventArgs" }; };
template <> struct name<Windows::Media::Capture::GameBarServicesTargetInfo>{ static constexpr auto & value{ L"Windows.Media.Capture.GameBarServicesTargetInfo" }; };
template <> struct name<Windows::Media::Capture::LowLagMediaRecording>{ static constexpr auto & value{ L"Windows.Media.Capture.LowLagMediaRecording" }; };
template <> struct name<Windows::Media::Capture::LowLagPhotoCapture>{ static constexpr auto & value{ L"Windows.Media.Capture.LowLagPhotoCapture" }; };
template <> struct name<Windows::Media::Capture::LowLagPhotoSequenceCapture>{ static constexpr auto & value{ L"Windows.Media.Capture.LowLagPhotoSequenceCapture" }; };
template <> struct name<Windows::Media::Capture::MediaCapture>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCapture" }; };
template <> struct name<Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureDeviceExclusiveControlStatusChangedEventArgs" }; };
template <> struct name<Windows::Media::Capture::MediaCaptureFailedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureFailedEventArgs" }; };
template <> struct name<Windows::Media::Capture::MediaCaptureFocusChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureFocusChangedEventArgs" }; };
template <> struct name<Windows::Media::Capture::MediaCaptureInitializationSettings>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureInitializationSettings" }; };
template <> struct name<Windows::Media::Capture::MediaCapturePauseResult>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCapturePauseResult" }; };
template <> struct name<Windows::Media::Capture::MediaCaptureSettings>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureSettings" }; };
template <> struct name<Windows::Media::Capture::MediaCaptureStopResult>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureStopResult" }; };
template <> struct name<Windows::Media::Capture::MediaCaptureVideoProfile>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureVideoProfile" }; };
template <> struct name<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureVideoProfileMediaDescription" }; };
template <> struct name<Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.OptionalReferencePhotoCapturedEventArgs" }; };
template <> struct name<Windows::Media::Capture::PhotoCapturedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.PhotoCapturedEventArgs" }; };
template <> struct name<Windows::Media::Capture::PhotoConfirmationCapturedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.PhotoConfirmationCapturedEventArgs" }; };
template <> struct name<Windows::Media::Capture::ScreenCapture>{ static constexpr auto & value{ L"Windows.Media.Capture.ScreenCapture" }; };
template <> struct name<Windows::Media::Capture::SourceSuspensionChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.SourceSuspensionChangedEventArgs" }; };
template <> struct name<Windows::Media::Capture::VideoStreamConfiguration>{ static constexpr auto & value{ L"Windows.Media.Capture.VideoStreamConfiguration" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastCameraCaptureState>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastCameraCaptureState" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastCameraOverlayLocation>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastCameraOverlayLocation" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastCameraOverlaySize>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastCameraOverlaySize" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastCaptureTargetType>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastCaptureTargetType" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastExitBroadcastModeReason>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastExitBroadcastModeReason" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastMicrophoneCaptureState>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastMicrophoneCaptureState" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastPlugInState>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastPlugInState" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastPreviewState>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastPreviewState" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastSignInResult>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastSignInResult" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastSignInState>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastSignInState" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastStreamState>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastStreamState" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastTerminationReason>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastTerminationReason" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastVideoEncodingBitrateMode" }; };
template <> struct name<Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode>{ static constexpr auto & value{ L"Windows.Media.Capture.AppBroadcastVideoEncodingResolutionMode" }; };
template <> struct name<Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit>{ static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureHistoricalBufferLengthUnit" }; };
template <> struct name<Windows::Media::Capture::AppCaptureMicrophoneCaptureState>{ static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureMicrophoneCaptureState" }; };
template <> struct name<Windows::Media::Capture::AppCaptureRecordingState>{ static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureRecordingState" }; };
template <> struct name<Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode>{ static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureVideoEncodingBitrateMode" }; };
template <> struct name<Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode>{ static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureVideoEncodingFrameRateMode" }; };
template <> struct name<Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode>{ static constexpr auto & value{ L"Windows.Media.Capture.AppCaptureVideoEncodingResolutionMode" }; };
template <> struct name<Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution>{ static constexpr auto & value{ L"Windows.Media.Capture.CameraCaptureUIMaxPhotoResolution" }; };
template <> struct name<Windows::Media::Capture::CameraCaptureUIMaxVideoResolution>{ static constexpr auto & value{ L"Windows.Media.Capture.CameraCaptureUIMaxVideoResolution" }; };
template <> struct name<Windows::Media::Capture::CameraCaptureUIMode>{ static constexpr auto & value{ L"Windows.Media.Capture.CameraCaptureUIMode" }; };
template <> struct name<Windows::Media::Capture::CameraCaptureUIPhotoFormat>{ static constexpr auto & value{ L"Windows.Media.Capture.CameraCaptureUIPhotoFormat" }; };
template <> struct name<Windows::Media::Capture::CameraCaptureUIVideoFormat>{ static constexpr auto & value{ L"Windows.Media.Capture.CameraCaptureUIVideoFormat" }; };
template <> struct name<Windows::Media::Capture::ForegroundActivationArgument>{ static constexpr auto & value{ L"Windows.Media.Capture.ForegroundActivationArgument" }; };
template <> struct name<Windows::Media::Capture::GameBarCommand>{ static constexpr auto & value{ L"Windows.Media.Capture.GameBarCommand" }; };
template <> struct name<Windows::Media::Capture::GameBarCommandOrigin>{ static constexpr auto & value{ L"Windows.Media.Capture.GameBarCommandOrigin" }; };
template <> struct name<Windows::Media::Capture::GameBarServicesDisplayMode>{ static constexpr auto & value{ L"Windows.Media.Capture.GameBarServicesDisplayMode" }; };
template <> struct name<Windows::Media::Capture::GameBarTargetCapturePolicy>{ static constexpr auto & value{ L"Windows.Media.Capture.GameBarTargetCapturePolicy" }; };
template <> struct name<Windows::Media::Capture::KnownVideoProfile>{ static constexpr auto & value{ L"Windows.Media.Capture.KnownVideoProfile" }; };
template <> struct name<Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatus>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureDeviceExclusiveControlStatus" }; };
template <> struct name<Windows::Media::Capture::MediaCaptureMemoryPreference>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureMemoryPreference" }; };
template <> struct name<Windows::Media::Capture::MediaCaptureSharingMode>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureSharingMode" }; };
template <> struct name<Windows::Media::Capture::MediaCaptureThermalStatus>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureThermalStatus" }; };
template <> struct name<Windows::Media::Capture::MediaCategory>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCategory" }; };
template <> struct name<Windows::Media::Capture::MediaStreamType>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaStreamType" }; };
template <> struct name<Windows::Media::Capture::PhotoCaptureSource>{ static constexpr auto & value{ L"Windows.Media.Capture.PhotoCaptureSource" }; };
template <> struct name<Windows::Media::Capture::PowerlineFrequency>{ static constexpr auto & value{ L"Windows.Media.Capture.PowerlineFrequency" }; };
template <> struct name<Windows::Media::Capture::StreamingCaptureMode>{ static constexpr auto & value{ L"Windows.Media.Capture.StreamingCaptureMode" }; };
template <> struct name<Windows::Media::Capture::VideoDeviceCharacteristic>{ static constexpr auto & value{ L"Windows.Media.Capture.VideoDeviceCharacteristic" }; };
template <> struct name<Windows::Media::Capture::VideoRotation>{ static constexpr auto & value{ L"Windows.Media.Capture.VideoRotation" }; };
template <> struct name<Windows::Media::Capture::WhiteBalanceGain>{ static constexpr auto & value{ L"Windows.Media.Capture.WhiteBalanceGain" }; };
template <> struct name<Windows::Media::Capture::MediaCaptureFailedEventHandler>{ static constexpr auto & value{ L"Windows.Media.Capture.MediaCaptureFailedEventHandler" }; };
template <> struct name<Windows::Media::Capture::RecordLimitationExceededEventHandler>{ static constexpr auto & value{ L"Windows.Media.Capture.RecordLimitationExceededEventHandler" }; };
template <> struct guid<Windows::Media::Capture::IAdvancedCapturedPhoto>{ static constexpr GUID value{ 0xF072728B,0xB292,0x4491,{ 0x9D,0x41,0x99,0x80,0x7A,0x55,0x0B,0xBF } }; };
template <> struct guid<Windows::Media::Capture::IAdvancedCapturedPhoto2>{ static constexpr GUID value{ 0x18CF6CD8,0xCFFE,0x42D8,{ 0x81,0x04,0x01,0x7B,0xB3,0x18,0xF4,0xA1 } }; };
template <> struct guid<Windows::Media::Capture::IAdvancedPhotoCapture>{ static constexpr GUID value{ 0x83FFAAFA,0x6667,0x44DC,{ 0x97,0x3C,0xA6,0xBC,0xE5,0x96,0xAA,0x0F } }; };
template <> struct guid<Windows::Media::Capture::IAppBroadcastBackgroundService>{ static constexpr GUID value{ 0xBAD1E72A,0xFA94,0x46F9,{ 0x95,0xFC,0xD7,0x15,0x11,0xCD,0xA7,0x0B } }; };
template <> struct guid<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo>{ static constexpr GUID value{ 0x5E735275,0x88C8,0x4ECA,{ 0x89,0xBA,0x48,0x25,0x98,0x5D,0xB8,0x80 } }; };
template <> struct guid<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>{ static constexpr GUID value{ 0x31DC02BC,0x990A,0x4904,{ 0xAA,0x96,0xFE,0x36,0x43,0x81,0xF1,0x36 } }; };
template <> struct guid<Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs>{ static constexpr GUID value{ 0x1E334CD0,0xB882,0x4B88,{ 0x86,0x92,0x05,0x99,0x9A,0xCE,0xB7,0x0F } }; };
template <> struct guid<Windows::Media::Capture::IAppBroadcastGlobalSettings>{ static constexpr GUID value{ 0xB2CB27A5,0x70FC,0x4E17,{ 0x80,0xBD,0x6B,0xA0,0xFD,0x3F,0xF3,0xA0 } }; };
template <> struct guid<Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs>{ static constexpr GUID value{ 0xCEA54283,0xEE51,0x4DBF,{ 0x94,0x72,0x79,0xA9,0xED,0x4E,0x21,0x65 } }; };
template <> struct guid<Windows::Media::Capture::IAppBroadcastManagerStatics>{ static constexpr GUID value{ 0x364E018B,0x1E4E,0x411F,{ 0xAB,0x3E,0x92,0x95,0x98,0x44,0xC1,0x56 } }; };
template <> struct guid<Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs>{ static constexpr GUID value{ 0xA86AD5E9,0x9440,0x4908,{ 0x9D,0x09,0x65,0xB7,0xE3,0x15,0xD7,0x95 } }; };
template <> struct guid<Windows::Media::Capture::IAppBroadcastPlugIn>{ static constexpr GUID value{ 0x520C1E66,0x6513,0x4574,{ 0xAC,0x54,0x23,0xB7,0x97,0x29,0x61,0x5B } }; };
template <> struct guid<Windows::Media::Capture::IAppBroadcastPlugInManager>{ static constexpr GUID value{ 0xE550D979,0x27A1,0x49A7,{ 0xBB,0xF4,0xD7,0xA9,0xE9,0xD0,0x76,0x68 } }; };
template <> struct guid<Windows::Media::Capture::IAppBroadcastPlugInManagerStatics>{ static constexpr GUID value{ 0xF2645C20,0x5C76,0x4CDC,{ 0x93,0x64,0x82,0xFE,0x9E,0xB6,0x53,0x4D } }; };
template <> struct guid<Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs>{ static constexpr GUID value{ 0x4881D0F2,0xABC5,0x4FC6,{ 0x84,0xB0,0x89,0x37,0x0B,0xB4,0x72,0x12 } }; };
template <> struct guid<Windows::Media::Capture::IAppBroadcastPreview>{ static constexpr GUID value{ 0x14B60F5A,0x6E4A,0x4B80,{ 0xA1,0x4F,0x67,0xEE,0x77,0xD1,0x53,0xE7 } }; };
template <> struct guid<Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs>{ static constexpr GUID value{ 0x5A57F2DE,0x8DEA,0x4E86,{ 0x90,0xAD,0x03,0xFC,0x26,0xB9,0x65,0x3C } }; };
template <> struct guid<Windows::Media::Capture::IAppBroadcastPreviewStreamReader>{ static constexpr GUID value{ 0x92228D50,0xDB3F,0x40A8,{ 0x8C,0xD4,0xF4,0xE3,0x71,0xDD,0xAB,0x37 } }; };
template <> struct guid<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame>{ static constexpr GUID value{ 0x010FBEA1,0x94FE,0x4499,{ 0xB8,0xC0,0x8D,0x24,0x42,0x79,0xFB,0x12 } }; };
template <> struct guid<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader>{ static constexpr GUID value{ 0x8BEF6113,0xDA84,0x4499,{ 0xA7,0xAB,0x87,0x11,0x8C,0xB4,0xA1,0x57 } }; };
template <> struct guid<Windows::Media::Capture::IAppBroadcastProviderSettings>{ static constexpr GUID value{ 0xC30BDF62,0x9948,0x458F,{ 0xAD,0x50,0xAA,0x06,0xEC,0x03,0xDA,0x08 } }; };
template <> struct guid<Windows::Media::Capture::IAppBroadcastServices>{ static constexpr GUID value{ 0x8660B4D6,0x969B,0x4E3C,{ 0xAC,0x3A,0x8B,0x04,0x2E,0xE4,0xEE,0x63 } }; };
template <> struct guid<Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs>{ static constexpr GUID value{ 0x02B692A4,0x5919,0x4A9E,{ 0x8D,0x5E,0xC9,0xBB,0x0D,0xD3,0x37,0x7A } }; };
template <> struct guid<Windows::Media::Capture::IAppBroadcastState>{ static constexpr GUID value{ 0xEE08056D,0x8099,0x4DDD,{ 0x92,0x2E,0xC5,0x6D,0xAC,0x58,0xAB,0xFB } }; };
template <> struct guid<Windows::Media::Capture::IAppBroadcastStreamAudioFrame>{ static constexpr GUID value{ 0xEFAB4AC8,0x21BA,0x453F,{ 0x8B,0xB7,0x5E,0x93,0x8A,0x2E,0x9A,0x74 } }; };
template <> struct guid<Windows::Media::Capture::IAppBroadcastStreamAudioHeader>{ static constexpr GUID value{ 0xBF21A570,0x6B78,0x4216,{ 0x9F,0x07,0x5A,0xFF,0x52,0x56,0xF1,0xB7 } }; };
template <> struct guid<Windows::Media::Capture::IAppBroadcastStreamReader>{ static constexpr GUID value{ 0xB338BCF9,0x3364,0x4460,{ 0xB5,0xF1,0x3C,0xC2,0x79,0x6A,0x8A,0xA2 } }; };
template <> struct guid<Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs>{ static constexpr GUID value{ 0x5108A733,0xD008,0x4A89,{ 0x93,0xBE,0x58,0xAE,0xD9,0x61,0x37,0x4E } }; };
template <> struct guid<Windows::Media::Capture::IAppBroadcastStreamVideoFrame>{ static constexpr GUID value{ 0x0F97CF2B,0xC9E4,0x4E88,{ 0x81,0x94,0xD8,0x14,0xCB,0xD5,0x85,0xD8 } }; };
template <> struct guid<Windows::Media::Capture::IAppBroadcastStreamVideoHeader>{ static constexpr GUID value{ 0x0B9EBECE,0x7E32,0x432D,{ 0x8C,0xA2,0x36,0xBF,0x10,0xB9,0xF4,0x62 } }; };
template <> struct guid<Windows::Media::Capture::IAppBroadcastTriggerDetails>{ static constexpr GUID value{ 0xDEEBAB35,0xEC5E,0x4D8F,{ 0xB1,0xC0,0x5D,0xA6,0xE8,0xC7,0x56,0x38 } }; };
template <> struct guid<Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs>{ static constexpr GUID value{ 0xE6E11825,0x5401,0x4ADE,{ 0x8B,0xD2,0xC1,0x4E,0xCE,0xE6,0x80,0x7D } }; };
template <> struct guid<Windows::Media::Capture::IAppCapture>{ static constexpr GUID value{ 0x9749D453,0xA29A,0x45ED,{ 0x8F,0x29,0x22,0xD0,0x99,0x42,0xCF,0xF7 } }; };
template <> struct guid<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys>{ static constexpr GUID value{ 0x19E8E0EF,0x236C,0x40F9,{ 0xB3,0x8F,0x9B,0x7D,0xD6,0x5D,0x1C,0xCC } }; };
template <> struct guid<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2>{ static constexpr GUID value{ 0xC3669090,0xDD17,0x47F0,{ 0x95,0xE5,0xCE,0x42,0x28,0x6C,0xF3,0x38 } }; };
template <> struct guid<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3>{ static constexpr GUID value{ 0x7B81448C,0x418E,0x469C,{ 0xA4,0x9A,0x45,0xB5,0x97,0xC8,0x26,0xB6 } }; };
template <> struct guid<Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs>{ static constexpr GUID value{ 0xC1F5563B,0xFFA1,0x44C9,{ 0x97,0x5F,0x27,0xFB,0xEB,0x55,0x3B,0x35 } }; };
template <> struct guid<Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs>{ static constexpr GUID value{ 0x4189FBF4,0x465E,0x45BF,{ 0x90,0x7F,0x16,0x5B,0x3F,0xB2,0x37,0x58 } }; };
template <> struct guid<Windows::Media::Capture::IAppCaptureManagerStatics>{ static constexpr GUID value{ 0x7D9E3EA7,0x6282,0x4735,{ 0x8D,0x4E,0xAA,0x45,0xF9,0x0F,0x67,0x23 } }; };
template <> struct guid<Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs>{ static constexpr GUID value{ 0x324D249E,0x45BC,0x4C35,{ 0xBC,0x35,0xE4,0x69,0xFC,0x7A,0x69,0xE0 } }; };
template <> struct guid<Windows::Media::Capture::IAppCaptureRecordOperation>{ static constexpr GUID value{ 0xC66020A9,0x1538,0x495C,{ 0x9B,0xBB,0x2B,0xA8,0x70,0xEC,0x58,0x61 } }; };
template <> struct guid<Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs>{ static constexpr GUID value{ 0x24FC8712,0xE305,0x490D,{ 0xB4,0x15,0x6B,0x1C,0x90,0x49,0x73,0x6B } }; };
template <> struct guid<Windows::Media::Capture::IAppCaptureServices>{ static constexpr GUID value{ 0x44FEC0B5,0x34F5,0x4F18,{ 0xAE,0x8C,0xB9,0x12,0x3A,0xBB,0xFC,0x0D } }; };
template <> struct guid<Windows::Media::Capture::IAppCaptureSettings>{ static constexpr GUID value{ 0x14683A86,0x8807,0x48D3,{ 0x88,0x3A,0x97,0x0E,0xE4,0x53,0x2A,0x39 } }; };
template <> struct guid<Windows::Media::Capture::IAppCaptureSettings2>{ static constexpr GUID value{ 0xFCB8CEE7,0xE26B,0x476F,{ 0x9B,0x1A,0xEC,0x34,0x2D,0x2A,0x8F,0xDE } }; };
template <> struct guid<Windows::Media::Capture::IAppCaptureSettings3>{ static constexpr GUID value{ 0xA93502FE,0x88C2,0x42D6,{ 0xAA,0xAA,0x40,0xFE,0xFF,0xD7,0x5A,0xEC } }; };
template <> struct guid<Windows::Media::Capture::IAppCaptureSettings4>{ static constexpr GUID value{ 0x07C2774C,0x1A81,0x482F,{ 0xA2,0x44,0x04,0x9D,0x95,0xF2,0x5B,0x0B } }; };
template <> struct guid<Windows::Media::Capture::IAppCaptureSettings5>{ static constexpr GUID value{ 0x18894522,0xB0E8,0x4BA0,{ 0x8F,0x13,0x3E,0xAA,0x5F,0xA4,0x01,0x3B } }; };
template <> struct guid<Windows::Media::Capture::IAppCaptureState>{ static constexpr GUID value{ 0x73134372,0xD4EB,0x44CE,{ 0x95,0x38,0x46,0x5F,0x50,0x6A,0xC4,0xEA } }; };
template <> struct guid<Windows::Media::Capture::IAppCaptureStatics>{ static constexpr GUID value{ 0xF922DD6C,0x0A7E,0x4E74,{ 0x8B,0x20,0x9C,0x1F,0x90,0x2D,0x08,0xA1 } }; };
template <> struct guid<Windows::Media::Capture::ICameraCaptureUI>{ static constexpr GUID value{ 0x48587540,0x6F93,0x4BB4,{ 0xB8,0xF3,0xE8,0x9E,0x48,0x94,0x8C,0x91 } }; };
template <> struct guid<Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings>{ static constexpr GUID value{ 0xB9F5BE97,0x3472,0x46A8,{ 0x8A,0x9E,0x04,0xCE,0x42,0xCC,0xC9,0x7D } }; };
template <> struct guid<Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings>{ static constexpr GUID value{ 0x64E92D1F,0xA28D,0x425A,{ 0xB8,0x4F,0xE5,0x68,0x33,0x5F,0xF2,0x4E } }; };
template <> struct guid<Windows::Media::Capture::ICameraOptionsUIStatics>{ static constexpr GUID value{ 0x3B0D5E34,0x3906,0x4B7D,{ 0x94,0x6C,0x7B,0xDE,0x84,0x44,0x99,0xAE } }; };
template <> struct guid<Windows::Media::Capture::ICapturedFrame>{ static constexpr GUID value{ 0x1DD2DE1F,0x571B,0x44D8,{ 0x8E,0x80,0xA0,0x8A,0x15,0x78,0x76,0x6E } }; };
template <> struct guid<Windows::Media::Capture::ICapturedFrameControlValues>{ static constexpr GUID value{ 0x90C65B7F,0x4E0D,0x4CA4,{ 0x88,0x2D,0x7A,0x14,0x4F,0xED,0x0A,0x90 } }; };
template <> struct guid<Windows::Media::Capture::ICapturedFrameControlValues2>{ static constexpr GUID value{ 0x500B2B88,0x06D2,0x4AA7,{ 0xA7,0xDB,0xD3,0x7A,0xF7,0x33,0x21,0xD8 } }; };
template <> struct guid<Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap>{ static constexpr GUID value{ 0xB58E8B6E,0x8503,0x49B5,{ 0x9E,0x86,0x89,0x7D,0x26,0xA3,0xFF,0x3D } }; };
template <> struct guid<Windows::Media::Capture::ICapturedPhoto>{ static constexpr GUID value{ 0xB0CE7E5A,0xCFCC,0x4D6C,{ 0x8A,0xD1,0x08,0x69,0x20,0x8A,0xCA,0x16 } }; };
template <> struct guid<Windows::Media::Capture::IGameBarServices>{ static constexpr GUID value{ 0x2DBEAD57,0x50A6,0x499E,{ 0x8C,0x6C,0xD3,0x30,0xA7,0x31,0x17,0x96 } }; };
template <> struct guid<Windows::Media::Capture::IGameBarServicesCommandEventArgs>{ static constexpr GUID value{ 0xA74226B2,0xF176,0x4FCF,{ 0x8F,0xBB,0xCF,0x69,0x8B,0x2E,0xB8,0xE0 } }; };
template <> struct guid<Windows::Media::Capture::IGameBarServicesManager>{ static constexpr GUID value{ 0x3A4B9CFA,0x7F8B,0x4C60,{ 0x9D,0xBB,0x0B,0xCD,0x26,0x2D,0xFF,0xC6 } }; };
template <> struct guid<Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs>{ static constexpr GUID value{ 0xEDEDBD9C,0x143E,0x49A3,{ 0xA5,0xEA,0x0B,0x19,0x95,0xC8,0xD4,0x6E } }; };
template <> struct guid<Windows::Media::Capture::IGameBarServicesManagerStatics>{ static constexpr GUID value{ 0x34C1B616,0xFF25,0x4792,{ 0x98,0xF2,0xD3,0x75,0x3F,0x15,0xAC,0x13 } }; };
template <> struct guid<Windows::Media::Capture::IGameBarServicesTargetInfo>{ static constexpr GUID value{ 0xB4202F92,0x1611,0x4E05,{ 0xB6,0xEF,0xDF,0xD7,0x37,0xAE,0x33,0xB0 } }; };
template <> struct guid<Windows::Media::Capture::ILowLagMediaRecording>{ static constexpr GUID value{ 0x41C8BAF7,0xFF3F,0x49F0,{ 0xA4,0x77,0xF1,0x95,0xE3,0xCE,0x51,0x08 } }; };
template <> struct guid<Windows::Media::Capture::ILowLagMediaRecording2>{ static constexpr GUID value{ 0x6369C758,0x5644,0x41E2,{ 0x97,0xAF,0x8E,0xF5,0x6A,0x25,0xE2,0x25 } }; };
template <> struct guid<Windows::Media::Capture::ILowLagMediaRecording3>{ static constexpr GUID value{ 0x5C33AB12,0x48F7,0x47DA,{ 0xB4,0x1E,0x90,0x88,0x0A,0x5F,0xE0,0xEC } }; };
template <> struct guid<Windows::Media::Capture::ILowLagPhotoCapture>{ static constexpr GUID value{ 0xA37251B7,0x6B44,0x473D,{ 0x8F,0x24,0xF7,0x03,0xD6,0xC0,0xEC,0x44 } }; };
template <> struct guid<Windows::Media::Capture::ILowLagPhotoSequenceCapture>{ static constexpr GUID value{ 0x7CC346BB,0xB9A9,0x4C91,{ 0x8F,0xFA,0x28,0x7E,0x9C,0x66,0x86,0x69 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCapture>{ static constexpr GUID value{ 0xC61AFBB4,0xFB10,0x4A34,{ 0xAC,0x18,0xCA,0x80,0xD9,0xC8,0xE7,0xEE } }; };
template <> struct guid<Windows::Media::Capture::IMediaCapture2>{ static constexpr GUID value{ 0x9CC68260,0x7DA1,0x4043,{ 0xB6,0x52,0x21,0xB8,0x87,0x8D,0xAF,0xF9 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCapture3>{ static constexpr GUID value{ 0xD4136F30,0x1564,0x466E,{ 0xBC,0x0A,0xAF,0x94,0xE0,0x2A,0xB0,0x16 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCapture4>{ static constexpr GUID value{ 0xBACD6FD6,0xFB08,0x4947,{ 0xAE,0xA2,0xCE,0x14,0xEF,0xF0,0xCE,0x13 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCapture5>{ static constexpr GUID value{ 0xDA787C22,0x3A9B,0x4720,{ 0xA7,0x1E,0x97,0x90,0x0A,0x31,0x6E,0x5A } }; };
template <> struct guid<Windows::Media::Capture::IMediaCapture6>{ static constexpr GUID value{ 0x228948BD,0x4B20,0x4BB1,{ 0x9F,0xD6,0xA5,0x83,0x21,0x2A,0x10,0x12 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs>{ static constexpr GUID value{ 0x9D2F920D,0xA588,0x43C6,{ 0x89,0xD6,0x5A,0xD3,0x22,0xAF,0x00,0x6A } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureFailedEventArgs>{ static constexpr GUID value{ 0x80FDE3F4,0x54C4,0x42C0,{ 0x8D,0x19,0xCE,0xA1,0xA8,0x7C,0xA1,0x8B } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs>{ static constexpr GUID value{ 0x81E1BC7F,0x2277,0x493E,{ 0xAB,0xEE,0xD3,0xF4,0x4F,0xF9,0x8C,0x04 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureInitializationSettings>{ static constexpr GUID value{ 0x9782BA70,0xEA65,0x4900,{ 0x93,0x56,0x8C,0xA8,0x87,0x72,0x68,0x84 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureInitializationSettings2>{ static constexpr GUID value{ 0x404E0626,0xC9DC,0x43E9,{ 0xAE,0xE4,0xE6,0xBF,0x1B,0x57,0xB4,0x4C } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureInitializationSettings3>{ static constexpr GUID value{ 0x4160519D,0xBE48,0x4730,{ 0x81,0x04,0x0C,0xF6,0xE9,0xE9,0x79,0x48 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureInitializationSettings4>{ static constexpr GUID value{ 0xF502A537,0x4CB7,0x4D28,{ 0x95,0xED,0x4F,0x9F,0x01,0x2E,0x05,0x18 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureInitializationSettings5>{ static constexpr GUID value{ 0xD5A2E3B8,0x2626,0x4E94,{ 0xB7,0xB3,0x53,0x08,0xA0,0xF6,0x4B,0x1A } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureInitializationSettings6>{ static constexpr GUID value{ 0xB2E26B47,0x3DB1,0x4D33,{ 0xAB,0x63,0x0F,0xFA,0x09,0x05,0x65,0x85 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCapturePauseResult>{ static constexpr GUID value{ 0xAEC47CA3,0x4477,0x4B04,{ 0xA0,0x6F,0x2C,0x1C,0x51,0x82,0xFE,0x9D } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureSettings>{ static constexpr GUID value{ 0x1D83AAFE,0x6D45,0x4477,{ 0x8D,0xC4,0xAC,0x5B,0xC0,0x1C,0x40,0x91 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureSettings2>{ static constexpr GUID value{ 0x6F9E7CFB,0xFA9F,0x4B13,{ 0x9C,0xBE,0x5A,0xB9,0x4F,0x1F,0x34,0x93 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureStatics>{ static constexpr GUID value{ 0xACEF81FF,0x99ED,0x4645,{ 0x96,0x5E,0x19,0x25,0xCF,0xC6,0x38,0x34 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureStopResult>{ static constexpr GUID value{ 0xF9DB6A2A,0xA092,0x4AD1,{ 0x97,0xD4,0xF2,0x01,0xF9,0xD0,0x82,0xDB } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureVideoPreview>{ static constexpr GUID value{ 0x27727073,0x549E,0x447F,{ 0xA2,0x0A,0x4F,0x03,0xC4,0x79,0xD8,0xC0 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureVideoProfile>{ static constexpr GUID value{ 0x21A073BF,0xA3EE,0x4ECF,{ 0x9E,0xF6,0x50,0xB0,0xBC,0x4E,0x13,0x05 } }; };
template <> struct guid<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription>{ static constexpr GUID value{ 0x8012AFEF,0xB691,0x49FF,{ 0x83,0xF2,0xC1,0xE7,0x6E,0xAA,0xEA,0x1B } }; };
template <> struct guid<Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs>{ static constexpr GUID value{ 0x470F88B3,0x1E6D,0x4051,{ 0x9C,0x8B,0xF1,0xD8,0x5A,0xF0,0x47,0xB7 } }; };
template <> struct guid<Windows::Media::Capture::IPhotoCapturedEventArgs>{ static constexpr GUID value{ 0x373BFBC1,0x984E,0x4FF0,{ 0xBF,0x85,0x1C,0x00,0xAA,0xBC,0x5A,0x45 } }; };
template <> struct guid<Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs>{ static constexpr GUID value{ 0xAB473672,0xC28A,0x4827,{ 0x8F,0x8D,0x36,0x36,0xD3,0xBE,0xB5,0x1E } }; };
template <> struct guid<Windows::Media::Capture::IScreenCapture>{ static constexpr GUID value{ 0x89179EF7,0xCD12,0x4E0E,{ 0xA6,0xD4,0x5B,0x3D,0xE9,0x8B,0x2E,0x9B } }; };
template <> struct guid<Windows::Media::Capture::IScreenCaptureStatics>{ static constexpr GUID value{ 0xC898C3B0,0xC8A5,0x11E2,{ 0x8B,0x8B,0x08,0x00,0x20,0x0C,0x9A,0x66 } }; };
template <> struct guid<Windows::Media::Capture::ISourceSuspensionChangedEventArgs>{ static constexpr GUID value{ 0x2ECE7B5E,0xD49B,0x4394,{ 0xBC,0x32,0xF9,0x7D,0x6C,0xED,0xEC,0x1C } }; };
template <> struct guid<Windows::Media::Capture::IVideoStreamConfiguration>{ static constexpr GUID value{ 0xD8770A6F,0x4390,0x4B5E,{ 0xAD,0x3E,0x0F,0x8A,0xF0,0x96,0x34,0x90 } }; };
template <> struct guid<Windows::Media::Capture::MediaCaptureFailedEventHandler>{ static constexpr GUID value{ 0x2014EFFB,0x5CD8,0x4F08,{ 0xA3,0x14,0x0D,0x36,0x0D,0xA5,0x9F,0x14 } }; };
template <> struct guid<Windows::Media::Capture::RecordLimitationExceededEventHandler>{ static constexpr GUID value{ 0x3FAE8F2E,0x4FE1,0x4FFD,{ 0xAA,0xBA,0xE1,0xF1,0x33,0x7D,0x4E,0x53 } }; };
template <> struct default_interface<Windows::Media::Capture::AdvancedCapturedPhoto>{ using type = Windows::Media::Capture::IAdvancedCapturedPhoto; };
template <> struct default_interface<Windows::Media::Capture::AdvancedPhotoCapture>{ using type = Windows::Media::Capture::IAdvancedPhotoCapture; };
template <> struct default_interface<Windows::Media::Capture::AppBroadcastBackgroundService>{ using type = Windows::Media::Capture::IAppBroadcastBackgroundService; };
template <> struct default_interface<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo>{ using type = Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo; };
template <> struct default_interface<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo>{ using type = Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo; };
template <> struct default_interface<Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs>{ using type = Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs; };
template <> struct default_interface<Windows::Media::Capture::AppBroadcastGlobalSettings>{ using type = Windows::Media::Capture::IAppBroadcastGlobalSettings; };
template <> struct default_interface<Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs>{ using type = Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs; };
template <> struct default_interface<Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs>{ using type = Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs; };
template <> struct default_interface<Windows::Media::Capture::AppBroadcastPlugIn>{ using type = Windows::Media::Capture::IAppBroadcastPlugIn; };
template <> struct default_interface<Windows::Media::Capture::AppBroadcastPlugInManager>{ using type = Windows::Media::Capture::IAppBroadcastPlugInManager; };
template <> struct default_interface<Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs>{ using type = Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs; };
template <> struct default_interface<Windows::Media::Capture::AppBroadcastPreview>{ using type = Windows::Media::Capture::IAppBroadcastPreview; };
template <> struct default_interface<Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs>{ using type = Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs; };
template <> struct default_interface<Windows::Media::Capture::AppBroadcastPreviewStreamReader>{ using type = Windows::Media::Capture::IAppBroadcastPreviewStreamReader; };
template <> struct default_interface<Windows::Media::Capture::AppBroadcastPreviewStreamVideoFrame>{ using type = Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame; };
template <> struct default_interface<Windows::Media::Capture::AppBroadcastPreviewStreamVideoHeader>{ using type = Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader; };
template <> struct default_interface<Windows::Media::Capture::AppBroadcastProviderSettings>{ using type = Windows::Media::Capture::IAppBroadcastProviderSettings; };
template <> struct default_interface<Windows::Media::Capture::AppBroadcastServices>{ using type = Windows::Media::Capture::IAppBroadcastServices; };
template <> struct default_interface<Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs>{ using type = Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs; };
template <> struct default_interface<Windows::Media::Capture::AppBroadcastState>{ using type = Windows::Media::Capture::IAppBroadcastState; };
template <> struct default_interface<Windows::Media::Capture::AppBroadcastStreamAudioFrame>{ using type = Windows::Media::Capture::IAppBroadcastStreamAudioFrame; };
template <> struct default_interface<Windows::Media::Capture::AppBroadcastStreamAudioHeader>{ using type = Windows::Media::Capture::IAppBroadcastStreamAudioHeader; };
template <> struct default_interface<Windows::Media::Capture::AppBroadcastStreamReader>{ using type = Windows::Media::Capture::IAppBroadcastStreamReader; };
template <> struct default_interface<Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs>{ using type = Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs; };
template <> struct default_interface<Windows::Media::Capture::AppBroadcastStreamVideoFrame>{ using type = Windows::Media::Capture::IAppBroadcastStreamVideoFrame; };
template <> struct default_interface<Windows::Media::Capture::AppBroadcastStreamVideoHeader>{ using type = Windows::Media::Capture::IAppBroadcastStreamVideoHeader; };
template <> struct default_interface<Windows::Media::Capture::AppBroadcastTriggerDetails>{ using type = Windows::Media::Capture::IAppBroadcastTriggerDetails; };
template <> struct default_interface<Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs>{ using type = Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs; };
template <> struct default_interface<Windows::Media::Capture::AppCapture>{ using type = Windows::Media::Capture::IAppCapture; };
template <> struct default_interface<Windows::Media::Capture::AppCaptureAlternateShortcutKeys>{ using type = Windows::Media::Capture::IAppCaptureAlternateShortcutKeys; };
template <> struct default_interface<Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs>{ using type = Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs; };
template <> struct default_interface<Windows::Media::Capture::AppCaptureFileGeneratedEventArgs>{ using type = Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs; };
template <> struct default_interface<Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs>{ using type = Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs; };
template <> struct default_interface<Windows::Media::Capture::AppCaptureRecordOperation>{ using type = Windows::Media::Capture::IAppCaptureRecordOperation; };
template <> struct default_interface<Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs>{ using type = Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs; };
template <> struct default_interface<Windows::Media::Capture::AppCaptureServices>{ using type = Windows::Media::Capture::IAppCaptureServices; };
template <> struct default_interface<Windows::Media::Capture::AppCaptureSettings>{ using type = Windows::Media::Capture::IAppCaptureSettings; };
template <> struct default_interface<Windows::Media::Capture::AppCaptureState>{ using type = Windows::Media::Capture::IAppCaptureState; };
template <> struct default_interface<Windows::Media::Capture::CameraCaptureUI>{ using type = Windows::Media::Capture::ICameraCaptureUI; };
template <> struct default_interface<Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings>{ using type = Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings; };
template <> struct default_interface<Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings>{ using type = Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings; };
template <> struct default_interface<Windows::Media::Capture::CapturedFrame>{ using type = Windows::Media::Capture::ICapturedFrame; };
template <> struct default_interface<Windows::Media::Capture::CapturedFrameControlValues>{ using type = Windows::Media::Capture::ICapturedFrameControlValues; };
template <> struct default_interface<Windows::Media::Capture::CapturedPhoto>{ using type = Windows::Media::Capture::ICapturedPhoto; };
template <> struct default_interface<Windows::Media::Capture::GameBarServices>{ using type = Windows::Media::Capture::IGameBarServices; };
template <> struct default_interface<Windows::Media::Capture::GameBarServicesCommandEventArgs>{ using type = Windows::Media::Capture::IGameBarServicesCommandEventArgs; };
template <> struct default_interface<Windows::Media::Capture::GameBarServicesManager>{ using type = Windows::Media::Capture::IGameBarServicesManager; };
template <> struct default_interface<Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs>{ using type = Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs; };
template <> struct default_interface<Windows::Media::Capture::GameBarServicesTargetInfo>{ using type = Windows::Media::Capture::IGameBarServicesTargetInfo; };
template <> struct default_interface<Windows::Media::Capture::LowLagMediaRecording>{ using type = Windows::Media::Capture::ILowLagMediaRecording; };
template <> struct default_interface<Windows::Media::Capture::LowLagPhotoCapture>{ using type = Windows::Media::Capture::ILowLagPhotoCapture; };
template <> struct default_interface<Windows::Media::Capture::LowLagPhotoSequenceCapture>{ using type = Windows::Media::Capture::ILowLagPhotoSequenceCapture; };
template <> struct default_interface<Windows::Media::Capture::MediaCapture>{ using type = Windows::Media::Capture::IMediaCapture; };
template <> struct default_interface<Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs>{ using type = Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs; };
template <> struct default_interface<Windows::Media::Capture::MediaCaptureFailedEventArgs>{ using type = Windows::Media::Capture::IMediaCaptureFailedEventArgs; };
template <> struct default_interface<Windows::Media::Capture::MediaCaptureFocusChangedEventArgs>{ using type = Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs; };
template <> struct default_interface<Windows::Media::Capture::MediaCaptureInitializationSettings>{ using type = Windows::Media::Capture::IMediaCaptureInitializationSettings; };
template <> struct default_interface<Windows::Media::Capture::MediaCapturePauseResult>{ using type = Windows::Media::Capture::IMediaCapturePauseResult; };
template <> struct default_interface<Windows::Media::Capture::MediaCaptureSettings>{ using type = Windows::Media::Capture::IMediaCaptureSettings; };
template <> struct default_interface<Windows::Media::Capture::MediaCaptureStopResult>{ using type = Windows::Media::Capture::IMediaCaptureStopResult; };
template <> struct default_interface<Windows::Media::Capture::MediaCaptureVideoProfile>{ using type = Windows::Media::Capture::IMediaCaptureVideoProfile; };
template <> struct default_interface<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>{ using type = Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription; };
template <> struct default_interface<Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs>{ using type = Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs; };
template <> struct default_interface<Windows::Media::Capture::PhotoCapturedEventArgs>{ using type = Windows::Media::Capture::IPhotoCapturedEventArgs; };
template <> struct default_interface<Windows::Media::Capture::PhotoConfirmationCapturedEventArgs>{ using type = Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs; };
template <> struct default_interface<Windows::Media::Capture::ScreenCapture>{ using type = Windows::Media::Capture::IScreenCapture; };
template <> struct default_interface<Windows::Media::Capture::SourceSuspensionChangedEventArgs>{ using type = Windows::Media::Capture::ISourceSuspensionChangedEventArgs; };
template <> struct default_interface<Windows::Media::Capture::VideoStreamConfiguration>{ using type = Windows::Media::Capture::IVideoStreamConfiguration; };

template <typename D>
struct consume_Windows_Media_Capture_IAdvancedCapturedPhoto
{
    Windows::Media::Capture::CapturedFrame Frame() const;
    Windows::Media::Devices::AdvancedPhotoMode Mode() const;
    Windows::Foundation::IInspectable Context() const;
};
template <> struct consume<Windows::Media::Capture::IAdvancedCapturedPhoto> { template <typename D> using type = consume_Windows_Media_Capture_IAdvancedCapturedPhoto<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAdvancedCapturedPhoto2
{
    Windows::Foundation::IReference<Windows::Foundation::Rect> FrameBoundsRelativeToReferencePhoto() const;
};
template <> struct consume<Windows::Media::Capture::IAdvancedCapturedPhoto2> { template <typename D> using type = consume_Windows_Media_Capture_IAdvancedCapturedPhoto2<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAdvancedPhotoCapture
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto> CaptureAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto> CaptureAsync(Windows::Foundation::IInspectable const& context) const;
    event_token OptionalReferencePhotoCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> const& handler) const;
    using OptionalReferencePhotoCaptured_revoker = event_revoker<Windows::Media::Capture::IAdvancedPhotoCapture>;
    OptionalReferencePhotoCaptured_revoker OptionalReferencePhotoCaptured(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> const& handler) const;
    void OptionalReferencePhotoCaptured(event_token const& token) const;
    event_token AllPhotosCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Foundation::IInspectable> const& handler) const;
    using AllPhotosCaptured_revoker = event_revoker<Windows::Media::Capture::IAdvancedPhotoCapture>;
    AllPhotosCaptured_revoker AllPhotosCaptured(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Foundation::IInspectable> const& handler) const;
    void AllPhotosCaptured(event_token const& token) const;
    Windows::Foundation::IAsyncAction FinishAsync() const;
};
template <> struct consume<Windows::Media::Capture::IAdvancedPhotoCapture> { template <typename D> using type = consume_Windows_Media_Capture_IAdvancedPhotoCapture<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppBroadcastBackgroundService
{
    void PlugInState(Windows::Media::Capture::AppBroadcastPlugInState const& value) const;
    Windows::Media::Capture::AppBroadcastPlugInState PlugInState() const;
    void SignInInfo(Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo const& value) const;
    Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo SignInInfo() const;
    void StreamInfo(Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo const& value) const;
    Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo StreamInfo() const;
    hstring AppId() const;
    hstring BroadcastTitle() const;
    void ViewerCount(uint32_t value) const;
    uint32_t ViewerCount() const;
    void TerminateBroadcast(Windows::Media::Capture::AppBroadcastTerminationReason const& reason, uint32_t providerSpecificReason) const;
    event_token HeartbeatRequested(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs> const& handler) const;
    using HeartbeatRequested_revoker = event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundService>;
    HeartbeatRequested_revoker HeartbeatRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs> const& handler) const;
    void HeartbeatRequested(event_token const& token) const;
    hstring TitleId() const;
};
template <> struct consume<Windows::Media::Capture::IAppBroadcastBackgroundService> { template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastBackgroundService<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceSignInInfo
{
    Windows::Media::Capture::AppBroadcastSignInState SignInState() const;
    void OAuthRequestUri(Windows::Foundation::Uri const& value) const;
    Windows::Foundation::Uri OAuthRequestUri() const;
    void OAuthCallbackUri(Windows::Foundation::Uri const& value) const;
    Windows::Foundation::Uri OAuthCallbackUri() const;
    Windows::Security::Authentication::Web::WebAuthenticationResult AuthenticationResult() const;
    void UserName(param::hstring const& value) const;
    hstring UserName() const;
    event_token SignInStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo, Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs> const& handler) const;
    using SignInStateChanged_revoker = event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo>;
    SignInStateChanged_revoker SignInStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo, Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs> const& handler) const;
    void SignInStateChanged(event_token const& token) const;
};
template <> struct consume<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo> { template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceSignInInfo<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo
{
    Windows::Media::Capture::AppBroadcastStreamState StreamState() const;
    void DesiredVideoEncodingBitrate(uint64_t value) const;
    uint64_t DesiredVideoEncodingBitrate() const;
    void BandwidthTestBitrate(uint64_t value) const;
    uint64_t BandwidthTestBitrate() const;
    void AudioCodec(param::hstring const& value) const;
    hstring AudioCodec() const;
    Windows::Media::Capture::AppBroadcastStreamReader BroadcastStreamReader() const;
    event_token StreamStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> const& handler) const;
    using StreamStateChanged_revoker = event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>;
    StreamStateChanged_revoker StreamStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> const& handler) const;
    void StreamStateChanged(event_token const& token) const;
    event_token VideoEncodingResolutionChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> const& handler) const;
    using VideoEncodingResolutionChanged_revoker = event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>;
    VideoEncodingResolutionChanged_revoker VideoEncodingResolutionChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> const& handler) const;
    void VideoEncodingResolutionChanged(event_token const& token) const;
    event_token VideoEncodingBitrateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> const& handler) const;
    using VideoEncodingBitrateChanged_revoker = event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>;
    VideoEncodingBitrateChanged_revoker VideoEncodingBitrateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> const& handler) const;
    void VideoEncodingBitrateChanged(event_token const& token) const;
};
template <> struct consume<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo> { template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppBroadcastCameraCaptureStateChangedEventArgs
{
    Windows::Media::Capture::AppBroadcastCameraCaptureState State() const;
    uint32_t ErrorCode() const;
};
template <> struct consume<Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastCameraCaptureStateChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppBroadcastGlobalSettings
{
    bool IsBroadcastEnabled() const;
    bool IsDisabledByPolicy() const;
    bool IsGpuConstrained() const;
    bool HasHardwareEncoder() const;
    void IsAudioCaptureEnabled(bool value) const;
    bool IsAudioCaptureEnabled() const;
    void IsMicrophoneCaptureEnabledByDefault(bool value) const;
    bool IsMicrophoneCaptureEnabledByDefault() const;
    void IsEchoCancellationEnabled(bool value) const;
    bool IsEchoCancellationEnabled() const;
    void SystemAudioGain(double value) const;
    double SystemAudioGain() const;
    void MicrophoneGain(double value) const;
    double MicrophoneGain() const;
    void IsCameraCaptureEnabledByDefault(bool value) const;
    bool IsCameraCaptureEnabledByDefault() const;
    void SelectedCameraId(param::hstring const& value) const;
    hstring SelectedCameraId() const;
    void CameraOverlayLocation(Windows::Media::Capture::AppBroadcastCameraOverlayLocation const& value) const;
    Windows::Media::Capture::AppBroadcastCameraOverlayLocation CameraOverlayLocation() const;
    void CameraOverlaySize(Windows::Media::Capture::AppBroadcastCameraOverlaySize const& value) const;
    Windows::Media::Capture::AppBroadcastCameraOverlaySize CameraOverlaySize() const;
    void IsCursorImageCaptureEnabled(bool value) const;
    bool IsCursorImageCaptureEnabled() const;
};
template <> struct consume<Windows::Media::Capture::IAppBroadcastGlobalSettings> { template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastGlobalSettings<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppBroadcastHeartbeatRequestedEventArgs
{
    void Handled(bool value) const;
    bool Handled() const;
};
template <> struct consume<Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastHeartbeatRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppBroadcastManagerStatics
{
    Windows::Media::Capture::AppBroadcastGlobalSettings GetGlobalSettings() const;
    void ApplyGlobalSettings(Windows::Media::Capture::AppBroadcastGlobalSettings const& value) const;
    Windows::Media::Capture::AppBroadcastProviderSettings GetProviderSettings() const;
    void ApplyProviderSettings(Windows::Media::Capture::AppBroadcastProviderSettings const& value) const;
};
template <> struct consume<Windows::Media::Capture::IAppBroadcastManagerStatics> { template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastManagerStatics<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppBroadcastMicrophoneCaptureStateChangedEventArgs
{
    Windows::Media::Capture::AppBroadcastMicrophoneCaptureState State() const;
    uint32_t ErrorCode() const;
};
template <> struct consume<Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastMicrophoneCaptureStateChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppBroadcastPlugIn
{
    hstring AppId() const;
    Windows::Media::Capture::AppBroadcastProviderSettings ProviderSettings() const;
    Windows::Storage::Streams::IRandomAccessStreamReference Logo() const;
    hstring DisplayName() const;
};
template <> struct consume<Windows::Media::Capture::IAppBroadcastPlugIn> { template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastPlugIn<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppBroadcastPlugInManager
{
    bool IsBroadcastProviderAvailable() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::AppBroadcastPlugIn> PlugInList() const;
    Windows::Media::Capture::AppBroadcastPlugIn DefaultPlugIn() const;
    void DefaultPlugIn(Windows::Media::Capture::AppBroadcastPlugIn const& value) const;
};
template <> struct consume<Windows::Media::Capture::IAppBroadcastPlugInManager> { template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastPlugInManager<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppBroadcastPlugInManagerStatics
{
    Windows::Media::Capture::AppBroadcastPlugInManager GetDefault() const;
    Windows::Media::Capture::AppBroadcastPlugInManager GetForUser(Windows::System::User const& user) const;
};
template <> struct consume<Windows::Media::Capture::IAppBroadcastPlugInManagerStatics> { template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastPlugInManagerStatics<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppBroadcastPlugInStateChangedEventArgs
{
    Windows::Media::Capture::AppBroadcastPlugInState PlugInState() const;
};
template <> struct consume<Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastPlugInStateChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppBroadcastPreview
{
    void StopPreview() const;
    Windows::Media::Capture::AppBroadcastPreviewState PreviewState() const;
    Windows::Foundation::IReference<uint32_t> ErrorCode() const;
    event_token PreviewStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreview, Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs> const& value) const;
    using PreviewStateChanged_revoker = event_revoker<Windows::Media::Capture::IAppBroadcastPreview>;
    PreviewStateChanged_revoker PreviewStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreview, Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs> const& value) const;
    void PreviewStateChanged(event_token const& token) const;
    Windows::Media::Capture::AppBroadcastPreviewStreamReader PreviewStreamReader() const;
};
template <> struct consume<Windows::Media::Capture::IAppBroadcastPreview> { template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastPreview<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppBroadcastPreviewStateChangedEventArgs
{
    Windows::Media::Capture::AppBroadcastPreviewState PreviewState() const;
    uint32_t ErrorCode() const;
};
template <> struct consume<Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastPreviewStateChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppBroadcastPreviewStreamReader
{
    uint32_t VideoWidth() const;
    uint32_t VideoHeight() const;
    uint32_t VideoStride() const;
    Windows::Graphics::Imaging::BitmapPixelFormat VideoBitmapPixelFormat() const;
    Windows::Graphics::Imaging::BitmapAlphaMode VideoBitmapAlphaMode() const;
    Windows::Media::Capture::AppBroadcastPreviewStreamVideoFrame TryGetNextVideoFrame() const;
    event_token VideoFrameArrived(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreviewStreamReader, Windows::Foundation::IInspectable> const& value) const;
    using VideoFrameArrived_revoker = event_revoker<Windows::Media::Capture::IAppBroadcastPreviewStreamReader>;
    VideoFrameArrived_revoker VideoFrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreviewStreamReader, Windows::Foundation::IInspectable> const& value) const;
    void VideoFrameArrived(event_token const& token) const;
};
template <> struct consume<Windows::Media::Capture::IAppBroadcastPreviewStreamReader> { template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastPreviewStreamReader<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppBroadcastPreviewStreamVideoFrame
{
    Windows::Media::Capture::AppBroadcastPreviewStreamVideoHeader VideoHeader() const;
    Windows::Storage::Streams::IBuffer VideoBuffer() const;
};
template <> struct consume<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame> { template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastPreviewStreamVideoFrame<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppBroadcastPreviewStreamVideoHeader
{
    Windows::Foundation::DateTime AbsoluteTimestamp() const;
    Windows::Foundation::TimeSpan RelativeTimestamp() const;
    Windows::Foundation::TimeSpan Duration() const;
    uint64_t FrameId() const;
};
template <> struct consume<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader> { template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastPreviewStreamVideoHeader<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppBroadcastProviderSettings
{
    void DefaultBroadcastTitle(param::hstring const& value) const;
    hstring DefaultBroadcastTitle() const;
    void AudioEncodingBitrate(uint32_t value) const;
    uint32_t AudioEncodingBitrate() const;
    void CustomVideoEncodingBitrate(uint32_t value) const;
    uint32_t CustomVideoEncodingBitrate() const;
    void CustomVideoEncodingHeight(uint32_t value) const;
    uint32_t CustomVideoEncodingHeight() const;
    void CustomVideoEncodingWidth(uint32_t value) const;
    uint32_t CustomVideoEncodingWidth() const;
    void VideoEncodingBitrateMode(Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode const& value) const;
    Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode VideoEncodingBitrateMode() const;
    void VideoEncodingResolutionMode(Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode const& value) const;
    Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode VideoEncodingResolutionMode() const;
};
template <> struct consume<Windows::Media::Capture::IAppBroadcastProviderSettings> { template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastProviderSettings<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppBroadcastServices
{
    Windows::Media::Capture::AppBroadcastCaptureTargetType CaptureTargetType() const;
    void CaptureTargetType(Windows::Media::Capture::AppBroadcastCaptureTargetType const& value) const;
    hstring BroadcastTitle() const;
    void BroadcastTitle(param::hstring const& value) const;
    hstring BroadcastLanguage() const;
    void BroadcastLanguage(param::hstring const& value) const;
    hstring UserName() const;
    bool CanCapture() const;
    Windows::Foundation::IAsyncOperation<uint32_t> EnterBroadcastModeAsync(Windows::Media::Capture::AppBroadcastPlugIn const& plugIn) const;
    void ExitBroadcastMode(Windows::Media::Capture::AppBroadcastExitBroadcastModeReason const& reason) const;
    void StartBroadcast() const;
    void PauseBroadcast() const;
    void ResumeBroadcast() const;
    Windows::Media::Capture::AppBroadcastPreview StartPreview(Windows::Foundation::Size const& desiredSize) const;
    Windows::Media::Capture::AppBroadcastState State() const;
};
template <> struct consume<Windows::Media::Capture::IAppBroadcastServices> { template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastServices<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppBroadcastSignInStateChangedEventArgs
{
    Windows::Media::Capture::AppBroadcastSignInState SignInState() const;
    Windows::Media::Capture::AppBroadcastSignInResult Result() const;
};
template <> struct consume<Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastSignInStateChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppBroadcastState
{
    bool IsCaptureTargetRunning() const;
    uint32_t ViewerCount() const;
    bool ShouldCaptureMicrophone() const;
    void ShouldCaptureMicrophone(bool value) const;
    void RestartMicrophoneCapture() const;
    bool ShouldCaptureCamera() const;
    void ShouldCaptureCamera(bool value) const;
    void RestartCameraCapture() const;
    Windows::Foundation::Size EncodedVideoSize() const;
    Windows::Media::Capture::AppBroadcastMicrophoneCaptureState MicrophoneCaptureState() const;
    uint32_t MicrophoneCaptureError() const;
    Windows::Media::Capture::AppBroadcastCameraCaptureState CameraCaptureState() const;
    uint32_t CameraCaptureError() const;
    Windows::Media::Capture::AppBroadcastStreamState StreamState() const;
    Windows::Media::Capture::AppBroadcastPlugInState PlugInState() const;
    Windows::Foundation::Uri OAuthRequestUri() const;
    Windows::Foundation::Uri OAuthCallbackUri() const;
    Windows::Security::Authentication::Web::WebAuthenticationResult AuthenticationResult() const;
    void AuthenticationResult(Windows::Security::Authentication::Web::WebAuthenticationResult const& value) const;
    void SignInState(Windows::Media::Capture::AppBroadcastSignInState const& value) const;
    Windows::Media::Capture::AppBroadcastSignInState SignInState() const;
    Windows::Media::Capture::AppBroadcastTerminationReason TerminationReason() const;
    uint32_t TerminationReasonPlugInSpecific() const;
    event_token ViewerCountChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs> const& value) const;
    using ViewerCountChanged_revoker = event_revoker<Windows::Media::Capture::IAppBroadcastState>;
    ViewerCountChanged_revoker ViewerCountChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs> const& value) const;
    void ViewerCountChanged(event_token const& token) const;
    event_token MicrophoneCaptureStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs> const& value) const;
    using MicrophoneCaptureStateChanged_revoker = event_revoker<Windows::Media::Capture::IAppBroadcastState>;
    MicrophoneCaptureStateChanged_revoker MicrophoneCaptureStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs> const& value) const;
    void MicrophoneCaptureStateChanged(event_token const& token) const;
    event_token CameraCaptureStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs> const& value) const;
    using CameraCaptureStateChanged_revoker = event_revoker<Windows::Media::Capture::IAppBroadcastState>;
    CameraCaptureStateChanged_revoker CameraCaptureStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs> const& value) const;
    void CameraCaptureStateChanged(event_token const& token) const;
    event_token PlugInStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs> const& handler) const;
    using PlugInStateChanged_revoker = event_revoker<Windows::Media::Capture::IAppBroadcastState>;
    PlugInStateChanged_revoker PlugInStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs> const& handler) const;
    void PlugInStateChanged(event_token const& token) const;
    event_token StreamStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> const& handler) const;
    using StreamStateChanged_revoker = event_revoker<Windows::Media::Capture::IAppBroadcastState>;
    StreamStateChanged_revoker StreamStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> const& handler) const;
    void StreamStateChanged(event_token const& token) const;
    event_token CaptureTargetClosed(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Foundation::IInspectable> const& value) const;
    using CaptureTargetClosed_revoker = event_revoker<Windows::Media::Capture::IAppBroadcastState>;
    CaptureTargetClosed_revoker CaptureTargetClosed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Foundation::IInspectable> const& value) const;
    void CaptureTargetClosed(event_token const& token) const;
};
template <> struct consume<Windows::Media::Capture::IAppBroadcastState> { template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastState<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppBroadcastStreamAudioFrame
{
    Windows::Media::Capture::AppBroadcastStreamAudioHeader AudioHeader() const;
    Windows::Storage::Streams::IBuffer AudioBuffer() const;
};
template <> struct consume<Windows::Media::Capture::IAppBroadcastStreamAudioFrame> { template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastStreamAudioFrame<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppBroadcastStreamAudioHeader
{
    Windows::Foundation::DateTime AbsoluteTimestamp() const;
    Windows::Foundation::TimeSpan RelativeTimestamp() const;
    Windows::Foundation::TimeSpan Duration() const;
    bool HasDiscontinuity() const;
    uint64_t FrameId() const;
};
template <> struct consume<Windows::Media::Capture::IAppBroadcastStreamAudioHeader> { template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastStreamAudioHeader<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppBroadcastStreamReader
{
    uint32_t AudioChannels() const;
    uint32_t AudioSampleRate() const;
    Windows::Storage::Streams::IBuffer AudioAacSequence() const;
    uint32_t AudioBitrate() const;
    Windows::Media::Capture::AppBroadcastStreamAudioFrame TryGetNextAudioFrame() const;
    uint32_t VideoWidth() const;
    uint32_t VideoHeight() const;
    uint32_t VideoBitrate() const;
    Windows::Media::Capture::AppBroadcastStreamVideoFrame TryGetNextVideoFrame() const;
    event_token AudioFrameArrived(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> const& value) const;
    using AudioFrameArrived_revoker = event_revoker<Windows::Media::Capture::IAppBroadcastStreamReader>;
    AudioFrameArrived_revoker AudioFrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> const& value) const;
    void AudioFrameArrived(event_token const& token) const;
    event_token VideoFrameArrived(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> const& value) const;
    using VideoFrameArrived_revoker = event_revoker<Windows::Media::Capture::IAppBroadcastStreamReader>;
    VideoFrameArrived_revoker VideoFrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> const& value) const;
    void VideoFrameArrived(event_token const& token) const;
};
template <> struct consume<Windows::Media::Capture::IAppBroadcastStreamReader> { template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastStreamReader<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppBroadcastStreamStateChangedEventArgs
{
    Windows::Media::Capture::AppBroadcastStreamState StreamState() const;
};
template <> struct consume<Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastStreamStateChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppBroadcastStreamVideoFrame
{
    Windows::Media::Capture::AppBroadcastStreamVideoHeader VideoHeader() const;
    Windows::Storage::Streams::IBuffer VideoBuffer() const;
};
template <> struct consume<Windows::Media::Capture::IAppBroadcastStreamVideoFrame> { template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastStreamVideoFrame<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppBroadcastStreamVideoHeader
{
    Windows::Foundation::DateTime AbsoluteTimestamp() const;
    Windows::Foundation::TimeSpan RelativeTimestamp() const;
    Windows::Foundation::TimeSpan Duration() const;
    bool IsKeyFrame() const;
    bool HasDiscontinuity() const;
    uint64_t FrameId() const;
};
template <> struct consume<Windows::Media::Capture::IAppBroadcastStreamVideoHeader> { template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastStreamVideoHeader<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppBroadcastTriggerDetails
{
    Windows::Media::Capture::AppBroadcastBackgroundService BackgroundService() const;
};
template <> struct consume<Windows::Media::Capture::IAppBroadcastTriggerDetails> { template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastTriggerDetails<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppBroadcastViewerCountChangedEventArgs
{
    uint32_t ViewerCount() const;
};
template <> struct consume<Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_IAppBroadcastViewerCountChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppCapture
{
    bool IsCapturingAudio() const;
    bool IsCapturingVideo() const;
    event_token CapturingChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCapture, Windows::Foundation::IInspectable> const& handler) const;
    using CapturingChanged_revoker = event_revoker<Windows::Media::Capture::IAppCapture>;
    CapturingChanged_revoker CapturingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCapture, Windows::Foundation::IInspectable> const& handler) const;
    void CapturingChanged(event_token const& token) const;
};
template <> struct consume<Windows::Media::Capture::IAppCapture> { template <typename D> using type = consume_Windows_Media_Capture_IAppCapture<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys
{
    void ToggleGameBarKey(Windows::System::VirtualKey const& value) const;
    Windows::System::VirtualKey ToggleGameBarKey() const;
    void ToggleGameBarKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const;
    Windows::System::VirtualKeyModifiers ToggleGameBarKeyModifiers() const;
    void SaveHistoricalVideoKey(Windows::System::VirtualKey const& value) const;
    Windows::System::VirtualKey SaveHistoricalVideoKey() const;
    void SaveHistoricalVideoKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const;
    Windows::System::VirtualKeyModifiers SaveHistoricalVideoKeyModifiers() const;
    void ToggleRecordingKey(Windows::System::VirtualKey const& value) const;
    Windows::System::VirtualKey ToggleRecordingKey() const;
    void ToggleRecordingKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const;
    Windows::System::VirtualKeyModifiers ToggleRecordingKeyModifiers() const;
    void TakeScreenshotKey(Windows::System::VirtualKey const& value) const;
    Windows::System::VirtualKey TakeScreenshotKey() const;
    void TakeScreenshotKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const;
    Windows::System::VirtualKeyModifiers TakeScreenshotKeyModifiers() const;
    void ToggleRecordingIndicatorKey(Windows::System::VirtualKey const& value) const;
    Windows::System::VirtualKey ToggleRecordingIndicatorKey() const;
    void ToggleRecordingIndicatorKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const;
    Windows::System::VirtualKeyModifiers ToggleRecordingIndicatorKeyModifiers() const;
};
template <> struct consume<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys> { template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys2
{
    void ToggleMicrophoneCaptureKey(Windows::System::VirtualKey const& value) const;
    Windows::System::VirtualKey ToggleMicrophoneCaptureKey() const;
    void ToggleMicrophoneCaptureKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const;
    Windows::System::VirtualKeyModifiers ToggleMicrophoneCaptureKeyModifiers() const;
};
template <> struct consume<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2> { template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys2<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys3
{
    void ToggleCameraCaptureKey(Windows::System::VirtualKey const& value) const;
    Windows::System::VirtualKey ToggleCameraCaptureKey() const;
    void ToggleCameraCaptureKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const;
    Windows::System::VirtualKeyModifiers ToggleCameraCaptureKeyModifiers() const;
    void ToggleBroadcastKey(Windows::System::VirtualKey const& value) const;
    Windows::System::VirtualKey ToggleBroadcastKey() const;
    void ToggleBroadcastKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const;
    Windows::System::VirtualKeyModifiers ToggleBroadcastKeyModifiers() const;
};
template <> struct consume<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3> { template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys3<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppCaptureDurationGeneratedEventArgs
{
    Windows::Foundation::TimeSpan Duration() const;
};
template <> struct consume<Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureDurationGeneratedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppCaptureFileGeneratedEventArgs
{
    Windows::Storage::StorageFile File() const;
};
template <> struct consume<Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureFileGeneratedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppCaptureManagerStatics
{
    Windows::Media::Capture::AppCaptureSettings GetCurrentSettings() const;
    void ApplySettings(Windows::Media::Capture::AppCaptureSettings const& appCaptureSettings) const;
};
template <> struct consume<Windows::Media::Capture::IAppCaptureManagerStatics> { template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureManagerStatics<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppCaptureMicrophoneCaptureStateChangedEventArgs
{
    Windows::Media::Capture::AppCaptureMicrophoneCaptureState State() const;
    uint32_t ErrorCode() const;
};
template <> struct consume<Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureMicrophoneCaptureStateChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppCaptureRecordOperation
{
    void StopRecording() const;
    Windows::Media::Capture::AppCaptureRecordingState State() const;
    Windows::Foundation::IReference<uint32_t> ErrorCode() const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> Duration() const;
    Windows::Storage::StorageFile File() const;
    Windows::Foundation::IReference<bool> IsFileTruncated() const;
    event_token StateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs> const& value) const;
    using StateChanged_revoker = event_revoker<Windows::Media::Capture::IAppCaptureRecordOperation>;
    StateChanged_revoker StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs> const& value) const;
    void StateChanged(event_token const& token) const;
    event_token DurationGenerated(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs> const& value) const;
    using DurationGenerated_revoker = event_revoker<Windows::Media::Capture::IAppCaptureRecordOperation>;
    DurationGenerated_revoker DurationGenerated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs> const& value) const;
    void DurationGenerated(event_token const& token) const;
    event_token FileGenerated(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureFileGeneratedEventArgs> const& value) const;
    using FileGenerated_revoker = event_revoker<Windows::Media::Capture::IAppCaptureRecordOperation>;
    FileGenerated_revoker FileGenerated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureFileGeneratedEventArgs> const& value) const;
    void FileGenerated(event_token const& token) const;
};
template <> struct consume<Windows::Media::Capture::IAppCaptureRecordOperation> { template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureRecordOperation<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppCaptureRecordingStateChangedEventArgs
{
    Windows::Media::Capture::AppCaptureRecordingState State() const;
    uint32_t ErrorCode() const;
};
template <> struct consume<Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureRecordingStateChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppCaptureServices
{
    Windows::Media::Capture::AppCaptureRecordOperation Record() const;
    Windows::Media::Capture::AppCaptureRecordOperation RecordTimeSpan(Windows::Foundation::DateTime const& startTime, Windows::Foundation::TimeSpan const& duration) const;
    bool CanCapture() const;
    Windows::Media::Capture::AppCaptureState State() const;
};
template <> struct consume<Windows::Media::Capture::IAppCaptureServices> { template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureServices<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppCaptureSettings
{
    void AppCaptureDestinationFolder(Windows::Storage::StorageFolder const& value) const;
    Windows::Storage::StorageFolder AppCaptureDestinationFolder() const;
    void AudioEncodingBitrate(uint32_t value) const;
    uint32_t AudioEncodingBitrate() const;
    void IsAudioCaptureEnabled(bool value) const;
    bool IsAudioCaptureEnabled() const;
    void CustomVideoEncodingBitrate(uint32_t value) const;
    uint32_t CustomVideoEncodingBitrate() const;
    void CustomVideoEncodingHeight(uint32_t value) const;
    uint32_t CustomVideoEncodingHeight() const;
    void CustomVideoEncodingWidth(uint32_t value) const;
    uint32_t CustomVideoEncodingWidth() const;
    void HistoricalBufferLength(uint32_t value) const;
    uint32_t HistoricalBufferLength() const;
    void HistoricalBufferLengthUnit(Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit const& value) const;
    Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit HistoricalBufferLengthUnit() const;
    void IsHistoricalCaptureEnabled(bool value) const;
    bool IsHistoricalCaptureEnabled() const;
    void IsHistoricalCaptureOnBatteryAllowed(bool value) const;
    bool IsHistoricalCaptureOnBatteryAllowed() const;
    void IsHistoricalCaptureOnWirelessDisplayAllowed(bool value) const;
    bool IsHistoricalCaptureOnWirelessDisplayAllowed() const;
    void MaximumRecordLength(Windows::Foundation::TimeSpan const& value) const;
    Windows::Foundation::TimeSpan MaximumRecordLength() const;
    void ScreenshotDestinationFolder(Windows::Storage::StorageFolder const& value) const;
    Windows::Storage::StorageFolder ScreenshotDestinationFolder() const;
    void VideoEncodingBitrateMode(Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode const& value) const;
    Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode VideoEncodingBitrateMode() const;
    void VideoEncodingResolutionMode(Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode const& value) const;
    Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode VideoEncodingResolutionMode() const;
    void IsAppCaptureEnabled(bool value) const;
    bool IsAppCaptureEnabled() const;
    bool IsCpuConstrained() const;
    bool IsDisabledByPolicy() const;
    bool IsMemoryConstrained() const;
    bool HasHardwareEncoder() const;
};
template <> struct consume<Windows::Media::Capture::IAppCaptureSettings> { template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureSettings<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppCaptureSettings2
{
    bool IsGpuConstrained() const;
    Windows::Media::Capture::AppCaptureAlternateShortcutKeys AlternateShortcutKeys() const;
};
template <> struct consume<Windows::Media::Capture::IAppCaptureSettings2> { template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureSettings2<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppCaptureSettings3
{
    void IsMicrophoneCaptureEnabled(bool value) const;
    bool IsMicrophoneCaptureEnabled() const;
};
template <> struct consume<Windows::Media::Capture::IAppCaptureSettings3> { template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureSettings3<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppCaptureSettings4
{
    void IsMicrophoneCaptureEnabledByDefault(bool value) const;
    bool IsMicrophoneCaptureEnabledByDefault() const;
    void SystemAudioGain(double value) const;
    double SystemAudioGain() const;
    void MicrophoneGain(double value) const;
    double MicrophoneGain() const;
    void VideoEncodingFrameRateMode(Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode const& value) const;
    Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode VideoEncodingFrameRateMode() const;
};
template <> struct consume<Windows::Media::Capture::IAppCaptureSettings4> { template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureSettings4<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppCaptureSettings5
{
    void IsEchoCancellationEnabled(bool value) const;
    bool IsEchoCancellationEnabled() const;
    void IsCursorImageCaptureEnabled(bool value) const;
    bool IsCursorImageCaptureEnabled() const;
};
template <> struct consume<Windows::Media::Capture::IAppCaptureSettings5> { template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureSettings5<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppCaptureState
{
    bool IsTargetRunning() const;
    bool IsHistoricalCaptureEnabled() const;
    bool ShouldCaptureMicrophone() const;
    void ShouldCaptureMicrophone(bool value) const;
    void RestartMicrophoneCapture() const;
    Windows::Media::Capture::AppCaptureMicrophoneCaptureState MicrophoneCaptureState() const;
    uint32_t MicrophoneCaptureError() const;
    event_token MicrophoneCaptureStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs> const& value) const;
    using MicrophoneCaptureStateChanged_revoker = event_revoker<Windows::Media::Capture::IAppCaptureState>;
    MicrophoneCaptureStateChanged_revoker MicrophoneCaptureStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs> const& value) const;
    void MicrophoneCaptureStateChanged(event_token const& token) const;
    event_token CaptureTargetClosed(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Foundation::IInspectable> const& value) const;
    using CaptureTargetClosed_revoker = event_revoker<Windows::Media::Capture::IAppCaptureState>;
    CaptureTargetClosed_revoker CaptureTargetClosed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Foundation::IInspectable> const& value) const;
    void CaptureTargetClosed(event_token const& token) const;
};
template <> struct consume<Windows::Media::Capture::IAppCaptureState> { template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureState<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IAppCaptureStatics
{
    Windows::Media::Capture::AppCapture GetForCurrentView() const;
};
template <> struct consume<Windows::Media::Capture::IAppCaptureStatics> { template <typename D> using type = consume_Windows_Media_Capture_IAppCaptureStatics<D>; };

template <typename D>
struct consume_Windows_Media_Capture_ICameraCaptureUI
{
    Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings PhotoSettings() const;
    Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings VideoSettings() const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> CaptureFileAsync(Windows::Media::Capture::CameraCaptureUIMode const& mode) const;
};
template <> struct consume<Windows::Media::Capture::ICameraCaptureUI> { template <typename D> using type = consume_Windows_Media_Capture_ICameraCaptureUI<D>; };

template <typename D>
struct consume_Windows_Media_Capture_ICameraCaptureUIPhotoCaptureSettings
{
    Windows::Media::Capture::CameraCaptureUIPhotoFormat Format() const;
    void Format(Windows::Media::Capture::CameraCaptureUIPhotoFormat const& value) const;
    Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution MaxResolution() const;
    void MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution const& value) const;
    Windows::Foundation::Size CroppedSizeInPixels() const;
    void CroppedSizeInPixels(Windows::Foundation::Size const& value) const;
    Windows::Foundation::Size CroppedAspectRatio() const;
    void CroppedAspectRatio(Windows::Foundation::Size const& value) const;
    bool AllowCropping() const;
    void AllowCropping(bool value) const;
};
template <> struct consume<Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings> { template <typename D> using type = consume_Windows_Media_Capture_ICameraCaptureUIPhotoCaptureSettings<D>; };

template <typename D>
struct consume_Windows_Media_Capture_ICameraCaptureUIVideoCaptureSettings
{
    Windows::Media::Capture::CameraCaptureUIVideoFormat Format() const;
    void Format(Windows::Media::Capture::CameraCaptureUIVideoFormat const& value) const;
    Windows::Media::Capture::CameraCaptureUIMaxVideoResolution MaxResolution() const;
    void MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxVideoResolution const& value) const;
    float MaxDurationInSeconds() const;
    void MaxDurationInSeconds(float value) const;
    bool AllowTrimming() const;
    void AllowTrimming(bool value) const;
};
template <> struct consume<Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings> { template <typename D> using type = consume_Windows_Media_Capture_ICameraCaptureUIVideoCaptureSettings<D>; };

template <typename D>
struct consume_Windows_Media_Capture_ICameraOptionsUIStatics
{
    void Show(Windows::Media::Capture::MediaCapture const& mediaCapture) const;
};
template <> struct consume<Windows::Media::Capture::ICameraOptionsUIStatics> { template <typename D> using type = consume_Windows_Media_Capture_ICameraOptionsUIStatics<D>; };

template <typename D>
struct consume_Windows_Media_Capture_ICapturedFrame
{
    uint32_t Width() const;
    uint32_t Height() const;
};
template <> struct consume<Windows::Media::Capture::ICapturedFrame> { template <typename D> using type = consume_Windows_Media_Capture_ICapturedFrame<D>; };

template <typename D>
struct consume_Windows_Media_Capture_ICapturedFrameControlValues
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> Exposure() const;
    Windows::Foundation::IReference<float> ExposureCompensation() const;
    Windows::Foundation::IReference<uint32_t> IsoSpeed() const;
    Windows::Foundation::IReference<uint32_t> Focus() const;
    Windows::Foundation::IReference<Windows::Media::Devices::CaptureSceneMode> SceneMode() const;
    Windows::Foundation::IReference<bool> Flashed() const;
    Windows::Foundation::IReference<float> FlashPowerPercent() const;
    Windows::Foundation::IReference<uint32_t> WhiteBalance() const;
    Windows::Foundation::IReference<float> ZoomFactor() const;
};
template <> struct consume<Windows::Media::Capture::ICapturedFrameControlValues> { template <typename D> using type = consume_Windows_Media_Capture_ICapturedFrameControlValues<D>; };

template <typename D>
struct consume_Windows_Media_Capture_ICapturedFrameControlValues2
{
    Windows::Foundation::IReference<Windows::Media::Devices::MediaCaptureFocusState> FocusState() const;
    Windows::Foundation::IReference<double> IsoDigitalGain() const;
    Windows::Foundation::IReference<double> IsoAnalogGain() const;
    Windows::Media::MediaProperties::MediaRatio SensorFrameRate() const;
    Windows::Foundation::IReference<Windows::Media::Capture::WhiteBalanceGain> WhiteBalanceGain() const;
};
template <> struct consume<Windows::Media::Capture::ICapturedFrameControlValues2> { template <typename D> using type = consume_Windows_Media_Capture_ICapturedFrameControlValues2<D>; };

template <typename D>
struct consume_Windows_Media_Capture_ICapturedFrameWithSoftwareBitmap
{
    Windows::Graphics::Imaging::SoftwareBitmap SoftwareBitmap() const;
};
template <> struct consume<Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap> { template <typename D> using type = consume_Windows_Media_Capture_ICapturedFrameWithSoftwareBitmap<D>; };

template <typename D>
struct consume_Windows_Media_Capture_ICapturedPhoto
{
    Windows::Media::Capture::CapturedFrame Frame() const;
    Windows::Media::Capture::CapturedFrame Thumbnail() const;
};
template <> struct consume<Windows::Media::Capture::ICapturedPhoto> { template <typename D> using type = consume_Windows_Media_Capture_ICapturedPhoto<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IGameBarServices
{
    Windows::Media::Capture::GameBarTargetCapturePolicy TargetCapturePolicy() const;
    void EnableCapture() const;
    void DisableCapture() const;
    Windows::Media::Capture::GameBarServicesTargetInfo TargetInfo() const;
    hstring SessionId() const;
    Windows::Media::Capture::AppBroadcastServices AppBroadcastServices() const;
    Windows::Media::Capture::AppCaptureServices AppCaptureServices() const;
    event_token CommandReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServices, Windows::Media::Capture::GameBarServicesCommandEventArgs> const& value) const;
    using CommandReceived_revoker = event_revoker<Windows::Media::Capture::IGameBarServices>;
    CommandReceived_revoker CommandReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServices, Windows::Media::Capture::GameBarServicesCommandEventArgs> const& value) const;
    void CommandReceived(event_token const& token) const;
};
template <> struct consume<Windows::Media::Capture::IGameBarServices> { template <typename D> using type = consume_Windows_Media_Capture_IGameBarServices<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IGameBarServicesCommandEventArgs
{
    Windows::Media::Capture::GameBarCommand Command() const;
    Windows::Media::Capture::GameBarCommandOrigin Origin() const;
};
template <> struct consume<Windows::Media::Capture::IGameBarServicesCommandEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_IGameBarServicesCommandEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IGameBarServicesManager
{
    event_token GameBarServicesCreated(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServicesManager, Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs> const& value) const;
    using GameBarServicesCreated_revoker = event_revoker<Windows::Media::Capture::IGameBarServicesManager>;
    GameBarServicesCreated_revoker GameBarServicesCreated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServicesManager, Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs> const& value) const;
    void GameBarServicesCreated(event_token const& token) const;
};
template <> struct consume<Windows::Media::Capture::IGameBarServicesManager> { template <typename D> using type = consume_Windows_Media_Capture_IGameBarServicesManager<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IGameBarServicesManagerGameBarServicesCreatedEventArgs
{
    Windows::Media::Capture::GameBarServices GameBarServices() const;
};
template <> struct consume<Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_IGameBarServicesManagerGameBarServicesCreatedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IGameBarServicesManagerStatics
{
    Windows::Media::Capture::GameBarServicesManager GetDefault() const;
};
template <> struct consume<Windows::Media::Capture::IGameBarServicesManagerStatics> { template <typename D> using type = consume_Windows_Media_Capture_IGameBarServicesManagerStatics<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IGameBarServicesTargetInfo
{
    hstring DisplayName() const;
    hstring AppId() const;
    hstring TitleId() const;
    Windows::Media::Capture::GameBarServicesDisplayMode DisplayMode() const;
};
template <> struct consume<Windows::Media::Capture::IGameBarServicesTargetInfo> { template <typename D> using type = consume_Windows_Media_Capture_IGameBarServicesTargetInfo<D>; };

template <typename D>
struct consume_Windows_Media_Capture_ILowLagMediaRecording
{
    Windows::Foundation::IAsyncAction StartAsync() const;
    Windows::Foundation::IAsyncAction StopAsync() const;
    Windows::Foundation::IAsyncAction FinishAsync() const;
};
template <> struct consume<Windows::Media::Capture::ILowLagMediaRecording> { template <typename D> using type = consume_Windows_Media_Capture_ILowLagMediaRecording<D>; };

template <typename D>
struct consume_Windows_Media_Capture_ILowLagMediaRecording2
{
    Windows::Foundation::IAsyncAction PauseAsync(Windows::Media::Devices::MediaCapturePauseBehavior const& behavior) const;
    Windows::Foundation::IAsyncAction ResumeAsync() const;
};
template <> struct consume<Windows::Media::Capture::ILowLagMediaRecording2> { template <typename D> using type = consume_Windows_Media_Capture_ILowLagMediaRecording2<D>; };

template <typename D>
struct consume_Windows_Media_Capture_ILowLagMediaRecording3
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult> PauseWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior const& behavior) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult> StopWithResultAsync() const;
};
template <> struct consume<Windows::Media::Capture::ILowLagMediaRecording3> { template <typename D> using type = consume_Windows_Media_Capture_ILowLagMediaRecording3<D>; };

template <typename D>
struct consume_Windows_Media_Capture_ILowLagPhotoCapture
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::CapturedPhoto> CaptureAsync() const;
    Windows::Foundation::IAsyncAction FinishAsync() const;
};
template <> struct consume<Windows::Media::Capture::ILowLagPhotoCapture> { template <typename D> using type = consume_Windows_Media_Capture_ILowLagPhotoCapture<D>; };

template <typename D>
struct consume_Windows_Media_Capture_ILowLagPhotoSequenceCapture
{
    Windows::Foundation::IAsyncAction StartAsync() const;
    Windows::Foundation::IAsyncAction StopAsync() const;
    Windows::Foundation::IAsyncAction FinishAsync() const;
    event_token PhotoCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture, Windows::Media::Capture::PhotoCapturedEventArgs> const& handler) const;
    using PhotoCaptured_revoker = event_revoker<Windows::Media::Capture::ILowLagPhotoSequenceCapture>;
    PhotoCaptured_revoker PhotoCaptured(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture, Windows::Media::Capture::PhotoCapturedEventArgs> const& handler) const;
    void PhotoCaptured(event_token const& token) const;
};
template <> struct consume<Windows::Media::Capture::ILowLagPhotoSequenceCapture> { template <typename D> using type = consume_Windows_Media_Capture_ILowLagPhotoSequenceCapture<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCapture
{
    Windows::Foundation::IAsyncAction InitializeAsync() const;
    Windows::Foundation::IAsyncAction InitializeAsync(Windows::Media::Capture::MediaCaptureInitializationSettings const& mediaCaptureInitializationSettings) const;
    Windows::Foundation::IAsyncAction StartRecordToStorageFileAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Storage::IStorageFile const& file) const;
    Windows::Foundation::IAsyncAction StartRecordToStreamAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Storage::Streams::IRandomAccessStream const& stream) const;
    Windows::Foundation::IAsyncAction StartRecordToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Media::IMediaExtension const& customMediaSink) const;
    Windows::Foundation::IAsyncAction StartRecordToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, param::hstring const& customSinkActivationId, Windows::Foundation::Collections::IPropertySet const& customSinkSettings) const;
    Windows::Foundation::IAsyncAction StopRecordAsync() const;
    Windows::Foundation::IAsyncAction CapturePhotoToStorageFileAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type, Windows::Storage::IStorageFile const& file) const;
    Windows::Foundation::IAsyncAction CapturePhotoToStreamAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type, Windows::Storage::Streams::IRandomAccessStream const& stream) const;
    [[deprecated("AddEffectAsync might not be available in future versions of Windows. Starting with Windows Threshold, use AddAudioEffectAsync and AddVideoEffectAsync instead")]] Windows::Foundation::IAsyncAction AddEffectAsync(Windows::Media::Capture::MediaStreamType const& mediaStreamType, param::hstring const& effectActivationID, Windows::Foundation::Collections::IPropertySet const& effectSettings) const;
    Windows::Foundation::IAsyncAction ClearEffectsAsync(Windows::Media::Capture::MediaStreamType const& mediaStreamType) const;
    void SetEncoderProperty(Windows::Media::Capture::MediaStreamType const& mediaStreamType, GUID const& propertyId, Windows::Foundation::IInspectable const& propertyValue) const;
    Windows::Foundation::IInspectable GetEncoderProperty(Windows::Media::Capture::MediaStreamType const& mediaStreamType, GUID const& propertyId) const;
    event_token Failed(Windows::Media::Capture::MediaCaptureFailedEventHandler const& errorEventHandler) const;
    using Failed_revoker = event_revoker<Windows::Media::Capture::IMediaCapture>;
    Failed_revoker Failed(auto_revoke_t, Windows::Media::Capture::MediaCaptureFailedEventHandler const& errorEventHandler) const;
    void Failed(event_token const& eventCookie) const;
    event_token RecordLimitationExceeded(Windows::Media::Capture::RecordLimitationExceededEventHandler const& recordLimitationExceededEventHandler) const;
    using RecordLimitationExceeded_revoker = event_revoker<Windows::Media::Capture::IMediaCapture>;
    RecordLimitationExceeded_revoker RecordLimitationExceeded(auto_revoke_t, Windows::Media::Capture::RecordLimitationExceededEventHandler const& recordLimitationExceededEventHandler) const;
    void RecordLimitationExceeded(event_token const& eventCookie) const;
    Windows::Media::Capture::MediaCaptureSettings MediaCaptureSettings() const;
    Windows::Media::Devices::AudioDeviceController AudioDeviceController() const;
    Windows::Media::Devices::VideoDeviceController VideoDeviceController() const;
    void SetPreviewMirroring(bool value) const;
    bool GetPreviewMirroring() const;
    void SetPreviewRotation(Windows::Media::Capture::VideoRotation const& value) const;
    Windows::Media::Capture::VideoRotation GetPreviewRotation() const;
    void SetRecordRotation(Windows::Media::Capture::VideoRotation const& value) const;
    Windows::Media::Capture::VideoRotation GetRecordRotation() const;
};
template <> struct consume<Windows::Media::Capture::IMediaCapture> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCapture<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCapture2
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> PrepareLowLagRecordToStorageFileAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Storage::IStorageFile const& file) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> PrepareLowLagRecordToStreamAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Storage::Streams::IRandomAccessStream const& stream) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> PrepareLowLagRecordToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Media::IMediaExtension const& customMediaSink) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> PrepareLowLagRecordToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, param::hstring const& customSinkActivationId, Windows::Foundation::Collections::IPropertySet const& customSinkSettings) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoCapture> PrepareLowLagPhotoCaptureAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoSequenceCapture> PrepareLowLagPhotoSequenceCaptureAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type) const;
    Windows::Foundation::IAsyncAction SetEncodingPropertiesAsync(Windows::Media::Capture::MediaStreamType const& mediaStreamType, Windows::Media::MediaProperties::IMediaEncodingProperties const& mediaEncodingProperties, Windows::Media::MediaProperties::MediaPropertySet const& encoderProperties) const;
};
template <> struct consume<Windows::Media::Capture::IMediaCapture2> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCapture2<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCapture3
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Core::VariablePhotoSequenceCapture> PrepareVariablePhotoSequenceCaptureAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type) const;
    event_token FocusChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> const& handler) const;
    using FocusChanged_revoker = event_revoker<Windows::Media::Capture::IMediaCapture3>;
    FocusChanged_revoker FocusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> const& handler) const;
    void FocusChanged(event_token const& token) const;
    event_token PhotoConfirmationCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> const& handler) const;
    using PhotoConfirmationCaptured_revoker = event_revoker<Windows::Media::Capture::IMediaCapture3>;
    PhotoConfirmationCaptured_revoker PhotoConfirmationCaptured(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> const& handler) const;
    void PhotoConfirmationCaptured(event_token const& token) const;
};
template <> struct consume<Windows::Media::Capture::IMediaCapture3> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCapture3<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCapture4
{
    Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension> AddAudioEffectAsync(Windows::Media::Effects::IAudioEffectDefinition const& definition) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension> AddVideoEffectAsync(Windows::Media::Effects::IVideoEffectDefinition const& definition, Windows::Media::Capture::MediaStreamType const& mediaStreamType) const;
    Windows::Foundation::IAsyncAction PauseRecordAsync(Windows::Media::Devices::MediaCapturePauseBehavior const& behavior) const;
    Windows::Foundation::IAsyncAction ResumeRecordAsync() const;
    event_token CameraStreamStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> const& handler) const;
    using CameraStreamStateChanged_revoker = event_revoker<Windows::Media::Capture::IMediaCapture4>;
    CameraStreamStateChanged_revoker CameraStreamStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> const& handler) const;
    void CameraStreamStateChanged(event_token const& token) const;
    Windows::Media::Devices::CameraStreamState CameraStreamState() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame> GetPreviewFrameAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame> GetPreviewFrameAsync(Windows::Media::VideoFrame const& destination) const;
    event_token ThermalStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> const& handler) const;
    using ThermalStatusChanged_revoker = event_revoker<Windows::Media::Capture::IMediaCapture4>;
    ThermalStatusChanged_revoker ThermalStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> const& handler) const;
    void ThermalStatusChanged(event_token const& token) const;
    Windows::Media::Capture::MediaCaptureThermalStatus ThermalStatus() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedPhotoCapture> PrepareAdvancedPhotoCaptureAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& encodingProperties) const;
};
template <> struct consume<Windows::Media::Capture::IMediaCapture4> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCapture4<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCapture5
{
    Windows::Foundation::IAsyncAction RemoveEffectAsync(Windows::Media::IMediaExtension const& effect) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult> PauseRecordWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior const& behavior) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult> StopRecordWithResultAsync() const;
    Windows::Foundation::Collections::IMapView<hstring, Windows::Media::Capture::Frames::MediaFrameSource> FrameSources() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> CreateFrameReaderAsync(Windows::Media::Capture::Frames::MediaFrameSource const& inputSource) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> CreateFrameReaderAsync(Windows::Media::Capture::Frames::MediaFrameSource const& inputSource, param::hstring const& outputSubtype) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> CreateFrameReaderAsync(Windows::Media::Capture::Frames::MediaFrameSource const& inputSource, param::hstring const& outputSubtype, Windows::Graphics::Imaging::BitmapSize const& outputSize) const;
};
template <> struct consume<Windows::Media::Capture::IMediaCapture5> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCapture5<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCapture6
{
    event_token CaptureDeviceExclusiveControlStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs> const& handler) const;
    using CaptureDeviceExclusiveControlStatusChanged_revoker = event_revoker<Windows::Media::Capture::IMediaCapture6>;
    CaptureDeviceExclusiveControlStatusChanged_revoker CaptureDeviceExclusiveControlStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs> const& handler) const;
    void CaptureDeviceExclusiveControlStatusChanged(event_token const& token) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MultiSourceMediaFrameReader> CreateMultiSourceFrameReaderAsync(param::async_iterable<Windows::Media::Capture::Frames::MediaFrameSource> const& inputSources) const;
};
template <> struct consume<Windows::Media::Capture::IMediaCapture6> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCapture6<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs
{
    hstring DeviceId() const;
    Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatus Status() const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureFailedEventArgs
{
    hstring Message() const;
    uint32_t Code() const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureFailedEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureFailedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureFocusChangedEventArgs
{
    Windows::Media::Devices::MediaCaptureFocusState FocusState() const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureFocusChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureInitializationSettings
{
    void AudioDeviceId(param::hstring const& value) const;
    hstring AudioDeviceId() const;
    void VideoDeviceId(param::hstring const& value) const;
    hstring VideoDeviceId() const;
    void StreamingCaptureMode(Windows::Media::Capture::StreamingCaptureMode const& value) const;
    Windows::Media::Capture::StreamingCaptureMode StreamingCaptureMode() const;
    void PhotoCaptureSource(Windows::Media::Capture::PhotoCaptureSource const& value) const;
    Windows::Media::Capture::PhotoCaptureSource PhotoCaptureSource() const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureInitializationSettings> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureInitializationSettings<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureInitializationSettings2
{
    void MediaCategory(Windows::Media::Capture::MediaCategory const& value) const;
    Windows::Media::Capture::MediaCategory MediaCategory() const;
    void AudioProcessing(Windows::Media::AudioProcessing const& value) const;
    Windows::Media::AudioProcessing AudioProcessing() const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureInitializationSettings2> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureInitializationSettings2<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureInitializationSettings3
{
    void AudioSource(Windows::Media::Core::IMediaSource const& value) const;
    Windows::Media::Core::IMediaSource AudioSource() const;
    void VideoSource(Windows::Media::Core::IMediaSource const& value) const;
    Windows::Media::Core::IMediaSource VideoSource() const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureInitializationSettings3> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureInitializationSettings3<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureInitializationSettings4
{
    Windows::Media::Capture::MediaCaptureVideoProfile VideoProfile() const;
    void VideoProfile(Windows::Media::Capture::MediaCaptureVideoProfile const& value) const;
    Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription PreviewMediaDescription() const;
    void PreviewMediaDescription(Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription const& value) const;
    Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription RecordMediaDescription() const;
    void RecordMediaDescription(Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription const& value) const;
    Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription PhotoMediaDescription() const;
    void PhotoMediaDescription(Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription const& value) const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureInitializationSettings4> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureInitializationSettings4<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureInitializationSettings5
{
    Windows::Media::Capture::Frames::MediaFrameSourceGroup SourceGroup() const;
    void SourceGroup(Windows::Media::Capture::Frames::MediaFrameSourceGroup const& value) const;
    Windows::Media::Capture::MediaCaptureSharingMode SharingMode() const;
    void SharingMode(Windows::Media::Capture::MediaCaptureSharingMode const& value) const;
    Windows::Media::Capture::MediaCaptureMemoryPreference MemoryPreference() const;
    void MemoryPreference(Windows::Media::Capture::MediaCaptureMemoryPreference const& value) const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureInitializationSettings5> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureInitializationSettings5<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureInitializationSettings6
{
    bool AlwaysPlaySystemShutterSound() const;
    void AlwaysPlaySystemShutterSound(bool value) const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureInitializationSettings6> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureInitializationSettings6<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCapturePauseResult
{
    Windows::Media::VideoFrame LastFrame() const;
    Windows::Foundation::TimeSpan RecordDuration() const;
};
template <> struct consume<Windows::Media::Capture::IMediaCapturePauseResult> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCapturePauseResult<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureSettings
{
    hstring AudioDeviceId() const;
    hstring VideoDeviceId() const;
    Windows::Media::Capture::StreamingCaptureMode StreamingCaptureMode() const;
    Windows::Media::Capture::PhotoCaptureSource PhotoCaptureSource() const;
    Windows::Media::Capture::VideoDeviceCharacteristic VideoDeviceCharacteristic() const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureSettings> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureSettings<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureSettings2
{
    bool ConcurrentRecordAndPhotoSupported() const;
    bool ConcurrentRecordAndPhotoSequenceSupported() const;
    bool CameraSoundRequiredForRegion() const;
    Windows::Foundation::IReference<uint32_t> Horizontal35mmEquivalentFocalLength() const;
    Windows::Foundation::IReference<int32_t> PitchOffsetDegrees() const;
    Windows::Foundation::IReference<uint32_t> Vertical35mmEquivalentFocalLength() const;
    Windows::Media::Capture::MediaCategory MediaCategory() const;
    Windows::Media::AudioProcessing AudioProcessing() const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureSettings2> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureSettings2<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureStatics
{
    bool IsVideoProfileSupported(param::hstring const& videoDeviceId) const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> FindAllVideoProfiles(param::hstring const& videoDeviceId) const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> FindConcurrentProfiles(param::hstring const& videoDeviceId) const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> FindKnownVideoProfiles(param::hstring const& videoDeviceId, Windows::Media::Capture::KnownVideoProfile const& name) const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureStatics> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureStatics<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureStopResult
{
    Windows::Media::VideoFrame LastFrame() const;
    Windows::Foundation::TimeSpan RecordDuration() const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureStopResult> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureStopResult<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureVideoPreview
{
    Windows::Foundation::IAsyncAction StartPreviewAsync() const;
    Windows::Foundation::IAsyncAction StartPreviewToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Media::IMediaExtension const& customMediaSink) const;
    Windows::Foundation::IAsyncAction StartPreviewToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, param::hstring const& customSinkActivationId, Windows::Foundation::Collections::IPropertySet const& customSinkSettings) const;
    Windows::Foundation::IAsyncAction StopPreviewAsync() const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureVideoPreview> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureVideoPreview<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureVideoProfile
{
    hstring Id() const;
    hstring VideoDeviceId() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> SupportedPreviewMediaDescription() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> SupportedRecordMediaDescription() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> SupportedPhotoMediaDescription() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> GetConcurrency() const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureVideoProfile> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureVideoProfile<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IMediaCaptureVideoProfileMediaDescription
{
    uint32_t Width() const;
    uint32_t Height() const;
    double FrameRate() const;
    bool IsVariablePhotoSequenceSupported() const;
    bool IsHdrVideoSupported() const;
};
template <> struct consume<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription> { template <typename D> using type = consume_Windows_Media_Capture_IMediaCaptureVideoProfileMediaDescription<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IOptionalReferencePhotoCapturedEventArgs
{
    Windows::Media::Capture::CapturedFrame Frame() const;
    Windows::Foundation::IInspectable Context() const;
};
template <> struct consume<Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_IOptionalReferencePhotoCapturedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IPhotoCapturedEventArgs
{
    Windows::Media::Capture::CapturedFrame Frame() const;
    Windows::Media::Capture::CapturedFrame Thumbnail() const;
    Windows::Foundation::TimeSpan CaptureTimeOffset() const;
};
template <> struct consume<Windows::Media::Capture::IPhotoCapturedEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_IPhotoCapturedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IPhotoConfirmationCapturedEventArgs
{
    Windows::Media::Capture::CapturedFrame Frame() const;
    Windows::Foundation::TimeSpan CaptureTimeOffset() const;
};
template <> struct consume<Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_IPhotoConfirmationCapturedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IScreenCapture
{
    Windows::Media::Core::IMediaSource AudioSource() const;
    Windows::Media::Core::IMediaSource VideoSource() const;
    bool IsAudioSuspended() const;
    bool IsVideoSuspended() const;
    event_token SourceSuspensionChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::ScreenCapture, Windows::Media::Capture::SourceSuspensionChangedEventArgs> const& handler) const;
    using SourceSuspensionChanged_revoker = event_revoker<Windows::Media::Capture::IScreenCapture>;
    SourceSuspensionChanged_revoker SourceSuspensionChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::ScreenCapture, Windows::Media::Capture::SourceSuspensionChangedEventArgs> const& handler) const;
    void SourceSuspensionChanged(event_token const& token) const;
};
template <> struct consume<Windows::Media::Capture::IScreenCapture> { template <typename D> using type = consume_Windows_Media_Capture_IScreenCapture<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IScreenCaptureStatics
{
    Windows::Media::Capture::ScreenCapture GetForCurrentView() const;
};
template <> struct consume<Windows::Media::Capture::IScreenCaptureStatics> { template <typename D> using type = consume_Windows_Media_Capture_IScreenCaptureStatics<D>; };

template <typename D>
struct consume_Windows_Media_Capture_ISourceSuspensionChangedEventArgs
{
    bool IsAudioSuspended() const;
    bool IsVideoSuspended() const;
};
template <> struct consume<Windows::Media::Capture::ISourceSuspensionChangedEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_ISourceSuspensionChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_IVideoStreamConfiguration
{
    Windows::Media::MediaProperties::VideoEncodingProperties InputProperties() const;
    Windows::Media::MediaProperties::VideoEncodingProperties OutputProperties() const;
};
template <> struct consume<Windows::Media::Capture::IVideoStreamConfiguration> { template <typename D> using type = consume_Windows_Media_Capture_IVideoStreamConfiguration<D>; };

template <> struct abi<Windows::Media::Capture::IAdvancedCapturedPhoto>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Frame(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Mode(abi_t<Windows::Media::Devices::AdvancedPhotoMode>* value) = 0;
    virtual HRESULT __stdcall get_Context(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAdvancedCapturedPhoto2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FrameBoundsRelativeToReferencePhoto(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAdvancedPhotoCapture>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CaptureAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CaptureWithContextAsync(::IUnknown* context, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall add_OptionalReferencePhotoCaptured(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_OptionalReferencePhotoCaptured(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_AllPhotosCaptured(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_AllPhotosCaptured(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall FinishAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppBroadcastBackgroundService>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_PlugInState(abi_t<Windows::Media::Capture::AppBroadcastPlugInState> value) = 0;
    virtual HRESULT __stdcall get_PlugInState(abi_t<Windows::Media::Capture::AppBroadcastPlugInState>* value) = 0;
    virtual HRESULT __stdcall put_SignInInfo(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_SignInInfo(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_StreamInfo(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_StreamInfo(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AppId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BroadcastTitle(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_ViewerCount(uint32_t value) = 0;
    virtual HRESULT __stdcall get_ViewerCount(uint32_t* value) = 0;
    virtual HRESULT __stdcall TerminateBroadcast(abi_t<Windows::Media::Capture::AppBroadcastTerminationReason> reason, uint32_t providerSpecificReason) = 0;
    virtual HRESULT __stdcall add_HeartbeatRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_HeartbeatRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_TitleId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SignInState(abi_t<Windows::Media::Capture::AppBroadcastSignInState>* value) = 0;
    virtual HRESULT __stdcall put_OAuthRequestUri(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_OAuthRequestUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_OAuthCallbackUri(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_OAuthCallbackUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AuthenticationResult(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_UserName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_UserName(HSTRING* value) = 0;
    virtual HRESULT __stdcall add_SignInStateChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SignInStateChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_StreamState(abi_t<Windows::Media::Capture::AppBroadcastStreamState>* value) = 0;
    virtual HRESULT __stdcall put_DesiredVideoEncodingBitrate(uint64_t value) = 0;
    virtual HRESULT __stdcall get_DesiredVideoEncodingBitrate(uint64_t* value) = 0;
    virtual HRESULT __stdcall put_BandwidthTestBitrate(uint64_t value) = 0;
    virtual HRESULT __stdcall get_BandwidthTestBitrate(uint64_t* value) = 0;
    virtual HRESULT __stdcall put_AudioCodec(HSTRING value) = 0;
    virtual HRESULT __stdcall get_AudioCodec(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BroadcastStreamReader(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_StreamStateChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_StreamStateChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_VideoEncodingResolutionChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_VideoEncodingResolutionChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_VideoEncodingBitrateChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_VideoEncodingBitrateChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_State(abi_t<Windows::Media::Capture::AppBroadcastCameraCaptureState>* value) = 0;
    virtual HRESULT __stdcall get_ErrorCode(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppBroadcastGlobalSettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsBroadcastEnabled(bool* value) = 0;
    virtual HRESULT __stdcall get_IsDisabledByPolicy(bool* value) = 0;
    virtual HRESULT __stdcall get_IsGpuConstrained(bool* value) = 0;
    virtual HRESULT __stdcall get_HasHardwareEncoder(bool* value) = 0;
    virtual HRESULT __stdcall put_IsAudioCaptureEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsAudioCaptureEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsMicrophoneCaptureEnabledByDefault(bool value) = 0;
    virtual HRESULT __stdcall get_IsMicrophoneCaptureEnabledByDefault(bool* value) = 0;
    virtual HRESULT __stdcall put_IsEchoCancellationEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsEchoCancellationEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_SystemAudioGain(double value) = 0;
    virtual HRESULT __stdcall get_SystemAudioGain(double* value) = 0;
    virtual HRESULT __stdcall put_MicrophoneGain(double value) = 0;
    virtual HRESULT __stdcall get_MicrophoneGain(double* value) = 0;
    virtual HRESULT __stdcall put_IsCameraCaptureEnabledByDefault(bool value) = 0;
    virtual HRESULT __stdcall get_IsCameraCaptureEnabledByDefault(bool* value) = 0;
    virtual HRESULT __stdcall put_SelectedCameraId(HSTRING value) = 0;
    virtual HRESULT __stdcall get_SelectedCameraId(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_CameraOverlayLocation(abi_t<Windows::Media::Capture::AppBroadcastCameraOverlayLocation> value) = 0;
    virtual HRESULT __stdcall get_CameraOverlayLocation(abi_t<Windows::Media::Capture::AppBroadcastCameraOverlayLocation>* value) = 0;
    virtual HRESULT __stdcall put_CameraOverlaySize(abi_t<Windows::Media::Capture::AppBroadcastCameraOverlaySize> value) = 0;
    virtual HRESULT __stdcall get_CameraOverlaySize(abi_t<Windows::Media::Capture::AppBroadcastCameraOverlaySize>* value) = 0;
    virtual HRESULT __stdcall put_IsCursorImageCaptureEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsCursorImageCaptureEnabled(bool* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppBroadcastManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetGlobalSettings(::IUnknown** value) = 0;
    virtual HRESULT __stdcall ApplyGlobalSettings(::IUnknown* value) = 0;
    virtual HRESULT __stdcall GetProviderSettings(::IUnknown** value) = 0;
    virtual HRESULT __stdcall ApplyProviderSettings(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_State(abi_t<Windows::Media::Capture::AppBroadcastMicrophoneCaptureState>* value) = 0;
    virtual HRESULT __stdcall get_ErrorCode(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppBroadcastPlugIn>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AppId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ProviderSettings(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Logo(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppBroadcastPlugInManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsBroadcastProviderAvailable(bool* value) = 0;
    virtual HRESULT __stdcall get_PlugInList(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DefaultPlugIn(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_DefaultPlugIn(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppBroadcastPlugInManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** ppInstance) = 0;
    virtual HRESULT __stdcall GetForUser(::IUnknown* user, ::IUnknown** ppInstance) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PlugInState(abi_t<Windows::Media::Capture::AppBroadcastPlugInState>* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppBroadcastPreview>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall StopPreview() = 0;
    virtual HRESULT __stdcall get_PreviewState(abi_t<Windows::Media::Capture::AppBroadcastPreviewState>* value) = 0;
    virtual HRESULT __stdcall get_ErrorCode(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_PreviewStateChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PreviewStateChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_PreviewStreamReader(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PreviewState(abi_t<Windows::Media::Capture::AppBroadcastPreviewState>* value) = 0;
    virtual HRESULT __stdcall get_ErrorCode(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppBroadcastPreviewStreamReader>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_VideoWidth(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_VideoHeight(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_VideoStride(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_VideoBitmapPixelFormat(abi_t<Windows::Graphics::Imaging::BitmapPixelFormat>* value) = 0;
    virtual HRESULT __stdcall get_VideoBitmapAlphaMode(abi_t<Windows::Graphics::Imaging::BitmapAlphaMode>* value) = 0;
    virtual HRESULT __stdcall TryGetNextVideoFrame(::IUnknown** frame) = 0;
    virtual HRESULT __stdcall add_VideoFrameArrived(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_VideoFrameArrived(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_VideoHeader(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VideoBuffer(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AbsoluteTimestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_RelativeTimestamp(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_Duration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_FrameId(uint64_t* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppBroadcastProviderSettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_DefaultBroadcastTitle(HSTRING value) = 0;
    virtual HRESULT __stdcall get_DefaultBroadcastTitle(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_AudioEncodingBitrate(uint32_t value) = 0;
    virtual HRESULT __stdcall get_AudioEncodingBitrate(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_CustomVideoEncodingBitrate(uint32_t value) = 0;
    virtual HRESULT __stdcall get_CustomVideoEncodingBitrate(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_CustomVideoEncodingHeight(uint32_t value) = 0;
    virtual HRESULT __stdcall get_CustomVideoEncodingHeight(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_CustomVideoEncodingWidth(uint32_t value) = 0;
    virtual HRESULT __stdcall get_CustomVideoEncodingWidth(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_VideoEncodingBitrateMode(abi_t<Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode> value) = 0;
    virtual HRESULT __stdcall get_VideoEncodingBitrateMode(abi_t<Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode>* value) = 0;
    virtual HRESULT __stdcall put_VideoEncodingResolutionMode(abi_t<Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode> value) = 0;
    virtual HRESULT __stdcall get_VideoEncodingResolutionMode(abi_t<Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode>* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppBroadcastServices>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CaptureTargetType(abi_t<Windows::Media::Capture::AppBroadcastCaptureTargetType>* value) = 0;
    virtual HRESULT __stdcall put_CaptureTargetType(abi_t<Windows::Media::Capture::AppBroadcastCaptureTargetType> value) = 0;
    virtual HRESULT __stdcall get_BroadcastTitle(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_BroadcastTitle(HSTRING value) = 0;
    virtual HRESULT __stdcall get_BroadcastLanguage(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_BroadcastLanguage(HSTRING value) = 0;
    virtual HRESULT __stdcall get_UserName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CanCapture(bool* value) = 0;
    virtual HRESULT __stdcall EnterBroadcastModeAsync(::IUnknown* plugIn, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ExitBroadcastMode(abi_t<Windows::Media::Capture::AppBroadcastExitBroadcastModeReason> reason) = 0;
    virtual HRESULT __stdcall StartBroadcast() = 0;
    virtual HRESULT __stdcall PauseBroadcast() = 0;
    virtual HRESULT __stdcall ResumeBroadcast() = 0;
    virtual HRESULT __stdcall StartPreview(abi_t<Windows::Foundation::Size> desiredSize, ::IUnknown** preview) = 0;
    virtual HRESULT __stdcall get_State(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SignInState(abi_t<Windows::Media::Capture::AppBroadcastSignInState>* value) = 0;
    virtual HRESULT __stdcall get_Result(abi_t<Windows::Media::Capture::AppBroadcastSignInResult>* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppBroadcastState>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsCaptureTargetRunning(bool* value) = 0;
    virtual HRESULT __stdcall get_ViewerCount(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_ShouldCaptureMicrophone(bool* value) = 0;
    virtual HRESULT __stdcall put_ShouldCaptureMicrophone(bool value) = 0;
    virtual HRESULT __stdcall RestartMicrophoneCapture() = 0;
    virtual HRESULT __stdcall get_ShouldCaptureCamera(bool* value) = 0;
    virtual HRESULT __stdcall put_ShouldCaptureCamera(bool value) = 0;
    virtual HRESULT __stdcall RestartCameraCapture() = 0;
    virtual HRESULT __stdcall get_EncodedVideoSize(abi_t<Windows::Foundation::Size>* value) = 0;
    virtual HRESULT __stdcall get_MicrophoneCaptureState(abi_t<Windows::Media::Capture::AppBroadcastMicrophoneCaptureState>* value) = 0;
    virtual HRESULT __stdcall get_MicrophoneCaptureError(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_CameraCaptureState(abi_t<Windows::Media::Capture::AppBroadcastCameraCaptureState>* value) = 0;
    virtual HRESULT __stdcall get_CameraCaptureError(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_StreamState(abi_t<Windows::Media::Capture::AppBroadcastStreamState>* value) = 0;
    virtual HRESULT __stdcall get_PlugInState(abi_t<Windows::Media::Capture::AppBroadcastPlugInState>* value) = 0;
    virtual HRESULT __stdcall get_OAuthRequestUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_OAuthCallbackUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AuthenticationResult(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_AuthenticationResult(::IUnknown* value) = 0;
    virtual HRESULT __stdcall put_SignInState(abi_t<Windows::Media::Capture::AppBroadcastSignInState> value) = 0;
    virtual HRESULT __stdcall get_SignInState(abi_t<Windows::Media::Capture::AppBroadcastSignInState>* value) = 0;
    virtual HRESULT __stdcall get_TerminationReason(abi_t<Windows::Media::Capture::AppBroadcastTerminationReason>* value) = 0;
    virtual HRESULT __stdcall get_TerminationReasonPlugInSpecific(uint32_t* value) = 0;
    virtual HRESULT __stdcall add_ViewerCountChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ViewerCountChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_MicrophoneCaptureStateChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_MicrophoneCaptureStateChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_CameraCaptureStateChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_CameraCaptureStateChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_PlugInStateChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PlugInStateChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_StreamStateChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_StreamStateChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_CaptureTargetClosed(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_CaptureTargetClosed(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppBroadcastStreamAudioFrame>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AudioHeader(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AudioBuffer(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppBroadcastStreamAudioHeader>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AbsoluteTimestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_RelativeTimestamp(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_Duration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_HasDiscontinuity(bool* value) = 0;
    virtual HRESULT __stdcall get_FrameId(uint64_t* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppBroadcastStreamReader>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AudioChannels(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_AudioSampleRate(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_AudioAacSequence(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AudioBitrate(uint32_t* value) = 0;
    virtual HRESULT __stdcall TryGetNextAudioFrame(::IUnknown** frame) = 0;
    virtual HRESULT __stdcall get_VideoWidth(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_VideoHeight(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_VideoBitrate(uint32_t* value) = 0;
    virtual HRESULT __stdcall TryGetNextVideoFrame(::IUnknown** frame) = 0;
    virtual HRESULT __stdcall add_AudioFrameArrived(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_AudioFrameArrived(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_VideoFrameArrived(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_VideoFrameArrived(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_StreamState(abi_t<Windows::Media::Capture::AppBroadcastStreamState>* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppBroadcastStreamVideoFrame>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_VideoHeader(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VideoBuffer(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppBroadcastStreamVideoHeader>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AbsoluteTimestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_RelativeTimestamp(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_Duration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_IsKeyFrame(bool* value) = 0;
    virtual HRESULT __stdcall get_HasDiscontinuity(bool* value) = 0;
    virtual HRESULT __stdcall get_FrameId(uint64_t* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppBroadcastTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BackgroundService(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ViewerCount(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppCapture>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsCapturingAudio(bool* value) = 0;
    virtual HRESULT __stdcall get_IsCapturingVideo(bool* value) = 0;
    virtual HRESULT __stdcall add_CapturingChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_CapturingChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_ToggleGameBarKey(abi_t<Windows::System::VirtualKey> value) = 0;
    virtual HRESULT __stdcall get_ToggleGameBarKey(abi_t<Windows::System::VirtualKey>* value) = 0;
    virtual HRESULT __stdcall put_ToggleGameBarKeyModifiers(abi_t<Windows::System::VirtualKeyModifiers> value) = 0;
    virtual HRESULT __stdcall get_ToggleGameBarKeyModifiers(abi_t<Windows::System::VirtualKeyModifiers>* value) = 0;
    virtual HRESULT __stdcall put_SaveHistoricalVideoKey(abi_t<Windows::System::VirtualKey> value) = 0;
    virtual HRESULT __stdcall get_SaveHistoricalVideoKey(abi_t<Windows::System::VirtualKey>* value) = 0;
    virtual HRESULT __stdcall put_SaveHistoricalVideoKeyModifiers(abi_t<Windows::System::VirtualKeyModifiers> value) = 0;
    virtual HRESULT __stdcall get_SaveHistoricalVideoKeyModifiers(abi_t<Windows::System::VirtualKeyModifiers>* value) = 0;
    virtual HRESULT __stdcall put_ToggleRecordingKey(abi_t<Windows::System::VirtualKey> value) = 0;
    virtual HRESULT __stdcall get_ToggleRecordingKey(abi_t<Windows::System::VirtualKey>* value) = 0;
    virtual HRESULT __stdcall put_ToggleRecordingKeyModifiers(abi_t<Windows::System::VirtualKeyModifiers> value) = 0;
    virtual HRESULT __stdcall get_ToggleRecordingKeyModifiers(abi_t<Windows::System::VirtualKeyModifiers>* value) = 0;
    virtual HRESULT __stdcall put_TakeScreenshotKey(abi_t<Windows::System::VirtualKey> value) = 0;
    virtual HRESULT __stdcall get_TakeScreenshotKey(abi_t<Windows::System::VirtualKey>* value) = 0;
    virtual HRESULT __stdcall put_TakeScreenshotKeyModifiers(abi_t<Windows::System::VirtualKeyModifiers> value) = 0;
    virtual HRESULT __stdcall get_TakeScreenshotKeyModifiers(abi_t<Windows::System::VirtualKeyModifiers>* value) = 0;
    virtual HRESULT __stdcall put_ToggleRecordingIndicatorKey(abi_t<Windows::System::VirtualKey> value) = 0;
    virtual HRESULT __stdcall get_ToggleRecordingIndicatorKey(abi_t<Windows::System::VirtualKey>* value) = 0;
    virtual HRESULT __stdcall put_ToggleRecordingIndicatorKeyModifiers(abi_t<Windows::System::VirtualKeyModifiers> value) = 0;
    virtual HRESULT __stdcall get_ToggleRecordingIndicatorKeyModifiers(abi_t<Windows::System::VirtualKeyModifiers>* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_ToggleMicrophoneCaptureKey(abi_t<Windows::System::VirtualKey> value) = 0;
    virtual HRESULT __stdcall get_ToggleMicrophoneCaptureKey(abi_t<Windows::System::VirtualKey>* value) = 0;
    virtual HRESULT __stdcall put_ToggleMicrophoneCaptureKeyModifiers(abi_t<Windows::System::VirtualKeyModifiers> value) = 0;
    virtual HRESULT __stdcall get_ToggleMicrophoneCaptureKeyModifiers(abi_t<Windows::System::VirtualKeyModifiers>* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_ToggleCameraCaptureKey(abi_t<Windows::System::VirtualKey> value) = 0;
    virtual HRESULT __stdcall get_ToggleCameraCaptureKey(abi_t<Windows::System::VirtualKey>* value) = 0;
    virtual HRESULT __stdcall put_ToggleCameraCaptureKeyModifiers(abi_t<Windows::System::VirtualKeyModifiers> value) = 0;
    virtual HRESULT __stdcall get_ToggleCameraCaptureKeyModifiers(abi_t<Windows::System::VirtualKeyModifiers>* value) = 0;
    virtual HRESULT __stdcall put_ToggleBroadcastKey(abi_t<Windows::System::VirtualKey> value) = 0;
    virtual HRESULT __stdcall get_ToggleBroadcastKey(abi_t<Windows::System::VirtualKey>* value) = 0;
    virtual HRESULT __stdcall put_ToggleBroadcastKeyModifiers(abi_t<Windows::System::VirtualKeyModifiers> value) = 0;
    virtual HRESULT __stdcall get_ToggleBroadcastKeyModifiers(abi_t<Windows::System::VirtualKeyModifiers>* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Duration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_File(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppCaptureManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetCurrentSettings(::IUnknown** value) = 0;
    virtual HRESULT __stdcall ApplySettings(::IUnknown* appCaptureSettings) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_State(abi_t<Windows::Media::Capture::AppCaptureMicrophoneCaptureState>* value) = 0;
    virtual HRESULT __stdcall get_ErrorCode(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppCaptureRecordOperation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall StopRecording() = 0;
    virtual HRESULT __stdcall get_State(abi_t<Windows::Media::Capture::AppCaptureRecordingState>* value) = 0;
    virtual HRESULT __stdcall get_ErrorCode(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Duration(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_File(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsFileTruncated(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_StateChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_StateChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_DurationGenerated(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_DurationGenerated(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_FileGenerated(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_FileGenerated(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_State(abi_t<Windows::Media::Capture::AppCaptureRecordingState>* value) = 0;
    virtual HRESULT __stdcall get_ErrorCode(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppCaptureServices>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Record(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RecordTimeSpan(abi_t<Windows::Foundation::DateTime> startTime, abi_t<Windows::Foundation::TimeSpan> duration, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall get_CanCapture(bool* value) = 0;
    virtual HRESULT __stdcall get_State(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppCaptureSettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_AppCaptureDestinationFolder(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_AppCaptureDestinationFolder(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_AudioEncodingBitrate(uint32_t value) = 0;
    virtual HRESULT __stdcall get_AudioEncodingBitrate(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_IsAudioCaptureEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsAudioCaptureEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_CustomVideoEncodingBitrate(uint32_t value) = 0;
    virtual HRESULT __stdcall get_CustomVideoEncodingBitrate(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_CustomVideoEncodingHeight(uint32_t value) = 0;
    virtual HRESULT __stdcall get_CustomVideoEncodingHeight(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_CustomVideoEncodingWidth(uint32_t value) = 0;
    virtual HRESULT __stdcall get_CustomVideoEncodingWidth(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_HistoricalBufferLength(uint32_t value) = 0;
    virtual HRESULT __stdcall get_HistoricalBufferLength(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_HistoricalBufferLengthUnit(abi_t<Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit> value) = 0;
    virtual HRESULT __stdcall get_HistoricalBufferLengthUnit(abi_t<Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit>* value) = 0;
    virtual HRESULT __stdcall put_IsHistoricalCaptureEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsHistoricalCaptureEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsHistoricalCaptureOnBatteryAllowed(bool value) = 0;
    virtual HRESULT __stdcall get_IsHistoricalCaptureOnBatteryAllowed(bool* value) = 0;
    virtual HRESULT __stdcall put_IsHistoricalCaptureOnWirelessDisplayAllowed(bool value) = 0;
    virtual HRESULT __stdcall get_IsHistoricalCaptureOnWirelessDisplayAllowed(bool* value) = 0;
    virtual HRESULT __stdcall put_MaximumRecordLength(abi_t<Windows::Foundation::TimeSpan> value) = 0;
    virtual HRESULT __stdcall get_MaximumRecordLength(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_ScreenshotDestinationFolder(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ScreenshotDestinationFolder(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_VideoEncodingBitrateMode(abi_t<Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode> value) = 0;
    virtual HRESULT __stdcall get_VideoEncodingBitrateMode(abi_t<Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode>* value) = 0;
    virtual HRESULT __stdcall put_VideoEncodingResolutionMode(abi_t<Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode> value) = 0;
    virtual HRESULT __stdcall get_VideoEncodingResolutionMode(abi_t<Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode>* value) = 0;
    virtual HRESULT __stdcall put_IsAppCaptureEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsAppCaptureEnabled(bool* value) = 0;
    virtual HRESULT __stdcall get_IsCpuConstrained(bool* value) = 0;
    virtual HRESULT __stdcall get_IsDisabledByPolicy(bool* value) = 0;
    virtual HRESULT __stdcall get_IsMemoryConstrained(bool* value) = 0;
    virtual HRESULT __stdcall get_HasHardwareEncoder(bool* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppCaptureSettings2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsGpuConstrained(bool* value) = 0;
    virtual HRESULT __stdcall get_AlternateShortcutKeys(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppCaptureSettings3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_IsMicrophoneCaptureEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsMicrophoneCaptureEnabled(bool* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppCaptureSettings4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_IsMicrophoneCaptureEnabledByDefault(bool value) = 0;
    virtual HRESULT __stdcall get_IsMicrophoneCaptureEnabledByDefault(bool* value) = 0;
    virtual HRESULT __stdcall put_SystemAudioGain(double value) = 0;
    virtual HRESULT __stdcall get_SystemAudioGain(double* value) = 0;
    virtual HRESULT __stdcall put_MicrophoneGain(double value) = 0;
    virtual HRESULT __stdcall get_MicrophoneGain(double* value) = 0;
    virtual HRESULT __stdcall put_VideoEncodingFrameRateMode(abi_t<Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode> value) = 0;
    virtual HRESULT __stdcall get_VideoEncodingFrameRateMode(abi_t<Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode>* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppCaptureSettings5>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_IsEchoCancellationEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsEchoCancellationEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsCursorImageCaptureEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsCursorImageCaptureEnabled(bool* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppCaptureState>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsTargetRunning(bool* value) = 0;
    virtual HRESULT __stdcall get_IsHistoricalCaptureEnabled(bool* value) = 0;
    virtual HRESULT __stdcall get_ShouldCaptureMicrophone(bool* value) = 0;
    virtual HRESULT __stdcall put_ShouldCaptureMicrophone(bool value) = 0;
    virtual HRESULT __stdcall RestartMicrophoneCapture() = 0;
    virtual HRESULT __stdcall get_MicrophoneCaptureState(abi_t<Windows::Media::Capture::AppCaptureMicrophoneCaptureState>* value) = 0;
    virtual HRESULT __stdcall get_MicrophoneCaptureError(uint32_t* value) = 0;
    virtual HRESULT __stdcall add_MicrophoneCaptureStateChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_MicrophoneCaptureStateChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_CaptureTargetClosed(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_CaptureTargetClosed(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Media::Capture::IAppCaptureStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::ICameraCaptureUI>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PhotoSettings(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VideoSettings(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CaptureFileAsync(abi_t<Windows::Media::Capture::CameraCaptureUIMode> mode, ::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Format(abi_t<Windows::Media::Capture::CameraCaptureUIPhotoFormat>* value) = 0;
    virtual HRESULT __stdcall put_Format(abi_t<Windows::Media::Capture::CameraCaptureUIPhotoFormat> value) = 0;
    virtual HRESULT __stdcall get_MaxResolution(abi_t<Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution>* value) = 0;
    virtual HRESULT __stdcall put_MaxResolution(abi_t<Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution> value) = 0;
    virtual HRESULT __stdcall get_CroppedSizeInPixels(abi_t<Windows::Foundation::Size>* value) = 0;
    virtual HRESULT __stdcall put_CroppedSizeInPixels(abi_t<Windows::Foundation::Size> value) = 0;
    virtual HRESULT __stdcall get_CroppedAspectRatio(abi_t<Windows::Foundation::Size>* value) = 0;
    virtual HRESULT __stdcall put_CroppedAspectRatio(abi_t<Windows::Foundation::Size> value) = 0;
    virtual HRESULT __stdcall get_AllowCropping(bool* value) = 0;
    virtual HRESULT __stdcall put_AllowCropping(bool value) = 0;
};};

template <> struct abi<Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Format(abi_t<Windows::Media::Capture::CameraCaptureUIVideoFormat>* value) = 0;
    virtual HRESULT __stdcall put_Format(abi_t<Windows::Media::Capture::CameraCaptureUIVideoFormat> value) = 0;
    virtual HRESULT __stdcall get_MaxResolution(abi_t<Windows::Media::Capture::CameraCaptureUIMaxVideoResolution>* value) = 0;
    virtual HRESULT __stdcall put_MaxResolution(abi_t<Windows::Media::Capture::CameraCaptureUIMaxVideoResolution> value) = 0;
    virtual HRESULT __stdcall get_MaxDurationInSeconds(float* value) = 0;
    virtual HRESULT __stdcall put_MaxDurationInSeconds(float value) = 0;
    virtual HRESULT __stdcall get_AllowTrimming(bool* value) = 0;
    virtual HRESULT __stdcall put_AllowTrimming(bool value) = 0;
};};

template <> struct abi<Windows::Media::Capture::ICameraOptionsUIStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Show(::IUnknown* mediaCapture) = 0;
};};

template <> struct abi<Windows::Media::Capture::ICapturedFrame>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Width(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Height(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::ICapturedFrameControlValues>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Exposure(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ExposureCompensation(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsoSpeed(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Focus(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SceneMode(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Flashed(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FlashPowerPercent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_WhiteBalance(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ZoomFactor(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::ICapturedFrameControlValues2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FocusState(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsoDigitalGain(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsoAnalogGain(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SensorFrameRate(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_WhiteBalanceGain(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SoftwareBitmap(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::ICapturedPhoto>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Frame(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Thumbnail(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IGameBarServices>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetCapturePolicy(abi_t<Windows::Media::Capture::GameBarTargetCapturePolicy>* value) = 0;
    virtual HRESULT __stdcall EnableCapture() = 0;
    virtual HRESULT __stdcall DisableCapture() = 0;
    virtual HRESULT __stdcall get_TargetInfo(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SessionId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AppBroadcastServices(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AppCaptureServices(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_CommandReceived(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_CommandReceived(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Media::Capture::IGameBarServicesCommandEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Command(abi_t<Windows::Media::Capture::GameBarCommand>* value) = 0;
    virtual HRESULT __stdcall get_Origin(abi_t<Windows::Media::Capture::GameBarCommandOrigin>* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IGameBarServicesManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_GameBarServicesCreated(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_GameBarServicesCreated(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_GameBarServices(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IGameBarServicesManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** ppInstance) = 0;
};};

template <> struct abi<Windows::Media::Capture::IGameBarServicesTargetInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AppId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TitleId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DisplayMode(abi_t<Windows::Media::Capture::GameBarServicesDisplayMode>* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::ILowLagMediaRecording>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall StartAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall StopAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall FinishAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Media::Capture::ILowLagMediaRecording2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall PauseAsync(abi_t<Windows::Media::Devices::MediaCapturePauseBehavior> behavior, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ResumeAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Media::Capture::ILowLagMediaRecording3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall PauseWithResultAsync(abi_t<Windows::Media::Devices::MediaCapturePauseBehavior> behavior, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall StopWithResultAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Media::Capture::ILowLagPhotoCapture>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CaptureAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall FinishAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Media::Capture::ILowLagPhotoSequenceCapture>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall StartAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall StopAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall FinishAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall add_PhotoCaptured(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PhotoCaptured(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCapture>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall InitializeAsync(::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall InitializeWithSettingsAsync(::IUnknown* mediaCaptureInitializationSettings, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall StartRecordToStorageFileAsync(::IUnknown* encodingProfile, ::IUnknown* file, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall StartRecordToStreamAsync(::IUnknown* encodingProfile, ::IUnknown* stream, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall StartRecordToCustomSinkAsync(::IUnknown* encodingProfile, ::IUnknown* customMediaSink, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall StartRecordToCustomSinkIdAsync(::IUnknown* encodingProfile, HSTRING customSinkActivationId, ::IUnknown* customSinkSettings, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall StopRecordAsync(::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall CapturePhotoToStorageFileAsync(::IUnknown* type, ::IUnknown* file, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall CapturePhotoToStreamAsync(::IUnknown* type, ::IUnknown* stream, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall AddEffectAsync(abi_t<Windows::Media::Capture::MediaStreamType> mediaStreamType, HSTRING effectActivationID, ::IUnknown* effectSettings, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall ClearEffectsAsync(abi_t<Windows::Media::Capture::MediaStreamType> mediaStreamType, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall SetEncoderProperty(abi_t<Windows::Media::Capture::MediaStreamType> mediaStreamType, abi_t<GUID> propertyId, ::IUnknown* propertyValue) = 0;
    virtual HRESULT __stdcall GetEncoderProperty(abi_t<Windows::Media::Capture::MediaStreamType> mediaStreamType, abi_t<GUID> propertyId, ::IUnknown** propertyValue) = 0;
    virtual HRESULT __stdcall add_Failed(::IUnknown* errorEventHandler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_Failed(abi_t<event_token> eventCookie) = 0;
    virtual HRESULT __stdcall add_RecordLimitationExceeded(::IUnknown* recordLimitationExceededEventHandler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_RecordLimitationExceeded(abi_t<event_token> eventCookie) = 0;
    virtual HRESULT __stdcall get_MediaCaptureSettings(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AudioDeviceController(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VideoDeviceController(::IUnknown** value) = 0;
    virtual HRESULT __stdcall SetPreviewMirroring(bool value) = 0;
    virtual HRESULT __stdcall GetPreviewMirroring(bool* value) = 0;
    virtual HRESULT __stdcall SetPreviewRotation(abi_t<Windows::Media::Capture::VideoRotation> value) = 0;
    virtual HRESULT __stdcall GetPreviewRotation(abi_t<Windows::Media::Capture::VideoRotation>* value) = 0;
    virtual HRESULT __stdcall SetRecordRotation(abi_t<Windows::Media::Capture::VideoRotation> value) = 0;
    virtual HRESULT __stdcall GetRecordRotation(abi_t<Windows::Media::Capture::VideoRotation>* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCapture2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall PrepareLowLagRecordToStorageFileAsync(::IUnknown* encodingProfile, ::IUnknown* file, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall PrepareLowLagRecordToStreamAsync(::IUnknown* encodingProfile, ::IUnknown* stream, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall PrepareLowLagRecordToCustomSinkAsync(::IUnknown* encodingProfile, ::IUnknown* customMediaSink, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall PrepareLowLagRecordToCustomSinkIdAsync(::IUnknown* encodingProfile, HSTRING customSinkActivationId, ::IUnknown* customSinkSettings, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall PrepareLowLagPhotoCaptureAsync(::IUnknown* type, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall PrepareLowLagPhotoSequenceCaptureAsync(::IUnknown* type, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SetEncodingPropertiesAsync(abi_t<Windows::Media::Capture::MediaStreamType> mediaStreamType, ::IUnknown* mediaEncodingProperties, ::IUnknown* encoderProperties, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCapture3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall PrepareVariablePhotoSequenceCaptureAsync(::IUnknown* type, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall add_FocusChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_FocusChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_PhotoConfirmationCaptured(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PhotoConfirmationCaptured(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCapture4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AddAudioEffectAsync(::IUnknown* definition, ::IUnknown** op) = 0;
    virtual HRESULT __stdcall AddVideoEffectAsync(::IUnknown* definition, abi_t<Windows::Media::Capture::MediaStreamType> mediaStreamType, ::IUnknown** op) = 0;
    virtual HRESULT __stdcall PauseRecordAsync(abi_t<Windows::Media::Devices::MediaCapturePauseBehavior> behavior, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall ResumeRecordAsync(::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall add_CameraStreamStateChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_CameraStreamStateChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_CameraStreamState(abi_t<Windows::Media::Devices::CameraStreamState>* streamState) = 0;
    virtual HRESULT __stdcall GetPreviewFrameAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetPreviewFrameCopyAsync(::IUnknown* destination, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall add_ThermalStatusChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ThermalStatusChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_ThermalStatus(abi_t<Windows::Media::Capture::MediaCaptureThermalStatus>* value) = 0;
    virtual HRESULT __stdcall PrepareAdvancedPhotoCaptureAsync(::IUnknown* encodingProperties, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCapture5>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RemoveEffectAsync(::IUnknown* effect, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall PauseRecordWithResultAsync(abi_t<Windows::Media::Devices::MediaCapturePauseBehavior> behavior, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall StopRecordWithResultAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall get_FrameSources(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateFrameReaderAsync(::IUnknown* inputSource, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateFrameReaderWithSubtypeAsync(::IUnknown* inputSource, HSTRING outputSubtype, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateFrameReaderWithSubtypeAndSizeAsync(::IUnknown* inputSource, HSTRING outputSubtype, abi_t<Windows::Graphics::Imaging::BitmapSize> outputSize, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCapture6>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_CaptureDeviceExclusiveControlStatusChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_CaptureDeviceExclusiveControlStatusChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall CreateMultiSourceFrameReaderAsync(::IUnknown* inputSources, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatus>* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureFailedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Message(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Code(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FocusState(abi_t<Windows::Media::Devices::MediaCaptureFocusState>* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureInitializationSettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_AudioDeviceId(HSTRING value) = 0;
    virtual HRESULT __stdcall get_AudioDeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_VideoDeviceId(HSTRING value) = 0;
    virtual HRESULT __stdcall get_VideoDeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_StreamingCaptureMode(abi_t<Windows::Media::Capture::StreamingCaptureMode> value) = 0;
    virtual HRESULT __stdcall get_StreamingCaptureMode(abi_t<Windows::Media::Capture::StreamingCaptureMode>* value) = 0;
    virtual HRESULT __stdcall put_PhotoCaptureSource(abi_t<Windows::Media::Capture::PhotoCaptureSource> value) = 0;
    virtual HRESULT __stdcall get_PhotoCaptureSource(abi_t<Windows::Media::Capture::PhotoCaptureSource>* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureInitializationSettings2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_MediaCategory(abi_t<Windows::Media::Capture::MediaCategory> value) = 0;
    virtual HRESULT __stdcall get_MediaCategory(abi_t<Windows::Media::Capture::MediaCategory>* value) = 0;
    virtual HRESULT __stdcall put_AudioProcessing(abi_t<Windows::Media::AudioProcessing> value) = 0;
    virtual HRESULT __stdcall get_AudioProcessing(abi_t<Windows::Media::AudioProcessing>* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureInitializationSettings3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_AudioSource(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_AudioSource(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_VideoSource(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_VideoSource(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureInitializationSettings4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_VideoProfile(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_VideoProfile(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_PreviewMediaDescription(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_PreviewMediaDescription(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_RecordMediaDescription(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_RecordMediaDescription(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_PhotoMediaDescription(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_PhotoMediaDescription(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureInitializationSettings5>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SourceGroup(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_SourceGroup(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_SharingMode(abi_t<Windows::Media::Capture::MediaCaptureSharingMode>* value) = 0;
    virtual HRESULT __stdcall put_SharingMode(abi_t<Windows::Media::Capture::MediaCaptureSharingMode> value) = 0;
    virtual HRESULT __stdcall get_MemoryPreference(abi_t<Windows::Media::Capture::MediaCaptureMemoryPreference>* value) = 0;
    virtual HRESULT __stdcall put_MemoryPreference(abi_t<Windows::Media::Capture::MediaCaptureMemoryPreference> value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureInitializationSettings6>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AlwaysPlaySystemShutterSound(bool* value) = 0;
    virtual HRESULT __stdcall put_AlwaysPlaySystemShutterSound(bool value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCapturePauseResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LastFrame(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RecordDuration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureSettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AudioDeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_VideoDeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_StreamingCaptureMode(abi_t<Windows::Media::Capture::StreamingCaptureMode>* value) = 0;
    virtual HRESULT __stdcall get_PhotoCaptureSource(abi_t<Windows::Media::Capture::PhotoCaptureSource>* value) = 0;
    virtual HRESULT __stdcall get_VideoDeviceCharacteristic(abi_t<Windows::Media::Capture::VideoDeviceCharacteristic>* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureSettings2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ConcurrentRecordAndPhotoSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_ConcurrentRecordAndPhotoSequenceSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_CameraSoundRequiredForRegion(bool* value) = 0;
    virtual HRESULT __stdcall get_Horizontal35mmEquivalentFocalLength(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PitchOffsetDegrees(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Vertical35mmEquivalentFocalLength(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MediaCategory(abi_t<Windows::Media::Capture::MediaCategory>* value) = 0;
    virtual HRESULT __stdcall get_AudioProcessing(abi_t<Windows::Media::AudioProcessing>* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IsVideoProfileSupported(HSTRING videoDeviceId, bool* value) = 0;
    virtual HRESULT __stdcall FindAllVideoProfiles(HSTRING videoDeviceId, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall FindConcurrentProfiles(HSTRING videoDeviceId, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall FindKnownVideoProfiles(HSTRING videoDeviceId, abi_t<Windows::Media::Capture::KnownVideoProfile> name, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureStopResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LastFrame(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RecordDuration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureVideoPreview>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall StartPreviewAsync(::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall StartPreviewToCustomSinkAsync(::IUnknown* encodingProfile, ::IUnknown* customMediaSink, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall StartPreviewToCustomSinkIdAsync(::IUnknown* encodingProfile, HSTRING customSinkActivationId, ::IUnknown* customSinkSettings, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall StopPreviewAsync(::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureVideoProfile>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_VideoDeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SupportedPreviewMediaDescription(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SupportedRecordMediaDescription(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SupportedPhotoMediaDescription(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetConcurrency(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Width(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Height(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_FrameRate(double* value) = 0;
    virtual HRESULT __stdcall get_IsVariablePhotoSequenceSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsHdrVideoSupported(bool* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Frame(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Context(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IPhotoCapturedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Frame(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Thumbnail(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CaptureTimeOffset(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Frame(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CaptureTimeOffset(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IScreenCapture>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AudioSource(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VideoSource(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsAudioSuspended(bool* value) = 0;
    virtual HRESULT __stdcall get_IsVideoSuspended(bool* value) = 0;
    virtual HRESULT __stdcall add_SourceSuspensionChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SourceSuspensionChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Media::Capture::IScreenCaptureStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::ISourceSuspensionChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsAudioSuspended(bool* value) = 0;
    virtual HRESULT __stdcall get_IsVideoSuspended(bool* value) = 0;
};};

template <> struct abi<Windows::Media::Capture::IVideoStreamConfiguration>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InputProperties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_OutputProperties(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::MediaCaptureFailedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* errorEventArgs) = 0;
};};

template <> struct abi<Windows::Media::Capture::RecordLimitationExceededEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender) = 0;
};};

}
