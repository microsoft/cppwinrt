// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Graphics.Imaging.0.h"
#include "winrt/impl/Windows.Media.0.h"
#include "winrt/impl/Windows.Media.Capture.Core.0.h"
#include "winrt/impl/Windows.Media.Capture.Frames.0.h"
#include "winrt/impl/Windows.Media.Core.0.h"
#include "winrt/impl/Windows.Media.Devices.0.h"
#include "winrt/impl/Windows.Media.Effects.0.h"
#include "winrt/impl/Windows.Media.MediaProperties.0.h"
#include "winrt/impl/Windows.Security.Authentication.Web.0.h"
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.Media.Capture.0.h"

WINRT_EXPORT namespace winrt::Windows::Media::Capture {

struct WINRT_EBO IAdvancedCapturedPhoto :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdvancedCapturedPhoto>
{
    IAdvancedCapturedPhoto(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdvancedCapturedPhoto2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdvancedCapturedPhoto2>
{
    IAdvancedCapturedPhoto2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdvancedPhotoCapture :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdvancedPhotoCapture>
{
    IAdvancedPhotoCapture(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastBackgroundService :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastBackgroundService>
{
    IAppBroadcastBackgroundService(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastBackgroundServiceSignInInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastBackgroundServiceSignInInfo>
{
    IAppBroadcastBackgroundServiceSignInInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastBackgroundServiceStreamInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastBackgroundServiceStreamInfo>
{
    IAppBroadcastBackgroundServiceStreamInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastCameraCaptureStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastCameraCaptureStateChangedEventArgs>
{
    IAppBroadcastCameraCaptureStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastGlobalSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastGlobalSettings>
{
    IAppBroadcastGlobalSettings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastHeartbeatRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastHeartbeatRequestedEventArgs>
{
    IAppBroadcastHeartbeatRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastManagerStatics>
{
    IAppBroadcastManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastMicrophoneCaptureStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastMicrophoneCaptureStateChangedEventArgs>
{
    IAppBroadcastMicrophoneCaptureStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastPlugIn :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastPlugIn>
{
    IAppBroadcastPlugIn(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastPlugInManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastPlugInManager>
{
    IAppBroadcastPlugInManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastPlugInManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastPlugInManagerStatics>
{
    IAppBroadcastPlugInManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastPlugInStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastPlugInStateChangedEventArgs>
{
    IAppBroadcastPlugInStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastPreview :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastPreview>
{
    IAppBroadcastPreview(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastPreviewStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastPreviewStateChangedEventArgs>
{
    IAppBroadcastPreviewStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastPreviewStreamReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastPreviewStreamReader>
{
    IAppBroadcastPreviewStreamReader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastPreviewStreamVideoFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastPreviewStreamVideoFrame>
{
    IAppBroadcastPreviewStreamVideoFrame(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastPreviewStreamVideoHeader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastPreviewStreamVideoHeader>
{
    IAppBroadcastPreviewStreamVideoHeader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastProviderSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastProviderSettings>
{
    IAppBroadcastProviderSettings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastServices :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastServices>
{
    IAppBroadcastServices(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastSignInStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastSignInStateChangedEventArgs>
{
    IAppBroadcastSignInStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastState :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastState>
{
    IAppBroadcastState(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastStreamAudioFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastStreamAudioFrame>
{
    IAppBroadcastStreamAudioFrame(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastStreamAudioHeader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastStreamAudioHeader>
{
    IAppBroadcastStreamAudioHeader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastStreamReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastStreamReader>
{
    IAppBroadcastStreamReader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastStreamStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastStreamStateChangedEventArgs>
{
    IAppBroadcastStreamStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastStreamVideoFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastStreamVideoFrame>
{
    IAppBroadcastStreamVideoFrame(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastStreamVideoHeader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastStreamVideoHeader>
{
    IAppBroadcastStreamVideoHeader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastTriggerDetails>
{
    IAppBroadcastTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppBroadcastViewerCountChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppBroadcastViewerCountChangedEventArgs>
{
    IAppBroadcastViewerCountChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppCapture :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCapture>
{
    IAppCapture(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppCaptureAlternateShortcutKeys :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureAlternateShortcutKeys>
{
    IAppCaptureAlternateShortcutKeys(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppCaptureAlternateShortcutKeys2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureAlternateShortcutKeys2>
{
    IAppCaptureAlternateShortcutKeys2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppCaptureAlternateShortcutKeys3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureAlternateShortcutKeys3>
{
    IAppCaptureAlternateShortcutKeys3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppCaptureDurationGeneratedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureDurationGeneratedEventArgs>
{
    IAppCaptureDurationGeneratedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppCaptureFileGeneratedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureFileGeneratedEventArgs>
{
    IAppCaptureFileGeneratedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppCaptureManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureManagerStatics>
{
    IAppCaptureManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppCaptureMicrophoneCaptureStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureMicrophoneCaptureStateChangedEventArgs>
{
    IAppCaptureMicrophoneCaptureStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppCaptureRecordOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureRecordOperation>
{
    IAppCaptureRecordOperation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppCaptureRecordingStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureRecordingStateChangedEventArgs>
{
    IAppCaptureRecordingStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppCaptureServices :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureServices>
{
    IAppCaptureServices(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppCaptureSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureSettings>
{
    IAppCaptureSettings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppCaptureSettings2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureSettings2>
{
    IAppCaptureSettings2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppCaptureSettings3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureSettings3>
{
    IAppCaptureSettings3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppCaptureSettings4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureSettings4>
{
    IAppCaptureSettings4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppCaptureSettings5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureSettings5>
{
    IAppCaptureSettings5(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppCaptureState :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureState>
{
    IAppCaptureState(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppCaptureStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppCaptureStatics>
{
    IAppCaptureStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICameraCaptureUI :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICameraCaptureUI>
{
    ICameraCaptureUI(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICameraCaptureUIPhotoCaptureSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICameraCaptureUIPhotoCaptureSettings>
{
    ICameraCaptureUIPhotoCaptureSettings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICameraCaptureUIVideoCaptureSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICameraCaptureUIVideoCaptureSettings>
{
    ICameraCaptureUIVideoCaptureSettings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICameraOptionsUIStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICameraOptionsUIStatics>
{
    ICameraOptionsUIStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICapturedFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICapturedFrame>,
    impl::require<ICapturedFrame, Windows::Foundation::IClosable, Windows::Storage::Streams::IContentTypeProvider, Windows::Storage::Streams::IInputStream, Windows::Storage::Streams::IOutputStream, Windows::Storage::Streams::IRandomAccessStream, Windows::Storage::Streams::IRandomAccessStreamWithContentType>
{
    ICapturedFrame(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICapturedFrameControlValues :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICapturedFrameControlValues>
{
    ICapturedFrameControlValues(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICapturedFrameControlValues2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICapturedFrameControlValues2>
{
    ICapturedFrameControlValues2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICapturedFrameWithSoftwareBitmap :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICapturedFrameWithSoftwareBitmap>
{
    ICapturedFrameWithSoftwareBitmap(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICapturedPhoto :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICapturedPhoto>
{
    ICapturedPhoto(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameBarServices :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameBarServices>
{
    IGameBarServices(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameBarServicesCommandEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameBarServicesCommandEventArgs>
{
    IGameBarServicesCommandEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameBarServicesManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameBarServicesManager>
{
    IGameBarServicesManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameBarServicesManagerGameBarServicesCreatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameBarServicesManagerGameBarServicesCreatedEventArgs>
{
    IGameBarServicesManagerGameBarServicesCreatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameBarServicesManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameBarServicesManagerStatics>
{
    IGameBarServicesManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameBarServicesTargetInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameBarServicesTargetInfo>
{
    IGameBarServicesTargetInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILowLagMediaRecording :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILowLagMediaRecording>
{
    ILowLagMediaRecording(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILowLagMediaRecording2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILowLagMediaRecording2>
{
    ILowLagMediaRecording2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILowLagMediaRecording3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILowLagMediaRecording3>
{
    ILowLagMediaRecording3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILowLagPhotoCapture :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILowLagPhotoCapture>
{
    ILowLagPhotoCapture(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILowLagPhotoSequenceCapture :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILowLagPhotoSequenceCapture>
{
    ILowLagPhotoSequenceCapture(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCapture :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCapture>
{
    IMediaCapture(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCapture2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCapture2>
{
    IMediaCapture2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCapture3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCapture3>
{
    IMediaCapture3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCapture4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCapture4>
{
    IMediaCapture4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCapture5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCapture5>
{
    IMediaCapture5(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCapture6 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCapture6>
{
    IMediaCapture6(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs>
{
    IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureFailedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureFailedEventArgs>
{
    IMediaCaptureFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureFocusChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureFocusChangedEventArgs>
{
    IMediaCaptureFocusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureInitializationSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureInitializationSettings>
{
    IMediaCaptureInitializationSettings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureInitializationSettings2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureInitializationSettings2>
{
    IMediaCaptureInitializationSettings2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureInitializationSettings3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureInitializationSettings3>
{
    IMediaCaptureInitializationSettings3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureInitializationSettings4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureInitializationSettings4>
{
    IMediaCaptureInitializationSettings4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureInitializationSettings5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureInitializationSettings5>
{
    IMediaCaptureInitializationSettings5(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureInitializationSettings6 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureInitializationSettings6>
{
    IMediaCaptureInitializationSettings6(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCapturePauseResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCapturePauseResult>
{
    IMediaCapturePauseResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureSettings>
{
    IMediaCaptureSettings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureSettings2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureSettings2>
{
    IMediaCaptureSettings2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureStatics>
{
    IMediaCaptureStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureStopResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureStopResult>
{
    IMediaCaptureStopResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureVideoPreview :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureVideoPreview>
{
    IMediaCaptureVideoPreview(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureVideoProfile :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureVideoProfile>
{
    IMediaCaptureVideoProfile(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCaptureVideoProfileMediaDescription :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCaptureVideoProfileMediaDescription>
{
    IMediaCaptureVideoProfileMediaDescription(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IOptionalReferencePhotoCapturedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOptionalReferencePhotoCapturedEventArgs>
{
    IOptionalReferencePhotoCapturedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhotoCapturedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoCapturedEventArgs>
{
    IPhotoCapturedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhotoConfirmationCapturedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoConfirmationCapturedEventArgs>
{
    IPhotoConfirmationCapturedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IScreenCapture :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScreenCapture>
{
    IScreenCapture(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IScreenCaptureStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScreenCaptureStatics>
{
    IScreenCaptureStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISourceSuspensionChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISourceSuspensionChangedEventArgs>
{
    ISourceSuspensionChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoStreamConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoStreamConfiguration>
{
    IVideoStreamConfiguration(std::nullptr_t = nullptr) noexcept {}
};

}
