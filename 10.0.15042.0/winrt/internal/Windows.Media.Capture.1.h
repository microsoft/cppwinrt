// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Media.Capture.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Graphics.Imaging.0.h"
#include "Windows.Media.0.h"
#include "Windows.Media.Capture.Frames.0.h"
#include "Windows.Media.Core.0.h"
#include "Windows.Media.Devices.0.h"
#include "Windows.Media.Effects.0.h"
#include "Windows.Media.MediaProperties.0.h"
#include "Windows.Security.Authentication.Web.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.System.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Storage.1.h"
#include "Windows.Media.Capture.Core.1.h"
#include "Windows.Media.1.h"
#include "Windows.Media.Capture.Frames.1.h"
#include "Windows.Media.Devices.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Media::Capture {

struct WhiteBalanceGain
{
    double R;
    double G;
    double B;
};

}

namespace Windows::Media::Capture {

using WhiteBalanceGain = ABI::Windows::Media::Capture::WhiteBalanceGain;

}

namespace ABI::Windows::Media::Capture {

struct __declspec(uuid("f072728b-b292-4491-9d41-99807a550bbf")) __declspec(novtable) IAdvancedCapturedPhoto : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Frame(Windows::Media::Capture::ICapturedFrame ** value) = 0;
    virtual HRESULT __stdcall get_Mode(winrt::Windows::Media::Devices::AdvancedPhotoMode * value) = 0;
    virtual HRESULT __stdcall get_Context(Windows::Foundation::IInspectable ** value) = 0;
};

struct __declspec(uuid("18cf6cd8-cffe-42d8-8104-017bb318f4a1")) __declspec(novtable) IAdvancedCapturedPhoto2 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_FrameBoundsRelativeToReferencePhoto(Windows::Foundation::IReference<Windows::Foundation::Rect> ** value) = 0;
};

struct __declspec(uuid("83ffaafa-6667-44dc-973c-a6bce596aa0f")) __declspec(novtable) IAdvancedPhotoCapture : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_CaptureAsync(Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto> ** operation) = 0;
    virtual HRESULT __stdcall abi_CaptureWithContextAsync(Windows::Foundation::IInspectable * context, Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto> ** operation) = 0;
    virtual HRESULT __stdcall add_OptionalReferencePhotoCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_OptionalReferencePhotoCaptured(event_token token) = 0;
    virtual HRESULT __stdcall add_AllPhotosCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Foundation::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_AllPhotosCaptured(event_token token) = 0;
    virtual HRESULT __stdcall abi_FinishAsync(Windows::Foundation::IAsyncAction ** operation) = 0;
};

struct __declspec(uuid("bad1e72a-fa94-46f9-95fc-d71511cda70b")) __declspec(novtable) IAppBroadcastBackgroundService : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall put_PlugInState(winrt::Windows::Media::Capture::AppBroadcastPlugInState value) = 0;
    virtual HRESULT __stdcall get_PlugInState(winrt::Windows::Media::Capture::AppBroadcastPlugInState * value) = 0;
    virtual HRESULT __stdcall put_SignInInfo(Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo * value) = 0;
    virtual HRESULT __stdcall get_SignInInfo(Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo ** value) = 0;
    virtual HRESULT __stdcall put_StreamInfo(Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo * value) = 0;
    virtual HRESULT __stdcall get_StreamInfo(Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo ** value) = 0;
    virtual HRESULT __stdcall get_AppId(hstring * value) = 0;
    virtual HRESULT __stdcall get_BroadcastTitle(hstring * value) = 0;
    virtual HRESULT __stdcall put_ViewerCount(uint32_t value) = 0;
    virtual HRESULT __stdcall get_ViewerCount(uint32_t * value) = 0;
    virtual HRESULT __stdcall abi_TerminateBroadcast(winrt::Windows::Media::Capture::AppBroadcastTerminationReason reason, uint32_t providerSpecificReason) = 0;
    virtual HRESULT __stdcall add_HeartbeatRequested(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_HeartbeatRequested(event_token token) = 0;
    virtual HRESULT __stdcall get_TitleId(hstring * value) = 0;
};

struct __declspec(uuid("5e735275-88c8-4eca-89ba-4825985db880")) __declspec(novtable) IAppBroadcastBackgroundServiceSignInInfo : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_SignInState(winrt::Windows::Media::Capture::AppBroadcastSignInState * value) = 0;
    virtual HRESULT __stdcall put_OAuthRequestUri(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_OAuthRequestUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_OAuthCallbackUri(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_OAuthCallbackUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall get_AuthenticationResult(Windows::Security::Authentication::Web::IWebAuthenticationResult ** value) = 0;
    virtual HRESULT __stdcall put_UserName(hstring value) = 0;
    virtual HRESULT __stdcall get_UserName(hstring * value) = 0;
    virtual HRESULT __stdcall add_SignInStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo, Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SignInStateChanged(event_token token) = 0;
};

struct __declspec(uuid("31dc02bc-990a-4904-aa96-fe364381f136")) __declspec(novtable) IAppBroadcastBackgroundServiceStreamInfo : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_StreamState(winrt::Windows::Media::Capture::AppBroadcastStreamState * value) = 0;
    virtual HRESULT __stdcall put_DesiredVideoEncodingBitrate(uint64_t value) = 0;
    virtual HRESULT __stdcall get_DesiredVideoEncodingBitrate(uint64_t * value) = 0;
    virtual HRESULT __stdcall put_BandwidthTestBitrate(uint64_t value) = 0;
    virtual HRESULT __stdcall get_BandwidthTestBitrate(uint64_t * value) = 0;
    virtual HRESULT __stdcall put_AudioCodec(hstring value) = 0;
    virtual HRESULT __stdcall get_AudioCodec(hstring * value) = 0;
    virtual HRESULT __stdcall get_BroadcastStreamReader(Windows::Media::Capture::IAppBroadcastStreamReader ** value) = 0;
    virtual HRESULT __stdcall add_StreamStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_StreamStateChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_VideoEncodingResolutionChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_VideoEncodingResolutionChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_VideoEncodingBitrateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_VideoEncodingBitrateChanged(event_token token) = 0;
};

struct __declspec(uuid("1e334cd0-b882-4b88-8692-05999aceb70f")) __declspec(novtable) IAppBroadcastCameraCaptureStateChangedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_State(winrt::Windows::Media::Capture::AppBroadcastCameraCaptureState * value) = 0;
    virtual HRESULT __stdcall get_ErrorCode(uint32_t * value) = 0;
};

struct __declspec(uuid("b2cb27a5-70fc-4e17-80bd-6ba0fd3ff3a0")) __declspec(novtable) IAppBroadcastGlobalSettings : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_IsBroadcastEnabled(bool * value) = 0;
    virtual HRESULT __stdcall get_IsDisabledByPolicy(bool * value) = 0;
    virtual HRESULT __stdcall get_IsGpuConstrained(bool * value) = 0;
    virtual HRESULT __stdcall get_HasHardwareEncoder(bool * value) = 0;
    virtual HRESULT __stdcall put_IsAudioCaptureEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsAudioCaptureEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsMicrophoneCaptureEnabledByDefault(bool value) = 0;
    virtual HRESULT __stdcall get_IsMicrophoneCaptureEnabledByDefault(bool * value) = 0;
    virtual HRESULT __stdcall put_IsEchoCancellationEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsEchoCancellationEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_SystemAudioGain(double value) = 0;
    virtual HRESULT __stdcall get_SystemAudioGain(double * value) = 0;
    virtual HRESULT __stdcall put_MicrophoneGain(double value) = 0;
    virtual HRESULT __stdcall get_MicrophoneGain(double * value) = 0;
    virtual HRESULT __stdcall put_IsCameraCaptureEnabledByDefault(bool value) = 0;
    virtual HRESULT __stdcall get_IsCameraCaptureEnabledByDefault(bool * value) = 0;
    virtual HRESULT __stdcall put_SelectedCameraId(hstring value) = 0;
    virtual HRESULT __stdcall get_SelectedCameraId(hstring * value) = 0;
    virtual HRESULT __stdcall put_CameraOverlayLocation(winrt::Windows::Media::Capture::AppBroadcastCameraOverlayLocation value) = 0;
    virtual HRESULT __stdcall get_CameraOverlayLocation(winrt::Windows::Media::Capture::AppBroadcastCameraOverlayLocation * value) = 0;
    virtual HRESULT __stdcall put_CameraOverlaySize(winrt::Windows::Media::Capture::AppBroadcastCameraOverlaySize value) = 0;
    virtual HRESULT __stdcall get_CameraOverlaySize(winrt::Windows::Media::Capture::AppBroadcastCameraOverlaySize * value) = 0;
    virtual HRESULT __stdcall put_IsCursorImageCaptureEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsCursorImageCaptureEnabled(bool * value) = 0;
};

struct __declspec(uuid("cea54283-ee51-4dbf-9472-79a9ed4e2165")) __declspec(novtable) IAppBroadcastHeartbeatRequestedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall get_Handled(bool * value) = 0;
};

struct __declspec(uuid("364e018b-1e4e-411f-ab3e-92959844c156")) __declspec(novtable) IAppBroadcastManagerStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_GetGlobalSettings(Windows::Media::Capture::IAppBroadcastGlobalSettings ** value) = 0;
    virtual HRESULT __stdcall abi_ApplyGlobalSettings(Windows::Media::Capture::IAppBroadcastGlobalSettings * value) = 0;
    virtual HRESULT __stdcall abi_GetProviderSettings(Windows::Media::Capture::IAppBroadcastProviderSettings ** value) = 0;
    virtual HRESULT __stdcall abi_ApplyProviderSettings(Windows::Media::Capture::IAppBroadcastProviderSettings * value) = 0;
};

struct __declspec(uuid("a86ad5e9-9440-4908-9d09-65b7e315d795")) __declspec(novtable) IAppBroadcastMicrophoneCaptureStateChangedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_State(winrt::Windows::Media::Capture::AppBroadcastMicrophoneCaptureState * value) = 0;
    virtual HRESULT __stdcall get_ErrorCode(uint32_t * value) = 0;
};

struct __declspec(uuid("520c1e66-6513-4574-ac54-23b79729615b")) __declspec(novtable) IAppBroadcastPlugIn : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_AppId(hstring * value) = 0;
    virtual HRESULT __stdcall get_ProviderSettings(Windows::Media::Capture::IAppBroadcastProviderSettings ** value) = 0;
    virtual HRESULT __stdcall get_Logo(Windows::Storage::Streams::IRandomAccessStreamReference ** value) = 0;
    virtual HRESULT __stdcall get_DisplayName(hstring * value) = 0;
};

struct __declspec(uuid("e550d979-27a1-49a7-bbf4-d7a9e9d07668")) __declspec(novtable) IAppBroadcastPlugInManager : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_IsBroadcastProviderAvailable(bool * value) = 0;
    virtual HRESULT __stdcall get_PlugInList(Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::AppBroadcastPlugIn> ** value) = 0;
    virtual HRESULT __stdcall get_DefaultPlugIn(Windows::Media::Capture::IAppBroadcastPlugIn ** value) = 0;
    virtual HRESULT __stdcall put_DefaultPlugIn(Windows::Media::Capture::IAppBroadcastPlugIn * value) = 0;
};

struct __declspec(uuid("f2645c20-5c76-4cdc-9364-82fe9eb6534d")) __declspec(novtable) IAppBroadcastPlugInManagerStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_GetDefault(Windows::Media::Capture::IAppBroadcastPlugInManager ** ppInstance) = 0;
    virtual HRESULT __stdcall abi_GetForUser(Windows::System::IUser * user, Windows::Media::Capture::IAppBroadcastPlugInManager ** ppInstance) = 0;
};

struct __declspec(uuid("4881d0f2-abc5-4fc6-84b0-89370bb47212")) __declspec(novtable) IAppBroadcastPlugInStateChangedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_PlugInState(winrt::Windows::Media::Capture::AppBroadcastPlugInState * value) = 0;
};

struct __declspec(uuid("14b60f5a-6e4a-4b80-a14f-67ee77d153e7")) __declspec(novtable) IAppBroadcastPreview : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_StopPreview() = 0;
    virtual HRESULT __stdcall get_PreviewState(winrt::Windows::Media::Capture::AppBroadcastPreviewState * value) = 0;
    virtual HRESULT __stdcall get_ErrorCode(Windows::Foundation::IReference<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall add_PreviewStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreview, Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_PreviewStateChanged(event_token token) = 0;
    virtual HRESULT __stdcall get_PreviewStreamReader(Windows::Media::Capture::IAppBroadcastPreviewStreamReader ** value) = 0;
};

struct __declspec(uuid("5a57f2de-8dea-4e86-90ad-03fc26b9653c")) __declspec(novtable) IAppBroadcastPreviewStateChangedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_PreviewState(winrt::Windows::Media::Capture::AppBroadcastPreviewState * value) = 0;
    virtual HRESULT __stdcall get_ErrorCode(uint32_t * value) = 0;
};

