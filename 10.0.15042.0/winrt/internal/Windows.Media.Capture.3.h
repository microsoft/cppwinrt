// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Media.Capture.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Media::Capture {

template <typename H> struct impl_MediaCaptureFailedEventHandler : implements<impl_MediaCaptureFailedEventHandler<H>, abi<MediaCaptureFailedEventHandler>>, H
{
    impl_MediaCaptureFailedEventHandler(H && handler) : H(std::forward<H>(handler)) {}

    HRESULT __stdcall abi_Invoke(impl::abi_arg_in<Windows::Media::Capture::IMediaCapture> sender, impl::abi_arg_in<Windows::Media::Capture::IMediaCaptureFailedEventArgs> errorEventArgs) noexcept override
    {
        try
        {
            (*this)(*reinterpret_cast<const Windows::Media::Capture::MediaCapture *>(&sender), *reinterpret_cast<const Windows::Media::Capture::MediaCaptureFailedEventArgs *>(&errorEventArgs));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename H> struct impl_RecordLimitationExceededEventHandler : implements<impl_RecordLimitationExceededEventHandler<H>, abi<RecordLimitationExceededEventHandler>>, H
{
    impl_RecordLimitationExceededEventHandler(H && handler) : H(std::forward<H>(handler)) {}

    HRESULT __stdcall abi_Invoke(impl::abi_arg_in<Windows::Media::Capture::IMediaCapture> sender) noexcept override
    {
        try
        {
            (*this)(*reinterpret_cast<const Windows::Media::Capture::MediaCapture *>(&sender));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Media::Capture {

struct WINRT_EBO AdvancedCapturedPhoto :
    Windows::Media::Capture::IAdvancedCapturedPhoto,
    impl::require<AdvancedCapturedPhoto, Windows::Media::Capture::IAdvancedCapturedPhoto2>
{
    AdvancedCapturedPhoto(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AdvancedPhotoCapture :
    Windows::Media::Capture::IAdvancedPhotoCapture
{
    AdvancedPhotoCapture(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppBroadcastBackgroundService :
    Windows::Media::Capture::IAppBroadcastBackgroundService
{
    AppBroadcastBackgroundService(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppBroadcastBackgroundServiceSignInInfo :
    Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo
{
    AppBroadcastBackgroundServiceSignInInfo(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppBroadcastBackgroundServiceStreamInfo :
    Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo
{
    AppBroadcastBackgroundServiceStreamInfo(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppBroadcastCameraCaptureStateChangedEventArgs :
    Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs
{
    AppBroadcastCameraCaptureStateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppBroadcastGlobalSettings :
    Windows::Media::Capture::IAppBroadcastGlobalSettings
{
    AppBroadcastGlobalSettings(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppBroadcastHeartbeatRequestedEventArgs :
    Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs
{
    AppBroadcastHeartbeatRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct AppBroadcastManager
{
    AppBroadcastManager() = delete;
    static Windows::Media::Capture::AppBroadcastGlobalSettings GetGlobalSettings();
    static void ApplyGlobalSettings(const Windows::Media::Capture::AppBroadcastGlobalSettings & value);
    static Windows::Media::Capture::AppBroadcastProviderSettings GetProviderSettings();
    static void ApplyProviderSettings(const Windows::Media::Capture::AppBroadcastProviderSettings & value);
};

struct WINRT_EBO AppBroadcastMicrophoneCaptureStateChangedEventArgs :
    Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs
{
    AppBroadcastMicrophoneCaptureStateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppBroadcastPlugIn :
    Windows::Media::Capture::IAppBroadcastPlugIn
{
    AppBroadcastPlugIn(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppBroadcastPlugInManager :
    Windows::Media::Capture::IAppBroadcastPlugInManager
{
    AppBroadcastPlugInManager(std::nullptr_t) noexcept {}
    static Windows::Media::Capture::AppBroadcastPlugInManager GetDefault();
    static Windows::Media::Capture::AppBroadcastPlugInManager GetForUser(const Windows::System::User & user);
};

struct WINRT_EBO AppBroadcastPlugInStateChangedEventArgs :
    Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs
{
    AppBroadcastPlugInStateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppBroadcastPreview :
    Windows::Media::Capture::IAppBroadcastPreview
{
    AppBroadcastPreview(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppBroadcastPreviewStateChangedEventArgs :
    Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs
{
    AppBroadcastPreviewStateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppBroadcastPreviewStreamReader :
    Windows::Media::Capture::IAppBroadcastPreviewStreamReader
{
    AppBroadcastPreviewStreamReader(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppBroadcastPreviewStreamVideoFrame :
    Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame
{
    AppBroadcastPreviewStreamVideoFrame(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppBroadcastPreviewStreamVideoHeader :
    Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader
{
    AppBroadcastPreviewStreamVideoHeader(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppBroadcastProviderSettings :
    Windows::Media::Capture::IAppBroadcastProviderSettings
{
    AppBroadcastProviderSettings(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppBroadcastServices :
    Windows::Media::Capture::IAppBroadcastServices
{
    AppBroadcastServices(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppBroadcastSignInStateChangedEventArgs :
    Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs
{
    AppBroadcastSignInStateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppBroadcastState :
    Windows::Media::Capture::IAppBroadcastState
{
    AppBroadcastState(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppBroadcastStreamAudioFrame :
    Windows::Media::Capture::IAppBroadcastStreamAudioFrame
{
    AppBroadcastStreamAudioFrame(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppBroadcastStreamAudioHeader :
    Windows::Media::Capture::IAppBroadcastStreamAudioHeader
{
    AppBroadcastStreamAudioHeader(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppBroadcastStreamReader :
    Windows::Media::Capture::IAppBroadcastStreamReader
{
    AppBroadcastStreamReader(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppBroadcastStreamStateChangedEventArgs :
    Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs
{
    AppBroadcastStreamStateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppBroadcastStreamVideoFrame :
    Windows::Media::Capture::IAppBroadcastStreamVideoFrame
{
    AppBroadcastStreamVideoFrame(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppBroadcastStreamVideoHeader :
    Windows::Media::Capture::IAppBroadcastStreamVideoHeader
{
    AppBroadcastStreamVideoHeader(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppBroadcastTriggerDetails :
    Windows::Media::Capture::IAppBroadcastTriggerDetails
{
    AppBroadcastTriggerDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppBroadcastViewerCountChangedEventArgs :
    Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs
{
    AppBroadcastViewerCountChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppCapture :
    Windows::Media::Capture::IAppCapture
{
    AppCapture(std::nullptr_t) noexcept {}
    static Windows::Media::Capture::AppCapture GetForCurrentView();
};

struct WINRT_EBO AppCaptureAlternateShortcutKeys :
    Windows::Media::Capture::IAppCaptureAlternateShortcutKeys,
    impl::require<AppCaptureAlternateShortcutKeys, Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2, Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3>
{
    AppCaptureAlternateShortcutKeys(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppCaptureDurationGeneratedEventArgs :
    Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs
{
    AppCaptureDurationGeneratedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppCaptureFileGeneratedEventArgs :
    Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs
{
    AppCaptureFileGeneratedEventArgs(std::nullptr_t) noexcept {}
};

struct AppCaptureManager
{
    AppCaptureManager() = delete;
    static Windows::Media::Capture::AppCaptureSettings GetCurrentSettings();
    static void ApplySettings(const Windows::Media::Capture::AppCaptureSettings & appCaptureSettings);
};

struct WINRT_EBO AppCaptureMicrophoneCaptureStateChangedEventArgs :
    Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs
{
    AppCaptureMicrophoneCaptureStateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppCaptureRecordOperation :
    Windows::Media::Capture::IAppCaptureRecordOperation
{
    AppCaptureRecordOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppCaptureRecordingStateChangedEventArgs :
    Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs
{
    AppCaptureRecordingStateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppCaptureServices :
    Windows::Media::Capture::IAppCaptureServices
{
    AppCaptureServices(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppCaptureSettings :
    Windows::Media::Capture::IAppCaptureSettings,
    impl::require<AppCaptureSettings, Windows::Media::Capture::IAppCaptureSettings2, Windows::Media::Capture::IAppCaptureSettings3, Windows::Media::Capture::IAppCaptureSettings4, Windows::Media::Capture::IAppCaptureSettings5>
{
    AppCaptureSettings(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppCaptureState :
    Windows::Media::Capture::IAppCaptureState
{
    AppCaptureState(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CameraCaptureUI :
    Windows::Media::Capture::ICameraCaptureUI
{
    CameraCaptureUI(std::nullptr_t) noexcept {}
    CameraCaptureUI();
};

struct WINRT_EBO CameraCaptureUIPhotoCaptureSettings :
    Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings
{
    CameraCaptureUIPhotoCaptureSettings(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CameraCaptureUIVideoCaptureSettings :
    Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings
{
    CameraCaptureUIVideoCaptureSettings(std::nullptr_t) noexcept {}
};

struct CameraOptionsUI
{
    CameraOptionsUI() = delete;
    static void Show(const Windows::Media::Capture::MediaCapture & mediaCapture);
};

struct WINRT_EBO CapturedFrame :
    Windows::Media::Capture::ICapturedFrame,
    impl::require<CapturedFrame, Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap>
{
    CapturedFrame(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CapturedFrameControlValues :
    Windows::Media::Capture::ICapturedFrameControlValues,
    impl::require<CapturedFrameControlValues, Windows::Media::Capture::ICapturedFrameControlValues2>
{
    CapturedFrameControlValues(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CapturedPhoto :
    Windows::Media::Capture::ICapturedPhoto
{
    CapturedPhoto(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GameBarServices :
    Windows::Media::Capture::IGameBarServices
{
    GameBarServices(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GameBarServicesCommandEventArgs :
    Windows::Media::Capture::IGameBarServicesCommandEventArgs
{
    GameBarServicesCommandEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GameBarServicesManager :
    Windows::Media::Capture::IGameBarServicesManager
{
    GameBarServicesManager(std::nullptr_t) noexcept {}
    static Windows::Media::Capture::GameBarServicesManager GetDefault();
};

struct WINRT_EBO GameBarServicesManagerGameBarServicesCreatedEventArgs :
    Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs
{
    GameBarServicesManagerGameBarServicesCreatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GameBarServicesTargetInfo :
    Windows::Media::Capture::IGameBarServicesTargetInfo
{
    GameBarServicesTargetInfo(std::nullptr_t) noexcept {}
};

struct WINRT_EBO LowLagMediaRecording :
    Windows::Media::Capture::ILowLagMediaRecording,
    impl::require<LowLagMediaRecording, Windows::Media::Capture::ILowLagMediaRecording2, Windows::Media::Capture::ILowLagMediaRecording3>
{
    LowLagMediaRecording(std::nullptr_t) noexcept {}
};

struct WINRT_EBO LowLagPhotoCapture :
    Windows::Media::Capture::ILowLagPhotoCapture
{
    LowLagPhotoCapture(std::nullptr_t) noexcept {}
};

struct WINRT_EBO LowLagPhotoSequenceCapture :
    Windows::Media::Capture::ILowLagPhotoSequenceCapture
{
    LowLagPhotoSequenceCapture(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaCapture :
    Windows::Media::Capture::IMediaCapture,
    impl::require<MediaCapture, Windows::Foundation::IClosable, Windows::Media::Capture::IMediaCapture2, Windows::Media::Capture::IMediaCapture3, Windows::Media::Capture::IMediaCapture4, Windows::Media::Capture::IMediaCapture5, Windows::Media::Capture::IMediaCapture6, Windows::Media::Capture::IMediaCaptureVideoPreview>
{
    MediaCapture(std::nullptr_t) noexcept {}
    MediaCapture();
    static bool IsVideoProfileSupported(hstring_view videoDeviceId);
    static Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> FindAllVideoProfiles(hstring_view videoDeviceId);
    static Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> FindConcurrentProfiles(hstring_view videoDeviceId);
    static Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> FindKnownVideoProfiles(hstring_view videoDeviceId, Windows::Media::Capture::KnownVideoProfile name);
};

struct WINRT_EBO MediaCaptureDeviceExclusiveControlStatusChangedEventArgs :
    Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs
{
    MediaCaptureDeviceExclusiveControlStatusChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaCaptureFailedEventArgs :
    Windows::Media::Capture::IMediaCaptureFailedEventArgs
{
    MediaCaptureFailedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaCaptureFocusChangedEventArgs :
    Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs
{
    MediaCaptureFocusChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaCaptureInitializationSettings :
    Windows::Media::Capture::IMediaCaptureInitializationSettings,
    impl::require<MediaCaptureInitializationSettings, Windows::Media::Capture::IMediaCaptureInitializationSettings2, Windows::Media::Capture::IMediaCaptureInitializationSettings3, Windows::Media::Capture::IMediaCaptureInitializationSettings4, Windows::Media::Capture::IMediaCaptureInitializationSettings5, Windows::Media::Capture::IMediaCaptureInitializationSettings6>
{
    MediaCaptureInitializationSettings(std::nullptr_t) noexcept {}
    MediaCaptureInitializationSettings();
};

struct WINRT_EBO MediaCapturePauseResult :
    Windows::Media::Capture::IMediaCapturePauseResult,
    impl::require<MediaCapturePauseResult, Windows::Foundation::IClosable>
{
    MediaCapturePauseResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaCaptureSettings :
    Windows::Media::Capture::IMediaCaptureSettings,
    impl::require<MediaCaptureSettings, Windows::Media::Capture::IMediaCaptureSettings2>
{
    MediaCaptureSettings(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaCaptureStopResult :
    Windows::Media::Capture::IMediaCaptureStopResult,
    impl::require<MediaCaptureStopResult, Windows::Foundation::IClosable>
{
    MediaCaptureStopResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaCaptureVideoProfile :
    Windows::Media::Capture::IMediaCaptureVideoProfile
{
    MediaCaptureVideoProfile(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaCaptureVideoProfileMediaDescription :
    Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription
{
    MediaCaptureVideoProfileMediaDescription(std::nullptr_t) noexcept {}
};

struct WINRT_EBO OptionalReferencePhotoCapturedEventArgs :
    Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs
{
    OptionalReferencePhotoCapturedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PhotoCapturedEventArgs :
    Windows::Media::Capture::IPhotoCapturedEventArgs
{
    PhotoCapturedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PhotoConfirmationCapturedEventArgs :
    Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs
{
    PhotoConfirmationCapturedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ScreenCapture :
    Windows::Media::Capture::IScreenCapture
{
    ScreenCapture(std::nullptr_t) noexcept {}
    static Windows::Media::Capture::ScreenCapture GetForCurrentView();
};

struct WINRT_EBO SourceSuspensionChangedEventArgs :
    Windows::Media::Capture::ISourceSuspensionChangedEventArgs
{
    SourceSuspensionChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO VideoStreamConfiguration :
    Windows::Media::Capture::IVideoStreamConfiguration
{
    VideoStreamConfiguration(std::nullptr_t) noexcept {}
};

}

}
