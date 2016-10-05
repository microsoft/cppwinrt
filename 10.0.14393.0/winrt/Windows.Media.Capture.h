// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Media.3.h"
#include "internal/Windows.Media.Core.3.h"
#include "internal/Windows.Media.Capture.Frames.3.h"
#include "internal/Windows.Media.MediaProperties.3.h"
#include "internal/Windows.Storage.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Media.Devices.3.h"
#include "internal/Windows.Media.Effects.3.h"
#include "internal/Windows.Graphics.Imaging.3.h"
#include "internal/Windows.System.3.h"
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
    check_hresult((*this)->abi_Invoke(get(sender), get(errorEventArgs)));
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
    check_hresult((*this)->abi_Invoke(get(sender)));
}

}

namespace impl {

template <typename D>
struct produce<D, Windows::Media::Capture::IAdvancedCapturedPhoto> : produce_base<D, Windows::Media::Capture::IAdvancedCapturedPhoto>
{
    HRESULT __stdcall get_Frame(abi_arg_out<Windows::Media::Capture::ICapturedFrame> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Frame());
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
            *value = detach(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Context(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Context());
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
    HRESULT __stdcall get_FrameBoundsRelativeToReferencePhoto(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::Rect>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FrameBoundsRelativeToReferencePhoto());
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
    HRESULT __stdcall abi_CaptureAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CaptureAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CaptureWithContextAsync(abi_arg_in<Windows::IInspectable> context, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CaptureAsync(*reinterpret_cast<const Windows::IInspectable *>(&context)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_OptionalReferencePhotoCaptured(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().OptionalReferencePhotoCaptured(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> *>(&handler)));
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
            this->shim().OptionalReferencePhotoCaptured(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AllPhotosCaptured(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().AllPhotosCaptured(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::IInspectable> *>(&handler)));
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
            this->shim().AllPhotosCaptured(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FinishAsync(abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().FinishAsync());
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
struct produce<D, Windows::Media::Capture::IAppCapture> : produce_base<D, Windows::Media::Capture::IAppCapture>
{
    HRESULT __stdcall get_IsCapturingAudio(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsCapturingAudio());
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
            *value = detach(this->shim().IsCapturingVideo());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CapturingChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCapture, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().CapturingChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCapture, Windows::IInspectable> *>(&handler)));
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
            *value = detach(this->shim().ToggleGameBarKey());
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
            *value = detach(this->shim().ToggleGameBarKeyModifiers());
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
            *value = detach(this->shim().SaveHistoricalVideoKey());
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
            *value = detach(this->shim().SaveHistoricalVideoKeyModifiers());
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
            *value = detach(this->shim().ToggleRecordingKey());
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
            *value = detach(this->shim().ToggleRecordingKeyModifiers());
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
            *value = detach(this->shim().TakeScreenshotKey());
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
            *value = detach(this->shim().TakeScreenshotKeyModifiers());
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
            *value = detach(this->shim().ToggleRecordingIndicatorKey());
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
            *value = detach(this->shim().ToggleRecordingIndicatorKeyModifiers());
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
            *value = detach(this->shim().ToggleMicrophoneCaptureKey());
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
            *value = detach(this->shim().ToggleMicrophoneCaptureKeyModifiers());
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
            *value = detach(this->shim().ToggleCameraCaptureKey());
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
            *value = detach(this->shim().ToggleCameraCaptureKeyModifiers());
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
            *value = detach(this->shim().ToggleBroadcastKey());
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
            *value = detach(this->shim().ToggleBroadcastKeyModifiers());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureManagerStatics> : produce_base<D, Windows::Media::Capture::IAppCaptureManagerStatics>
{
    HRESULT __stdcall abi_GetCurrentSettings(abi_arg_out<Windows::Media::Capture::IAppCaptureSettings> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetCurrentSettings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ApplySettings(abi_arg_in<Windows::Media::Capture::IAppCaptureSettings> appCaptureSettings) noexcept override
    {
        try
        {
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
struct produce<D, Windows::Media::Capture::IAppCaptureSettings> : produce_base<D, Windows::Media::Capture::IAppCaptureSettings>
{
    HRESULT __stdcall put_AppCaptureDestinationFolder(abi_arg_in<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            this->shim().AppCaptureDestinationFolder(*reinterpret_cast<const Windows::Storage::StorageFolder *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppCaptureDestinationFolder(abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppCaptureDestinationFolder());
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
            *value = detach(this->shim().AudioEncodingBitrate());
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
            *value = detach(this->shim().IsAudioCaptureEnabled());
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
            *value = detach(this->shim().CustomVideoEncodingBitrate());
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
            *value = detach(this->shim().CustomVideoEncodingHeight());
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
            *value = detach(this->shim().CustomVideoEncodingWidth());
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
            *value = detach(this->shim().HistoricalBufferLength());
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
            *value = detach(this->shim().HistoricalBufferLengthUnit());
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
            *value = detach(this->shim().IsHistoricalCaptureEnabled());
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
            *value = detach(this->shim().IsHistoricalCaptureOnBatteryAllowed());
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
            *value = detach(this->shim().IsHistoricalCaptureOnWirelessDisplayAllowed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaximumRecordLength(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            this->shim().MaximumRecordLength(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaximumRecordLength(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaximumRecordLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ScreenshotDestinationFolder(abi_arg_in<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            this->shim().ScreenshotDestinationFolder(*reinterpret_cast<const Windows::Storage::StorageFolder *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScreenshotDestinationFolder(abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ScreenshotDestinationFolder());
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
            *value = detach(this->shim().VideoEncodingBitrateMode());
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
            *value = detach(this->shim().VideoEncodingResolutionMode());
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
            *value = detach(this->shim().IsAppCaptureEnabled());
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
            *value = detach(this->shim().IsCpuConstrained());
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
            *value = detach(this->shim().IsDisabledByPolicy());
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
            *value = detach(this->shim().IsMemoryConstrained());
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
            *value = detach(this->shim().HasHardwareEncoder());
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
            *value = detach(this->shim().IsGpuConstrained());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlternateShortcutKeys(abi_arg_out<Windows::Media::Capture::IAppCaptureAlternateShortcutKeys> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlternateShortcutKeys());
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
            *value = detach(this->shim().IsMicrophoneCaptureEnabled());
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
            *value = detach(this->shim().IsMicrophoneCaptureEnabledByDefault());
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
            *value = detach(this->shim().SystemAudioGain());
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
            *value = detach(this->shim().MicrophoneGain());
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
            *value = detach(this->shim().VideoEncodingFrameRateMode());
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
    HRESULT __stdcall abi_GetForCurrentView(abi_arg_out<Windows::Media::Capture::IAppCapture> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetForCurrentView());
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
    HRESULT __stdcall get_PhotoSettings(abi_arg_out<Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PhotoSettings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoSettings(abi_arg_out<Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoSettings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CaptureFileAsync(Windows::Media::Capture::CameraCaptureUIMode mode, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().CaptureFileAsync(mode));
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
            *value = detach(this->shim().Format());
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
            *value = detach(this->shim().MaxResolution());
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
            this->shim().MaxResolution(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CroppedSizeInPixels(abi_arg_out<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CroppedSizeInPixels());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CroppedSizeInPixels(abi_arg_in<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            this->shim().CroppedSizeInPixels(*reinterpret_cast<const Windows::Foundation::Size *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CroppedAspectRatio(abi_arg_out<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CroppedAspectRatio());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CroppedAspectRatio(abi_arg_in<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
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
            *value = detach(this->shim().AllowCropping());
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
            *value = detach(this->shim().Format());
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
            *value = detach(this->shim().MaxResolution());
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
            *value = detach(this->shim().MaxDurationInSeconds());
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
            *value = detach(this->shim().AllowTrimming());
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
    HRESULT __stdcall abi_Show(abi_arg_in<Windows::Media::Capture::IMediaCapture> mediaCapture) noexcept override
    {
        try
        {
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
            *value = detach(this->shim().Width());
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
            *value = detach(this->shim().Height());
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
    HRESULT __stdcall get_Exposure(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Exposure());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExposureCompensation(abi_arg_out<Windows::Foundation::IReference<float>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExposureCompensation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsoSpeed(abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsoSpeed());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Focus(abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Focus());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SceneMode(abi_arg_out<Windows::Foundation::IReference<winrt::Windows::Media::Devices::CaptureSceneMode>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SceneMode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Flashed(abi_arg_out<Windows::Foundation::IReference<bool>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Flashed());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FlashPowerPercent(abi_arg_out<Windows::Foundation::IReference<float>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FlashPowerPercent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WhiteBalance(abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WhiteBalance());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZoomFactor(abi_arg_out<Windows::Foundation::IReference<float>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ZoomFactor());
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
    HRESULT __stdcall get_FocusState(abi_arg_out<Windows::Foundation::IReference<winrt::Windows::Media::Devices::MediaCaptureFocusState>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FocusState());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsoDigitalGain(abi_arg_out<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsoDigitalGain());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsoAnalogGain(abi_arg_out<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsoAnalogGain());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SensorFrameRate(abi_arg_out<Windows::Media::MediaProperties::IMediaRatio> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SensorFrameRate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WhiteBalanceGain(abi_arg_out<Windows::Foundation::IReference<Windows::Media::Capture::WhiteBalanceGain>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WhiteBalanceGain());
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
    HRESULT __stdcall get_SoftwareBitmap(abi_arg_out<Windows::Graphics::Imaging::ISoftwareBitmap> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SoftwareBitmap());
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
    HRESULT __stdcall get_Frame(abi_arg_out<Windows::Media::Capture::ICapturedFrame> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Frame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnail(abi_arg_out<Windows::Media::Capture::ICapturedFrame> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Thumbnail());
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
struct produce<D, Windows::Media::Capture::ILowLagMediaRecording> : produce_base<D, Windows::Media::Capture::ILowLagMediaRecording>
{
    HRESULT __stdcall abi_StartAsync(abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().StartAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopAsync(abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().StopAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FinishAsync(abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().FinishAsync());
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
    HRESULT __stdcall abi_PauseAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().PauseAsync(behavior));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ResumeAsync(abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().ResumeAsync());
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
    HRESULT __stdcall abi_PauseWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().PauseWithResultAsync(behavior));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopWithResultAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().StopWithResultAsync());
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
    HRESULT __stdcall abi_CaptureAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::CapturedPhoto>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CaptureAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FinishAsync(abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().FinishAsync());
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
    HRESULT __stdcall abi_StartAsync(abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().StartAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopAsync(abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().StopAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FinishAsync(abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().FinishAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PhotoCaptured(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture, Windows::Media::Capture::PhotoCapturedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PhotoCaptured(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture, Windows::Media::Capture::PhotoCapturedEventArgs> *>(&handler)));
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
    HRESULT __stdcall abi_InitializeAsync(abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().InitializeAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InitializeWithSettingsAsync(abi_arg_in<Windows::Media::Capture::IMediaCaptureInitializationSettings> mediaCaptureInitializationSettings, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().InitializeAsync(*reinterpret_cast<const Windows::Media::Capture::MediaCaptureInitializationSettings *>(&mediaCaptureInitializationSettings)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartRecordToStorageFileAsync(abi_arg_in<Windows::Media::MediaProperties::IMediaEncodingProfile> encodingProfile, abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().StartRecordToStorageFileAsync(*reinterpret_cast<const Windows::Media::MediaProperties::MediaEncodingProfile *>(&encodingProfile), *reinterpret_cast<const Windows::Storage::IStorageFile *>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartRecordToStreamAsync(abi_arg_in<Windows::Media::MediaProperties::IMediaEncodingProfile> encodingProfile, abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> stream, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().StartRecordToStreamAsync(*reinterpret_cast<const Windows::Media::MediaProperties::MediaEncodingProfile *>(&encodingProfile), *reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartRecordToCustomSinkAsync(abi_arg_in<Windows::Media::MediaProperties::IMediaEncodingProfile> encodingProfile, abi_arg_in<Windows::Media::IMediaExtension> customMediaSink, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().StartRecordToCustomSinkAsync(*reinterpret_cast<const Windows::Media::MediaProperties::MediaEncodingProfile *>(&encodingProfile), *reinterpret_cast<const Windows::Media::IMediaExtension *>(&customMediaSink)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartRecordToCustomSinkIdAsync(abi_arg_in<Windows::Media::MediaProperties::IMediaEncodingProfile> encodingProfile, abi_arg_in<hstring> customSinkActivationId, abi_arg_in<Windows::Foundation::Collections::IPropertySet> customSinkSettings, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().StartRecordToCustomSinkAsync(*reinterpret_cast<const Windows::Media::MediaProperties::MediaEncodingProfile *>(&encodingProfile), *reinterpret_cast<const hstring *>(&customSinkActivationId), *reinterpret_cast<const Windows::Foundation::Collections::IPropertySet *>(&customSinkSettings)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopRecordAsync(abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().StopRecordAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CapturePhotoToStorageFileAsync(abi_arg_in<Windows::Media::MediaProperties::IImageEncodingProperties> type, abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().CapturePhotoToStorageFileAsync(*reinterpret_cast<const Windows::Media::MediaProperties::ImageEncodingProperties *>(&type), *reinterpret_cast<const Windows::Storage::IStorageFile *>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CapturePhotoToStreamAsync(abi_arg_in<Windows::Media::MediaProperties::IImageEncodingProperties> type, abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> stream, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().CapturePhotoToStreamAsync(*reinterpret_cast<const Windows::Media::MediaProperties::ImageEncodingProperties *>(&type), *reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddEffectAsync(Windows::Media::Capture::MediaStreamType mediaStreamType, abi_arg_in<hstring> effectActivationID, abi_arg_in<Windows::Foundation::Collections::IPropertySet> effectSettings, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().AddEffectAsync(mediaStreamType, *reinterpret_cast<const hstring *>(&effectActivationID), *reinterpret_cast<const Windows::Foundation::Collections::IPropertySet *>(&effectSettings)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ClearEffectsAsync(Windows::Media::Capture::MediaStreamType mediaStreamType, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().ClearEffectsAsync(mediaStreamType));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetEncoderProperty(Windows::Media::Capture::MediaStreamType mediaStreamType, GUID propertyId, abi_arg_in<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            this->shim().SetEncoderProperty(mediaStreamType, propertyId, *reinterpret_cast<const Windows::IInspectable *>(&propertyValue));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetEncoderProperty(Windows::Media::Capture::MediaStreamType mediaStreamType, GUID propertyId, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().GetEncoderProperty(mediaStreamType, propertyId));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Failed(abi_arg_in<Windows::Media::Capture::MediaCaptureFailedEventHandler> errorEventHandler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(this->shim().Failed(*reinterpret_cast<const Windows::Media::Capture::MediaCaptureFailedEventHandler *>(&errorEventHandler)));
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
            this->shim().Failed(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RecordLimitationExceeded(abi_arg_in<Windows::Media::Capture::RecordLimitationExceededEventHandler> recordLimitationExceededEventHandler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(this->shim().RecordLimitationExceeded(*reinterpret_cast<const Windows::Media::Capture::RecordLimitationExceededEventHandler *>(&recordLimitationExceededEventHandler)));
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
            this->shim().RecordLimitationExceeded(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaCaptureSettings(abi_arg_out<Windows::Media::Capture::IMediaCaptureSettings> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediaCaptureSettings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioDeviceController(abi_arg_out<Windows::Media::Devices::IAudioDeviceController> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AudioDeviceController());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoDeviceController(abi_arg_out<Windows::Media::Devices::IVideoDeviceController> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoDeviceController());
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
            *value = detach(this->shim().GetPreviewMirroring());
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
            *value = detach(this->shim().GetPreviewRotation());
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
            *value = detach(this->shim().GetRecordRotation());
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
    HRESULT __stdcall abi_PrepareLowLagRecordToStorageFileAsync(abi_arg_in<Windows::Media::MediaProperties::IMediaEncodingProfile> encodingProfile, abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().PrepareLowLagRecordToStorageFileAsync(*reinterpret_cast<const Windows::Media::MediaProperties::MediaEncodingProfile *>(&encodingProfile), *reinterpret_cast<const Windows::Storage::IStorageFile *>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PrepareLowLagRecordToStreamAsync(abi_arg_in<Windows::Media::MediaProperties::IMediaEncodingProfile> encodingProfile, abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> stream, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().PrepareLowLagRecordToStreamAsync(*reinterpret_cast<const Windows::Media::MediaProperties::MediaEncodingProfile *>(&encodingProfile), *reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PrepareLowLagRecordToCustomSinkAsync(abi_arg_in<Windows::Media::MediaProperties::IMediaEncodingProfile> encodingProfile, abi_arg_in<Windows::Media::IMediaExtension> customMediaSink, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().PrepareLowLagRecordToCustomSinkAsync(*reinterpret_cast<const Windows::Media::MediaProperties::MediaEncodingProfile *>(&encodingProfile), *reinterpret_cast<const Windows::Media::IMediaExtension *>(&customMediaSink)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PrepareLowLagRecordToCustomSinkIdAsync(abi_arg_in<Windows::Media::MediaProperties::IMediaEncodingProfile> encodingProfile, abi_arg_in<hstring> customSinkActivationId, abi_arg_in<Windows::Foundation::Collections::IPropertySet> customSinkSettings, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().PrepareLowLagRecordToCustomSinkAsync(*reinterpret_cast<const Windows::Media::MediaProperties::MediaEncodingProfile *>(&encodingProfile), *reinterpret_cast<const hstring *>(&customSinkActivationId), *reinterpret_cast<const Windows::Foundation::Collections::IPropertySet *>(&customSinkSettings)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PrepareLowLagPhotoCaptureAsync(abi_arg_in<Windows::Media::MediaProperties::IImageEncodingProperties> type, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoCapture>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().PrepareLowLagPhotoCaptureAsync(*reinterpret_cast<const Windows::Media::MediaProperties::ImageEncodingProperties *>(&type)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PrepareLowLagPhotoSequenceCaptureAsync(abi_arg_in<Windows::Media::MediaProperties::IImageEncodingProperties> type, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoSequenceCapture>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().PrepareLowLagPhotoSequenceCaptureAsync(*reinterpret_cast<const Windows::Media::MediaProperties::ImageEncodingProperties *>(&type)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetEncodingPropertiesAsync(Windows::Media::Capture::MediaStreamType mediaStreamType, abi_arg_in<Windows::Media::MediaProperties::IMediaEncodingProperties> mediaEncodingProperties, abi_arg_in<Windows::Foundation::Collections::IMap<GUID, Windows::IInspectable>> encoderProperties, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SetEncodingPropertiesAsync(mediaStreamType, *reinterpret_cast<const Windows::Media::MediaProperties::IMediaEncodingProperties *>(&mediaEncodingProperties), *reinterpret_cast<const Windows::Media::MediaProperties::MediaPropertySet *>(&encoderProperties)));
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
    HRESULT __stdcall abi_PrepareVariablePhotoSequenceCaptureAsync(abi_arg_in<Windows::Media::MediaProperties::IImageEncodingProperties> type, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Core::VariablePhotoSequenceCapture>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().PrepareVariablePhotoSequenceCaptureAsync(*reinterpret_cast<const Windows::Media::MediaProperties::ImageEncodingProperties *>(&type)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_FocusChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureFocusChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().FocusChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> *>(&handler)));
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
            this->shim().FocusChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PhotoConfirmationCaptured(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::PhotoConfirmationCapturedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PhotoConfirmationCaptured(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> *>(&handler)));
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
    HRESULT __stdcall abi_AddAudioEffectAsync(abi_arg_in<Windows::Media::Effects::IAudioEffectDefinition> definition, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension>> op) noexcept override
    {
        try
        {
            *op = detach(this->shim().AddAudioEffectAsync(*reinterpret_cast<const Windows::Media::Effects::IAudioEffectDefinition *>(&definition)));
            return S_OK;
        }
        catch (...)
        {
            *op = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddVideoEffectAsync(abi_arg_in<Windows::Media::Effects::IVideoEffectDefinition> definition, Windows::Media::Capture::MediaStreamType mediaStreamType, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension>> op) noexcept override
    {
        try
        {
            *op = detach(this->shim().AddVideoEffectAsync(*reinterpret_cast<const Windows::Media::Effects::IVideoEffectDefinition *>(&definition), mediaStreamType));
            return S_OK;
        }
        catch (...)
        {
            *op = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PauseRecordAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().PauseRecordAsync(behavior));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ResumeRecordAsync(abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().ResumeRecordAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CameraStreamStateChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().CameraStreamStateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::IInspectable> *>(&handler)));
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
            *streamState = detach(this->shim().CameraStreamState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPreviewFrameAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetPreviewFrameAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPreviewFrameCopyAsync(abi_arg_in<Windows::Media::IVideoFrame> destination, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetPreviewFrameAsync(*reinterpret_cast<const Windows::Media::VideoFrame *>(&destination)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ThermalStatusChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ThermalStatusChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::IInspectable> *>(&handler)));
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
            *value = detach(this->shim().ThermalStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PrepareAdvancedPhotoCaptureAsync(abi_arg_in<Windows::Media::MediaProperties::IImageEncodingProperties> encodingProperties, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedPhotoCapture>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().PrepareAdvancedPhotoCaptureAsync(*reinterpret_cast<const Windows::Media::MediaProperties::ImageEncodingProperties *>(&encodingProperties)));
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
    HRESULT __stdcall abi_RemoveEffectAsync(abi_arg_in<Windows::Media::IMediaExtension> effect, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().RemoveEffectAsync(*reinterpret_cast<const Windows::Media::IMediaExtension *>(&effect)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PauseRecordWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().PauseRecordWithResultAsync(behavior));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopRecordWithResultAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().StopRecordWithResultAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrameSources(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::Media::Capture::Frames::MediaFrameSource>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FrameSources());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFrameReaderAsync(abi_arg_in<Windows::Media::Capture::Frames::IMediaFrameSource> inputSource, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateFrameReaderAsync(*reinterpret_cast<const Windows::Media::Capture::Frames::MediaFrameSource *>(&inputSource)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFrameReaderWithSubtypeAsync(abi_arg_in<Windows::Media::Capture::Frames::IMediaFrameSource> inputSource, abi_arg_in<hstring> outputSubtype, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateFrameReaderAsync(*reinterpret_cast<const Windows::Media::Capture::Frames::MediaFrameSource *>(&inputSource), *reinterpret_cast<const hstring *>(&outputSubtype)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFrameReaderWithSubtypeAndSizeAsync(abi_arg_in<Windows::Media::Capture::Frames::IMediaFrameSource> inputSource, abi_arg_in<hstring> outputSubtype, abi_arg_in<Windows::Graphics::Imaging::BitmapSize> outputSize, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateFrameReaderAsync(*reinterpret_cast<const Windows::Media::Capture::Frames::MediaFrameSource *>(&inputSource), *reinterpret_cast<const hstring *>(&outputSubtype), *reinterpret_cast<const Windows::Graphics::Imaging::BitmapSize *>(&outputSize)));
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
struct produce<D, Windows::Media::Capture::IMediaCaptureFailedEventArgs> : produce_base<D, Windows::Media::Capture::IMediaCaptureFailedEventArgs>
{
    HRESULT __stdcall get_Message(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Message());
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
            *value = detach(this->shim().Code());
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
            *value = detach(this->shim().FocusState());
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
    HRESULT __stdcall put_AudioDeviceId(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().AudioDeviceId(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioDeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AudioDeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VideoDeviceId(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().VideoDeviceId(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoDeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoDeviceId());
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
            *value = detach(this->shim().StreamingCaptureMode());
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
            *value = detach(this->shim().PhotoCaptureSource());
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
            *value = detach(this->shim().MediaCategory());
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
            *value = detach(this->shim().AudioProcessing());
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
    HRESULT __stdcall put_AudioSource(abi_arg_in<Windows::Media::Core::IMediaSource> value) noexcept override
    {
        try
        {
            this->shim().AudioSource(*reinterpret_cast<const Windows::Media::Core::IMediaSource *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioSource(abi_arg_out<Windows::Media::Core::IMediaSource> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AudioSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VideoSource(abi_arg_in<Windows::Media::Core::IMediaSource> value) noexcept override
    {
        try
        {
            this->shim().VideoSource(*reinterpret_cast<const Windows::Media::Core::IMediaSource *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoSource(abi_arg_out<Windows::Media::Core::IMediaSource> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoSource());
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
    HRESULT __stdcall get_VideoProfile(abi_arg_out<Windows::Media::Capture::IMediaCaptureVideoProfile> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoProfile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VideoProfile(abi_arg_in<Windows::Media::Capture::IMediaCaptureVideoProfile> value) noexcept override
    {
        try
        {
            this->shim().VideoProfile(*reinterpret_cast<const Windows::Media::Capture::MediaCaptureVideoProfile *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreviewMediaDescription(abi_arg_out<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PreviewMediaDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PreviewMediaDescription(abi_arg_in<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription> value) noexcept override
    {
        try
        {
            this->shim().PreviewMediaDescription(*reinterpret_cast<const Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecordMediaDescription(abi_arg_out<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RecordMediaDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RecordMediaDescription(abi_arg_in<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription> value) noexcept override
    {
        try
        {
            this->shim().RecordMediaDescription(*reinterpret_cast<const Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhotoMediaDescription(abi_arg_out<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PhotoMediaDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PhotoMediaDescription(abi_arg_in<Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription> value) noexcept override
    {
        try
        {
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
    HRESULT __stdcall get_SourceGroup(abi_arg_out<Windows::Media::Capture::Frames::IMediaFrameSourceGroup> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SourceGroup());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SourceGroup(abi_arg_in<Windows::Media::Capture::Frames::IMediaFrameSourceGroup> value) noexcept override
    {
        try
        {
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
            *value = detach(this->shim().SharingMode());
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
            *value = detach(this->shim().MemoryPreference());
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
struct produce<D, Windows::Media::Capture::IMediaCapturePauseResult> : produce_base<D, Windows::Media::Capture::IMediaCapturePauseResult>
{
    HRESULT __stdcall get_LastFrame(abi_arg_out<Windows::Media::IVideoFrame> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LastFrame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecordDuration(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RecordDuration());
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
    HRESULT __stdcall get_AudioDeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AudioDeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoDeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoDeviceId());
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
            *value = detach(this->shim().StreamingCaptureMode());
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
            *value = detach(this->shim().PhotoCaptureSource());
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
            *value = detach(this->shim().VideoDeviceCharacteristic());
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
            *value = detach(this->shim().ConcurrentRecordAndPhotoSupported());
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
            *value = detach(this->shim().ConcurrentRecordAndPhotoSequenceSupported());
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
            *value = detach(this->shim().CameraSoundRequiredForRegion());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Horizontal35mmEquivalentFocalLength(abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Horizontal35mmEquivalentFocalLength());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PitchOffsetDegrees(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PitchOffsetDegrees());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Vertical35mmEquivalentFocalLength(abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Vertical35mmEquivalentFocalLength());
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
            *value = detach(this->shim().MediaCategory());
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
            *value = detach(this->shim().AudioProcessing());
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
    HRESULT __stdcall abi_IsVideoProfileSupported(abi_arg_in<hstring> videoDeviceId, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsVideoProfileSupported(*reinterpret_cast<const hstring *>(&videoDeviceId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAllVideoProfiles(abi_arg_in<hstring> videoDeviceId, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FindAllVideoProfiles(*reinterpret_cast<const hstring *>(&videoDeviceId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindConcurrentProfiles(abi_arg_in<hstring> videoDeviceId, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FindConcurrentProfiles(*reinterpret_cast<const hstring *>(&videoDeviceId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindKnownVideoProfiles(abi_arg_in<hstring> videoDeviceId, Windows::Media::Capture::KnownVideoProfile name, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FindKnownVideoProfiles(*reinterpret_cast<const hstring *>(&videoDeviceId), name));
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
    HRESULT __stdcall get_LastFrame(abi_arg_out<Windows::Media::IVideoFrame> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LastFrame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecordDuration(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RecordDuration());
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
    HRESULT __stdcall abi_StartPreviewAsync(abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().StartPreviewAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartPreviewToCustomSinkAsync(abi_arg_in<Windows::Media::MediaProperties::IMediaEncodingProfile> encodingProfile, abi_arg_in<Windows::Media::IMediaExtension> customMediaSink, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().StartPreviewToCustomSinkAsync(*reinterpret_cast<const Windows::Media::MediaProperties::MediaEncodingProfile *>(&encodingProfile), *reinterpret_cast<const Windows::Media::IMediaExtension *>(&customMediaSink)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartPreviewToCustomSinkIdAsync(abi_arg_in<Windows::Media::MediaProperties::IMediaEncodingProfile> encodingProfile, abi_arg_in<hstring> customSinkActivationId, abi_arg_in<Windows::Foundation::Collections::IPropertySet> customSinkSettings, abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().StartPreviewToCustomSinkAsync(*reinterpret_cast<const Windows::Media::MediaProperties::MediaEncodingProfile *>(&encodingProfile), *reinterpret_cast<const hstring *>(&customSinkActivationId), *reinterpret_cast<const Windows::Foundation::Collections::IPropertySet *>(&customSinkSettings)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopPreviewAsync(abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().StopPreviewAsync());
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
    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoDeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoDeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedPreviewMediaDescription(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportedPreviewMediaDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedRecordMediaDescription(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportedRecordMediaDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedPhotoMediaDescription(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportedPhotoMediaDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetConcurrency(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetConcurrency());
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
            *value = detach(this->shim().Width());
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
            *value = detach(this->shim().Height());
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
            *value = detach(this->shim().FrameRate());
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
            *value = detach(this->shim().IsVariablePhotoSequenceSupported());
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
            *value = detach(this->shim().IsHdrVideoSupported());
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
    HRESULT __stdcall get_Frame(abi_arg_out<Windows::Media::Capture::ICapturedFrame> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Frame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Context(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Context());
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
    HRESULT __stdcall get_Frame(abi_arg_out<Windows::Media::Capture::ICapturedFrame> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Frame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnail(abi_arg_out<Windows::Media::Capture::ICapturedFrame> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Thumbnail());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CaptureTimeOffset(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CaptureTimeOffset());
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
    HRESULT __stdcall get_Frame(abi_arg_out<Windows::Media::Capture::ICapturedFrame> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Frame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CaptureTimeOffset(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CaptureTimeOffset());
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
    HRESULT __stdcall get_AudioSource(abi_arg_out<Windows::Media::Core::IMediaSource> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AudioSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoSource(abi_arg_out<Windows::Media::Core::IMediaSource> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoSource());
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
            *value = detach(this->shim().IsAudioSuspended());
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
            *value = detach(this->shim().IsVideoSuspended());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SourceSuspensionChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::ScreenCapture, Windows::Media::Capture::SourceSuspensionChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().SourceSuspensionChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::ScreenCapture, Windows::Media::Capture::SourceSuspensionChangedEventArgs> *>(&handler)));
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
    HRESULT __stdcall abi_GetForCurrentView(abi_arg_out<Windows::Media::Capture::IScreenCapture> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetForCurrentView());
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
            *value = detach(this->shim().IsAudioSuspended());
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
            *value = detach(this->shim().IsVideoSuspended());
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
    HRESULT __stdcall get_InputProperties(abi_arg_out<Windows::Media::MediaProperties::IVideoEncodingProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InputProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutputProperties(abi_arg_out<Windows::Media::MediaProperties::IVideoEncodingProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OutputProperties());
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

template <typename D> bool impl_IAppCapture<D>::IsCapturingAudio() const
{
    bool value {};
    check_hresult(static_cast<const IAppCapture &>(static_cast<const D &>(*this))->get_IsCapturingAudio(&value));
    return value;
}

template <typename D> bool impl_IAppCapture<D>::IsCapturingVideo() const
{
    bool value {};
    check_hresult(static_cast<const IAppCapture &>(static_cast<const D &>(*this))->get_IsCapturingVideo(&value));
    return value;
}

template <typename D> event_token impl_IAppCapture<D>::CapturingChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCapture, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IAppCapture &>(static_cast<const D &>(*this))->add_CapturingChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAppCapture> impl_IAppCapture<D>::CapturingChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCapture, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IAppCapture>(this, &ABI::Windows::Media::Capture::IAppCapture::remove_CapturingChanged, CapturingChanged(handler));
}

template <typename D> void impl_IAppCapture<D>::CapturingChanged(event_token token) const
{
    check_hresult(static_cast<const IAppCapture &>(static_cast<const D &>(*this))->remove_CapturingChanged(token));
}

template <typename D> Windows::Media::Capture::AppCapture impl_IAppCaptureStatics<D>::GetForCurrentView() const
{
    Windows::Media::Capture::AppCapture value { nullptr };
    check_hresult(static_cast<const IAppCaptureStatics &>(static_cast<const D &>(*this))->abi_GetForCurrentView(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::CameraCaptureUIPhotoFormat impl_ICameraCaptureUIPhotoCaptureSettings<D>::Format() const
{
    Windows::Media::Capture::CameraCaptureUIPhotoFormat value {};
    check_hresult(static_cast<const ICameraCaptureUIPhotoCaptureSettings &>(static_cast<const D &>(*this))->get_Format(&value));
    return value;
}

template <typename D> void impl_ICameraCaptureUIPhotoCaptureSettings<D>::Format(Windows::Media::Capture::CameraCaptureUIPhotoFormat value) const
{
    check_hresult(static_cast<const ICameraCaptureUIPhotoCaptureSettings &>(static_cast<const D &>(*this))->put_Format(value));
}

template <typename D> Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution impl_ICameraCaptureUIPhotoCaptureSettings<D>::MaxResolution() const
{
    Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution value {};
    check_hresult(static_cast<const ICameraCaptureUIPhotoCaptureSettings &>(static_cast<const D &>(*this))->get_MaxResolution(&value));
    return value;
}

template <typename D> void impl_ICameraCaptureUIPhotoCaptureSettings<D>::MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution value) const
{
    check_hresult(static_cast<const ICameraCaptureUIPhotoCaptureSettings &>(static_cast<const D &>(*this))->put_MaxResolution(value));
}

template <typename D> Windows::Foundation::Size impl_ICameraCaptureUIPhotoCaptureSettings<D>::CroppedSizeInPixels() const
{
    Windows::Foundation::Size value {};
    check_hresult(static_cast<const ICameraCaptureUIPhotoCaptureSettings &>(static_cast<const D &>(*this))->get_CroppedSizeInPixels(put(value)));
    return value;
}

template <typename D> void impl_ICameraCaptureUIPhotoCaptureSettings<D>::CroppedSizeInPixels(const Windows::Foundation::Size & value) const
{
    check_hresult(static_cast<const ICameraCaptureUIPhotoCaptureSettings &>(static_cast<const D &>(*this))->put_CroppedSizeInPixels(get(value)));
}

template <typename D> Windows::Foundation::Size impl_ICameraCaptureUIPhotoCaptureSettings<D>::CroppedAspectRatio() const
{
    Windows::Foundation::Size value {};
    check_hresult(static_cast<const ICameraCaptureUIPhotoCaptureSettings &>(static_cast<const D &>(*this))->get_CroppedAspectRatio(put(value)));
    return value;
}

template <typename D> void impl_ICameraCaptureUIPhotoCaptureSettings<D>::CroppedAspectRatio(const Windows::Foundation::Size & value) const
{
    check_hresult(static_cast<const ICameraCaptureUIPhotoCaptureSettings &>(static_cast<const D &>(*this))->put_CroppedAspectRatio(get(value)));
}

template <typename D> bool impl_ICameraCaptureUIPhotoCaptureSettings<D>::AllowCropping() const
{
    bool value {};
    check_hresult(static_cast<const ICameraCaptureUIPhotoCaptureSettings &>(static_cast<const D &>(*this))->get_AllowCropping(&value));
    return value;
}

template <typename D> void impl_ICameraCaptureUIPhotoCaptureSettings<D>::AllowCropping(bool value) const
{
    check_hresult(static_cast<const ICameraCaptureUIPhotoCaptureSettings &>(static_cast<const D &>(*this))->put_AllowCropping(value));
}

template <typename D> Windows::Media::Capture::CameraCaptureUIVideoFormat impl_ICameraCaptureUIVideoCaptureSettings<D>::Format() const
{
    Windows::Media::Capture::CameraCaptureUIVideoFormat value {};
    check_hresult(static_cast<const ICameraCaptureUIVideoCaptureSettings &>(static_cast<const D &>(*this))->get_Format(&value));
    return value;
}

template <typename D> void impl_ICameraCaptureUIVideoCaptureSettings<D>::Format(Windows::Media::Capture::CameraCaptureUIVideoFormat value) const
{
    check_hresult(static_cast<const ICameraCaptureUIVideoCaptureSettings &>(static_cast<const D &>(*this))->put_Format(value));
}

template <typename D> Windows::Media::Capture::CameraCaptureUIMaxVideoResolution impl_ICameraCaptureUIVideoCaptureSettings<D>::MaxResolution() const
{
    Windows::Media::Capture::CameraCaptureUIMaxVideoResolution value {};
    check_hresult(static_cast<const ICameraCaptureUIVideoCaptureSettings &>(static_cast<const D &>(*this))->get_MaxResolution(&value));
    return value;
}

template <typename D> void impl_ICameraCaptureUIVideoCaptureSettings<D>::MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxVideoResolution value) const
{
    check_hresult(static_cast<const ICameraCaptureUIVideoCaptureSettings &>(static_cast<const D &>(*this))->put_MaxResolution(value));
}

template <typename D> float impl_ICameraCaptureUIVideoCaptureSettings<D>::MaxDurationInSeconds() const
{
    float value {};
    check_hresult(static_cast<const ICameraCaptureUIVideoCaptureSettings &>(static_cast<const D &>(*this))->get_MaxDurationInSeconds(&value));
    return value;
}

template <typename D> void impl_ICameraCaptureUIVideoCaptureSettings<D>::MaxDurationInSeconds(float value) const
{
    check_hresult(static_cast<const ICameraCaptureUIVideoCaptureSettings &>(static_cast<const D &>(*this))->put_MaxDurationInSeconds(value));
}

template <typename D> bool impl_ICameraCaptureUIVideoCaptureSettings<D>::AllowTrimming() const
{
    bool value {};
    check_hresult(static_cast<const ICameraCaptureUIVideoCaptureSettings &>(static_cast<const D &>(*this))->get_AllowTrimming(&value));
    return value;
}

template <typename D> void impl_ICameraCaptureUIVideoCaptureSettings<D>::AllowTrimming(bool value) const
{
    check_hresult(static_cast<const ICameraCaptureUIVideoCaptureSettings &>(static_cast<const D &>(*this))->put_AllowTrimming(value));
}

template <typename D> Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings impl_ICameraCaptureUI<D>::PhotoSettings() const
{
    Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings value { nullptr };
    check_hresult(static_cast<const ICameraCaptureUI &>(static_cast<const D &>(*this))->get_PhotoSettings(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings impl_ICameraCaptureUI<D>::VideoSettings() const
{
    Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings value { nullptr };
    check_hresult(static_cast<const ICameraCaptureUI &>(static_cast<const D &>(*this))->get_VideoSettings(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> impl_ICameraCaptureUI<D>::CaptureFileAsync(Windows::Media::Capture::CameraCaptureUIMode mode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> asyncInfo;
    check_hresult(static_cast<const ICameraCaptureUI &>(static_cast<const D &>(*this))->abi_CaptureFileAsync(mode, put(asyncInfo)));
    return asyncInfo;
}

template <typename D> hstring impl_IMediaCaptureFailedEventArgs<D>::Message() const
{
    hstring value;
    check_hresult(static_cast<const IMediaCaptureFailedEventArgs &>(static_cast<const D &>(*this))->get_Message(put(value)));
    return value;
}

template <typename D> uint32_t impl_IMediaCaptureFailedEventArgs<D>::Code() const
{
    uint32_t value {};
    check_hresult(static_cast<const IMediaCaptureFailedEventArgs &>(static_cast<const D &>(*this))->get_Code(&value));
    return value;
}

template <typename D> uint32_t impl_IMediaCaptureVideoProfileMediaDescription<D>::Width() const
{
    uint32_t value {};
    check_hresult(static_cast<const IMediaCaptureVideoProfileMediaDescription &>(static_cast<const D &>(*this))->get_Width(&value));
    return value;
}

template <typename D> uint32_t impl_IMediaCaptureVideoProfileMediaDescription<D>::Height() const
{
    uint32_t value {};
    check_hresult(static_cast<const IMediaCaptureVideoProfileMediaDescription &>(static_cast<const D &>(*this))->get_Height(&value));
    return value;
}

template <typename D> double impl_IMediaCaptureVideoProfileMediaDescription<D>::FrameRate() const
{
    double value {};
    check_hresult(static_cast<const IMediaCaptureVideoProfileMediaDescription &>(static_cast<const D &>(*this))->get_FrameRate(&value));
    return value;
}

template <typename D> bool impl_IMediaCaptureVideoProfileMediaDescription<D>::IsVariablePhotoSequenceSupported() const
{
    bool value {};
    check_hresult(static_cast<const IMediaCaptureVideoProfileMediaDescription &>(static_cast<const D &>(*this))->get_IsVariablePhotoSequenceSupported(&value));
    return value;
}

template <typename D> bool impl_IMediaCaptureVideoProfileMediaDescription<D>::IsHdrVideoSupported() const
{
    bool value {};
    check_hresult(static_cast<const IMediaCaptureVideoProfileMediaDescription &>(static_cast<const D &>(*this))->get_IsHdrVideoSupported(&value));
    return value;
}

template <typename D> hstring impl_IMediaCaptureVideoProfile<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IMediaCaptureVideoProfile &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaCaptureVideoProfile<D>::VideoDeviceId() const
{
    hstring value;
    check_hresult(static_cast<const IMediaCaptureVideoProfile &>(static_cast<const D &>(*this))->get_VideoDeviceId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> impl_IMediaCaptureVideoProfile<D>::SupportedPreviewMediaDescription() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> value;
    check_hresult(static_cast<const IMediaCaptureVideoProfile &>(static_cast<const D &>(*this))->get_SupportedPreviewMediaDescription(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> impl_IMediaCaptureVideoProfile<D>::SupportedRecordMediaDescription() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> value;
    check_hresult(static_cast<const IMediaCaptureVideoProfile &>(static_cast<const D &>(*this))->get_SupportedRecordMediaDescription(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> impl_IMediaCaptureVideoProfile<D>::SupportedPhotoMediaDescription() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> value;
    check_hresult(static_cast<const IMediaCaptureVideoProfile &>(static_cast<const D &>(*this))->get_SupportedPhotoMediaDescription(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> impl_IMediaCaptureVideoProfile<D>::GetConcurrency() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> value;
    check_hresult(static_cast<const IMediaCaptureVideoProfile &>(static_cast<const D &>(*this))->abi_GetConcurrency(put(value)));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings<D>::AudioDeviceId(hstring_ref value) const
{
    check_hresult(static_cast<const IMediaCaptureInitializationSettings &>(static_cast<const D &>(*this))->put_AudioDeviceId(get(value)));
}

template <typename D> hstring impl_IMediaCaptureInitializationSettings<D>::AudioDeviceId() const
{
    hstring value;
    check_hresult(static_cast<const IMediaCaptureInitializationSettings &>(static_cast<const D &>(*this))->get_AudioDeviceId(put(value)));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings<D>::VideoDeviceId(hstring_ref value) const
{
    check_hresult(static_cast<const IMediaCaptureInitializationSettings &>(static_cast<const D &>(*this))->put_VideoDeviceId(get(value)));
}

template <typename D> hstring impl_IMediaCaptureInitializationSettings<D>::VideoDeviceId() const
{
    hstring value;
    check_hresult(static_cast<const IMediaCaptureInitializationSettings &>(static_cast<const D &>(*this))->get_VideoDeviceId(put(value)));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings<D>::StreamingCaptureMode(Windows::Media::Capture::StreamingCaptureMode value) const
{
    check_hresult(static_cast<const IMediaCaptureInitializationSettings &>(static_cast<const D &>(*this))->put_StreamingCaptureMode(value));
}

template <typename D> Windows::Media::Capture::StreamingCaptureMode impl_IMediaCaptureInitializationSettings<D>::StreamingCaptureMode() const
{
    Windows::Media::Capture::StreamingCaptureMode value {};
    check_hresult(static_cast<const IMediaCaptureInitializationSettings &>(static_cast<const D &>(*this))->get_StreamingCaptureMode(&value));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings<D>::PhotoCaptureSource(Windows::Media::Capture::PhotoCaptureSource value) const
{
    check_hresult(static_cast<const IMediaCaptureInitializationSettings &>(static_cast<const D &>(*this))->put_PhotoCaptureSource(value));
}

template <typename D> Windows::Media::Capture::PhotoCaptureSource impl_IMediaCaptureInitializationSettings<D>::PhotoCaptureSource() const
{
    Windows::Media::Capture::PhotoCaptureSource value {};
    check_hresult(static_cast<const IMediaCaptureInitializationSettings &>(static_cast<const D &>(*this))->get_PhotoCaptureSource(&value));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings2<D>::MediaCategory(Windows::Media::Capture::MediaCategory value) const
{
    check_hresult(static_cast<const IMediaCaptureInitializationSettings2 &>(static_cast<const D &>(*this))->put_MediaCategory(value));
}

template <typename D> Windows::Media::Capture::MediaCategory impl_IMediaCaptureInitializationSettings2<D>::MediaCategory() const
{
    Windows::Media::Capture::MediaCategory value {};
    check_hresult(static_cast<const IMediaCaptureInitializationSettings2 &>(static_cast<const D &>(*this))->get_MediaCategory(&value));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings2<D>::AudioProcessing(Windows::Media::AudioProcessing value) const
{
    check_hresult(static_cast<const IMediaCaptureInitializationSettings2 &>(static_cast<const D &>(*this))->put_AudioProcessing(value));
}

template <typename D> Windows::Media::AudioProcessing impl_IMediaCaptureInitializationSettings2<D>::AudioProcessing() const
{
    Windows::Media::AudioProcessing value {};
    check_hresult(static_cast<const IMediaCaptureInitializationSettings2 &>(static_cast<const D &>(*this))->get_AudioProcessing(&value));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings3<D>::AudioSource(const Windows::Media::Core::IMediaSource & value) const
{
    check_hresult(static_cast<const IMediaCaptureInitializationSettings3 &>(static_cast<const D &>(*this))->put_AudioSource(get(value)));
}

template <typename D> Windows::Media::Core::IMediaSource impl_IMediaCaptureInitializationSettings3<D>::AudioSource() const
{
    Windows::Media::Core::IMediaSource value;
    check_hresult(static_cast<const IMediaCaptureInitializationSettings3 &>(static_cast<const D &>(*this))->get_AudioSource(put(value)));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings3<D>::VideoSource(const Windows::Media::Core::IMediaSource & value) const
{
    check_hresult(static_cast<const IMediaCaptureInitializationSettings3 &>(static_cast<const D &>(*this))->put_VideoSource(get(value)));
}

template <typename D> Windows::Media::Core::IMediaSource impl_IMediaCaptureInitializationSettings3<D>::VideoSource() const
{
    Windows::Media::Core::IMediaSource value;
    check_hresult(static_cast<const IMediaCaptureInitializationSettings3 &>(static_cast<const D &>(*this))->get_VideoSource(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::MediaCaptureVideoProfile impl_IMediaCaptureInitializationSettings4<D>::VideoProfile() const
{
    Windows::Media::Capture::MediaCaptureVideoProfile value { nullptr };
    check_hresult(static_cast<const IMediaCaptureInitializationSettings4 &>(static_cast<const D &>(*this))->get_VideoProfile(put(value)));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings4<D>::VideoProfile(const Windows::Media::Capture::MediaCaptureVideoProfile & value) const
{
    check_hresult(static_cast<const IMediaCaptureInitializationSettings4 &>(static_cast<const D &>(*this))->put_VideoProfile(get(value)));
}

template <typename D> Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription impl_IMediaCaptureInitializationSettings4<D>::PreviewMediaDescription() const
{
    Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription value { nullptr };
    check_hresult(static_cast<const IMediaCaptureInitializationSettings4 &>(static_cast<const D &>(*this))->get_PreviewMediaDescription(put(value)));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings4<D>::PreviewMediaDescription(const Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription & value) const
{
    check_hresult(static_cast<const IMediaCaptureInitializationSettings4 &>(static_cast<const D &>(*this))->put_PreviewMediaDescription(get(value)));
}

template <typename D> Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription impl_IMediaCaptureInitializationSettings4<D>::RecordMediaDescription() const
{
    Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription value { nullptr };
    check_hresult(static_cast<const IMediaCaptureInitializationSettings4 &>(static_cast<const D &>(*this))->get_RecordMediaDescription(put(value)));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings4<D>::RecordMediaDescription(const Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription & value) const
{
    check_hresult(static_cast<const IMediaCaptureInitializationSettings4 &>(static_cast<const D &>(*this))->put_RecordMediaDescription(get(value)));
}

template <typename D> Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription impl_IMediaCaptureInitializationSettings4<D>::PhotoMediaDescription() const
{
    Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription value { nullptr };
    check_hresult(static_cast<const IMediaCaptureInitializationSettings4 &>(static_cast<const D &>(*this))->get_PhotoMediaDescription(put(value)));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings4<D>::PhotoMediaDescription(const Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription & value) const
{
    check_hresult(static_cast<const IMediaCaptureInitializationSettings4 &>(static_cast<const D &>(*this))->put_PhotoMediaDescription(get(value)));
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameSourceGroup impl_IMediaCaptureInitializationSettings5<D>::SourceGroup() const
{
    Windows::Media::Capture::Frames::MediaFrameSourceGroup value { nullptr };
    check_hresult(static_cast<const IMediaCaptureInitializationSettings5 &>(static_cast<const D &>(*this))->get_SourceGroup(put(value)));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings5<D>::SourceGroup(const Windows::Media::Capture::Frames::MediaFrameSourceGroup & value) const
{
    check_hresult(static_cast<const IMediaCaptureInitializationSettings5 &>(static_cast<const D &>(*this))->put_SourceGroup(get(value)));
}

template <typename D> Windows::Media::Capture::MediaCaptureSharingMode impl_IMediaCaptureInitializationSettings5<D>::SharingMode() const
{
    Windows::Media::Capture::MediaCaptureSharingMode value {};
    check_hresult(static_cast<const IMediaCaptureInitializationSettings5 &>(static_cast<const D &>(*this))->get_SharingMode(&value));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings5<D>::SharingMode(Windows::Media::Capture::MediaCaptureSharingMode value) const
{
    check_hresult(static_cast<const IMediaCaptureInitializationSettings5 &>(static_cast<const D &>(*this))->put_SharingMode(value));
}

template <typename D> Windows::Media::Capture::MediaCaptureMemoryPreference impl_IMediaCaptureInitializationSettings5<D>::MemoryPreference() const
{
    Windows::Media::Capture::MediaCaptureMemoryPreference value {};
    check_hresult(static_cast<const IMediaCaptureInitializationSettings5 &>(static_cast<const D &>(*this))->get_MemoryPreference(&value));
    return value;
}

template <typename D> void impl_IMediaCaptureInitializationSettings5<D>::MemoryPreference(Windows::Media::Capture::MediaCaptureMemoryPreference value) const
{
    check_hresult(static_cast<const IMediaCaptureInitializationSettings5 &>(static_cast<const D &>(*this))->put_MemoryPreference(value));
}

template <typename D> bool impl_IMediaCaptureStatics<D>::IsVideoProfileSupported(hstring_ref videoDeviceId) const
{
    bool value {};
    check_hresult(static_cast<const IMediaCaptureStatics &>(static_cast<const D &>(*this))->abi_IsVideoProfileSupported(get(videoDeviceId), &value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> impl_IMediaCaptureStatics<D>::FindAllVideoProfiles(hstring_ref videoDeviceId) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> value;
    check_hresult(static_cast<const IMediaCaptureStatics &>(static_cast<const D &>(*this))->abi_FindAllVideoProfiles(get(videoDeviceId), put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> impl_IMediaCaptureStatics<D>::FindConcurrentProfiles(hstring_ref videoDeviceId) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> value;
    check_hresult(static_cast<const IMediaCaptureStatics &>(static_cast<const D &>(*this))->abi_FindConcurrentProfiles(get(videoDeviceId), put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> impl_IMediaCaptureStatics<D>::FindKnownVideoProfiles(hstring_ref videoDeviceId, Windows::Media::Capture::KnownVideoProfile name) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> value;
    check_hresult(static_cast<const IMediaCaptureStatics &>(static_cast<const D &>(*this))->abi_FindKnownVideoProfiles(get(videoDeviceId), name, put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture<D>::InitializeAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(static_cast<const IMediaCapture &>(static_cast<const D &>(*this))->abi_InitializeAsync(put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture<D>::InitializeAsync(const Windows::Media::Capture::MediaCaptureInitializationSettings & mediaCaptureInitializationSettings) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(static_cast<const IMediaCapture &>(static_cast<const D &>(*this))->abi_InitializeWithSettingsAsync(get(mediaCaptureInitializationSettings), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture<D>::StartRecordToStorageFileAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, const Windows::Storage::IStorageFile & file) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(static_cast<const IMediaCapture &>(static_cast<const D &>(*this))->abi_StartRecordToStorageFileAsync(get(encodingProfile), get(file), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture<D>::StartRecordToStreamAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, const Windows::Storage::Streams::IRandomAccessStream & stream) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(static_cast<const IMediaCapture &>(static_cast<const D &>(*this))->abi_StartRecordToStreamAsync(get(encodingProfile), get(stream), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture<D>::StartRecordToCustomSinkAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, const Windows::Media::IMediaExtension & customMediaSink) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(static_cast<const IMediaCapture &>(static_cast<const D &>(*this))->abi_StartRecordToCustomSinkAsync(get(encodingProfile), get(customMediaSink), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture<D>::StartRecordToCustomSinkAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, hstring_ref customSinkActivationId, const Windows::Foundation::Collections::IPropertySet & customSinkSettings) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(static_cast<const IMediaCapture &>(static_cast<const D &>(*this))->abi_StartRecordToCustomSinkIdAsync(get(encodingProfile), get(customSinkActivationId), get(customSinkSettings), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture<D>::StopRecordAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(static_cast<const IMediaCapture &>(static_cast<const D &>(*this))->abi_StopRecordAsync(put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture<D>::CapturePhotoToStorageFileAsync(const Windows::Media::MediaProperties::ImageEncodingProperties & type, const Windows::Storage::IStorageFile & file) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(static_cast<const IMediaCapture &>(static_cast<const D &>(*this))->abi_CapturePhotoToStorageFileAsync(get(type), get(file), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture<D>::CapturePhotoToStreamAsync(const Windows::Media::MediaProperties::ImageEncodingProperties & type, const Windows::Storage::Streams::IRandomAccessStream & stream) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(static_cast<const IMediaCapture &>(static_cast<const D &>(*this))->abi_CapturePhotoToStreamAsync(get(type), get(stream), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture<D>::AddEffectAsync(Windows::Media::Capture::MediaStreamType mediaStreamType, hstring_ref effectActivationID, const Windows::Foundation::Collections::IPropertySet & effectSettings) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(static_cast<const IMediaCapture &>(static_cast<const D &>(*this))->abi_AddEffectAsync(mediaStreamType, get(effectActivationID), get(effectSettings), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture<D>::ClearEffectsAsync(Windows::Media::Capture::MediaStreamType mediaStreamType) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(static_cast<const IMediaCapture &>(static_cast<const D &>(*this))->abi_ClearEffectsAsync(mediaStreamType, put(asyncInfo)));
    return asyncInfo;
}

template <typename D> void impl_IMediaCapture<D>::SetEncoderProperty(Windows::Media::Capture::MediaStreamType mediaStreamType, GUID propertyId, const Windows::IInspectable & propertyValue) const
{
    check_hresult(static_cast<const IMediaCapture &>(static_cast<const D &>(*this))->abi_SetEncoderProperty(mediaStreamType, propertyId, get(propertyValue)));
}

template <typename D> Windows::IInspectable impl_IMediaCapture<D>::GetEncoderProperty(Windows::Media::Capture::MediaStreamType mediaStreamType, GUID propertyId) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IMediaCapture &>(static_cast<const D &>(*this))->abi_GetEncoderProperty(mediaStreamType, propertyId, put(propertyValue)));
    return propertyValue;
}

template <typename D> event_token impl_IMediaCapture<D>::Failed(const Windows::Media::Capture::MediaCaptureFailedEventHandler & errorEventHandler) const
{
    event_token eventCookie {};
    check_hresult(static_cast<const IMediaCapture &>(static_cast<const D &>(*this))->add_Failed(get(errorEventHandler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IMediaCapture> impl_IMediaCapture<D>::Failed(auto_revoke_t, const Windows::Media::Capture::MediaCaptureFailedEventHandler & errorEventHandler) const
{
    return impl::make_event_revoker<D, IMediaCapture>(this, &ABI::Windows::Media::Capture::IMediaCapture::remove_Failed, Failed(errorEventHandler));
}

template <typename D> void impl_IMediaCapture<D>::Failed(event_token eventCookie) const
{
    check_hresult(static_cast<const IMediaCapture &>(static_cast<const D &>(*this))->remove_Failed(eventCookie));
}

template <typename D> event_token impl_IMediaCapture<D>::RecordLimitationExceeded(const Windows::Media::Capture::RecordLimitationExceededEventHandler & recordLimitationExceededEventHandler) const
{
    event_token eventCookie {};
    check_hresult(static_cast<const IMediaCapture &>(static_cast<const D &>(*this))->add_RecordLimitationExceeded(get(recordLimitationExceededEventHandler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IMediaCapture> impl_IMediaCapture<D>::RecordLimitationExceeded(auto_revoke_t, const Windows::Media::Capture::RecordLimitationExceededEventHandler & recordLimitationExceededEventHandler) const
{
    return impl::make_event_revoker<D, IMediaCapture>(this, &ABI::Windows::Media::Capture::IMediaCapture::remove_RecordLimitationExceeded, RecordLimitationExceeded(recordLimitationExceededEventHandler));
}

template <typename D> void impl_IMediaCapture<D>::RecordLimitationExceeded(event_token eventCookie) const
{
    check_hresult(static_cast<const IMediaCapture &>(static_cast<const D &>(*this))->remove_RecordLimitationExceeded(eventCookie));
}

template <typename D> Windows::Media::Capture::MediaCaptureSettings impl_IMediaCapture<D>::MediaCaptureSettings() const
{
    Windows::Media::Capture::MediaCaptureSettings value { nullptr };
    check_hresult(static_cast<const IMediaCapture &>(static_cast<const D &>(*this))->get_MediaCaptureSettings(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::AudioDeviceController impl_IMediaCapture<D>::AudioDeviceController() const
{
    Windows::Media::Devices::AudioDeviceController value { nullptr };
    check_hresult(static_cast<const IMediaCapture &>(static_cast<const D &>(*this))->get_AudioDeviceController(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::VideoDeviceController impl_IMediaCapture<D>::VideoDeviceController() const
{
    Windows::Media::Devices::VideoDeviceController value { nullptr };
    check_hresult(static_cast<const IMediaCapture &>(static_cast<const D &>(*this))->get_VideoDeviceController(put(value)));
    return value;
}

template <typename D> void impl_IMediaCapture<D>::SetPreviewMirroring(bool value) const
{
    check_hresult(static_cast<const IMediaCapture &>(static_cast<const D &>(*this))->abi_SetPreviewMirroring(value));
}

template <typename D> bool impl_IMediaCapture<D>::GetPreviewMirroring() const
{
    bool value {};
    check_hresult(static_cast<const IMediaCapture &>(static_cast<const D &>(*this))->abi_GetPreviewMirroring(&value));
    return value;
}

template <typename D> void impl_IMediaCapture<D>::SetPreviewRotation(Windows::Media::Capture::VideoRotation value) const
{
    check_hresult(static_cast<const IMediaCapture &>(static_cast<const D &>(*this))->abi_SetPreviewRotation(value));
}

template <typename D> Windows::Media::Capture::VideoRotation impl_IMediaCapture<D>::GetPreviewRotation() const
{
    Windows::Media::Capture::VideoRotation value {};
    check_hresult(static_cast<const IMediaCapture &>(static_cast<const D &>(*this))->abi_GetPreviewRotation(&value));
    return value;
}

template <typename D> void impl_IMediaCapture<D>::SetRecordRotation(Windows::Media::Capture::VideoRotation value) const
{
    check_hresult(static_cast<const IMediaCapture &>(static_cast<const D &>(*this))->abi_SetRecordRotation(value));
}

template <typename D> Windows::Media::Capture::VideoRotation impl_IMediaCapture<D>::GetRecordRotation() const
{
    Windows::Media::Capture::VideoRotation value {};
    check_hresult(static_cast<const IMediaCapture &>(static_cast<const D &>(*this))->abi_GetRecordRotation(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> impl_IMediaCapture2<D>::PrepareLowLagRecordToStorageFileAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, const Windows::Storage::IStorageFile & file) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> operation;
    check_hresult(static_cast<const IMediaCapture2 &>(static_cast<const D &>(*this))->abi_PrepareLowLagRecordToStorageFileAsync(get(encodingProfile), get(file), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> impl_IMediaCapture2<D>::PrepareLowLagRecordToStreamAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, const Windows::Storage::Streams::IRandomAccessStream & stream) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> operation;
    check_hresult(static_cast<const IMediaCapture2 &>(static_cast<const D &>(*this))->abi_PrepareLowLagRecordToStreamAsync(get(encodingProfile), get(stream), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> impl_IMediaCapture2<D>::PrepareLowLagRecordToCustomSinkAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, const Windows::Media::IMediaExtension & customMediaSink) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> operation;
    check_hresult(static_cast<const IMediaCapture2 &>(static_cast<const D &>(*this))->abi_PrepareLowLagRecordToCustomSinkAsync(get(encodingProfile), get(customMediaSink), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> impl_IMediaCapture2<D>::PrepareLowLagRecordToCustomSinkAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, hstring_ref customSinkActivationId, const Windows::Foundation::Collections::IPropertySet & customSinkSettings) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> operation;
    check_hresult(static_cast<const IMediaCapture2 &>(static_cast<const D &>(*this))->abi_PrepareLowLagRecordToCustomSinkIdAsync(get(encodingProfile), get(customSinkActivationId), get(customSinkSettings), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoCapture> impl_IMediaCapture2<D>::PrepareLowLagPhotoCaptureAsync(const Windows::Media::MediaProperties::ImageEncodingProperties & type) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoCapture> operation;
    check_hresult(static_cast<const IMediaCapture2 &>(static_cast<const D &>(*this))->abi_PrepareLowLagPhotoCaptureAsync(get(type), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoSequenceCapture> impl_IMediaCapture2<D>::PrepareLowLagPhotoSequenceCaptureAsync(const Windows::Media::MediaProperties::ImageEncodingProperties & type) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoSequenceCapture> operation;
    check_hresult(static_cast<const IMediaCapture2 &>(static_cast<const D &>(*this))->abi_PrepareLowLagPhotoSequenceCaptureAsync(get(type), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture2<D>::SetEncodingPropertiesAsync(Windows::Media::Capture::MediaStreamType mediaStreamType, const Windows::Media::MediaProperties::IMediaEncodingProperties & mediaEncodingProperties, const Windows::Media::MediaProperties::MediaPropertySet & encoderProperties) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IMediaCapture2 &>(static_cast<const D &>(*this))->abi_SetEncodingPropertiesAsync(mediaStreamType, get(mediaEncodingProperties), get(encoderProperties), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Core::VariablePhotoSequenceCapture> impl_IMediaCapture3<D>::PrepareVariablePhotoSequenceCaptureAsync(const Windows::Media::MediaProperties::ImageEncodingProperties & type) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Core::VariablePhotoSequenceCapture> operation;
    check_hresult(static_cast<const IMediaCapture3 &>(static_cast<const D &>(*this))->abi_PrepareVariablePhotoSequenceCaptureAsync(get(type), put(operation)));
    return operation;
}

template <typename D> event_token impl_IMediaCapture3<D>::FocusChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaCapture3 &>(static_cast<const D &>(*this))->add_FocusChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaCapture3> impl_IMediaCapture3<D>::FocusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMediaCapture3>(this, &ABI::Windows::Media::Capture::IMediaCapture3::remove_FocusChanged, FocusChanged(handler));
}

template <typename D> void impl_IMediaCapture3<D>::FocusChanged(event_token token) const
{
    check_hresult(static_cast<const IMediaCapture3 &>(static_cast<const D &>(*this))->remove_FocusChanged(token));
}

template <typename D> event_token impl_IMediaCapture3<D>::PhotoConfirmationCaptured(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaCapture3 &>(static_cast<const D &>(*this))->add_PhotoConfirmationCaptured(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaCapture3> impl_IMediaCapture3<D>::PhotoConfirmationCaptured(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMediaCapture3>(this, &ABI::Windows::Media::Capture::IMediaCapture3::remove_PhotoConfirmationCaptured, PhotoConfirmationCaptured(handler));
}

template <typename D> void impl_IMediaCapture3<D>::PhotoConfirmationCaptured(event_token token) const
{
    check_hresult(static_cast<const IMediaCapture3 &>(static_cast<const D &>(*this))->remove_PhotoConfirmationCaptured(token));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension> impl_IMediaCapture4<D>::AddAudioEffectAsync(const Windows::Media::Effects::IAudioEffectDefinition & definition) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension> op;
    check_hresult(static_cast<const IMediaCapture4 &>(static_cast<const D &>(*this))->abi_AddAudioEffectAsync(get(definition), put(op)));
    return op;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension> impl_IMediaCapture4<D>::AddVideoEffectAsync(const Windows::Media::Effects::IVideoEffectDefinition & definition, Windows::Media::Capture::MediaStreamType mediaStreamType) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension> op;
    check_hresult(static_cast<const IMediaCapture4 &>(static_cast<const D &>(*this))->abi_AddVideoEffectAsync(get(definition), mediaStreamType, put(op)));
    return op;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture4<D>::PauseRecordAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(static_cast<const IMediaCapture4 &>(static_cast<const D &>(*this))->abi_PauseRecordAsync(behavior, put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture4<D>::ResumeRecordAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(static_cast<const IMediaCapture4 &>(static_cast<const D &>(*this))->abi_ResumeRecordAsync(put(asyncInfo)));
    return asyncInfo;
}

template <typename D> event_token impl_IMediaCapture4<D>::CameraStreamStateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaCapture4 &>(static_cast<const D &>(*this))->add_CameraStreamStateChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaCapture4> impl_IMediaCapture4<D>::CameraStreamStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IMediaCapture4>(this, &ABI::Windows::Media::Capture::IMediaCapture4::remove_CameraStreamStateChanged, CameraStreamStateChanged(handler));
}

template <typename D> void impl_IMediaCapture4<D>::CameraStreamStateChanged(event_token token) const
{
    check_hresult(static_cast<const IMediaCapture4 &>(static_cast<const D &>(*this))->remove_CameraStreamStateChanged(token));
}

template <typename D> Windows::Media::Devices::CameraStreamState impl_IMediaCapture4<D>::CameraStreamState() const
{
    Windows::Media::Devices::CameraStreamState streamState {};
    check_hresult(static_cast<const IMediaCapture4 &>(static_cast<const D &>(*this))->get_CameraStreamState(&streamState));
    return streamState;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame> impl_IMediaCapture4<D>::GetPreviewFrameAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame> operation;
    check_hresult(static_cast<const IMediaCapture4 &>(static_cast<const D &>(*this))->abi_GetPreviewFrameAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame> impl_IMediaCapture4<D>::GetPreviewFrameAsync(const Windows::Media::VideoFrame & destination) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame> operation;
    check_hresult(static_cast<const IMediaCapture4 &>(static_cast<const D &>(*this))->abi_GetPreviewFrameCopyAsync(get(destination), put(operation)));
    return operation;
}

template <typename D> event_token impl_IMediaCapture4<D>::ThermalStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaCapture4 &>(static_cast<const D &>(*this))->add_ThermalStatusChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaCapture4> impl_IMediaCapture4<D>::ThermalStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IMediaCapture4>(this, &ABI::Windows::Media::Capture::IMediaCapture4::remove_ThermalStatusChanged, ThermalStatusChanged(handler));
}

template <typename D> void impl_IMediaCapture4<D>::ThermalStatusChanged(event_token token) const
{
    check_hresult(static_cast<const IMediaCapture4 &>(static_cast<const D &>(*this))->remove_ThermalStatusChanged(token));
}

template <typename D> Windows::Media::Capture::MediaCaptureThermalStatus impl_IMediaCapture4<D>::ThermalStatus() const
{
    Windows::Media::Capture::MediaCaptureThermalStatus value {};
    check_hresult(static_cast<const IMediaCapture4 &>(static_cast<const D &>(*this))->get_ThermalStatus(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedPhotoCapture> impl_IMediaCapture4<D>::PrepareAdvancedPhotoCaptureAsync(const Windows::Media::MediaProperties::ImageEncodingProperties & encodingProperties) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedPhotoCapture> operation;
    check_hresult(static_cast<const IMediaCapture4 &>(static_cast<const D &>(*this))->abi_PrepareAdvancedPhotoCaptureAsync(get(encodingProperties), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCapture5<D>::RemoveEffectAsync(const Windows::Media::IMediaExtension & effect) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(static_cast<const IMediaCapture5 &>(static_cast<const D &>(*this))->abi_RemoveEffectAsync(get(effect), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult> impl_IMediaCapture5<D>::PauseRecordWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult> operation;
    check_hresult(static_cast<const IMediaCapture5 &>(static_cast<const D &>(*this))->abi_PauseRecordWithResultAsync(behavior, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult> impl_IMediaCapture5<D>::StopRecordWithResultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult> operation;
    check_hresult(static_cast<const IMediaCapture5 &>(static_cast<const D &>(*this))->abi_StopRecordWithResultAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Media::Capture::Frames::MediaFrameSource> impl_IMediaCapture5<D>::FrameSources() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Media::Capture::Frames::MediaFrameSource> value;
    check_hresult(static_cast<const IMediaCapture5 &>(static_cast<const D &>(*this))->get_FrameSources(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> impl_IMediaCapture5<D>::CreateFrameReaderAsync(const Windows::Media::Capture::Frames::MediaFrameSource & inputSource) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> value;
    check_hresult(static_cast<const IMediaCapture5 &>(static_cast<const D &>(*this))->abi_CreateFrameReaderAsync(get(inputSource), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> impl_IMediaCapture5<D>::CreateFrameReaderAsync(const Windows::Media::Capture::Frames::MediaFrameSource & inputSource, hstring_ref outputSubtype) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> value;
    check_hresult(static_cast<const IMediaCapture5 &>(static_cast<const D &>(*this))->abi_CreateFrameReaderWithSubtypeAsync(get(inputSource), get(outputSubtype), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> impl_IMediaCapture5<D>::CreateFrameReaderAsync(const Windows::Media::Capture::Frames::MediaFrameSource & inputSource, hstring_ref outputSubtype, const Windows::Graphics::Imaging::BitmapSize & outputSize) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> value;
    check_hresult(static_cast<const IMediaCapture5 &>(static_cast<const D &>(*this))->abi_CreateFrameReaderWithSubtypeAndSizeAsync(get(inputSource), get(outputSubtype), get(outputSize), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::CapturedPhoto> impl_ILowLagPhotoCapture<D>::CaptureAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::CapturedPhoto> operation;
    check_hresult(static_cast<const ILowLagPhotoCapture &>(static_cast<const D &>(*this))->abi_CaptureAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ILowLagPhotoCapture<D>::FinishAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const ILowLagPhotoCapture &>(static_cast<const D &>(*this))->abi_FinishAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto> impl_IAdvancedPhotoCapture<D>::CaptureAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto> operation;
    check_hresult(static_cast<const IAdvancedPhotoCapture &>(static_cast<const D &>(*this))->abi_CaptureAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto> impl_IAdvancedPhotoCapture<D>::CaptureAsync(const Windows::IInspectable & context) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto> operation;
    check_hresult(static_cast<const IAdvancedPhotoCapture &>(static_cast<const D &>(*this))->abi_CaptureWithContextAsync(get(context), put(operation)));
    return operation;
}

template <typename D> event_token impl_IAdvancedPhotoCapture<D>::OptionalReferencePhotoCaptured(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IAdvancedPhotoCapture &>(static_cast<const D &>(*this))->add_OptionalReferencePhotoCaptured(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAdvancedPhotoCapture> impl_IAdvancedPhotoCapture<D>::OptionalReferencePhotoCaptured(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAdvancedPhotoCapture>(this, &ABI::Windows::Media::Capture::IAdvancedPhotoCapture::remove_OptionalReferencePhotoCaptured, OptionalReferencePhotoCaptured(handler));
}

template <typename D> void impl_IAdvancedPhotoCapture<D>::OptionalReferencePhotoCaptured(event_token token) const
{
    check_hresult(static_cast<const IAdvancedPhotoCapture &>(static_cast<const D &>(*this))->remove_OptionalReferencePhotoCaptured(token));
}

template <typename D> event_token impl_IAdvancedPhotoCapture<D>::AllPhotosCaptured(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IAdvancedPhotoCapture &>(static_cast<const D &>(*this))->add_AllPhotosCaptured(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAdvancedPhotoCapture> impl_IAdvancedPhotoCapture<D>::AllPhotosCaptured(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IAdvancedPhotoCapture>(this, &ABI::Windows::Media::Capture::IAdvancedPhotoCapture::remove_AllPhotosCaptured, AllPhotosCaptured(handler));
}

template <typename D> void impl_IAdvancedPhotoCapture<D>::AllPhotosCaptured(event_token token) const
{
    check_hresult(static_cast<const IAdvancedPhotoCapture &>(static_cast<const D &>(*this))->remove_AllPhotosCaptured(token));
}

template <typename D> Windows::Foundation::IAsyncAction impl_IAdvancedPhotoCapture<D>::FinishAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IAdvancedPhotoCapture &>(static_cast<const D &>(*this))->abi_FinishAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Media::Capture::CapturedFrame impl_IAdvancedCapturedPhoto<D>::Frame() const
{
    Windows::Media::Capture::CapturedFrame value { nullptr };
    check_hresult(static_cast<const IAdvancedCapturedPhoto &>(static_cast<const D &>(*this))->get_Frame(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::AdvancedPhotoMode impl_IAdvancedCapturedPhoto<D>::Mode() const
{
    Windows::Media::Devices::AdvancedPhotoMode value {};
    check_hresult(static_cast<const IAdvancedCapturedPhoto &>(static_cast<const D &>(*this))->get_Mode(&value));
    return value;
}

template <typename D> Windows::IInspectable impl_IAdvancedCapturedPhoto<D>::Context() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IAdvancedCapturedPhoto &>(static_cast<const D &>(*this))->get_Context(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Rect> impl_IAdvancedCapturedPhoto2<D>::FrameBoundsRelativeToReferencePhoto() const
{
    Windows::Foundation::IReference<Windows::Foundation::Rect> value;
    check_hresult(static_cast<const IAdvancedCapturedPhoto2 &>(static_cast<const D &>(*this))->get_FrameBoundsRelativeToReferencePhoto(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::CapturedFrame impl_IOptionalReferencePhotoCapturedEventArgs<D>::Frame() const
{
    Windows::Media::Capture::CapturedFrame value { nullptr };
    check_hresult(static_cast<const IOptionalReferencePhotoCapturedEventArgs &>(static_cast<const D &>(*this))->get_Frame(put(value)));
    return value;
}

template <typename D> Windows::IInspectable impl_IOptionalReferencePhotoCapturedEventArgs<D>::Context() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IOptionalReferencePhotoCapturedEventArgs &>(static_cast<const D &>(*this))->get_Context(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ILowLagMediaRecording<D>::StartAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const ILowLagMediaRecording &>(static_cast<const D &>(*this))->abi_StartAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ILowLagMediaRecording<D>::StopAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const ILowLagMediaRecording &>(static_cast<const D &>(*this))->abi_StopAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ILowLagMediaRecording<D>::FinishAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const ILowLagMediaRecording &>(static_cast<const D &>(*this))->abi_FinishAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ILowLagMediaRecording2<D>::PauseAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const ILowLagMediaRecording2 &>(static_cast<const D &>(*this))->abi_PauseAsync(behavior, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ILowLagMediaRecording2<D>::ResumeAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const ILowLagMediaRecording2 &>(static_cast<const D &>(*this))->abi_ResumeAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult> impl_ILowLagMediaRecording3<D>::PauseWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult> operation;
    check_hresult(static_cast<const ILowLagMediaRecording3 &>(static_cast<const D &>(*this))->abi_PauseWithResultAsync(behavior, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult> impl_ILowLagMediaRecording3<D>::StopWithResultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult> operation;
    check_hresult(static_cast<const ILowLagMediaRecording3 &>(static_cast<const D &>(*this))->abi_StopWithResultAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Media::VideoFrame impl_IMediaCapturePauseResult<D>::LastFrame() const
{
    Windows::Media::VideoFrame value { nullptr };
    check_hresult(static_cast<const IMediaCapturePauseResult &>(static_cast<const D &>(*this))->get_LastFrame(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IMediaCapturePauseResult<D>::RecordDuration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IMediaCapturePauseResult &>(static_cast<const D &>(*this))->get_RecordDuration(put(value)));
    return value;
}

template <typename D> Windows::Media::VideoFrame impl_IMediaCaptureStopResult<D>::LastFrame() const
{
    Windows::Media::VideoFrame value { nullptr };
    check_hresult(static_cast<const IMediaCaptureStopResult &>(static_cast<const D &>(*this))->get_LastFrame(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IMediaCaptureStopResult<D>::RecordDuration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IMediaCaptureStopResult &>(static_cast<const D &>(*this))->get_RecordDuration(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ILowLagPhotoSequenceCapture<D>::StartAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const ILowLagPhotoSequenceCapture &>(static_cast<const D &>(*this))->abi_StartAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ILowLagPhotoSequenceCapture<D>::StopAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const ILowLagPhotoSequenceCapture &>(static_cast<const D &>(*this))->abi_StopAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ILowLagPhotoSequenceCapture<D>::FinishAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const ILowLagPhotoSequenceCapture &>(static_cast<const D &>(*this))->abi_FinishAsync(put(operation)));
    return operation;
}

template <typename D> event_token impl_ILowLagPhotoSequenceCapture<D>::PhotoCaptured(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture, Windows::Media::Capture::PhotoCapturedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ILowLagPhotoSequenceCapture &>(static_cast<const D &>(*this))->add_PhotoCaptured(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ILowLagPhotoSequenceCapture> impl_ILowLagPhotoSequenceCapture<D>::PhotoCaptured(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture, Windows::Media::Capture::PhotoCapturedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ILowLagPhotoSequenceCapture>(this, &ABI::Windows::Media::Capture::ILowLagPhotoSequenceCapture::remove_PhotoCaptured, PhotoCaptured(handler));
}

template <typename D> void impl_ILowLagPhotoSequenceCapture<D>::PhotoCaptured(event_token token) const
{
    check_hresult(static_cast<const ILowLagPhotoSequenceCapture &>(static_cast<const D &>(*this))->remove_PhotoCaptured(token));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> impl_ICapturedFrameControlValues<D>::Exposure() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value;
    check_hresult(static_cast<const ICapturedFrameControlValues &>(static_cast<const D &>(*this))->get_Exposure(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<float> impl_ICapturedFrameControlValues<D>::ExposureCompensation() const
{
    Windows::Foundation::IReference<float> value;
    check_hresult(static_cast<const ICapturedFrameControlValues &>(static_cast<const D &>(*this))->get_ExposureCompensation(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_ICapturedFrameControlValues<D>::IsoSpeed() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(static_cast<const ICapturedFrameControlValues &>(static_cast<const D &>(*this))->get_IsoSpeed(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_ICapturedFrameControlValues<D>::Focus() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(static_cast<const ICapturedFrameControlValues &>(static_cast<const D &>(*this))->get_Focus(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<winrt::Windows::Media::Devices::CaptureSceneMode> impl_ICapturedFrameControlValues<D>::SceneMode() const
{
    Windows::Foundation::IReference<winrt::Windows::Media::Devices::CaptureSceneMode> value;
    check_hresult(static_cast<const ICapturedFrameControlValues &>(static_cast<const D &>(*this))->get_SceneMode(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<bool> impl_ICapturedFrameControlValues<D>::Flashed() const
{
    Windows::Foundation::IReference<bool> value;
    check_hresult(static_cast<const ICapturedFrameControlValues &>(static_cast<const D &>(*this))->get_Flashed(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<float> impl_ICapturedFrameControlValues<D>::FlashPowerPercent() const
{
    Windows::Foundation::IReference<float> value;
    check_hresult(static_cast<const ICapturedFrameControlValues &>(static_cast<const D &>(*this))->get_FlashPowerPercent(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_ICapturedFrameControlValues<D>::WhiteBalance() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(static_cast<const ICapturedFrameControlValues &>(static_cast<const D &>(*this))->get_WhiteBalance(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<float> impl_ICapturedFrameControlValues<D>::ZoomFactor() const
{
    Windows::Foundation::IReference<float> value;
    check_hresult(static_cast<const ICapturedFrameControlValues &>(static_cast<const D &>(*this))->get_ZoomFactor(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<winrt::Windows::Media::Devices::MediaCaptureFocusState> impl_ICapturedFrameControlValues2<D>::FocusState() const
{
    Windows::Foundation::IReference<winrt::Windows::Media::Devices::MediaCaptureFocusState> value;
    check_hresult(static_cast<const ICapturedFrameControlValues2 &>(static_cast<const D &>(*this))->get_FocusState(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> impl_ICapturedFrameControlValues2<D>::IsoDigitalGain() const
{
    Windows::Foundation::IReference<double> value;
    check_hresult(static_cast<const ICapturedFrameControlValues2 &>(static_cast<const D &>(*this))->get_IsoDigitalGain(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> impl_ICapturedFrameControlValues2<D>::IsoAnalogGain() const
{
    Windows::Foundation::IReference<double> value;
    check_hresult(static_cast<const ICapturedFrameControlValues2 &>(static_cast<const D &>(*this))->get_IsoAnalogGain(put(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaRatio impl_ICapturedFrameControlValues2<D>::SensorFrameRate() const
{
    Windows::Media::MediaProperties::MediaRatio value { nullptr };
    check_hresult(static_cast<const ICapturedFrameControlValues2 &>(static_cast<const D &>(*this))->get_SensorFrameRate(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Media::Capture::WhiteBalanceGain> impl_ICapturedFrameControlValues2<D>::WhiteBalanceGain() const
{
    Windows::Foundation::IReference<Windows::Media::Capture::WhiteBalanceGain> value;
    check_hresult(static_cast<const ICapturedFrameControlValues2 &>(static_cast<const D &>(*this))->get_WhiteBalanceGain(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::CapturedFrame impl_IPhotoCapturedEventArgs<D>::Frame() const
{
    Windows::Media::Capture::CapturedFrame value { nullptr };
    check_hresult(static_cast<const IPhotoCapturedEventArgs &>(static_cast<const D &>(*this))->get_Frame(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::CapturedFrame impl_IPhotoCapturedEventArgs<D>::Thumbnail() const
{
    Windows::Media::Capture::CapturedFrame value { nullptr };
    check_hresult(static_cast<const IPhotoCapturedEventArgs &>(static_cast<const D &>(*this))->get_Thumbnail(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IPhotoCapturedEventArgs<D>::CaptureTimeOffset() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IPhotoCapturedEventArgs &>(static_cast<const D &>(*this))->get_CaptureTimeOffset(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::CapturedFrame impl_ICapturedPhoto<D>::Frame() const
{
    Windows::Media::Capture::CapturedFrame value { nullptr };
    check_hresult(static_cast<const ICapturedPhoto &>(static_cast<const D &>(*this))->get_Frame(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::CapturedFrame impl_ICapturedPhoto<D>::Thumbnail() const
{
    Windows::Media::Capture::CapturedFrame value { nullptr };
    check_hresult(static_cast<const ICapturedPhoto &>(static_cast<const D &>(*this))->get_Thumbnail(put(value)));
    return value;
}

template <typename D> uint32_t impl_ICapturedFrame<D>::Width() const
{
    uint32_t value {};
    check_hresult(static_cast<const ICapturedFrame &>(static_cast<const D &>(*this))->get_Width(&value));
    return value;
}

template <typename D> uint32_t impl_ICapturedFrame<D>::Height() const
{
    uint32_t value {};
    check_hresult(static_cast<const ICapturedFrame &>(static_cast<const D &>(*this))->get_Height(&value));
    return value;
}

template <typename D> Windows::Graphics::Imaging::SoftwareBitmap impl_ICapturedFrameWithSoftwareBitmap<D>::SoftwareBitmap() const
{
    Windows::Graphics::Imaging::SoftwareBitmap value { nullptr };
    check_hresult(static_cast<const ICapturedFrameWithSoftwareBitmap &>(static_cast<const D &>(*this))->get_SoftwareBitmap(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCaptureVideoPreview<D>::StartPreviewAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(static_cast<const IMediaCaptureVideoPreview &>(static_cast<const D &>(*this))->abi_StartPreviewAsync(put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCaptureVideoPreview<D>::StartPreviewToCustomSinkAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, const Windows::Media::IMediaExtension & customMediaSink) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(static_cast<const IMediaCaptureVideoPreview &>(static_cast<const D &>(*this))->abi_StartPreviewToCustomSinkAsync(get(encodingProfile), get(customMediaSink), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCaptureVideoPreview<D>::StartPreviewToCustomSinkAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, hstring_ref customSinkActivationId, const Windows::Foundation::Collections::IPropertySet & customSinkSettings) const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(static_cast<const IMediaCaptureVideoPreview &>(static_cast<const D &>(*this))->abi_StartPreviewToCustomSinkIdAsync(get(encodingProfile), get(customSinkActivationId), get(customSinkSettings), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaCaptureVideoPreview<D>::StopPreviewAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(static_cast<const IMediaCaptureVideoPreview &>(static_cast<const D &>(*this))->abi_StopPreviewAsync(put(asyncInfo)));
    return asyncInfo;
}

template <typename D> hstring impl_IMediaCaptureSettings<D>::AudioDeviceId() const
{
    hstring value;
    check_hresult(static_cast<const IMediaCaptureSettings &>(static_cast<const D &>(*this))->get_AudioDeviceId(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaCaptureSettings<D>::VideoDeviceId() const
{
    hstring value;
    check_hresult(static_cast<const IMediaCaptureSettings &>(static_cast<const D &>(*this))->get_VideoDeviceId(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::StreamingCaptureMode impl_IMediaCaptureSettings<D>::StreamingCaptureMode() const
{
    Windows::Media::Capture::StreamingCaptureMode value {};
    check_hresult(static_cast<const IMediaCaptureSettings &>(static_cast<const D &>(*this))->get_StreamingCaptureMode(&value));
    return value;
}

template <typename D> Windows::Media::Capture::PhotoCaptureSource impl_IMediaCaptureSettings<D>::PhotoCaptureSource() const
{
    Windows::Media::Capture::PhotoCaptureSource value {};
    check_hresult(static_cast<const IMediaCaptureSettings &>(static_cast<const D &>(*this))->get_PhotoCaptureSource(&value));
    return value;
}

template <typename D> Windows::Media::Capture::VideoDeviceCharacteristic impl_IMediaCaptureSettings<D>::VideoDeviceCharacteristic() const
{
    Windows::Media::Capture::VideoDeviceCharacteristic value {};
    check_hresult(static_cast<const IMediaCaptureSettings &>(static_cast<const D &>(*this))->get_VideoDeviceCharacteristic(&value));
    return value;
}

template <typename D> bool impl_IMediaCaptureSettings2<D>::ConcurrentRecordAndPhotoSupported() const
{
    bool value {};
    check_hresult(static_cast<const IMediaCaptureSettings2 &>(static_cast<const D &>(*this))->get_ConcurrentRecordAndPhotoSupported(&value));
    return value;
}

template <typename D> bool impl_IMediaCaptureSettings2<D>::ConcurrentRecordAndPhotoSequenceSupported() const
{
    bool value {};
    check_hresult(static_cast<const IMediaCaptureSettings2 &>(static_cast<const D &>(*this))->get_ConcurrentRecordAndPhotoSequenceSupported(&value));
    return value;
}

template <typename D> bool impl_IMediaCaptureSettings2<D>::CameraSoundRequiredForRegion() const
{
    bool value {};
    check_hresult(static_cast<const IMediaCaptureSettings2 &>(static_cast<const D &>(*this))->get_CameraSoundRequiredForRegion(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_IMediaCaptureSettings2<D>::Horizontal35mmEquivalentFocalLength() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(static_cast<const IMediaCaptureSettings2 &>(static_cast<const D &>(*this))->get_Horizontal35mmEquivalentFocalLength(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IMediaCaptureSettings2<D>::PitchOffsetDegrees() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const IMediaCaptureSettings2 &>(static_cast<const D &>(*this))->get_PitchOffsetDegrees(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_IMediaCaptureSettings2<D>::Vertical35mmEquivalentFocalLength() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(static_cast<const IMediaCaptureSettings2 &>(static_cast<const D &>(*this))->get_Vertical35mmEquivalentFocalLength(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::MediaCategory impl_IMediaCaptureSettings2<D>::MediaCategory() const
{
    Windows::Media::Capture::MediaCategory value {};
    check_hresult(static_cast<const IMediaCaptureSettings2 &>(static_cast<const D &>(*this))->get_MediaCategory(&value));
    return value;
}

template <typename D> Windows::Media::AudioProcessing impl_IMediaCaptureSettings2<D>::AudioProcessing() const
{
    Windows::Media::AudioProcessing value {};
    check_hresult(static_cast<const IMediaCaptureSettings2 &>(static_cast<const D &>(*this))->get_AudioProcessing(&value));
    return value;
}

template <typename D> Windows::Media::Devices::MediaCaptureFocusState impl_IMediaCaptureFocusChangedEventArgs<D>::FocusState() const
{
    Windows::Media::Devices::MediaCaptureFocusState value {};
    check_hresult(static_cast<const IMediaCaptureFocusChangedEventArgs &>(static_cast<const D &>(*this))->get_FocusState(&value));
    return value;
}

template <typename D> Windows::Media::Capture::CapturedFrame impl_IPhotoConfirmationCapturedEventArgs<D>::Frame() const
{
    Windows::Media::Capture::CapturedFrame value { nullptr };
    check_hresult(static_cast<const IPhotoConfirmationCapturedEventArgs &>(static_cast<const D &>(*this))->get_Frame(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IPhotoConfirmationCapturedEventArgs<D>::CaptureTimeOffset() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IPhotoConfirmationCapturedEventArgs &>(static_cast<const D &>(*this))->get_CaptureTimeOffset(put(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::VideoEncodingProperties impl_IVideoStreamConfiguration<D>::InputProperties() const
{
    Windows::Media::MediaProperties::VideoEncodingProperties value { nullptr };
    check_hresult(static_cast<const IVideoStreamConfiguration &>(static_cast<const D &>(*this))->get_InputProperties(put(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::VideoEncodingProperties impl_IVideoStreamConfiguration<D>::OutputProperties() const
{
    Windows::Media::MediaProperties::VideoEncodingProperties value { nullptr };
    check_hresult(static_cast<const IVideoStreamConfiguration &>(static_cast<const D &>(*this))->get_OutputProperties(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::AppCaptureSettings impl_IAppCaptureManagerStatics<D>::GetCurrentSettings() const
{
    Windows::Media::Capture::AppCaptureSettings value { nullptr };
    check_hresult(static_cast<const IAppCaptureManagerStatics &>(static_cast<const D &>(*this))->abi_GetCurrentSettings(put(value)));
    return value;
}

template <typename D> void impl_IAppCaptureManagerStatics<D>::ApplySettings(const Windows::Media::Capture::AppCaptureSettings & appCaptureSettings) const
{
    check_hresult(static_cast<const IAppCaptureManagerStatics &>(static_cast<const D &>(*this))->abi_ApplySettings(get(appCaptureSettings)));
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys<D>::ToggleGameBarKey(Windows::System::VirtualKey value) const
{
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys &>(static_cast<const D &>(*this))->put_ToggleGameBarKey(value));
}

template <typename D> Windows::System::VirtualKey impl_IAppCaptureAlternateShortcutKeys<D>::ToggleGameBarKey() const
{
    Windows::System::VirtualKey value {};
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys &>(static_cast<const D &>(*this))->get_ToggleGameBarKey(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys<D>::ToggleGameBarKeyModifiers(Windows::System::VirtualKeyModifiers value) const
{
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys &>(static_cast<const D &>(*this))->put_ToggleGameBarKeyModifiers(value));
}

template <typename D> Windows::System::VirtualKeyModifiers impl_IAppCaptureAlternateShortcutKeys<D>::ToggleGameBarKeyModifiers() const
{
    Windows::System::VirtualKeyModifiers value {};
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys &>(static_cast<const D &>(*this))->get_ToggleGameBarKeyModifiers(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys<D>::SaveHistoricalVideoKey(Windows::System::VirtualKey value) const
{
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys &>(static_cast<const D &>(*this))->put_SaveHistoricalVideoKey(value));
}

template <typename D> Windows::System::VirtualKey impl_IAppCaptureAlternateShortcutKeys<D>::SaveHistoricalVideoKey() const
{
    Windows::System::VirtualKey value {};
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys &>(static_cast<const D &>(*this))->get_SaveHistoricalVideoKey(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys<D>::SaveHistoricalVideoKeyModifiers(Windows::System::VirtualKeyModifiers value) const
{
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys &>(static_cast<const D &>(*this))->put_SaveHistoricalVideoKeyModifiers(value));
}

template <typename D> Windows::System::VirtualKeyModifiers impl_IAppCaptureAlternateShortcutKeys<D>::SaveHistoricalVideoKeyModifiers() const
{
    Windows::System::VirtualKeyModifiers value {};
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys &>(static_cast<const D &>(*this))->get_SaveHistoricalVideoKeyModifiers(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys<D>::ToggleRecordingKey(Windows::System::VirtualKey value) const
{
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys &>(static_cast<const D &>(*this))->put_ToggleRecordingKey(value));
}

template <typename D> Windows::System::VirtualKey impl_IAppCaptureAlternateShortcutKeys<D>::ToggleRecordingKey() const
{
    Windows::System::VirtualKey value {};
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys &>(static_cast<const D &>(*this))->get_ToggleRecordingKey(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys<D>::ToggleRecordingKeyModifiers(Windows::System::VirtualKeyModifiers value) const
{
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys &>(static_cast<const D &>(*this))->put_ToggleRecordingKeyModifiers(value));
}

template <typename D> Windows::System::VirtualKeyModifiers impl_IAppCaptureAlternateShortcutKeys<D>::ToggleRecordingKeyModifiers() const
{
    Windows::System::VirtualKeyModifiers value {};
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys &>(static_cast<const D &>(*this))->get_ToggleRecordingKeyModifiers(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys<D>::TakeScreenshotKey(Windows::System::VirtualKey value) const
{
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys &>(static_cast<const D &>(*this))->put_TakeScreenshotKey(value));
}

template <typename D> Windows::System::VirtualKey impl_IAppCaptureAlternateShortcutKeys<D>::TakeScreenshotKey() const
{
    Windows::System::VirtualKey value {};
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys &>(static_cast<const D &>(*this))->get_TakeScreenshotKey(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys<D>::TakeScreenshotKeyModifiers(Windows::System::VirtualKeyModifiers value) const
{
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys &>(static_cast<const D &>(*this))->put_TakeScreenshotKeyModifiers(value));
}

template <typename D> Windows::System::VirtualKeyModifiers impl_IAppCaptureAlternateShortcutKeys<D>::TakeScreenshotKeyModifiers() const
{
    Windows::System::VirtualKeyModifiers value {};
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys &>(static_cast<const D &>(*this))->get_TakeScreenshotKeyModifiers(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys<D>::ToggleRecordingIndicatorKey(Windows::System::VirtualKey value) const
{
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys &>(static_cast<const D &>(*this))->put_ToggleRecordingIndicatorKey(value));
}

template <typename D> Windows::System::VirtualKey impl_IAppCaptureAlternateShortcutKeys<D>::ToggleRecordingIndicatorKey() const
{
    Windows::System::VirtualKey value {};
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys &>(static_cast<const D &>(*this))->get_ToggleRecordingIndicatorKey(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys<D>::ToggleRecordingIndicatorKeyModifiers(Windows::System::VirtualKeyModifiers value) const
{
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys &>(static_cast<const D &>(*this))->put_ToggleRecordingIndicatorKeyModifiers(value));
}

template <typename D> Windows::System::VirtualKeyModifiers impl_IAppCaptureAlternateShortcutKeys<D>::ToggleRecordingIndicatorKeyModifiers() const
{
    Windows::System::VirtualKeyModifiers value {};
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys &>(static_cast<const D &>(*this))->get_ToggleRecordingIndicatorKeyModifiers(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys2<D>::ToggleMicrophoneCaptureKey(Windows::System::VirtualKey value) const
{
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys2 &>(static_cast<const D &>(*this))->put_ToggleMicrophoneCaptureKey(value));
}

template <typename D> Windows::System::VirtualKey impl_IAppCaptureAlternateShortcutKeys2<D>::ToggleMicrophoneCaptureKey() const
{
    Windows::System::VirtualKey value {};
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys2 &>(static_cast<const D &>(*this))->get_ToggleMicrophoneCaptureKey(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys2<D>::ToggleMicrophoneCaptureKeyModifiers(Windows::System::VirtualKeyModifiers value) const
{
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys2 &>(static_cast<const D &>(*this))->put_ToggleMicrophoneCaptureKeyModifiers(value));
}

template <typename D> Windows::System::VirtualKeyModifiers impl_IAppCaptureAlternateShortcutKeys2<D>::ToggleMicrophoneCaptureKeyModifiers() const
{
    Windows::System::VirtualKeyModifiers value {};
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys2 &>(static_cast<const D &>(*this))->get_ToggleMicrophoneCaptureKeyModifiers(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys3<D>::ToggleCameraCaptureKey(Windows::System::VirtualKey value) const
{
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys3 &>(static_cast<const D &>(*this))->put_ToggleCameraCaptureKey(value));
}

template <typename D> Windows::System::VirtualKey impl_IAppCaptureAlternateShortcutKeys3<D>::ToggleCameraCaptureKey() const
{
    Windows::System::VirtualKey value {};
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys3 &>(static_cast<const D &>(*this))->get_ToggleCameraCaptureKey(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys3<D>::ToggleCameraCaptureKeyModifiers(Windows::System::VirtualKeyModifiers value) const
{
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys3 &>(static_cast<const D &>(*this))->put_ToggleCameraCaptureKeyModifiers(value));
}

template <typename D> Windows::System::VirtualKeyModifiers impl_IAppCaptureAlternateShortcutKeys3<D>::ToggleCameraCaptureKeyModifiers() const
{
    Windows::System::VirtualKeyModifiers value {};
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys3 &>(static_cast<const D &>(*this))->get_ToggleCameraCaptureKeyModifiers(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys3<D>::ToggleBroadcastKey(Windows::System::VirtualKey value) const
{
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys3 &>(static_cast<const D &>(*this))->put_ToggleBroadcastKey(value));
}

template <typename D> Windows::System::VirtualKey impl_IAppCaptureAlternateShortcutKeys3<D>::ToggleBroadcastKey() const
{
    Windows::System::VirtualKey value {};
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys3 &>(static_cast<const D &>(*this))->get_ToggleBroadcastKey(&value));
    return value;
}

template <typename D> void impl_IAppCaptureAlternateShortcutKeys3<D>::ToggleBroadcastKeyModifiers(Windows::System::VirtualKeyModifiers value) const
{
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys3 &>(static_cast<const D &>(*this))->put_ToggleBroadcastKeyModifiers(value));
}

template <typename D> Windows::System::VirtualKeyModifiers impl_IAppCaptureAlternateShortcutKeys3<D>::ToggleBroadcastKeyModifiers() const
{
    Windows::System::VirtualKeyModifiers value {};
    check_hresult(static_cast<const IAppCaptureAlternateShortcutKeys3 &>(static_cast<const D &>(*this))->get_ToggleBroadcastKeyModifiers(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::AppCaptureDestinationFolder(const Windows::Storage::StorageFolder & value) const
{
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->put_AppCaptureDestinationFolder(get(value)));
}

template <typename D> Windows::Storage::StorageFolder impl_IAppCaptureSettings<D>::AppCaptureDestinationFolder() const
{
    Windows::Storage::StorageFolder value { nullptr };
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->get_AppCaptureDestinationFolder(put(value)));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::AudioEncodingBitrate(uint32_t value) const
{
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->put_AudioEncodingBitrate(value));
}

template <typename D> uint32_t impl_IAppCaptureSettings<D>::AudioEncodingBitrate() const
{
    uint32_t value {};
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->get_AudioEncodingBitrate(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::IsAudioCaptureEnabled(bool value) const
{
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->put_IsAudioCaptureEnabled(value));
}

template <typename D> bool impl_IAppCaptureSettings<D>::IsAudioCaptureEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->get_IsAudioCaptureEnabled(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::CustomVideoEncodingBitrate(uint32_t value) const
{
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->put_CustomVideoEncodingBitrate(value));
}

template <typename D> uint32_t impl_IAppCaptureSettings<D>::CustomVideoEncodingBitrate() const
{
    uint32_t value {};
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->get_CustomVideoEncodingBitrate(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::CustomVideoEncodingHeight(uint32_t value) const
{
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->put_CustomVideoEncodingHeight(value));
}

template <typename D> uint32_t impl_IAppCaptureSettings<D>::CustomVideoEncodingHeight() const
{
    uint32_t value {};
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->get_CustomVideoEncodingHeight(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::CustomVideoEncodingWidth(uint32_t value) const
{
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->put_CustomVideoEncodingWidth(value));
}

template <typename D> uint32_t impl_IAppCaptureSettings<D>::CustomVideoEncodingWidth() const
{
    uint32_t value {};
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->get_CustomVideoEncodingWidth(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::HistoricalBufferLength(uint32_t value) const
{
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->put_HistoricalBufferLength(value));
}

template <typename D> uint32_t impl_IAppCaptureSettings<D>::HistoricalBufferLength() const
{
    uint32_t value {};
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->get_HistoricalBufferLength(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::HistoricalBufferLengthUnit(Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit value) const
{
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->put_HistoricalBufferLengthUnit(value));
}

template <typename D> Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit impl_IAppCaptureSettings<D>::HistoricalBufferLengthUnit() const
{
    Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit value {};
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->get_HistoricalBufferLengthUnit(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::IsHistoricalCaptureEnabled(bool value) const
{
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->put_IsHistoricalCaptureEnabled(value));
}

template <typename D> bool impl_IAppCaptureSettings<D>::IsHistoricalCaptureEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->get_IsHistoricalCaptureEnabled(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::IsHistoricalCaptureOnBatteryAllowed(bool value) const
{
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->put_IsHistoricalCaptureOnBatteryAllowed(value));
}

template <typename D> bool impl_IAppCaptureSettings<D>::IsHistoricalCaptureOnBatteryAllowed() const
{
    bool value {};
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->get_IsHistoricalCaptureOnBatteryAllowed(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::IsHistoricalCaptureOnWirelessDisplayAllowed(bool value) const
{
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->put_IsHistoricalCaptureOnWirelessDisplayAllowed(value));
}

template <typename D> bool impl_IAppCaptureSettings<D>::IsHistoricalCaptureOnWirelessDisplayAllowed() const
{
    bool value {};
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->get_IsHistoricalCaptureOnWirelessDisplayAllowed(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::MaximumRecordLength(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->put_MaximumRecordLength(get(value)));
}

template <typename D> Windows::Foundation::TimeSpan impl_IAppCaptureSettings<D>::MaximumRecordLength() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->get_MaximumRecordLength(put(value)));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::ScreenshotDestinationFolder(const Windows::Storage::StorageFolder & value) const
{
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->put_ScreenshotDestinationFolder(get(value)));
}

template <typename D> Windows::Storage::StorageFolder impl_IAppCaptureSettings<D>::ScreenshotDestinationFolder() const
{
    Windows::Storage::StorageFolder value { nullptr };
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->get_ScreenshotDestinationFolder(put(value)));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::VideoEncodingBitrateMode(Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode value) const
{
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->put_VideoEncodingBitrateMode(value));
}

template <typename D> Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode impl_IAppCaptureSettings<D>::VideoEncodingBitrateMode() const
{
    Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode value {};
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->get_VideoEncodingBitrateMode(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::VideoEncodingResolutionMode(Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode value) const
{
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->put_VideoEncodingResolutionMode(value));
}

template <typename D> Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode impl_IAppCaptureSettings<D>::VideoEncodingResolutionMode() const
{
    Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode value {};
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->get_VideoEncodingResolutionMode(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings<D>::IsAppCaptureEnabled(bool value) const
{
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->put_IsAppCaptureEnabled(value));
}

template <typename D> bool impl_IAppCaptureSettings<D>::IsAppCaptureEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->get_IsAppCaptureEnabled(&value));
    return value;
}

template <typename D> bool impl_IAppCaptureSettings<D>::IsCpuConstrained() const
{
    bool value {};
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->get_IsCpuConstrained(&value));
    return value;
}

template <typename D> bool impl_IAppCaptureSettings<D>::IsDisabledByPolicy() const
{
    bool value {};
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->get_IsDisabledByPolicy(&value));
    return value;
}

template <typename D> bool impl_IAppCaptureSettings<D>::IsMemoryConstrained() const
{
    bool value {};
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->get_IsMemoryConstrained(&value));
    return value;
}

template <typename D> bool impl_IAppCaptureSettings<D>::HasHardwareEncoder() const
{
    bool value {};
    check_hresult(static_cast<const IAppCaptureSettings &>(static_cast<const D &>(*this))->get_HasHardwareEncoder(&value));
    return value;
}

template <typename D> bool impl_IAppCaptureSettings2<D>::IsGpuConstrained() const
{
    bool value {};
    check_hresult(static_cast<const IAppCaptureSettings2 &>(static_cast<const D &>(*this))->get_IsGpuConstrained(&value));
    return value;
}

template <typename D> Windows::Media::Capture::AppCaptureAlternateShortcutKeys impl_IAppCaptureSettings2<D>::AlternateShortcutKeys() const
{
    Windows::Media::Capture::AppCaptureAlternateShortcutKeys value { nullptr };
    check_hresult(static_cast<const IAppCaptureSettings2 &>(static_cast<const D &>(*this))->get_AlternateShortcutKeys(put(value)));
    return value;
}

template <typename D> void impl_IAppCaptureSettings3<D>::IsMicrophoneCaptureEnabled(bool value) const
{
    check_hresult(static_cast<const IAppCaptureSettings3 &>(static_cast<const D &>(*this))->put_IsMicrophoneCaptureEnabled(value));
}

template <typename D> bool impl_IAppCaptureSettings3<D>::IsMicrophoneCaptureEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IAppCaptureSettings3 &>(static_cast<const D &>(*this))->get_IsMicrophoneCaptureEnabled(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings4<D>::IsMicrophoneCaptureEnabledByDefault(bool value) const
{
    check_hresult(static_cast<const IAppCaptureSettings4 &>(static_cast<const D &>(*this))->put_IsMicrophoneCaptureEnabledByDefault(value));
}

template <typename D> bool impl_IAppCaptureSettings4<D>::IsMicrophoneCaptureEnabledByDefault() const
{
    bool value {};
    check_hresult(static_cast<const IAppCaptureSettings4 &>(static_cast<const D &>(*this))->get_IsMicrophoneCaptureEnabledByDefault(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings4<D>::SystemAudioGain(double value) const
{
    check_hresult(static_cast<const IAppCaptureSettings4 &>(static_cast<const D &>(*this))->put_SystemAudioGain(value));
}

template <typename D> double impl_IAppCaptureSettings4<D>::SystemAudioGain() const
{
    double value {};
    check_hresult(static_cast<const IAppCaptureSettings4 &>(static_cast<const D &>(*this))->get_SystemAudioGain(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings4<D>::MicrophoneGain(double value) const
{
    check_hresult(static_cast<const IAppCaptureSettings4 &>(static_cast<const D &>(*this))->put_MicrophoneGain(value));
}

template <typename D> double impl_IAppCaptureSettings4<D>::MicrophoneGain() const
{
    double value {};
    check_hresult(static_cast<const IAppCaptureSettings4 &>(static_cast<const D &>(*this))->get_MicrophoneGain(&value));
    return value;
}

template <typename D> void impl_IAppCaptureSettings4<D>::VideoEncodingFrameRateMode(Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode value) const
{
    check_hresult(static_cast<const IAppCaptureSettings4 &>(static_cast<const D &>(*this))->put_VideoEncodingFrameRateMode(value));
}

template <typename D> Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode impl_IAppCaptureSettings4<D>::VideoEncodingFrameRateMode() const
{
    Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode value {};
    check_hresult(static_cast<const IAppCaptureSettings4 &>(static_cast<const D &>(*this))->get_VideoEncodingFrameRateMode(&value));
    return value;
}

template <typename D> void impl_ICameraOptionsUIStatics<D>::Show(const Windows::Media::Capture::MediaCapture & mediaCapture) const
{
    check_hresult(static_cast<const ICameraOptionsUIStatics &>(static_cast<const D &>(*this))->abi_Show(get(mediaCapture)));
}

template <typename D> bool impl_ISourceSuspensionChangedEventArgs<D>::IsAudioSuspended() const
{
    bool value {};
    check_hresult(static_cast<const ISourceSuspensionChangedEventArgs &>(static_cast<const D &>(*this))->get_IsAudioSuspended(&value));
    return value;
}

template <typename D> bool impl_ISourceSuspensionChangedEventArgs<D>::IsVideoSuspended() const
{
    bool value {};
    check_hresult(static_cast<const ISourceSuspensionChangedEventArgs &>(static_cast<const D &>(*this))->get_IsVideoSuspended(&value));
    return value;
}

template <typename D> Windows::Media::Core::IMediaSource impl_IScreenCapture<D>::AudioSource() const
{
    Windows::Media::Core::IMediaSource value;
    check_hresult(static_cast<const IScreenCapture &>(static_cast<const D &>(*this))->get_AudioSource(put(value)));
    return value;
}

template <typename D> Windows::Media::Core::IMediaSource impl_IScreenCapture<D>::VideoSource() const
{
    Windows::Media::Core::IMediaSource value;
    check_hresult(static_cast<const IScreenCapture &>(static_cast<const D &>(*this))->get_VideoSource(put(value)));
    return value;
}

template <typename D> bool impl_IScreenCapture<D>::IsAudioSuspended() const
{
    bool value {};
    check_hresult(static_cast<const IScreenCapture &>(static_cast<const D &>(*this))->get_IsAudioSuspended(&value));
    return value;
}

template <typename D> bool impl_IScreenCapture<D>::IsVideoSuspended() const
{
    bool value {};
    check_hresult(static_cast<const IScreenCapture &>(static_cast<const D &>(*this))->get_IsVideoSuspended(&value));
    return value;
}

template <typename D> event_token impl_IScreenCapture<D>::SourceSuspensionChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::ScreenCapture, Windows::Media::Capture::SourceSuspensionChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IScreenCapture &>(static_cast<const D &>(*this))->add_SourceSuspensionChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IScreenCapture> impl_IScreenCapture<D>::SourceSuspensionChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::ScreenCapture, Windows::Media::Capture::SourceSuspensionChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IScreenCapture>(this, &ABI::Windows::Media::Capture::IScreenCapture::remove_SourceSuspensionChanged, SourceSuspensionChanged(handler));
}

template <typename D> void impl_IScreenCapture<D>::SourceSuspensionChanged(event_token token) const
{
    check_hresult(static_cast<const IScreenCapture &>(static_cast<const D &>(*this))->remove_SourceSuspensionChanged(token));
}

template <typename D> Windows::Media::Capture::ScreenCapture impl_IScreenCaptureStatics<D>::GetForCurrentView() const
{
    Windows::Media::Capture::ScreenCapture value { nullptr };
    check_hresult(static_cast<const IScreenCaptureStatics &>(static_cast<const D &>(*this))->abi_GetForCurrentView(put(value)));
    return value;
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

inline MediaCapture::MediaCapture() :
    MediaCapture(activate_instance<MediaCapture>())
{}

inline bool MediaCapture::IsVideoProfileSupported(hstring_ref videoDeviceId)
{
    return get_activation_factory<MediaCapture, IMediaCaptureStatics>().IsVideoProfileSupported(videoDeviceId);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> MediaCapture::FindAllVideoProfiles(hstring_ref videoDeviceId)
{
    return get_activation_factory<MediaCapture, IMediaCaptureStatics>().FindAllVideoProfiles(videoDeviceId);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> MediaCapture::FindConcurrentProfiles(hstring_ref videoDeviceId)
{
    return get_activation_factory<MediaCapture, IMediaCaptureStatics>().FindConcurrentProfiles(videoDeviceId);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> MediaCapture::FindKnownVideoProfiles(hstring_ref videoDeviceId, Windows::Media::Capture::KnownVideoProfile name)
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