struct __declspec(uuid("92228d50-db3f-40a8-8cd4-f4e371ddab37")) __declspec(novtable) IAppBroadcastPreviewStreamReader : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_VideoWidth(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_VideoHeight(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_VideoStride(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_VideoBitmapPixelFormat(winrt::Windows::Graphics::Imaging::BitmapPixelFormat * value) = 0;
    virtual HRESULT __stdcall get_VideoBitmapAlphaMode(winrt::Windows::Graphics::Imaging::BitmapAlphaMode * value) = 0;
    virtual HRESULT __stdcall abi_TryGetNextVideoFrame(Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame ** frame) = 0;
    virtual HRESULT __stdcall add_VideoFrameArrived(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreviewStreamReader, Windows::Foundation::IInspectable> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_VideoFrameArrived(event_token token) = 0;
};

struct __declspec(uuid("010fbea1-94fe-4499-b8c0-8d244279fb12")) __declspec(novtable) IAppBroadcastPreviewStreamVideoFrame : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_VideoHeader(Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader ** value) = 0;
    virtual HRESULT __stdcall get_VideoBuffer(Windows::Storage::Streams::IBuffer ** value) = 0;
};

struct __declspec(uuid("8bef6113-da84-4499-a7ab-87118cb4a157")) __declspec(novtable) IAppBroadcastPreviewStreamVideoHeader : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_AbsoluteTimestamp(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall get_RelativeTimestamp(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall get_Duration(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall get_FrameId(uint64_t * value) = 0;
};

struct __declspec(uuid("c30bdf62-9948-458f-ad50-aa06ec03da08")) __declspec(novtable) IAppBroadcastProviderSettings : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall put_DefaultBroadcastTitle(hstring value) = 0;
    virtual HRESULT __stdcall get_DefaultBroadcastTitle(hstring * value) = 0;
    virtual HRESULT __stdcall put_AudioEncodingBitrate(uint32_t value) = 0;
    virtual HRESULT __stdcall get_AudioEncodingBitrate(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_CustomVideoEncodingBitrate(uint32_t value) = 0;
    virtual HRESULT __stdcall get_CustomVideoEncodingBitrate(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_CustomVideoEncodingHeight(uint32_t value) = 0;
    virtual HRESULT __stdcall get_CustomVideoEncodingHeight(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_CustomVideoEncodingWidth(uint32_t value) = 0;
    virtual HRESULT __stdcall get_CustomVideoEncodingWidth(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_VideoEncodingBitrateMode(winrt::Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode value) = 0;
    virtual HRESULT __stdcall get_VideoEncodingBitrateMode(winrt::Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode * value) = 0;
    virtual HRESULT __stdcall put_VideoEncodingResolutionMode(winrt::Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode value) = 0;
    virtual HRESULT __stdcall get_VideoEncodingResolutionMode(winrt::Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode * value) = 0;
};

struct __declspec(uuid("8660b4d6-969b-4e3c-ac3a-8b042ee4ee63")) __declspec(novtable) IAppBroadcastServices : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_CaptureTargetType(winrt::Windows::Media::Capture::AppBroadcastCaptureTargetType * value) = 0;
    virtual HRESULT __stdcall put_CaptureTargetType(winrt::Windows::Media::Capture::AppBroadcastCaptureTargetType value) = 0;
    virtual HRESULT __stdcall get_BroadcastTitle(hstring * value) = 0;
    virtual HRESULT __stdcall put_BroadcastTitle(hstring value) = 0;
    virtual HRESULT __stdcall get_BroadcastLanguage(hstring * value) = 0;
    virtual HRESULT __stdcall put_BroadcastLanguage(hstring value) = 0;
    virtual HRESULT __stdcall get_UserName(hstring * value) = 0;
    virtual HRESULT __stdcall get_CanCapture(bool * value) = 0;
    virtual HRESULT __stdcall abi_EnterBroadcastModeAsync(Windows::Media::Capture::IAppBroadcastPlugIn * plugIn, Windows::Foundation::IAsyncOperation<uint32_t> ** operation) = 0;
    virtual HRESULT __stdcall abi_ExitBroadcastMode(winrt::Windows::Media::Capture::AppBroadcastExitBroadcastModeReason reason) = 0;
    virtual HRESULT __stdcall abi_StartBroadcast() = 0;
    virtual HRESULT __stdcall abi_PauseBroadcast() = 0;
    virtual HRESULT __stdcall abi_ResumeBroadcast() = 0;
    virtual HRESULT __stdcall abi_StartPreview(Windows::Foundation::Size desiredSize, Windows::Media::Capture::IAppBroadcastPreview ** preview) = 0;
    virtual HRESULT __stdcall get_State(Windows::Media::Capture::IAppBroadcastState ** value) = 0;
};

struct __declspec(uuid("02b692a4-5919-4a9e-8d5e-c9bb0dd3377a")) __declspec(novtable) IAppBroadcastSignInStateChangedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_SignInState(winrt::Windows::Media::Capture::AppBroadcastSignInState * value) = 0;
    virtual HRESULT __stdcall get_Result(winrt::Windows::Media::Capture::AppBroadcastSignInResult * value) = 0;
};

struct __declspec(uuid("ee08056d-8099-4ddd-922e-c56dac58abfb")) __declspec(novtable) IAppBroadcastState : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_IsCaptureTargetRunning(bool * value) = 0;
    virtual HRESULT __stdcall get_ViewerCount(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_ShouldCaptureMicrophone(bool * value) = 0;
    virtual HRESULT __stdcall put_ShouldCaptureMicrophone(bool value) = 0;
    virtual HRESULT __stdcall abi_RestartMicrophoneCapture() = 0;
    virtual HRESULT __stdcall get_ShouldCaptureCamera(bool * value) = 0;
    virtual HRESULT __stdcall put_ShouldCaptureCamera(bool value) = 0;
    virtual HRESULT __stdcall abi_RestartCameraCapture() = 0;
    virtual HRESULT __stdcall get_EncodedVideoSize(Windows::Foundation::Size * value) = 0;
    virtual HRESULT __stdcall get_MicrophoneCaptureState(winrt::Windows::Media::Capture::AppBroadcastMicrophoneCaptureState * value) = 0;
    virtual HRESULT __stdcall get_MicrophoneCaptureError(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_CameraCaptureState(winrt::Windows::Media::Capture::AppBroadcastCameraCaptureState * value) = 0;
    virtual HRESULT __stdcall get_CameraCaptureError(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_StreamState(winrt::Windows::Media::Capture::AppBroadcastStreamState * value) = 0;
    virtual HRESULT __stdcall get_PlugInState(winrt::Windows::Media::Capture::AppBroadcastPlugInState * value) = 0;
    virtual HRESULT __stdcall get_OAuthRequestUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall get_OAuthCallbackUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall get_AuthenticationResult(Windows::Security::Authentication::Web::IWebAuthenticationResult ** value) = 0;
    virtual HRESULT __stdcall put_AuthenticationResult(Windows::Security::Authentication::Web::IWebAuthenticationResult * value) = 0;
    virtual HRESULT __stdcall put_SignInState(winrt::Windows::Media::Capture::AppBroadcastSignInState value) = 0;
    virtual HRESULT __stdcall get_SignInState(winrt::Windows::Media::Capture::AppBroadcastSignInState * value) = 0;
    virtual HRESULT __stdcall get_TerminationReason(winrt::Windows::Media::Capture::AppBroadcastTerminationReason * value) = 0;
    virtual HRESULT __stdcall get_TerminationReasonPlugInSpecific(uint32_t * value) = 0;
    virtual HRESULT __stdcall add_ViewerCountChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ViewerCountChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_MicrophoneCaptureStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_MicrophoneCaptureStateChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_CameraCaptureStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_CameraCaptureStateChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_PlugInStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_PlugInStateChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_StreamStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_StreamStateChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_CaptureTargetClosed(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Foundation::IInspectable> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_CaptureTargetClosed(event_token token) = 0;
};

struct __declspec(uuid("efab4ac8-21ba-453f-8bb7-5e938a2e9a74")) __declspec(novtable) IAppBroadcastStreamAudioFrame : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_AudioHeader(Windows::Media::Capture::IAppBroadcastStreamAudioHeader ** value) = 0;
    virtual HRESULT __stdcall get_AudioBuffer(Windows::Storage::Streams::IBuffer ** value) = 0;
};

struct __declspec(uuid("bf21a570-6b78-4216-9f07-5aff5256f1b7")) __declspec(novtable) IAppBroadcastStreamAudioHeader : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_AbsoluteTimestamp(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall get_RelativeTimestamp(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall get_Duration(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall get_HasDiscontinuity(bool * value) = 0;
    virtual HRESULT __stdcall get_FrameId(uint64_t * value) = 0;
};

struct __declspec(uuid("b338bcf9-3364-4460-b5f1-3cc2796a8aa2")) __declspec(novtable) IAppBroadcastStreamReader : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_AudioChannels(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_AudioSampleRate(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_AudioAacSequence(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall get_AudioBitrate(uint32_t * value) = 0;
    virtual HRESULT __stdcall abi_TryGetNextAudioFrame(Windows::Media::Capture::IAppBroadcastStreamAudioFrame ** frame) = 0;
    virtual HRESULT __stdcall get_VideoWidth(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_VideoHeight(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_VideoBitrate(uint32_t * value) = 0;
    virtual HRESULT __stdcall abi_TryGetNextVideoFrame(Windows::Media::Capture::IAppBroadcastStreamVideoFrame ** frame) = 0;
    virtual HRESULT __stdcall add_AudioFrameArrived(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_AudioFrameArrived(event_token token) = 0;
    virtual HRESULT __stdcall add_VideoFrameArrived(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_VideoFrameArrived(event_token token) = 0;
};

struct __declspec(uuid("5108a733-d008-4a89-93be-58aed961374e")) __declspec(novtable) IAppBroadcastStreamStateChangedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_StreamState(winrt::Windows::Media::Capture::AppBroadcastStreamState * value) = 0;
};

struct __declspec(uuid("0f97cf2b-c9e4-4e88-8194-d814cbd585d8")) __declspec(novtable) IAppBroadcastStreamVideoFrame : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_VideoHeader(Windows::Media::Capture::IAppBroadcastStreamVideoHeader ** value) = 0;
    virtual HRESULT __stdcall get_VideoBuffer(Windows::Storage::Streams::IBuffer ** value) = 0;
};

struct __declspec(uuid("0b9ebece-7e32-432d-8ca2-36bf10b9f462")) __declspec(novtable) IAppBroadcastStreamVideoHeader : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_AbsoluteTimestamp(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall get_RelativeTimestamp(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall get_Duration(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall get_IsKeyFrame(bool * value) = 0;
    virtual HRESULT __stdcall get_HasDiscontinuity(bool * value) = 0;
    virtual HRESULT __stdcall get_FrameId(uint64_t * value) = 0;
};

struct __declspec(uuid("deebab35-ec5e-4d8f-b1c0-5da6e8c75638")) __declspec(novtable) IAppBroadcastTriggerDetails : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_BackgroundService(Windows::Media::Capture::IAppBroadcastBackgroundService ** value) = 0;
};

struct __declspec(uuid("e6e11825-5401-4ade-8bd2-c14ecee6807d")) __declspec(novtable) IAppBroadcastViewerCountChangedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_ViewerCount(uint32_t * value) = 0;
};

struct __declspec(uuid("9749d453-a29a-45ed-8f29-22d09942cff7")) __declspec(novtable) IAppCapture : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_IsCapturingAudio(bool * value) = 0;
    virtual HRESULT __stdcall get_IsCapturingVideo(bool * value) = 0;
    virtual HRESULT __stdcall add_CapturingChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCapture, Windows::Foundation::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_CapturingChanged(event_token token) = 0;
};

struct __declspec(uuid("19e8e0ef-236c-40f9-b38f-9b7dd65d1ccc")) __declspec(novtable) IAppCaptureAlternateShortcutKeys : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall put_ToggleGameBarKey(winrt::Windows::System::VirtualKey value) = 0;
    virtual HRESULT __stdcall get_ToggleGameBarKey(winrt::Windows::System::VirtualKey * value) = 0;
    virtual HRESULT __stdcall put_ToggleGameBarKeyModifiers(winrt::Windows::System::VirtualKeyModifiers value) = 0;
    virtual HRESULT __stdcall get_ToggleGameBarKeyModifiers(winrt::Windows::System::VirtualKeyModifiers * value) = 0;
    virtual HRESULT __stdcall put_SaveHistoricalVideoKey(winrt::Windows::System::VirtualKey value) = 0;
    virtual HRESULT __stdcall get_SaveHistoricalVideoKey(winrt::Windows::System::VirtualKey * value) = 0;
    virtual HRESULT __stdcall put_SaveHistoricalVideoKeyModifiers(winrt::Windows::System::VirtualKeyModifiers value) = 0;
    virtual HRESULT __stdcall get_SaveHistoricalVideoKeyModifiers(winrt::Windows::System::VirtualKeyModifiers * value) = 0;
    virtual HRESULT __stdcall put_ToggleRecordingKey(winrt::Windows::System::VirtualKey value) = 0;
    virtual HRESULT __stdcall get_ToggleRecordingKey(winrt::Windows::System::VirtualKey * value) = 0;
    virtual HRESULT __stdcall put_ToggleRecordingKeyModifiers(winrt::Windows::System::VirtualKeyModifiers value) = 0;
    virtual HRESULT __stdcall get_ToggleRecordingKeyModifiers(winrt::Windows::System::VirtualKeyModifiers * value) = 0;
    virtual HRESULT __stdcall put_TakeScreenshotKey(winrt::Windows::System::VirtualKey value) = 0;
    virtual HRESULT __stdcall get_TakeScreenshotKey(winrt::Windows::System::VirtualKey * value) = 0;
    virtual HRESULT __stdcall put_TakeScreenshotKeyModifiers(winrt::Windows::System::VirtualKeyModifiers value) = 0;
    virtual HRESULT __stdcall get_TakeScreenshotKeyModifiers(winrt::Windows::System::VirtualKeyModifiers * value) = 0;
    virtual HRESULT __stdcall put_ToggleRecordingIndicatorKey(winrt::Windows::System::VirtualKey value) = 0;
    virtual HRESULT __stdcall get_ToggleRecordingIndicatorKey(winrt::Windows::System::VirtualKey * value) = 0;
    virtual HRESULT __stdcall put_ToggleRecordingIndicatorKeyModifiers(winrt::Windows::System::VirtualKeyModifiers value) = 0;
    virtual HRESULT __stdcall get_ToggleRecordingIndicatorKeyModifiers(winrt::Windows::System::VirtualKeyModifiers * value) = 0;
};

struct __declspec(uuid("c3669090-dd17-47f0-95e5-ce42286cf338")) __declspec(novtable) IAppCaptureAlternateShortcutKeys2 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall put_ToggleMicrophoneCaptureKey(winrt::Windows::System::VirtualKey value) = 0;
    virtual HRESULT __stdcall get_ToggleMicrophoneCaptureKey(winrt::Windows::System::VirtualKey * value) = 0;
    virtual HRESULT __stdcall put_ToggleMicrophoneCaptureKeyModifiers(winrt::Windows::System::VirtualKeyModifiers value) = 0;
    virtual HRESULT __stdcall get_ToggleMicrophoneCaptureKeyModifiers(winrt::Windows::System::VirtualKeyModifiers * value) = 0;
};

struct __declspec(uuid("7b81448c-418e-469c-a49a-45b597c826b6")) __declspec(novtable) IAppCaptureAlternateShortcutKeys3 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall put_ToggleCameraCaptureKey(winrt::Windows::System::VirtualKey value) = 0;
    virtual HRESULT __stdcall get_ToggleCameraCaptureKey(winrt::Windows::System::VirtualKey * value) = 0;
    virtual HRESULT __stdcall put_ToggleCameraCaptureKeyModifiers(winrt::Windows::System::VirtualKeyModifiers value) = 0;
    virtual HRESULT __stdcall get_ToggleCameraCaptureKeyModifiers(winrt::Windows::System::VirtualKeyModifiers * value) = 0;
    virtual HRESULT __stdcall put_ToggleBroadcastKey(winrt::Windows::System::VirtualKey value) = 0;
    virtual HRESULT __stdcall get_ToggleBroadcastKey(winrt::Windows::System::VirtualKey * value) = 0;
    virtual HRESULT __stdcall put_ToggleBroadcastKeyModifiers(winrt::Windows::System::VirtualKeyModifiers value) = 0;
    virtual HRESULT __stdcall get_ToggleBroadcastKeyModifiers(winrt::Windows::System::VirtualKeyModifiers * value) = 0;
};

struct __declspec(uuid("c1f5563b-ffa1-44c9-975f-27fbeb553b35")) __declspec(novtable) IAppCaptureDurationGeneratedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Duration(Windows::Foundation::TimeSpan * value) = 0;
};

struct __declspec(uuid("4189fbf4-465e-45bf-907f-165b3fb23758")) __declspec(novtable) IAppCaptureFileGeneratedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_File(Windows::Storage::IStorageFile ** value) = 0;
};

struct __declspec(uuid("7d9e3ea7-6282-4735-8d4e-aa45f90f6723")) __declspec(novtable) IAppCaptureManagerStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_GetCurrentSettings(Windows::Media::Capture::IAppCaptureSettings ** value) = 0;
    virtual HRESULT __stdcall abi_ApplySettings(Windows::Media::Capture::IAppCaptureSettings * appCaptureSettings) = 0;
};

struct __declspec(uuid("324d249e-45bc-4c35-bc35-e469fc7a69e0")) __declspec(novtable) IAppCaptureMicrophoneCaptureStateChangedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_State(winrt::Windows::Media::Capture::AppCaptureMicrophoneCaptureState * value) = 0;
    virtual HRESULT __stdcall get_ErrorCode(uint32_t * value) = 0;
};

struct __declspec(uuid("c66020a9-1538-495c-9bbb-2ba870ec5861")) __declspec(novtable) IAppCaptureRecordOperation : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_StopRecording() = 0;
    virtual HRESULT __stdcall get_State(winrt::Windows::Media::Capture::AppCaptureRecordingState * value) = 0;
    virtual HRESULT __stdcall get_ErrorCode(Windows::Foundation::IReference<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall get_Duration(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> ** value) = 0;
    virtual HRESULT __stdcall get_File(Windows::Storage::IStorageFile ** value) = 0;
    virtual HRESULT __stdcall get_IsFileTruncated(Windows::Foundation::IReference<bool> ** value) = 0;
    virtual HRESULT __stdcall add_StateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_StateChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_DurationGenerated(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_DurationGenerated(event_token token) = 0;
    virtual HRESULT __stdcall add_FileGenerated(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureFileGeneratedEventArgs> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_FileGenerated(event_token token) = 0;
};

struct __declspec(uuid("24fc8712-e305-490d-b415-6b1c9049736b")) __declspec(novtable) IAppCaptureRecordingStateChangedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_State(winrt::Windows::Media::Capture::AppCaptureRecordingState * value) = 0;
    virtual HRESULT __stdcall get_ErrorCode(uint32_t * value) = 0;
};

struct __declspec(uuid("44fec0b5-34f5-4f18-ae8c-b9123abbfc0d")) __declspec(novtable) IAppCaptureServices : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_Record(Windows::Media::Capture::IAppCaptureRecordOperation ** operation) = 0;
    virtual HRESULT __stdcall abi_RecordTimeSpan(Windows::Foundation::DateTime startTime, Windows::Foundation::TimeSpan duration, Windows::Media::Capture::IAppCaptureRecordOperation ** operation) = 0;
    virtual HRESULT __stdcall get_CanCapture(bool * value) = 0;
    virtual HRESULT __stdcall get_State(Windows::Media::Capture::IAppCaptureState ** value) = 0;
};

struct __declspec(uuid("14683a86-8807-48d3-883a-970ee4532a39")) __declspec(novtable) IAppCaptureSettings : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall put_AppCaptureDestinationFolder(Windows::Storage::IStorageFolder * value) = 0;
    virtual HRESULT __stdcall get_AppCaptureDestinationFolder(Windows::Storage::IStorageFolder ** value) = 0;
    virtual HRESULT __stdcall put_AudioEncodingBitrate(uint32_t value) = 0;
    virtual HRESULT __stdcall get_AudioEncodingBitrate(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_IsAudioCaptureEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsAudioCaptureEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_CustomVideoEncodingBitrate(uint32_t value) = 0;
    virtual HRESULT __stdcall get_CustomVideoEncodingBitrate(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_CustomVideoEncodingHeight(uint32_t value) = 0;
    virtual HRESULT __stdcall get_CustomVideoEncodingHeight(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_CustomVideoEncodingWidth(uint32_t value) = 0;
    virtual HRESULT __stdcall get_CustomVideoEncodingWidth(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_HistoricalBufferLength(uint32_t value) = 0;
    virtual HRESULT __stdcall get_HistoricalBufferLength(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_HistoricalBufferLengthUnit(winrt::Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit value) = 0;
    virtual HRESULT __stdcall get_HistoricalBufferLengthUnit(winrt::Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit * value) = 0;
    virtual HRESULT __stdcall put_IsHistoricalCaptureEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsHistoricalCaptureEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsHistoricalCaptureOnBatteryAllowed(bool value) = 0;
    virtual HRESULT __stdcall get_IsHistoricalCaptureOnBatteryAllowed(bool * value) = 0;
    virtual HRESULT __stdcall put_IsHistoricalCaptureOnWirelessDisplayAllowed(bool value) = 0;
    virtual HRESULT __stdcall get_IsHistoricalCaptureOnWirelessDisplayAllowed(bool * value) = 0;
    virtual HRESULT __stdcall put_MaximumRecordLength(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_MaximumRecordLength(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall put_ScreenshotDestinationFolder(Windows::Storage::IStorageFolder * value) = 0;
    virtual HRESULT __stdcall get_ScreenshotDestinationFolder(Windows::Storage::IStorageFolder ** value) = 0;
    virtual HRESULT __stdcall put_VideoEncodingBitrateMode(winrt::Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode value) = 0;
    virtual HRESULT __stdcall get_VideoEncodingBitrateMode(winrt::Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode * value) = 0;
    virtual HRESULT __stdcall put_VideoEncodingResolutionMode(winrt::Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode value) = 0;
    virtual HRESULT __stdcall get_VideoEncodingResolutionMode(winrt::Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode * value) = 0;
    virtual HRESULT __stdcall put_IsAppCaptureEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsAppCaptureEnabled(bool * value) = 0;
    virtual HRESULT __stdcall get_IsCpuConstrained(bool * value) = 0;
    virtual HRESULT __stdcall get_IsDisabledByPolicy(bool * value) = 0;
    virtual HRESULT __stdcall get_IsMemoryConstrained(bool * value) = 0;
    virtual HRESULT __stdcall get_HasHardwareEncoder(bool * value) = 0;
};

struct __declspec(uuid("fcb8cee7-e26b-476f-9b1a-ec342d2a8fde")) __declspec(novtable) IAppCaptureSettings2 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_IsGpuConstrained(bool * value) = 0;
    virtual HRESULT __stdcall get_AlternateShortcutKeys(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys ** value) = 0;
};

struct __declspec(uuid("a93502fe-88c2-42d6-aaaa-40feffd75aec")) __declspec(novtable) IAppCaptureSettings3 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall put_IsMicrophoneCaptureEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsMicrophoneCaptureEnabled(bool * value) = 0;
};

struct __declspec(uuid("07c2774c-1a81-482f-a244-049d95f25b0b")) __declspec(novtable) IAppCaptureSettings4 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall put_IsMicrophoneCaptureEnabledByDefault(bool value) = 0;
    virtual HRESULT __stdcall get_IsMicrophoneCaptureEnabledByDefault(bool * value) = 0;
    virtual HRESULT __stdcall put_SystemAudioGain(double value) = 0;
    virtual HRESULT __stdcall get_SystemAudioGain(double * value) = 0;
    virtual HRESULT __stdcall put_MicrophoneGain(double value) = 0;
    virtual HRESULT __stdcall get_MicrophoneGain(double * value) = 0;
    virtual HRESULT __stdcall put_VideoEncodingFrameRateMode(winrt::Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode value) = 0;
    virtual HRESULT __stdcall get_VideoEncodingFrameRateMode(winrt::Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode * value) = 0;
};

struct __declspec(uuid("18894522-b0e8-4ba0-8f13-3eaa5fa4013b")) __declspec(novtable) IAppCaptureSettings5 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall put_IsEchoCancellationEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsEchoCancellationEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsCursorImageCaptureEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsCursorImageCaptureEnabled(bool * value) = 0;
};

struct __declspec(uuid("73134372-d4eb-44ce-9538-465f506ac4ea")) __declspec(novtable) IAppCaptureState : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_IsTargetRunning(bool * value) = 0;
    virtual HRESULT __stdcall get_IsHistoricalCaptureEnabled(bool * value) = 0;
    virtual HRESULT __stdcall get_ShouldCaptureMicrophone(bool * value) = 0;
    virtual HRESULT __stdcall put_ShouldCaptureMicrophone(bool value) = 0;
    virtual HRESULT __stdcall abi_RestartMicrophoneCapture() = 0;
    virtual HRESULT __stdcall get_MicrophoneCaptureState(winrt::Windows::Media::Capture::AppCaptureMicrophoneCaptureState * value) = 0;
    virtual HRESULT __stdcall get_MicrophoneCaptureError(uint32_t * value) = 0;
    virtual HRESULT __stdcall add_MicrophoneCaptureStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_MicrophoneCaptureStateChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_CaptureTargetClosed(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Foundation::IInspectable> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_CaptureTargetClosed(event_token token) = 0;
};

struct __declspec(uuid("f922dd6c-0a7e-4e74-8b20-9c1f902d08a1")) __declspec(novtable) IAppCaptureStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_GetForCurrentView(Windows::Media::Capture::IAppCapture ** value) = 0;
};

struct __declspec(uuid("48587540-6f93-4bb4-b8f3-e89e48948c91")) __declspec(novtable) ICameraCaptureUI : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_PhotoSettings(Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings ** value) = 0;
    virtual HRESULT __stdcall get_VideoSettings(Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings ** value) = 0;
    virtual HRESULT __stdcall abi_CaptureFileAsync(winrt::Windows::Media::Capture::CameraCaptureUIMode mode, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ** asyncInfo) = 0;
};

struct __declspec(uuid("b9f5be97-3472-46a8-8a9e-04ce42ccc97d")) __declspec(novtable) ICameraCaptureUIPhotoCaptureSettings : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Format(winrt::Windows::Media::Capture::CameraCaptureUIPhotoFormat * value) = 0;
    virtual HRESULT __stdcall put_Format(winrt::Windows::Media::Capture::CameraCaptureUIPhotoFormat value) = 0;
    virtual HRESULT __stdcall get_MaxResolution(winrt::Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution * value) = 0;
    virtual HRESULT __stdcall put_MaxResolution(winrt::Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution value) = 0;
    virtual HRESULT __stdcall get_CroppedSizeInPixels(Windows::Foundation::Size * value) = 0;
    virtual HRESULT __stdcall put_CroppedSizeInPixels(Windows::Foundation::Size value) = 0;
    virtual HRESULT __stdcall get_CroppedAspectRatio(Windows::Foundation::Size * value) = 0;
    virtual HRESULT __stdcall put_CroppedAspectRatio(Windows::Foundation::Size value) = 0;
    virtual HRESULT __stdcall get_AllowCropping(bool * value) = 0;
    virtual HRESULT __stdcall put_AllowCropping(bool value) = 0;
};

struct __declspec(uuid("64e92d1f-a28d-425a-b84f-e568335ff24e")) __declspec(novtable) ICameraCaptureUIVideoCaptureSettings : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Format(winrt::Windows::Media::Capture::CameraCaptureUIVideoFormat * value) = 0;
    virtual HRESULT __stdcall put_Format(winrt::Windows::Media::Capture::CameraCaptureUIVideoFormat value) = 0;
    virtual HRESULT __stdcall get_MaxResolution(winrt::Windows::Media::Capture::CameraCaptureUIMaxVideoResolution * value) = 0;
    virtual HRESULT __stdcall put_MaxResolution(winrt::Windows::Media::Capture::CameraCaptureUIMaxVideoResolution value) = 0;
    virtual HRESULT __stdcall get_MaxDurationInSeconds(float * value) = 0;
    virtual HRESULT __stdcall put_MaxDurationInSeconds(float value) = 0;
    virtual HRESULT __stdcall get_AllowTrimming(bool * value) = 0;
    virtual HRESULT __stdcall put_AllowTrimming(bool value) = 0;
};

struct __declspec(uuid("3b0d5e34-3906-4b7d-946c-7bde844499ae")) __declspec(novtable) ICameraOptionsUIStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_Show(Windows::Media::Capture::IMediaCapture * mediaCapture) = 0;
};

struct __declspec(uuid("1dd2de1f-571b-44d8-8e80-a08a1578766e")) __declspec(novtable) ICapturedFrame : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Width(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Height(uint32_t * value) = 0;
};

struct __declspec(uuid("90c65b7f-4e0d-4ca4-882d-7a144fed0a90")) __declspec(novtable) ICapturedFrameControlValues : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Exposure(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> ** value) = 0;
    virtual HRESULT __stdcall get_ExposureCompensation(Windows::Foundation::IReference<float> ** value) = 0;
    virtual HRESULT __stdcall get_IsoSpeed(Windows::Foundation::IReference<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall get_Focus(Windows::Foundation::IReference<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall get_SceneMode(Windows::Foundation::IReference<winrt::Windows::Media::Devices::CaptureSceneMode> ** value) = 0;
    virtual HRESULT __stdcall get_Flashed(Windows::Foundation::IReference<bool> ** value) = 0;
    virtual HRESULT __stdcall get_FlashPowerPercent(Windows::Foundation::IReference<float> ** value) = 0;
    virtual HRESULT __stdcall get_WhiteBalance(Windows::Foundation::IReference<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall get_ZoomFactor(Windows::Foundation::IReference<float> ** value) = 0;
};

struct __declspec(uuid("500b2b88-06d2-4aa7-a7db-d37af73321d8")) __declspec(novtable) ICapturedFrameControlValues2 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_FocusState(Windows::Foundation::IReference<winrt::Windows::Media::Devices::MediaCaptureFocusState> ** value) = 0;
    virtual HRESULT __stdcall get_IsoDigitalGain(Windows::Foundation::IReference<double> ** value) = 0;
    virtual HRESULT __stdcall get_IsoAnalogGain(Windows::Foundation::IReference<double> ** value) = 0;
    virtual HRESULT __stdcall get_SensorFrameRate(Windows::Media::MediaProperties::IMediaRatio ** value) = 0;
    virtual HRESULT __stdcall get_WhiteBalanceGain(Windows::Foundation::IReference<Windows::Media::Capture::WhiteBalanceGain> ** value) = 0;
};

struct __declspec(uuid("b58e8b6e-8503-49b5-9e86-897d26a3ff3d")) __declspec(novtable) ICapturedFrameWithSoftwareBitmap : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_SoftwareBitmap(Windows::Graphics::Imaging::ISoftwareBitmap ** value) = 0;
};

struct __declspec(uuid("b0ce7e5a-cfcc-4d6c-8ad1-0869208aca16")) __declspec(novtable) ICapturedPhoto : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Frame(Windows::Media::Capture::ICapturedFrame ** value) = 0;
    virtual HRESULT __stdcall get_Thumbnail(Windows::Media::Capture::ICapturedFrame ** value) = 0;
};

struct __declspec(uuid("2dbead57-50a6-499e-8c6c-d330a7311796")) __declspec(novtable) IGameBarServices : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_TargetCapturePolicy(winrt::Windows::Media::Capture::GameBarTargetCapturePolicy * value) = 0;
    virtual HRESULT __stdcall abi_EnableCapture() = 0;
    virtual HRESULT __stdcall abi_DisableCapture() = 0;
    virtual HRESULT __stdcall get_TargetInfo(Windows::Media::Capture::IGameBarServicesTargetInfo ** value) = 0;
    virtual HRESULT __stdcall get_SessionId(hstring * value) = 0;
    virtual HRESULT __stdcall get_AppBroadcastServices(Windows::Media::Capture::IAppBroadcastServices ** value) = 0;
    virtual HRESULT __stdcall get_AppCaptureServices(Windows::Media::Capture::IAppCaptureServices ** value) = 0;
    virtual HRESULT __stdcall add_CommandReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServices, Windows::Media::Capture::GameBarServicesCommandEventArgs> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_CommandReceived(event_token token) = 0;
};

