// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Media.Core.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Security.Authentication.Web.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.System.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Graphics.Imaging.3.h"
#include "internal/Windows.Storage.3.h"
#include "internal/Windows.Media.3.h"
#include "internal/Windows.Media.Capture.Frames.3.h"
#include "internal/Windows.Media.MediaProperties.3.h"
#include "internal/Windows.Media.Devices.3.h"
#include "internal/Windows.Media.Effects.3.h"
#include "internal/Windows.Media.Capture.3.h"
#include "Windows.Media.h"
#include "Windows.Foundation.h"
#include "Windows.Storage.Streams.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Media::Capture {

template <typename L> MediaCaptureFailedEventHandler::MediaCaptureFailedEventHandler(L lambda) :
    MediaCaptureFailedEventHandler(impl::make_delegate<impl_MediaCaptureFailedEventHandler<L>, MediaCaptureFailedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> MediaCaptureFailedEventHandler::MediaCaptureFailedEventHandler(F * function) :
    MediaCaptureFailedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> MediaCaptureFailedEventHandler::MediaCaptureFailedEventHandler(O * object, M method) :
    MediaCaptureFailedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void MediaCaptureFailedEventHandler::operator()(const Windows::Media::Capture::MediaCapture & sender, const Windows::Media::Capture::MediaCaptureFailedEventArgs & errorEventArgs) const
{
    check_hresult((*(abi<MediaCaptureFailedEventHandler> **)this)->abi_Invoke(get_abi(sender), get_abi(errorEventArgs)));
}

template <typename L> RecordLimitationExceededEventHandler::RecordLimitationExceededEventHandler(L lambda) :
    RecordLimitationExceededEventHandler(impl::make_delegate<impl_RecordLimitationExceededEventHandler<L>, RecordLimitationExceededEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> RecordLimitationExceededEventHandler::RecordLimitationExceededEventHandler(F * function) :
    RecordLimitationExceededEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> RecordLimitationExceededEventHandler::RecordLimitationExceededEventHandler(O * object, M method) :
    RecordLimitationExceededEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void RecordLimitationExceededEventHandler::operator()(const Windows::Media::Capture::MediaCapture & sender) const
{
    check_hresult((*(abi<RecordLimitationExceededEventHandler> **)this)->abi_Invoke(get_abi(sender)));
}

}

namespace impl {

template <typename D>
struct produce<D, Windows::Media::Capture::IAdvancedCapturedPhoto> : produce_base<D, Windows::Media::Capture::IAdvancedCapturedPhoto>
{
    HRESULT __stdcall get_Frame(impl::abi_arg_out<Windows::Media::Capture::ICapturedFrame> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Frame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mode(Windows::Media::Devices::AdvancedPhotoMode * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Context(impl::abi_arg_out<Windows::Foundation::IInspectable> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Context());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAdvancedCapturedPhoto2> : produce_base<D, Windows::Media::Capture::IAdvancedCapturedPhoto2>
{
    HRESULT __stdcall get_FrameBoundsRelativeToReferencePhoto(impl::abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::Rect>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FrameBoundsRelativeToReferencePhoto());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAdvancedPhotoCapture> : produce_base<D, Windows::Media::Capture::IAdvancedPhotoCapture>
{
    HRESULT __stdcall abi_CaptureAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CaptureAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CaptureWithContextAsync(impl::abi_arg_in<Windows::Foundation::IInspectable> context, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CaptureAsync(*reinterpret_cast<const Windows::Foundation::IInspectable *>(&context)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_OptionalReferencePhotoCaptured(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().OptionalReferencePhotoCaptured(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_OptionalReferencePhotoCaptured(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OptionalReferencePhotoCaptured(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AllPhotosCaptured(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Foundation::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AllPhotosCaptured(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Foundation::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AllPhotosCaptured(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllPhotosCaptured(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FinishAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FinishAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastBackgroundService> : produce_base<D, Windows::Media::Capture::IAppBroadcastBackgroundService>
{
    HRESULT __stdcall put_PlugInState(Windows::Media::Capture::AppBroadcastPlugInState value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlugInState(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PlugInState(Windows::Media::Capture::AppBroadcastPlugInState * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PlugInState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SignInInfo(impl::abi_arg_in<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SignInInfo(*reinterpret_cast<const Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SignInInfo(impl::abi_arg_out<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SignInInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StreamInfo(impl::abi_arg_in<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StreamInfo(*reinterpret_cast<const Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StreamInfo(impl::abi_arg_out<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StreamInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BroadcastTitle(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BroadcastTitle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ViewerCount(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ViewerCount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ViewerCount(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ViewerCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TerminateBroadcast(Windows::Media::Capture::AppBroadcastTerminationReason reason, uint32_t providerSpecificReason) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TerminateBroadcast(reason, providerSpecificReason);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_HeartbeatRequested(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().HeartbeatRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_HeartbeatRequested(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeartbeatRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TitleId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TitleId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo> : produce_base<D, Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo>
{
    HRESULT __stdcall get_SignInState(Windows::Media::Capture::AppBroadcastSignInState * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SignInState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OAuthRequestUri(impl::abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OAuthRequestUri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OAuthRequestUri(impl::abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OAuthRequestUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OAuthCallbackUri(impl::abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OAuthCallbackUri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OAuthCallbackUri(impl::abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OAuthCallbackUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AuthenticationResult(impl::abi_arg_out<Windows::Security::Authentication::Web::IWebAuthenticationResult> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AuthenticationResult());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UserName(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserName(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UserName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SignInStateChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo, Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SignInStateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo, Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SignInStateChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SignInStateChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo> : produce_base<D, Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>
{
    HRESULT __stdcall get_StreamState(Windows::Media::Capture::AppBroadcastStreamState * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StreamState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredVideoEncodingBitrate(uint64_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredVideoEncodingBitrate(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredVideoEncodingBitrate(uint64_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DesiredVideoEncodingBitrate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BandwidthTestBitrate(uint64_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BandwidthTestBitrate(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BandwidthTestBitrate(uint64_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BandwidthTestBitrate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AudioCodec(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioCodec(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioCodec(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioCodec());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BroadcastStreamReader(impl::abi_arg_out<Windows::Media::Capture::IAppBroadcastStreamReader> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BroadcastStreamReader());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StreamStateChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().StreamStateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StreamStateChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StreamStateChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_VideoEncodingResolutionChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().VideoEncodingResolutionChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_VideoEncodingResolutionChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoEncodingResolutionChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_VideoEncodingBitrateChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().VideoEncodingBitrateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_VideoEncodingBitrateChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoEncodingBitrateChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs> : produce_base<D, Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs>
{
    HRESULT __stdcall get_State(Windows::Media::Capture::AppBroadcastCameraCaptureState * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastGlobalSettings> : produce_base<D, Windows::Media::Capture::IAppBroadcastGlobalSettings>
{
    HRESULT __stdcall get_IsBroadcastEnabled(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsBroadcastEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDisabledByPolicy(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDisabledByPolicy());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsGpuConstrained(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsGpuConstrained());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasHardwareEncoder(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasHardwareEncoder());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsAudioCaptureEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsAudioCaptureEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsAudioCaptureEnabled(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsAudioCaptureEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsMicrophoneCaptureEnabledByDefault(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsMicrophoneCaptureEnabledByDefault(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsMicrophoneCaptureEnabledByDefault(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsMicrophoneCaptureEnabledByDefault());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsEchoCancellationEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsEchoCancellationEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsEchoCancellationEnabled(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsEchoCancellationEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SystemAudioGain(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SystemAudioGain(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemAudioGain(double * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SystemAudioGain());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MicrophoneGain(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MicrophoneGain(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MicrophoneGain(double * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MicrophoneGain());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsCameraCaptureEnabledByDefault(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsCameraCaptureEnabledByDefault(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCameraCaptureEnabledByDefault(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCameraCaptureEnabledByDefault());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedCameraId(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectedCameraId(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedCameraId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SelectedCameraId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CameraOverlayLocation(Windows::Media::Capture::AppBroadcastCameraOverlayLocation value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraOverlayLocation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CameraOverlayLocation(Windows::Media::Capture::AppBroadcastCameraOverlayLocation * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CameraOverlayLocation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CameraOverlaySize(Windows::Media::Capture::AppBroadcastCameraOverlaySize value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraOverlaySize(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CameraOverlaySize(Windows::Media::Capture::AppBroadcastCameraOverlaySize * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CameraOverlaySize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsCursorImageCaptureEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsCursorImageCaptureEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCursorImageCaptureEnabled(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCursorImageCaptureEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs> : produce_base<D, Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs>
{
    HRESULT __stdcall put_Handled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Handled(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastManagerStatics> : produce_base<D, Windows::Media::Capture::IAppBroadcastManagerStatics>
{
    HRESULT __stdcall abi_GetGlobalSettings(impl::abi_arg_out<Windows::Media::Capture::IAppBroadcastGlobalSettings> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetGlobalSettings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ApplyGlobalSettings(impl::abi_arg_in<Windows::Media::Capture::IAppBroadcastGlobalSettings> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ApplyGlobalSettings(*reinterpret_cast<const Windows::Media::Capture::AppBroadcastGlobalSettings *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetProviderSettings(impl::abi_arg_out<Windows::Media::Capture::IAppBroadcastProviderSettings> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetProviderSettings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ApplyProviderSettings(impl::abi_arg_in<Windows::Media::Capture::IAppBroadcastProviderSettings> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ApplyProviderSettings(*reinterpret_cast<const Windows::Media::Capture::AppBroadcastProviderSettings *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs> : produce_base<D, Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs>
{
    HRESULT __stdcall get_State(Windows::Media::Capture::AppBroadcastMicrophoneCaptureState * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastPlugIn> : produce_base<D, Windows::Media::Capture::IAppBroadcastPlugIn>
{
    HRESULT __stdcall get_AppId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProviderSettings(impl::abi_arg_out<Windows::Media::Capture::IAppBroadcastProviderSettings> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProviderSettings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Logo(impl::abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Logo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastPlugInManager> : produce_base<D, Windows::Media::Capture::IAppBroadcastPlugInManager>
{
    HRESULT __stdcall get_IsBroadcastProviderAvailable(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsBroadcastProviderAvailable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PlugInList(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::AppBroadcastPlugIn>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PlugInList());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultPlugIn(impl::abi_arg_out<Windows::Media::Capture::IAppBroadcastPlugIn> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DefaultPlugIn());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultPlugIn(impl::abi_arg_in<Windows::Media::Capture::IAppBroadcastPlugIn> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultPlugIn(*reinterpret_cast<const Windows::Media::Capture::AppBroadcastPlugIn *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastPlugInManagerStatics> : produce_base<D, Windows::Media::Capture::IAppBroadcastPlugInManagerStatics>
{
    HRESULT __stdcall abi_GetDefault(impl::abi_arg_out<Windows::Media::Capture::IAppBroadcastPlugInManager> ppInstance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppInstance = detach_abi(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            *ppInstance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetForUser(impl::abi_arg_in<Windows::System::IUser> user, impl::abi_arg_out<Windows::Media::Capture::IAppBroadcastPlugInManager> ppInstance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppInstance = detach_abi(this->shim().GetForUser(*reinterpret_cast<const Windows::System::User *>(&user)));
            return S_OK;
        }
        catch (...)
        {
            *ppInstance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs> : produce_base<D, Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs>
{
    HRESULT __stdcall get_PlugInState(Windows::Media::Capture::AppBroadcastPlugInState * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PlugInState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastPreview> : produce_base<D, Windows::Media::Capture::IAppBroadcastPreview>
{
    HRESULT __stdcall abi_StopPreview() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopPreview();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreviewState(Windows::Media::Capture::AppBroadcastPreviewState * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PreviewState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(impl::abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PreviewStateChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreview, Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PreviewStateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreview, Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PreviewStateChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PreviewStateChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreviewStreamReader(impl::abi_arg_out<Windows::Media::Capture::IAppBroadcastPreviewStreamReader> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PreviewStreamReader());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs> : produce_base<D, Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs>
{
    HRESULT __stdcall get_PreviewState(Windows::Media::Capture::AppBroadcastPreviewState * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PreviewState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastPreviewStreamReader> : produce_base<D, Windows::Media::Capture::IAppBroadcastPreviewStreamReader>
{
    HRESULT __stdcall get_VideoWidth(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoHeight(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoStride(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoStride());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoBitmapPixelFormat(Windows::Graphics::Imaging::BitmapPixelFormat * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoBitmapPixelFormat());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoBitmapAlphaMode(Windows::Graphics::Imaging::BitmapAlphaMode * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoBitmapAlphaMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetNextVideoFrame(impl::abi_arg_out<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame> frame) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *frame = detach_abi(this->shim().TryGetNextVideoFrame());
            return S_OK;
        }
        catch (...)
        {
            *frame = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_VideoFrameArrived(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreviewStreamReader, Windows::Foundation::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().VideoFrameArrived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreviewStreamReader, Windows::Foundation::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_VideoFrameArrived(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoFrameArrived(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame> : produce_base<D, Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame>
{
    HRESULT __stdcall get_VideoHeader(impl::abi_arg_out<Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoHeader());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoBuffer(impl::abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoBuffer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader> : produce_base<D, Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader>
{
    HRESULT __stdcall get_AbsoluteTimestamp(impl::abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AbsoluteTimestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RelativeTimestamp(impl::abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RelativeTimestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(impl::abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrameId(uint64_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FrameId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastProviderSettings> : produce_base<D, Windows::Media::Capture::IAppBroadcastProviderSettings>
{
    HRESULT __stdcall put_DefaultBroadcastTitle(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultBroadcastTitle(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultBroadcastTitle(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DefaultBroadcastTitle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AudioEncodingBitrate(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioEncodingBitrate(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioEncodingBitrate(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioEncodingBitrate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CustomVideoEncodingBitrate(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CustomVideoEncodingBitrate(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomVideoEncodingBitrate(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CustomVideoEncodingBitrate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CustomVideoEncodingHeight(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CustomVideoEncodingHeight(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomVideoEncodingHeight(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CustomVideoEncodingHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CustomVideoEncodingWidth(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CustomVideoEncodingWidth(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomVideoEncodingWidth(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CustomVideoEncodingWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VideoEncodingBitrateMode(Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoEncodingBitrateMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoEncodingBitrateMode(Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoEncodingBitrateMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VideoEncodingResolutionMode(Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoEncodingResolutionMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoEncodingResolutionMode(Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoEncodingResolutionMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastServices> : produce_base<D, Windows::Media::Capture::IAppBroadcastServices>
{
    HRESULT __stdcall get_CaptureTargetType(Windows::Media::Capture::AppBroadcastCaptureTargetType * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CaptureTargetType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CaptureTargetType(Windows::Media::Capture::AppBroadcastCaptureTargetType value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CaptureTargetType(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BroadcastTitle(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BroadcastTitle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BroadcastTitle(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BroadcastTitle(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BroadcastLanguage(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BroadcastLanguage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BroadcastLanguage(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BroadcastLanguage(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserName(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UserName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanCapture(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanCapture());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EnterBroadcastModeAsync(impl::abi_arg_in<Windows::Media::Capture::IAppBroadcastPlugIn> plugIn, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<uint32_t>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().EnterBroadcastModeAsync(*reinterpret_cast<const Windows::Media::Capture::AppBroadcastPlugIn *>(&plugIn)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ExitBroadcastMode(Windows::Media::Capture::AppBroadcastExitBroadcastModeReason reason) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExitBroadcastMode(reason);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartBroadcast() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartBroadcast();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PauseBroadcast() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PauseBroadcast();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ResumeBroadcast() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResumeBroadcast();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartPreview(impl::abi_arg_in<Windows::Foundation::Size> desiredSize, impl::abi_arg_out<Windows::Media::Capture::IAppBroadcastPreview> preview) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *preview = detach_abi(this->shim().StartPreview(*reinterpret_cast<const Windows::Foundation::Size *>(&desiredSize)));
            return S_OK;
        }
        catch (...)
        {
            *preview = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_State(impl::abi_arg_out<Windows::Media::Capture::IAppBroadcastState> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs> : produce_base<D, Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs>
{
    HRESULT __stdcall get_SignInState(Windows::Media::Capture::AppBroadcastSignInState * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SignInState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Result(Windows::Media::Capture::AppBroadcastSignInResult * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Result());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastState> : produce_base<D, Windows::Media::Capture::IAppBroadcastState>
{
    HRESULT __stdcall get_IsCaptureTargetRunning(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCaptureTargetRunning());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ViewerCount(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ViewerCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShouldCaptureMicrophone(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShouldCaptureMicrophone());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ShouldCaptureMicrophone(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShouldCaptureMicrophone(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RestartMicrophoneCapture() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RestartMicrophoneCapture();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShouldCaptureCamera(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShouldCaptureCamera());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ShouldCaptureCamera(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShouldCaptureCamera(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RestartCameraCapture() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RestartCameraCapture();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EncodedVideoSize(impl::abi_arg_out<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EncodedVideoSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MicrophoneCaptureState(Windows::Media::Capture::AppBroadcastMicrophoneCaptureState * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MicrophoneCaptureState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MicrophoneCaptureError(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MicrophoneCaptureError());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CameraCaptureState(Windows::Media::Capture::AppBroadcastCameraCaptureState * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CameraCaptureState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CameraCaptureError(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CameraCaptureError());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StreamState(Windows::Media::Capture::AppBroadcastStreamState * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StreamState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PlugInState(Windows::Media::Capture::AppBroadcastPlugInState * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PlugInState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OAuthRequestUri(impl::abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OAuthRequestUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OAuthCallbackUri(impl::abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OAuthCallbackUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AuthenticationResult(impl::abi_arg_out<Windows::Security::Authentication::Web::IWebAuthenticationResult> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AuthenticationResult());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AuthenticationResult(impl::abi_arg_in<Windows::Security::Authentication::Web::IWebAuthenticationResult> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AuthenticationResult(*reinterpret_cast<const Windows::Security::Authentication::Web::WebAuthenticationResult *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SignInState(Windows::Media::Capture::AppBroadcastSignInState value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SignInState(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SignInState(Windows::Media::Capture::AppBroadcastSignInState * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SignInState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TerminationReason(Windows::Media::Capture::AppBroadcastTerminationReason * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TerminationReason());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TerminationReasonPlugInSpecific(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TerminationReasonPlugInSpecific());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ViewerCountChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ViewerCountChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ViewerCountChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ViewerCountChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MicrophoneCaptureStateChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().MicrophoneCaptureStateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MicrophoneCaptureStateChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MicrophoneCaptureStateChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CameraCaptureStateChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CameraCaptureStateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CameraCaptureStateChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraCaptureStateChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PlugInStateChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PlugInStateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PlugInStateChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlugInStateChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StreamStateChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().StreamStateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StreamStateChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StreamStateChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CaptureTargetClosed(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Foundation::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CaptureTargetClosed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Foundation::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CaptureTargetClosed(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CaptureTargetClosed(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastStreamAudioFrame> : produce_base<D, Windows::Media::Capture::IAppBroadcastStreamAudioFrame>
{
    HRESULT __stdcall get_AudioHeader(impl::abi_arg_out<Windows::Media::Capture::IAppBroadcastStreamAudioHeader> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioHeader());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioBuffer(impl::abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioBuffer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastStreamAudioHeader> : produce_base<D, Windows::Media::Capture::IAppBroadcastStreamAudioHeader>
{
    HRESULT __stdcall get_AbsoluteTimestamp(impl::abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AbsoluteTimestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RelativeTimestamp(impl::abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RelativeTimestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(impl::abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasDiscontinuity(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasDiscontinuity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrameId(uint64_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FrameId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastStreamReader> : produce_base<D, Windows::Media::Capture::IAppBroadcastStreamReader>
{
    HRESULT __stdcall get_AudioChannels(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioChannels());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioSampleRate(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioSampleRate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioAacSequence(impl::abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioAacSequence());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioBitrate(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioBitrate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetNextAudioFrame(impl::abi_arg_out<Windows::Media::Capture::IAppBroadcastStreamAudioFrame> frame) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *frame = detach_abi(this->shim().TryGetNextAudioFrame());
            return S_OK;
        }
        catch (...)
        {
            *frame = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoWidth(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoHeight(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoBitrate(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoBitrate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetNextVideoFrame(impl::abi_arg_out<Windows::Media::Capture::IAppBroadcastStreamVideoFrame> frame) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *frame = detach_abi(this->shim().TryGetNextVideoFrame());
            return S_OK;
        }
        catch (...)
        {
            *frame = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AudioFrameArrived(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AudioFrameArrived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AudioFrameArrived(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioFrameArrived(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_VideoFrameArrived(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().VideoFrameArrived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_VideoFrameArrived(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoFrameArrived(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs> : produce_base<D, Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs>
{
    HRESULT __stdcall get_StreamState(Windows::Media::Capture::AppBroadcastStreamState * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StreamState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastStreamVideoFrame> : produce_base<D, Windows::Media::Capture::IAppBroadcastStreamVideoFrame>
{
    HRESULT __stdcall get_VideoHeader(impl::abi_arg_out<Windows::Media::Capture::IAppBroadcastStreamVideoHeader> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoHeader());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoBuffer(impl::abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoBuffer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastStreamVideoHeader> : produce_base<D, Windows::Media::Capture::IAppBroadcastStreamVideoHeader>
{
    HRESULT __stdcall get_AbsoluteTimestamp(impl::abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AbsoluteTimestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RelativeTimestamp(impl::abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RelativeTimestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(impl::abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsKeyFrame(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsKeyFrame());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasDiscontinuity(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasDiscontinuity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrameId(uint64_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FrameId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastTriggerDetails> : produce_base<D, Windows::Media::Capture::IAppBroadcastTriggerDetails>
{
    HRESULT __stdcall get_BackgroundService(impl::abi_arg_out<Windows::Media::Capture::IAppBroadcastBackgroundService> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BackgroundService());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs> : produce_base<D, Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs>
{
    HRESULT __stdcall get_ViewerCount(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ViewerCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCapture> : produce_base<D, Windows::Media::Capture::IAppCapture>
{
    HRESULT __stdcall get_IsCapturingAudio(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCapturingAudio());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCapturingVideo(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCapturingVideo());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CapturingChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCapture, Windows::Foundation::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CapturingChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCapture, Windows::Foundation::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CapturingChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CapturingChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureAlternateShortcutKeys> : produce_base<D, Windows::Media::Capture::IAppCaptureAlternateShortcutKeys>
{
    HRESULT __stdcall put_ToggleGameBarKey(Windows::System::VirtualKey value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ToggleGameBarKey(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToggleGameBarKey(Windows::System::VirtualKey * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ToggleGameBarKey());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ToggleGameBarKeyModifiers(Windows::System::VirtualKeyModifiers value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ToggleGameBarKeyModifiers(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToggleGameBarKeyModifiers(Windows::System::VirtualKeyModifiers * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ToggleGameBarKeyModifiers());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SaveHistoricalVideoKey(Windows::System::VirtualKey value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SaveHistoricalVideoKey(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SaveHistoricalVideoKey(Windows::System::VirtualKey * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SaveHistoricalVideoKey());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SaveHistoricalVideoKeyModifiers(Windows::System::VirtualKeyModifiers value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SaveHistoricalVideoKeyModifiers(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SaveHistoricalVideoKeyModifiers(Windows::System::VirtualKeyModifiers * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SaveHistoricalVideoKeyModifiers());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ToggleRecordingKey(Windows::System::VirtualKey value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ToggleRecordingKey(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToggleRecordingKey(Windows::System::VirtualKey * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ToggleRecordingKey());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ToggleRecordingKeyModifiers(Windows::System::VirtualKeyModifiers value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ToggleRecordingKeyModifiers(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToggleRecordingKeyModifiers(Windows::System::VirtualKeyModifiers * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ToggleRecordingKeyModifiers());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TakeScreenshotKey(Windows::System::VirtualKey value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TakeScreenshotKey(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TakeScreenshotKey(Windows::System::VirtualKey * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TakeScreenshotKey());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TakeScreenshotKeyModifiers(Windows::System::VirtualKeyModifiers value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TakeScreenshotKeyModifiers(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TakeScreenshotKeyModifiers(Windows::System::VirtualKeyModifiers * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TakeScreenshotKeyModifiers());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ToggleRecordingIndicatorKey(Windows::System::VirtualKey value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ToggleRecordingIndicatorKey(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToggleRecordingIndicatorKey(Windows::System::VirtualKey * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ToggleRecordingIndicatorKey());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ToggleRecordingIndicatorKeyModifiers(Windows::System::VirtualKeyModifiers value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ToggleRecordingIndicatorKeyModifiers(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToggleRecordingIndicatorKeyModifiers(Windows::System::VirtualKeyModifiers * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ToggleRecordingIndicatorKeyModifiers());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2> : produce_base<D, Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2>
{
    HRESULT __stdcall put_ToggleMicrophoneCaptureKey(Windows::System::VirtualKey value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ToggleMicrophoneCaptureKey(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToggleMicrophoneCaptureKey(Windows::System::VirtualKey * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ToggleMicrophoneCaptureKey());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ToggleMicrophoneCaptureKeyModifiers(Windows::System::VirtualKeyModifiers value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ToggleMicrophoneCaptureKeyModifiers(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToggleMicrophoneCaptureKeyModifiers(Windows::System::VirtualKeyModifiers * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ToggleMicrophoneCaptureKeyModifiers());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3> : produce_base<D, Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3>
{
    HRESULT __stdcall put_ToggleCameraCaptureKey(Windows::System::VirtualKey value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ToggleCameraCaptureKey(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToggleCameraCaptureKey(Windows::System::VirtualKey * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ToggleCameraCaptureKey());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ToggleCameraCaptureKeyModifiers(Windows::System::VirtualKeyModifiers value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ToggleCameraCaptureKeyModifiers(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToggleCameraCaptureKeyModifiers(Windows::System::VirtualKeyModifiers * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ToggleCameraCaptureKeyModifiers());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ToggleBroadcastKey(Windows::System::VirtualKey value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ToggleBroadcastKey(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToggleBroadcastKey(Windows::System::VirtualKey * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ToggleBroadcastKey());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ToggleBroadcastKeyModifiers(Windows::System::VirtualKeyModifiers value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ToggleBroadcastKeyModifiers(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ToggleBroadcastKeyModifiers(Windows::System::VirtualKeyModifiers * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ToggleBroadcastKeyModifiers());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs> : produce_base<D, Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs>
{
    HRESULT __stdcall get_Duration(impl::abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs> : produce_base<D, Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs>
{
    HRESULT __stdcall get_File(impl::abi_arg_out<Windows::Storage::IStorageFile> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().File());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureManagerStatics> : produce_base<D, Windows::Media::Capture::IAppCaptureManagerStatics>
{
    HRESULT __stdcall abi_GetCurrentSettings(impl::abi_arg_out<Windows::Media::Capture::IAppCaptureSettings> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCurrentSettings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ApplySettings(impl::abi_arg_in<Windows::Media::Capture::IAppCaptureSettings> appCaptureSettings) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ApplySettings(*reinterpret_cast<const Windows::Media::Capture::AppCaptureSettings *>(&appCaptureSettings));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs> : produce_base<D, Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs>
{
    HRESULT __stdcall get_State(Windows::Media::Capture::AppCaptureMicrophoneCaptureState * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureRecordOperation> : produce_base<D, Windows::Media::Capture::IAppCaptureRecordOperation>
{
    HRESULT __stdcall abi_StopRecording() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopRecording();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_State(Windows::Media::Capture::AppCaptureRecordingState * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(impl::abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(impl::abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_File(impl::abi_arg_out<Windows::Storage::IStorageFile> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().File());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsFileTruncated(impl::abi_arg_out<Windows::Foundation::IReference<bool>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsFileTruncated());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StateChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().StateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StateChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StateChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DurationGenerated(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DurationGenerated(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DurationGenerated(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DurationGenerated(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_FileGenerated(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureFileGeneratedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().FileGenerated(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureFileGeneratedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_FileGenerated(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FileGenerated(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs> : produce_base<D, Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs>
{
    HRESULT __stdcall get_State(Windows::Media::Capture::AppCaptureRecordingState * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureServices> : produce_base<D, Windows::Media::Capture::IAppCaptureServices>
{
    HRESULT __stdcall abi_Record(impl::abi_arg_out<Windows::Media::Capture::IAppCaptureRecordOperation> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().Record());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RecordTimeSpan(impl::abi_arg_in<Windows::Foundation::DateTime> startTime, impl::abi_arg_in<Windows::Foundation::TimeSpan> duration, impl::abi_arg_out<Windows::Media::Capture::IAppCaptureRecordOperation> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RecordTimeSpan(*reinterpret_cast<const Windows::Foundation::DateTime *>(&startTime), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&duration)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanCapture(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanCapture());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_State(impl::abi_arg_out<Windows::Media::Capture::IAppCaptureState> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureSettings> : produce_base<D, Windows::Media::Capture::IAppCaptureSettings>
{
    HRESULT __stdcall put_AppCaptureDestinationFolder(impl::abi_arg_in<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppCaptureDestinationFolder(*reinterpret_cast<const Windows::Storage::StorageFolder *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppCaptureDestinationFolder(impl::abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppCaptureDestinationFolder());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AudioEncodingBitrate(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioEncodingBitrate(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioEncodingBitrate(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioEncodingBitrate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsAudioCaptureEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsAudioCaptureEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsAudioCaptureEnabled(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsAudioCaptureEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CustomVideoEncodingBitrate(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CustomVideoEncodingBitrate(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomVideoEncodingBitrate(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CustomVideoEncodingBitrate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CustomVideoEncodingHeight(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CustomVideoEncodingHeight(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomVideoEncodingHeight(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CustomVideoEncodingHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CustomVideoEncodingWidth(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CustomVideoEncodingWidth(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomVideoEncodingWidth(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CustomVideoEncodingWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HistoricalBufferLength(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HistoricalBufferLength(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HistoricalBufferLength(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HistoricalBufferLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HistoricalBufferLengthUnit(Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HistoricalBufferLengthUnit(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HistoricalBufferLengthUnit(Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HistoricalBufferLengthUnit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsHistoricalCaptureEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsHistoricalCaptureEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsHistoricalCaptureEnabled(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsHistoricalCaptureEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsHistoricalCaptureOnBatteryAllowed(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsHistoricalCaptureOnBatteryAllowed(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsHistoricalCaptureOnBatteryAllowed(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsHistoricalCaptureOnBatteryAllowed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsHistoricalCaptureOnWirelessDisplayAllowed(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsHistoricalCaptureOnWirelessDisplayAllowed(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsHistoricalCaptureOnWirelessDisplayAllowed(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsHistoricalCaptureOnWirelessDisplayAllowed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaximumRecordLength(impl::abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaximumRecordLength(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaximumRecordLength(impl::abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaximumRecordLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ScreenshotDestinationFolder(impl::abi_arg_in<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScreenshotDestinationFolder(*reinterpret_cast<const Windows::Storage::StorageFolder *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScreenshotDestinationFolder(impl::abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScreenshotDestinationFolder());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VideoEncodingBitrateMode(Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoEncodingBitrateMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoEncodingBitrateMode(Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoEncodingBitrateMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VideoEncodingResolutionMode(Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoEncodingResolutionMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoEncodingResolutionMode(Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoEncodingResolutionMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsAppCaptureEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsAppCaptureEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsAppCaptureEnabled(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsAppCaptureEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCpuConstrained(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCpuConstrained());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDisabledByPolicy(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDisabledByPolicy());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsMemoryConstrained(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsMemoryConstrained());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasHardwareEncoder(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasHardwareEncoder());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureSettings2> : produce_base<D, Windows::Media::Capture::IAppCaptureSettings2>
{
    HRESULT __stdcall get_IsGpuConstrained(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsGpuConstrained());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlternateShortcutKeys(impl::abi_arg_out<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlternateShortcutKeys());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureSettings3> : produce_base<D, Windows::Media::Capture::IAppCaptureSettings3>
{
    HRESULT __stdcall put_IsMicrophoneCaptureEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsMicrophoneCaptureEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsMicrophoneCaptureEnabled(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsMicrophoneCaptureEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureSettings4> : produce_base<D, Windows::Media::Capture::IAppCaptureSettings4>
{
    HRESULT __stdcall put_IsMicrophoneCaptureEnabledByDefault(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsMicrophoneCaptureEnabledByDefault(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsMicrophoneCaptureEnabledByDefault(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsMicrophoneCaptureEnabledByDefault());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SystemAudioGain(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SystemAudioGain(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemAudioGain(double * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SystemAudioGain());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MicrophoneGain(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MicrophoneGain(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MicrophoneGain(double * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MicrophoneGain());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VideoEncodingFrameRateMode(Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoEncodingFrameRateMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoEncodingFrameRateMode(Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoEncodingFrameRateMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureSettings5> : produce_base<D, Windows::Media::Capture::IAppCaptureSettings5>
{
    HRESULT __stdcall put_IsEchoCancellationEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsEchoCancellationEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsEchoCancellationEnabled(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsEchoCancellationEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsCursorImageCaptureEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsCursorImageCaptureEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCursorImageCaptureEnabled(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCursorImageCaptureEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureState> : produce_base<D, Windows::Media::Capture::IAppCaptureState>
{
    HRESULT __stdcall get_IsTargetRunning(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsTargetRunning());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsHistoricalCaptureEnabled(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsHistoricalCaptureEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShouldCaptureMicrophone(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShouldCaptureMicrophone());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ShouldCaptureMicrophone(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShouldCaptureMicrophone(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RestartMicrophoneCapture() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RestartMicrophoneCapture();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MicrophoneCaptureState(Windows::Media::Capture::AppCaptureMicrophoneCaptureState * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MicrophoneCaptureState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MicrophoneCaptureError(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MicrophoneCaptureError());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MicrophoneCaptureStateChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().MicrophoneCaptureStateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MicrophoneCaptureStateChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MicrophoneCaptureStateChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CaptureTargetClosed(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Foundation::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CaptureTargetClosed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Foundation::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CaptureTargetClosed(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CaptureTargetClosed(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureStatics> : produce_base<D, Windows::Media::Capture::IAppCaptureStatics>
{
    HRESULT __stdcall abi_GetForCurrentView(impl::abi_arg_out<Windows::Media::Capture::IAppCapture> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ICameraCaptureUI> : produce_base<D, Windows::Media::Capture::ICameraCaptureUI>
{
    HRESULT __stdcall get_PhotoSettings(impl::abi_arg_out<Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhotoSettings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoSettings(impl::abi_arg_out<Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoSettings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CaptureFileAsync(Windows::Media::Capture::CameraCaptureUIMode mode, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>> asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().CaptureFileAsync(mode));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings> : produce_base<D, Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings>
{
    HRESULT __stdcall get_Format(Windows::Media::Capture::CameraCaptureUIPhotoFormat * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Format());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Format(Windows::Media::Capture::CameraCaptureUIPhotoFormat value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Format(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxResolution());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxResolution(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CroppedSizeInPixels(impl::abi_arg_out<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CroppedSizeInPixels());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CroppedSizeInPixels(impl::abi_arg_in<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CroppedSizeInPixels(*reinterpret_cast<const Windows::Foundation::Size *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CroppedAspectRatio(impl::abi_arg_out<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CroppedAspectRatio());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CroppedAspectRatio(impl::abi_arg_in<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CroppedAspectRatio(*reinterpret_cast<const Windows::Foundation::Size *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowCropping(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AllowCropping());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllowCropping(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowCropping(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings> : produce_base<D, Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings>
{
    HRESULT __stdcall get_Format(Windows::Media::Capture::CameraCaptureUIVideoFormat * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Format());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Format(Windows::Media::Capture::CameraCaptureUIVideoFormat value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Format(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxVideoResolution * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxResolution());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxVideoResolution value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxResolution(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxDurationInSeconds(float * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxDurationInSeconds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxDurationInSeconds(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxDurationInSeconds(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowTrimming(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AllowTrimming());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllowTrimming(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowTrimming(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ICameraOptionsUIStatics> : produce_base<D, Windows::Media::Capture::ICameraOptionsUIStatics>
{
    HRESULT __stdcall abi_Show(impl::abi_arg_in<Windows::Media::Capture::IMediaCapture> mediaCapture) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Show(*reinterpret_cast<const Windows::Media::Capture::MediaCapture *>(&mediaCapture));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ICapturedFrame> : produce_base<D, Windows::Media::Capture::ICapturedFrame>
{
    HRESULT __stdcall get_Width(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Width());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Height(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Height());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ICapturedFrameControlValues> : produce_base<D, Windows::Media::Capture::ICapturedFrameControlValues>
{
    HRESULT __stdcall get_Exposure(impl::abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Exposure());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExposureCompensation(impl::abi_arg_out<Windows::Foundation::IReference<float>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExposureCompensation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsoSpeed(impl::abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsoSpeed());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Focus(impl::abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Focus());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SceneMode(impl::abi_arg_out<Windows::Foundation::IReference<winrt::Windows::Media::Devices::CaptureSceneMode>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SceneMode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Flashed(impl::abi_arg_out<Windows::Foundation::IReference<bool>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Flashed());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FlashPowerPercent(impl::abi_arg_out<Windows::Foundation::IReference<float>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FlashPowerPercent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WhiteBalance(impl::abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WhiteBalance());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZoomFactor(impl::abi_arg_out<Windows::Foundation::IReference<float>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ZoomFactor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ICapturedFrameControlValues2> : produce_base<D, Windows::Media::Capture::ICapturedFrameControlValues2>
{
    HRESULT __stdcall get_FocusState(impl::abi_arg_out<Windows::Foundation::IReference<winrt::Windows::Media::Devices::MediaCaptureFocusState>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FocusState());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsoDigitalGain(impl::abi_arg_out<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsoDigitalGain());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsoAnalogGain(impl::abi_arg_out<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsoAnalogGain());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SensorFrameRate(impl::abi_arg_out<Windows::Media::MediaProperties::IMediaRatio> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SensorFrameRate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WhiteBalanceGain(impl::abi_arg_out<Windows::Foundation::IReference<Windows::Media::Capture::WhiteBalanceGain>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WhiteBalanceGain());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap> : produce_base<D, Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap>
{
    HRESULT __stdcall get_SoftwareBitmap(impl::abi_arg_out<Windows::Graphics::Imaging::ISoftwareBitmap> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SoftwareBitmap());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ICapturedPhoto> : produce_base<D, Windows::Media::Capture::ICapturedPhoto>
{
    HRESULT __stdcall get_Frame(impl::abi_arg_out<Windows::Media::Capture::ICapturedFrame> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Frame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnail(impl::abi_arg_out<Windows::Media::Capture::ICapturedFrame> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Thumbnail());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IGameBarServices> : produce_base<D, Windows::Media::Capture::IGameBarServices>
{
    HRESULT __stdcall get_TargetCapturePolicy(Windows::Media::Capture::GameBarTargetCapturePolicy * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetCapturePolicy());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EnableCapture() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnableCapture();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DisableCapture() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisableCapture();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TargetInfo(impl::abi_arg_out<Windows::Media::Capture::IGameBarServicesTargetInfo> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TargetInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SessionId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SessionId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppBroadcastServices(impl::abi_arg_out<Windows::Media::Capture::IAppBroadcastServices> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppBroadcastServices());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppCaptureServices(impl::abi_arg_out<Windows::Media::Capture::IAppCaptureServices> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppCaptureServices());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CommandReceived(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServices, Windows::Media::Capture::GameBarServicesCommandEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CommandReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServices, Windows::Media::Capture::GameBarServicesCommandEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CommandReceived(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CommandReceived(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IGameBarServicesCommandEventArgs> : produce_base<D, Windows::Media::Capture::IGameBarServicesCommandEventArgs>
{
    HRESULT __stdcall get_Command(Windows::Media::Capture::GameBarCommand * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Command());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Origin(Windows::Media::Capture::GameBarCommandOrigin * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Origin());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IGameBarServicesManager> : produce_base<D, Windows::Media::Capture::IGameBarServicesManager>
{
    HRESULT __stdcall add_GameBarServicesCreated(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServicesManager, Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().GameBarServicesCreated(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServicesManager, Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_GameBarServicesCreated(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GameBarServicesCreated(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs> : produce_base<D, Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs>
{
    HRESULT __stdcall get_GameBarServices(impl::abi_arg_out<Windows::Media::Capture::IGameBarServices> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GameBarServices());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IGameBarServicesManagerStatics> : produce_base<D, Windows::Media::Capture::IGameBarServicesManagerStatics>
{
    HRESULT __stdcall abi_GetDefault(impl::abi_arg_out<Windows::Media::Capture::IGameBarServicesManager> ppInstance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppInstance = detach_abi(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            *ppInstance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IGameBarServicesTargetInfo> : produce_base<D, Windows::Media::Capture::IGameBarServicesTargetInfo>
{
    HRESULT __stdcall get_DisplayName(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TitleId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TitleId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayMode(Windows::Media::Capture::GameBarServicesDisplayMode * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ILowLagMediaRecording> : produce_base<D, Windows::Media::Capture::ILowLagMediaRecording>
{
    HRESULT __stdcall abi_StartAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StartAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StopAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FinishAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FinishAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ILowLagMediaRecording2> : produce_base<D, Windows::Media::Capture::ILowLagMediaRecording2>
{
    HRESULT __stdcall abi_PauseAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior, impl::abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PauseAsync(behavior));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ResumeAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ResumeAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ILowLagMediaRecording3> : produce_base<D, Windows::Media::Capture::ILowLagMediaRecording3>
{
    HRESULT __stdcall abi_PauseWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PauseWithResultAsync(behavior));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopWithResultAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StopWithResultAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ILowLagPhotoCapture> : produce_base<D, Windows::Media::Capture::ILowLagPhotoCapture>
{
    HRESULT __stdcall abi_CaptureAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::CapturedPhoto>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CaptureAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FinishAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FinishAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ILowLagPhotoSequenceCapture> : produce_base<D, Windows::Media::Capture::ILowLagPhotoSequenceCapture>
{
    HRESULT __stdcall abi_StartAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StartAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StopAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FinishAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FinishAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PhotoCaptured(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture, Windows::Media::Capture::PhotoCapturedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PhotoCaptured(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture, Windows::Media::Capture::PhotoCapturedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PhotoCaptured(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PhotoCaptured(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCapture> : produce_base<D, Windows::Media::Capture::IMediaCapture>
{
    HRESULT __stdcall abi_InitializeAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().InitializeAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InitializeWithSettingsAsync(impl::abi_arg_in<Windows::Media::Capture::IMediaCaptureInitializationSettings> mediaCaptureInitializationSettings, impl::abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().InitializeAsync(*reinterpret_cast<const Windows::Media::Capture::MediaCaptureInitializationSettings *>(&mediaCaptureInitializationSettings)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartRecordToStorageFileAsync(impl::abi_arg_in<Windows::Media::MediaProperties::IMediaEncodingProfile> encodingProfile, impl::abi_arg_in<Windows::Storage::IStorageFile> file, impl::abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().StartRecordToStorageFileAsync(*reinterpret_cast<const Windows::Media::MediaProperties::MediaEncodingProfile *>(&encodingProfile), *reinterpret_cast<const Windows::Storage::IStorageFile *>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartRecordToStreamAsync(impl::abi_arg_in<Windows::Media::MediaProperties::IMediaEncodingProfile> encodingProfile, impl::abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> stream, impl::abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().StartRecordToStreamAsync(*reinterpret_cast<const Windows::Media::MediaProperties::MediaEncodingProfile *>(&encodingProfile), *reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartRecordToCustomSinkAsync(impl::abi_arg_in<Windows::Media::MediaProperties::IMediaEncodingProfile> encodingProfile, impl::abi_arg_in<Windows::Media::IMediaExtension> customMediaSink, impl::abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().StartRecordToCustomSinkAsync(*reinterpret_cast<const Windows::Media::MediaProperties::MediaEncodingProfile *>(&encodingProfile), *reinterpret_cast<const Windows::Media::IMediaExtension *>(&customMediaSink)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartRecordToCustomSinkIdAsync(impl::abi_arg_in<Windows::Media::MediaProperties::IMediaEncodingProfile> encodingProfile, impl::abi_arg_in<hstring> customSinkActivationId, impl::abi_arg_in<Windows::Foundation::Collections::IPropertySet> customSinkSettings, impl::abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().StartRecordToCustomSinkAsync(*reinterpret_cast<const Windows::Media::MediaProperties::MediaEncodingProfile *>(&encodingProfile), *reinterpret_cast<const hstring *>(&customSinkActivationId), *reinterpret_cast<const Windows::Foundation::Collections::IPropertySet *>(&customSinkSettings)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopRecordAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().StopRecordAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CapturePhotoToStorageFileAsync(impl::abi_arg_in<Windows::Media::MediaProperties::IImageEncodingProperties> type, impl::abi_arg_in<Windows::Storage::IStorageFile> file, impl::abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().CapturePhotoToStorageFileAsync(*reinterpret_cast<const Windows::Media::MediaProperties::ImageEncodingProperties *>(&type), *reinterpret_cast<const Windows::Storage::IStorageFile *>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CapturePhotoToStreamAsync(impl::abi_arg_in<Windows::Media::MediaProperties::IImageEncodingProperties> type, impl::abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> stream, impl::abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().CapturePhotoToStreamAsync(*reinterpret_cast<const Windows::Media::MediaProperties::ImageEncodingProperties *>(&type), *reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddEffectAsync(Windows::Media::Capture::MediaStreamType mediaStreamType, impl::abi_arg_in<hstring> effectActivationID, impl::abi_arg_in<Windows::Foundation::Collections::IPropertySet> effectSettings, impl::abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().AddEffectAsync(mediaStreamType, *reinterpret_cast<const hstring *>(&effectActivationID), *reinterpret_cast<const Windows::Foundation::Collections::IPropertySet *>(&effectSettings)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ClearEffectsAsync(Windows::Media::Capture::MediaStreamType mediaStreamType, impl::abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().ClearEffectsAsync(mediaStreamType));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetEncoderProperty(Windows::Media::Capture::MediaStreamType mediaStreamType, GUID propertyId, impl::abi_arg_in<Windows::Foundation::IInspectable> propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetEncoderProperty(mediaStreamType, propertyId, *reinterpret_cast<const Windows::Foundation::IInspectable *>(&propertyValue));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetEncoderProperty(Windows::Media::Capture::MediaStreamType mediaStreamType, GUID propertyId, impl::abi_arg_out<Windows::Foundation::IInspectable> propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().GetEncoderProperty(mediaStreamType, propertyId));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Failed(impl::abi_arg_in<Windows::Media::Capture::MediaCaptureFailedEventHandler> errorEventHandler, event_token * eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_abi(this->shim().Failed(*reinterpret_cast<const Windows::Media::Capture::MediaCaptureFailedEventHandler *>(&errorEventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Failed(event_token eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Failed(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RecordLimitationExceeded(impl::abi_arg_in<Windows::Media::Capture::RecordLimitationExceededEventHandler> recordLimitationExceededEventHandler, event_token * eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_abi(this->shim().RecordLimitationExceeded(*reinterpret_cast<const Windows::Media::Capture::RecordLimitationExceededEventHandler *>(&recordLimitationExceededEventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RecordLimitationExceeded(event_token eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RecordLimitationExceeded(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaCaptureSettings(impl::abi_arg_out<Windows::Media::Capture::IMediaCaptureSettings> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MediaCaptureSettings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioDeviceController(impl::abi_arg_out<Windows::Media::Devices::IAudioDeviceController> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioDeviceController());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoDeviceController(impl::abi_arg_out<Windows::Media::Devices::IVideoDeviceController> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoDeviceController());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPreviewMirroring(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPreviewMirroring(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPreviewMirroring(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetPreviewMirroring());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPreviewRotation(Windows::Media::Capture::VideoRotation value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPreviewRotation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPreviewRotation(Windows::Media::Capture::VideoRotation * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetPreviewRotation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetRecordRotation(Windows::Media::Capture::VideoRotation value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetRecordRotation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetRecordRotation(Windows::Media::Capture::VideoRotation * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetRecordRotation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCapture2> : produce_base<D, Windows::Media::Capture::IMediaCapture2>
{
    HRESULT __stdcall abi_PrepareLowLagRecordToStorageFileAsync(impl::abi_arg_in<Windows::Media::MediaProperties::IMediaEncodingProfile> encodingProfile, impl::abi_arg_in<Windows::Storage::IStorageFile> file, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PrepareLowLagRecordToStorageFileAsync(*reinterpret_cast<const Windows::Media::MediaProperties::MediaEncodingProfile *>(&encodingProfile), *reinterpret_cast<const Windows::Storage::IStorageFile *>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PrepareLowLagRecordToStreamAsync(impl::abi_arg_in<Windows::Media::MediaProperties::IMediaEncodingProfile> encodingProfile, impl::abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> stream, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PrepareLowLagRecordToStreamAsync(*reinterpret_cast<const Windows::Media::MediaProperties::MediaEncodingProfile *>(&encodingProfile), *reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PrepareLowLagRecordToCustomSinkAsync(impl::abi_arg_in<Windows::Media::MediaProperties::IMediaEncodingProfile> encodingProfile, impl::abi_arg_in<Windows::Media::IMediaExtension> customMediaSink, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PrepareLowLagRecordToCustomSinkAsync(*reinterpret_cast<const Windows::Media::MediaProperties::MediaEncodingProfile *>(&encodingProfile), *reinterpret_cast<const Windows::Media::IMediaExtension *>(&customMediaSink)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PrepareLowLagRecordToCustomSinkIdAsync(impl::abi_arg_in<Windows::Media::MediaProperties::IMediaEncodingProfile> encodingProfile, impl::abi_arg_in<hstring> customSinkActivationId, impl::abi_arg_in<Windows::Foundation::Collections::IPropertySet> customSinkSettings, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PrepareLowLagRecordToCustomSinkAsync(*reinterpret_cast<const Windows::Media::MediaProperties::MediaEncodingProfile *>(&encodingProfile), *reinterpret_cast<const hstring *>(&customSinkActivationId), *reinterpret_cast<const Windows::Foundation::Collections::IPropertySet *>(&customSinkSettings)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PrepareLowLagPhotoCaptureAsync(impl::abi_arg_in<Windows::Media::MediaProperties::IImageEncodingProperties> type, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoCapture>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PrepareLowLagPhotoCaptureAsync(*reinterpret_cast<const Windows::Media::MediaProperties::ImageEncodingProperties *>(&type)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PrepareLowLagPhotoSequenceCaptureAsync(impl::abi_arg_in<Windows::Media::MediaProperties::IImageEncodingProperties> type, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoSequenceCapture>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PrepareLowLagPhotoSequenceCaptureAsync(*reinterpret_cast<const Windows::Media::MediaProperties::ImageEncodingProperties *>(&type)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetEncodingPropertiesAsync(Windows::Media::Capture::MediaStreamType mediaStreamType, impl::abi_arg_in<Windows::Media::MediaProperties::IMediaEncodingProperties> mediaEncodingProperties, impl::abi_arg_in<Windows::Foundation::Collections::IMap<GUID, Windows::Foundation::IInspectable>> encoderProperties, impl::abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SetEncodingPropertiesAsync(mediaStreamType, *reinterpret_cast<const Windows::Media::MediaProperties::IMediaEncodingProperties *>(&mediaEncodingProperties), *reinterpret_cast<const Windows::Media::MediaProperties::MediaPropertySet *>(&encoderProperties)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCapture3> : produce_base<D, Windows::Media::Capture::IMediaCapture3>
{
    HRESULT __stdcall abi_PrepareVariablePhotoSequenceCaptureAsync(impl::abi_arg_in<Windows::Media::MediaProperties::IImageEncodingProperties> type, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Core::VariablePhotoSequenceCapture>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PrepareVariablePhotoSequenceCaptureAsync(*reinterpret_cast<const Windows::Media::MediaProperties::ImageEncodingProperties *>(&type)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_FocusChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureFocusChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().FocusChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_FocusChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FocusChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PhotoConfirmationCaptured(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::PhotoConfirmationCapturedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PhotoConfirmationCaptured(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PhotoConfirmationCaptured(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PhotoConfirmationCaptured(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCapture4> : produce_base<D, Windows::Media::Capture::IMediaCapture4>
{
    HRESULT __stdcall abi_AddAudioEffectAsync(impl::abi_arg_in<Windows::Media::Effects::IAudioEffectDefinition> definition, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension>> op) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *op = detach_abi(this->shim().AddAudioEffectAsync(*reinterpret_cast<const Windows::Media::Effects::IAudioEffectDefinition *>(&definition)));
            return S_OK;
        }
        catch (...)
        {
            *op = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddVideoEffectAsync(impl::abi_arg_in<Windows::Media::Effects::IVideoEffectDefinition> definition, Windows::Media::Capture::MediaStreamType mediaStreamType, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension>> op) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *op = detach_abi(this->shim().AddVideoEffectAsync(*reinterpret_cast<const Windows::Media::Effects::IVideoEffectDefinition *>(&definition), mediaStreamType));
            return S_OK;
        }
        catch (...)
        {
            *op = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PauseRecordAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior, impl::abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().PauseRecordAsync(behavior));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ResumeRecordAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().ResumeRecordAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CameraStreamStateChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CameraStreamStateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CameraStreamStateChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraStreamStateChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CameraStreamState(Windows::Media::Devices::CameraStreamState * streamState) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *streamState = detach_abi(this->shim().CameraStreamState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPreviewFrameAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetPreviewFrameAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPreviewFrameCopyAsync(impl::abi_arg_in<Windows::Media::IVideoFrame> destination, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetPreviewFrameAsync(*reinterpret_cast<const Windows::Media::VideoFrame *>(&destination)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ThermalStatusChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ThermalStatusChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ThermalStatusChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ThermalStatusChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ThermalStatus(Windows::Media::Capture::MediaCaptureThermalStatus * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ThermalStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PrepareAdvancedPhotoCaptureAsync(impl::abi_arg_in<Windows::Media::MediaProperties::IImageEncodingProperties> encodingProperties, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedPhotoCapture>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PrepareAdvancedPhotoCaptureAsync(*reinterpret_cast<const Windows::Media::MediaProperties::ImageEncodingProperties *>(&encodingProperties)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCapture5> : produce_base<D, Windows::Media::Capture::IMediaCapture5>
{
    HRESULT __stdcall abi_RemoveEffectAsync(impl::abi_arg_in<Windows::Media::IMediaExtension> effect, impl::abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().RemoveEffectAsync(*reinterpret_cast<const Windows::Media::IMediaExtension *>(&effect)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PauseRecordWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PauseRecordWithResultAsync(behavior));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopRecordWithResultAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StopRecordWithResultAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrameSources(impl::abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::Media::Capture::Frames::MediaFrameSource>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FrameSources());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFrameReaderAsync(impl::abi_arg_in<Windows::Media::Capture::Frames::IMediaFrameSource> inputSource, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateFrameReaderAsync(*reinterpret_cast<const Windows::Media::Capture::Frames::MediaFrameSource *>(&inputSource)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFrameReaderWithSubtypeAsync(impl::abi_arg_in<Windows::Media::Capture::Frames::IMediaFrameSource> inputSource, impl::abi_arg_in<hstring> outputSubtype, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateFrameReaderAsync(*reinterpret_cast<const Windows::Media::Capture::Frames::MediaFrameSource *>(&inputSource), *reinterpret_cast<const hstring *>(&outputSubtype)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFrameReaderWithSubtypeAndSizeAsync(impl::abi_arg_in<Windows::Media::Capture::Frames::IMediaFrameSource> inputSource, impl::abi_arg_in<hstring> outputSubtype, impl::abi_arg_in<Windows::Graphics::Imaging::BitmapSize> outputSize, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateFrameReaderAsync(*reinterpret_cast<const Windows::Media::Capture::Frames::MediaFrameSource *>(&inputSource), *reinterpret_cast<const hstring *>(&outputSubtype), *reinterpret_cast<const Windows::Graphics::Imaging::BitmapSize *>(&outputSize)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCapture6> : produce_base<D, Windows::Media::Capture::IMediaCapture6>
{
    HRESULT __stdcall add_CaptureDeviceExclusiveControlStatusChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CaptureDeviceExclusiveControlStatusChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CaptureDeviceExclusiveControlStatusChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CaptureDeviceExclusiveControlStatusChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateMultiSourceFrameReaderAsync(impl::abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Media::Capture::Frames::MediaFrameSource>> inputSources, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MultiSourceMediaFrameReader>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateMultiSourceFrameReaderAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Media::Capture::Frames::MediaFrameSource> *>(&inputSources)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs> : produce_base<D, Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs>
{
    HRESULT __stdcall get_DeviceId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatus * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureFailedEventArgs> : produce_base<D, Windows::Media::Capture::IMediaCaptureFailedEventArgs>
{
    HRESULT __stdcall get_Message(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Message());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Code(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Code());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs> : produce_base<D, Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs>
{
    HRESULT __stdcall get_FocusState(Windows::Media::Devices::MediaCaptureFocusState * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FocusState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureInitializationSettings> : produce_base<D, Windows::Media::Capture::IMediaCaptureInitializationSettings>
{
    HRESULT __stdcall put_AudioDeviceId(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioDeviceId(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioDeviceId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioDeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VideoDeviceId(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoDeviceId(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoDeviceId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoDeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StreamingCaptureMode(Windows::Media::Capture::StreamingCaptureMode value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StreamingCaptureMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StreamingCaptureMode(Windows::Media::Capture::StreamingCaptureMode * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StreamingCaptureMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PhotoCaptureSource(Windows::Media::Capture::PhotoCaptureSource value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PhotoCaptureSource(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhotoCaptureSource(Windows::Media::Capture::PhotoCaptureSource * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhotoCaptureSource());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureInitializationSettings2> : produce_base<D, Windows::Media::Capture::IMediaCaptureInitializationSettings2>
{
    HRESULT __stdcall put_MediaCategory(Windows::Media::Capture::MediaCategory value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MediaCategory(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaCategory(Windows::Media::Capture::MediaCategory * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MediaCategory());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AudioProcessing(Windows::Media::AudioProcessing value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioProcessing(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioProcessing(Windows::Media::AudioProcessing * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioProcessing());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureInitializationSettings3> : produce_base<D, Windows::Media::Capture::IMediaCaptureInitializationSettings3>
{
    HRESULT __stdcall put_AudioSource(impl::abi_arg_in<Windows::Media::Core::IMediaSource> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioSource(*reinterpret_cast<const Windows::Media::Core::IMediaSource *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioSource(impl::abi_arg_out<Windows::Media::Core::IMediaSource> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VideoSource(impl::abi_arg_in<Windows::Media::Core::IMediaSource> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoSource(*reinterpret_cast<const Windows::Media::Core::IMediaSource *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoSource(impl::abi_arg_out<Windows::Media::Core::IMediaSource> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureInitializationSettings4> : produce_base<D, Windows::Media::Capture::IMediaCaptureInitializationSettings4>
{
    HRESULT __stdcall get_VideoProfile(impl::abi_arg_out<Windows::Media::Capture::IMediaCaptureVideoProfile> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoProfile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VideoProfile(impl::abi_arg_in<Windows::Media::Capture::IMediaCaptureVideoProfile> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoProfile(*reinterpret_cast<const Windows::Media::Capture::MediaCaptureVideoProfile *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreviewMediaDescription(impl::abi_arg_out<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PreviewMediaDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PreviewMediaDescription(impl::abi_arg_in<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PreviewMediaDescription(*reinterpret_cast<const Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecordMediaDescription(impl::abi_arg_out<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RecordMediaDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RecordMediaDescription(impl::abi_arg_in<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RecordMediaDescription(*reinterpret_cast<const Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhotoMediaDescription(impl::abi_arg_out<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhotoMediaDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PhotoMediaDescription(impl::abi_arg_in<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PhotoMediaDescription(*reinterpret_cast<const Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureInitializationSettings5> : produce_base<D, Windows::Media::Capture::IMediaCaptureInitializationSettings5>
{
    HRESULT __stdcall get_SourceGroup(impl::abi_arg_out<Windows::Media::Capture::Frames::IMediaFrameSourceGroup> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceGroup());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SourceGroup(impl::abi_arg_in<Windows::Media::Capture::Frames::IMediaFrameSourceGroup> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceGroup(*reinterpret_cast<const Windows::Media::Capture::Frames::MediaFrameSourceGroup *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SharingMode(Windows::Media::Capture::MediaCaptureSharingMode * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SharingMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SharingMode(Windows::Media::Capture::MediaCaptureSharingMode value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SharingMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MemoryPreference(Windows::Media::Capture::MediaCaptureMemoryPreference * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MemoryPreference());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MemoryPreference(Windows::Media::Capture::MediaCaptureMemoryPreference value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MemoryPreference(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureInitializationSettings6> : produce_base<D, Windows::Media::Capture::IMediaCaptureInitializationSettings6>
{
    HRESULT __stdcall get_AlwaysPlaySystemShutterSound(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlwaysPlaySystemShutterSound());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AlwaysPlaySystemShutterSound(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlwaysPlaySystemShutterSound(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCapturePauseResult> : produce_base<D, Windows::Media::Capture::IMediaCapturePauseResult>
{
    HRESULT __stdcall get_LastFrame(impl::abi_arg_out<Windows::Media::IVideoFrame> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastFrame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecordDuration(impl::abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RecordDuration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureSettings> : produce_base<D, Windows::Media::Capture::IMediaCaptureSettings>
{
    HRESULT __stdcall get_AudioDeviceId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioDeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoDeviceId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoDeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StreamingCaptureMode(Windows::Media::Capture::StreamingCaptureMode * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StreamingCaptureMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhotoCaptureSource(Windows::Media::Capture::PhotoCaptureSource * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhotoCaptureSource());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoDeviceCharacteristic(Windows::Media::Capture::VideoDeviceCharacteristic * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoDeviceCharacteristic());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureSettings2> : produce_base<D, Windows::Media::Capture::IMediaCaptureSettings2>
{
    HRESULT __stdcall get_ConcurrentRecordAndPhotoSupported(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ConcurrentRecordAndPhotoSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConcurrentRecordAndPhotoSequenceSupported(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ConcurrentRecordAndPhotoSequenceSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CameraSoundRequiredForRegion(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CameraSoundRequiredForRegion());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Horizontal35mmEquivalentFocalLength(impl::abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Horizontal35mmEquivalentFocalLength());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PitchOffsetDegrees(impl::abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PitchOffsetDegrees());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Vertical35mmEquivalentFocalLength(impl::abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Vertical35mmEquivalentFocalLength());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaCategory(Windows::Media::Capture::MediaCategory * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MediaCategory());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioProcessing(Windows::Media::AudioProcessing * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioProcessing());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureStatics> : produce_base<D, Windows::Media::Capture::IMediaCaptureStatics>
{
    HRESULT __stdcall abi_IsVideoProfileSupported(impl::abi_arg_in<hstring> videoDeviceId, bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsVideoProfileSupported(*reinterpret_cast<const hstring *>(&videoDeviceId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAllVideoProfiles(impl::abi_arg_in<hstring> videoDeviceId, impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FindAllVideoProfiles(*reinterpret_cast<const hstring *>(&videoDeviceId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindConcurrentProfiles(impl::abi_arg_in<hstring> videoDeviceId, impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FindConcurrentProfiles(*reinterpret_cast<const hstring *>(&videoDeviceId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindKnownVideoProfiles(impl::abi_arg_in<hstring> videoDeviceId, Windows::Media::Capture::KnownVideoProfile name, impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FindKnownVideoProfiles(*reinterpret_cast<const hstring *>(&videoDeviceId), name));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureStopResult> : produce_base<D, Windows::Media::Capture::IMediaCaptureStopResult>
{
    HRESULT __stdcall get_LastFrame(impl::abi_arg_out<Windows::Media::IVideoFrame> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastFrame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecordDuration(impl::abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RecordDuration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureVideoPreview> : produce_base<D, Windows::Media::Capture::IMediaCaptureVideoPreview>
{
    HRESULT __stdcall abi_StartPreviewAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().StartPreviewAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartPreviewToCustomSinkAsync(impl::abi_arg_in<Windows::Media::MediaProperties::IMediaEncodingProfile> encodingProfile, impl::abi_arg_in<Windows::Media::IMediaExtension> customMediaSink, impl::abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().StartPreviewToCustomSinkAsync(*reinterpret_cast<const Windows::Media::MediaProperties::MediaEncodingProfile *>(&encodingProfile), *reinterpret_cast<const Windows::Media::IMediaExtension *>(&customMediaSink)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartPreviewToCustomSinkIdAsync(impl::abi_arg_in<Windows::Media::MediaProperties::IMediaEncodingProfile> encodingProfile, impl::abi_arg_in<hstring> customSinkActivationId, impl::abi_arg_in<Windows::Foundation::Collections::IPropertySet> customSinkSettings, impl::abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().StartPreviewToCustomSinkAsync(*reinterpret_cast<const Windows::Media::MediaProperties::MediaEncodingProfile *>(&encodingProfile), *reinterpret_cast<const hstring *>(&customSinkActivationId), *reinterpret_cast<const Windows::Foundation::Collections::IPropertySet *>(&customSinkSettings)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopPreviewAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().StopPreviewAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureVideoProfile> : produce_base<D, Windows::Media::Capture::IMediaCaptureVideoProfile>
{
    HRESULT __stdcall get_Id(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoDeviceId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoDeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedPreviewMediaDescription(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedPreviewMediaDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedRecordMediaDescription(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedRecordMediaDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedPhotoMediaDescription(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedPhotoMediaDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetConcurrency(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetConcurrency());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription> : produce_base<D, Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription>
{
    HRESULT __stdcall get_Width(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Width());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Height(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Height());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrameRate(double * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FrameRate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsVariablePhotoSequenceSupported(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsVariablePhotoSequenceSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsHdrVideoSupported(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsHdrVideoSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs> : produce_base<D, Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs>
{
    HRESULT __stdcall get_Frame(impl::abi_arg_out<Windows::Media::Capture::ICapturedFrame> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Frame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Context(impl::abi_arg_out<Windows::Foundation::IInspectable> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Context());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IPhotoCapturedEventArgs> : produce_base<D, Windows::Media::Capture::IPhotoCapturedEventArgs>
{
    HRESULT __stdcall get_Frame(impl::abi_arg_out<Windows::Media::Capture::ICapturedFrame> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Frame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnail(impl::abi_arg_out<Windows::Media::Capture::ICapturedFrame> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Thumbnail());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CaptureTimeOffset(impl::abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CaptureTimeOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs> : produce_base<D, Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs>
{
    HRESULT __stdcall get_Frame(impl::abi_arg_out<Windows::Media::Capture::ICapturedFrame> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Frame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CaptureTimeOffset(impl::abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CaptureTimeOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IScreenCapture> : produce_base<D, Windows::Media::Capture::IScreenCapture>
{
    HRESULT __stdcall get_AudioSource(impl::abi_arg_out<Windows::Media::Core::IMediaSource> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoSource(impl::abi_arg_out<Windows::Media::Core::IMediaSource> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsAudioSuspended(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsAudioSuspended());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsVideoSuspended(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsVideoSuspended());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SourceSuspensionChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::ScreenCapture, Windows::Media::Capture::SourceSuspensionChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SourceSuspensionChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::ScreenCapture, Windows::Media::Capture::SourceSuspensionChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceSuspensionChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceSuspensionChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IScreenCaptureStatics> : produce_base<D, Windows::Media::Capture::IScreenCaptureStatics>
{
    HRESULT __stdcall abi_GetForCurrentView(impl::abi_arg_out<Windows::Media::Capture::IScreenCapture> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ISourceSuspensionChangedEventArgs> : produce_base<D, Windows::Media::Capture::ISourceSuspensionChangedEventArgs>
{
    HRESULT __stdcall get_IsAudioSuspended(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsAudioSuspended());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsVideoSuspended(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsVideoSuspended());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IVideoStreamConfiguration> : produce_base<D, Windows::Media::Capture::IVideoStreamConfiguration>
{
    HRESULT __stdcall get_InputProperties(impl::abi_arg_out<Windows::Media::MediaProperties::IVideoEncodingProperties> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InputProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutputProperties(impl::abi_arg_out<Windows::Media::MediaProperties::IVideoEncodingProperties> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OutputProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Media::Capture {

template <typename D> bool impl_ISourceSuspensionChangedEventArgs<D>::IsAudioSuspended() const
{
    bool value {};
    check_hresult(WINRT_SHIM(ISourceSuspensionChangedEventArgs)->get_IsAudioSuspended(&value));
    return value;
}

template <typename D> bool impl_ISourceSuspensionChangedEventArgs<D>::IsVideoSuspended() const
{
    bool value {};
    check_hresult(WINRT_SHIM(ISourceSuspensionChangedEventArgs)->get_IsVideoSuspended(&value));
    return value;
}

template <typename D> Windows::Media::Core::IMediaSource impl_IScreenCapture<D>::AudioSource() const
{
    Windows::Media::Core::IMediaSource value;
    check_hresult(WINRT_SHIM(IScreenCapture)->get_AudioSource(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::IMediaSource impl_IScreenCapture<D>::VideoSource() const
{
    Windows::Media::Core::IMediaSource value;
    check_hresult(WINRT_SHIM(IScreenCapture)->get_VideoSource(put_abi(value)));
    return value;
}

template <typename D> bool impl_IScreenCapture<D>::IsAudioSuspended() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IScreenCapture)->get_IsAudioSuspended(&value));
    return value;
}

template <typename D> bool impl_IScreenCapture<D>::IsVideoSuspended() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IScreenCapture)->get_IsVideoSuspended(&value));
    return value;
}

template <typename D> event_token impl_IScreenCapture<D>::SourceSuspensionChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::ScreenCapture, Windows::Media::Capture::SourceSuspensionChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IScreenCapture)->add_SourceSuspensionChanged(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IScreenCapture> impl_IScreenCapture<D>::SourceSuspensionChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::ScreenCapture, Windows::Media::Capture::SourceSuspensionChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IScreenCapture>(this, &ABI::Windows::Media::Capture::IScreenCapture::remove_SourceSuspensionChanged, SourceSuspensionChanged(handler));
}

template <typename D> void impl_IScreenCapture<D>::SourceSuspensionChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IScreenCapture)->remove_SourceSuspensionChanged(token));
}

template <typename D> Windows::Media::Capture::ScreenCapture impl_IScreenCaptureStatics<D>::GetForCurrentView() const
{
    Windows::Media::Capture::ScreenCapture value { nullptr };
    check_hresult(WINRT_SHIM(IScreenCaptureStatics)->abi_GetForCurrentView(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastGlobalSettings impl_IAppBroadcastManagerStatics<D>::GetGlobalSettings() const
{
    Windows::Media::Capture::AppBroadcastGlobalSettings value { nullptr };
    check_hresult(WINRT_SHIM(IAppBroadcastManagerStatics)->abi_GetGlobalSettings(put_abi(value)));
    return value;
}

template <typename D> void impl_IAppBroadcastManagerStatics<D>::ApplyGlobalSettings(const Windows::Media::Capture::AppBroadcastGlobalSettings & value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastManagerStatics)->abi_ApplyGlobalSettings(get_abi(value)));
}

template <typename D> Windows::Media::Capture::AppBroadcastProviderSettings impl_IAppBroadcastManagerStatics<D>::GetProviderSettings() const
{
    Windows::Media::Capture::AppBroadcastProviderSettings value { nullptr };
    check_hresult(WINRT_SHIM(IAppBroadcastManagerStatics)->abi_GetProviderSettings(put_abi(value)));
    return value;
}

template <typename D> void impl_IAppBroadcastManagerStatics<D>::ApplyProviderSettings(const Windows::Media::Capture::AppBroadcastProviderSettings & value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastManagerStatics)->abi_ApplyProviderSettings(get_abi(value)));
}

template <typename D> bool impl_IAppBroadcastGlobalSettings<D>::IsBroadcastEnabled() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppBroadcastGlobalSettings)->get_IsBroadcastEnabled(&value));
    return value;
}

template <typename D> bool impl_IAppBroadcastGlobalSettings<D>::IsDisabledByPolicy() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppBroadcastGlobalSettings)->get_IsDisabledByPolicy(&value));
    return value;
}

template <typename D> bool impl_IAppBroadcastGlobalSettings<D>::IsGpuConstrained() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppBroadcastGlobalSettings)->get_IsGpuConstrained(&value));
    return value;
}

template <typename D> bool impl_IAppBroadcastGlobalSettings<D>::HasHardwareEncoder() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppBroadcastGlobalSettings)->get_HasHardwareEncoder(&value));
    return value;
}

template <typename D> void impl_IAppBroadcastGlobalSettings<D>::IsAudioCaptureEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastGlobalSettings)->put_IsAudioCaptureEnabled(value));
}

template <typename D> bool impl_IAppBroadcastGlobalSettings<D>::IsAudioCaptureEnabled() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppBroadcastGlobalSettings)->get_IsAudioCaptureEnabled(&value));
    return value;
}

template <typename D> void impl_IAppBroadcastGlobalSettings<D>::IsMicrophoneCaptureEnabledByDefault(bool value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastGlobalSettings)->put_IsMicrophoneCaptureEnabledByDefault(value));
}

template <typename D> bool impl_IAppBroadcastGlobalSettings<D>::IsMicrophoneCaptureEnabledByDefault() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppBroadcastGlobalSettings)->get_IsMicrophoneCaptureEnabledByDefault(&value));
    return value;
}

template <typename D> void impl_IAppBroadcastGlobalSettings<D>::IsEchoCancellationEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastGlobalSettings)->put_IsEchoCancellationEnabled(value));
}

template <typename D> bool impl_IAppBroadcastGlobalSettings<D>::IsEchoCancellationEnabled() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppBroadcastGlobalSettings)->get_IsEchoCancellationEnabled(&value));
    return value;
}

template <typename D> void impl_IAppBroadcastGlobalSettings<D>::SystemAudioGain(double value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastGlobalSettings)->put_SystemAudioGain(value));
}

template <typename D> double impl_IAppBroadcastGlobalSettings<D>::SystemAudioGain() const
{
    double value {};
    check_hresult(WINRT_SHIM(IAppBroadcastGlobalSettings)->get_SystemAudioGain(&value));
    return value;
}

template <typename D> void impl_IAppBroadcastGlobalSettings<D>::MicrophoneGain(double value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastGlobalSettings)->put_MicrophoneGain(value));
}

template <typename D> double impl_IAppBroadcastGlobalSettings<D>::MicrophoneGain() const
{
    double value {};
    check_hresult(WINRT_SHIM(IAppBroadcastGlobalSettings)->get_MicrophoneGain(&value));
    return value;
}

template <typename D> void impl_IAppBroadcastGlobalSettings<D>::IsCameraCaptureEnabledByDefault(bool value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastGlobalSettings)->put_IsCameraCaptureEnabledByDefault(value));
}

template <typename D> bool impl_IAppBroadcastGlobalSettings<D>::IsCameraCaptureEnabledByDefault() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppBroadcastGlobalSettings)->get_IsCameraCaptureEnabledByDefault(&value));
    return value;
}

template <typename D> void impl_IAppBroadcastGlobalSettings<D>::SelectedCameraId(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastGlobalSettings)->put_SelectedCameraId(get_abi(value)));
}

template <typename D> hstring impl_IAppBroadcastGlobalSettings<D>::SelectedCameraId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IAppBroadcastGlobalSettings)->get_SelectedCameraId(put_abi(value)));
    return value;
}

template <typename D> void impl_IAppBroadcastGlobalSettings<D>::CameraOverlayLocation(Windows::Media::Capture::AppBroadcastCameraOverlayLocation value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastGlobalSettings)->put_CameraOverlayLocation(value));
}

template <typename D> Windows::Media::Capture::AppBroadcastCameraOverlayLocation impl_IAppBroadcastGlobalSettings<D>::CameraOverlayLocation() const
{
    Windows::Media::Capture::AppBroadcastCameraOverlayLocation value {};
    check_hresult(WINRT_SHIM(IAppBroadcastGlobalSettings)->get_CameraOverlayLocation(&value));
    return value;
}

template <typename D> void impl_IAppBroadcastGlobalSettings<D>::CameraOverlaySize(Windows::Media::Capture::AppBroadcastCameraOverlaySize value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastGlobalSettings)->put_CameraOverlaySize(value));
}

template <typename D> Windows::Media::Capture::AppBroadcastCameraOverlaySize impl_IAppBroadcastGlobalSettings<D>::CameraOverlaySize() const
{
    Windows::Media::Capture::AppBroadcastCameraOverlaySize value {};
    check_hresult(WINRT_SHIM(IAppBroadcastGlobalSettings)->get_CameraOverlaySize(&value));
    return value;
}

template <typename D> void impl_IAppBroadcastGlobalSettings<D>::IsCursorImageCaptureEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastGlobalSettings)->put_IsCursorImageCaptureEnabled(value));
}

template <typename D> bool impl_IAppBroadcastGlobalSettings<D>::IsCursorImageCaptureEnabled() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppBroadcastGlobalSettings)->get_IsCursorImageCaptureEnabled(&value));
    return value;
}

template <typename D> void impl_IAppBroadcastProviderSettings<D>::DefaultBroadcastTitle(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastProviderSettings)->put_DefaultBroadcastTitle(get_abi(value)));
}

template <typename D> hstring impl_IAppBroadcastProviderSettings<D>::DefaultBroadcastTitle() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IAppBroadcastProviderSettings)->get_DefaultBroadcastTitle(put_abi(value)));
    return value;
}

template <typename D> void impl_IAppBroadcastProviderSettings<D>::AudioEncodingBitrate(uint32_t value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastProviderSettings)->put_AudioEncodingBitrate(value));
}

template <typename D> uint32_t impl_IAppBroadcastProviderSettings<D>::AudioEncodingBitrate() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppBroadcastProviderSettings)->get_AudioEncodingBitrate(&value));
    return value;
}

template <typename D> void impl_IAppBroadcastProviderSettings<D>::CustomVideoEncodingBitrate(uint32_t value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastProviderSettings)->put_CustomVideoEncodingBitrate(value));
}

template <typename D> uint32_t impl_IAppBroadcastProviderSettings<D>::CustomVideoEncodingBitrate() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppBroadcastProviderSettings)->get_CustomVideoEncodingBitrate(&value));
    return value;
}

template <typename D> void impl_IAppBroadcastProviderSettings<D>::CustomVideoEncodingHeight(uint32_t value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastProviderSettings)->put_CustomVideoEncodingHeight(value));
}

template <typename D> uint32_t impl_IAppBroadcastProviderSettings<D>::CustomVideoEncodingHeight() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppBroadcastProviderSettings)->get_CustomVideoEncodingHeight(&value));
    return value;
}

template <typename D> void impl_IAppBroadcastProviderSettings<D>::CustomVideoEncodingWidth(uint32_t value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastProviderSettings)->put_CustomVideoEncodingWidth(value));
}

template <typename D> uint32_t impl_IAppBroadcastProviderSettings<D>::CustomVideoEncodingWidth() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppBroadcastProviderSettings)->get_CustomVideoEncodingWidth(&value));
    return value;
}

template <typename D> void impl_IAppBroadcastProviderSettings<D>::VideoEncodingBitrateMode(Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastProviderSettings)->put_VideoEncodingBitrateMode(value));
}

template <typename D> Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode impl_IAppBroadcastProviderSettings<D>::VideoEncodingBitrateMode() const
{
    Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode value {};
    check_hresult(WINRT_SHIM(IAppBroadcastProviderSettings)->get_VideoEncodingBitrateMode(&value));
    return value;
}

template <typename D> void impl_IAppBroadcastProviderSettings<D>::VideoEncodingResolutionMode(Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastProviderSettings)->put_VideoEncodingResolutionMode(value));
}

template <typename D> Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode impl_IAppBroadcastProviderSettings<D>::VideoEncodingResolutionMode() const
{
    Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode value {};
    check_hresult(WINRT_SHIM(IAppBroadcastProviderSettings)->get_VideoEncodingResolutionMode(&value));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastSignInState impl_IAppBroadcastBackgroundServiceSignInInfo<D>::SignInState() const
{
    Windows::Media::Capture::AppBroadcastSignInState value {};
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundServiceSignInInfo)->get_SignInState(&value));
    return value;
}

template <typename D> void impl_IAppBroadcastBackgroundServiceSignInInfo<D>::OAuthRequestUri(const Windows::Foundation::Uri & value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundServiceSignInInfo)->put_OAuthRequestUri(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri impl_IAppBroadcastBackgroundServiceSignInInfo<D>::OAuthRequestUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundServiceSignInInfo)->get_OAuthRequestUri(put_abi(value)));
    return value;
}

template <typename D> void impl_IAppBroadcastBackgroundServiceSignInInfo<D>::OAuthCallbackUri(const Windows::Foundation::Uri & value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundServiceSignInInfo)->put_OAuthCallbackUri(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri impl_IAppBroadcastBackgroundServiceSignInInfo<D>::OAuthCallbackUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundServiceSignInInfo)->get_OAuthCallbackUri(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::WebAuthenticationResult impl_IAppBroadcastBackgroundServiceSignInInfo<D>::AuthenticationResult() const
{
    Windows::Security::Authentication::Web::WebAuthenticationResult value { nullptr };
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundServiceSignInInfo)->get_AuthenticationResult(put_abi(value)));
    return value;
}

template <typename D> void impl_IAppBroadcastBackgroundServiceSignInInfo<D>::UserName(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundServiceSignInInfo)->put_UserName(get_abi(value)));
}

template <typename D> hstring impl_IAppBroadcastBackgroundServiceSignInInfo<D>::UserName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundServiceSignInInfo)->get_UserName(put_abi(value)));
    return value;
}

template <typename D> event_token impl_IAppBroadcastBackgroundServiceSignInInfo<D>::SignInStateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo, Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundServiceSignInInfo)->add_SignInStateChanged(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IAppBroadcastBackgroundServiceSignInInfo> impl_IAppBroadcastBackgroundServiceSignInInfo<D>::SignInStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo, Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAppBroadcastBackgroundServiceSignInInfo>(this, &ABI::Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo::remove_SignInStateChanged, SignInStateChanged(handler));
}

template <typename D> void impl_IAppBroadcastBackgroundServiceSignInInfo<D>::SignInStateChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundServiceSignInInfo)->remove_SignInStateChanged(token));
}

template <typename D> Windows::Media::Capture::AppBroadcastStreamState impl_IAppBroadcastBackgroundServiceStreamInfo<D>::StreamState() const
{
    Windows::Media::Capture::AppBroadcastStreamState value {};
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundServiceStreamInfo)->get_StreamState(&value));
    return value;
}

template <typename D> void impl_IAppBroadcastBackgroundServiceStreamInfo<D>::DesiredVideoEncodingBitrate(uint64_t value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundServiceStreamInfo)->put_DesiredVideoEncodingBitrate(value));
}

template <typename D> uint64_t impl_IAppBroadcastBackgroundServiceStreamInfo<D>::DesiredVideoEncodingBitrate() const
{
    uint64_t value {};
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundServiceStreamInfo)->get_DesiredVideoEncodingBitrate(&value));
    return value;
}

template <typename D> void impl_IAppBroadcastBackgroundServiceStreamInfo<D>::BandwidthTestBitrate(uint64_t value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundServiceStreamInfo)->put_BandwidthTestBitrate(value));
}

template <typename D> uint64_t impl_IAppBroadcastBackgroundServiceStreamInfo<D>::BandwidthTestBitrate() const
{
    uint64_t value {};
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundServiceStreamInfo)->get_BandwidthTestBitrate(&value));
    return value;
}

template <typename D> void impl_IAppBroadcastBackgroundServiceStreamInfo<D>::AudioCodec(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundServiceStreamInfo)->put_AudioCodec(get_abi(value)));
}

template <typename D> hstring impl_IAppBroadcastBackgroundServiceStreamInfo<D>::AudioCodec() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundServiceStreamInfo)->get_AudioCodec(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastStreamReader impl_IAppBroadcastBackgroundServiceStreamInfo<D>::BroadcastStreamReader() const
{
    Windows::Media::Capture::AppBroadcastStreamReader value { nullptr };
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundServiceStreamInfo)->get_BroadcastStreamReader(put_abi(value)));
    return value;
}

template <typename D> event_token impl_IAppBroadcastBackgroundServiceStreamInfo<D>::StreamStateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundServiceStreamInfo)->add_StreamStateChanged(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IAppBroadcastBackgroundServiceStreamInfo> impl_IAppBroadcastBackgroundServiceStreamInfo<D>::StreamStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAppBroadcastBackgroundServiceStreamInfo>(this, &ABI::Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo::remove_StreamStateChanged, StreamStateChanged(handler));
}

template <typename D> void impl_IAppBroadcastBackgroundServiceStreamInfo<D>::StreamStateChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundServiceStreamInfo)->remove_StreamStateChanged(token));
}

template <typename D> event_token impl_IAppBroadcastBackgroundServiceStreamInfo<D>::VideoEncodingResolutionChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundServiceStreamInfo)->add_VideoEncodingResolutionChanged(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IAppBroadcastBackgroundServiceStreamInfo> impl_IAppBroadcastBackgroundServiceStreamInfo<D>::VideoEncodingResolutionChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IAppBroadcastBackgroundServiceStreamInfo>(this, &ABI::Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo::remove_VideoEncodingResolutionChanged, VideoEncodingResolutionChanged(handler));
}

template <typename D> void impl_IAppBroadcastBackgroundServiceStreamInfo<D>::VideoEncodingResolutionChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundServiceStreamInfo)->remove_VideoEncodingResolutionChanged(token));
}

template <typename D> event_token impl_IAppBroadcastBackgroundServiceStreamInfo<D>::VideoEncodingBitrateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundServiceStreamInfo)->add_VideoEncodingBitrateChanged(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IAppBroadcastBackgroundServiceStreamInfo> impl_IAppBroadcastBackgroundServiceStreamInfo<D>::VideoEncodingBitrateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IAppBroadcastBackgroundServiceStreamInfo>(this, &ABI::Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo::remove_VideoEncodingBitrateChanged, VideoEncodingBitrateChanged(handler));
}

template <typename D> void impl_IAppBroadcastBackgroundServiceStreamInfo<D>::VideoEncodingBitrateChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundServiceStreamInfo)->remove_VideoEncodingBitrateChanged(token));
}

template <typename D> void impl_IAppBroadcastBackgroundService<D>::PlugInState(Windows::Media::Capture::AppBroadcastPlugInState value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundService)->put_PlugInState(value));
}

template <typename D> Windows::Media::Capture::AppBroadcastPlugInState impl_IAppBroadcastBackgroundService<D>::PlugInState() const
{
    Windows::Media::Capture::AppBroadcastPlugInState value {};
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundService)->get_PlugInState(&value));
    return value;
}

template <typename D> void impl_IAppBroadcastBackgroundService<D>::SignInInfo(const Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo & value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundService)->put_SignInInfo(get_abi(value)));
}

template <typename D> Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo impl_IAppBroadcastBackgroundService<D>::SignInInfo() const
{
    Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo value { nullptr };
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundService)->get_SignInInfo(put_abi(value)));
    return value;
}

template <typename D> void impl_IAppBroadcastBackgroundService<D>::StreamInfo(const Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo & value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundService)->put_StreamInfo(get_abi(value)));
}

template <typename D> Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo impl_IAppBroadcastBackgroundService<D>::StreamInfo() const
{
    Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo value { nullptr };
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundService)->get_StreamInfo(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IAppBroadcastBackgroundService<D>::AppId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundService)->get_AppId(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IAppBroadcastBackgroundService<D>::BroadcastTitle() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundService)->get_BroadcastTitle(put_abi(value)));
    return value;
}

template <typename D> void impl_IAppBroadcastBackgroundService<D>::ViewerCount(uint32_t value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundService)->put_ViewerCount(value));
}

template <typename D> uint32_t impl_IAppBroadcastBackgroundService<D>::ViewerCount() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundService)->get_ViewerCount(&value));
    return value;
}

template <typename D> void impl_IAppBroadcastBackgroundService<D>::TerminateBroadcast(Windows::Media::Capture::AppBroadcastTerminationReason reason, uint32_t providerSpecificReason) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundService)->abi_TerminateBroadcast(reason, providerSpecificReason));
}

template <typename D> event_token impl_IAppBroadcastBackgroundService<D>::HeartbeatRequested(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundService)->add_HeartbeatRequested(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IAppBroadcastBackgroundService> impl_IAppBroadcastBackgroundService<D>::HeartbeatRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAppBroadcastBackgroundService>(this, &ABI::Windows::Media::Capture::IAppBroadcastBackgroundService::remove_HeartbeatRequested, HeartbeatRequested(handler));
}

template <typename D> void impl_IAppBroadcastBackgroundService<D>::HeartbeatRequested(event_token token) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundService)->remove_HeartbeatRequested(token));
}

template <typename D> hstring impl_IAppBroadcastBackgroundService<D>::TitleId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IAppBroadcastBackgroundService)->get_TitleId(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastSignInState impl_IAppBroadcastSignInStateChangedEventArgs<D>::SignInState() const
{
    Windows::Media::Capture::AppBroadcastSignInState value {};
    check_hresult(WINRT_SHIM(IAppBroadcastSignInStateChangedEventArgs)->get_SignInState(&value));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastSignInResult impl_IAppBroadcastSignInStateChangedEventArgs<D>::Result() const
{
    Windows::Media::Capture::AppBroadcastSignInResult value {};
    check_hresult(WINRT_SHIM(IAppBroadcastSignInStateChangedEventArgs)->get_Result(&value));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastStreamState impl_IAppBroadcastStreamStateChangedEventArgs<D>::StreamState() const
{
    Windows::Media::Capture::AppBroadcastStreamState value {};
    check_hresult(WINRT_SHIM(IAppBroadcastStreamStateChangedEventArgs)->get_StreamState(&value));
    return value;
}

template <typename D> void impl_IAppBroadcastHeartbeatRequestedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastHeartbeatRequestedEventArgs)->put_Handled(value));
}

template <typename D> bool impl_IAppBroadcastHeartbeatRequestedEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppBroadcastHeartbeatRequestedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> uint32_t impl_IAppBroadcastStreamReader<D>::AudioChannels() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppBroadcastStreamReader)->get_AudioChannels(&value));
    return value;
}

template <typename D> uint32_t impl_IAppBroadcastStreamReader<D>::AudioSampleRate() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppBroadcastStreamReader)->get_AudioSampleRate(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IAppBroadcastStreamReader<D>::AudioAacSequence() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(WINRT_SHIM(IAppBroadcastStreamReader)->get_AudioAacSequence(put_abi(value)));
    return value;
}

template <typename D> uint32_t impl_IAppBroadcastStreamReader<D>::AudioBitrate() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppBroadcastStreamReader)->get_AudioBitrate(&value));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastStreamAudioFrame impl_IAppBroadcastStreamReader<D>::TryGetNextAudioFrame() const
{
    Windows::Media::Capture::AppBroadcastStreamAudioFrame frame { nullptr };
    check_hresult(WINRT_SHIM(IAppBroadcastStreamReader)->abi_TryGetNextAudioFrame(put_abi(frame)));
    return frame;
}

template <typename D> uint32_t impl_IAppBroadcastStreamReader<D>::VideoWidth() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppBroadcastStreamReader)->get_VideoWidth(&value));
    return value;
}

template <typename D> uint32_t impl_IAppBroadcastStreamReader<D>::VideoHeight() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppBroadcastStreamReader)->get_VideoHeight(&value));
    return value;
}

template <typename D> uint32_t impl_IAppBroadcastStreamReader<D>::VideoBitrate() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppBroadcastStreamReader)->get_VideoBitrate(&value));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastStreamVideoFrame impl_IAppBroadcastStreamReader<D>::TryGetNextVideoFrame() const
{
    Windows::Media::Capture::AppBroadcastStreamVideoFrame frame { nullptr };
    check_hresult(WINRT_SHIM(IAppBroadcastStreamReader)->abi_TryGetNextVideoFrame(put_abi(frame)));
    return frame;
}

template <typename D> event_token impl_IAppBroadcastStreamReader<D>::AudioFrameArrived(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IAppBroadcastStreamReader)->add_AudioFrameArrived(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IAppBroadcastStreamReader> impl_IAppBroadcastStreamReader<D>::AudioFrameArrived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IAppBroadcastStreamReader>(this, &ABI::Windows::Media::Capture::IAppBroadcastStreamReader::remove_AudioFrameArrived, AudioFrameArrived(value));
}

template <typename D> void impl_IAppBroadcastStreamReader<D>::AudioFrameArrived(event_token token) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastStreamReader)->remove_AudioFrameArrived(token));
}

template <typename D> event_token impl_IAppBroadcastStreamReader<D>::VideoFrameArrived(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IAppBroadcastStreamReader)->add_VideoFrameArrived(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IAppBroadcastStreamReader> impl_IAppBroadcastStreamReader<D>::VideoFrameArrived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IAppBroadcastStreamReader>(this, &ABI::Windows::Media::Capture::IAppBroadcastStreamReader::remove_VideoFrameArrived, VideoFrameArrived(value));
}

template <typename D> void impl_IAppBroadcastStreamReader<D>::VideoFrameArrived(event_token token) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastStreamReader)->remove_VideoFrameArrived(token));
}

template <typename D> Windows::Media::Capture::AppBroadcastStreamVideoHeader impl_IAppBroadcastStreamVideoFrame<D>::VideoHeader() const
{
    Windows::Media::Capture::AppBroadcastStreamVideoHeader value { nullptr };
    check_hresult(WINRT_SHIM(IAppBroadcastStreamVideoFrame)->get_VideoHeader(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IAppBroadcastStreamVideoFrame<D>::VideoBuffer() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(WINRT_SHIM(IAppBroadcastStreamVideoFrame)->get_VideoBuffer(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastStreamAudioHeader impl_IAppBroadcastStreamAudioFrame<D>::AudioHeader() const
{
    Windows::Media::Capture::AppBroadcastStreamAudioHeader value { nullptr };
    check_hresult(WINRT_SHIM(IAppBroadcastStreamAudioFrame)->get_AudioHeader(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IAppBroadcastStreamAudioFrame<D>::AudioBuffer() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(WINRT_SHIM(IAppBroadcastStreamAudioFrame)->get_AudioBuffer(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IAppBroadcastStreamAudioHeader<D>::AbsoluteTimestamp() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(WINRT_SHIM(IAppBroadcastStreamAudioHeader)->get_AbsoluteTimestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IAppBroadcastStreamAudioHeader<D>::RelativeTimestamp() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(WINRT_SHIM(IAppBroadcastStreamAudioHeader)->get_RelativeTimestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IAppBroadcastStreamAudioHeader<D>::Duration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(WINRT_SHIM(IAppBroadcastStreamAudioHeader)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> bool impl_IAppBroadcastStreamAudioHeader<D>::HasDiscontinuity() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppBroadcastStreamAudioHeader)->get_HasDiscontinuity(&value));
    return value;
}

template <typename D> uint64_t impl_IAppBroadcastStreamAudioHeader<D>::FrameId() const
{
    uint64_t value {};
    check_hresult(WINRT_SHIM(IAppBroadcastStreamAudioHeader)->get_FrameId(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IAppBroadcastStreamVideoHeader<D>::AbsoluteTimestamp() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(WINRT_SHIM(IAppBroadcastStreamVideoHeader)->get_AbsoluteTimestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IAppBroadcastStreamVideoHeader<D>::RelativeTimestamp() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(WINRT_SHIM(IAppBroadcastStreamVideoHeader)->get_RelativeTimestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IAppBroadcastStreamVideoHeader<D>::Duration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(WINRT_SHIM(IAppBroadcastStreamVideoHeader)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> bool impl_IAppBroadcastStreamVideoHeader<D>::IsKeyFrame() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppBroadcastStreamVideoHeader)->get_IsKeyFrame(&value));
    return value;
}

template <typename D> bool impl_IAppBroadcastStreamVideoHeader<D>::HasDiscontinuity() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppBroadcastStreamVideoHeader)->get_HasDiscontinuity(&value));
    return value;
}

template <typename D> uint64_t impl_IAppBroadcastStreamVideoHeader<D>::FrameId() const
{
    uint64_t value {};
    check_hresult(WINRT_SHIM(IAppBroadcastStreamVideoHeader)->get_FrameId(&value));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastBackgroundService impl_IAppBroadcastTriggerDetails<D>::BackgroundService() const
{
    Windows::Media::Capture::AppBroadcastBackgroundService value { nullptr };
    check_hresult(WINRT_SHIM(IAppBroadcastTriggerDetails)->get_BackgroundService(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastPlugInManager impl_IAppBroadcastPlugInManagerStatics<D>::GetDefault() const
{
    Windows::Media::Capture::AppBroadcastPlugInManager ppInstance { nullptr };
    check_hresult(WINRT_SHIM(IAppBroadcastPlugInManagerStatics)->abi_GetDefault(put_abi(ppInstance)));
    return ppInstance;
}

template <typename D> Windows::Media::Capture::AppBroadcastPlugInManager impl_IAppBroadcastPlugInManagerStatics<D>::GetForUser(const Windows::System::User & user) const
{
    Windows::Media::Capture::AppBroadcastPlugInManager ppInstance { nullptr };
    check_hresult(WINRT_SHIM(IAppBroadcastPlugInManagerStatics)->abi_GetForUser(get_abi(user), put_abi(ppInstance)));
    return ppInstance;
}

template <typename D> bool impl_IAppBroadcastPlugInManager<D>::IsBroadcastProviderAvailable() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppBroadcastPlugInManager)->get_IsBroadcastProviderAvailable(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::AppBroadcastPlugIn> impl_IAppBroadcastPlugInManager<D>::PlugInList() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::AppBroadcastPlugIn> value;
    check_hresult(WINRT_SHIM(IAppBroadcastPlugInManager)->get_PlugInList(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastPlugIn impl_IAppBroadcastPlugInManager<D>::DefaultPlugIn() const
{
    Windows::Media::Capture::AppBroadcastPlugIn value { nullptr };
    check_hresult(WINRT_SHIM(IAppBroadcastPlugInManager)->get_DefaultPlugIn(put_abi(value)));
    return value;
}

template <typename D> void impl_IAppBroadcastPlugInManager<D>::DefaultPlugIn(const Windows::Media::Capture::AppBroadcastPlugIn & value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastPlugInManager)->put_DefaultPlugIn(get_abi(value)));
}

template <typename D> hstring impl_IAppBroadcastPlugIn<D>::AppId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IAppBroadcastPlugIn)->get_AppId(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastProviderSettings impl_IAppBroadcastPlugIn<D>::ProviderSettings() const
{
    Windows::Media::Capture::AppBroadcastProviderSettings value { nullptr };
    check_hresult(WINRT_SHIM(IAppBroadcastPlugIn)->get_ProviderSettings(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference impl_IAppBroadcastPlugIn<D>::Logo() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value;
    check_hresult(WINRT_SHIM(IAppBroadcastPlugIn)->get_Logo(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IAppBroadcastPlugIn<D>::DisplayName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IAppBroadcastPlugIn)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastCaptureTargetType impl_IAppBroadcastServices<D>::CaptureTargetType() const
{
    Windows::Media::Capture::AppBroadcastCaptureTargetType value {};
    check_hresult(WINRT_SHIM(IAppBroadcastServices)->get_CaptureTargetType(&value));
    return value;
}

template <typename D> void impl_IAppBroadcastServices<D>::CaptureTargetType(Windows::Media::Capture::AppBroadcastCaptureTargetType value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastServices)->put_CaptureTargetType(value));
}

template <typename D> hstring impl_IAppBroadcastServices<D>::BroadcastTitle() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IAppBroadcastServices)->get_BroadcastTitle(put_abi(value)));
    return value;
}

template <typename D> void impl_IAppBroadcastServices<D>::BroadcastTitle(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastServices)->put_BroadcastTitle(get_abi(value)));
}

template <typename D> hstring impl_IAppBroadcastServices<D>::BroadcastLanguage() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IAppBroadcastServices)->get_BroadcastLanguage(put_abi(value)));
    return value;
}

template <typename D> void impl_IAppBroadcastServices<D>::BroadcastLanguage(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastServices)->put_BroadcastLanguage(get_abi(value)));
}

template <typename D> hstring impl_IAppBroadcastServices<D>::UserName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IAppBroadcastServices)->get_UserName(put_abi(value)));
    return value;
}

template <typename D> bool impl_IAppBroadcastServices<D>::CanCapture() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppBroadcastServices)->get_CanCapture(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<uint32_t> impl_IAppBroadcastServices<D>::EnterBroadcastModeAsync(const Windows::Media::Capture::AppBroadcastPlugIn & plugIn) const
{
    Windows::Foundation::IAsyncOperation<uint32_t> operation;
    check_hresult(WINRT_SHIM(IAppBroadcastServices)->abi_EnterBroadcastModeAsync(get_abi(plugIn), put_abi(operation)));
    return operation;
}

template <typename D> void impl_IAppBroadcastServices<D>::ExitBroadcastMode(Windows::Media::Capture::AppBroadcastExitBroadcastModeReason reason) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastServices)->abi_ExitBroadcastMode(reason));
}

template <typename D> void impl_IAppBroadcastServices<D>::StartBroadcast() const
{
    check_hresult(WINRT_SHIM(IAppBroadcastServices)->abi_StartBroadcast());
}

template <typename D> void impl_IAppBroadcastServices<D>::PauseBroadcast() const
{
    check_hresult(WINRT_SHIM(IAppBroadcastServices)->abi_PauseBroadcast());
}

template <typename D> void impl_IAppBroadcastServices<D>::ResumeBroadcast() const
{
    check_hresult(WINRT_SHIM(IAppBroadcastServices)->abi_ResumeBroadcast());
}

template <typename D> Windows::Media::Capture::AppBroadcastPreview impl_IAppBroadcastServices<D>::StartPreview(const Windows::Foundation::Size & desiredSize) const
{
    Windows::Media::Capture::AppBroadcastPreview preview { nullptr };
    check_hresult(WINRT_SHIM(IAppBroadcastServices)->abi_StartPreview(get_abi(desiredSize), put_abi(preview)));
    return preview;
}

template <typename D> Windows::Media::Capture::AppBroadcastState impl_IAppBroadcastServices<D>::State() const
{
    Windows::Media::Capture::AppBroadcastState value { nullptr };
    check_hresult(WINRT_SHIM(IAppBroadcastServices)->get_State(put_abi(value)));
    return value;
}

template <typename D> bool impl_IAppBroadcastState<D>::IsCaptureTargetRunning() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppBroadcastState)->get_IsCaptureTargetRunning(&value));
    return value;
}

template <typename D> uint32_t impl_IAppBroadcastState<D>::ViewerCount() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppBroadcastState)->get_ViewerCount(&value));
    return value;
}

template <typename D> bool impl_IAppBroadcastState<D>::ShouldCaptureMicrophone() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppBroadcastState)->get_ShouldCaptureMicrophone(&value));
    return value;
}

template <typename D> void impl_IAppBroadcastState<D>::ShouldCaptureMicrophone(bool value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastState)->put_ShouldCaptureMicrophone(value));
}

template <typename D> void impl_IAppBroadcastState<D>::RestartMicrophoneCapture() const
{
    check_hresult(WINRT_SHIM(IAppBroadcastState)->abi_RestartMicrophoneCapture());
}

template <typename D> bool impl_IAppBroadcastState<D>::ShouldCaptureCamera() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppBroadcastState)->get_ShouldCaptureCamera(&value));
    return value;
}

template <typename D> void impl_IAppBroadcastState<D>::ShouldCaptureCamera(bool value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastState)->put_ShouldCaptureCamera(value));
}

template <typename D> void impl_IAppBroadcastState<D>::RestartCameraCapture() const
{
    check_hresult(WINRT_SHIM(IAppBroadcastState)->abi_RestartCameraCapture());
}

template <typename D> Windows::Foundation::Size impl_IAppBroadcastState<D>::EncodedVideoSize() const
{
    Windows::Foundation::Size value {};
    check_hresult(WINRT_SHIM(IAppBroadcastState)->get_EncodedVideoSize(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastMicrophoneCaptureState impl_IAppBroadcastState<D>::MicrophoneCaptureState() const
{
    Windows::Media::Capture::AppBroadcastMicrophoneCaptureState value {};
    check_hresult(WINRT_SHIM(IAppBroadcastState)->get_MicrophoneCaptureState(&value));
    return value;
}

template <typename D> uint32_t impl_IAppBroadcastState<D>::MicrophoneCaptureError() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppBroadcastState)->get_MicrophoneCaptureError(&value));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastCameraCaptureState impl_IAppBroadcastState<D>::CameraCaptureState() const
{
    Windows::Media::Capture::AppBroadcastCameraCaptureState value {};
    check_hresult(WINRT_SHIM(IAppBroadcastState)->get_CameraCaptureState(&value));
    return value;
}

template <typename D> uint32_t impl_IAppBroadcastState<D>::CameraCaptureError() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppBroadcastState)->get_CameraCaptureError(&value));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastStreamState impl_IAppBroadcastState<D>::StreamState() const
{
    Windows::Media::Capture::AppBroadcastStreamState value {};
    check_hresult(WINRT_SHIM(IAppBroadcastState)->get_StreamState(&value));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastPlugInState impl_IAppBroadcastState<D>::PlugInState() const
{
    Windows::Media::Capture::AppBroadcastPlugInState value {};
    check_hresult(WINRT_SHIM(IAppBroadcastState)->get_PlugInState(&value));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IAppBroadcastState<D>::OAuthRequestUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(WINRT_SHIM(IAppBroadcastState)->get_OAuthRequestUri(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IAppBroadcastState<D>::OAuthCallbackUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(WINRT_SHIM(IAppBroadcastState)->get_OAuthCallbackUri(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::WebAuthenticationResult impl_IAppBroadcastState<D>::AuthenticationResult() const
{
    Windows::Security::Authentication::Web::WebAuthenticationResult value { nullptr };
    check_hresult(WINRT_SHIM(IAppBroadcastState)->get_AuthenticationResult(put_abi(value)));
    return value;
}

template <typename D> void impl_IAppBroadcastState<D>::AuthenticationResult(const Windows::Security::Authentication::Web::WebAuthenticationResult & value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastState)->put_AuthenticationResult(get_abi(value)));
}

template <typename D> void impl_IAppBroadcastState<D>::SignInState(Windows::Media::Capture::AppBroadcastSignInState value) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastState)->put_SignInState(value));
}

template <typename D> Windows::Media::Capture::AppBroadcastSignInState impl_IAppBroadcastState<D>::SignInState() const
{
    Windows::Media::Capture::AppBroadcastSignInState value {};
    check_hresult(WINRT_SHIM(IAppBroadcastState)->get_SignInState(&value));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastTerminationReason impl_IAppBroadcastState<D>::TerminationReason() const
{
    Windows::Media::Capture::AppBroadcastTerminationReason value {};
    check_hresult(WINRT_SHIM(IAppBroadcastState)->get_TerminationReason(&value));
    return value;
}

template <typename D> uint32_t impl_IAppBroadcastState<D>::TerminationReasonPlugInSpecific() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppBroadcastState)->get_TerminationReasonPlugInSpecific(&value));
    return value;
}

template <typename D> event_token impl_IAppBroadcastState<D>::ViewerCountChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IAppBroadcastState)->add_ViewerCountChanged(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IAppBroadcastState> impl_IAppBroadcastState<D>::ViewerCountChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IAppBroadcastState>(this, &ABI::Windows::Media::Capture::IAppBroadcastState::remove_ViewerCountChanged, ViewerCountChanged(value));
}

template <typename D> void impl_IAppBroadcastState<D>::ViewerCountChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastState)->remove_ViewerCountChanged(token));
}

template <typename D> event_token impl_IAppBroadcastState<D>::MicrophoneCaptureStateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IAppBroadcastState)->add_MicrophoneCaptureStateChanged(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IAppBroadcastState> impl_IAppBroadcastState<D>::MicrophoneCaptureStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IAppBroadcastState>(this, &ABI::Windows::Media::Capture::IAppBroadcastState::remove_MicrophoneCaptureStateChanged, MicrophoneCaptureStateChanged(value));
}

template <typename D> void impl_IAppBroadcastState<D>::MicrophoneCaptureStateChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastState)->remove_MicrophoneCaptureStateChanged(token));
}

template <typename D> event_token impl_IAppBroadcastState<D>::CameraCaptureStateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IAppBroadcastState)->add_CameraCaptureStateChanged(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IAppBroadcastState> impl_IAppBroadcastState<D>::CameraCaptureStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IAppBroadcastState>(this, &ABI::Windows::Media::Capture::IAppBroadcastState::remove_CameraCaptureStateChanged, CameraCaptureStateChanged(value));
}

template <typename D> void impl_IAppBroadcastState<D>::CameraCaptureStateChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastState)->remove_CameraCaptureStateChanged(token));
}

template <typename D> event_token impl_IAppBroadcastState<D>::PlugInStateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IAppBroadcastState)->add_PlugInStateChanged(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IAppBroadcastState> impl_IAppBroadcastState<D>::PlugInStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAppBroadcastState>(this, &ABI::Windows::Media::Capture::IAppBroadcastState::remove_PlugInStateChanged, PlugInStateChanged(handler));
}

template <typename D> void impl_IAppBroadcastState<D>::PlugInStateChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastState)->remove_PlugInStateChanged(token));
}

template <typename D> event_token impl_IAppBroadcastState<D>::StreamStateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IAppBroadcastState)->add_StreamStateChanged(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IAppBroadcastState> impl_IAppBroadcastState<D>::StreamStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAppBroadcastState>(this, &ABI::Windows::Media::Capture::IAppBroadcastState::remove_StreamStateChanged, StreamStateChanged(handler));
}

template <typename D> void impl_IAppBroadcastState<D>::StreamStateChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastState)->remove_StreamStateChanged(token));
}

template <typename D> event_token impl_IAppBroadcastState<D>::CaptureTargetClosed(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Foundation::IInspectable> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IAppBroadcastState)->add_CaptureTargetClosed(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IAppBroadcastState> impl_IAppBroadcastState<D>::CaptureTargetClosed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Foundation::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IAppBroadcastState>(this, &ABI::Windows::Media::Capture::IAppBroadcastState::remove_CaptureTargetClosed, CaptureTargetClosed(value));
}

template <typename D> void impl_IAppBroadcastState<D>::CaptureTargetClosed(event_token token) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastState)->remove_CaptureTargetClosed(token));
}

template <typename D> void impl_IAppBroadcastPreview<D>::StopPreview() const
{
    check_hresult(WINRT_SHIM(IAppBroadcastPreview)->abi_StopPreview());
}

template <typename D> Windows::Media::Capture::AppBroadcastPreviewState impl_IAppBroadcastPreview<D>::PreviewState() const
{
    Windows::Media::Capture::AppBroadcastPreviewState value {};
    check_hresult(WINRT_SHIM(IAppBroadcastPreview)->get_PreviewState(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_IAppBroadcastPreview<D>::ErrorCode() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(WINRT_SHIM(IAppBroadcastPreview)->get_ErrorCode(put_abi(value)));
    return value;
}

template <typename D> event_token impl_IAppBroadcastPreview<D>::PreviewStateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreview, Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IAppBroadcastPreview)->add_PreviewStateChanged(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IAppBroadcastPreview> impl_IAppBroadcastPreview<D>::PreviewStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreview, Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IAppBroadcastPreview>(this, &ABI::Windows::Media::Capture::IAppBroadcastPreview::remove_PreviewStateChanged, PreviewStateChanged(value));
}

template <typename D> void impl_IAppBroadcastPreview<D>::PreviewStateChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastPreview)->remove_PreviewStateChanged(token));
}

template <typename D> Windows::Media::Capture::AppBroadcastPreviewStreamReader impl_IAppBroadcastPreview<D>::PreviewStreamReader() const
{
    Windows::Media::Capture::AppBroadcastPreviewStreamReader value { nullptr };
    check_hresult(WINRT_SHIM(IAppBroadcastPreview)->get_PreviewStreamReader(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastPlugInState impl_IAppBroadcastPlugInStateChangedEventArgs<D>::PlugInState() const
{
    Windows::Media::Capture::AppBroadcastPlugInState value {};
    check_hresult(WINRT_SHIM(IAppBroadcastPlugInStateChangedEventArgs)->get_PlugInState(&value));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastPreviewState impl_IAppBroadcastPreviewStateChangedEventArgs<D>::PreviewState() const
{
    Windows::Media::Capture::AppBroadcastPreviewState value {};
    check_hresult(WINRT_SHIM(IAppBroadcastPreviewStateChangedEventArgs)->get_PreviewState(&value));
    return value;
}

template <typename D> uint32_t impl_IAppBroadcastPreviewStateChangedEventArgs<D>::ErrorCode() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppBroadcastPreviewStateChangedEventArgs)->get_ErrorCode(&value));
    return value;
}

template <typename D> uint32_t impl_IAppBroadcastPreviewStreamReader<D>::VideoWidth() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppBroadcastPreviewStreamReader)->get_VideoWidth(&value));
    return value;
}

template <typename D> uint32_t impl_IAppBroadcastPreviewStreamReader<D>::VideoHeight() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppBroadcastPreviewStreamReader)->get_VideoHeight(&value));
    return value;
}

template <typename D> uint32_t impl_IAppBroadcastPreviewStreamReader<D>::VideoStride() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppBroadcastPreviewStreamReader)->get_VideoStride(&value));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapPixelFormat impl_IAppBroadcastPreviewStreamReader<D>::VideoBitmapPixelFormat() const
{
    Windows::Graphics::Imaging::BitmapPixelFormat value {};
    check_hresult(WINRT_SHIM(IAppBroadcastPreviewStreamReader)->get_VideoBitmapPixelFormat(&value));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapAlphaMode impl_IAppBroadcastPreviewStreamReader<D>::VideoBitmapAlphaMode() const
{
    Windows::Graphics::Imaging::BitmapAlphaMode value {};
    check_hresult(WINRT_SHIM(IAppBroadcastPreviewStreamReader)->get_VideoBitmapAlphaMode(&value));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastPreviewStreamVideoFrame impl_IAppBroadcastPreviewStreamReader<D>::TryGetNextVideoFrame() const
{
    Windows::Media::Capture::AppBroadcastPreviewStreamVideoFrame frame { nullptr };
    check_hresult(WINRT_SHIM(IAppBroadcastPreviewStreamReader)->abi_TryGetNextVideoFrame(put_abi(frame)));
    return frame;
}

template <typename D> event_token impl_IAppBroadcastPreviewStreamReader<D>::VideoFrameArrived(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreviewStreamReader, Windows::Foundation::IInspectable> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IAppBroadcastPreviewStreamReader)->add_VideoFrameArrived(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IAppBroadcastPreviewStreamReader> impl_IAppBroadcastPreviewStreamReader<D>::VideoFrameArrived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreviewStreamReader, Windows::Foundation::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IAppBroadcastPreviewStreamReader>(this, &ABI::Windows::Media::Capture::IAppBroadcastPreviewStreamReader::remove_VideoFrameArrived, VideoFrameArrived(value));
}

template <typename D> void impl_IAppBroadcastPreviewStreamReader<D>::VideoFrameArrived(event_token token) const
{
    check_hresult(WINRT_SHIM(IAppBroadcastPreviewStreamReader)->remove_VideoFrameArrived(token));
}

template <typename D> Windows::Media::Capture::AppBroadcastPreviewStreamVideoHeader impl_IAppBroadcastPreviewStreamVideoFrame<D>::VideoHeader() const
{
    Windows::Media::Capture::AppBroadcastPreviewStreamVideoHeader value { nullptr };
    check_hresult(WINRT_SHIM(IAppBroadcastPreviewStreamVideoFrame)->get_VideoHeader(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IAppBroadcastPreviewStreamVideoFrame<D>::VideoBuffer() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(WINRT_SHIM(IAppBroadcastPreviewStreamVideoFrame)->get_VideoBuffer(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IAppBroadcastPreviewStreamVideoHeader<D>::AbsoluteTimestamp() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(WINRT_SHIM(IAppBroadcastPreviewStreamVideoHeader)->get_AbsoluteTimestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IAppBroadcastPreviewStreamVideoHeader<D>::RelativeTimestamp() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(WINRT_SHIM(IAppBroadcastPreviewStreamVideoHeader)->get_RelativeTimestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IAppBroadcastPreviewStreamVideoHeader<D>::Duration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(WINRT_SHIM(IAppBroadcastPreviewStreamVideoHeader)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> uint64_t impl_IAppBroadcastPreviewStreamVideoHeader<D>::FrameId() const
{
    uint64_t value {};
    check_hresult(WINRT_SHIM(IAppBroadcastPreviewStreamVideoHeader)->get_FrameId(&value));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastMicrophoneCaptureState impl_IAppBroadcastMicrophoneCaptureStateChangedEventArgs<D>::State() const
{
    Windows::Media::Capture::AppBroadcastMicrophoneCaptureState value {};
    check_hresult(WINRT_SHIM(IAppBroadcastMicrophoneCaptureStateChangedEventArgs)->get_State(&value));
    return value;
}

template <typename D> uint32_t impl_IAppBroadcastMicrophoneCaptureStateChangedEventArgs<D>::ErrorCode() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppBroadcastMicrophoneCaptureStateChangedEventArgs)->get_ErrorCode(&value));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastCameraCaptureState impl_IAppBroadcastCameraCaptureStateChangedEventArgs<D>::State() const
{
    Windows::Media::Capture::AppBroadcastCameraCaptureState value {};
    check_hresult(WINRT_SHIM(IAppBroadcastCameraCaptureStateChangedEventArgs)->get_State(&value));
    return value;
}

template <typename D> uint32_t impl_IAppBroadcastCameraCaptureStateChangedEventArgs<D>::ErrorCode() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppBroadcastCameraCaptureStateChangedEventArgs)->get_ErrorCode(&value));
    return value;
}

template <typename D> uint32_t impl_IAppBroadcastViewerCountChangedEventArgs<D>::ViewerCount() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppBroadcastViewerCountChangedEventArgs)->get_ViewerCount(&value));
    return value;
}

template <typename D> Windows::Media::Capture::AppCaptureSettings impl_IAppCaptureManagerStatics<D>::GetCurrentSettings() const
{
    Windows::Media::Capture::AppCaptureSettings value { nullptr };
    check_hresult(WINRT_SHIM(IAppCaptureManagerStatics)->abi_GetCurrentSettings(put_abi(value)));
    return value;
}

template <typename D> void impl_IAppCaptureManagerStatics<D>::ApplySettings(const Windows::Media::Capture::AppCaptureSettings & appCaptureSettings) const
{
    check_hresult(WINRT_SHIM(IAppCaptureManagerStatics)->abi_ApplySettings(get_abi(appCaptureSettings)));
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys<D>::ToggleGameBarKey(Windows::System::VirtualKey value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys)->put_ToggleGameBarKey(value));
}

template <typename D> Windows::System::VirtualKey impl_IAppCaptureAlternateShortcutKeys<D>::ToggleGameBarKey() const
{
    Windows::System::VirtualKey value {};
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys)->get_ToggleGameBarKey(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys<D>::ToggleGameBarKeyModifiers(Windows::System::VirtualKeyModifiers value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys)->put_ToggleGameBarKeyModifiers(value));
}

template <typename D> Windows::System::VirtualKeyModifiers impl_IAppCaptureAlternateShortcutKeys<D>::ToggleGameBarKeyModifiers() const
{
    Windows::System::VirtualKeyModifiers value {};
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys)->get_ToggleGameBarKeyModifiers(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys<D>::SaveHistoricalVideoKey(Windows::System::VirtualKey value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys)->put_SaveHistoricalVideoKey(value));
}

template <typename D> Windows::System::VirtualKey impl_IAppCaptureAlternateShortcutKeys<D>::SaveHistoricalVideoKey() const
{
    Windows::System::VirtualKey value {};
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys)->get_SaveHistoricalVideoKey(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys<D>::SaveHistoricalVideoKeyModifiers(Windows::System::VirtualKeyModifiers value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys)->put_SaveHistoricalVideoKeyModifiers(value));
}

template <typename D> Windows::System::VirtualKeyModifiers impl_IAppCaptureAlternateShortcutKeys<D>::SaveHistoricalVideoKeyModifiers() const
{
    Windows::System::VirtualKeyModifiers value {};
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys)->get_SaveHistoricalVideoKeyModifiers(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys<D>::ToggleRecordingKey(Windows::System::VirtualKey value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys)->put_ToggleRecordingKey(value));
}

template <typename D> Windows::System::VirtualKey impl_IAppCaptureAlternateShortcutKeys<D>::ToggleRecordingKey() const
{
    Windows::System::VirtualKey value {};
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys)->get_ToggleRecordingKey(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys<D>::ToggleRecordingKeyModifiers(Windows::System::VirtualKeyModifiers value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys)->put_ToggleRecordingKeyModifiers(value));
}

template <typename D> Windows::System::VirtualKeyModifiers impl_IAppCaptureAlternateShortcutKeys<D>::ToggleRecordingKeyModifiers() const
{
    Windows::System::VirtualKeyModifiers value {};
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys)->get_ToggleRecordingKeyModifiers(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys<D>::TakeScreenshotKey(Windows::System::VirtualKey value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys)->put_TakeScreenshotKey(value));
}

template <typename D> Windows::System::VirtualKey impl_IAppCaptureAlternateShortcutKeys<D>::TakeScreenshotKey() const
{
    Windows::System::VirtualKey value {};
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys)->get_TakeScreenshotKey(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys<D>::TakeScreenshotKeyModifiers(Windows::System::VirtualKeyModifiers value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys)->put_TakeScreenshotKeyModifiers(value));
}

template <typename D> Windows::System::VirtualKeyModifiers impl_IAppCaptureAlternateShortcutKeys<D>::TakeScreenshotKeyModifiers() const
{
    Windows::System::VirtualKeyModifiers value {};
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys)->get_TakeScreenshotKeyModifiers(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys<D>::ToggleRecordingIndicatorKey(Windows::System::VirtualKey value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys)->put_ToggleRecordingIndicatorKey(value));
}

template <typename D> Windows::System::VirtualKey impl_IAppCaptureAlternateShortcutKeys<D>::ToggleRecordingIndicatorKey() const
{
    Windows::System::VirtualKey value {};
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys)->get_ToggleRecordingIndicatorKey(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys<D>::ToggleRecordingIndicatorKeyModifiers(Windows::System::VirtualKeyModifiers value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys)->put_ToggleRecordingIndicatorKeyModifiers(value));
}

template <typename D> Windows::System::VirtualKeyModifiers impl_IAppCaptureAlternateShortcutKeys<D>::ToggleRecordingIndicatorKeyModifiers() const
{
    Windows::System::VirtualKeyModifiers value {};
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys)->get_ToggleRecordingIndicatorKeyModifiers(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys2<D>::ToggleMicrophoneCaptureKey(Windows::System::VirtualKey value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys2)->put_ToggleMicrophoneCaptureKey(value));
}

template <typename D> Windows::System::VirtualKey impl_IAppCaptureAlternateShortcutKeys2<D>::ToggleMicrophoneCaptureKey() const
{
    Windows::System::VirtualKey value {};
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys2)->get_ToggleMicrophoneCaptureKey(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys2<D>::ToggleMicrophoneCaptureKeyModifiers(Windows::System::VirtualKeyModifiers value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys2)->put_ToggleMicrophoneCaptureKeyModifiers(value));
}

template <typename D> Windows::System::VirtualKeyModifiers impl_IAppCaptureAlternateShortcutKeys2<D>::ToggleMicrophoneCaptureKeyModifiers() const
{
    Windows::System::VirtualKeyModifiers value {};
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys2)->get_ToggleMicrophoneCaptureKeyModifiers(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys3<D>::ToggleCameraCaptureKey(Windows::System::VirtualKey value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys3)->put_ToggleCameraCaptureKey(value));
}

template <typename D> Windows::System::VirtualKey impl_IAppCaptureAlternateShortcutKeys3<D>::ToggleCameraCaptureKey() const
{
    Windows::System::VirtualKey value {};
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys3)->get_ToggleCameraCaptureKey(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys3<D>::ToggleCameraCaptureKeyModifiers(Windows::System::VirtualKeyModifiers value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys3)->put_ToggleCameraCaptureKeyModifiers(value));
}

template <typename D> Windows::System::VirtualKeyModifiers impl_IAppCaptureAlternateShortcutKeys3<D>::ToggleCameraCaptureKeyModifiers() const
{
    Windows::System::VirtualKeyModifiers value {};
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys3)->get_ToggleCameraCaptureKeyModifiers(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys3<D>::ToggleBroadcastKey(Windows::System::VirtualKey value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys3)->put_ToggleBroadcastKey(value));
}

template <typename D> Windows::System::VirtualKey impl_IAppCaptureAlternateShortcutKeys3<D>::ToggleBroadcastKey() const
{
    Windows::System::VirtualKey value {};
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys3)->get_ToggleBroadcastKey(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys3<D>::ToggleBroadcastKeyModifiers(Windows::System::VirtualKeyModifiers value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys3)->put_ToggleBroadcastKeyModifiers(value));
}

template <typename D> Windows::System::VirtualKeyModifiers impl_IAppCaptureAlternateShortcutKeys3<D>::ToggleBroadcastKeyModifiers() const
{
    Windows::System::VirtualKeyModifiers value {};
    check_hresult(WINRT_SHIM(IAppCaptureAlternateShortcutKeys3)->get_ToggleBroadcastKeyModifiers(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::AppCaptureDestinationFolder(const Windows::Storage::StorageFolder & value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->put_AppCaptureDestinationFolder(get_abi(value)));
}

template <typename D> Windows::Storage::StorageFolder impl_IAppCaptureSettings<D>::AppCaptureDestinationFolder() const
{
    Windows::Storage::StorageFolder value { nullptr };
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->get_AppCaptureDestinationFolder(put_abi(value)));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::AudioEncodingBitrate(uint32_t value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->put_AudioEncodingBitrate(value));
}

template <typename D> uint32_t impl_IAppCaptureSettings<D>::AudioEncodingBitrate() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->get_AudioEncodingBitrate(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::IsAudioCaptureEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->put_IsAudioCaptureEnabled(value));
}

template <typename D> bool impl_IAppCaptureSettings<D>::IsAudioCaptureEnabled() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->get_IsAudioCaptureEnabled(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::CustomVideoEncodingBitrate(uint32_t value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->put_CustomVideoEncodingBitrate(value));
}

template <typename D> uint32_t impl_IAppCaptureSettings<D>::CustomVideoEncodingBitrate() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->get_CustomVideoEncodingBitrate(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::CustomVideoEncodingHeight(uint32_t value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->put_CustomVideoEncodingHeight(value));
}

template <typename D> uint32_t impl_IAppCaptureSettings<D>::CustomVideoEncodingHeight() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->get_CustomVideoEncodingHeight(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::CustomVideoEncodingWidth(uint32_t value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->put_CustomVideoEncodingWidth(value));
}

template <typename D> uint32_t impl_IAppCaptureSettings<D>::CustomVideoEncodingWidth() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->get_CustomVideoEncodingWidth(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::HistoricalBufferLength(uint32_t value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->put_HistoricalBufferLength(value));
}

template <typename D> uint32_t impl_IAppCaptureSettings<D>::HistoricalBufferLength() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->get_HistoricalBufferLength(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::HistoricalBufferLengthUnit(Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->put_HistoricalBufferLengthUnit(value));
}

template <typename D> Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit impl_IAppCaptureSettings<D>::HistoricalBufferLengthUnit() const
{
    Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit value {};
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->get_HistoricalBufferLengthUnit(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::IsHistoricalCaptureEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->put_IsHistoricalCaptureEnabled(value));
}

template <typename D> bool impl_IAppCaptureSettings<D>::IsHistoricalCaptureEnabled() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->get_IsHistoricalCaptureEnabled(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::IsHistoricalCaptureOnBatteryAllowed(bool value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->put_IsHistoricalCaptureOnBatteryAllowed(value));
}

template <typename D> bool impl_IAppCaptureSettings<D>::IsHistoricalCaptureOnBatteryAllowed() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->get_IsHistoricalCaptureOnBatteryAllowed(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::IsHistoricalCaptureOnWirelessDisplayAllowed(bool value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->put_IsHistoricalCaptureOnWirelessDisplayAllowed(value));
}

template <typename D> bool impl_IAppCaptureSettings<D>::IsHistoricalCaptureOnWirelessDisplayAllowed() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->get_IsHistoricalCaptureOnWirelessDisplayAllowed(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::MaximumRecordLength(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->put_MaximumRecordLength(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan impl_IAppCaptureSettings<D>::MaximumRecordLength() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->get_MaximumRecordLength(put_abi(value)));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::ScreenshotDestinationFolder(const Windows::Storage::StorageFolder & value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->put_ScreenshotDestinationFolder(get_abi(value)));
}

template <typename D> Windows::Storage::StorageFolder impl_IAppCaptureSettings<D>::ScreenshotDestinationFolder() const
{
    Windows::Storage::StorageFolder value { nullptr };
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->get_ScreenshotDestinationFolder(put_abi(value)));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::VideoEncodingBitrateMode(Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->put_VideoEncodingBitrateMode(value));
}

template <typename D> Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode impl_IAppCaptureSettings<D>::VideoEncodingBitrateMode() const
{
    Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode value {};
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->get_VideoEncodingBitrateMode(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::VideoEncodingResolutionMode(Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->put_VideoEncodingResolutionMode(value));
}

template <typename D> Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode impl_IAppCaptureSettings<D>::VideoEncodingResolutionMode() const
{
    Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode value {};
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->get_VideoEncodingResolutionMode(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::IsAppCaptureEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->put_IsAppCaptureEnabled(value));
}

template <typename D> bool impl_IAppCaptureSettings<D>::IsAppCaptureEnabled() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->get_IsAppCaptureEnabled(&value));
    return value;
}

template <typename D> bool impl_IAppCaptureSettings<D>::IsCpuConstrained() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->get_IsCpuConstrained(&value));
    return value;
}

template <typename D> bool impl_IAppCaptureSettings<D>::IsDisabledByPolicy() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->get_IsDisabledByPolicy(&value));
    return value;
}

template <typename D> bool impl_IAppCaptureSettings<D>::IsMemoryConstrained() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->get_IsMemoryConstrained(&value));
    return value;
}

template <typename D> bool impl_IAppCaptureSettings<D>::HasHardwareEncoder() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppCaptureSettings)->get_HasHardwareEncoder(&value));
    return value;
}

template <typename D> bool impl_IAppCaptureSettings2<D>::IsGpuConstrained() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppCaptureSettings2)->get_IsGpuConstrained(&value));
    return value;
}

template <typename D> Windows::Media::Capture::AppCaptureAlternateShortcutKeys impl_IAppCaptureSettings2<D>::AlternateShortcutKeys() const
{
    Windows::Media::Capture::AppCaptureAlternateShortcutKeys value { nullptr };
    check_hresult(WINRT_SHIM(IAppCaptureSettings2)->get_AlternateShortcutKeys(put_abi(value)));
    return value;
}

template <typename D> void impl_IAppCaptureSettings3<D>::IsMicrophoneCaptureEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureSettings3)->put_IsMicrophoneCaptureEnabled(value));
}

template <typename D> bool impl_IAppCaptureSettings3<D>::IsMicrophoneCaptureEnabled() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppCaptureSettings3)->get_IsMicrophoneCaptureEnabled(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings4<D>::IsMicrophoneCaptureEnabledByDefault(bool value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureSettings4)->put_IsMicrophoneCaptureEnabledByDefault(value));
}

template <typename D> bool impl_IAppCaptureSettings4<D>::IsMicrophoneCaptureEnabledByDefault() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppCaptureSettings4)->get_IsMicrophoneCaptureEnabledByDefault(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings4<D>::SystemAudioGain(double value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureSettings4)->put_SystemAudioGain(value));
}

template <typename D> double impl_IAppCaptureSettings4<D>::SystemAudioGain() const
{
    double value {};
    check_hresult(WINRT_SHIM(IAppCaptureSettings4)->get_SystemAudioGain(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings4<D>::MicrophoneGain(double value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureSettings4)->put_MicrophoneGain(value));
}

template <typename D> double impl_IAppCaptureSettings4<D>::MicrophoneGain() const
{
    double value {};
    check_hresult(WINRT_SHIM(IAppCaptureSettings4)->get_MicrophoneGain(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings4<D>::VideoEncodingFrameRateMode(Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureSettings4)->put_VideoEncodingFrameRateMode(value));
}

template <typename D> Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode impl_IAppCaptureSettings4<D>::VideoEncodingFrameRateMode() const
{
    Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode value {};
    check_hresult(WINRT_SHIM(IAppCaptureSettings4)->get_VideoEncodingFrameRateMode(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings5<D>::IsEchoCancellationEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureSettings5)->put_IsEchoCancellationEnabled(value));
}

template <typename D> bool impl_IAppCaptureSettings5<D>::IsEchoCancellationEnabled() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppCaptureSettings5)->get_IsEchoCancellationEnabled(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings5<D>::IsCursorImageCaptureEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureSettings5)->put_IsCursorImageCaptureEnabled(value));
}

template <typename D> bool impl_IAppCaptureSettings5<D>::IsCursorImageCaptureEnabled() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppCaptureSettings5)->get_IsCursorImageCaptureEnabled(&value));
    return value;
}

template <typename D> Windows::Media::Capture::AppCaptureRecordOperation impl_IAppCaptureServices<D>::Record() const
{
    Windows::Media::Capture::AppCaptureRecordOperation operation { nullptr };
    check_hresult(WINRT_SHIM(IAppCaptureServices)->abi_Record(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Media::Capture::AppCaptureRecordOperation impl_IAppCaptureServices<D>::RecordTimeSpan(const Windows::Foundation::DateTime & startTime, const Windows::Foundation::TimeSpan & duration) const
{
    Windows::Media::Capture::AppCaptureRecordOperation operation { nullptr };
    check_hresult(WINRT_SHIM(IAppCaptureServices)->abi_RecordTimeSpan(get_abi(startTime), get_abi(duration), put_abi(operation)));
    return operation;
}

template <typename D> bool impl_IAppCaptureServices<D>::CanCapture() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppCaptureServices)->get_CanCapture(&value));
    return value;
}

template <typename D> Windows::Media::Capture::AppCaptureState impl_IAppCaptureServices<D>::State() const
{
    Windows::Media::Capture::AppCaptureState value { nullptr };
    check_hresult(WINRT_SHIM(IAppCaptureServices)->get_State(put_abi(value)));
    return value;
}

template <typename D> bool impl_IAppCaptureState<D>::IsTargetRunning() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppCaptureState)->get_IsTargetRunning(&value));
    return value;
}

template <typename D> bool impl_IAppCaptureState<D>::IsHistoricalCaptureEnabled() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppCaptureState)->get_IsHistoricalCaptureEnabled(&value));
    return value;
}

template <typename D> bool impl_IAppCaptureState<D>::ShouldCaptureMicrophone() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppCaptureState)->get_ShouldCaptureMicrophone(&value));
    return value;
}

template <typename D> void impl_IAppCaptureState<D>::ShouldCaptureMicrophone(bool value) const
{
    check_hresult(WINRT_SHIM(IAppCaptureState)->put_ShouldCaptureMicrophone(value));
}

template <typename D> void impl_IAppCaptureState<D>::RestartMicrophoneCapture() const
{
    check_hresult(WINRT_SHIM(IAppCaptureState)->abi_RestartMicrophoneCapture());
}

template <typename D> Windows::Media::Capture::AppCaptureMicrophoneCaptureState impl_IAppCaptureState<D>::MicrophoneCaptureState() const
{
    Windows::Media::Capture::AppCaptureMicrophoneCaptureState value {};
    check_hresult(WINRT_SHIM(IAppCaptureState)->get_MicrophoneCaptureState(&value));
    return value;
}

template <typename D> uint32_t impl_IAppCaptureState<D>::MicrophoneCaptureError() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppCaptureState)->get_MicrophoneCaptureError(&value));
    return value;
}

template <typename D> event_token impl_IAppCaptureState<D>::MicrophoneCaptureStateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IAppCaptureState)->add_MicrophoneCaptureStateChanged(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IAppCaptureState> impl_IAppCaptureState<D>::MicrophoneCaptureStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IAppCaptureState>(this, &ABI::Windows::Media::Capture::IAppCaptureState::remove_MicrophoneCaptureStateChanged, MicrophoneCaptureStateChanged(value));
}

template <typename D> void impl_IAppCaptureState<D>::MicrophoneCaptureStateChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IAppCaptureState)->remove_MicrophoneCaptureStateChanged(token));
}

template <typename D> event_token impl_IAppCaptureState<D>::CaptureTargetClosed(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Foundation::IInspectable> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IAppCaptureState)->add_CaptureTargetClosed(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IAppCaptureState> impl_IAppCaptureState<D>::CaptureTargetClosed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Foundation::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IAppCaptureState>(this, &ABI::Windows::Media::Capture::IAppCaptureState::remove_CaptureTargetClosed, CaptureTargetClosed(value));
}

template <typename D> void impl_IAppCaptureState<D>::CaptureTargetClosed(event_token token) const
{
    check_hresult(WINRT_SHIM(IAppCaptureState)->remove_CaptureTargetClosed(token));
}

template <typename D> Windows::Media::Capture::AppCaptureMicrophoneCaptureState impl_IAppCaptureMicrophoneCaptureStateChangedEventArgs<D>::State() const
{
    Windows::Media::Capture::AppCaptureMicrophoneCaptureState value {};
    check_hresult(WINRT_SHIM(IAppCaptureMicrophoneCaptureStateChangedEventArgs)->get_State(&value));
    return value;
}

template <typename D> uint32_t impl_IAppCaptureMicrophoneCaptureStateChangedEventArgs<D>::ErrorCode() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppCaptureMicrophoneCaptureStateChangedEventArgs)->get_ErrorCode(&value));
    return value;
}

template <typename D> void impl_IAppCaptureRecordOperation<D>::StopRecording() const
{
    check_hresult(WINRT_SHIM(IAppCaptureRecordOperation)->abi_StopRecording());
}

template <typename D> Windows::Media::Capture::AppCaptureRecordingState impl_IAppCaptureRecordOperation<D>::State() const
{
    Windows::Media::Capture::AppCaptureRecordingState value {};
    check_hresult(WINRT_SHIM(IAppCaptureRecordOperation)->get_State(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_IAppCaptureRecordOperation<D>::ErrorCode() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(WINRT_SHIM(IAppCaptureRecordOperation)->get_ErrorCode(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> impl_IAppCaptureRecordOperation<D>::Duration() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value;
    check_hresult(WINRT_SHIM(IAppCaptureRecordOperation)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFile impl_IAppCaptureRecordOperation<D>::File() const
{
    Windows::Storage::StorageFile value { nullptr };
    check_hresult(WINRT_SHIM(IAppCaptureRecordOperation)->get_File(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<bool> impl_IAppCaptureRecordOperation<D>::IsFileTruncated() const
{
    Windows::Foundation::IReference<bool> value;
    check_hresult(WINRT_SHIM(IAppCaptureRecordOperation)->get_IsFileTruncated(put_abi(value)));
    return value;
}

template <typename D> event_token impl_IAppCaptureRecordOperation<D>::StateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IAppCaptureRecordOperation)->add_StateChanged(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IAppCaptureRecordOperation> impl_IAppCaptureRecordOperation<D>::StateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IAppCaptureRecordOperation>(this, &ABI::Windows::Media::Capture::IAppCaptureRecordOperation::remove_StateChanged, StateChanged(value));
}

template <typename D> void impl_IAppCaptureRecordOperation<D>::StateChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IAppCaptureRecordOperation)->remove_StateChanged(token));
}

template <typename D> event_token impl_IAppCaptureRecordOperation<D>::DurationGenerated(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IAppCaptureRecordOperation)->add_DurationGenerated(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IAppCaptureRecordOperation> impl_IAppCaptureRecordOperation<D>::DurationGenerated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IAppCaptureRecordOperation>(this, &ABI::Windows::Media::Capture::IAppCaptureRecordOperation::remove_DurationGenerated, DurationGenerated(value));
}

template <typename D> void impl_IAppCaptureRecordOperation<D>::DurationGenerated(event_token token) const
{
    check_hresult(WINRT_SHIM(IAppCaptureRecordOperation)->remove_DurationGenerated(token));
}

template <typename D> event_token impl_IAppCaptureRecordOperation<D>::FileGenerated(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureFileGeneratedEventArgs> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IAppCaptureRecordOperation)->add_FileGenerated(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IAppCaptureRecordOperation> impl_IAppCaptureRecordOperation<D>::FileGenerated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureFileGeneratedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IAppCaptureRecordOperation>(this, &ABI::Windows::Media::Capture::IAppCaptureRecordOperation::remove_FileGenerated, FileGenerated(value));
}

template <typename D> void impl_IAppCaptureRecordOperation<D>::FileGenerated(event_token token) const
{
    check_hresult(WINRT_SHIM(IAppCaptureRecordOperation)->remove_FileGenerated(token));
}

template <typename D> Windows::Media::Capture::AppCaptureRecordingState impl_IAppCaptureRecordingStateChangedEventArgs<D>::State() const
{
    Windows::Media::Capture::AppCaptureRecordingState value {};
    check_hresult(WINRT_SHIM(IAppCaptureRecordingStateChangedEventArgs)->get_State(&value));
    return value;
}

template <typename D> uint32_t impl_IAppCaptureRecordingStateChangedEventArgs<D>::ErrorCode() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IAppCaptureRecordingStateChangedEventArgs)->get_ErrorCode(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IAppCaptureDurationGeneratedEventArgs<D>::Duration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(WINRT_SHIM(IAppCaptureDurationGeneratedEventArgs)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFile impl_IAppCaptureFileGeneratedEventArgs<D>::File() const
{
    Windows::Storage::StorageFile value { nullptr };
    check_hresult(WINRT_SHIM(IAppCaptureFileGeneratedEventArgs)->get_File(put_abi(value)));
    return value;
}

template <typename D> void impl_ICameraOptionsUIStatics<D>::Show(const Windows::Media::Capture::MediaCapture & mediaCapture) const
{
    check_hresult(WINRT_SHIM(ICameraOptionsUIStatics)->abi_Show(get_abi(mediaCapture)));
}

template <typename D> Windows::Media::Capture::GameBarServicesManager impl_IGameBarServicesManagerStatics<D>::GetDefault() const
{
    Windows::Media::Capture::GameBarServicesManager ppInstance { nullptr };
    check_hresult(WINRT_SHIM(IGameBarServicesManagerStatics)->abi_GetDefault(put_abi(ppInstance)));
    return ppInstance;
}

template <typename D> event_token impl_IGameBarServicesManager<D>::GameBarServicesCreated(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServicesManager, Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IGameBarServicesManager)->add_GameBarServicesCreated(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IGameBarServicesManager> impl_IGameBarServicesManager<D>::GameBarServicesCreated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServicesManager, Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IGameBarServicesManager>(this, &ABI::Windows::Media::Capture::IGameBarServicesManager::remove_GameBarServicesCreated, GameBarServicesCreated(value));
}

template <typename D> void impl_IGameBarServicesManager<D>::GameBarServicesCreated(event_token token) const
{
    check_hresult(WINRT_SHIM(IGameBarServicesManager)->remove_GameBarServicesCreated(token));
}

template <typename D> Windows::Media::Capture::GameBarServices impl_IGameBarServicesManagerGameBarServicesCreatedEventArgs<D>::GameBarServices() const
{
    Windows::Media::Capture::GameBarServices value { nullptr };
    check_hresult(WINRT_SHIM(IGameBarServicesManagerGameBarServicesCreatedEventArgs)->get_GameBarServices(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::GameBarTargetCapturePolicy impl_IGameBarServices<D>::TargetCapturePolicy() const
{
    Windows::Media::Capture::GameBarTargetCapturePolicy value {};
    check_hresult(WINRT_SHIM(IGameBarServices)->get_TargetCapturePolicy(&value));
    return value;
}

template <typename D> void impl_IGameBarServices<D>::EnableCapture() const
{
    check_hresult(WINRT_SHIM(IGameBarServices)->abi_EnableCapture());
}

template <typename D> void impl_IGameBarServices<D>::DisableCapture() const
{
    check_hresult(WINRT_SHIM(IGameBarServices)->abi_DisableCapture());
}

template <typename D> Windows::Media::Capture::GameBarServicesTargetInfo impl_IGameBarServices<D>::TargetInfo() const
{
    Windows::Media::Capture::GameBarServicesTargetInfo value { nullptr };
    check_hresult(WINRT_SHIM(IGameBarServices)->get_TargetInfo(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IGameBarServices<D>::SessionId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IGameBarServices)->get_SessionId(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastServices impl_IGameBarServices<D>::AppBroadcastServices() const
{
    Windows::Media::Capture::AppBroadcastServices value { nullptr };
    check_hresult(WINRT_SHIM(IGameBarServices)->get_AppBroadcastServices(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::AppCaptureServices impl_IGameBarServices<D>::AppCaptureServices() const
{
    Windows::Media::Capture::AppCaptureServices value { nullptr };
    check_hresult(WINRT_SHIM(IGameBarServices)->get_AppCaptureServices(put_abi(value)));
    return value;
}

template <typename D> event_token impl_IGameBarServices<D>::CommandReceived(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServices, Windows::Media::Capture::GameBarServicesCommandEventArgs> & value) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IGameBarServices)->add_CommandReceived(get_abi(value), &token));
    return token;
}

template <typename D> event_revoker<IGameBarServices> impl_IGameBarServices<D>::CommandReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServices, Windows::Media::Capture::GameBarServicesCommandEventArgs> & value) const
{
    return impl::make_event_revoker<D, IGameBarServices>(this, &ABI::Windows::Media::Capture::IGameBarServices::remove_CommandReceived, CommandReceived(value));
}

template <typename D> void impl_IGameBarServices<D>::CommandReceived(event_token token) const
{
    check_hresult(WINRT_SHIM(IGameBarServices)->remove_CommandReceived(token));
}

template <typename D> hstring impl_IGameBarServicesTargetInfo<D>::DisplayName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IGameBarServicesTargetInfo)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IGameBarServicesTargetInfo<D>::AppId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IGameBarServicesTargetInfo)->get_AppId(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IGameBarServicesTargetInfo<D>::TitleId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IGameBarServicesTargetInfo)->get_TitleId(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::GameBarServicesDisplayMode impl_IGameBarServicesTargetInfo<D>::DisplayMode() const
{
    Windows::Media::Capture::GameBarServicesDisplayMode value {};
    check_hresult(WINRT_SHIM(IGameBarServicesTargetInfo)->get_DisplayMode(&value));
    return value;
}

template <typename D> Windows::Media::Capture::GameBarCommand impl_IGameBarServicesCommandEventArgs<D>::Command() const
{
    Windows::Media::Capture::GameBarCommand value {};
    check_hresult(WINRT_SHIM(IGameBarServicesCommandEventArgs)->get_Command(&value));
    return value;
}

template <typename D> Windows::Media::Capture::GameBarCommandOrigin impl_IGameBarServicesCommandEventArgs<D>::Origin() const
{
    Windows::Media::Capture::GameBarCommandOrigin value {};
    check_hresult(WINRT_SHIM(IGameBarServicesCommandEventArgs)->get_Origin(&value));
    return value;
}

template <typename D> bool impl_IAppCapture<D>::IsCapturingAudio() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppCapture)->get_IsCapturingAudio(&value));
    return value;
}

template <typename D> bool impl_IAppCapture<D>::IsCapturingVideo() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IAppCapture)->get_IsCapturingVideo(&value));
    return value;
}

template <typename D> event_token impl_IAppCapture<D>::CapturingChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCapture, Windows::Foundation::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IAppCapture)->add_CapturingChanged(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IAppCapture> impl_IAppCapture<D>::CapturingChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCapture, Windows::Foundation::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IAppCapture>(this, &ABI::Windows::Media::Capture::IAppCapture::remove_CapturingChanged, CapturingChanged(handler));
}

template <typename D> void impl_IAppCapture<D>::CapturingChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IAppCapture)->remove_CapturingChanged(token));
}

template <typename D> Windows::Media::Capture::AppCapture impl_IAppCaptureStatics<D>::GetForCurrentView() const
{
    Windows::Media::Capture::AppCapture value { nullptr };
    check_hresult(WINRT_SHIM(IAppCaptureStatics)->abi_GetForCurrentView(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::CameraCaptureUIPhotoFormat impl_ICameraCaptureUIPhotoCaptureSettings<D>::Format() const
{
    Windows::Media::Capture::CameraCaptureUIPhotoFormat value {};
    check_hresult(WINRT_SHIM(ICameraCaptureUIPhotoCaptureSettings)->get_Format(&value));
    return value;
}

template <typename D> void impl_ICameraCaptureUIPhotoCaptureSettings<D>::Format(Windows::Media::Capture::CameraCaptureUIPhotoFormat value) const
{
    check_hresult(WINRT_SHIM(ICameraCaptureUIPhotoCaptureSettings)->put_Format(value));
}

template <typename D> Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution impl_ICameraCaptureUIPhotoCaptureSettings<D>::MaxResolution() const
{
    Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution value {};
    check_hresult(WINRT_SHIM(ICameraCaptureUIPhotoCaptureSettings)->get_MaxResolution(&value));
    return value;
}

template <typename D> void impl_ICameraCaptureUIPhotoCaptureSettings<D>::MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution value) const
{
    check_hresult(WINRT_SHIM(ICameraCaptureUIPhotoCaptureSettings)->put_MaxResolution(value));
}

template <typename D> Windows::Foundation::Size impl_ICameraCaptureUIPhotoCaptureSettings<D>::CroppedSizeInPixels() const
{
    Windows::Foundation::Size value {};
    check_hresult(WINRT_SHIM(ICameraCaptureUIPhotoCaptureSettings)->get_CroppedSizeInPixels(put_abi(value)));
    return value;
}

template <typename D> void impl_ICameraCaptureUIPhotoCaptureSettings<D>::CroppedSizeInPixels(const Windows::Foundation::Size & value) const
{
    check_hresult(WINRT_SHIM(ICameraCaptureUIPhotoCaptureSettings)->put_CroppedSizeInPixels(get_abi(value)));
}

template <typename D> Windows::Foundation::Size impl_ICameraCaptureUIPhotoCaptureSettings<D>::CroppedAspectRatio() const
{
    Windows::Foundation::Size value {};
    check_hresult(WINRT_SHIM(ICameraCaptureUIPhotoCaptureSettings)->get_CroppedAspectRatio(put_abi(value)));
    return value;
}

template <typename D> void impl_ICameraCaptureUIPhotoCaptureSettings<D>::CroppedAspectRatio(const Windows::Foundation::Size & value) const
{
    check_hresult(WINRT_SHIM(ICameraCaptureUIPhotoCaptureSettings)->put_CroppedAspectRatio(get_abi(value)));
}

template <typename D> bool impl_ICameraCaptureUIPhotoCaptureSettings<D>::AllowCropping() const
{
    bool value {};
    check_hresult(WINRT_SHIM(ICameraCaptureUIPhotoCaptureSettings)->get_AllowCropping(&value));
    return value;
}

template <typename D> void impl_ICameraCaptureUIPhotoCaptureSettings<D>::AllowCropping(bool value) const
{
    check_hresult(WINRT_SHIM(ICameraCaptureUIPhotoCaptureSettings)->put_AllowCropping(value));
}

template <typename D> Windows::Media::Capture::CameraCaptureUIVideoFormat impl_ICameraCaptureUIVideoCaptureSettings<D>::Format() const
{
    Windows::Media::Capture::CameraCaptureUIVideoFormat value {};
    check_hresult(WINRT_SHIM(ICameraCaptureUIVideoCaptureSettings)->get_Format(&value));
    return value;
}

template <typename D> void impl_ICameraCaptureUIVideoCaptureSettings<D>::Format(Windows::Media::Capture::CameraCaptureUIVideoFormat value) const
{
    check_hresult(WINRT_SHIM(ICameraCaptureUIVideoCaptureSettings)->put_Format(value));
}

template <typename D> Windows::Media::Capture::CameraCaptureUIMaxVideoResolution impl_ICameraCaptureUIVideoCaptureSettings<D>::MaxResolution() const
{
    Windows::Media::Capture::CameraCaptureUIMaxVideoResolution value {};
    check_hresult(WINRT_SHIM(ICameraCaptureUIVideoCaptureSettings)->get_MaxResolution(&value));
    return value;
}

template <typename D> void impl_ICameraCaptureUIVideoCaptureSettings<D>::MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxVideoResolution value) const
{
    check_hresult(WINRT_SHIM(ICameraCaptureUIVideoCaptureSettings)->put_MaxResolution(value));
}

template <typename D> float impl_ICameraCaptureUIVideoCaptureSettings<D>::MaxDurationInSeconds() const
{
    float value {};
    check_hresult(WINRT_SHIM(ICameraCaptureUIVideoCaptureSettings)->get_MaxDurationInSeconds(&value));
    return value;
}

template <typename D> void impl_ICameraCaptureUIVideoCaptureSettings<D>::MaxDurationInSeconds(float value) const
{
    check_hresult(WINRT_SHIM(ICameraCaptureUIVideoCaptureSettings)->put_MaxDurationInSeconds(value));
}

template <typename D> bool impl_ICameraCaptureUIVideoCaptureSettings<D>::AllowTrimming() const
{
    bool value {};
    check_hresult(WINRT_SHIM(ICameraCaptureUIVideoCaptureSettings)->get_AllowTrimming(&value));
    return value;
}

template <typename D> void impl_ICameraCaptureUIVideoCaptureSettings<D>::AllowTrimming(bool value) const
{
    check_hresult(WINRT_SHIM(ICameraCaptureUIVideoCaptureSettings)->put_AllowTrimming(value));
}

template <typename D> Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings impl_ICameraCaptureUI<D>::PhotoSettings() const
{
    Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings value { nullptr };
    check_hresult(WINRT_SHIM(ICameraCaptureUI)->get_PhotoSettings(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings impl_ICameraCaptureUI<D>::VideoSettings() const
{
    Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings value { nullptr };
    check_hresult(WINRT_SHIM(ICameraCaptureUI)->get_VideoSettings(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> impl_ICameraCaptureUI<D>::CaptureFileAsync(Windows::Media::Capture::CameraCaptureUIMode mode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> asyncInfo;
    check_hresult(WINRT_SHIM(ICameraCaptureUI)->abi_CaptureFileAsync(mode, put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> hstring impl_IMediaCaptureFailedEventArgs<D>::Message() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IMediaCaptureFailedEventArgs)->get_Message(put_abi(value)));
    return value;
}

template <typename D> uint32_t impl_IMediaCaptureFailedEventArgs<D>::Code() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IMediaCaptureFailedEventArgs)->get_Code(&value));
    return value;
}

template <typename D> uint32_t impl_IMediaCaptureVideoProfileMediaDescription<D>::Width() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IMediaCaptureVideoProfileMediaDescription)->get_Width(&value));
    return value;
}

template <typename D> uint32_t impl_IMediaCaptureVideoProfileMediaDescription<D>::Height() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IMediaCaptureVideoProfileMediaDescription)->get_Height(&value));
    return value;
}

template <typename D> double impl_IMediaCaptureVideoProfileMediaDescription<D>::FrameRate() const
{
    double value {};
    check_hresult(WINRT_SHIM(IMediaCaptureVideoProfileMediaDescription)->get_FrameRate(&value));
    return value;
}

template <typename D> bool impl_IMediaCaptureVideoProfileMediaDescription<D>::IsVariablePhotoSequenceSupported() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IMediaCaptureVideoProfileMediaDescription)->get_IsVariablePhotoSequenceSupported(&value));
    return value;
}

template <typename D> bool impl_IMediaCaptureVideoProfileMediaDescription<D>::IsHdrVideoSupported() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IMediaCaptureVideoProfileMediaDescription)->get_IsHdrVideoSupported(&value));
    return value;
}

template <typename D> hstring impl_IMediaCaptureVideoProfile<D>::Id() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IMediaCaptureVideoProfile)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IMediaCaptureVideoProfile<D>::VideoDeviceId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IMediaCaptureVideoProfile)->get_VideoDeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> impl_IMediaCaptureVideoProfile<D>::SupportedPreviewMediaDescription() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> value;
    check_hresult(WINRT_SHIM(IMediaCaptureVideoProfile)->get_SupportedPreviewMediaDescription(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> impl_IMediaCaptureVideoProfile<D>::SupportedRecordMediaDescription() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> value;
    check_hresult(WINRT_SHIM(IMediaCaptureVideoProfile)->get_SupportedRecordMediaDescription(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> impl_IMediaCaptureVideoProfile<D>::SupportedPhotoMediaDescription() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> value;
    check_hresult(WINRT_SHIM(IMediaCaptureVideoProfile)->get_SupportedPhotoMediaDescription(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> impl_IMediaCaptureVideoProfile<D>::GetConcurrency() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> value;
    check_hresult(WINRT_SHIM(IMediaCaptureVideoProfile)->abi_GetConcurrency(put_abi(value)));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings<D>::AudioDeviceId(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings)->put_AudioDeviceId(get_abi(value)));
}

template <typename D> hstring impl_IMediaCaptureInitializationSettings<D>::AudioDeviceId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings)->get_AudioDeviceId(put_abi(value)));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings<D>::VideoDeviceId(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings)->put_VideoDeviceId(get_abi(value)));
}

template <typename D> hstring impl_IMediaCaptureInitializationSettings<D>::VideoDeviceId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings)->get_VideoDeviceId(put_abi(value)));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings<D>::StreamingCaptureMode(Windows::Media::Capture::StreamingCaptureMode value) const
{
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings)->put_StreamingCaptureMode(value));
}

template <typename D> Windows::Media::Capture::StreamingCaptureMode impl_IMediaCaptureInitializationSettings<D>::StreamingCaptureMode() const
{
    Windows::Media::Capture::StreamingCaptureMode value {};
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings)->get_StreamingCaptureMode(&value));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings<D>::PhotoCaptureSource(Windows::Media::Capture::PhotoCaptureSource value) const
{
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings)->put_PhotoCaptureSource(value));
}

template <typename D> Windows::Media::Capture::PhotoCaptureSource impl_IMediaCaptureInitializationSettings<D>::PhotoCaptureSource() const
{
    Windows::Media::Capture::PhotoCaptureSource value {};
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings)->get_PhotoCaptureSource(&value));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings2<D>::MediaCategory(Windows::Media::Capture::MediaCategory value) const
{
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings2)->put_MediaCategory(value));
}

template <typename D> Windows::Media::Capture::MediaCategory impl_IMediaCaptureInitializationSettings2<D>::MediaCategory() const
{
    Windows::Media::Capture::MediaCategory value {};
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings2)->get_MediaCategory(&value));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings2<D>::AudioProcessing(Windows::Media::AudioProcessing value) const
{
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings2)->put_AudioProcessing(value));
}

template <typename D> Windows::Media::AudioProcessing impl_IMediaCaptureInitializationSettings2<D>::AudioProcessing() const
{
    Windows::Media::AudioProcessing value {};
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings2)->get_AudioProcessing(&value));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings3<D>::AudioSource(const Windows::Media::Core::IMediaSource & value) const
{
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings3)->put_AudioSource(get_abi(value)));
}

template <typename D> Windows::Media::Core::IMediaSource impl_IMediaCaptureInitializationSettings3<D>::AudioSource() const
{
    Windows::Media::Core::IMediaSource value;
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings3)->get_AudioSource(put_abi(value)));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings3<D>::VideoSource(const Windows::Media::Core::IMediaSource & value) const
{
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings3)->put_VideoSource(get_abi(value)));
}

template <typename D> Windows::Media::Core::IMediaSource impl_IMediaCaptureInitializationSettings3<D>::VideoSource() const
{
    Windows::Media::Core::IMediaSource value;
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings3)->get_VideoSource(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::MediaCaptureVideoProfile impl_IMediaCaptureInitializationSettings4<D>::VideoProfile() const
{
    Windows::Media::Capture::MediaCaptureVideoProfile value { nullptr };
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings4)->get_VideoProfile(put_abi(value)));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings4<D>::VideoProfile(const Windows::Media::Capture::MediaCaptureVideoProfile & value) const
{
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings4)->put_VideoProfile(get_abi(value)));
}

template <typename D> Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription impl_IMediaCaptureInitializationSettings4<D>::PreviewMediaDescription() const
{
    Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription value { nullptr };
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings4)->get_PreviewMediaDescription(put_abi(value)));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings4<D>::PreviewMediaDescription(const Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription & value) const
{
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings4)->put_PreviewMediaDescription(get_abi(value)));
}

template <typename D> Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription impl_IMediaCaptureInitializationSettings4<D>::RecordMediaDescription() const
{
    Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription value { nullptr };
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings4)->get_RecordMediaDescription(put_abi(value)));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings4<D>::RecordMediaDescription(const Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription & value) const
{
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings4)->put_RecordMediaDescription(get_abi(value)));
}

template <typename D> Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription impl_IMediaCaptureInitializationSettings4<D>::PhotoMediaDescription() const
{
    Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription value { nullptr };
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings4)->get_PhotoMediaDescription(put_abi(value)));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings4<D>::PhotoMediaDescription(const Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription & value) const
{
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings4)->put_PhotoMediaDescription(get_abi(value)));
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameSourceGroup impl_IMediaCaptureInitializationSettings5<D>::SourceGroup() const
{
    Windows::Media::Capture::Frames::MediaFrameSourceGroup value { nullptr };
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings5)->get_SourceGroup(put_abi(value)));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings5<D>::SourceGroup(const Windows::Media::Capture::Frames::MediaFrameSourceGroup & value) const
{
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings5)->put_SourceGroup(get_abi(value)));
}

template <typename D> Windows::Media::Capture::MediaCaptureSharingMode impl_IMediaCaptureInitializationSettings5<D>::SharingMode() const
{
    Windows::Media::Capture::MediaCaptureSharingMode value {};
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings5)->get_SharingMode(&value));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings5<D>::SharingMode(Windows::Media::Capture::MediaCaptureSharingMode value) const
{
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings5)->put_SharingMode(value));
}

template <typename D> Windows::Media::Capture::MediaCaptureMemoryPreference impl_IMediaCaptureInitializationSettings5<D>::MemoryPreference() const
{
    Windows::Media::Capture::MediaCaptureMemoryPreference value {};
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings5)->get_MemoryPreference(&value));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings5<D>::MemoryPreference(Windows::Media::Capture::MediaCaptureMemoryPreference value) const
{
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings5)->put_MemoryPreference(value));
}

template <typename D> bool impl_IMediaCaptureInitializationSettings6<D>::AlwaysPlaySystemShutterSound() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings6)->get_AlwaysPlaySystemShutterSound(&value));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings6<D>::AlwaysPlaySystemShutterSound(bool value) const
{
    check_hresult(WINRT_SHIM(IMediaCaptureInitializationSettings6)->put_AlwaysPlaySystemShutterSound(value));
}

template <typename D> bool impl_IMediaCaptureStatics<D>::IsVideoProfileSupported(hstring_view videoDeviceId) const
{
    bool value {};
    check_hresult(WINRT_SHIM(IMediaCaptureStatics)->abi_IsVideoProfileSupported(get_abi(videoDeviceId), &value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> impl_IMediaCaptureStatics<D>::FindAllVideoProfiles(hstring_view videoDeviceId) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> value;
    check_hresult(WINRT_SHIM(IMediaCaptureStatics)->abi_FindAllVideoProfiles(get_abi(videoDeviceId), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> impl_IMediaCaptureStatics<D>::FindConcurrentProfiles(hstring_view videoDeviceId) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> value;
    check_hresult(WINRT_SHIM(IMediaCaptureStatics)->abi_FindConcurrentProfiles(get_abi(videoDeviceId), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> impl_IMediaCaptureStatics<D>::FindKnownVideoProfiles(hstring_view videoDeviceId, Windows::Media::Capture::KnownVideoProfile name) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> value;
    check_hresult(WINRT_SHIM(IMediaCaptureStatics)->abi_FindKnownVideoProfiles(get_abi(videoDeviceId), name, put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture<D>::InitializeAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(WINRT_SHIM(IMediaCapture)->abi_InitializeAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture<D>::InitializeAsync(const Windows::Media::Capture::MediaCaptureInitializationSettings & mediaCaptureInitializationSettings) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(WINRT_SHIM(IMediaCapture)->abi_InitializeWithSettingsAsync(get_abi(mediaCaptureInitializationSettings), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture<D>::StartRecordToStorageFileAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, const Windows::Storage::IStorageFile & file) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(WINRT_SHIM(IMediaCapture)->abi_StartRecordToStorageFileAsync(get_abi(encodingProfile), get_abi(file), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture<D>::StartRecordToStreamAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, const Windows::Storage::Streams::IRandomAccessStream & stream) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(WINRT_SHIM(IMediaCapture)->abi_StartRecordToStreamAsync(get_abi(encodingProfile), get_abi(stream), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture<D>::StartRecordToCustomSinkAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, const Windows::Media::IMediaExtension & customMediaSink) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(WINRT_SHIM(IMediaCapture)->abi_StartRecordToCustomSinkAsync(get_abi(encodingProfile), get_abi(customMediaSink), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture<D>::StartRecordToCustomSinkAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, hstring_view customSinkActivationId, const Windows::Foundation::Collections::IPropertySet & customSinkSettings) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(WINRT_SHIM(IMediaCapture)->abi_StartRecordToCustomSinkIdAsync(get_abi(encodingProfile), get_abi(customSinkActivationId), get_abi(customSinkSettings), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture<D>::StopRecordAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(WINRT_SHIM(IMediaCapture)->abi_StopRecordAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture<D>::CapturePhotoToStorageFileAsync(const Windows::Media::MediaProperties::ImageEncodingProperties & type, const Windows::Storage::IStorageFile & file) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(WINRT_SHIM(IMediaCapture)->abi_CapturePhotoToStorageFileAsync(get_abi(type), get_abi(file), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture<D>::CapturePhotoToStreamAsync(const Windows::Media::MediaProperties::ImageEncodingProperties & type, const Windows::Storage::Streams::IRandomAccessStream & stream) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(WINRT_SHIM(IMediaCapture)->abi_CapturePhotoToStreamAsync(get_abi(type), get_abi(stream), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture<D>::AddEffectAsync(Windows::Media::Capture::MediaStreamType mediaStreamType, hstring_view effectActivationID, const Windows::Foundation::Collections::IPropertySet & effectSettings) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(WINRT_SHIM(IMediaCapture)->abi_AddEffectAsync(mediaStreamType, get_abi(effectActivationID), get_abi(effectSettings), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture<D>::ClearEffectsAsync(Windows::Media::Capture::MediaStreamType mediaStreamType) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(WINRT_SHIM(IMediaCapture)->abi_ClearEffectsAsync(mediaStreamType, put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> void impl_IMediaCapture<D>::SetEncoderProperty(Windows::Media::Capture::MediaStreamType mediaStreamType, GUID propertyId, const Windows::Foundation::IInspectable & propertyValue) const
{
    check_hresult(WINRT_SHIM(IMediaCapture)->abi_SetEncoderProperty(mediaStreamType, propertyId, get_abi(propertyValue)));
}

template <typename D> Windows::Foundation::IInspectable impl_IMediaCapture<D>::GetEncoderProperty(Windows::Media::Capture::MediaStreamType mediaStreamType, GUID propertyId) const
{
    Windows::Foundation::IInspectable propertyValue;
    check_hresult(WINRT_SHIM(IMediaCapture)->abi_GetEncoderProperty(mediaStreamType, propertyId, put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> event_token impl_IMediaCapture<D>::Failed(const Windows::Media::Capture::MediaCaptureFailedEventHandler & errorEventHandler) const
{
    event_token eventCookie {};
    check_hresult(WINRT_SHIM(IMediaCapture)->add_Failed(get_abi(errorEventHandler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IMediaCapture> impl_IMediaCapture<D>::Failed(auto_revoke_t, const Windows::Media::Capture::MediaCaptureFailedEventHandler & errorEventHandler) const
{
    return impl::make_event_revoker<D, IMediaCapture>(this, &ABI::Windows::Media::Capture::IMediaCapture::remove_Failed, Failed(errorEventHandler));
}

template <typename D> void impl_IMediaCapture<D>::Failed(event_token eventCookie) const
{
    check_hresult(WINRT_SHIM(IMediaCapture)->remove_Failed(eventCookie));
}

template <typename D> event_token impl_IMediaCapture<D>::RecordLimitationExceeded(const Windows::Media::Capture::RecordLimitationExceededEventHandler & recordLimitationExceededEventHandler) const
{
    event_token eventCookie {};
    check_hresult(WINRT_SHIM(IMediaCapture)->add_RecordLimitationExceeded(get_abi(recordLimitationExceededEventHandler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IMediaCapture> impl_IMediaCapture<D>::RecordLimitationExceeded(auto_revoke_t, const Windows::Media::Capture::RecordLimitationExceededEventHandler & recordLimitationExceededEventHandler) const
{
    return impl::make_event_revoker<D, IMediaCapture>(this, &ABI::Windows::Media::Capture::IMediaCapture::remove_RecordLimitationExceeded, RecordLimitationExceeded(recordLimitationExceededEventHandler));
}

template <typename D> void impl_IMediaCapture<D>::RecordLimitationExceeded(event_token eventCookie) const
{
    check_hresult(WINRT_SHIM(IMediaCapture)->remove_RecordLimitationExceeded(eventCookie));
}

template <typename D> Windows::Media::Capture::MediaCaptureSettings impl_IMediaCapture<D>::MediaCaptureSettings() const
{
    Windows::Media::Capture::MediaCaptureSettings value { nullptr };
    check_hresult(WINRT_SHIM(IMediaCapture)->get_MediaCaptureSettings(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::AudioDeviceController impl_IMediaCapture<D>::AudioDeviceController() const
{
    Windows::Media::Devices::AudioDeviceController value { nullptr };
    check_hresult(WINRT_SHIM(IMediaCapture)->get_AudioDeviceController(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::VideoDeviceController impl_IMediaCapture<D>::VideoDeviceController() const
{
    Windows::Media::Devices::VideoDeviceController value { nullptr };
    check_hresult(WINRT_SHIM(IMediaCapture)->get_VideoDeviceController(put_abi(value)));
    return value;
}

template <typename D> void impl_IMediaCapture<D>::SetPreviewMirroring(bool value) const
{
    check_hresult(WINRT_SHIM(IMediaCapture)->abi_SetPreviewMirroring(value));
}

template <typename D> bool impl_IMediaCapture<D>::GetPreviewMirroring() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IMediaCapture)->abi_GetPreviewMirroring(&value));
    return value;
}

template <typename D> void impl_IMediaCapture<D>::SetPreviewRotation(Windows::Media::Capture::VideoRotation value) const
{
    check_hresult(WINRT_SHIM(IMediaCapture)->abi_SetPreviewRotation(value));
}

template <typename D> Windows::Media::Capture::VideoRotation impl_IMediaCapture<D>::GetPreviewRotation() const
{
    Windows::Media::Capture::VideoRotation value {};
    check_hresult(WINRT_SHIM(IMediaCapture)->abi_GetPreviewRotation(&value));
    return value;
}

template <typename D> void impl_IMediaCapture<D>::SetRecordRotation(Windows::Media::Capture::VideoRotation value) const
{
    check_hresult(WINRT_SHIM(IMediaCapture)->abi_SetRecordRotation(value));
}

template <typename D> Windows::Media::Capture::VideoRotation impl_IMediaCapture<D>::GetRecordRotation() const
{
    Windows::Media::Capture::VideoRotation value {};
    check_hresult(WINRT_SHIM(IMediaCapture)->abi_GetRecordRotation(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> impl_IMediaCapture2<D>::PrepareLowLagRecordToStorageFileAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, const Windows::Storage::IStorageFile & file) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> operation;
    check_hresult(WINRT_SHIM(IMediaCapture2)->abi_PrepareLowLagRecordToStorageFileAsync(get_abi(encodingProfile), get_abi(file), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> impl_IMediaCapture2<D>::PrepareLowLagRecordToStreamAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, const Windows::Storage::Streams::IRandomAccessStream & stream) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> operation;
    check_hresult(WINRT_SHIM(IMediaCapture2)->abi_PrepareLowLagRecordToStreamAsync(get_abi(encodingProfile), get_abi(stream), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> impl_IMediaCapture2<D>::PrepareLowLagRecordToCustomSinkAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, const Windows::Media::IMediaExtension & customMediaSink) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> operation;
    check_hresult(WINRT_SHIM(IMediaCapture2)->abi_PrepareLowLagRecordToCustomSinkAsync(get_abi(encodingProfile), get_abi(customMediaSink), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> impl_IMediaCapture2<D>::PrepareLowLagRecordToCustomSinkAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, hstring_view customSinkActivationId, const Windows::Foundation::Collections::IPropertySet & customSinkSettings) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> operation;
    check_hresult(WINRT_SHIM(IMediaCapture2)->abi_PrepareLowLagRecordToCustomSinkIdAsync(get_abi(encodingProfile), get_abi(customSinkActivationId), get_abi(customSinkSettings), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoCapture> impl_IMediaCapture2<D>::PrepareLowLagPhotoCaptureAsync(const Windows::Media::MediaProperties::ImageEncodingProperties & type) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoCapture> operation;
    check_hresult(WINRT_SHIM(IMediaCapture2)->abi_PrepareLowLagPhotoCaptureAsync(get_abi(type), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoSequenceCapture> impl_IMediaCapture2<D>::PrepareLowLagPhotoSequenceCaptureAsync(const Windows::Media::MediaProperties::ImageEncodingProperties & type) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoSequenceCapture> operation;
    check_hresult(WINRT_SHIM(IMediaCapture2)->abi_PrepareLowLagPhotoSequenceCaptureAsync(get_abi(type), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture2<D>::SetEncodingPropertiesAsync(Windows::Media::Capture::MediaStreamType mediaStreamType, const Windows::Media::MediaProperties::IMediaEncodingProperties & mediaEncodingProperties, const Windows::Media::MediaProperties::MediaPropertySet & encoderProperties) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(WINRT_SHIM(IMediaCapture2)->abi_SetEncodingPropertiesAsync(mediaStreamType, get_abi(mediaEncodingProperties), get_abi(encoderProperties), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Core::VariablePhotoSequenceCapture> impl_IMediaCapture3<D>::PrepareVariablePhotoSequenceCaptureAsync(const Windows::Media::MediaProperties::ImageEncodingProperties & type) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Core::VariablePhotoSequenceCapture> operation;
    check_hresult(WINRT_SHIM(IMediaCapture3)->abi_PrepareVariablePhotoSequenceCaptureAsync(get_abi(type), put_abi(operation)));
    return operation;
}

template <typename D> event_token impl_IMediaCapture3<D>::FocusChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IMediaCapture3)->add_FocusChanged(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaCapture3> impl_IMediaCapture3<D>::FocusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMediaCapture3>(this, &ABI::Windows::Media::Capture::IMediaCapture3::remove_FocusChanged, FocusChanged(handler));
}

template <typename D> void impl_IMediaCapture3<D>::FocusChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IMediaCapture3)->remove_FocusChanged(token));
}

template <typename D> event_token impl_IMediaCapture3<D>::PhotoConfirmationCaptured(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IMediaCapture3)->add_PhotoConfirmationCaptured(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaCapture3> impl_IMediaCapture3<D>::PhotoConfirmationCaptured(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMediaCapture3>(this, &ABI::Windows::Media::Capture::IMediaCapture3::remove_PhotoConfirmationCaptured, PhotoConfirmationCaptured(handler));
}

template <typename D> void impl_IMediaCapture3<D>::PhotoConfirmationCaptured(event_token token) const
{
    check_hresult(WINRT_SHIM(IMediaCapture3)->remove_PhotoConfirmationCaptured(token));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension> impl_IMediaCapture4<D>::AddAudioEffectAsync(const Windows::Media::Effects::IAudioEffectDefinition & definition) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension> op;
    check_hresult(WINRT_SHIM(IMediaCapture4)->abi_AddAudioEffectAsync(get_abi(definition), put_abi(op)));
    return op;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension> impl_IMediaCapture4<D>::AddVideoEffectAsync(const Windows::Media::Effects::IVideoEffectDefinition & definition, Windows::Media::Capture::MediaStreamType mediaStreamType) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension> op;
    check_hresult(WINRT_SHIM(IMediaCapture4)->abi_AddVideoEffectAsync(get_abi(definition), mediaStreamType, put_abi(op)));
    return op;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture4<D>::PauseRecordAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(WINRT_SHIM(IMediaCapture4)->abi_PauseRecordAsync(behavior, put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture4<D>::ResumeRecordAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(WINRT_SHIM(IMediaCapture4)->abi_ResumeRecordAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> event_token impl_IMediaCapture4<D>::CameraStreamStateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IMediaCapture4)->add_CameraStreamStateChanged(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaCapture4> impl_IMediaCapture4<D>::CameraStreamStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IMediaCapture4>(this, &ABI::Windows::Media::Capture::IMediaCapture4::remove_CameraStreamStateChanged, CameraStreamStateChanged(handler));
}

template <typename D> void impl_IMediaCapture4<D>::CameraStreamStateChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IMediaCapture4)->remove_CameraStreamStateChanged(token));
}

template <typename D> Windows::Media::Devices::CameraStreamState impl_IMediaCapture4<D>::CameraStreamState() const
{
    Windows::Media::Devices::CameraStreamState streamState {};
    check_hresult(WINRT_SHIM(IMediaCapture4)->get_CameraStreamState(&streamState));
    return streamState;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame> impl_IMediaCapture4<D>::GetPreviewFrameAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame> operation;
    check_hresult(WINRT_SHIM(IMediaCapture4)->abi_GetPreviewFrameAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame> impl_IMediaCapture4<D>::GetPreviewFrameAsync(const Windows::Media::VideoFrame & destination) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame> operation;
    check_hresult(WINRT_SHIM(IMediaCapture4)->abi_GetPreviewFrameCopyAsync(get_abi(destination), put_abi(operation)));
    return operation;
}

template <typename D> event_token impl_IMediaCapture4<D>::ThermalStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IMediaCapture4)->add_ThermalStatusChanged(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaCapture4> impl_IMediaCapture4<D>::ThermalStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IMediaCapture4>(this, &ABI::Windows::Media::Capture::IMediaCapture4::remove_ThermalStatusChanged, ThermalStatusChanged(handler));
}

template <typename D> void impl_IMediaCapture4<D>::ThermalStatusChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IMediaCapture4)->remove_ThermalStatusChanged(token));
}

template <typename D> Windows::Media::Capture::MediaCaptureThermalStatus impl_IMediaCapture4<D>::ThermalStatus() const
{
    Windows::Media::Capture::MediaCaptureThermalStatus value {};
    check_hresult(WINRT_SHIM(IMediaCapture4)->get_ThermalStatus(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedPhotoCapture> impl_IMediaCapture4<D>::PrepareAdvancedPhotoCaptureAsync(const Windows::Media::MediaProperties::ImageEncodingProperties & encodingProperties) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedPhotoCapture> operation;
    check_hresult(WINRT_SHIM(IMediaCapture4)->abi_PrepareAdvancedPhotoCaptureAsync(get_abi(encodingProperties), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture5<D>::RemoveEffectAsync(const Windows::Media::IMediaExtension & effect) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(WINRT_SHIM(IMediaCapture5)->abi_RemoveEffectAsync(get_abi(effect), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult> impl_IMediaCapture5<D>::PauseRecordWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult> operation;
    check_hresult(WINRT_SHIM(IMediaCapture5)->abi_PauseRecordWithResultAsync(behavior, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult> impl_IMediaCapture5<D>::StopRecordWithResultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult> operation;
    check_hresult(WINRT_SHIM(IMediaCapture5)->abi_StopRecordWithResultAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Media::Capture::Frames::MediaFrameSource> impl_IMediaCapture5<D>::FrameSources() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Media::Capture::Frames::MediaFrameSource> value;
    check_hresult(WINRT_SHIM(IMediaCapture5)->get_FrameSources(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> impl_IMediaCapture5<D>::CreateFrameReaderAsync(const Windows::Media::Capture::Frames::MediaFrameSource & inputSource) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> value;
    check_hresult(WINRT_SHIM(IMediaCapture5)->abi_CreateFrameReaderAsync(get_abi(inputSource), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> impl_IMediaCapture5<D>::CreateFrameReaderAsync(const Windows::Media::Capture::Frames::MediaFrameSource & inputSource, hstring_view outputSubtype) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> value;
    check_hresult(WINRT_SHIM(IMediaCapture5)->abi_CreateFrameReaderWithSubtypeAsync(get_abi(inputSource), get_abi(outputSubtype), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> impl_IMediaCapture5<D>::CreateFrameReaderAsync(const Windows::Media::Capture::Frames::MediaFrameSource & inputSource, hstring_view outputSubtype, const Windows::Graphics::Imaging::BitmapSize & outputSize) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> value;
    check_hresult(WINRT_SHIM(IMediaCapture5)->abi_CreateFrameReaderWithSubtypeAndSizeAsync(get_abi(inputSource), get_abi(outputSubtype), get_abi(outputSize), put_abi(value)));
    return value;
}

template <typename D> event_token impl_IMediaCapture6<D>::CaptureDeviceExclusiveControlStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IMediaCapture6)->add_CaptureDeviceExclusiveControlStatusChanged(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaCapture6> impl_IMediaCapture6<D>::CaptureDeviceExclusiveControlStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMediaCapture6>(this, &ABI::Windows::Media::Capture::IMediaCapture6::remove_CaptureDeviceExclusiveControlStatusChanged, CaptureDeviceExclusiveControlStatusChanged(handler));
}

template <typename D> void impl_IMediaCapture6<D>::CaptureDeviceExclusiveControlStatusChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IMediaCapture6)->remove_CaptureDeviceExclusiveControlStatusChanged(token));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MultiSourceMediaFrameReader> impl_IMediaCapture6<D>::CreateMultiSourceFrameReaderAsync(iterable<Windows::Media::Capture::Frames::MediaFrameSource> inputSources) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MultiSourceMediaFrameReader> value;
    check_hresult(WINRT_SHIM(IMediaCapture6)->abi_CreateMultiSourceFrameReaderAsync(get_abi(inputSources), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::CapturedPhoto> impl_ILowLagPhotoCapture<D>::CaptureAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::CapturedPhoto> operation;
    check_hresult(WINRT_SHIM(ILowLagPhotoCapture)->abi_CaptureAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ILowLagPhotoCapture<D>::FinishAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(WINRT_SHIM(ILowLagPhotoCapture)->abi_FinishAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto> impl_IAdvancedPhotoCapture<D>::CaptureAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto> operation;
    check_hresult(WINRT_SHIM(IAdvancedPhotoCapture)->abi_CaptureAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto> impl_IAdvancedPhotoCapture<D>::CaptureAsync(const Windows::Foundation::IInspectable & context) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto> operation;
    check_hresult(WINRT_SHIM(IAdvancedPhotoCapture)->abi_CaptureWithContextAsync(get_abi(context), put_abi(operation)));
    return operation;
}

template <typename D> event_token impl_IAdvancedPhotoCapture<D>::OptionalReferencePhotoCaptured(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IAdvancedPhotoCapture)->add_OptionalReferencePhotoCaptured(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IAdvancedPhotoCapture> impl_IAdvancedPhotoCapture<D>::OptionalReferencePhotoCaptured(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAdvancedPhotoCapture>(this, &ABI::Windows::Media::Capture::IAdvancedPhotoCapture::remove_OptionalReferencePhotoCaptured, OptionalReferencePhotoCaptured(handler));
}

template <typename D> void impl_IAdvancedPhotoCapture<D>::OptionalReferencePhotoCaptured(event_token token) const
{
    check_hresult(WINRT_SHIM(IAdvancedPhotoCapture)->remove_OptionalReferencePhotoCaptured(token));
}

template <typename D> event_token impl_IAdvancedPhotoCapture<D>::AllPhotosCaptured(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Foundation::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IAdvancedPhotoCapture)->add_AllPhotosCaptured(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IAdvancedPhotoCapture> impl_IAdvancedPhotoCapture<D>::AllPhotosCaptured(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Foundation::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IAdvancedPhotoCapture>(this, &ABI::Windows::Media::Capture::IAdvancedPhotoCapture::remove_AllPhotosCaptured, AllPhotosCaptured(handler));
}

template <typename D> void impl_IAdvancedPhotoCapture<D>::AllPhotosCaptured(event_token token) const
{
    check_hresult(WINRT_SHIM(IAdvancedPhotoCapture)->remove_AllPhotosCaptured(token));
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAdvancedPhotoCapture<D>::FinishAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(WINRT_SHIM(IAdvancedPhotoCapture)->abi_FinishAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Media::Capture::CapturedFrame impl_IAdvancedCapturedPhoto<D>::Frame() const
{
    Windows::Media::Capture::CapturedFrame value { nullptr };
    check_hresult(WINRT_SHIM(IAdvancedCapturedPhoto)->get_Frame(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::AdvancedPhotoMode impl_IAdvancedCapturedPhoto<D>::Mode() const
{
    Windows::Media::Devices::AdvancedPhotoMode value {};
    check_hresult(WINRT_SHIM(IAdvancedCapturedPhoto)->get_Mode(&value));
    return value;
}

template <typename D> Windows::Foundation::IInspectable impl_IAdvancedCapturedPhoto<D>::Context() const
{
    Windows::Foundation::IInspectable value;
    check_hresult(WINRT_SHIM(IAdvancedCapturedPhoto)->get_Context(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Rect> impl_IAdvancedCapturedPhoto2<D>::FrameBoundsRelativeToReferencePhoto() const
{
    Windows::Foundation::IReference<Windows::Foundation::Rect> value;
    check_hresult(WINRT_SHIM(IAdvancedCapturedPhoto2)->get_FrameBoundsRelativeToReferencePhoto(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::CapturedFrame impl_IOptionalReferencePhotoCapturedEventArgs<D>::Frame() const
{
    Windows::Media::Capture::CapturedFrame value { nullptr };
    check_hresult(WINRT_SHIM(IOptionalReferencePhotoCapturedEventArgs)->get_Frame(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable impl_IOptionalReferencePhotoCapturedEventArgs<D>::Context() const
{
    Windows::Foundation::IInspectable value;
    check_hresult(WINRT_SHIM(IOptionalReferencePhotoCapturedEventArgs)->get_Context(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ILowLagMediaRecording<D>::StartAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(WINRT_SHIM(ILowLagMediaRecording)->abi_StartAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ILowLagMediaRecording<D>::StopAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(WINRT_SHIM(ILowLagMediaRecording)->abi_StopAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ILowLagMediaRecording<D>::FinishAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(WINRT_SHIM(ILowLagMediaRecording)->abi_FinishAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ILowLagMediaRecording2<D>::PauseAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(WINRT_SHIM(ILowLagMediaRecording2)->abi_PauseAsync(behavior, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ILowLagMediaRecording2<D>::ResumeAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(WINRT_SHIM(ILowLagMediaRecording2)->abi_ResumeAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult> impl_ILowLagMediaRecording3<D>::PauseWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult> operation;
    check_hresult(WINRT_SHIM(ILowLagMediaRecording3)->abi_PauseWithResultAsync(behavior, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult> impl_ILowLagMediaRecording3<D>::StopWithResultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult> operation;
    check_hresult(WINRT_SHIM(ILowLagMediaRecording3)->abi_StopWithResultAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Media::VideoFrame impl_IMediaCapturePauseResult<D>::LastFrame() const
{
    Windows::Media::VideoFrame value { nullptr };
    check_hresult(WINRT_SHIM(IMediaCapturePauseResult)->get_LastFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IMediaCapturePauseResult<D>::RecordDuration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(WINRT_SHIM(IMediaCapturePauseResult)->get_RecordDuration(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::VideoFrame impl_IMediaCaptureStopResult<D>::LastFrame() const
{
    Windows::Media::VideoFrame value { nullptr };
    check_hresult(WINRT_SHIM(IMediaCaptureStopResult)->get_LastFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IMediaCaptureStopResult<D>::RecordDuration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(WINRT_SHIM(IMediaCaptureStopResult)->get_RecordDuration(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ILowLagPhotoSequenceCapture<D>::StartAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(WINRT_SHIM(ILowLagPhotoSequenceCapture)->abi_StartAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ILowLagPhotoSequenceCapture<D>::StopAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(WINRT_SHIM(ILowLagPhotoSequenceCapture)->abi_StopAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ILowLagPhotoSequenceCapture<D>::FinishAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(WINRT_SHIM(ILowLagPhotoSequenceCapture)->abi_FinishAsync(put_abi(operation)));
    return operation;
}

template <typename D> event_token impl_ILowLagPhotoSequenceCapture<D>::PhotoCaptured(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture, Windows::Media::Capture::PhotoCapturedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(ILowLagPhotoSequenceCapture)->add_PhotoCaptured(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<ILowLagPhotoSequenceCapture> impl_ILowLagPhotoSequenceCapture<D>::PhotoCaptured(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture, Windows::Media::Capture::PhotoCapturedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ILowLagPhotoSequenceCapture>(this, &ABI::Windows::Media::Capture::ILowLagPhotoSequenceCapture::remove_PhotoCaptured, PhotoCaptured(handler));
}

template <typename D> void impl_ILowLagPhotoSequenceCapture<D>::PhotoCaptured(event_token token) const
{
    check_hresult(WINRT_SHIM(ILowLagPhotoSequenceCapture)->remove_PhotoCaptured(token));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> impl_ICapturedFrameControlValues<D>::Exposure() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value;
    check_hresult(WINRT_SHIM(ICapturedFrameControlValues)->get_Exposure(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<float> impl_ICapturedFrameControlValues<D>::ExposureCompensation() const
{
    Windows::Foundation::IReference<float> value;
    check_hresult(WINRT_SHIM(ICapturedFrameControlValues)->get_ExposureCompensation(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_ICapturedFrameControlValues<D>::IsoSpeed() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(WINRT_SHIM(ICapturedFrameControlValues)->get_IsoSpeed(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_ICapturedFrameControlValues<D>::Focus() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(WINRT_SHIM(ICapturedFrameControlValues)->get_Focus(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<winrt::Windows::Media::Devices::CaptureSceneMode> impl_ICapturedFrameControlValues<D>::SceneMode() const
{
    Windows::Foundation::IReference<winrt::Windows::Media::Devices::CaptureSceneMode> value;
    check_hresult(WINRT_SHIM(ICapturedFrameControlValues)->get_SceneMode(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<bool> impl_ICapturedFrameControlValues<D>::Flashed() const
{
    Windows::Foundation::IReference<bool> value;
    check_hresult(WINRT_SHIM(ICapturedFrameControlValues)->get_Flashed(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<float> impl_ICapturedFrameControlValues<D>::FlashPowerPercent() const
{
    Windows::Foundation::IReference<float> value;
    check_hresult(WINRT_SHIM(ICapturedFrameControlValues)->get_FlashPowerPercent(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_ICapturedFrameControlValues<D>::WhiteBalance() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(WINRT_SHIM(ICapturedFrameControlValues)->get_WhiteBalance(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<float> impl_ICapturedFrameControlValues<D>::ZoomFactor() const
{
    Windows::Foundation::IReference<float> value;
    check_hresult(WINRT_SHIM(ICapturedFrameControlValues)->get_ZoomFactor(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<winrt::Windows::Media::Devices::MediaCaptureFocusState> impl_ICapturedFrameControlValues2<D>::FocusState() const
{
    Windows::Foundation::IReference<winrt::Windows::Media::Devices::MediaCaptureFocusState> value;
    check_hresult(WINRT_SHIM(ICapturedFrameControlValues2)->get_FocusState(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> impl_ICapturedFrameControlValues2<D>::IsoDigitalGain() const
{
    Windows::Foundation::IReference<double> value;
    check_hresult(WINRT_SHIM(ICapturedFrameControlValues2)->get_IsoDigitalGain(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> impl_ICapturedFrameControlValues2<D>::IsoAnalogGain() const
{
    Windows::Foundation::IReference<double> value;
    check_hresult(WINRT_SHIM(ICapturedFrameControlValues2)->get_IsoAnalogGain(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaRatio impl_ICapturedFrameControlValues2<D>::SensorFrameRate() const
{
    Windows::Media::MediaProperties::MediaRatio value { nullptr };
    check_hresult(WINRT_SHIM(ICapturedFrameControlValues2)->get_SensorFrameRate(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Media::Capture::WhiteBalanceGain> impl_ICapturedFrameControlValues2<D>::WhiteBalanceGain() const
{
    Windows::Foundation::IReference<Windows::Media::Capture::WhiteBalanceGain> value;
    check_hresult(WINRT_SHIM(ICapturedFrameControlValues2)->get_WhiteBalanceGain(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::CapturedFrame impl_IPhotoCapturedEventArgs<D>::Frame() const
{
    Windows::Media::Capture::CapturedFrame value { nullptr };
    check_hresult(WINRT_SHIM(IPhotoCapturedEventArgs)->get_Frame(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::CapturedFrame impl_IPhotoCapturedEventArgs<D>::Thumbnail() const
{
    Windows::Media::Capture::CapturedFrame value { nullptr };
    check_hresult(WINRT_SHIM(IPhotoCapturedEventArgs)->get_Thumbnail(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IPhotoCapturedEventArgs<D>::CaptureTimeOffset() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(WINRT_SHIM(IPhotoCapturedEventArgs)->get_CaptureTimeOffset(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::CapturedFrame impl_ICapturedPhoto<D>::Frame() const
{
    Windows::Media::Capture::CapturedFrame value { nullptr };
    check_hresult(WINRT_SHIM(ICapturedPhoto)->get_Frame(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::CapturedFrame impl_ICapturedPhoto<D>::Thumbnail() const
{
    Windows::Media::Capture::CapturedFrame value { nullptr };
    check_hresult(WINRT_SHIM(ICapturedPhoto)->get_Thumbnail(put_abi(value)));
    return value;
}

template <typename D> uint32_t impl_ICapturedFrame<D>::Width() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(ICapturedFrame)->get_Width(&value));
    return value;
}

template <typename D> uint32_t impl_ICapturedFrame<D>::Height() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(ICapturedFrame)->get_Height(&value));
    return value;
}

template <typename D> Windows::Graphics::Imaging::SoftwareBitmap impl_ICapturedFrameWithSoftwareBitmap<D>::SoftwareBitmap() const
{
    Windows::Graphics::Imaging::SoftwareBitmap value { nullptr };
    check_hresult(WINRT_SHIM(ICapturedFrameWithSoftwareBitmap)->get_SoftwareBitmap(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCaptureVideoPreview<D>::StartPreviewAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(WINRT_SHIM(IMediaCaptureVideoPreview)->abi_StartPreviewAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCaptureVideoPreview<D>::StartPreviewToCustomSinkAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, const Windows::Media::IMediaExtension & customMediaSink) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(WINRT_SHIM(IMediaCaptureVideoPreview)->abi_StartPreviewToCustomSinkAsync(get_abi(encodingProfile), get_abi(customMediaSink), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCaptureVideoPreview<D>::StartPreviewToCustomSinkAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, hstring_view customSinkActivationId, const Windows::Foundation::Collections::IPropertySet & customSinkSettings) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(WINRT_SHIM(IMediaCaptureVideoPreview)->abi_StartPreviewToCustomSinkIdAsync(get_abi(encodingProfile), get_abi(customSinkActivationId), get_abi(customSinkSettings), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCaptureVideoPreview<D>::StopPreviewAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(WINRT_SHIM(IMediaCaptureVideoPreview)->abi_StopPreviewAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> hstring impl_IMediaCaptureSettings<D>::AudioDeviceId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IMediaCaptureSettings)->get_AudioDeviceId(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IMediaCaptureSettings<D>::VideoDeviceId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IMediaCaptureSettings)->get_VideoDeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::StreamingCaptureMode impl_IMediaCaptureSettings<D>::StreamingCaptureMode() const
{
    Windows::Media::Capture::StreamingCaptureMode value {};
    check_hresult(WINRT_SHIM(IMediaCaptureSettings)->get_StreamingCaptureMode(&value));
    return value;
}

template <typename D> Windows::Media::Capture::PhotoCaptureSource impl_IMediaCaptureSettings<D>::PhotoCaptureSource() const
{
    Windows::Media::Capture::PhotoCaptureSource value {};
    check_hresult(WINRT_SHIM(IMediaCaptureSettings)->get_PhotoCaptureSource(&value));
    return value;
}

template <typename D> Windows::Media::Capture::VideoDeviceCharacteristic impl_IMediaCaptureSettings<D>::VideoDeviceCharacteristic() const
{
    Windows::Media::Capture::VideoDeviceCharacteristic value {};
    check_hresult(WINRT_SHIM(IMediaCaptureSettings)->get_VideoDeviceCharacteristic(&value));
    return value;
}

template <typename D> bool impl_IMediaCaptureSettings2<D>::ConcurrentRecordAndPhotoSupported() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IMediaCaptureSettings2)->get_ConcurrentRecordAndPhotoSupported(&value));
    return value;
}

template <typename D> bool impl_IMediaCaptureSettings2<D>::ConcurrentRecordAndPhotoSequenceSupported() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IMediaCaptureSettings2)->get_ConcurrentRecordAndPhotoSequenceSupported(&value));
    return value;
}

template <typename D> bool impl_IMediaCaptureSettings2<D>::CameraSoundRequiredForRegion() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IMediaCaptureSettings2)->get_CameraSoundRequiredForRegion(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_IMediaCaptureSettings2<D>::Horizontal35mmEquivalentFocalLength() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(WINRT_SHIM(IMediaCaptureSettings2)->get_Horizontal35mmEquivalentFocalLength(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IMediaCaptureSettings2<D>::PitchOffsetDegrees() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(WINRT_SHIM(IMediaCaptureSettings2)->get_PitchOffsetDegrees(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_IMediaCaptureSettings2<D>::Vertical35mmEquivalentFocalLength() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(WINRT_SHIM(IMediaCaptureSettings2)->get_Vertical35mmEquivalentFocalLength(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::MediaCategory impl_IMediaCaptureSettings2<D>::MediaCategory() const
{
    Windows::Media::Capture::MediaCategory value {};
    check_hresult(WINRT_SHIM(IMediaCaptureSettings2)->get_MediaCategory(&value));
    return value;
}

template <typename D> Windows::Media::AudioProcessing impl_IMediaCaptureSettings2<D>::AudioProcessing() const
{
    Windows::Media::AudioProcessing value {};
    check_hresult(WINRT_SHIM(IMediaCaptureSettings2)->get_AudioProcessing(&value));
    return value;
}

template <typename D> Windows::Media::Devices::MediaCaptureFocusState impl_IMediaCaptureFocusChangedEventArgs<D>::FocusState() const
{
    Windows::Media::Devices::MediaCaptureFocusState value {};
    check_hresult(WINRT_SHIM(IMediaCaptureFocusChangedEventArgs)->get_FocusState(&value));
    return value;
}

template <typename D> Windows::Media::Capture::CapturedFrame impl_IPhotoConfirmationCapturedEventArgs<D>::Frame() const
{
    Windows::Media::Capture::CapturedFrame value { nullptr };
    check_hresult(WINRT_SHIM(IPhotoConfirmationCapturedEventArgs)->get_Frame(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IPhotoConfirmationCapturedEventArgs<D>::CaptureTimeOffset() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(WINRT_SHIM(IPhotoConfirmationCapturedEventArgs)->get_CaptureTimeOffset(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::VideoEncodingProperties impl_IVideoStreamConfiguration<D>::InputProperties() const
{
    Windows::Media::MediaProperties::VideoEncodingProperties value { nullptr };
    check_hresult(WINRT_SHIM(IVideoStreamConfiguration)->get_InputProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::VideoEncodingProperties impl_IVideoStreamConfiguration<D>::OutputProperties() const
{
    Windows::Media::MediaProperties::VideoEncodingProperties value { nullptr };
    check_hresult(WINRT_SHIM(IVideoStreamConfiguration)->get_OutputProperties(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs<D>::DeviceId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatus impl_IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs<D>::Status() const
{
    Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatus value {};
    check_hresult(WINRT_SHIM(IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs)->get_Status(&value));
    return value;
}

inline Windows::Media::Capture::AppBroadcastGlobalSettings AppBroadcastManager::GetGlobalSettings()
{
    return get_activation_factory<AppBroadcastManager, IAppBroadcastManagerStatics>().GetGlobalSettings();
}

inline void AppBroadcastManager::ApplyGlobalSettings(const Windows::Media::Capture::AppBroadcastGlobalSettings & value)
{
    get_activation_factory<AppBroadcastManager, IAppBroadcastManagerStatics>().ApplyGlobalSettings(value);
}

inline Windows::Media::Capture::AppBroadcastProviderSettings AppBroadcastManager::GetProviderSettings()
{
    return get_activation_factory<AppBroadcastManager, IAppBroadcastManagerStatics>().GetProviderSettings();
}

inline void AppBroadcastManager::ApplyProviderSettings(const Windows::Media::Capture::AppBroadcastProviderSettings & value)
{
    get_activation_factory<AppBroadcastManager, IAppBroadcastManagerStatics>().ApplyProviderSettings(value);
}

inline Windows::Media::Capture::AppBroadcastPlugInManager AppBroadcastPlugInManager::GetDefault()
{
    return get_activation_factory<AppBroadcastPlugInManager, IAppBroadcastPlugInManagerStatics>().GetDefault();
}

inline Windows::Media::Capture::AppBroadcastPlugInManager AppBroadcastPlugInManager::GetForUser(const Windows::System::User & user)
{
    return get_activation_factory<AppBroadcastPlugInManager, IAppBroadcastPlugInManagerStatics>().GetForUser(user);
}

inline Windows::Media::Capture::AppCapture AppCapture::GetForCurrentView()
{
    return get_activation_factory<AppCapture, IAppCaptureStatics>().GetForCurrentView();
}

inline Windows::Media::Capture::AppCaptureSettings AppCaptureManager::GetCurrentSettings()
{
    return get_activation_factory<AppCaptureManager, IAppCaptureManagerStatics>().GetCurrentSettings();
}

inline void AppCaptureManager::ApplySettings(const Windows::Media::Capture::AppCaptureSettings & appCaptureSettings)
{
    get_activation_factory<AppCaptureManager, IAppCaptureManagerStatics>().ApplySettings(appCaptureSettings);
}

inline CameraCaptureUI::CameraCaptureUI() :
    CameraCaptureUI(activate_instance<CameraCaptureUI>())
{}

inline void CameraOptionsUI::Show(const Windows::Media::Capture::MediaCapture & mediaCapture)
{
    get_activation_factory<CameraOptionsUI, ICameraOptionsUIStatics>().Show(mediaCapture);
}

inline Windows::Media::Capture::GameBarServicesManager GameBarServicesManager::GetDefault()
{
    return get_activation_factory<GameBarServicesManager, IGameBarServicesManagerStatics>().GetDefault();
}

inline MediaCapture::MediaCapture() :
    MediaCapture(activate_instance<MediaCapture>())
{}

inline bool MediaCapture::IsVideoProfileSupported(hstring_view videoDeviceId)
{
    return get_activation_factory<MediaCapture, IMediaCaptureStatics>().IsVideoProfileSupported(videoDeviceId);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> MediaCapture::FindAllVideoProfiles(hstring_view videoDeviceId)
{
    return get_activation_factory<MediaCapture, IMediaCaptureStatics>().FindAllVideoProfiles(videoDeviceId);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> MediaCapture::FindConcurrentProfiles(hstring_view videoDeviceId)
{
    return get_activation_factory<MediaCapture, IMediaCaptureStatics>().FindConcurrentProfiles(videoDeviceId);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> MediaCapture::FindKnownVideoProfiles(hstring_view videoDeviceId, Windows::Media::Capture::KnownVideoProfile name)
{
    return get_activation_factory<MediaCapture, IMediaCaptureStatics>().FindKnownVideoProfiles(videoDeviceId, name);
}

inline MediaCaptureInitializationSettings::MediaCaptureInitializationSettings() :
    MediaCaptureInitializationSettings(activate_instance<MediaCaptureInitializationSettings>())
{}

inline Windows::Media::Capture::ScreenCapture ScreenCapture::GetForCurrentView()
{
    return get_activation_factory<ScreenCapture, IScreenCaptureStatics>().GetForCurrentView();
}

}

}

template<>
struct std::hash<winrt::Windows::Media::Capture::IAdvancedCapturedPhoto>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAdvancedCapturedPhoto & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAdvancedCapturedPhoto2>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAdvancedCapturedPhoto2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAdvancedPhotoCapture>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAdvancedPhotoCapture & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppBroadcastBackgroundService>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppBroadcastBackgroundService & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppBroadcastGlobalSettings>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppBroadcastGlobalSettings & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppBroadcastManagerStatics>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppBroadcastManagerStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppBroadcastPlugIn>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppBroadcastPlugIn & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppBroadcastPlugInManager>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppBroadcastPlugInManager & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppBroadcastPlugInManagerStatics>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppBroadcastPlugInManagerStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppBroadcastPreview>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppBroadcastPreview & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppBroadcastPreviewStreamReader>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppBroadcastPreviewStreamReader & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppBroadcastProviderSettings>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppBroadcastProviderSettings & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppBroadcastServices>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppBroadcastServices & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppBroadcastState>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppBroadcastState & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppBroadcastStreamAudioFrame>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppBroadcastStreamAudioFrame & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppBroadcastStreamAudioHeader>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppBroadcastStreamAudioHeader & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppBroadcastStreamReader>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppBroadcastStreamReader & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppBroadcastStreamVideoFrame>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppBroadcastStreamVideoFrame & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppBroadcastStreamVideoHeader>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppBroadcastStreamVideoHeader & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppBroadcastTriggerDetails>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppBroadcastTriggerDetails & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppCapture>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppCapture & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppCaptureAlternateShortcutKeys>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppCaptureAlternateShortcutKeys & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppCaptureManagerStatics>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppCaptureManagerStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppCaptureRecordOperation>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppCaptureRecordOperation & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppCaptureServices>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppCaptureServices & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppCaptureSettings>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppCaptureSettings & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppCaptureSettings2>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppCaptureSettings2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppCaptureSettings3>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppCaptureSettings3 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppCaptureSettings4>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppCaptureSettings4 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppCaptureSettings5>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppCaptureSettings5 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppCaptureState>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppCaptureState & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IAppCaptureStatics>
{
    size_t operator()(const winrt::Windows::Media::Capture::IAppCaptureStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::ICameraCaptureUI>
{
    size_t operator()(const winrt::Windows::Media::Capture::ICameraCaptureUI & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings>
{
    size_t operator()(const winrt::Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings>
{
    size_t operator()(const winrt::Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::ICameraOptionsUIStatics>
{
    size_t operator()(const winrt::Windows::Media::Capture::ICameraOptionsUIStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::ICapturedFrame>
{
    size_t operator()(const winrt::Windows::Media::Capture::ICapturedFrame & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::ICapturedFrameControlValues>
{
    size_t operator()(const winrt::Windows::Media::Capture::ICapturedFrameControlValues & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::ICapturedFrameControlValues2>
{
    size_t operator()(const winrt::Windows::Media::Capture::ICapturedFrameControlValues2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap>
{
    size_t operator()(const winrt::Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::ICapturedPhoto>
{
    size_t operator()(const winrt::Windows::Media::Capture::ICapturedPhoto & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IGameBarServices>
{
    size_t operator()(const winrt::Windows::Media::Capture::IGameBarServices & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IGameBarServicesCommandEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::IGameBarServicesCommandEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IGameBarServicesManager>
{
    size_t operator()(const winrt::Windows::Media::Capture::IGameBarServicesManager & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IGameBarServicesManagerStatics>
{
    size_t operator()(const winrt::Windows::Media::Capture::IGameBarServicesManagerStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IGameBarServicesTargetInfo>
{
    size_t operator()(const winrt::Windows::Media::Capture::IGameBarServicesTargetInfo & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::ILowLagMediaRecording>
{
    size_t operator()(const winrt::Windows::Media::Capture::ILowLagMediaRecording & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::ILowLagMediaRecording2>
{
    size_t operator()(const winrt::Windows::Media::Capture::ILowLagMediaRecording2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::ILowLagMediaRecording3>
{
    size_t operator()(const winrt::Windows::Media::Capture::ILowLagMediaRecording3 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::ILowLagPhotoCapture>
{
    size_t operator()(const winrt::Windows::Media::Capture::ILowLagPhotoCapture & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::ILowLagPhotoSequenceCapture>
{
    size_t operator()(const winrt::Windows::Media::Capture::ILowLagPhotoSequenceCapture & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IMediaCapture>
{
    size_t operator()(const winrt::Windows::Media::Capture::IMediaCapture & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IMediaCapture2>
{
    size_t operator()(const winrt::Windows::Media::Capture::IMediaCapture2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IMediaCapture3>
{
    size_t operator()(const winrt::Windows::Media::Capture::IMediaCapture3 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IMediaCapture4>
{
    size_t operator()(const winrt::Windows::Media::Capture::IMediaCapture4 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IMediaCapture5>
{
    size_t operator()(const winrt::Windows::Media::Capture::IMediaCapture5 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IMediaCapture6>
{
    size_t operator()(const winrt::Windows::Media::Capture::IMediaCapture6 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IMediaCaptureFailedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::IMediaCaptureFailedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings>
{
    size_t operator()(const winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings2>
{
    size_t operator()(const winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings3>
{
    size_t operator()(const winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings3 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings4>
{
    size_t operator()(const winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings4 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings5>
{
    size_t operator()(const winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings5 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings6>
{
    size_t operator()(const winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings6 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IMediaCapturePauseResult>
{
    size_t operator()(const winrt::Windows::Media::Capture::IMediaCapturePauseResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IMediaCaptureSettings>
{
    size_t operator()(const winrt::Windows::Media::Capture::IMediaCaptureSettings & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IMediaCaptureSettings2>
{
    size_t operator()(const winrt::Windows::Media::Capture::IMediaCaptureSettings2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IMediaCaptureStatics>
{
    size_t operator()(const winrt::Windows::Media::Capture::IMediaCaptureStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IMediaCaptureStopResult>
{
    size_t operator()(const winrt::Windows::Media::Capture::IMediaCaptureStopResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IMediaCaptureVideoPreview>
{
    size_t operator()(const winrt::Windows::Media::Capture::IMediaCaptureVideoPreview & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IMediaCaptureVideoProfile>
{
    size_t operator()(const winrt::Windows::Media::Capture::IMediaCaptureVideoProfile & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription>
{
    size_t operator()(const winrt::Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IPhotoCapturedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::IPhotoCapturedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IScreenCapture>
{
    size_t operator()(const winrt::Windows::Media::Capture::IScreenCapture & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IScreenCaptureStatics>
{
    size_t operator()(const winrt::Windows::Media::Capture::IScreenCaptureStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::ISourceSuspensionChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::ISourceSuspensionChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::IVideoStreamConfiguration>
{
    size_t operator()(const winrt::Windows::Media::Capture::IVideoStreamConfiguration & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AdvancedCapturedPhoto>
{
    size_t operator()(const winrt::Windows::Media::Capture::AdvancedCapturedPhoto & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AdvancedPhotoCapture>
{
    size_t operator()(const winrt::Windows::Media::Capture::AdvancedPhotoCapture & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppBroadcastBackgroundService>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppBroadcastBackgroundService & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppBroadcastGlobalSettings>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppBroadcastGlobalSettings & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppBroadcastPlugIn>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppBroadcastPlugIn & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppBroadcastPlugInManager>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppBroadcastPlugInManager & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppBroadcastPreview>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppBroadcastPreview & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppBroadcastPreviewStreamReader>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppBroadcastPreviewStreamReader & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppBroadcastPreviewStreamVideoFrame>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppBroadcastPreviewStreamVideoFrame & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppBroadcastPreviewStreamVideoHeader>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppBroadcastPreviewStreamVideoHeader & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppBroadcastProviderSettings>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppBroadcastProviderSettings & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppBroadcastServices>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppBroadcastServices & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppBroadcastState>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppBroadcastState & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppBroadcastStreamAudioFrame>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppBroadcastStreamAudioFrame & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppBroadcastStreamAudioHeader>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppBroadcastStreamAudioHeader & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppBroadcastStreamReader>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppBroadcastStreamReader & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppBroadcastStreamVideoFrame>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppBroadcastStreamVideoFrame & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppBroadcastStreamVideoHeader>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppBroadcastStreamVideoHeader & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppBroadcastTriggerDetails>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppBroadcastTriggerDetails & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppCapture>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppCapture & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppCaptureAlternateShortcutKeys>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppCaptureAlternateShortcutKeys & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppCaptureFileGeneratedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppCaptureFileGeneratedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppCaptureRecordOperation>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppCaptureRecordOperation & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppCaptureServices>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppCaptureServices & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppCaptureSettings>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppCaptureSettings & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::AppCaptureState>
{
    size_t operator()(const winrt::Windows::Media::Capture::AppCaptureState & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::CameraCaptureUI>
{
    size_t operator()(const winrt::Windows::Media::Capture::CameraCaptureUI & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings>
{
    size_t operator()(const winrt::Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings>
{
    size_t operator()(const winrt::Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::CapturedFrame>
{
    size_t operator()(const winrt::Windows::Media::Capture::CapturedFrame & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::CapturedFrameControlValues>
{
    size_t operator()(const winrt::Windows::Media::Capture::CapturedFrameControlValues & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::CapturedPhoto>
{
    size_t operator()(const winrt::Windows::Media::Capture::CapturedPhoto & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::GameBarServices>
{
    size_t operator()(const winrt::Windows::Media::Capture::GameBarServices & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::GameBarServicesCommandEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::GameBarServicesCommandEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::GameBarServicesManager>
{
    size_t operator()(const winrt::Windows::Media::Capture::GameBarServicesManager & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::GameBarServicesTargetInfo>
{
    size_t operator()(const winrt::Windows::Media::Capture::GameBarServicesTargetInfo & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::LowLagMediaRecording>
{
    size_t operator()(const winrt::Windows::Media::Capture::LowLagMediaRecording & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::LowLagPhotoCapture>
{
    size_t operator()(const winrt::Windows::Media::Capture::LowLagPhotoCapture & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::LowLagPhotoSequenceCapture>
{
    size_t operator()(const winrt::Windows::Media::Capture::LowLagPhotoSequenceCapture & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::MediaCapture>
{
    size_t operator()(const winrt::Windows::Media::Capture::MediaCapture & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::MediaCaptureFailedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::MediaCaptureFailedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::MediaCaptureFocusChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::MediaCaptureFocusChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::MediaCaptureInitializationSettings>
{
    size_t operator()(const winrt::Windows::Media::Capture::MediaCaptureInitializationSettings & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::MediaCapturePauseResult>
{
    size_t operator()(const winrt::Windows::Media::Capture::MediaCapturePauseResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::MediaCaptureSettings>
{
    size_t operator()(const winrt::Windows::Media::Capture::MediaCaptureSettings & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::MediaCaptureStopResult>
{
    size_t operator()(const winrt::Windows::Media::Capture::MediaCaptureStopResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::MediaCaptureVideoProfile>
{
    size_t operator()(const winrt::Windows::Media::Capture::MediaCaptureVideoProfile & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>
{
    size_t operator()(const winrt::Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::PhotoCapturedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::PhotoCapturedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::PhotoConfirmationCapturedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::PhotoConfirmationCapturedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::ScreenCapture>
{
    size_t operator()(const winrt::Windows::Media::Capture::ScreenCapture & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::SourceSuspensionChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Media::Capture::SourceSuspensionChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Media::Capture::VideoStreamConfiguration>
{
    size_t operator()(const winrt::Windows::Media::Capture::VideoStreamConfiguration & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