struct __declspec(uuid("a74226b2-f176-4fcf-8fbb-cf698b2eb8e0")) __declspec(novtable) IGameBarServicesCommandEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Command(winrt::Windows::Media::Capture::GameBarCommand * value) = 0;
    virtual HRESULT __stdcall get_Origin(winrt::Windows::Media::Capture::GameBarCommandOrigin * value) = 0;
};

struct __declspec(uuid("3a4b9cfa-7f8b-4c60-9dbb-0bcd262dffc6")) __declspec(novtable) IGameBarServicesManager : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall add_GameBarServicesCreated(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServicesManager, Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_GameBarServicesCreated(event_token token) = 0;
};

struct __declspec(uuid("ededbd9c-143e-49a3-a5ea-0b1995c8d46e")) __declspec(novtable) IGameBarServicesManagerGameBarServicesCreatedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_GameBarServices(Windows::Media::Capture::IGameBarServices ** value) = 0;
};

struct __declspec(uuid("34c1b616-ff25-4792-98f2-d3753f15ac13")) __declspec(novtable) IGameBarServicesManagerStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_GetDefault(Windows::Media::Capture::IGameBarServicesManager ** ppInstance) = 0;
};

struct __declspec(uuid("b4202f92-1611-4e05-b6ef-dfd737ae33b0")) __declspec(novtable) IGameBarServicesTargetInfo : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_DisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall get_AppId(hstring * value) = 0;
    virtual HRESULT __stdcall get_TitleId(hstring * value) = 0;
    virtual HRESULT __stdcall get_DisplayMode(winrt::Windows::Media::Capture::GameBarServicesDisplayMode * value) = 0;
};

struct __declspec(uuid("41c8baf7-ff3f-49f0-a477-f195e3ce5108")) __declspec(novtable) ILowLagMediaRecording : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_StartAsync(Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_StopAsync(Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_FinishAsync(Windows::Foundation::IAsyncAction ** operation) = 0;
};

struct __declspec(uuid("6369c758-5644-41e2-97af-8ef56a25e225")) __declspec(novtable) ILowLagMediaRecording2 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_PauseAsync(winrt::Windows::Media::Devices::MediaCapturePauseBehavior behavior, Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_ResumeAsync(Windows::Foundation::IAsyncAction ** operation) = 0;
};

struct __declspec(uuid("5c33ab12-48f7-47da-b41e-90880a5fe0ec")) __declspec(novtable) ILowLagMediaRecording3 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_PauseWithResultAsync(winrt::Windows::Media::Devices::MediaCapturePauseBehavior behavior, Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_StopWithResultAsync(Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult> ** operation) = 0;
};

struct __declspec(uuid("a37251b7-6b44-473d-8f24-f703d6c0ec44")) __declspec(novtable) ILowLagPhotoCapture : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_CaptureAsync(Windows::Foundation::IAsyncOperation<Windows::Media::Capture::CapturedPhoto> ** operation) = 0;
    virtual HRESULT __stdcall abi_FinishAsync(Windows::Foundation::IAsyncAction ** operation) = 0;
};

struct __declspec(uuid("7cc346bb-b9a9-4c91-8ffa-287e9c668669")) __declspec(novtable) ILowLagPhotoSequenceCapture : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_StartAsync(Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_StopAsync(Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_FinishAsync(Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall add_PhotoCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture, Windows::Media::Capture::PhotoCapturedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_PhotoCaptured(event_token token) = 0;
};

struct __declspec(uuid("c61afbb4-fb10-4a34-ac18-ca80d9c8e7ee")) __declspec(novtable) IMediaCapture : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_InitializeAsync(Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_InitializeWithSettingsAsync(Windows::Media::Capture::IMediaCaptureInitializationSettings * mediaCaptureInitializationSettings, Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_StartRecordToStorageFileAsync(Windows::Media::MediaProperties::IMediaEncodingProfile * encodingProfile, Windows::Storage::IStorageFile * file, Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_StartRecordToStreamAsync(Windows::Media::MediaProperties::IMediaEncodingProfile * encodingProfile, Windows::Storage::Streams::IRandomAccessStream * stream, Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_StartRecordToCustomSinkAsync(Windows::Media::MediaProperties::IMediaEncodingProfile * encodingProfile, Windows::Media::IMediaExtension * customMediaSink, Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_StartRecordToCustomSinkIdAsync(Windows::Media::MediaProperties::IMediaEncodingProfile * encodingProfile, hstring customSinkActivationId, Windows::Foundation::Collections::IPropertySet * customSinkSettings, Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_StopRecordAsync(Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_CapturePhotoToStorageFileAsync(Windows::Media::MediaProperties::IImageEncodingProperties * type, Windows::Storage::IStorageFile * file, Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_CapturePhotoToStreamAsync(Windows::Media::MediaProperties::IImageEncodingProperties * type, Windows::Storage::Streams::IRandomAccessStream * stream, Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_AddEffectAsync(winrt::Windows::Media::Capture::MediaStreamType mediaStreamType, hstring effectActivationID, Windows::Foundation::Collections::IPropertySet * effectSettings, Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_ClearEffectsAsync(winrt::Windows::Media::Capture::MediaStreamType mediaStreamType, Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_SetEncoderProperty(winrt::Windows::Media::Capture::MediaStreamType mediaStreamType, GUID propertyId, Windows::Foundation::IInspectable * propertyValue) = 0;
    virtual HRESULT __stdcall abi_GetEncoderProperty(winrt::Windows::Media::Capture::MediaStreamType mediaStreamType, GUID propertyId, Windows::Foundation::IInspectable ** propertyValue) = 0;
    virtual HRESULT __stdcall add_Failed(Windows::Media::Capture::MediaCaptureFailedEventHandler * errorEventHandler, event_token * eventCookie) = 0;
    virtual HRESULT __stdcall remove_Failed(event_token eventCookie) = 0;
    virtual HRESULT __stdcall add_RecordLimitationExceeded(Windows::Media::Capture::RecordLimitationExceededEventHandler * recordLimitationExceededEventHandler, event_token * eventCookie) = 0;
    virtual HRESULT __stdcall remove_RecordLimitationExceeded(event_token eventCookie) = 0;
    virtual HRESULT __stdcall get_MediaCaptureSettings(Windows::Media::Capture::IMediaCaptureSettings ** value) = 0;
    virtual HRESULT __stdcall get_AudioDeviceController(Windows::Media::Devices::IAudioDeviceController ** value) = 0;
    virtual HRESULT __stdcall get_VideoDeviceController(Windows::Media::Devices::IVideoDeviceController ** value) = 0;
    virtual HRESULT __stdcall abi_SetPreviewMirroring(bool value) = 0;
    virtual HRESULT __stdcall abi_GetPreviewMirroring(bool * value) = 0;
    virtual HRESULT __stdcall abi_SetPreviewRotation(winrt::Windows::Media::Capture::VideoRotation value) = 0;
    virtual HRESULT __stdcall abi_GetPreviewRotation(winrt::Windows::Media::Capture::VideoRotation * value) = 0;
    virtual HRESULT __stdcall abi_SetRecordRotation(winrt::Windows::Media::Capture::VideoRotation value) = 0;
    virtual HRESULT __stdcall abi_GetRecordRotation(winrt::Windows::Media::Capture::VideoRotation * value) = 0;
};

struct __declspec(uuid("9cc68260-7da1-4043-b652-21b8878daff9")) __declspec(novtable) IMediaCapture2 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_PrepareLowLagRecordToStorageFileAsync(Windows::Media::MediaProperties::IMediaEncodingProfile * encodingProfile, Windows::Storage::IStorageFile * file, Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> ** operation) = 0;
    virtual HRESULT __stdcall abi_PrepareLowLagRecordToStreamAsync(Windows::Media::MediaProperties::IMediaEncodingProfile * encodingProfile, Windows::Storage::Streams::IRandomAccessStream * stream, Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> ** operation) = 0;
    virtual HRESULT __stdcall abi_PrepareLowLagRecordToCustomSinkAsync(Windows::Media::MediaProperties::IMediaEncodingProfile * encodingProfile, Windows::Media::IMediaExtension * customMediaSink, Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> ** operation) = 0;
    virtual HRESULT __stdcall abi_PrepareLowLagRecordToCustomSinkIdAsync(Windows::Media::MediaProperties::IMediaEncodingProfile * encodingProfile, hstring customSinkActivationId, Windows::Foundation::Collections::IPropertySet * customSinkSettings, Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> ** operation) = 0;
    virtual HRESULT __stdcall abi_PrepareLowLagPhotoCaptureAsync(Windows::Media::MediaProperties::IImageEncodingProperties * type, Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoCapture> ** operation) = 0;
    virtual HRESULT __stdcall abi_PrepareLowLagPhotoSequenceCaptureAsync(Windows::Media::MediaProperties::IImageEncodingProperties * type, Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoSequenceCapture> ** operation) = 0;
    virtual HRESULT __stdcall abi_SetEncodingPropertiesAsync(winrt::Windows::Media::Capture::MediaStreamType mediaStreamType, Windows::Media::MediaProperties::IMediaEncodingProperties * mediaEncodingProperties, Windows::Foundation::Collections::IMap<GUID, Windows::Foundation::IInspectable> * encoderProperties, Windows::Foundation::IAsyncAction ** operation) = 0;
};

struct __declspec(uuid("d4136f30-1564-466e-bc0a-af94e02ab016")) __declspec(novtable) IMediaCapture3 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_PrepareVariablePhotoSequenceCaptureAsync(Windows::Media::MediaProperties::IImageEncodingProperties * type, Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Core::VariablePhotoSequenceCapture> ** operation) = 0;
    virtual HRESULT __stdcall add_FocusChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_FocusChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_PhotoConfirmationCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_PhotoConfirmationCaptured(event_token token) = 0;
};

struct __declspec(uuid("bacd6fd6-fb08-4947-aea2-ce14eff0ce13")) __declspec(novtable) IMediaCapture4 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_AddAudioEffectAsync(Windows::Media::Effects::IAudioEffectDefinition * definition, Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension> ** op) = 0;
    virtual HRESULT __stdcall abi_AddVideoEffectAsync(Windows::Media::Effects::IVideoEffectDefinition * definition, winrt::Windows::Media::Capture::MediaStreamType mediaStreamType, Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension> ** op) = 0;
    virtual HRESULT __stdcall abi_PauseRecordAsync(winrt::Windows::Media::Devices::MediaCapturePauseBehavior behavior, Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_ResumeRecordAsync(Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall add_CameraStreamStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_CameraStreamStateChanged(event_token token) = 0;
    virtual HRESULT __stdcall get_CameraStreamState(winrt::Windows::Media::Devices::CameraStreamState * streamState) = 0;
    virtual HRESULT __stdcall abi_GetPreviewFrameAsync(Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetPreviewFrameCopyAsync(Windows::Media::IVideoFrame * destination, Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame> ** operation) = 0;
    virtual HRESULT __stdcall add_ThermalStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ThermalStatusChanged(event_token token) = 0;
    virtual HRESULT __stdcall get_ThermalStatus(winrt::Windows::Media::Capture::MediaCaptureThermalStatus * value) = 0;
    virtual HRESULT __stdcall abi_PrepareAdvancedPhotoCaptureAsync(Windows::Media::MediaProperties::IImageEncodingProperties * encodingProperties, Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedPhotoCapture> ** operation) = 0;
};

struct __declspec(uuid("da787c22-3a9b-4720-a71e-97900a316e5a")) __declspec(novtable) IMediaCapture5 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_RemoveEffectAsync(Windows::Media::IMediaExtension * effect, Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_PauseRecordWithResultAsync(winrt::Windows::Media::Devices::MediaCapturePauseBehavior behavior, Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_StopRecordWithResultAsync(Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult> ** operation) = 0;
    virtual HRESULT __stdcall get_FrameSources(Windows::Foundation::Collections::IMapView<hstring, Windows::Media::Capture::Frames::MediaFrameSource> ** value) = 0;
    virtual HRESULT __stdcall abi_CreateFrameReaderAsync(Windows::Media::Capture::Frames::IMediaFrameSource * inputSource, Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> ** value) = 0;
    virtual HRESULT __stdcall abi_CreateFrameReaderWithSubtypeAsync(Windows::Media::Capture::Frames::IMediaFrameSource * inputSource, hstring outputSubtype, Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> ** value) = 0;
    virtual HRESULT __stdcall abi_CreateFrameReaderWithSubtypeAndSizeAsync(Windows::Media::Capture::Frames::IMediaFrameSource * inputSource, hstring outputSubtype, Windows::Graphics::Imaging::BitmapSize outputSize, Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> ** value) = 0;
};

struct __declspec(uuid("228948bd-4b20-4bb1-9fd6-a583212a1012")) __declspec(novtable) IMediaCapture6 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall add_CaptureDeviceExclusiveControlStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_CaptureDeviceExclusiveControlStatusChanged(event_token token) = 0;
    virtual HRESULT __stdcall abi_CreateMultiSourceFrameReaderAsync(Windows::Foundation::Collections::IIterable<Windows::Media::Capture::Frames::MediaFrameSource> * inputSources, Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MultiSourceMediaFrameReader> ** value) = 0;
};

struct __declspec(uuid("9d2f920d-a588-43c6-89d6-5ad322af006a")) __declspec(novtable) IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(hstring * value) = 0;
    virtual HRESULT __stdcall get_Status(winrt::Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatus * value) = 0;
};

struct __declspec(uuid("80fde3f4-54c4-42c0-8d19-cea1a87ca18b")) __declspec(novtable) IMediaCaptureFailedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Message(hstring * value) = 0;
    virtual HRESULT __stdcall get_Code(uint32_t * value) = 0;
};

struct __declspec(uuid("81e1bc7f-2277-493e-abee-d3f44ff98c04")) __declspec(novtable) IMediaCaptureFocusChangedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_FocusState(winrt::Windows::Media::Devices::MediaCaptureFocusState * value) = 0;
};

struct __declspec(uuid("9782ba70-ea65-4900-9356-8ca887726884")) __declspec(novtable) IMediaCaptureInitializationSettings : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall put_AudioDeviceId(hstring value) = 0;
    virtual HRESULT __stdcall get_AudioDeviceId(hstring * value) = 0;
    virtual HRESULT __stdcall put_VideoDeviceId(hstring value) = 0;
    virtual HRESULT __stdcall get_VideoDeviceId(hstring * value) = 0;
    virtual HRESULT __stdcall put_StreamingCaptureMode(winrt::Windows::Media::Capture::StreamingCaptureMode value) = 0;
    virtual HRESULT __stdcall get_StreamingCaptureMode(winrt::Windows::Media::Capture::StreamingCaptureMode * value) = 0;
    virtual HRESULT __stdcall put_PhotoCaptureSource(winrt::Windows::Media::Capture::PhotoCaptureSource value) = 0;
    virtual HRESULT __stdcall get_PhotoCaptureSource(winrt::Windows::Media::Capture::PhotoCaptureSource * value) = 0;
};

struct __declspec(uuid("404e0626-c9dc-43e9-aee4-e6bf1b57b44c")) __declspec(novtable) IMediaCaptureInitializationSettings2 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall put_MediaCategory(winrt::Windows::Media::Capture::MediaCategory value) = 0;
    virtual HRESULT __stdcall get_MediaCategory(winrt::Windows::Media::Capture::MediaCategory * value) = 0;
    virtual HRESULT __stdcall put_AudioProcessing(winrt::Windows::Media::AudioProcessing value) = 0;
    virtual HRESULT __stdcall get_AudioProcessing(winrt::Windows::Media::AudioProcessing * value) = 0;
};

struct __declspec(uuid("4160519d-be48-4730-8104-0cf6e9e97948")) __declspec(novtable) IMediaCaptureInitializationSettings3 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall put_AudioSource(Windows::Media::Core::IMediaSource * value) = 0;
    virtual HRESULT __stdcall get_AudioSource(Windows::Media::Core::IMediaSource ** value) = 0;
    virtual HRESULT __stdcall put_VideoSource(Windows::Media::Core::IMediaSource * value) = 0;
    virtual HRESULT __stdcall get_VideoSource(Windows::Media::Core::IMediaSource ** value) = 0;
};

struct __declspec(uuid("f502a537-4cb7-4d28-95ed-4f9f012e0518")) __declspec(novtable) IMediaCaptureInitializationSettings4 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_VideoProfile(Windows::Media::Capture::IMediaCaptureVideoProfile ** value) = 0;
    virtual HRESULT __stdcall put_VideoProfile(Windows::Media::Capture::IMediaCaptureVideoProfile * value) = 0;
    virtual HRESULT __stdcall get_PreviewMediaDescription(Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription ** value) = 0;
    virtual HRESULT __stdcall put_PreviewMediaDescription(Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription * value) = 0;
    virtual HRESULT __stdcall get_RecordMediaDescription(Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription ** value) = 0;
    virtual HRESULT __stdcall put_RecordMediaDescription(Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription * value) = 0;
    virtual HRESULT __stdcall get_PhotoMediaDescription(Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription ** value) = 0;
    virtual HRESULT __stdcall put_PhotoMediaDescription(Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription * value) = 0;
};

struct __declspec(uuid("d5a2e3b8-2626-4e94-b7b3-5308a0f64b1a")) __declspec(novtable) IMediaCaptureInitializationSettings5 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_SourceGroup(Windows::Media::Capture::Frames::IMediaFrameSourceGroup ** value) = 0;
    virtual HRESULT __stdcall put_SourceGroup(Windows::Media::Capture::Frames::IMediaFrameSourceGroup * value) = 0;
    virtual HRESULT __stdcall get_SharingMode(winrt::Windows::Media::Capture::MediaCaptureSharingMode * value) = 0;
    virtual HRESULT __stdcall put_SharingMode(winrt::Windows::Media::Capture::MediaCaptureSharingMode value) = 0;
    virtual HRESULT __stdcall get_MemoryPreference(winrt::Windows::Media::Capture::MediaCaptureMemoryPreference * value) = 0;
    virtual HRESULT __stdcall put_MemoryPreference(winrt::Windows::Media::Capture::MediaCaptureMemoryPreference value) = 0;
};

struct __declspec(uuid("b2e26b47-3db1-4d33-ab63-0ffa09056585")) __declspec(novtable) IMediaCaptureInitializationSettings6 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_AlwaysPlaySystemShutterSound(bool * value) = 0;
    virtual HRESULT __stdcall put_AlwaysPlaySystemShutterSound(bool value) = 0;
};

struct __declspec(uuid("aec47ca3-4477-4b04-a06f-2c1c5182fe9d")) __declspec(novtable) IMediaCapturePauseResult : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_LastFrame(Windows::Media::IVideoFrame ** value) = 0;
    virtual HRESULT __stdcall get_RecordDuration(Windows::Foundation::TimeSpan * value) = 0;
};

struct __declspec(uuid("1d83aafe-6d45-4477-8dc4-ac5bc01c4091")) __declspec(novtable) IMediaCaptureSettings : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_AudioDeviceId(hstring * value) = 0;
    virtual HRESULT __stdcall get_VideoDeviceId(hstring * value) = 0;
    virtual HRESULT __stdcall get_StreamingCaptureMode(winrt::Windows::Media::Capture::StreamingCaptureMode * value) = 0;
    virtual HRESULT __stdcall get_PhotoCaptureSource(winrt::Windows::Media::Capture::PhotoCaptureSource * value) = 0;
    virtual HRESULT __stdcall get_VideoDeviceCharacteristic(winrt::Windows::Media::Capture::VideoDeviceCharacteristic * value) = 0;
};

struct __declspec(uuid("6f9e7cfb-fa9f-4b13-9cbe-5ab94f1f3493")) __declspec(novtable) IMediaCaptureSettings2 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_ConcurrentRecordAndPhotoSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_ConcurrentRecordAndPhotoSequenceSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_CameraSoundRequiredForRegion(bool * value) = 0;
    virtual HRESULT __stdcall get_Horizontal35mmEquivalentFocalLength(Windows::Foundation::IReference<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall get_PitchOffsetDegrees(Windows::Foundation::IReference<int32_t> ** value) = 0;
    virtual HRESULT __stdcall get_Vertical35mmEquivalentFocalLength(Windows::Foundation::IReference<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall get_MediaCategory(winrt::Windows::Media::Capture::MediaCategory * value) = 0;
    virtual HRESULT __stdcall get_AudioProcessing(winrt::Windows::Media::AudioProcessing * value) = 0;
};

struct __declspec(uuid("acef81ff-99ed-4645-965e-1925cfc63834")) __declspec(novtable) IMediaCaptureStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_IsVideoProfileSupported(hstring videoDeviceId, bool * value) = 0;
    virtual HRESULT __stdcall abi_FindAllVideoProfiles(hstring videoDeviceId, Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> ** value) = 0;
    virtual HRESULT __stdcall abi_FindConcurrentProfiles(hstring videoDeviceId, Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> ** value) = 0;
    virtual HRESULT __stdcall abi_FindKnownVideoProfiles(hstring videoDeviceId, winrt::Windows::Media::Capture::KnownVideoProfile name, Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> ** value) = 0;
};

struct __declspec(uuid("f9db6a2a-a092-4ad1-97d4-f201f9d082db")) __declspec(novtable) IMediaCaptureStopResult : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_LastFrame(Windows::Media::IVideoFrame ** value) = 0;
    virtual HRESULT __stdcall get_RecordDuration(Windows::Foundation::TimeSpan * value) = 0;
};

struct __declspec(uuid("27727073-549e-447f-a20a-4f03c479d8c0")) __declspec(novtable) IMediaCaptureVideoPreview : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_StartPreviewAsync(Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_StartPreviewToCustomSinkAsync(Windows::Media::MediaProperties::IMediaEncodingProfile * encodingProfile, Windows::Media::IMediaExtension * customMediaSink, Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_StartPreviewToCustomSinkIdAsync(Windows::Media::MediaProperties::IMediaEncodingProfile * encodingProfile, hstring customSinkActivationId, Windows::Foundation::Collections::IPropertySet * customSinkSettings, Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_StopPreviewAsync(Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
};

struct __declspec(uuid("21a073bf-a3ee-4ecf-9ef6-50b0bc4e1305")) __declspec(novtable) IMediaCaptureVideoProfile : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall get_VideoDeviceId(hstring * value) = 0;
    virtual HRESULT __stdcall get_SupportedPreviewMediaDescription(Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> ** value) = 0;
    virtual HRESULT __stdcall get_SupportedRecordMediaDescription(Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> ** value) = 0;
    virtual HRESULT __stdcall get_SupportedPhotoMediaDescription(Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> ** value) = 0;
    virtual HRESULT __stdcall abi_GetConcurrency(Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> ** value) = 0;
};

struct __declspec(uuid("8012afef-b691-49ff-83f2-c1e76eaaea1b")) __declspec(novtable) IMediaCaptureVideoProfileMediaDescription : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Width(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Height(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_FrameRate(double * value) = 0;
    virtual HRESULT __stdcall get_IsVariablePhotoSequenceSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsHdrVideoSupported(bool * value) = 0;
};

struct __declspec(uuid("470f88b3-1e6d-4051-9c8b-f1d85af047b7")) __declspec(novtable) IOptionalReferencePhotoCapturedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Frame(Windows::Media::Capture::ICapturedFrame ** value) = 0;
    virtual HRESULT __stdcall get_Context(Windows::Foundation::IInspectable ** value) = 0;
};

struct __declspec(uuid("373bfbc1-984e-4ff0-bf85-1c00aabc5a45")) __declspec(novtable) IPhotoCapturedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Frame(Windows::Media::Capture::ICapturedFrame ** value) = 0;
    virtual HRESULT __stdcall get_Thumbnail(Windows::Media::Capture::ICapturedFrame ** value) = 0;
    virtual HRESULT __stdcall get_CaptureTimeOffset(Windows::Foundation::TimeSpan * value) = 0;
};

struct __declspec(uuid("ab473672-c28a-4827-8f8d-3636d3beb51e")) __declspec(novtable) IPhotoConfirmationCapturedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Frame(Windows::Media::Capture::ICapturedFrame ** value) = 0;
    virtual HRESULT __stdcall get_CaptureTimeOffset(Windows::Foundation::TimeSpan * value) = 0;
};

struct __declspec(uuid("89179ef7-cd12-4e0e-a6d4-5b3de98b2e9b")) __declspec(novtable) IScreenCapture : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_AudioSource(Windows::Media::Core::IMediaSource ** value) = 0;
    virtual HRESULT __stdcall get_VideoSource(Windows::Media::Core::IMediaSource ** value) = 0;
    virtual HRESULT __stdcall get_IsAudioSuspended(bool * value) = 0;
    virtual HRESULT __stdcall get_IsVideoSuspended(bool * value) = 0;
    virtual HRESULT __stdcall add_SourceSuspensionChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::ScreenCapture, Windows::Media::Capture::SourceSuspensionChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SourceSuspensionChanged(event_token token) = 0;
};

struct __declspec(uuid("c898c3b0-c8a5-11e2-8b8b-0800200c9a66")) __declspec(novtable) IScreenCaptureStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_GetForCurrentView(Windows::Media::Capture::IScreenCapture ** value) = 0;
};

struct __declspec(uuid("2ece7b5e-d49b-4394-bc32-f97d6cedec1c")) __declspec(novtable) ISourceSuspensionChangedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_IsAudioSuspended(bool * value) = 0;
    virtual HRESULT __stdcall get_IsVideoSuspended(bool * value) = 0;
};

struct __declspec(uuid("d8770a6f-4390-4b5e-ad3e-0f8af0963490")) __declspec(novtable) IVideoStreamConfiguration : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_InputProperties(Windows::Media::MediaProperties::IVideoEncodingProperties ** value) = 0;
    virtual HRESULT __stdcall get_OutputProperties(Windows::Media::MediaProperties::IVideoEncodingProperties ** value) = 0;
};

struct __declspec(uuid("2014effb-5cd8-4f08-a314-0d360da59f14")) __declspec(novtable) MediaCaptureFailedEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::Media::Capture::IMediaCapture * sender, Windows::Media::Capture::IMediaCaptureFailedEventArgs * errorEventArgs) = 0;
};

struct __declspec(uuid("3fae8f2e-4fe1-4ffd-aaba-e1f1337d4e53")) __declspec(novtable) RecordLimitationExceededEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::Media::Capture::IMediaCapture * sender) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Media::Capture::AdvancedCapturedPhoto> { using default_interface = Windows::Media::Capture::IAdvancedCapturedPhoto; };
template <> struct traits<Windows::Media::Capture::AdvancedPhotoCapture> { using default_interface = Windows::Media::Capture::IAdvancedPhotoCapture; };
template <> struct traits<Windows::Media::Capture::AppBroadcastBackgroundService> { using default_interface = Windows::Media::Capture::IAppBroadcastBackgroundService; };
template <> struct traits<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo> { using default_interface = Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo; };
template <> struct traits<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo> { using default_interface = Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo; };
template <> struct traits<Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs> { using default_interface = Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs; };
template <> struct traits<Windows::Media::Capture::AppBroadcastGlobalSettings> { using default_interface = Windows::Media::Capture::IAppBroadcastGlobalSettings; };
template <> struct traits<Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs> { using default_interface = Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs; };
template <> struct traits<Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs> { using default_interface = Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs; };
template <> struct traits<Windows::Media::Capture::AppBroadcastPlugIn> { using default_interface = Windows::Media::Capture::IAppBroadcastPlugIn; };
template <> struct traits<Windows::Media::Capture::AppBroadcastPlugInManager> { using default_interface = Windows::Media::Capture::IAppBroadcastPlugInManager; };
template <> struct traits<Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs> { using default_interface = Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs; };
template <> struct traits<Windows::Media::Capture::AppBroadcastPreview> { using default_interface = Windows::Media::Capture::IAppBroadcastPreview; };
template <> struct traits<Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs> { using default_interface = Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs; };
template <> struct traits<Windows::Media::Capture::AppBroadcastPreviewStreamReader> { using default_interface = Windows::Media::Capture::IAppBroadcastPreviewStreamReader; };
template <> struct traits<Windows::Media::Capture::AppBroadcastPreviewStreamVideoFrame> { using default_interface = Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame; };
template <> struct traits<Windows::Media::Capture::AppBroadcastPreviewStreamVideoHeader> { using default_interface = Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader; };
template <> struct traits<Windows::Media::Capture::AppBroadcastProviderSettings> { using default_interface = Windows::Media::Capture::IAppBroadcastProviderSettings; };
template <> struct traits<Windows::Media::Capture::AppBroadcastServices> { using default_interface = Windows::Media::Capture::IAppBroadcastServices; };
template <> struct traits<Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs> { using default_interface = Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs; };
template <> struct traits<Windows::Media::Capture::AppBroadcastState> { using default_interface = Windows::Media::Capture::IAppBroadcastState; };
template <> struct traits<Windows::Media::Capture::AppBroadcastStreamAudioFrame> { using default_interface = Windows::Media::Capture::IAppBroadcastStreamAudioFrame; };
template <> struct traits<Windows::Media::Capture::AppBroadcastStreamAudioHeader> { using default_interface = Windows::Media::Capture::IAppBroadcastStreamAudioHeader; };
template <> struct traits<Windows::Media::Capture::AppBroadcastStreamReader> { using default_interface = Windows::Media::Capture::IAppBroadcastStreamReader; };
template <> struct traits<Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> { using default_interface = Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs; };
template <> struct traits<Windows::Media::Capture::AppBroadcastStreamVideoFrame> { using default_interface = Windows::Media::Capture::IAppBroadcastStreamVideoFrame; };
template <> struct traits<Windows::Media::Capture::AppBroadcastStreamVideoHeader> { using default_interface = Windows::Media::Capture::IAppBroadcastStreamVideoHeader; };
template <> struct traits<Windows::Media::Capture::AppBroadcastTriggerDetails> { using default_interface = Windows::Media::Capture::IAppBroadcastTriggerDetails; };
template <> struct traits<Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs> { using default_interface = Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs; };
template <> struct traits<Windows::Media::Capture::AppCapture> { using default_interface = Windows::Media::Capture::IAppCapture; };
template <> struct traits<Windows::Media::Capture::AppCaptureAlternateShortcutKeys> { using default_interface = Windows::Media::Capture::IAppCaptureAlternateShortcutKeys; };
template <> struct traits<Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs> { using default_interface = Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs; };
template <> struct traits<Windows::Media::Capture::AppCaptureFileGeneratedEventArgs> { using default_interface = Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs; };
template <> struct traits<Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs> { using default_interface = Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs; };
template <> struct traits<Windows::Media::Capture::AppCaptureRecordOperation> { using default_interface = Windows::Media::Capture::IAppCaptureRecordOperation; };
template <> struct traits<Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs> { using default_interface = Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs; };
template <> struct traits<Windows::Media::Capture::AppCaptureServices> { using default_interface = Windows::Media::Capture::IAppCaptureServices; };
template <> struct traits<Windows::Media::Capture::AppCaptureSettings> { using default_interface = Windows::Media::Capture::IAppCaptureSettings; };
template <> struct traits<Windows::Media::Capture::AppCaptureState> { using default_interface = Windows::Media::Capture::IAppCaptureState; };
template <> struct traits<Windows::Media::Capture::CameraCaptureUI> { using default_interface = Windows::Media::Capture::ICameraCaptureUI; };
template <> struct traits<Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings> { using default_interface = Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings; };
template <> struct traits<Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings> { using default_interface = Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings; };
template <> struct traits<Windows::Media::Capture::CapturedFrame> { using default_interface = Windows::Media::Capture::ICapturedFrame; };
template <> struct traits<Windows::Media::Capture::CapturedFrameControlValues> { using default_interface = Windows::Media::Capture::ICapturedFrameControlValues; };
template <> struct traits<Windows::Media::Capture::CapturedPhoto> { using default_interface = Windows::Media::Capture::ICapturedPhoto; };
template <> struct traits<Windows::Media::Capture::GameBarServices> { using default_interface = Windows::Media::Capture::IGameBarServices; };
template <> struct traits<Windows::Media::Capture::GameBarServicesCommandEventArgs> { using default_interface = Windows::Media::Capture::IGameBarServicesCommandEventArgs; };
template <> struct traits<Windows::Media::Capture::GameBarServicesManager> { using default_interface = Windows::Media::Capture::IGameBarServicesManager; };
template <> struct traits<Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs> { using default_interface = Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs; };
template <> struct traits<Windows::Media::Capture::GameBarServicesTargetInfo> { using default_interface = Windows::Media::Capture::IGameBarServicesTargetInfo; };
template <> struct traits<Windows::Media::Capture::LowLagMediaRecording> { using default_interface = Windows::Media::Capture::ILowLagMediaRecording; };
template <> struct traits<Windows::Media::Capture::LowLagPhotoCapture> { using default_interface = Windows::Media::Capture::ILowLagPhotoCapture; };
template <> struct traits<Windows::Media::Capture::LowLagPhotoSequenceCapture> { using default_interface = Windows::Media::Capture::ILowLagPhotoSequenceCapture; };
template <> struct traits<Windows::Media::Capture::MediaCapture> { using default_interface = Windows::Media::Capture::IMediaCapture; };
template <> struct traits<Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs> { using default_interface = Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs; };
template <> struct traits<Windows::Media::Capture::MediaCaptureFailedEventArgs> { using default_interface = Windows::Media::Capture::IMediaCaptureFailedEventArgs; };
template <> struct traits<Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> { using default_interface = Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs; };
template <> struct traits<Windows::Media::Capture::MediaCaptureInitializationSettings> { using default_interface = Windows::Media::Capture::IMediaCaptureInitializationSettings; };
template <> struct traits<Windows::Media::Capture::MediaCapturePauseResult> { using default_interface = Windows::Media::Capture::IMediaCapturePauseResult; };
template <> struct traits<Windows::Media::Capture::MediaCaptureSettings> { using default_interface = Windows::Media::Capture::IMediaCaptureSettings; };
template <> struct traits<Windows::Media::Capture::MediaCaptureStopResult> { using default_interface = Windows::Media::Capture::IMediaCaptureStopResult; };
template <> struct traits<Windows::Media::Capture::MediaCaptureVideoProfile> { using default_interface = Windows::Media::Capture::IMediaCaptureVideoProfile; };
template <> struct traits<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> { using default_interface = Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription; };
template <> struct traits<Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> { using default_interface = Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs; };
template <> struct traits<Windows::Media::Capture::PhotoCapturedEventArgs> { using default_interface = Windows::Media::Capture::IPhotoCapturedEventArgs; };
template <> struct traits<Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> { using default_interface = Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs; };
template <> struct traits<Windows::Media::Capture::ScreenCapture> { using default_interface = Windows::Media::Capture::IScreenCapture; };
template <> struct traits<Windows::Media::Capture::SourceSuspensionChangedEventArgs> { using default_interface = Windows::Media::Capture::ISourceSuspensionChangedEventArgs; };
template <> struct traits<Windows::Media::Capture::VideoStreamConfiguration> { using default_interface = Windows::Media::Capture::IVideoStreamConfiguration; };

}

namespace Windows::Media::Capture {

template <typename D>
struct WINRT_EBO impl_IAdvancedCapturedPhoto
{
    Windows::Media::Capture::CapturedFrame Frame() const;
    Windows::Media::Devices::AdvancedPhotoMode Mode() const;
    Windows::Foundation::IInspectable Context() const;
};

template <typename D>
struct WINRT_EBO impl_IAdvancedCapturedPhoto2
{
    Windows::Foundation::IReference<Windows::Foundation::Rect> FrameBoundsRelativeToReferencePhoto() const;
};

template <typename D>
struct WINRT_EBO impl_IAdvancedPhotoCapture
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto> CaptureAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto> CaptureAsync(const Windows::Foundation::IInspectable & context) const;
    event_token OptionalReferencePhotoCaptured(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> & handler) const;
    using OptionalReferencePhotoCaptured_revoker = event_revoker<IAdvancedPhotoCapture>;
    OptionalReferencePhotoCaptured_revoker OptionalReferencePhotoCaptured(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> & handler) const;
    void OptionalReferencePhotoCaptured(event_token token) const;
    event_token AllPhotosCaptured(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Foundation::IInspectable> & handler) const;
    using AllPhotosCaptured_revoker = event_revoker<IAdvancedPhotoCapture>;
    AllPhotosCaptured_revoker AllPhotosCaptured(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Foundation::IInspectable> & handler) const;
    void AllPhotosCaptured(event_token token) const;
    Windows::Foundation::IAsyncAction FinishAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IAppBroadcastBackgroundService
{
    void PlugInState(Windows::Media::Capture::AppBroadcastPlugInState value) const;
    Windows::Media::Capture::AppBroadcastPlugInState PlugInState() const;
    void SignInInfo(const Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo & value) const;
    Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo SignInInfo() const;
    void StreamInfo(const Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo & value) const;
    Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo StreamInfo() const;
    hstring AppId() const;
    hstring BroadcastTitle() const;
    void ViewerCount(uint32_t value) const;
    uint32_t ViewerCount() const;
    void TerminateBroadcast(Windows::Media::Capture::AppBroadcastTerminationReason reason, uint32_t providerSpecificReason) const;
    event_token HeartbeatRequested(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs> & handler) const;
    using HeartbeatRequested_revoker = event_revoker<IAppBroadcastBackgroundService>;
    HeartbeatRequested_revoker HeartbeatRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs> & handler) const;
    void HeartbeatRequested(event_token token) const;
    hstring TitleId() const;
};

template <typename D>
struct WINRT_EBO impl_IAppBroadcastBackgroundServiceSignInInfo
{
    Windows::Media::Capture::AppBroadcastSignInState SignInState() const;
    void OAuthRequestUri(const Windows::Foundation::Uri & value) const;
    Windows::Foundation::Uri OAuthRequestUri() const;
    void OAuthCallbackUri(const Windows::Foundation::Uri & value) const;
    Windows::Foundation::Uri OAuthCallbackUri() const;
    Windows::Security::Authentication::Web::WebAuthenticationResult AuthenticationResult() const;
    void UserName(hstring_view value) const;
    hstring UserName() const;
    event_token SignInStateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo, Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs> & handler) const;
    using SignInStateChanged_revoker = event_revoker<IAppBroadcastBackgroundServiceSignInInfo>;
    SignInStateChanged_revoker SignInStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo, Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs> & handler) const;
    void SignInStateChanged(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IAppBroadcastBackgroundServiceStreamInfo
{
    Windows::Media::Capture::AppBroadcastStreamState StreamState() const;
    void DesiredVideoEncodingBitrate(uint64_t value) const;
    uint64_t DesiredVideoEncodingBitrate() const;
    void BandwidthTestBitrate(uint64_t value) const;
    uint64_t BandwidthTestBitrate() const;
    void AudioCodec(hstring_view value) const;
    hstring AudioCodec() const;
    Windows::Media::Capture::AppBroadcastStreamReader BroadcastStreamReader() const;
    event_token StreamStateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> & handler) const;
    using StreamStateChanged_revoker = event_revoker<IAppBroadcastBackgroundServiceStreamInfo>;
    StreamStateChanged_revoker StreamStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> & handler) const;
    void StreamStateChanged(event_token token) const;
    event_token VideoEncodingResolutionChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> & handler) const;
    using VideoEncodingResolutionChanged_revoker = event_revoker<IAppBroadcastBackgroundServiceStreamInfo>;
    VideoEncodingResolutionChanged_revoker VideoEncodingResolutionChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> & handler) const;
    void VideoEncodingResolutionChanged(event_token token) const;
    event_token VideoEncodingBitrateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> & handler) const;
    using VideoEncodingBitrateChanged_revoker = event_revoker<IAppBroadcastBackgroundServiceStreamInfo>;
    VideoEncodingBitrateChanged_revoker VideoEncodingBitrateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> & handler) const;
    void VideoEncodingBitrateChanged(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IAppBroadcastCameraCaptureStateChangedEventArgs
{
    Windows::Media::Capture::AppBroadcastCameraCaptureState State() const;
    uint32_t ErrorCode() const;
};

template <typename D>
struct WINRT_EBO impl_IAppBroadcastGlobalSettings
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
    void SelectedCameraId(hstring_view value) const;
    hstring SelectedCameraId() const;
    void CameraOverlayLocation(Windows::Media::Capture::AppBroadcastCameraOverlayLocation value) const;
    Windows::Media::Capture::AppBroadcastCameraOverlayLocation CameraOverlayLocation() const;
    void CameraOverlaySize(Windows::Media::Capture::AppBroadcastCameraOverlaySize value) const;
    Windows::Media::Capture::AppBroadcastCameraOverlaySize CameraOverlaySize() const;
    void IsCursorImageCaptureEnabled(bool value) const;
    bool IsCursorImageCaptureEnabled() const;
};

template <typename D>
struct WINRT_EBO impl_IAppBroadcastHeartbeatRequestedEventArgs
{
    void Handled(bool value) const;
    bool Handled() const;
};

template <typename D>
struct WINRT_EBO impl_IAppBroadcastManagerStatics
{
    Windows::Media::Capture::AppBroadcastGlobalSettings GetGlobalSettings() const;
    void ApplyGlobalSettings(const Windows::Media::Capture::AppBroadcastGlobalSettings & value) const;
    Windows::Media::Capture::AppBroadcastProviderSettings GetProviderSettings() const;
    void ApplyProviderSettings(const Windows::Media::Capture::AppBroadcastProviderSettings & value) const;
};

template <typename D>
struct WINRT_EBO impl_IAppBroadcastMicrophoneCaptureStateChangedEventArgs
{
    Windows::Media::Capture::AppBroadcastMicrophoneCaptureState State() const;
    uint32_t ErrorCode() const;
};

template <typename D>
struct WINRT_EBO impl_IAppBroadcastPlugIn
{
    hstring AppId() const;
    Windows::Media::Capture::AppBroadcastProviderSettings ProviderSettings() const;
    Windows::Storage::Streams::IRandomAccessStreamReference Logo() const;
    hstring DisplayName() const;
};

template <typename D>
struct WINRT_EBO impl_IAppBroadcastPlugInManager
{
    bool IsBroadcastProviderAvailable() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::AppBroadcastPlugIn> PlugInList() const;
    Windows::Media::Capture::AppBroadcastPlugIn DefaultPlugIn() const;
    void DefaultPlugIn(const Windows::Media::Capture::AppBroadcastPlugIn & value) const;
};

template <typename D>
struct WINRT_EBO impl_IAppBroadcastPlugInManagerStatics
{
    Windows::Media::Capture::AppBroadcastPlugInManager GetDefault() const;
    Windows::Media::Capture::AppBroadcastPlugInManager GetForUser(const Windows::System::User & user) const;
};

template <typename D>
struct WINRT_EBO impl_IAppBroadcastPlugInStateChangedEventArgs
{
    Windows::Media::Capture::AppBroadcastPlugInState PlugInState() const;
};

template <typename D>
struct WINRT_EBO impl_IAppBroadcastPreview
{
    void StopPreview() const;
    Windows::Media::Capture::AppBroadcastPreviewState PreviewState() const;
    Windows::Foundation::IReference<uint32_t> ErrorCode() const;
    event_token PreviewStateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreview, Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs> & value) const;
    using PreviewStateChanged_revoker = event_revoker<IAppBroadcastPreview>;
    PreviewStateChanged_revoker PreviewStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreview, Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs> & value) const;
    void PreviewStateChanged(event_token token) const;
    Windows::Media::Capture::AppBroadcastPreviewStreamReader PreviewStreamReader() const;
};

template <typename D>
struct WINRT_EBO impl_IAppBroadcastPreviewStateChangedEventArgs
{
    Windows::Media::Capture::AppBroadcastPreviewState PreviewState() const;
    uint32_t ErrorCode() const;
};

template <typename D>
struct WINRT_EBO impl_IAppBroadcastPreviewStreamReader
{
    uint32_t VideoWidth() const;
    uint32_t VideoHeight() const;
    uint32_t VideoStride() const;
    Windows::Graphics::Imaging::BitmapPixelFormat VideoBitmapPixelFormat() const;
    Windows::Graphics::Imaging::BitmapAlphaMode VideoBitmapAlphaMode() const;
    Windows::Media::Capture::AppBroadcastPreviewStreamVideoFrame TryGetNextVideoFrame() const;
    event_token VideoFrameArrived(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreviewStreamReader, Windows::Foundation::IInspectable> & value) const;
    using VideoFrameArrived_revoker = event_revoker<IAppBroadcastPreviewStreamReader>;
    VideoFrameArrived_revoker VideoFrameArrived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreviewStreamReader, Windows::Foundation::IInspectable> & value) const;
    void VideoFrameArrived(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IAppBroadcastPreviewStreamVideoFrame
{
    Windows::Media::Capture::AppBroadcastPreviewStreamVideoHeader VideoHeader() const;
    Windows::Storage::Streams::IBuffer VideoBuffer() const;
};

template <typename D>
struct WINRT_EBO impl_IAppBroadcastPreviewStreamVideoHeader
{
    Windows::Foundation::DateTime AbsoluteTimestamp() const;
    Windows::Foundation::TimeSpan RelativeTimestamp() const;
    Windows::Foundation::TimeSpan Duration() const;
    uint64_t FrameId() const;
};

template <typename D>
struct WINRT_EBO impl_IAppBroadcastProviderSettings
{
    void DefaultBroadcastTitle(hstring_view value) const;
    hstring DefaultBroadcastTitle() const;
    void AudioEncodingBitrate(uint32_t value) const;
    uint32_t AudioEncodingBitrate() const;
    void CustomVideoEncodingBitrate(uint32_t value) const;
    uint32_t CustomVideoEncodingBitrate() const;
    void CustomVideoEncodingHeight(uint32_t value) const;
    uint32_t CustomVideoEncodingHeight() const;
    void CustomVideoEncodingWidth(uint32_t value) const;
    uint32_t CustomVideoEncodingWidth() const;
    void VideoEncodingBitrateMode(Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode value) const;
    Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode VideoEncodingBitrateMode() const;
    void VideoEncodingResolutionMode(Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode value) const;
    Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode VideoEncodingResolutionMode() const;
};

template <typename D>
struct WINRT_EBO impl_IAppBroadcastServices
{
    Windows::Media::Capture::AppBroadcastCaptureTargetType CaptureTargetType() const;
    void CaptureTargetType(Windows::Media::Capture::AppBroadcastCaptureTargetType value) const;
    hstring BroadcastTitle() const;
    void BroadcastTitle(hstring_view value) const;
    hstring BroadcastLanguage() const;
    void BroadcastLanguage(hstring_view value) const;
    hstring UserName() const;
    bool CanCapture() const;
    Windows::Foundation::IAsyncOperation<uint32_t> EnterBroadcastModeAsync(const Windows::Media::Capture::AppBroadcastPlugIn & plugIn) const;
    void ExitBroadcastMode(Windows::Media::Capture::AppBroadcastExitBroadcastModeReason reason) const;
    void StartBroadcast() const;
    void PauseBroadcast() const;
    void ResumeBroadcast() const;
    Windows::Media::Capture::AppBroadcastPreview StartPreview(const Windows::Foundation::Size & desiredSize) const;
    Windows::Media::Capture::AppBroadcastState State() const;
};

template <typename D>
struct WINRT_EBO impl_IAppBroadcastSignInStateChangedEventArgs
{
    Windows::Media::Capture::AppBroadcastSignInState SignInState() const;
    Windows::Media::Capture::AppBroadcastSignInResult Result() const;
};

template <typename D>
struct WINRT_EBO impl_IAppBroadcastState
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
    void AuthenticationResult(const Windows::Security::Authentication::Web::WebAuthenticationResult & value) const;
    void SignInState(Windows::Media::Capture::AppBroadcastSignInState value) const;
    Windows::Media::Capture::AppBroadcastSignInState SignInState() const;
    Windows::Media::Capture::AppBroadcastTerminationReason TerminationReason() const;
    uint32_t TerminationReasonPlugInSpecific() const;
    event_token ViewerCountChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs> & value) const;
    using ViewerCountChanged_revoker = event_revoker<IAppBroadcastState>;
    ViewerCountChanged_revoker ViewerCountChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs> & value) const;
    void ViewerCountChanged(event_token token) const;
    event_token MicrophoneCaptureStateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs> & value) const;
    using MicrophoneCaptureStateChanged_revoker = event_revoker<IAppBroadcastState>;
    MicrophoneCaptureStateChanged_revoker MicrophoneCaptureStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs> & value) const;
    void MicrophoneCaptureStateChanged(event_token token) const;
    event_token CameraCaptureStateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs> & value) const;
    using CameraCaptureStateChanged_revoker = event_revoker<IAppBroadcastState>;
    CameraCaptureStateChanged_revoker CameraCaptureStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs> & value) const;
    void CameraCaptureStateChanged(event_token token) const;
    event_token PlugInStateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs> & handler) const;
    using PlugInStateChanged_revoker = event_revoker<IAppBroadcastState>;
    PlugInStateChanged_revoker PlugInStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs> & handler) const;
    void PlugInStateChanged(event_token token) const;
    event_token StreamStateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> & handler) const;
    using StreamStateChanged_revoker = event_revoker<IAppBroadcastState>;
    StreamStateChanged_revoker StreamStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> & handler) const;
    void StreamStateChanged(event_token token) const;
    event_token CaptureTargetClosed(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Foundation::IInspectable> & value) const;
    using CaptureTargetClosed_revoker = event_revoker<IAppBroadcastState>;
    CaptureTargetClosed_revoker CaptureTargetClosed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Foundation::IInspectable> & value) const;
    void CaptureTargetClosed(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IAppBroadcastStreamAudioFrame
{
    Windows::Media::Capture::AppBroadcastStreamAudioHeader AudioHeader() const;
    Windows::Storage::Streams::IBuffer AudioBuffer() const;
};

template <typename D>
struct WINRT_EBO impl_IAppBroadcastStreamAudioHeader
{
    Windows::Foundation::DateTime AbsoluteTimestamp() const;
    Windows::Foundation::TimeSpan RelativeTimestamp() const;
    Windows::Foundation::TimeSpan Duration() const;
    bool HasDiscontinuity() const;
    uint64_t FrameId() const;
};

template <typename D>
struct WINRT_EBO impl_IAppBroadcastStreamReader
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
    event_token AudioFrameArrived(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> & value) const;
    using AudioFrameArrived_revoker = event_revoker<IAppBroadcastStreamReader>;
    AudioFrameArrived_revoker AudioFrameArrived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> & value) const;
    void AudioFrameArrived(event_token token) const;
    event_token VideoFrameArrived(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> & value) const;
    using VideoFrameArrived_revoker = event_revoker<IAppBroadcastStreamReader>;
    VideoFrameArrived_revoker VideoFrameArrived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> & value) const;
    void VideoFrameArrived(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IAppBroadcastStreamStateChangedEventArgs
{
    Windows::Media::Capture::AppBroadcastStreamState StreamState() const;
};

template <typename D>
struct WINRT_EBO impl_IAppBroadcastStreamVideoFrame
{
    Windows::Media::Capture::AppBroadcastStreamVideoHeader VideoHeader() const;
    Windows::Storage::Streams::IBuffer VideoBuffer() const;
};

template <typename D>
struct WINRT_EBO impl_IAppBroadcastStreamVideoHeader
{
    Windows::Foundation::DateTime AbsoluteTimestamp() const;
    Windows::Foundation::TimeSpan RelativeTimestamp() const;
    Windows::Foundation::TimeSpan Duration() const;
    bool IsKeyFrame() const;
    bool HasDiscontinuity() const;
    uint64_t FrameId() const;
};

template <typename D>
struct WINRT_EBO impl_IAppBroadcastTriggerDetails
{
    Windows::Media::Capture::AppBroadcastBackgroundService BackgroundService() const;
};

template <typename D>
struct WINRT_EBO impl_IAppBroadcastViewerCountChangedEventArgs
{
    uint32_t ViewerCount() const;
};

template <typename D>
struct WINRT_EBO impl_IAppCapture
{
    bool IsCapturingAudio() const;
    bool IsCapturingVideo() const;
    event_token CapturingChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCapture, Windows::Foundation::IInspectable> & handler) const;
    using CapturingChanged_revoker = event_revoker<IAppCapture>;
    CapturingChanged_revoker CapturingChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCapture, Windows::Foundation::IInspectable> & handler) const;
    void CapturingChanged(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IAppCaptureAlternateShortcutKeys
{
    void ToggleGameBarKey(Windows::System::VirtualKey value) const;
    Windows::System::VirtualKey ToggleGameBarKey() const;
    void ToggleGameBarKeyModifiers(Windows::System::VirtualKeyModifiers value) const;
    Windows::System::VirtualKeyModifiers ToggleGameBarKeyModifiers() const;
    void SaveHistoricalVideoKey(Windows::System::VirtualKey value) const;
    Windows::System::VirtualKey SaveHistoricalVideoKey() const;
    void SaveHistoricalVideoKeyModifiers(Windows::System::VirtualKeyModifiers value) const;
    Windows::System::VirtualKeyModifiers SaveHistoricalVideoKeyModifiers() const;
    void ToggleRecordingKey(Windows::System::VirtualKey value) const;
    Windows::System::VirtualKey ToggleRecordingKey() const;
    void ToggleRecordingKeyModifiers(Windows::System::VirtualKeyModifiers value) const;
    Windows::System::VirtualKeyModifiers ToggleRecordingKeyModifiers() const;
    void TakeScreenshotKey(Windows::System::VirtualKey value) const;
    Windows::System::VirtualKey TakeScreenshotKey() const;
    void TakeScreenshotKeyModifiers(Windows::System::VirtualKeyModifiers value) const;
    Windows::System::VirtualKeyModifiers TakeScreenshotKeyModifiers() const;
    void ToggleRecordingIndicatorKey(Windows::System::VirtualKey value) const;
    Windows::System::VirtualKey ToggleRecordingIndicatorKey() const;
    void ToggleRecordingIndicatorKeyModifiers(Windows::System::VirtualKeyModifiers value) const;
    Windows::System::VirtualKeyModifiers ToggleRecordingIndicatorKeyModifiers() const;
};

template <typename D>
struct WINRT_EBO impl_IAppCaptureAlternateShortcutKeys2
{
    void ToggleMicrophoneCaptureKey(Windows::System::VirtualKey value) const;
    Windows::System::VirtualKey ToggleMicrophoneCaptureKey() const;
    void ToggleMicrophoneCaptureKeyModifiers(Windows::System::VirtualKeyModifiers value) const;
    Windows::System::VirtualKeyModifiers ToggleMicrophoneCaptureKeyModifiers() const;
};

template <typename D>
struct WINRT_EBO impl_IAppCaptureAlternateShortcutKeys3
{
    void ToggleCameraCaptureKey(Windows::System::VirtualKey value) const;
    Windows::System::VirtualKey ToggleCameraCaptureKey() const;
    void ToggleCameraCaptureKeyModifiers(Windows::System::VirtualKeyModifiers value) const;
    Windows::System::VirtualKeyModifiers ToggleCameraCaptureKeyModifiers() const;
    void ToggleBroadcastKey(Windows::System::VirtualKey value) const;
    Windows::System::VirtualKey ToggleBroadcastKey() const;
    void ToggleBroadcastKeyModifiers(Windows::System::VirtualKeyModifiers value) const;
    Windows::System::VirtualKeyModifiers ToggleBroadcastKeyModifiers() const;
};

template <typename D>
struct WINRT_EBO impl_IAppCaptureDurationGeneratedEventArgs
{
    Windows::Foundation::TimeSpan Duration() const;
};

template <typename D>
struct WINRT_EBO impl_IAppCaptureFileGeneratedEventArgs
{
    Windows::Storage::StorageFile File() const;
};

template <typename D>
struct WINRT_EBO impl_IAppCaptureManagerStatics
{
    Windows::Media::Capture::AppCaptureSettings GetCurrentSettings() const;
    void ApplySettings(const Windows::Media::Capture::AppCaptureSettings & appCaptureSettings) const;
};

template <typename D>
struct WINRT_EBO impl_IAppCaptureMicrophoneCaptureStateChangedEventArgs
{
    Windows::Media::Capture::AppCaptureMicrophoneCaptureState State() const;
    uint32_t ErrorCode() const;
};

template <typename D>
struct WINRT_EBO impl_IAppCaptureRecordOperation
{
    void StopRecording() const;
    Windows::Media::Capture::AppCaptureRecordingState State() const;
    Windows::Foundation::IReference<uint32_t> ErrorCode() const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> Duration() const;
    Windows::Storage::StorageFile File() const;
    Windows::Foundation::IReference<bool> IsFileTruncated() const;
    event_token StateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs> & value) const;
    using StateChanged_revoker = event_revoker<IAppCaptureRecordOperation>;
    StateChanged_revoker StateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs> & value) const;
    void StateChanged(event_token token) const;
    event_token DurationGenerated(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs> & value) const;
    using DurationGenerated_revoker = event_revoker<IAppCaptureRecordOperation>;
    DurationGenerated_revoker DurationGenerated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs> & value) const;
    void DurationGenerated(event_token token) const;
    event_token FileGenerated(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureFileGeneratedEventArgs> & value) const;
    using FileGenerated_revoker = event_revoker<IAppCaptureRecordOperation>;
    FileGenerated_revoker FileGenerated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureFileGeneratedEventArgs> & value) const;
    void FileGenerated(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IAppCaptureRecordingStateChangedEventArgs
{
    Windows::Media::Capture::AppCaptureRecordingState State() const;
    uint32_t ErrorCode() const;
};

template <typename D>
struct WINRT_EBO impl_IAppCaptureServices
{
    Windows::Media::Capture::AppCaptureRecordOperation Record() const;
    Windows::Media::Capture::AppCaptureRecordOperation RecordTimeSpan(const Windows::Foundation::DateTime & startTime, const Windows::Foundation::TimeSpan & duration) const;
    bool CanCapture() const;
    Windows::Media::Capture::AppCaptureState State() const;
};

template <typename D>
struct WINRT_EBO impl_IAppCaptureSettings
{
    void AppCaptureDestinationFolder(const Windows::Storage::StorageFolder & value) const;
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
    void HistoricalBufferLengthUnit(Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit value) const;
    Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit HistoricalBufferLengthUnit() const;
    void IsHistoricalCaptureEnabled(bool value) const;
    bool IsHistoricalCaptureEnabled() const;
    void IsHistoricalCaptureOnBatteryAllowed(bool value) const;
    bool IsHistoricalCaptureOnBatteryAllowed() const;
    void IsHistoricalCaptureOnWirelessDisplayAllowed(bool value) const;
    bool IsHistoricalCaptureOnWirelessDisplayAllowed() const;
    void MaximumRecordLength(const Windows::Foundation::TimeSpan & value) const;
    Windows::Foundation::TimeSpan MaximumRecordLength() const;
    void ScreenshotDestinationFolder(const Windows::Storage::StorageFolder & value) const;
    Windows::Storage::StorageFolder ScreenshotDestinationFolder() const;
    void VideoEncodingBitrateMode(Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode value) const;
    Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode VideoEncodingBitrateMode() const;
    void VideoEncodingResolutionMode(Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode value) const;
    Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode VideoEncodingResolutionMode() const;
    void IsAppCaptureEnabled(bool value) const;
    bool IsAppCaptureEnabled() const;
    bool IsCpuConstrained() const;
    bool IsDisabledByPolicy() const;
    bool IsMemoryConstrained() const;
    bool HasHardwareEncoder() const;
};

template <typename D>
struct WINRT_EBO impl_IAppCaptureSettings2
{
    bool IsGpuConstrained() const;
    Windows::Media::Capture::AppCaptureAlternateShortcutKeys AlternateShortcutKeys() const;
};

template <typename D>
struct WINRT_EBO impl_IAppCaptureSettings3
{
    void IsMicrophoneCaptureEnabled(bool value) const;
    bool IsMicrophoneCaptureEnabled() const;
};

template <typename D>
struct WINRT_EBO impl_IAppCaptureSettings4
{
    void IsMicrophoneCaptureEnabledByDefault(bool value) const;
    bool IsMicrophoneCaptureEnabledByDefault() const;
    void SystemAudioGain(double value) const;
    double SystemAudioGain() const;
    void MicrophoneGain(double value) const;
    double MicrophoneGain() const;
    void VideoEncodingFrameRateMode(Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode value) const;
    Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode VideoEncodingFrameRateMode() const;
};

template <typename D>
struct WINRT_EBO impl_IAppCaptureSettings5
{
    void IsEchoCancellationEnabled(bool value) const;
    bool IsEchoCancellationEnabled() const;
    void IsCursorImageCaptureEnabled(bool value) const;
    bool IsCursorImageCaptureEnabled() const;
};

template <typename D>
struct WINRT_EBO impl_IAppCaptureState
{
    bool IsTargetRunning() const;
    bool IsHistoricalCaptureEnabled() const;
    bool ShouldCaptureMicrophone() const;
    void ShouldCaptureMicrophone(bool value) const;
    void RestartMicrophoneCapture() const;
    Windows::Media::Capture::AppCaptureMicrophoneCaptureState MicrophoneCaptureState() const;
    uint32_t MicrophoneCaptureError() const;
    event_token MicrophoneCaptureStateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs> & value) const;
    using MicrophoneCaptureStateChanged_revoker = event_revoker<IAppCaptureState>;
    MicrophoneCaptureStateChanged_revoker MicrophoneCaptureStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs> & value) const;
    void MicrophoneCaptureStateChanged(event_token token) const;
    event_token CaptureTargetClosed(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Foundation::IInspectable> & value) const;
    using CaptureTargetClosed_revoker = event_revoker<IAppCaptureState>;
    CaptureTargetClosed_revoker CaptureTargetClosed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Foundation::IInspectable> & value) const;
    void CaptureTargetClosed(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IAppCaptureStatics
{
    Windows::Media::Capture::AppCapture GetForCurrentView() const;
};

template <typename D>
struct WINRT_EBO impl_ICameraCaptureUI
{
    Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings PhotoSettings() const;
    Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings VideoSettings() const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> CaptureFileAsync(Windows::Media::Capture::CameraCaptureUIMode mode) const;
};

template <typename D>
struct WINRT_EBO impl_ICameraCaptureUIPhotoCaptureSettings
{
    Windows::Media::Capture::CameraCaptureUIPhotoFormat Format() const;
    void Format(Windows::Media::Capture::CameraCaptureUIPhotoFormat value) const;
    Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution MaxResolution() const;
    void MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution value) const;
    Windows::Foundation::Size CroppedSizeInPixels() const;
    void CroppedSizeInPixels(const Windows::Foundation::Size & value) const;
    Windows::Foundation::Size CroppedAspectRatio() const;
    void CroppedAspectRatio(const Windows::Foundation::Size & value) const;
    bool AllowCropping() const;
    void AllowCropping(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_ICameraCaptureUIVideoCaptureSettings
{
    Windows::Media::Capture::CameraCaptureUIVideoFormat Format() const;
    void Format(Windows::Media::Capture::CameraCaptureUIVideoFormat value) const;
    Windows::Media::Capture::CameraCaptureUIMaxVideoResolution MaxResolution() const;
    void MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxVideoResolution value) const;
    float MaxDurationInSeconds() const;
    void MaxDurationInSeconds(float value) const;
    bool AllowTrimming() const;
    void AllowTrimming(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_ICameraOptionsUIStatics
{
    void Show(const Windows::Media::Capture::MediaCapture & mediaCapture) const;
};

template <typename D>
struct WINRT_EBO impl_ICapturedFrame
{
    uint32_t Width() const;
    uint32_t Height() const;
};

template <typename D>
struct WINRT_EBO impl_ICapturedFrameControlValues
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> Exposure() const;
    Windows::Foundation::IReference<float> ExposureCompensation() const;
    Windows::Foundation::IReference<uint32_t> IsoSpeed() const;
    Windows::Foundation::IReference<uint32_t> Focus() const;
    Windows::Foundation::IReference<winrt::Windows::Media::Devices::CaptureSceneMode> SceneMode() const;
    Windows::Foundation::IReference<bool> Flashed() const;
    Windows::Foundation::IReference<float> FlashPowerPercent() const;
    Windows::Foundation::IReference<uint32_t> WhiteBalance() const;
    Windows::Foundation::IReference<float> ZoomFactor() const;
};

template <typename D>
struct WINRT_EBO impl_ICapturedFrameControlValues2
{
    Windows::Foundation::IReference<winrt::Windows::Media::Devices::MediaCaptureFocusState> FocusState() const;
    Windows::Foundation::IReference<double> IsoDigitalGain() const;
    Windows::Foundation::IReference<double> IsoAnalogGain() const;
    Windows::Media::MediaProperties::MediaRatio SensorFrameRate() const;
    Windows::Foundation::IReference<Windows::Media::Capture::WhiteBalanceGain> WhiteBalanceGain() const;
};

template <typename D>
struct WINRT_EBO impl_ICapturedFrameWithSoftwareBitmap
{
    Windows::Graphics::Imaging::SoftwareBitmap SoftwareBitmap() const;
};

template <typename D>
struct WINRT_EBO impl_ICapturedPhoto
{
    Windows::Media::Capture::CapturedFrame Frame() const;
    Windows::Media::Capture::CapturedFrame Thumbnail() const;
};

template <typename D>
struct WINRT_EBO impl_IGameBarServices
{
    Windows::Media::Capture::GameBarTargetCapturePolicy TargetCapturePolicy() const;
    void EnableCapture() const;
    void DisableCapture() const;
    Windows::Media::Capture::GameBarServicesTargetInfo TargetInfo() const;
    hstring SessionId() const;
    Windows::Media::Capture::AppBroadcastServices AppBroadcastServices() const;
    Windows::Media::Capture::AppCaptureServices AppCaptureServices() const;
    event_token CommandReceived(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServices, Windows::Media::Capture::GameBarServicesCommandEventArgs> & value) const;
    using CommandReceived_revoker = event_revoker<IGameBarServices>;
    CommandReceived_revoker CommandReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServices, Windows::Media::Capture::GameBarServicesCommandEventArgs> & value) const;
    void CommandReceived(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IGameBarServicesCommandEventArgs
{
    Windows::Media::Capture::GameBarCommand Command() const;
    Windows::Media::Capture::GameBarCommandOrigin Origin() const;
};

template <typename D>
struct WINRT_EBO impl_IGameBarServicesManager
{
    event_token GameBarServicesCreated(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServicesManager, Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs> & value) const;
    using GameBarServicesCreated_revoker = event_revoker<IGameBarServicesManager>;
    GameBarServicesCreated_revoker GameBarServicesCreated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServicesManager, Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs> & value) const;
    void GameBarServicesCreated(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IGameBarServicesManagerGameBarServicesCreatedEventArgs
{
    Windows::Media::Capture::GameBarServices GameBarServices() const;
};

template <typename D>
struct WINRT_EBO impl_IGameBarServicesManagerStatics
{
    Windows::Media::Capture::GameBarServicesManager GetDefault() const;
};

template <typename D>
struct WINRT_EBO impl_IGameBarServicesTargetInfo
{
    hstring DisplayName() const;
    hstring AppId() const;
    hstring TitleId() const;
    Windows::Media::Capture::GameBarServicesDisplayMode DisplayMode() const;
};

template <typename D>
struct WINRT_EBO impl_ILowLagMediaRecording
{
    Windows::Foundation::IAsyncAction StartAsync() const;
    Windows::Foundation::IAsyncAction StopAsync() const;
    Windows::Foundation::IAsyncAction FinishAsync() const;
};

template <typename D>
struct WINRT_EBO impl_ILowLagMediaRecording2
{
    Windows::Foundation::IAsyncAction PauseAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior) const;
    Windows::Foundation::IAsyncAction ResumeAsync() const;
};

template <typename D>
struct WINRT_EBO impl_ILowLagMediaRecording3
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult> PauseWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult> StopWithResultAsync() const;
};

template <typename D>
struct WINRT_EBO impl_ILowLagPhotoCapture
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::CapturedPhoto> CaptureAsync() const;
    Windows::Foundation::IAsyncAction FinishAsync() const;
};

template <typename D>
struct WINRT_EBO impl_ILowLagPhotoSequenceCapture
{
    Windows::Foundation::IAsyncAction StartAsync() const;
    Windows::Foundation::IAsyncAction StopAsync() const;
    Windows::Foundation::IAsyncAction FinishAsync() const;
    event_token PhotoCaptured(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture, Windows::Media::Capture::PhotoCapturedEventArgs> & handler) const;
    using PhotoCaptured_revoker = event_revoker<ILowLagPhotoSequenceCapture>;
    PhotoCaptured_revoker PhotoCaptured(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture, Windows::Media::Capture::PhotoCapturedEventArgs> & handler) const;
    void PhotoCaptured(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCapture
{
    Windows::Foundation::IAsyncAction InitializeAsync() const;
    Windows::Foundation::IAsyncAction InitializeAsync(const Windows::Media::Capture::MediaCaptureInitializationSettings & mediaCaptureInitializationSettings) const;
    Windows::Foundation::IAsyncAction StartRecordToStorageFileAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, const Windows::Storage::IStorageFile & file) const;
    Windows::Foundation::IAsyncAction StartRecordToStreamAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, const Windows::Storage::Streams::IRandomAccessStream & stream) const;
    Windows::Foundation::IAsyncAction StartRecordToCustomSinkAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, const Windows::Media::IMediaExtension & customMediaSink) const;
    Windows::Foundation::IAsyncAction StartRecordToCustomSinkAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, hstring_view customSinkActivationId, const Windows::Foundation::Collections::IPropertySet & customSinkSettings) const;
    Windows::Foundation::IAsyncAction StopRecordAsync() const;
    Windows::Foundation::IAsyncAction CapturePhotoToStorageFileAsync(const Windows::Media::MediaProperties::ImageEncodingProperties & type, const Windows::Storage::IStorageFile & file) const;
    Windows::Foundation::IAsyncAction CapturePhotoToStreamAsync(const Windows::Media::MediaProperties::ImageEncodingProperties & type, const Windows::Storage::Streams::IRandomAccessStream & stream) const;
    [[deprecated("AddEffectAsync might not be available in future versions of Windows. Starting with Windows Threshold, use AddAudioEffectAsync and AddVideoEffectAsync instead")]] Windows::Foundation::IAsyncAction AddEffectAsync(Windows::Media::Capture::MediaStreamType mediaStreamType, hstring_view effectActivationID, const Windows::Foundation::Collections::IPropertySet & effectSettings) const;
    Windows::Foundation::IAsyncAction ClearEffectsAsync(Windows::Media::Capture::MediaStreamType mediaStreamType) const;
    void SetEncoderProperty(Windows::Media::Capture::MediaStreamType mediaStreamType, GUID propertyId, const Windows::Foundation::IInspectable & propertyValue) const;
    Windows::Foundation::IInspectable GetEncoderProperty(Windows::Media::Capture::MediaStreamType mediaStreamType, GUID propertyId) const;
    event_token Failed(const Windows::Media::Capture::MediaCaptureFailedEventHandler & errorEventHandler) const;
    using Failed_revoker = event_revoker<IMediaCapture>;
    Failed_revoker Failed(auto_revoke_t, const Windows::Media::Capture::MediaCaptureFailedEventHandler & errorEventHandler) const;
    void Failed(event_token eventCookie) const;
    event_token RecordLimitationExceeded(const Windows::Media::Capture::RecordLimitationExceededEventHandler & recordLimitationExceededEventHandler) const;
    using RecordLimitationExceeded_revoker = event_revoker<IMediaCapture>;
    RecordLimitationExceeded_revoker RecordLimitationExceeded(auto_revoke_t, const Windows::Media::Capture::RecordLimitationExceededEventHandler & recordLimitationExceededEventHandler) const;
    void RecordLimitationExceeded(event_token eventCookie) const;
    Windows::Media::Capture::MediaCaptureSettings MediaCaptureSettings() const;
    Windows::Media::Devices::AudioDeviceController AudioDeviceController() const;
    Windows::Media::Devices::VideoDeviceController VideoDeviceController() const;
    void SetPreviewMirroring(bool value) const;
    bool GetPreviewMirroring() const;
    void SetPreviewRotation(Windows::Media::Capture::VideoRotation value) const;
    Windows::Media::Capture::VideoRotation GetPreviewRotation() const;
    void SetRecordRotation(Windows::Media::Capture::VideoRotation value) const;
    Windows::Media::Capture::VideoRotation GetRecordRotation() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCapture2
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> PrepareLowLagRecordToStorageFileAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, const Windows::Storage::IStorageFile & file) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> PrepareLowLagRecordToStreamAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, const Windows::Storage::Streams::IRandomAccessStream & stream) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> PrepareLowLagRecordToCustomSinkAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, const Windows::Media::IMediaExtension & customMediaSink) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> PrepareLowLagRecordToCustomSinkAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, hstring_view customSinkActivationId, const Windows::Foundation::Collections::IPropertySet & customSinkSettings) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoCapture> PrepareLowLagPhotoCaptureAsync(const Windows::Media::MediaProperties::ImageEncodingProperties & type) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoSequenceCapture> PrepareLowLagPhotoSequenceCaptureAsync(const Windows::Media::MediaProperties::ImageEncodingProperties & type) const;
    Windows::Foundation::IAsyncAction SetEncodingPropertiesAsync(Windows::Media::Capture::MediaStreamType mediaStreamType, const Windows::Media::MediaProperties::IMediaEncodingProperties & mediaEncodingProperties, const Windows::Media::MediaProperties::MediaPropertySet & encoderProperties) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCapture3
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Core::VariablePhotoSequenceCapture> PrepareVariablePhotoSequenceCaptureAsync(const Windows::Media::MediaProperties::ImageEncodingProperties & type) const;
    event_token FocusChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> & handler) const;
    using FocusChanged_revoker = event_revoker<IMediaCapture3>;
    FocusChanged_revoker FocusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> & handler) const;
    void FocusChanged(event_token token) const;
    event_token PhotoConfirmationCaptured(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> & handler) const;
    using PhotoConfirmationCaptured_revoker = event_revoker<IMediaCapture3>;
    PhotoConfirmationCaptured_revoker PhotoConfirmationCaptured(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> & handler) const;
    void PhotoConfirmationCaptured(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCapture4
{
    Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension> AddAudioEffectAsync(const Windows::Media::Effects::IAudioEffectDefinition & definition) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension> AddVideoEffectAsync(const Windows::Media::Effects::IVideoEffectDefinition & definition, Windows::Media::Capture::MediaStreamType mediaStreamType) const;
    Windows::Foundation::IAsyncAction PauseRecordAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior) const;
    Windows::Foundation::IAsyncAction ResumeRecordAsync() const;
    event_token CameraStreamStateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> & handler) const;
    using CameraStreamStateChanged_revoker = event_revoker<IMediaCapture4>;
    CameraStreamStateChanged_revoker CameraStreamStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> & handler) const;
    void CameraStreamStateChanged(event_token token) const;
    Windows::Media::Devices::CameraStreamState CameraStreamState() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame> GetPreviewFrameAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame> GetPreviewFrameAsync(const Windows::Media::VideoFrame & destination) const;
    event_token ThermalStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> & handler) const;
    using ThermalStatusChanged_revoker = event_revoker<IMediaCapture4>;
    ThermalStatusChanged_revoker ThermalStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> & handler) const;
    void ThermalStatusChanged(event_token token) const;
    Windows::Media::Capture::MediaCaptureThermalStatus ThermalStatus() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedPhotoCapture> PrepareAdvancedPhotoCaptureAsync(const Windows::Media::MediaProperties::ImageEncodingProperties & encodingProperties) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCapture5
{
    Windows::Foundation::IAsyncAction RemoveEffectAsync(const Windows::Media::IMediaExtension & effect) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult> PauseRecordWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult> StopRecordWithResultAsync() const;
    Windows::Foundation::Collections::IMapView<hstring, Windows::Media::Capture::Frames::MediaFrameSource> FrameSources() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> CreateFrameReaderAsync(const Windows::Media::Capture::Frames::MediaFrameSource & inputSource) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> CreateFrameReaderAsync(const Windows::Media::Capture::Frames::MediaFrameSource & inputSource, hstring_view outputSubtype) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> CreateFrameReaderAsync(const Windows::Media::Capture::Frames::MediaFrameSource & inputSource, hstring_view outputSubtype, const Windows::Graphics::Imaging::BitmapSize & outputSize) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCapture6
{
    event_token CaptureDeviceExclusiveControlStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs> & handler) const;
    using CaptureDeviceExclusiveControlStatusChanged_revoker = event_revoker<IMediaCapture6>;
    CaptureDeviceExclusiveControlStatusChanged_revoker CaptureDeviceExclusiveControlStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs> & handler) const;
    void CaptureDeviceExclusiveControlStatusChanged(event_token token) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MultiSourceMediaFrameReader> CreateMultiSourceFrameReaderAsync(iterable<Windows::Media::Capture::Frames::MediaFrameSource> inputSources) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs
{
    hstring DeviceId() const;
    Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatus Status() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCaptureFailedEventArgs
{
    hstring Message() const;
    uint32_t Code() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCaptureFocusChangedEventArgs
{
    Windows::Media::Devices::MediaCaptureFocusState FocusState() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCaptureInitializationSettings
{
    void AudioDeviceId(hstring_view value) const;
    hstring AudioDeviceId() const;
    void VideoDeviceId(hstring_view value) const;
    hstring VideoDeviceId() const;
    void StreamingCaptureMode(Windows::Media::Capture::StreamingCaptureMode value) const;
    Windows::Media::Capture::StreamingCaptureMode StreamingCaptureMode() const;
    void PhotoCaptureSource(Windows::Media::Capture::PhotoCaptureSource value) const;
    Windows::Media::Capture::PhotoCaptureSource PhotoCaptureSource() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCaptureInitializationSettings2
{
    void MediaCategory(Windows::Media::Capture::MediaCategory value) const;
    Windows::Media::Capture::MediaCategory MediaCategory() const;
    void AudioProcessing(Windows::Media::AudioProcessing value) const;
    Windows::Media::AudioProcessing AudioProcessing() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCaptureInitializationSettings3
{
    void AudioSource(const Windows::Media::Core::IMediaSource & value) const;
    Windows::Media::Core::IMediaSource AudioSource() const;
    void VideoSource(const Windows::Media::Core::IMediaSource & value) const;
    Windows::Media::Core::IMediaSource VideoSource() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCaptureInitializationSettings4
{
    Windows::Media::Capture::MediaCaptureVideoProfile VideoProfile() const;
    void VideoProfile(const Windows::Media::Capture::MediaCaptureVideoProfile & value) const;
    Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription PreviewMediaDescription() const;
    void PreviewMediaDescription(const Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription & value) const;
    Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription RecordMediaDescription() const;
    void RecordMediaDescription(const Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription & value) const;
    Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription PhotoMediaDescription() const;
    void PhotoMediaDescription(const Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription & value) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCaptureInitializationSettings5
{
    Windows::Media::Capture::Frames::MediaFrameSourceGroup SourceGroup() const;
    void SourceGroup(const Windows::Media::Capture::Frames::MediaFrameSourceGroup & value) const;
    Windows::Media::Capture::MediaCaptureSharingMode SharingMode() const;
    void SharingMode(Windows::Media::Capture::MediaCaptureSharingMode value) const;
    Windows::Media::Capture::MediaCaptureMemoryPreference MemoryPreference() const;
    void MemoryPreference(Windows::Media::Capture::MediaCaptureMemoryPreference value) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCaptureInitializationSettings6
{
    bool AlwaysPlaySystemShutterSound() const;
    void AlwaysPlaySystemShutterSound(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCapturePauseResult
{
    Windows::Media::VideoFrame LastFrame() const;
    Windows::Foundation::TimeSpan RecordDuration() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCaptureSettings
{
    hstring AudioDeviceId() const;
    hstring VideoDeviceId() const;
    Windows::Media::Capture::StreamingCaptureMode StreamingCaptureMode() const;
    Windows::Media::Capture::PhotoCaptureSource PhotoCaptureSource() const;
    Windows::Media::Capture::VideoDeviceCharacteristic VideoDeviceCharacteristic() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCaptureSettings2
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

template <typename D>
struct WINRT_EBO impl_IMediaCaptureStatics
{
    bool IsVideoProfileSupported(hstring_view videoDeviceId) const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> FindAllVideoProfiles(hstring_view videoDeviceId) const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> FindConcurrentProfiles(hstring_view videoDeviceId) const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> FindKnownVideoProfiles(hstring_view videoDeviceId, Windows::Media::Capture::KnownVideoProfile name) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCaptureStopResult
{
    Windows::Media::VideoFrame LastFrame() const;
    Windows::Foundation::TimeSpan RecordDuration() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCaptureVideoPreview
{
    Windows::Foundation::IAsyncAction StartPreviewAsync() const;
    Windows::Foundation::IAsyncAction StartPreviewToCustomSinkAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, const Windows::Media::IMediaExtension & customMediaSink) const;
    Windows::Foundation::IAsyncAction StartPreviewToCustomSinkAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, hstring_view customSinkActivationId, const Windows::Foundation::Collections::IPropertySet & customSinkSettings) const;
    Windows::Foundation::IAsyncAction StopPreviewAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCaptureVideoProfile
{
    hstring Id() const;
    hstring VideoDeviceId() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> SupportedPreviewMediaDescription() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> SupportedRecordMediaDescription() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> SupportedPhotoMediaDescription() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> GetConcurrency() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCaptureVideoProfileMediaDescription
{
    uint32_t Width() const;
    uint32_t Height() const;
    double FrameRate() const;
    bool IsVariablePhotoSequenceSupported() const;
    bool IsHdrVideoSupported() const;
};

template <typename D>
struct WINRT_EBO impl_IOptionalReferencePhotoCapturedEventArgs
{
    Windows::Media::Capture::CapturedFrame Frame() const;
    Windows::Foundation::IInspectable Context() const;
};

template <typename D>
struct WINRT_EBO impl_IPhotoCapturedEventArgs
{
    Windows::Media::Capture::CapturedFrame Frame() const;
    Windows::Media::Capture::CapturedFrame Thumbnail() const;
    Windows::Foundation::TimeSpan CaptureTimeOffset() const;
};

template <typename D>
struct WINRT_EBO impl_IPhotoConfirmationCapturedEventArgs
{
    Windows::Media::Capture::CapturedFrame Frame() const;
    Windows::Foundation::TimeSpan CaptureTimeOffset() const;
};

template <typename D>
struct WINRT_EBO impl_IScreenCapture
{
    Windows::Media::Core::IMediaSource AudioSource() const;
    Windows::Media::Core::IMediaSource VideoSource() const;
    bool IsAudioSuspended() const;
    bool IsVideoSuspended() const;
    event_token SourceSuspensionChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::ScreenCapture, Windows::Media::Capture::SourceSuspensionChangedEventArgs> & handler) const;
    using SourceSuspensionChanged_revoker = event_revoker<IScreenCapture>;
    SourceSuspensionChanged_revoker SourceSuspensionChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::ScreenCapture, Windows::Media::Capture::SourceSuspensionChangedEventArgs> & handler) const;
    void SourceSuspensionChanged(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IScreenCaptureStatics
{
    Windows::Media::Capture::ScreenCapture GetForCurrentView() const;
};

template <typename D>
struct WINRT_EBO impl_ISourceSuspensionChangedEventArgs
{
    bool IsAudioSuspended() const;
    bool IsVideoSuspended() const;
};

template <typename D>
struct WINRT_EBO impl_IVideoStreamConfiguration
{
    Windows::Media::MediaProperties::VideoEncodingProperties InputProperties() const;
    Windows::Media::MediaProperties::VideoEncodingProperties OutputProperties() const;
};

}

namespace impl {

template <> struct traits<Windows::Media::Capture::IAdvancedCapturedPhoto>
{
    using abi = ABI::Windows::Media::Capture::IAdvancedCapturedPhoto;
    template <typename D> using consume = Windows::Media::Capture::impl_IAdvancedCapturedPhoto<D>;
};

template <> struct traits<Windows::Media::Capture::IAdvancedCapturedPhoto2>
{
    using abi = ABI::Windows::Media::Capture::IAdvancedCapturedPhoto2;
    template <typename D> using consume = Windows::Media::Capture::impl_IAdvancedCapturedPhoto2<D>;
};

template <> struct traits<Windows::Media::Capture::IAdvancedPhotoCapture>
{
    using abi = ABI::Windows::Media::Capture::IAdvancedPhotoCapture;
    template <typename D> using consume = Windows::Media::Capture::impl_IAdvancedPhotoCapture<D>;
};

template <> struct traits<Windows::Media::Capture::IAppBroadcastBackgroundService>
{
    using abi = ABI::Windows::Media::Capture::IAppBroadcastBackgroundService;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppBroadcastBackgroundService<D>;
};

template <> struct traits<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo>
{
    using abi = ABI::Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppBroadcastBackgroundServiceSignInInfo<D>;
};

template <> struct traits<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>
{
    using abi = ABI::Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppBroadcastBackgroundServiceStreamInfo<D>;
};

template <> struct traits<Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppBroadcastCameraCaptureStateChangedEventArgs<D>;
};

template <> struct traits<Windows::Media::Capture::IAppBroadcastGlobalSettings>
{
    using abi = ABI::Windows::Media::Capture::IAppBroadcastGlobalSettings;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppBroadcastGlobalSettings<D>;
};

template <> struct traits<Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppBroadcastHeartbeatRequestedEventArgs<D>;
};

template <> struct traits<Windows::Media::Capture::IAppBroadcastManagerStatics>
{
    using abi = ABI::Windows::Media::Capture::IAppBroadcastManagerStatics;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppBroadcastManagerStatics<D>;
};

template <> struct traits<Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppBroadcastMicrophoneCaptureStateChangedEventArgs<D>;
};

template <> struct traits<Windows::Media::Capture::IAppBroadcastPlugIn>
{
    using abi = ABI::Windows::Media::Capture::IAppBroadcastPlugIn;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppBroadcastPlugIn<D>;
};

template <> struct traits<Windows::Media::Capture::IAppBroadcastPlugInManager>
{
    using abi = ABI::Windows::Media::Capture::IAppBroadcastPlugInManager;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppBroadcastPlugInManager<D>;
};

template <> struct traits<Windows::Media::Capture::IAppBroadcastPlugInManagerStatics>
{
    using abi = ABI::Windows::Media::Capture::IAppBroadcastPlugInManagerStatics;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppBroadcastPlugInManagerStatics<D>;
};

template <> struct traits<Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppBroadcastPlugInStateChangedEventArgs<D>;
};

template <> struct traits<Windows::Media::Capture::IAppBroadcastPreview>
{
    using abi = ABI::Windows::Media::Capture::IAppBroadcastPreview;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppBroadcastPreview<D>;
};

template <> struct traits<Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppBroadcastPreviewStateChangedEventArgs<D>;
};

template <> struct traits<Windows::Media::Capture::IAppBroadcastPreviewStreamReader>
{
    using abi = ABI::Windows::Media::Capture::IAppBroadcastPreviewStreamReader;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppBroadcastPreviewStreamReader<D>;
};

template <> struct traits<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame>
{
    using abi = ABI::Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppBroadcastPreviewStreamVideoFrame<D>;
};

template <> struct traits<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader>
{
    using abi = ABI::Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppBroadcastPreviewStreamVideoHeader<D>;
};

template <> struct traits<Windows::Media::Capture::IAppBroadcastProviderSettings>
{
    using abi = ABI::Windows::Media::Capture::IAppBroadcastProviderSettings;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppBroadcastProviderSettings<D>;
};

template <> struct traits<Windows::Media::Capture::IAppBroadcastServices>
{
    using abi = ABI::Windows::Media::Capture::IAppBroadcastServices;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppBroadcastServices<D>;
};

template <> struct traits<Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppBroadcastSignInStateChangedEventArgs<D>;
};

template <> struct traits<Windows::Media::Capture::IAppBroadcastState>
{
    using abi = ABI::Windows::Media::Capture::IAppBroadcastState;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppBroadcastState<D>;
};

template <> struct traits<Windows::Media::Capture::IAppBroadcastStreamAudioFrame>
{
    using abi = ABI::Windows::Media::Capture::IAppBroadcastStreamAudioFrame;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppBroadcastStreamAudioFrame<D>;
};

template <> struct traits<Windows::Media::Capture::IAppBroadcastStreamAudioHeader>
{
    using abi = ABI::Windows::Media::Capture::IAppBroadcastStreamAudioHeader;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppBroadcastStreamAudioHeader<D>;
};

template <> struct traits<Windows::Media::Capture::IAppBroadcastStreamReader>
{
    using abi = ABI::Windows::Media::Capture::IAppBroadcastStreamReader;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppBroadcastStreamReader<D>;
};

template <> struct traits<Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppBroadcastStreamStateChangedEventArgs<D>;
};

template <> struct traits<Windows::Media::Capture::IAppBroadcastStreamVideoFrame>
{
    using abi = ABI::Windows::Media::Capture::IAppBroadcastStreamVideoFrame;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppBroadcastStreamVideoFrame<D>;
};

template <> struct traits<Windows::Media::Capture::IAppBroadcastStreamVideoHeader>
{
    using abi = ABI::Windows::Media::Capture::IAppBroadcastStreamVideoHeader;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppBroadcastStreamVideoHeader<D>;
};

template <> struct traits<Windows::Media::Capture::IAppBroadcastTriggerDetails>
{
    using abi = ABI::Windows::Media::Capture::IAppBroadcastTriggerDetails;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppBroadcastTriggerDetails<D>;
};

template <> struct traits<Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppBroadcastViewerCountChangedEventArgs<D>;
};

template <> struct traits<Windows::Media::Capture::IAppCapture>
{
    using abi = ABI::Windows::Media::Capture::IAppCapture;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppCapture<D>;
};

template <> struct traits<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys>
{
    using abi = ABI::Windows::Media::Capture::IAppCaptureAlternateShortcutKeys;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppCaptureAlternateShortcutKeys<D>;
};

template <> struct traits<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2>
{
    using abi = ABI::Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppCaptureAlternateShortcutKeys2<D>;
};

template <> struct traits<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3>
{
    using abi = ABI::Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppCaptureAlternateShortcutKeys3<D>;
};

template <> struct traits<Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppCaptureDurationGeneratedEventArgs<D>;
};

template <> struct traits<Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppCaptureFileGeneratedEventArgs<D>;
};

template <> struct traits<Windows::Media::Capture::IAppCaptureManagerStatics>
{
    using abi = ABI::Windows::Media::Capture::IAppCaptureManagerStatics;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppCaptureManagerStatics<D>;
};

template <> struct traits<Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppCaptureMicrophoneCaptureStateChangedEventArgs<D>;
};

template <> struct traits<Windows::Media::Capture::IAppCaptureRecordOperation>
{
    using abi = ABI::Windows::Media::Capture::IAppCaptureRecordOperation;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppCaptureRecordOperation<D>;
};

template <> struct traits<Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppCaptureRecordingStateChangedEventArgs<D>;
};

template <> struct traits<Windows::Media::Capture::IAppCaptureServices>
{
    using abi = ABI::Windows::Media::Capture::IAppCaptureServices;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppCaptureServices<D>;
};

template <> struct traits<Windows::Media::Capture::IAppCaptureSettings>
{
    using abi = ABI::Windows::Media::Capture::IAppCaptureSettings;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppCaptureSettings<D>;
};

template <> struct traits<Windows::Media::Capture::IAppCaptureSettings2>
{
    using abi = ABI::Windows::Media::Capture::IAppCaptureSettings2;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppCaptureSettings2<D>;
};

template <> struct traits<Windows::Media::Capture::IAppCaptureSettings3>
{
    using abi = ABI::Windows::Media::Capture::IAppCaptureSettings3;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppCaptureSettings3<D>;
};

template <> struct traits<Windows::Media::Capture::IAppCaptureSettings4>
{
    using abi = ABI::Windows::Media::Capture::IAppCaptureSettings4;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppCaptureSettings4<D>;
};

template <> struct traits<Windows::Media::Capture::IAppCaptureSettings5>
{
    using abi = ABI::Windows::Media::Capture::IAppCaptureSettings5;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppCaptureSettings5<D>;
};

template <> struct traits<Windows::Media::Capture::IAppCaptureState>
{
    using abi = ABI::Windows::Media::Capture::IAppCaptureState;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppCaptureState<D>;
};

template <> struct traits<Windows::Media::Capture::IAppCaptureStatics>
{
    using abi = ABI::Windows::Media::Capture::IAppCaptureStatics;
    template <typename D> using consume = Windows::Media::Capture::impl_IAppCaptureStatics<D>;
};

template <> struct traits<Windows::Media::Capture::ICameraCaptureUI>
{
    using abi = ABI::Windows::Media::Capture::ICameraCaptureUI;
    template <typename D> using consume = Windows::Media::Capture::impl_ICameraCaptureUI<D>;
};

template <> struct traits<Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings>
{
    using abi = ABI::Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings;
    template <typename D> using consume = Windows::Media::Capture::impl_ICameraCaptureUIPhotoCaptureSettings<D>;
};

template <> struct traits<Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings>
{
    using abi = ABI::Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings;
    template <typename D> using consume = Windows::Media::Capture::impl_ICameraCaptureUIVideoCaptureSettings<D>;
};

template <> struct traits<Windows::Media::Capture::ICameraOptionsUIStatics>
{
    using abi = ABI::Windows::Media::Capture::ICameraOptionsUIStatics;
    template <typename D> using consume = Windows::Media::Capture::impl_ICameraOptionsUIStatics<D>;
};

template <> struct traits<Windows::Media::Capture::ICapturedFrame>
{
    using abi = ABI::Windows::Media::Capture::ICapturedFrame;
    template <typename D> using consume = Windows::Media::Capture::impl_ICapturedFrame<D>;
};

template <> struct traits<Windows::Media::Capture::ICapturedFrameControlValues>
{
    using abi = ABI::Windows::Media::Capture::ICapturedFrameControlValues;
    template <typename D> using consume = Windows::Media::Capture::impl_ICapturedFrameControlValues<D>;
};

template <> struct traits<Windows::Media::Capture::ICapturedFrameControlValues2>
{
    using abi = ABI::Windows::Media::Capture::ICapturedFrameControlValues2;
    template <typename D> using consume = Windows::Media::Capture::impl_ICapturedFrameControlValues2<D>;
};

template <> struct traits<Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap>
{
    using abi = ABI::Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap;
    template <typename D> using consume = Windows::Media::Capture::impl_ICapturedFrameWithSoftwareBitmap<D>;
};

template <> struct traits<Windows::Media::Capture::ICapturedPhoto>
{
    using abi = ABI::Windows::Media::Capture::ICapturedPhoto;
    template <typename D> using consume = Windows::Media::Capture::impl_ICapturedPhoto<D>;
};

template <> struct traits<Windows::Media::Capture::IGameBarServices>
{
    using abi = ABI::Windows::Media::Capture::IGameBarServices;
    template <typename D> using consume = Windows::Media::Capture::impl_IGameBarServices<D>;
};

template <> struct traits<Windows::Media::Capture::IGameBarServicesCommandEventArgs>
{
    using abi = ABI::Windows::Media::Capture::IGameBarServicesCommandEventArgs;
    template <typename D> using consume = Windows::Media::Capture::impl_IGameBarServicesCommandEventArgs<D>;
};

template <> struct traits<Windows::Media::Capture::IGameBarServicesManager>
{
    using abi = ABI::Windows::Media::Capture::IGameBarServicesManager;
    template <typename D> using consume = Windows::Media::Capture::impl_IGameBarServicesManager<D>;
};

template <> struct traits<Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs;
    template <typename D> using consume = Windows::Media::Capture::impl_IGameBarServicesManagerGameBarServicesCreatedEventArgs<D>;
};

template <> struct traits<Windows::Media::Capture::IGameBarServicesManagerStatics>
{
    using abi = ABI::Windows::Media::Capture::IGameBarServicesManagerStatics;
    template <typename D> using consume = Windows::Media::Capture::impl_IGameBarServicesManagerStatics<D>;
};

template <> struct traits<Windows::Media::Capture::IGameBarServicesTargetInfo>
{
    using abi = ABI::Windows::Media::Capture::IGameBarServicesTargetInfo;
    template <typename D> using consume = Windows::Media::Capture::impl_IGameBarServicesTargetInfo<D>;
};

template <> struct traits<Windows::Media::Capture::ILowLagMediaRecording>
{
    using abi = ABI::Windows::Media::Capture::ILowLagMediaRecording;
    template <typename D> using consume = Windows::Media::Capture::impl_ILowLagMediaRecording<D>;
};

template <> struct traits<Windows::Media::Capture::ILowLagMediaRecording2>
{
    using abi = ABI::Windows::Media::Capture::ILowLagMediaRecording2;
    template <typename D> using consume = Windows::Media::Capture::impl_ILowLagMediaRecording2<D>;
};

template <> struct traits<Windows::Media::Capture::ILowLagMediaRecording3>
{
    using abi = ABI::Windows::Media::Capture::ILowLagMediaRecording3;
    template <typename D> using consume = Windows::Media::Capture::impl_ILowLagMediaRecording3<D>;
};

template <> struct traits<Windows::Media::Capture::ILowLagPhotoCapture>
{
    using abi = ABI::Windows::Media::Capture::ILowLagPhotoCapture;
    template <typename D> using consume = Windows::Media::Capture::impl_ILowLagPhotoCapture<D>;
};

template <> struct traits<Windows::Media::Capture::ILowLagPhotoSequenceCapture>
{
    using abi = ABI::Windows::Media::Capture::ILowLagPhotoSequenceCapture;
    template <typename D> using consume = Windows::Media::Capture::impl_ILowLagPhotoSequenceCapture<D>;
};

template <> struct traits<Windows::Media::Capture::IMediaCapture>
{
    using abi = ABI::Windows::Media::Capture::IMediaCapture;
    template <typename D> using consume = Windows::Media::Capture::impl_IMediaCapture<D>;
};

template <> struct traits<Windows::Media::Capture::IMediaCapture2>
{
    using abi = ABI::Windows::Media::Capture::IMediaCapture2;
    template <typename D> using consume = Windows::Media::Capture::impl_IMediaCapture2<D>;
};

template <> struct traits<Windows::Media::Capture::IMediaCapture3>
{
    using abi = ABI::Windows::Media::Capture::IMediaCapture3;
    template <typename D> using consume = Windows::Media::Capture::impl_IMediaCapture3<D>;
};

template <> struct traits<Windows::Media::Capture::IMediaCapture4>
{
    using abi = ABI::Windows::Media::Capture::IMediaCapture4;
    template <typename D> using consume = Windows::Media::Capture::impl_IMediaCapture4<D>;
};

template <> struct traits<Windows::Media::Capture::IMediaCapture5>
{
    using abi = ABI::Windows::Media::Capture::IMediaCapture5;
    template <typename D> using consume = Windows::Media::Capture::impl_IMediaCapture5<D>;
};

template <> struct traits<Windows::Media::Capture::IMediaCapture6>
{
    using abi = ABI::Windows::Media::Capture::IMediaCapture6;
    template <typename D> using consume = Windows::Media::Capture::impl_IMediaCapture6<D>;
};

template <> struct traits<Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs;
    template <typename D> using consume = Windows::Media::Capture::impl_IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs<D>;
};

template <> struct traits<Windows::Media::Capture::IMediaCaptureFailedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::IMediaCaptureFailedEventArgs;
    template <typename D> using consume = Windows::Media::Capture::impl_IMediaCaptureFailedEventArgs<D>;
};

template <> struct traits<Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs;
    template <typename D> using consume = Windows::Media::Capture::impl_IMediaCaptureFocusChangedEventArgs<D>;
};

template <> struct traits<Windows::Media::Capture::IMediaCaptureInitializationSettings>
{
    using abi = ABI::Windows::Media::Capture::IMediaCaptureInitializationSettings;
    template <typename D> using consume = Windows::Media::Capture::impl_IMediaCaptureInitializationSettings<D>;
};

template <> struct traits<Windows::Media::Capture::IMediaCaptureInitializationSettings2>
{
    using abi = ABI::Windows::Media::Capture::IMediaCaptureInitializationSettings2;
    template <typename D> using consume = Windows::Media::Capture::impl_IMediaCaptureInitializationSettings2<D>;
};

template <> struct traits<Windows::Media::Capture::IMediaCaptureInitializationSettings3>
{
    using abi = ABI::Windows::Media::Capture::IMediaCaptureInitializationSettings3;
    template <typename D> using consume = Windows::Media::Capture::impl_IMediaCaptureInitializationSettings3<D>;
};

template <> struct traits<Windows::Media::Capture::IMediaCaptureInitializationSettings4>
{
    using abi = ABI::Windows::Media::Capture::IMediaCaptureInitializationSettings4;
    template <typename D> using consume = Windows::Media::Capture::impl_IMediaCaptureInitializationSettings4<D>;
};

template <> struct traits<Windows::Media::Capture::IMediaCaptureInitializationSettings5>
{
    using abi = ABI::Windows::Media::Capture::IMediaCaptureInitializationSettings5;
    template <typename D> using consume = Windows::Media::Capture::impl_IMediaCaptureInitializationSettings5<D>;
};

template <> struct traits<Windows::Media::Capture::IMediaCaptureInitializationSettings6>
{
    using abi = ABI::Windows::Media::Capture::IMediaCaptureInitializationSettings6;
    template <typename D> using consume = Windows::Media::Capture::impl_IMediaCaptureInitializationSettings6<D>;
};

template <> struct traits<Windows::Media::Capture::IMediaCapturePauseResult>
{
    using abi = ABI::Windows::Media::Capture::IMediaCapturePauseResult;
    template <typename D> using consume = Windows::Media::Capture::impl_IMediaCapturePauseResult<D>;
};

template <> struct traits<Windows::Media::Capture::IMediaCaptureSettings>
{
    using abi = ABI::Windows::Media::Capture::IMediaCaptureSettings;
    template <typename D> using consume = Windows::Media::Capture::impl_IMediaCaptureSettings<D>;
};

template <> struct traits<Windows::Media::Capture::IMediaCaptureSettings2>
{
    using abi = ABI::Windows::Media::Capture::IMediaCaptureSettings2;
    template <typename D> using consume = Windows::Media::Capture::impl_IMediaCaptureSettings2<D>;
};

template <> struct traits<Windows::Media::Capture::IMediaCaptureStatics>
{
    using abi = ABI::Windows::Media::Capture::IMediaCaptureStatics;
    template <typename D> using consume = Windows::Media::Capture::impl_IMediaCaptureStatics<D>;
};

template <> struct traits<Windows::Media::Capture::IMediaCaptureStopResult>
{
    using abi = ABI::Windows::Media::Capture::IMediaCaptureStopResult;
    template <typename D> using consume = Windows::Media::Capture::impl_IMediaCaptureStopResult<D>;
};

template <> struct traits<Windows::Media::Capture::IMediaCaptureVideoPreview>
{
    using abi = ABI::Windows::Media::Capture::IMediaCaptureVideoPreview;
    template <typename D> using consume = Windows::Media::Capture::impl_IMediaCaptureVideoPreview<D>;
};

template <> struct traits<Windows::Media::Capture::IMediaCaptureVideoProfile>
{
    using abi = ABI::Windows::Media::Capture::IMediaCaptureVideoProfile;
    template <typename D> using consume = Windows::Media::Capture::impl_IMediaCaptureVideoProfile<D>;
};

template <> struct traits<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription>
{
    using abi = ABI::Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription;
    template <typename D> using consume = Windows::Media::Capture::impl_IMediaCaptureVideoProfileMediaDescription<D>;
};

template <> struct traits<Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs;
    template <typename D> using consume = Windows::Media::Capture::impl_IOptionalReferencePhotoCapturedEventArgs<D>;
};

template <> struct traits<Windows::Media::Capture::IPhotoCapturedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::IPhotoCapturedEventArgs;
    template <typename D> using consume = Windows::Media::Capture::impl_IPhotoCapturedEventArgs<D>;
};

template <> struct traits<Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs;
    template <typename D> using consume = Windows::Media::Capture::impl_IPhotoConfirmationCapturedEventArgs<D>;
};

template <> struct traits<Windows::Media::Capture::IScreenCapture>
{
    using abi = ABI::Windows::Media::Capture::IScreenCapture;
    template <typename D> using consume = Windows::Media::Capture::impl_IScreenCapture<D>;
};

template <> struct traits<Windows::Media::Capture::IScreenCaptureStatics>
{
    using abi = ABI::Windows::Media::Capture::IScreenCaptureStatics;
    template <typename D> using consume = Windows::Media::Capture::impl_IScreenCaptureStatics<D>;
};

template <> struct traits<Windows::Media::Capture::ISourceSuspensionChangedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::ISourceSuspensionChangedEventArgs;
    template <typename D> using consume = Windows::Media::Capture::impl_ISourceSuspensionChangedEventArgs<D>;
};

template <> struct traits<Windows::Media::Capture::IVideoStreamConfiguration>
{
    using abi = ABI::Windows::Media::Capture::IVideoStreamConfiguration;
    template <typename D> using consume = Windows::Media::Capture::impl_IVideoStreamConfiguration<D>;
};

template <> struct traits<Windows::Media::Capture::MediaCaptureFailedEventHandler>
{
    using abi = ABI::Windows::Media::Capture::MediaCaptureFailedEventHandler;
};

template <> struct traits<Windows::Media::Capture::RecordLimitationExceededEventHandler>
{
    using abi = ABI::Windows::Media::Capture::RecordLimitationExceededEventHandler;
};

template <> struct traits<Windows::Media::Capture::AdvancedCapturedPhoto>
{
    using abi = ABI::Windows::Media::Capture::AdvancedCapturedPhoto;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AdvancedCapturedPhoto"; }
};

template <> struct traits<Windows::Media::Capture::AdvancedPhotoCapture>
{
    using abi = ABI::Windows::Media::Capture::AdvancedPhotoCapture;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AdvancedPhotoCapture"; }
};

template <> struct traits<Windows::Media::Capture::AppBroadcastBackgroundService>
{
    using abi = ABI::Windows::Media::Capture::AppBroadcastBackgroundService;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppBroadcastBackgroundService"; }
};

template <> struct traits<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo>
{
    using abi = ABI::Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppBroadcastBackgroundServiceSignInInfo"; }
};

template <> struct traits<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo>
{
    using abi = ABI::Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppBroadcastBackgroundServiceStreamInfo"; }
};

template <> struct traits<Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppBroadcastCameraCaptureStateChangedEventArgs"; }
};

template <> struct traits<Windows::Media::Capture::AppBroadcastGlobalSettings>
{
    using abi = ABI::Windows::Media::Capture::AppBroadcastGlobalSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppBroadcastGlobalSettings"; }
};

template <> struct traits<Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppBroadcastHeartbeatRequestedEventArgs"; }
};

template <> struct traits<Windows::Media::Capture::AppBroadcastManager>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppBroadcastManager"; }
};

template <> struct traits<Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppBroadcastMicrophoneCaptureStateChangedEventArgs"; }
};

template <> struct traits<Windows::Media::Capture::AppBroadcastPlugIn>
{
    using abi = ABI::Windows::Media::Capture::AppBroadcastPlugIn;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppBroadcastPlugIn"; }
};

template <> struct traits<Windows::Media::Capture::AppBroadcastPlugInManager>
{
    using abi = ABI::Windows::Media::Capture::AppBroadcastPlugInManager;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppBroadcastPlugInManager"; }
};

template <> struct traits<Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppBroadcastPlugInStateChangedEventArgs"; }
};

template <> struct traits<Windows::Media::Capture::AppBroadcastPreview>
{
    using abi = ABI::Windows::Media::Capture::AppBroadcastPreview;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppBroadcastPreview"; }
};

template <> struct traits<Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppBroadcastPreviewStateChangedEventArgs"; }
};

template <> struct traits<Windows::Media::Capture::AppBroadcastPreviewStreamReader>
{
    using abi = ABI::Windows::Media::Capture::AppBroadcastPreviewStreamReader;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppBroadcastPreviewStreamReader"; }
};

template <> struct traits<Windows::Media::Capture::AppBroadcastPreviewStreamVideoFrame>
{
    using abi = ABI::Windows::Media::Capture::AppBroadcastPreviewStreamVideoFrame;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppBroadcastPreviewStreamVideoFrame"; }
};

template <> struct traits<Windows::Media::Capture::AppBroadcastPreviewStreamVideoHeader>
{
    using abi = ABI::Windows::Media::Capture::AppBroadcastPreviewStreamVideoHeader;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppBroadcastPreviewStreamVideoHeader"; }
};

template <> struct traits<Windows::Media::Capture::AppBroadcastProviderSettings>
{
    using abi = ABI::Windows::Media::Capture::AppBroadcastProviderSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppBroadcastProviderSettings"; }
};

template <> struct traits<Windows::Media::Capture::AppBroadcastServices>
{
    using abi = ABI::Windows::Media::Capture::AppBroadcastServices;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppBroadcastServices"; }
};

template <> struct traits<Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppBroadcastSignInStateChangedEventArgs"; }
};

template <> struct traits<Windows::Media::Capture::AppBroadcastState>
{
    using abi = ABI::Windows::Media::Capture::AppBroadcastState;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppBroadcastState"; }
};

template <> struct traits<Windows::Media::Capture::AppBroadcastStreamAudioFrame>
{
    using abi = ABI::Windows::Media::Capture::AppBroadcastStreamAudioFrame;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppBroadcastStreamAudioFrame"; }
};

template <> struct traits<Windows::Media::Capture::AppBroadcastStreamAudioHeader>
{
    using abi = ABI::Windows::Media::Capture::AppBroadcastStreamAudioHeader;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppBroadcastStreamAudioHeader"; }
};

template <> struct traits<Windows::Media::Capture::AppBroadcastStreamReader>
{
    using abi = ABI::Windows::Media::Capture::AppBroadcastStreamReader;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppBroadcastStreamReader"; }
};

template <> struct traits<Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppBroadcastStreamStateChangedEventArgs"; }
};

template <> struct traits<Windows::Media::Capture::AppBroadcastStreamVideoFrame>
{
    using abi = ABI::Windows::Media::Capture::AppBroadcastStreamVideoFrame;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppBroadcastStreamVideoFrame"; }
};

template <> struct traits<Windows::Media::Capture::AppBroadcastStreamVideoHeader>
{
    using abi = ABI::Windows::Media::Capture::AppBroadcastStreamVideoHeader;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppBroadcastStreamVideoHeader"; }
};

template <> struct traits<Windows::Media::Capture::AppBroadcastTriggerDetails>
{
    using abi = ABI::Windows::Media::Capture::AppBroadcastTriggerDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppBroadcastTriggerDetails"; }
};

template <> struct traits<Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppBroadcastViewerCountChangedEventArgs"; }
};

template <> struct traits<Windows::Media::Capture::AppCapture>
{
    using abi = ABI::Windows::Media::Capture::AppCapture;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppCapture"; }
};

template <> struct traits<Windows::Media::Capture::AppCaptureAlternateShortcutKeys>
{
    using abi = ABI::Windows::Media::Capture::AppCaptureAlternateShortcutKeys;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppCaptureAlternateShortcutKeys"; }
};

template <> struct traits<Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppCaptureDurationGeneratedEventArgs"; }
};

template <> struct traits<Windows::Media::Capture::AppCaptureFileGeneratedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::AppCaptureFileGeneratedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppCaptureFileGeneratedEventArgs"; }
};

template <> struct traits<Windows::Media::Capture::AppCaptureManager>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppCaptureManager"; }
};

template <> struct traits<Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppCaptureMicrophoneCaptureStateChangedEventArgs"; }
};

template <> struct traits<Windows::Media::Capture::AppCaptureRecordOperation>
{
    using abi = ABI::Windows::Media::Capture::AppCaptureRecordOperation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppCaptureRecordOperation"; }
};

template <> struct traits<Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppCaptureRecordingStateChangedEventArgs"; }
};

template <> struct traits<Windows::Media::Capture::AppCaptureServices>
{
    using abi = ABI::Windows::Media::Capture::AppCaptureServices;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppCaptureServices"; }
};

template <> struct traits<Windows::Media::Capture::AppCaptureSettings>
{
    using abi = ABI::Windows::Media::Capture::AppCaptureSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppCaptureSettings"; }
};

template <> struct traits<Windows::Media::Capture::AppCaptureState>
{
    using abi = ABI::Windows::Media::Capture::AppCaptureState;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.AppCaptureState"; }
};

template <> struct traits<Windows::Media::Capture::CameraCaptureUI>
{
    using abi = ABI::Windows::Media::Capture::CameraCaptureUI;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.CameraCaptureUI"; }
};

template <> struct traits<Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings>
{
    using abi = ABI::Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.CameraCaptureUIPhotoCaptureSettings"; }
};

template <> struct traits<Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings>
{
    using abi = ABI::Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.CameraCaptureUIVideoCaptureSettings"; }
};

template <> struct traits<Windows::Media::Capture::CameraOptionsUI>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.CameraOptionsUI"; }
};

template <> struct traits<Windows::Media::Capture::CapturedFrame>
{
    using abi = ABI::Windows::Media::Capture::CapturedFrame;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.CapturedFrame"; }
};

template <> struct traits<Windows::Media::Capture::CapturedFrameControlValues>
{
    using abi = ABI::Windows::Media::Capture::CapturedFrameControlValues;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.CapturedFrameControlValues"; }
};

template <> struct traits<Windows::Media::Capture::CapturedPhoto>
{
    using abi = ABI::Windows::Media::Capture::CapturedPhoto;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.CapturedPhoto"; }
};

template <> struct traits<Windows::Media::Capture::GameBarServices>
{
    using abi = ABI::Windows::Media::Capture::GameBarServices;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.GameBarServices"; }
};

template <> struct traits<Windows::Media::Capture::GameBarServicesCommandEventArgs>
{
    using abi = ABI::Windows::Media::Capture::GameBarServicesCommandEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.GameBarServicesCommandEventArgs"; }
};

template <> struct traits<Windows::Media::Capture::GameBarServicesManager>
{
    using abi = ABI::Windows::Media::Capture::GameBarServicesManager;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.GameBarServicesManager"; }
};

template <> struct traits<Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.GameBarServicesManagerGameBarServicesCreatedEventArgs"; }
};

template <> struct traits<Windows::Media::Capture::GameBarServicesTargetInfo>
{
    using abi = ABI::Windows::Media::Capture::GameBarServicesTargetInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.GameBarServicesTargetInfo"; }
};

template <> struct traits<Windows::Media::Capture::LowLagMediaRecording>
{
    using abi = ABI::Windows::Media::Capture::LowLagMediaRecording;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.LowLagMediaRecording"; }
};

template <> struct traits<Windows::Media::Capture::LowLagPhotoCapture>
{
    using abi = ABI::Windows::Media::Capture::LowLagPhotoCapture;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.LowLagPhotoCapture"; }
};

template <> struct traits<Windows::Media::Capture::LowLagPhotoSequenceCapture>
{
    using abi = ABI::Windows::Media::Capture::LowLagPhotoSequenceCapture;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.LowLagPhotoSequenceCapture"; }
};

template <> struct traits<Windows::Media::Capture::MediaCapture>
{
    using abi = ABI::Windows::Media::Capture::MediaCapture;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.MediaCapture"; }
};

template <> struct traits<Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.MediaCaptureDeviceExclusiveControlStatusChangedEventArgs"; }
};

template <> struct traits<Windows::Media::Capture::MediaCaptureFailedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::MediaCaptureFailedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.MediaCaptureFailedEventArgs"; }
};

template <> struct traits<Windows::Media::Capture::MediaCaptureFocusChangedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::MediaCaptureFocusChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.MediaCaptureFocusChangedEventArgs"; }
};

template <> struct traits<Windows::Media::Capture::MediaCaptureInitializationSettings>
{
    using abi = ABI::Windows::Media::Capture::MediaCaptureInitializationSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.MediaCaptureInitializationSettings"; }
};

template <> struct traits<Windows::Media::Capture::MediaCapturePauseResult>
{
    using abi = ABI::Windows::Media::Capture::MediaCapturePauseResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.MediaCapturePauseResult"; }
};

template <> struct traits<Windows::Media::Capture::MediaCaptureSettings>
{
    using abi = ABI::Windows::Media::Capture::MediaCaptureSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.MediaCaptureSettings"; }
};

template <> struct traits<Windows::Media::Capture::MediaCaptureStopResult>
{
    using abi = ABI::Windows::Media::Capture::MediaCaptureStopResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.MediaCaptureStopResult"; }
};

template <> struct traits<Windows::Media::Capture::MediaCaptureVideoProfile>
{
    using abi = ABI::Windows::Media::Capture::MediaCaptureVideoProfile;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.MediaCaptureVideoProfile"; }
};

template <> struct traits<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>
{
    using abi = ABI::Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.MediaCaptureVideoProfileMediaDescription"; }
};

template <> struct traits<Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.OptionalReferencePhotoCapturedEventArgs"; }
};

template <> struct traits<Windows::Media::Capture::PhotoCapturedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::PhotoCapturedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.PhotoCapturedEventArgs"; }
};

template <> struct traits<Windows::Media::Capture::PhotoConfirmationCapturedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::PhotoConfirmationCapturedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.PhotoConfirmationCapturedEventArgs"; }
};

template <> struct traits<Windows::Media::Capture::ScreenCapture>
{
    using abi = ABI::Windows::Media::Capture::ScreenCapture;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.ScreenCapture"; }
};

template <> struct traits<Windows::Media::Capture::SourceSuspensionChangedEventArgs>
{
    using abi = ABI::Windows::Media::Capture::SourceSuspensionChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.SourceSuspensionChangedEventArgs"; }
};

template <> struct traits<Windows::Media::Capture::VideoStreamConfiguration>
{
    using abi = ABI::Windows::Media::Capture::VideoStreamConfiguration;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Capture.VideoStreamConfiguration"; }
};

}

}
