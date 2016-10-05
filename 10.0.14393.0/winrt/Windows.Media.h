// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Graphics.Imaging.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Graphics.DirectX.Direct3D11.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Storage.3.h"
#include "internal/Windows.Media.3.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Media::IAudioBuffer> : produce_base<D, Windows::Media::IAudioBuffer>
{
    HRESULT __stdcall get_Capacity(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Capacity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Length(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Length());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Length(uint32_t value) noexcept override
    {
        try
        {
            this->shim().Length(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IAudioFrame> : produce_base<D, Windows::Media::IAudioFrame>
{
    HRESULT __stdcall abi_LockBuffer(Windows::Media::AudioBufferAccessMode mode, abi_arg_out<Windows::Media::IAudioBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LockBuffer(mode));
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
struct produce<D, Windows::Media::IAudioFrameFactory> : produce_base<D, Windows::Media::IAudioFrameFactory>
{
    HRESULT __stdcall abi_Create(uint32_t capacity, abi_arg_out<Windows::Media::IAudioFrame> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Create(capacity));
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
struct produce<D, Windows::Media::IAutoRepeatModeChangeRequestedEventArgs> : produce_base<D, Windows::Media::IAutoRepeatModeChangeRequestedEventArgs>
{
    HRESULT __stdcall get_RequestedAutoRepeatMode(Windows::Media::MediaPlaybackAutoRepeatMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RequestedAutoRepeatMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IImageDisplayProperties> : produce_base<D, Windows::Media::IImageDisplayProperties>
{
    HRESULT __stdcall get_Title(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Title(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Title(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Subtitle(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Subtitle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Subtitle(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Subtitle(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IMediaControl> : produce_base<D, Windows::Media::IMediaControl>
{
    HRESULT __stdcall add_SoundLevelChanged(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().SoundLevelChanged(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SoundLevelChanged(event_token cookie) noexcept override
    {
        try
        {
            this->shim().SoundLevelChanged(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PlayPressed(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().PlayPressed(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PlayPressed(event_token cookie) noexcept override
    {
        try
        {
            this->shim().PlayPressed(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PausePressed(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().PausePressed(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PausePressed(event_token cookie) noexcept override
    {
        try
        {
            this->shim().PausePressed(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StopPressed(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().StopPressed(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StopPressed(event_token cookie) noexcept override
    {
        try
        {
            this->shim().StopPressed(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PlayPauseTogglePressed(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().PlayPauseTogglePressed(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PlayPauseTogglePressed(event_token cookie) noexcept override
    {
        try
        {
            this->shim().PlayPauseTogglePressed(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RecordPressed(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().RecordPressed(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RecordPressed(event_token cookie) noexcept override
    {
        try
        {
            this->shim().RecordPressed(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_NextTrackPressed(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().NextTrackPressed(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_NextTrackPressed(event_token cookie) noexcept override
    {
        try
        {
            this->shim().NextTrackPressed(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PreviousTrackPressed(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().PreviousTrackPressed(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PreviousTrackPressed(event_token cookie) noexcept override
    {
        try
        {
            this->shim().PreviousTrackPressed(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_FastForwardPressed(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().FastForwardPressed(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_FastForwardPressed(event_token cookie) noexcept override
    {
        try
        {
            this->shim().FastForwardPressed(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RewindPressed(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().RewindPressed(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RewindPressed(event_token cookie) noexcept override
    {
        try
        {
            this->shim().RewindPressed(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ChannelUpPressed(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().ChannelUpPressed(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ChannelUpPressed(event_token cookie) noexcept override
    {
        try
        {
            this->shim().ChannelUpPressed(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ChannelDownPressed(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().ChannelDownPressed(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ChannelDownPressed(event_token cookie) noexcept override
    {
        try
        {
            this->shim().ChannelDownPressed(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SoundLevel(Windows::Media::SoundLevel * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SoundLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TrackName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().TrackName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrackName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TrackName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ArtistName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ArtistName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ArtistName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ArtistName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsPlaying(bool value) noexcept override
    {
        try
        {
            this->shim().IsPlaying(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPlaying(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsPlaying());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AlbumArt(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().AlbumArt(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlbumArt(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlbumArt());
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
struct produce<D, Windows::Media::IMediaExtension> : produce_base<D, Windows::Media::IMediaExtension>
{
    HRESULT __stdcall abi_SetProperties(abi_arg_in<Windows::Foundation::Collections::IPropertySet> configuration) noexcept override
    {
        try
        {
            this->shim().SetProperties(*reinterpret_cast<const Windows::Foundation::Collections::IPropertySet *>(&configuration));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IMediaExtensionManager> : produce_base<D, Windows::Media::IMediaExtensionManager>
{
    HRESULT __stdcall abi_RegisterSchemeHandler(abi_arg_in<hstring> activatableClassId, abi_arg_in<hstring> scheme) noexcept override
    {
        try
        {
            this->shim().RegisterSchemeHandler(*reinterpret_cast<const hstring *>(&activatableClassId), *reinterpret_cast<const hstring *>(&scheme));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RegisterSchemeHandlerWithSettings(abi_arg_in<hstring> activatableClassId, abi_arg_in<hstring> scheme, abi_arg_in<Windows::Foundation::Collections::IPropertySet> configuration) noexcept override
    {
        try
        {
            this->shim().RegisterSchemeHandler(*reinterpret_cast<const hstring *>(&activatableClassId), *reinterpret_cast<const hstring *>(&scheme), *reinterpret_cast<const Windows::Foundation::Collections::IPropertySet *>(&configuration));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RegisterByteStreamHandler(abi_arg_in<hstring> activatableClassId, abi_arg_in<hstring> fileExtension, abi_arg_in<hstring> mimeType) noexcept override
    {
        try
        {
            this->shim().RegisterByteStreamHandler(*reinterpret_cast<const hstring *>(&activatableClassId), *reinterpret_cast<const hstring *>(&fileExtension), *reinterpret_cast<const hstring *>(&mimeType));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RegisterByteStreamHandlerWithSettings(abi_arg_in<hstring> activatableClassId, abi_arg_in<hstring> fileExtension, abi_arg_in<hstring> mimeType, abi_arg_in<Windows::Foundation::Collections::IPropertySet> configuration) noexcept override
    {
        try
        {
            this->shim().RegisterByteStreamHandler(*reinterpret_cast<const hstring *>(&activatableClassId), *reinterpret_cast<const hstring *>(&fileExtension), *reinterpret_cast<const hstring *>(&mimeType), *reinterpret_cast<const Windows::Foundation::Collections::IPropertySet *>(&configuration));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RegisterAudioDecoder(abi_arg_in<hstring> activatableClassId, GUID inputSubtype, GUID outputSubtype) noexcept override
    {
        try
        {
            this->shim().RegisterAudioDecoder(*reinterpret_cast<const hstring *>(&activatableClassId), inputSubtype, outputSubtype);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RegisterAudioDecoderWithSettings(abi_arg_in<hstring> activatableClassId, GUID inputSubtype, GUID outputSubtype, abi_arg_in<Windows::Foundation::Collections::IPropertySet> configuration) noexcept override
    {
        try
        {
            this->shim().RegisterAudioDecoder(*reinterpret_cast<const hstring *>(&activatableClassId), inputSubtype, outputSubtype, *reinterpret_cast<const Windows::Foundation::Collections::IPropertySet *>(&configuration));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RegisterAudioEncoder(abi_arg_in<hstring> activatableClassId, GUID inputSubtype, GUID outputSubtype) noexcept override
    {
        try
        {
            this->shim().RegisterAudioEncoder(*reinterpret_cast<const hstring *>(&activatableClassId), inputSubtype, outputSubtype);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RegisterAudioEncoderWithSettings(abi_arg_in<hstring> activatableClassId, GUID inputSubtype, GUID outputSubtype, abi_arg_in<Windows::Foundation::Collections::IPropertySet> configuration) noexcept override
    {
        try
        {
            this->shim().RegisterAudioEncoder(*reinterpret_cast<const hstring *>(&activatableClassId), inputSubtype, outputSubtype, *reinterpret_cast<const Windows::Foundation::Collections::IPropertySet *>(&configuration));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RegisterVideoDecoder(abi_arg_in<hstring> activatableClassId, GUID inputSubtype, GUID outputSubtype) noexcept override
    {
        try
        {
            this->shim().RegisterVideoDecoder(*reinterpret_cast<const hstring *>(&activatableClassId), inputSubtype, outputSubtype);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RegisterVideoDecoderWithSettings(abi_arg_in<hstring> activatableClassId, GUID inputSubtype, GUID outputSubtype, abi_arg_in<Windows::Foundation::Collections::IPropertySet> configuration) noexcept override
    {
        try
        {
            this->shim().RegisterVideoDecoder(*reinterpret_cast<const hstring *>(&activatableClassId), inputSubtype, outputSubtype, *reinterpret_cast<const Windows::Foundation::Collections::IPropertySet *>(&configuration));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RegisterVideoEncoder(abi_arg_in<hstring> activatableClassId, GUID inputSubtype, GUID outputSubtype) noexcept override
    {
        try
        {
            this->shim().RegisterVideoEncoder(*reinterpret_cast<const hstring *>(&activatableClassId), inputSubtype, outputSubtype);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RegisterVideoEncoderWithSettings(abi_arg_in<hstring> activatableClassId, GUID inputSubtype, GUID outputSubtype, abi_arg_in<Windows::Foundation::Collections::IPropertySet> configuration) noexcept override
    {
        try
        {
            this->shim().RegisterVideoEncoder(*reinterpret_cast<const hstring *>(&activatableClassId), inputSubtype, outputSubtype, *reinterpret_cast<const Windows::Foundation::Collections::IPropertySet *>(&configuration));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IMediaFrame> : produce_base<D, Windows::Media::IMediaFrame>
{
    HRESULT __stdcall get_Type(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsReadOnly(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsReadOnly());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RelativeTime(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            this->shim().RelativeTime(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RelativeTime(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RelativeTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SystemRelativeTime(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            this->shim().SystemRelativeTime(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemRelativeTime(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SystemRelativeTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Duration(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            this->shim().Duration(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsDiscontinuous(bool value) noexcept override
    {
        try
        {
            this->shim().IsDiscontinuous(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDiscontinuous(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsDiscontinuous());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedProperties(abi_arg_out<Windows::Foundation::Collections::IPropertySet> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExtendedProperties());
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
struct produce<D, Windows::Media::IMediaMarker> : produce_base<D, Windows::Media::IMediaMarker>
{
    HRESULT __stdcall get_Time(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Time());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaMarkerType(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediaMarkerType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Text(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Text());
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
struct produce<D, Windows::Media::IMediaMarkerTypesStatics> : produce_base<D, Windows::Media::IMediaMarkerTypesStatics>
{
    HRESULT __stdcall get_Bookmark(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Bookmark());
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
struct produce<D, Windows::Media::IMediaMarkers> : produce_base<D, Windows::Media::IMediaMarkers>
{
    HRESULT __stdcall get_Markers(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::IMediaMarker>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Markers());
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
struct produce<D, Windows::Media::IMediaProcessingTriggerDetails> : produce_base<D, Windows::Media::IMediaProcessingTriggerDetails>
{
    HRESULT __stdcall get_Arguments(abi_arg_out<Windows::Foundation::Collections::IPropertySet> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Arguments());
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
struct produce<D, Windows::Media::IMediaTimelineController> : produce_base<D, Windows::Media::IMediaTimelineController>
{
    HRESULT __stdcall abi_Start() noexcept override
    {
        try
        {
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Resume() noexcept override
    {
        try
        {
            this->shim().Resume();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Pause() noexcept override
    {
        try
        {
            this->shim().Pause();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Position(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            this->shim().Position(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClockRate(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ClockRate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClockRate(double value) noexcept override
    {
        try
        {
            this->shim().ClockRate(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_State(Windows::Media::MediaTimelineControllerState * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PositionChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::IInspectable>> positionChangedEventHandler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(this->shim().PositionChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::IInspectable> *>(&positionChangedEventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PositionChanged(event_token eventCookie) noexcept override
    {
        try
        {
            this->shim().PositionChanged(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StateChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::IInspectable>> stateChangedEventHandler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(this->shim().StateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::IInspectable> *>(&stateChangedEventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StateChanged(event_token eventCookie) noexcept override
    {
        try
        {
            this->shim().StateChanged(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IMusicDisplayProperties> : produce_base<D, Windows::Media::IMusicDisplayProperties>
{
    HRESULT __stdcall get_Title(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Title(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Title(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlbumArtist(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlbumArtist());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AlbumArtist(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().AlbumArtist(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Artist(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Artist());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Artist(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Artist(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IMusicDisplayProperties2> : produce_base<D, Windows::Media::IMusicDisplayProperties2>
{
    HRESULT __stdcall get_AlbumTitle(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlbumTitle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AlbumTitle(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().AlbumTitle(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrackNumber(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TrackNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TrackNumber(uint32_t value) noexcept override
    {
        try
        {
            this->shim().TrackNumber(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Genres(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Genres());
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
struct produce<D, Windows::Media::IMusicDisplayProperties3> : produce_base<D, Windows::Media::IMusicDisplayProperties3>
{
    HRESULT __stdcall get_AlbumTrackCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlbumTrackCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AlbumTrackCount(uint32_t value) noexcept override
    {
        try
        {
            this->shim().AlbumTrackCount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IPlaybackPositionChangeRequestedEventArgs> : produce_base<D, Windows::Media::IPlaybackPositionChangeRequestedEventArgs>
{
    HRESULT __stdcall get_RequestedPlaybackPosition(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RequestedPlaybackPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IPlaybackRateChangeRequestedEventArgs> : produce_base<D, Windows::Media::IPlaybackRateChangeRequestedEventArgs>
{
    HRESULT __stdcall get_RequestedPlaybackRate(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RequestedPlaybackRate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IShuffleEnabledChangeRequestedEventArgs> : produce_base<D, Windows::Media::IShuffleEnabledChangeRequestedEventArgs>
{
    HRESULT __stdcall get_RequestedShuffleEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RequestedShuffleEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::ISystemMediaTransportControls> : produce_base<D, Windows::Media::ISystemMediaTransportControls>
{
    HRESULT __stdcall get_PlaybackStatus(Windows::Media::MediaPlaybackStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PlaybackStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PlaybackStatus(Windows::Media::MediaPlaybackStatus value) noexcept override
    {
        try
        {
            this->shim().PlaybackStatus(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayUpdater(abi_arg_out<Windows::Media::ISystemMediaTransportControlsDisplayUpdater> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayUpdater());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SoundLevel(Windows::Media::SoundLevel * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SoundLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPlayEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsPlayEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsPlayEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsPlayEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStopEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsStopEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsStopEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsStopEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPauseEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsPauseEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsPauseEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsPauseEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsRecordEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsRecordEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsRecordEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsRecordEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsFastForwardEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsFastForwardEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsFastForwardEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsFastForwardEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsRewindEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsRewindEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsRewindEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsRewindEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPreviousEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsPreviousEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsPreviousEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsPreviousEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsNextEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsNextEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsNextEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsNextEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsChannelUpEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsChannelUpEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsChannelUpEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsChannelUpEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsChannelDownEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsChannelDownEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsChannelDownEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsChannelDownEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ButtonPressed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ButtonPressed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ButtonPressed(event_token token) noexcept override
    {
        try
        {
            this->shim().ButtonPressed(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PropertyChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PropertyChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PropertyChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().PropertyChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::ISystemMediaTransportControls2> : produce_base<D, Windows::Media::ISystemMediaTransportControls2>
{
    HRESULT __stdcall get_AutoRepeatMode(Windows::Media::MediaPlaybackAutoRepeatMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AutoRepeatMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AutoRepeatMode(Windows::Media::MediaPlaybackAutoRepeatMode value) noexcept override
    {
        try
        {
            this->shim().AutoRepeatMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShuffleEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ShuffleEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ShuffleEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().ShuffleEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PlaybackRate(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PlaybackRate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PlaybackRate(double value) noexcept override
    {
        try
        {
            this->shim().PlaybackRate(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UpdateTimelineProperties(abi_arg_in<Windows::Media::ISystemMediaTransportControlsTimelineProperties> timelineProperties) noexcept override
    {
        try
        {
            this->shim().UpdateTimelineProperties(*reinterpret_cast<const Windows::Media::SystemMediaTransportControlsTimelineProperties *>(&timelineProperties));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PlaybackPositionChangeRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::PlaybackPositionChangeRequestedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PlaybackPositionChangeRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::PlaybackPositionChangeRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PlaybackPositionChangeRequested(event_token token) noexcept override
    {
        try
        {
            this->shim().PlaybackPositionChangeRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PlaybackRateChangeRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::PlaybackRateChangeRequestedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PlaybackRateChangeRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::PlaybackRateChangeRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PlaybackRateChangeRequested(event_token token) noexcept override
    {
        try
        {
            this->shim().PlaybackRateChangeRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ShuffleEnabledChangeRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::ShuffleEnabledChangeRequestedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ShuffleEnabledChangeRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::ShuffleEnabledChangeRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ShuffleEnabledChangeRequested(event_token token) noexcept override
    {
        try
        {
            this->shim().ShuffleEnabledChangeRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AutoRepeatModeChangeRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::AutoRepeatModeChangeRequestedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().AutoRepeatModeChangeRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::AutoRepeatModeChangeRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AutoRepeatModeChangeRequested(event_token token) noexcept override
    {
        try
        {
            this->shim().AutoRepeatModeChangeRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs> : produce_base<D, Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs>
{
    HRESULT __stdcall get_Button(Windows::Media::SystemMediaTransportControlsButton * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Button());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::ISystemMediaTransportControlsDisplayUpdater> : produce_base<D, Windows::Media::ISystemMediaTransportControlsDisplayUpdater>
{
    HRESULT __stdcall get_Type(Windows::Media::MediaPlaybackType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Type(Windows::Media::MediaPlaybackType value) noexcept override
    {
        try
        {
            this->shim().Type(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppMediaId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppMediaId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AppMediaId(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().AppMediaId(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnail(abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
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

    HRESULT __stdcall put_Thumbnail(abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            this->shim().Thumbnail(*reinterpret_cast<const Windows::Storage::Streams::RandomAccessStreamReference *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MusicProperties(abi_arg_out<Windows::Media::IMusicDisplayProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MusicProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoProperties(abi_arg_out<Windows::Media::IVideoDisplayProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ImageProperties(abi_arg_out<Windows::Media::IImageDisplayProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ImageProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CopyFromFileAsync(Windows::Media::MediaPlaybackType type, abi_arg_in<Windows::Storage::IStorageFile> source, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CopyFromFileAsync(type, *reinterpret_cast<const Windows::Storage::StorageFile *>(&source)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ClearAll() noexcept override
    {
        try
        {
            this->shim().ClearAll();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Update() noexcept override
    {
        try
        {
            this->shim().Update();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs> : produce_base<D, Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs>
{
    HRESULT __stdcall get_Property(Windows::Media::SystemMediaTransportControlsProperty * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Property());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::ISystemMediaTransportControlsStatics> : produce_base<D, Windows::Media::ISystemMediaTransportControlsStatics>
{
    HRESULT __stdcall abi_GetForCurrentView(abi_arg_out<Windows::Media::ISystemMediaTransportControls> mediaControl) noexcept override
    {
        try
        {
            *mediaControl = detach(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *mediaControl = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::ISystemMediaTransportControlsTimelineProperties> : produce_base<D, Windows::Media::ISystemMediaTransportControlsTimelineProperties>
{
    HRESULT __stdcall get_StartTime(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StartTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StartTime(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            this->shim().StartTime(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndTime(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EndTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EndTime(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            this->shim().EndTime(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinSeekTime(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MinSeekTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MinSeekTime(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            this->shim().MinSeekTime(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxSeekTime(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxSeekTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxSeekTime(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            this->shim().MaxSeekTime(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Position(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            this->shim().Position(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IVideoDisplayProperties> : produce_base<D, Windows::Media::IVideoDisplayProperties>
{
    HRESULT __stdcall get_Title(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Title(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Title(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Subtitle(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Subtitle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Subtitle(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Subtitle(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IVideoDisplayProperties2> : produce_base<D, Windows::Media::IVideoDisplayProperties2>
{
    HRESULT __stdcall get_Genres(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Genres());
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
struct produce<D, Windows::Media::IVideoEffectsStatics> : produce_base<D, Windows::Media::IVideoEffectsStatics>
{
    HRESULT __stdcall get_VideoStabilization(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoStabilization());
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
struct produce<D, Windows::Media::IVideoFrame> : produce_base<D, Windows::Media::IVideoFrame>
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

    HRESULT __stdcall abi_CopyToAsync(abi_arg_in<Windows::Media::IVideoFrame> frame, abi_arg_out<Windows::Foundation::IAsyncAction> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CopyToAsync(*reinterpret_cast<const Windows::Media::VideoFrame *>(&frame)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Direct3DSurface(abi_arg_out<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Direct3DSurface());
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
struct produce<D, Windows::Media::IVideoFrameFactory> : produce_base<D, Windows::Media::IVideoFrameFactory>
{
    HRESULT __stdcall abi_Create(Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height, abi_arg_out<Windows::Media::IVideoFrame> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Create(format, width, height));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithAlpha(Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode alpha, abi_arg_out<Windows::Media::IVideoFrame> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateWithAlpha(format, width, height, alpha));
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

namespace Windows::Media {

template <typename D> Windows::Foundation::Collections::ValueSet impl_IMediaProcessingTriggerDetails<D>::Arguments() const
{
    Windows::Foundation::Collections::ValueSet value { nullptr };
    check_hresult(static_cast<const IMediaProcessingTriggerDetails &>(static_cast<const D &>(*this))->get_Arguments(put(value)));
    return value;
}

template <typename D> Windows::Media::VideoFrame impl_IVideoFrameFactory<D>::Create(Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height) const
{
    Windows::Media::VideoFrame value { nullptr };
    check_hresult(static_cast<const IVideoFrameFactory &>(static_cast<const D &>(*this))->abi_Create(format, width, height, put(value)));
    return value;
}

template <typename D> Windows::Media::VideoFrame impl_IVideoFrameFactory<D>::CreateWithAlpha(Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode alpha) const
{
    Windows::Media::VideoFrame value { nullptr };
    check_hresult(static_cast<const IVideoFrameFactory &>(static_cast<const D &>(*this))->abi_CreateWithAlpha(format, width, height, alpha, put(value)));
    return value;
}

template <typename D> Windows::Media::AudioFrame impl_IAudioFrameFactory<D>::Create(uint32_t capacity) const
{
    Windows::Media::AudioFrame value { nullptr };
    check_hresult(static_cast<const IAudioFrameFactory &>(static_cast<const D &>(*this))->abi_Create(capacity, put(value)));
    return value;
}

template <typename D> hstring impl_IMediaFrame<D>::Type() const
{
    hstring value;
    check_hresult(static_cast<const IMediaFrame &>(static_cast<const D &>(*this))->get_Type(put(value)));
    return value;
}

template <typename D> bool impl_IMediaFrame<D>::IsReadOnly() const
{
    bool value {};
    check_hresult(static_cast<const IMediaFrame &>(static_cast<const D &>(*this))->get_IsReadOnly(&value));
    return value;
}

template <typename D> void impl_IMediaFrame<D>::RelativeTime(const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> & value) const
{
    check_hresult(static_cast<const IMediaFrame &>(static_cast<const D &>(*this))->put_RelativeTime(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> impl_IMediaFrame<D>::RelativeTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value;
    check_hresult(static_cast<const IMediaFrame &>(static_cast<const D &>(*this))->get_RelativeTime(put(value)));
    return value;
}

template <typename D> void impl_IMediaFrame<D>::SystemRelativeTime(const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> & value) const
{
    check_hresult(static_cast<const IMediaFrame &>(static_cast<const D &>(*this))->put_SystemRelativeTime(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> impl_IMediaFrame<D>::SystemRelativeTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value;
    check_hresult(static_cast<const IMediaFrame &>(static_cast<const D &>(*this))->get_SystemRelativeTime(put(value)));
    return value;
}

template <typename D> void impl_IMediaFrame<D>::Duration(const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> & value) const
{
    check_hresult(static_cast<const IMediaFrame &>(static_cast<const D &>(*this))->put_Duration(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> impl_IMediaFrame<D>::Duration() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value;
    check_hresult(static_cast<const IMediaFrame &>(static_cast<const D &>(*this))->get_Duration(put(value)));
    return value;
}

template <typename D> void impl_IMediaFrame<D>::IsDiscontinuous(bool value) const
{
    check_hresult(static_cast<const IMediaFrame &>(static_cast<const D &>(*this))->put_IsDiscontinuous(value));
}

template <typename D> bool impl_IMediaFrame<D>::IsDiscontinuous() const
{
    bool value {};
    check_hresult(static_cast<const IMediaFrame &>(static_cast<const D &>(*this))->get_IsDiscontinuous(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IPropertySet impl_IMediaFrame<D>::ExtendedProperties() const
{
    Windows::Foundation::Collections::IPropertySet value;
    check_hresult(static_cast<const IMediaFrame &>(static_cast<const D &>(*this))->get_ExtendedProperties(put(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::SoftwareBitmap impl_IVideoFrame<D>::SoftwareBitmap() const
{
    Windows::Graphics::Imaging::SoftwareBitmap value { nullptr };
    check_hresult(static_cast<const IVideoFrame &>(static_cast<const D &>(*this))->get_SoftwareBitmap(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IVideoFrame<D>::CopyToAsync(const Windows::Media::VideoFrame & frame) const
{
    Windows::Foundation::IAsyncAction value;
    check_hresult(static_cast<const IVideoFrame &>(static_cast<const D &>(*this))->abi_CopyToAsync(get(frame), put(value)));
    return value;
}

template <typename D> Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface impl_IVideoFrame<D>::Direct3DSurface() const
{
    Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface value;
    check_hresult(static_cast<const IVideoFrame &>(static_cast<const D &>(*this))->get_Direct3DSurface(put(value)));
    return value;
}

template <typename D> Windows::Media::AudioBuffer impl_IAudioFrame<D>::LockBuffer(Windows::Media::AudioBufferAccessMode mode) const
{
    Windows::Media::AudioBuffer value { nullptr };
    check_hresult(static_cast<const IAudioFrame &>(static_cast<const D &>(*this))->abi_LockBuffer(mode, put(value)));
    return value;
}

template <typename D> uint32_t impl_IAudioBuffer<D>::Capacity() const
{
    uint32_t value {};
    check_hresult(static_cast<const IAudioBuffer &>(static_cast<const D &>(*this))->get_Capacity(&value));
    return value;
}

template <typename D> uint32_t impl_IAudioBuffer<D>::Length() const
{
    uint32_t value {};
    check_hresult(static_cast<const IAudioBuffer &>(static_cast<const D &>(*this))->get_Length(&value));
    return value;
}

template <typename D> void impl_IAudioBuffer<D>::Length(uint32_t value) const
{
    check_hresult(static_cast<const IAudioBuffer &>(static_cast<const D &>(*this))->put_Length(value));
}

template <typename D> Windows::Foundation::TimeSpan impl_IMediaMarker<D>::Time() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IMediaMarker &>(static_cast<const D &>(*this))->get_Time(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaMarker<D>::MediaMarkerType() const
{
    hstring value;
    check_hresult(static_cast<const IMediaMarker &>(static_cast<const D &>(*this))->get_MediaMarkerType(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaMarker<D>::Text() const
{
    hstring value;
    check_hresult(static_cast<const IMediaMarker &>(static_cast<const D &>(*this))->get_Text(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::IMediaMarker> impl_IMediaMarkers<D>::Markers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::IMediaMarker> value;
    check_hresult(static_cast<const IMediaMarkers &>(static_cast<const D &>(*this))->get_Markers(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaMarkerTypesStatics<D>::Bookmark() const
{
    hstring value;
    check_hresult(static_cast<const IMediaMarkerTypesStatics &>(static_cast<const D &>(*this))->get_Bookmark(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_ISystemMediaTransportControlsTimelineProperties<D>::StartTime() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const ISystemMediaTransportControlsTimelineProperties &>(static_cast<const D &>(*this))->get_StartTime(put(value)));
    return value;
}

template <typename D> void impl_ISystemMediaTransportControlsTimelineProperties<D>::StartTime(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const ISystemMediaTransportControlsTimelineProperties &>(static_cast<const D &>(*this))->put_StartTime(get(value)));
}

template <typename D> Windows::Foundation::TimeSpan impl_ISystemMediaTransportControlsTimelineProperties<D>::EndTime() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const ISystemMediaTransportControlsTimelineProperties &>(static_cast<const D &>(*this))->get_EndTime(put(value)));
    return value;
}

template <typename D> void impl_ISystemMediaTransportControlsTimelineProperties<D>::EndTime(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const ISystemMediaTransportControlsTimelineProperties &>(static_cast<const D &>(*this))->put_EndTime(get(value)));
}

template <typename D> Windows::Foundation::TimeSpan impl_ISystemMediaTransportControlsTimelineProperties<D>::MinSeekTime() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const ISystemMediaTransportControlsTimelineProperties &>(static_cast<const D &>(*this))->get_MinSeekTime(put(value)));
    return value;
}

template <typename D> void impl_ISystemMediaTransportControlsTimelineProperties<D>::MinSeekTime(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const ISystemMediaTransportControlsTimelineProperties &>(static_cast<const D &>(*this))->put_MinSeekTime(get(value)));
}

template <typename D> Windows::Foundation::TimeSpan impl_ISystemMediaTransportControlsTimelineProperties<D>::MaxSeekTime() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const ISystemMediaTransportControlsTimelineProperties &>(static_cast<const D &>(*this))->get_MaxSeekTime(put(value)));
    return value;
}

template <typename D> void impl_ISystemMediaTransportControlsTimelineProperties<D>::MaxSeekTime(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const ISystemMediaTransportControlsTimelineProperties &>(static_cast<const D &>(*this))->put_MaxSeekTime(get(value)));
}

template <typename D> Windows::Foundation::TimeSpan impl_ISystemMediaTransportControlsTimelineProperties<D>::Position() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const ISystemMediaTransportControlsTimelineProperties &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> void impl_ISystemMediaTransportControlsTimelineProperties<D>::Position(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const ISystemMediaTransportControlsTimelineProperties &>(static_cast<const D &>(*this))->put_Position(get(value)));
}

template <typename D> hstring impl_IMusicDisplayProperties<D>::Title() const
{
    hstring value;
    check_hresult(static_cast<const IMusicDisplayProperties &>(static_cast<const D &>(*this))->get_Title(put(value)));
    return value;
}

template <typename D> void impl_IMusicDisplayProperties<D>::Title(hstring_ref value) const
{
    check_hresult(static_cast<const IMusicDisplayProperties &>(static_cast<const D &>(*this))->put_Title(get(value)));
}

template <typename D> hstring impl_IMusicDisplayProperties<D>::AlbumArtist() const
{
    hstring value;
    check_hresult(static_cast<const IMusicDisplayProperties &>(static_cast<const D &>(*this))->get_AlbumArtist(put(value)));
    return value;
}

template <typename D> void impl_IMusicDisplayProperties<D>::AlbumArtist(hstring_ref value) const
{
    check_hresult(static_cast<const IMusicDisplayProperties &>(static_cast<const D &>(*this))->put_AlbumArtist(get(value)));
}

template <typename D> hstring impl_IMusicDisplayProperties<D>::Artist() const
{
    hstring value;
    check_hresult(static_cast<const IMusicDisplayProperties &>(static_cast<const D &>(*this))->get_Artist(put(value)));
    return value;
}

template <typename D> void impl_IMusicDisplayProperties<D>::Artist(hstring_ref value) const
{
    check_hresult(static_cast<const IMusicDisplayProperties &>(static_cast<const D &>(*this))->put_Artist(get(value)));
}

template <typename D> hstring impl_IMusicDisplayProperties2<D>::AlbumTitle() const
{
    hstring value;
    check_hresult(static_cast<const IMusicDisplayProperties2 &>(static_cast<const D &>(*this))->get_AlbumTitle(put(value)));
    return value;
}

template <typename D> void impl_IMusicDisplayProperties2<D>::AlbumTitle(hstring_ref value) const
{
    check_hresult(static_cast<const IMusicDisplayProperties2 &>(static_cast<const D &>(*this))->put_AlbumTitle(get(value)));
}

template <typename D> uint32_t impl_IMusicDisplayProperties2<D>::TrackNumber() const
{
    uint32_t value {};
    check_hresult(static_cast<const IMusicDisplayProperties2 &>(static_cast<const D &>(*this))->get_TrackNumber(&value));
    return value;
}

template <typename D> void impl_IMusicDisplayProperties2<D>::TrackNumber(uint32_t value) const
{
    check_hresult(static_cast<const IMusicDisplayProperties2 &>(static_cast<const D &>(*this))->put_TrackNumber(value));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IMusicDisplayProperties2<D>::Genres() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IMusicDisplayProperties2 &>(static_cast<const D &>(*this))->get_Genres(put(value)));
    return value;
}

template <typename D> uint32_t impl_IMusicDisplayProperties3<D>::AlbumTrackCount() const
{
    uint32_t value {};
    check_hresult(static_cast<const IMusicDisplayProperties3 &>(static_cast<const D &>(*this))->get_AlbumTrackCount(&value));
    return value;
}

template <typename D> void impl_IMusicDisplayProperties3<D>::AlbumTrackCount(uint32_t value) const
{
    check_hresult(static_cast<const IMusicDisplayProperties3 &>(static_cast<const D &>(*this))->put_AlbumTrackCount(value));
}

template <typename D> hstring impl_IVideoDisplayProperties<D>::Title() const
{
    hstring value;
    check_hresult(static_cast<const IVideoDisplayProperties &>(static_cast<const D &>(*this))->get_Title(put(value)));
    return value;
}

template <typename D> void impl_IVideoDisplayProperties<D>::Title(hstring_ref value) const
{
    check_hresult(static_cast<const IVideoDisplayProperties &>(static_cast<const D &>(*this))->put_Title(get(value)));
}

template <typename D> hstring impl_IVideoDisplayProperties<D>::Subtitle() const
{
    hstring value;
    check_hresult(static_cast<const IVideoDisplayProperties &>(static_cast<const D &>(*this))->get_Subtitle(put(value)));
    return value;
}

template <typename D> void impl_IVideoDisplayProperties<D>::Subtitle(hstring_ref value) const
{
    check_hresult(static_cast<const IVideoDisplayProperties &>(static_cast<const D &>(*this))->put_Subtitle(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IVideoDisplayProperties2<D>::Genres() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IVideoDisplayProperties2 &>(static_cast<const D &>(*this))->get_Genres(put(value)));
    return value;
}

template <typename D> hstring impl_IImageDisplayProperties<D>::Title() const
{
    hstring value;
    check_hresult(static_cast<const IImageDisplayProperties &>(static_cast<const D &>(*this))->get_Title(put(value)));
    return value;
}

template <typename D> void impl_IImageDisplayProperties<D>::Title(hstring_ref value) const
{
    check_hresult(static_cast<const IImageDisplayProperties &>(static_cast<const D &>(*this))->put_Title(get(value)));
}

template <typename D> hstring impl_IImageDisplayProperties<D>::Subtitle() const
{
    hstring value;
    check_hresult(static_cast<const IImageDisplayProperties &>(static_cast<const D &>(*this))->get_Subtitle(put(value)));
    return value;
}

template <typename D> void impl_IImageDisplayProperties<D>::Subtitle(hstring_ref value) const
{
    check_hresult(static_cast<const IImageDisplayProperties &>(static_cast<const D &>(*this))->put_Subtitle(get(value)));
}

template <typename D> Windows::Media::MediaPlaybackType impl_ISystemMediaTransportControlsDisplayUpdater<D>::Type() const
{
    Windows::Media::MediaPlaybackType value {};
    check_hresult(static_cast<const ISystemMediaTransportControlsDisplayUpdater &>(static_cast<const D &>(*this))->get_Type(&value));
    return value;
}

template <typename D> void impl_ISystemMediaTransportControlsDisplayUpdater<D>::Type(Windows::Media::MediaPlaybackType value) const
{
    check_hresult(static_cast<const ISystemMediaTransportControlsDisplayUpdater &>(static_cast<const D &>(*this))->put_Type(value));
}

template <typename D> hstring impl_ISystemMediaTransportControlsDisplayUpdater<D>::AppMediaId() const
{
    hstring value;
    check_hresult(static_cast<const ISystemMediaTransportControlsDisplayUpdater &>(static_cast<const D &>(*this))->get_AppMediaId(put(value)));
    return value;
}

template <typename D> void impl_ISystemMediaTransportControlsDisplayUpdater<D>::AppMediaId(hstring_ref value) const
{
    check_hresult(static_cast<const ISystemMediaTransportControlsDisplayUpdater &>(static_cast<const D &>(*this))->put_AppMediaId(get(value)));
}

template <typename D> Windows::Storage::Streams::RandomAccessStreamReference impl_ISystemMediaTransportControlsDisplayUpdater<D>::Thumbnail() const
{
    Windows::Storage::Streams::RandomAccessStreamReference value { nullptr };
    check_hresult(static_cast<const ISystemMediaTransportControlsDisplayUpdater &>(static_cast<const D &>(*this))->get_Thumbnail(put(value)));
    return value;
}

template <typename D> void impl_ISystemMediaTransportControlsDisplayUpdater<D>::Thumbnail(const Windows::Storage::Streams::RandomAccessStreamReference & value) const
{
    check_hresult(static_cast<const ISystemMediaTransportControlsDisplayUpdater &>(static_cast<const D &>(*this))->put_Thumbnail(get(value)));
}

template <typename D> Windows::Media::MusicDisplayProperties impl_ISystemMediaTransportControlsDisplayUpdater<D>::MusicProperties() const
{
    Windows::Media::MusicDisplayProperties value { nullptr };
    check_hresult(static_cast<const ISystemMediaTransportControlsDisplayUpdater &>(static_cast<const D &>(*this))->get_MusicProperties(put(value)));
    return value;
}

template <typename D> Windows::Media::VideoDisplayProperties impl_ISystemMediaTransportControlsDisplayUpdater<D>::VideoProperties() const
{
    Windows::Media::VideoDisplayProperties value { nullptr };
    check_hresult(static_cast<const ISystemMediaTransportControlsDisplayUpdater &>(static_cast<const D &>(*this))->get_VideoProperties(put(value)));
    return value;
}

template <typename D> Windows::Media::ImageDisplayProperties impl_ISystemMediaTransportControlsDisplayUpdater<D>::ImageProperties() const
{
    Windows::Media::ImageDisplayProperties value { nullptr };
    check_hresult(static_cast<const ISystemMediaTransportControlsDisplayUpdater &>(static_cast<const D &>(*this))->get_ImageProperties(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_ISystemMediaTransportControlsDisplayUpdater<D>::CopyFromFileAsync(Windows::Media::MediaPlaybackType type, const Windows::Storage::StorageFile & source) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const ISystemMediaTransportControlsDisplayUpdater &>(static_cast<const D &>(*this))->abi_CopyFromFileAsync(type, get(source), put(operation)));
    return operation;
}

template <typename D> void impl_ISystemMediaTransportControlsDisplayUpdater<D>::ClearAll() const
{
    check_hresult(static_cast<const ISystemMediaTransportControlsDisplayUpdater &>(static_cast<const D &>(*this))->abi_ClearAll());
}

template <typename D> void impl_ISystemMediaTransportControlsDisplayUpdater<D>::Update() const
{
    check_hresult(static_cast<const ISystemMediaTransportControlsDisplayUpdater &>(static_cast<const D &>(*this))->abi_Update());
}

template <typename D> Windows::Media::SystemMediaTransportControlsButton impl_ISystemMediaTransportControlsButtonPressedEventArgs<D>::Button() const
{
    Windows::Media::SystemMediaTransportControlsButton value {};
    check_hresult(static_cast<const ISystemMediaTransportControlsButtonPressedEventArgs &>(static_cast<const D &>(*this))->get_Button(&value));
    return value;
}

template <typename D> Windows::Media::SystemMediaTransportControlsProperty impl_ISystemMediaTransportControlsPropertyChangedEventArgs<D>::Property() const
{
    Windows::Media::SystemMediaTransportControlsProperty value {};
    check_hresult(static_cast<const ISystemMediaTransportControlsPropertyChangedEventArgs &>(static_cast<const D &>(*this))->get_Property(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IPlaybackPositionChangeRequestedEventArgs<D>::RequestedPlaybackPosition() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IPlaybackPositionChangeRequestedEventArgs &>(static_cast<const D &>(*this))->get_RequestedPlaybackPosition(put(value)));
    return value;
}

template <typename D> double impl_IPlaybackRateChangeRequestedEventArgs<D>::RequestedPlaybackRate() const
{
    double value {};
    check_hresult(static_cast<const IPlaybackRateChangeRequestedEventArgs &>(static_cast<const D &>(*this))->get_RequestedPlaybackRate(&value));
    return value;
}

template <typename D> bool impl_IShuffleEnabledChangeRequestedEventArgs<D>::RequestedShuffleEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IShuffleEnabledChangeRequestedEventArgs &>(static_cast<const D &>(*this))->get_RequestedShuffleEnabled(&value));
    return value;
}

template <typename D> Windows::Media::MediaPlaybackAutoRepeatMode impl_IAutoRepeatModeChangeRequestedEventArgs<D>::RequestedAutoRepeatMode() const
{
    Windows::Media::MediaPlaybackAutoRepeatMode value {};
    check_hresult(static_cast<const IAutoRepeatModeChangeRequestedEventArgs &>(static_cast<const D &>(*this))->get_RequestedAutoRepeatMode(&value));
    return value;
}

template <typename D> Windows::Media::MediaPlaybackStatus impl_ISystemMediaTransportControls<D>::PlaybackStatus() const
{
    Windows::Media::MediaPlaybackStatus value {};
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->get_PlaybackStatus(&value));
    return value;
}

template <typename D> void impl_ISystemMediaTransportControls<D>::PlaybackStatus(Windows::Media::MediaPlaybackStatus value) const
{
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->put_PlaybackStatus(value));
}

template <typename D> Windows::Media::SystemMediaTransportControlsDisplayUpdater impl_ISystemMediaTransportControls<D>::DisplayUpdater() const
{
    Windows::Media::SystemMediaTransportControlsDisplayUpdater value { nullptr };
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->get_DisplayUpdater(put(value)));
    return value;
}

template <typename D> Windows::Media::SoundLevel impl_ISystemMediaTransportControls<D>::SoundLevel() const
{
    Windows::Media::SoundLevel value {};
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->get_SoundLevel(&value));
    return value;
}

template <typename D> bool impl_ISystemMediaTransportControls<D>::IsEnabled() const
{
    bool value {};
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->get_IsEnabled(&value));
    return value;
}

template <typename D> void impl_ISystemMediaTransportControls<D>::IsEnabled(bool value) const
{
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->put_IsEnabled(value));
}

template <typename D> bool impl_ISystemMediaTransportControls<D>::IsPlayEnabled() const
{
    bool value {};
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->get_IsPlayEnabled(&value));
    return value;
}

template <typename D> void impl_ISystemMediaTransportControls<D>::IsPlayEnabled(bool value) const
{
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->put_IsPlayEnabled(value));
}

template <typename D> bool impl_ISystemMediaTransportControls<D>::IsStopEnabled() const
{
    bool value {};
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->get_IsStopEnabled(&value));
    return value;
}

template <typename D> void impl_ISystemMediaTransportControls<D>::IsStopEnabled(bool value) const
{
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->put_IsStopEnabled(value));
}

template <typename D> bool impl_ISystemMediaTransportControls<D>::IsPauseEnabled() const
{
    bool value {};
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->get_IsPauseEnabled(&value));
    return value;
}

template <typename D> void impl_ISystemMediaTransportControls<D>::IsPauseEnabled(bool value) const
{
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->put_IsPauseEnabled(value));
}

template <typename D> bool impl_ISystemMediaTransportControls<D>::IsRecordEnabled() const
{
    bool value {};
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->get_IsRecordEnabled(&value));
    return value;
}

template <typename D> void impl_ISystemMediaTransportControls<D>::IsRecordEnabled(bool value) const
{
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->put_IsRecordEnabled(value));
}

template <typename D> bool impl_ISystemMediaTransportControls<D>::IsFastForwardEnabled() const
{
    bool value {};
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->get_IsFastForwardEnabled(&value));
    return value;
}

template <typename D> void impl_ISystemMediaTransportControls<D>::IsFastForwardEnabled(bool value) const
{
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->put_IsFastForwardEnabled(value));
}

template <typename D> bool impl_ISystemMediaTransportControls<D>::IsRewindEnabled() const
{
    bool value {};
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->get_IsRewindEnabled(&value));
    return value;
}

template <typename D> void impl_ISystemMediaTransportControls<D>::IsRewindEnabled(bool value) const
{
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->put_IsRewindEnabled(value));
}

template <typename D> bool impl_ISystemMediaTransportControls<D>::IsPreviousEnabled() const
{
    bool value {};
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->get_IsPreviousEnabled(&value));
    return value;
}

template <typename D> void impl_ISystemMediaTransportControls<D>::IsPreviousEnabled(bool value) const
{
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->put_IsPreviousEnabled(value));
}

template <typename D> bool impl_ISystemMediaTransportControls<D>::IsNextEnabled() const
{
    bool value {};
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->get_IsNextEnabled(&value));
    return value;
}

template <typename D> void impl_ISystemMediaTransportControls<D>::IsNextEnabled(bool value) const
{
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->put_IsNextEnabled(value));
}

template <typename D> bool impl_ISystemMediaTransportControls<D>::IsChannelUpEnabled() const
{
    bool value {};
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->get_IsChannelUpEnabled(&value));
    return value;
}

template <typename D> void impl_ISystemMediaTransportControls<D>::IsChannelUpEnabled(bool value) const
{
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->put_IsChannelUpEnabled(value));
}

template <typename D> bool impl_ISystemMediaTransportControls<D>::IsChannelDownEnabled() const
{
    bool value {};
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->get_IsChannelDownEnabled(&value));
    return value;
}

template <typename D> void impl_ISystemMediaTransportControls<D>::IsChannelDownEnabled(bool value) const
{
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->put_IsChannelDownEnabled(value));
}

template <typename D> event_token impl_ISystemMediaTransportControls<D>::ButtonPressed(const Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->add_ButtonPressed(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISystemMediaTransportControls> impl_ISystemMediaTransportControls<D>::ButtonPressed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISystemMediaTransportControls>(this, &ABI::Windows::Media::ISystemMediaTransportControls::remove_ButtonPressed, ButtonPressed(handler));
}

template <typename D> void impl_ISystemMediaTransportControls<D>::ButtonPressed(event_token token) const
{
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->remove_ButtonPressed(token));
}

template <typename D> event_token impl_ISystemMediaTransportControls<D>::PropertyChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->add_PropertyChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISystemMediaTransportControls> impl_ISystemMediaTransportControls<D>::PropertyChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISystemMediaTransportControls>(this, &ABI::Windows::Media::ISystemMediaTransportControls::remove_PropertyChanged, PropertyChanged(handler));
}

template <typename D> void impl_ISystemMediaTransportControls<D>::PropertyChanged(event_token token) const
{
    check_hresult(static_cast<const ISystemMediaTransportControls &>(static_cast<const D &>(*this))->remove_PropertyChanged(token));
}

template <typename D> Windows::Media::MediaPlaybackAutoRepeatMode impl_ISystemMediaTransportControls2<D>::AutoRepeatMode() const
{
    Windows::Media::MediaPlaybackAutoRepeatMode value {};
    check_hresult(static_cast<const ISystemMediaTransportControls2 &>(static_cast<const D &>(*this))->get_AutoRepeatMode(&value));
    return value;
}

template <typename D> void impl_ISystemMediaTransportControls2<D>::AutoRepeatMode(Windows::Media::MediaPlaybackAutoRepeatMode value) const
{
    check_hresult(static_cast<const ISystemMediaTransportControls2 &>(static_cast<const D &>(*this))->put_AutoRepeatMode(value));
}

template <typename D> bool impl_ISystemMediaTransportControls2<D>::ShuffleEnabled() const
{
    bool value {};
    check_hresult(static_cast<const ISystemMediaTransportControls2 &>(static_cast<const D &>(*this))->get_ShuffleEnabled(&value));
    return value;
}

template <typename D> void impl_ISystemMediaTransportControls2<D>::ShuffleEnabled(bool value) const
{
    check_hresult(static_cast<const ISystemMediaTransportControls2 &>(static_cast<const D &>(*this))->put_ShuffleEnabled(value));
}

template <typename D> double impl_ISystemMediaTransportControls2<D>::PlaybackRate() const
{
    double value {};
    check_hresult(static_cast<const ISystemMediaTransportControls2 &>(static_cast<const D &>(*this))->get_PlaybackRate(&value));
    return value;
}

template <typename D> void impl_ISystemMediaTransportControls2<D>::PlaybackRate(double value) const
{
    check_hresult(static_cast<const ISystemMediaTransportControls2 &>(static_cast<const D &>(*this))->put_PlaybackRate(value));
}

template <typename D> void impl_ISystemMediaTransportControls2<D>::UpdateTimelineProperties(const Windows::Media::SystemMediaTransportControlsTimelineProperties & timelineProperties) const
{
    check_hresult(static_cast<const ISystemMediaTransportControls2 &>(static_cast<const D &>(*this))->abi_UpdateTimelineProperties(get(timelineProperties)));
}

template <typename D> event_token impl_ISystemMediaTransportControls2<D>::PlaybackPositionChangeRequested(const Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::PlaybackPositionChangeRequestedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISystemMediaTransportControls2 &>(static_cast<const D &>(*this))->add_PlaybackPositionChangeRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISystemMediaTransportControls2> impl_ISystemMediaTransportControls2<D>::PlaybackPositionChangeRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::PlaybackPositionChangeRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISystemMediaTransportControls2>(this, &ABI::Windows::Media::ISystemMediaTransportControls2::remove_PlaybackPositionChangeRequested, PlaybackPositionChangeRequested(handler));
}

template <typename D> void impl_ISystemMediaTransportControls2<D>::PlaybackPositionChangeRequested(event_token token) const
{
    check_hresult(static_cast<const ISystemMediaTransportControls2 &>(static_cast<const D &>(*this))->remove_PlaybackPositionChangeRequested(token));
}

template <typename D> event_token impl_ISystemMediaTransportControls2<D>::PlaybackRateChangeRequested(const Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::PlaybackRateChangeRequestedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISystemMediaTransportControls2 &>(static_cast<const D &>(*this))->add_PlaybackRateChangeRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISystemMediaTransportControls2> impl_ISystemMediaTransportControls2<D>::PlaybackRateChangeRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::PlaybackRateChangeRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISystemMediaTransportControls2>(this, &ABI::Windows::Media::ISystemMediaTransportControls2::remove_PlaybackRateChangeRequested, PlaybackRateChangeRequested(handler));
}

template <typename D> void impl_ISystemMediaTransportControls2<D>::PlaybackRateChangeRequested(event_token token) const
{
    check_hresult(static_cast<const ISystemMediaTransportControls2 &>(static_cast<const D &>(*this))->remove_PlaybackRateChangeRequested(token));
}

template <typename D> event_token impl_ISystemMediaTransportControls2<D>::ShuffleEnabledChangeRequested(const Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::ShuffleEnabledChangeRequestedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISystemMediaTransportControls2 &>(static_cast<const D &>(*this))->add_ShuffleEnabledChangeRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISystemMediaTransportControls2> impl_ISystemMediaTransportControls2<D>::ShuffleEnabledChangeRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::ShuffleEnabledChangeRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISystemMediaTransportControls2>(this, &ABI::Windows::Media::ISystemMediaTransportControls2::remove_ShuffleEnabledChangeRequested, ShuffleEnabledChangeRequested(handler));
}

template <typename D> void impl_ISystemMediaTransportControls2<D>::ShuffleEnabledChangeRequested(event_token token) const
{
    check_hresult(static_cast<const ISystemMediaTransportControls2 &>(static_cast<const D &>(*this))->remove_ShuffleEnabledChangeRequested(token));
}

template <typename D> event_token impl_ISystemMediaTransportControls2<D>::AutoRepeatModeChangeRequested(const Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::AutoRepeatModeChangeRequestedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISystemMediaTransportControls2 &>(static_cast<const D &>(*this))->add_AutoRepeatModeChangeRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISystemMediaTransportControls2> impl_ISystemMediaTransportControls2<D>::AutoRepeatModeChangeRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::AutoRepeatModeChangeRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISystemMediaTransportControls2>(this, &ABI::Windows::Media::ISystemMediaTransportControls2::remove_AutoRepeatModeChangeRequested, AutoRepeatModeChangeRequested(handler));
}

template <typename D> void impl_ISystemMediaTransportControls2<D>::AutoRepeatModeChangeRequested(event_token token) const
{
    check_hresult(static_cast<const ISystemMediaTransportControls2 &>(static_cast<const D &>(*this))->remove_AutoRepeatModeChangeRequested(token));
}

template <typename D> Windows::Media::SystemMediaTransportControls impl_ISystemMediaTransportControlsStatics<D>::GetForCurrentView() const
{
    Windows::Media::SystemMediaTransportControls mediaControl { nullptr };
    check_hresult(static_cast<const ISystemMediaTransportControlsStatics &>(static_cast<const D &>(*this))->abi_GetForCurrentView(put(mediaControl)));
    return mediaControl;
}

template <typename D> void impl_IMediaExtension<D>::SetProperties(const Windows::Foundation::Collections::IPropertySet & configuration) const
{
    check_hresult(static_cast<const IMediaExtension &>(static_cast<const D &>(*this))->abi_SetProperties(get(configuration)));
}

template <typename D> void impl_IMediaExtensionManager<D>::RegisterSchemeHandler(hstring_ref activatableClassId, hstring_ref scheme) const
{
    check_hresult(static_cast<const IMediaExtensionManager &>(static_cast<const D &>(*this))->abi_RegisterSchemeHandler(get(activatableClassId), get(scheme)));
}

template <typename D> void impl_IMediaExtensionManager<D>::RegisterSchemeHandler(hstring_ref activatableClassId, hstring_ref scheme, const Windows::Foundation::Collections::IPropertySet & configuration) const
{
    check_hresult(static_cast<const IMediaExtensionManager &>(static_cast<const D &>(*this))->abi_RegisterSchemeHandlerWithSettings(get(activatableClassId), get(scheme), get(configuration)));
}

template <typename D> void impl_IMediaExtensionManager<D>::RegisterByteStreamHandler(hstring_ref activatableClassId, hstring_ref fileExtension, hstring_ref mimeType) const
{
    check_hresult(static_cast<const IMediaExtensionManager &>(static_cast<const D &>(*this))->abi_RegisterByteStreamHandler(get(activatableClassId), get(fileExtension), get(mimeType)));
}

template <typename D> void impl_IMediaExtensionManager<D>::RegisterByteStreamHandler(hstring_ref activatableClassId, hstring_ref fileExtension, hstring_ref mimeType, const Windows::Foundation::Collections::IPropertySet & configuration) const
{
    check_hresult(static_cast<const IMediaExtensionManager &>(static_cast<const D &>(*this))->abi_RegisterByteStreamHandlerWithSettings(get(activatableClassId), get(fileExtension), get(mimeType), get(configuration)));
}

template <typename D> void impl_IMediaExtensionManager<D>::RegisterAudioDecoder(hstring_ref activatableClassId, GUID inputSubtype, GUID outputSubtype) const
{
    check_hresult(static_cast<const IMediaExtensionManager &>(static_cast<const D &>(*this))->abi_RegisterAudioDecoder(get(activatableClassId), inputSubtype, outputSubtype));
}

template <typename D> void impl_IMediaExtensionManager<D>::RegisterAudioDecoder(hstring_ref activatableClassId, GUID inputSubtype, GUID outputSubtype, const Windows::Foundation::Collections::IPropertySet & configuration) const
{
    check_hresult(static_cast<const IMediaExtensionManager &>(static_cast<const D &>(*this))->abi_RegisterAudioDecoderWithSettings(get(activatableClassId), inputSubtype, outputSubtype, get(configuration)));
}

template <typename D> void impl_IMediaExtensionManager<D>::RegisterAudioEncoder(hstring_ref activatableClassId, GUID inputSubtype, GUID outputSubtype) const
{
    check_hresult(static_cast<const IMediaExtensionManager &>(static_cast<const D &>(*this))->abi_RegisterAudioEncoder(get(activatableClassId), inputSubtype, outputSubtype));
}

template <typename D> void impl_IMediaExtensionManager<D>::RegisterAudioEncoder(hstring_ref activatableClassId, GUID inputSubtype, GUID outputSubtype, const Windows::Foundation::Collections::IPropertySet & configuration) const
{
    check_hresult(static_cast<const IMediaExtensionManager &>(static_cast<const D &>(*this))->abi_RegisterAudioEncoderWithSettings(get(activatableClassId), inputSubtype, outputSubtype, get(configuration)));
}

template <typename D> void impl_IMediaExtensionManager<D>::RegisterVideoDecoder(hstring_ref activatableClassId, GUID inputSubtype, GUID outputSubtype) const
{
    check_hresult(static_cast<const IMediaExtensionManager &>(static_cast<const D &>(*this))->abi_RegisterVideoDecoder(get(activatableClassId), inputSubtype, outputSubtype));
}

template <typename D> void impl_IMediaExtensionManager<D>::RegisterVideoDecoder(hstring_ref activatableClassId, GUID inputSubtype, GUID outputSubtype, const Windows::Foundation::Collections::IPropertySet & configuration) const
{
    check_hresult(static_cast<const IMediaExtensionManager &>(static_cast<const D &>(*this))->abi_RegisterVideoDecoderWithSettings(get(activatableClassId), inputSubtype, outputSubtype, get(configuration)));
}

template <typename D> void impl_IMediaExtensionManager<D>::RegisterVideoEncoder(hstring_ref activatableClassId, GUID inputSubtype, GUID outputSubtype) const
{
    check_hresult(static_cast<const IMediaExtensionManager &>(static_cast<const D &>(*this))->abi_RegisterVideoEncoder(get(activatableClassId), inputSubtype, outputSubtype));
}

template <typename D> void impl_IMediaExtensionManager<D>::RegisterVideoEncoder(hstring_ref activatableClassId, GUID inputSubtype, GUID outputSubtype, const Windows::Foundation::Collections::IPropertySet & configuration) const
{
    check_hresult(static_cast<const IMediaExtensionManager &>(static_cast<const D &>(*this))->abi_RegisterVideoEncoderWithSettings(get(activatableClassId), inputSubtype, outputSubtype, get(configuration)));
}

template <typename D> hstring impl_IVideoEffectsStatics<D>::VideoStabilization() const
{
    hstring value;
    check_hresult(static_cast<const IVideoEffectsStatics &>(static_cast<const D &>(*this))->get_VideoStabilization(put(value)));
    return value;
}

template <typename D> void impl_IMediaTimelineController<D>::Start() const
{
    check_hresult(static_cast<const IMediaTimelineController &>(static_cast<const D &>(*this))->abi_Start());
}

template <typename D> void impl_IMediaTimelineController<D>::Resume() const
{
    check_hresult(static_cast<const IMediaTimelineController &>(static_cast<const D &>(*this))->abi_Resume());
}

template <typename D> void impl_IMediaTimelineController<D>::Pause() const
{
    check_hresult(static_cast<const IMediaTimelineController &>(static_cast<const D &>(*this))->abi_Pause());
}

template <typename D> Windows::Foundation::TimeSpan impl_IMediaTimelineController<D>::Position() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IMediaTimelineController &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> void impl_IMediaTimelineController<D>::Position(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const IMediaTimelineController &>(static_cast<const D &>(*this))->put_Position(get(value)));
}

template <typename D> double impl_IMediaTimelineController<D>::ClockRate() const
{
    double value {};
    check_hresult(static_cast<const IMediaTimelineController &>(static_cast<const D &>(*this))->get_ClockRate(&value));
    return value;
}

template <typename D> void impl_IMediaTimelineController<D>::ClockRate(double value) const
{
    check_hresult(static_cast<const IMediaTimelineController &>(static_cast<const D &>(*this))->put_ClockRate(value));
}

template <typename D> Windows::Media::MediaTimelineControllerState impl_IMediaTimelineController<D>::State() const
{
    Windows::Media::MediaTimelineControllerState value {};
    check_hresult(static_cast<const IMediaTimelineController &>(static_cast<const D &>(*this))->get_State(&value));
    return value;
}

template <typename D> event_token impl_IMediaTimelineController<D>::PositionChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::IInspectable> & positionChangedEventHandler) const
{
    event_token eventCookie {};
    check_hresult(static_cast<const IMediaTimelineController &>(static_cast<const D &>(*this))->add_PositionChanged(get(positionChangedEventHandler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IMediaTimelineController> impl_IMediaTimelineController<D>::PositionChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::IInspectable> & positionChangedEventHandler) const
{
    return impl::make_event_revoker<D, IMediaTimelineController>(this, &ABI::Windows::Media::IMediaTimelineController::remove_PositionChanged, PositionChanged(positionChangedEventHandler));
}

template <typename D> void impl_IMediaTimelineController<D>::PositionChanged(event_token eventCookie) const
{
    check_hresult(static_cast<const IMediaTimelineController &>(static_cast<const D &>(*this))->remove_PositionChanged(eventCookie));
}

template <typename D> event_token impl_IMediaTimelineController<D>::StateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::IInspectable> & stateChangedEventHandler) const
{
    event_token eventCookie {};
    check_hresult(static_cast<const IMediaTimelineController &>(static_cast<const D &>(*this))->add_StateChanged(get(stateChangedEventHandler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IMediaTimelineController> impl_IMediaTimelineController<D>::StateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::IInspectable> & stateChangedEventHandler) const
{
    return impl::make_event_revoker<D, IMediaTimelineController>(this, &ABI::Windows::Media::IMediaTimelineController::remove_StateChanged, StateChanged(stateChangedEventHandler));
}

template <typename D> void impl_IMediaTimelineController<D>::StateChanged(event_token eventCookie) const
{
    check_hresult(static_cast<const IMediaTimelineController &>(static_cast<const D &>(*this))->remove_StateChanged(eventCookie));
}

template <typename D> event_token impl_IMediaControl<D>::SoundLevelChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->add_SoundLevelChanged(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IMediaControl> impl_IMediaControl<D>::SoundLevelChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IMediaControl>(this, &ABI::Windows::Media::IMediaControl::remove_SoundLevelChanged, SoundLevelChanged(handler));
}

template <typename D> void impl_IMediaControl<D>::SoundLevelChanged(event_token cookie) const
{
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->remove_SoundLevelChanged(cookie));
}

template <typename D> event_token impl_IMediaControl<D>::PlayPressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->add_PlayPressed(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IMediaControl> impl_IMediaControl<D>::PlayPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IMediaControl>(this, &ABI::Windows::Media::IMediaControl::remove_PlayPressed, PlayPressed(handler));
}

template <typename D> void impl_IMediaControl<D>::PlayPressed(event_token cookie) const
{
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->remove_PlayPressed(cookie));
}

template <typename D> event_token impl_IMediaControl<D>::PausePressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->add_PausePressed(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IMediaControl> impl_IMediaControl<D>::PausePressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IMediaControl>(this, &ABI::Windows::Media::IMediaControl::remove_PausePressed, PausePressed(handler));
}

template <typename D> void impl_IMediaControl<D>::PausePressed(event_token cookie) const
{
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->remove_PausePressed(cookie));
}

template <typename D> event_token impl_IMediaControl<D>::StopPressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->add_StopPressed(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IMediaControl> impl_IMediaControl<D>::StopPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IMediaControl>(this, &ABI::Windows::Media::IMediaControl::remove_StopPressed, StopPressed(handler));
}

template <typename D> void impl_IMediaControl<D>::StopPressed(event_token cookie) const
{
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->remove_StopPressed(cookie));
}

template <typename D> event_token impl_IMediaControl<D>::PlayPauseTogglePressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->add_PlayPauseTogglePressed(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IMediaControl> impl_IMediaControl<D>::PlayPauseTogglePressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IMediaControl>(this, &ABI::Windows::Media::IMediaControl::remove_PlayPauseTogglePressed, PlayPauseTogglePressed(handler));
}

template <typename D> void impl_IMediaControl<D>::PlayPauseTogglePressed(event_token cookie) const
{
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->remove_PlayPauseTogglePressed(cookie));
}

template <typename D> event_token impl_IMediaControl<D>::RecordPressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->add_RecordPressed(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IMediaControl> impl_IMediaControl<D>::RecordPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IMediaControl>(this, &ABI::Windows::Media::IMediaControl::remove_RecordPressed, RecordPressed(handler));
}

template <typename D> void impl_IMediaControl<D>::RecordPressed(event_token cookie) const
{
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->remove_RecordPressed(cookie));
}

template <typename D> event_token impl_IMediaControl<D>::NextTrackPressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->add_NextTrackPressed(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IMediaControl> impl_IMediaControl<D>::NextTrackPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IMediaControl>(this, &ABI::Windows::Media::IMediaControl::remove_NextTrackPressed, NextTrackPressed(handler));
}

template <typename D> void impl_IMediaControl<D>::NextTrackPressed(event_token cookie) const
{
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->remove_NextTrackPressed(cookie));
}

template <typename D> event_token impl_IMediaControl<D>::PreviousTrackPressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->add_PreviousTrackPressed(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IMediaControl> impl_IMediaControl<D>::PreviousTrackPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IMediaControl>(this, &ABI::Windows::Media::IMediaControl::remove_PreviousTrackPressed, PreviousTrackPressed(handler));
}

template <typename D> void impl_IMediaControl<D>::PreviousTrackPressed(event_token cookie) const
{
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->remove_PreviousTrackPressed(cookie));
}

template <typename D> event_token impl_IMediaControl<D>::FastForwardPressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->add_FastForwardPressed(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IMediaControl> impl_IMediaControl<D>::FastForwardPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IMediaControl>(this, &ABI::Windows::Media::IMediaControl::remove_FastForwardPressed, FastForwardPressed(handler));
}

template <typename D> void impl_IMediaControl<D>::FastForwardPressed(event_token cookie) const
{
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->remove_FastForwardPressed(cookie));
}

template <typename D> event_token impl_IMediaControl<D>::RewindPressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->add_RewindPressed(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IMediaControl> impl_IMediaControl<D>::RewindPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IMediaControl>(this, &ABI::Windows::Media::IMediaControl::remove_RewindPressed, RewindPressed(handler));
}

template <typename D> void impl_IMediaControl<D>::RewindPressed(event_token cookie) const
{
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->remove_RewindPressed(cookie));
}

template <typename D> event_token impl_IMediaControl<D>::ChannelUpPressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->add_ChannelUpPressed(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IMediaControl> impl_IMediaControl<D>::ChannelUpPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IMediaControl>(this, &ABI::Windows::Media::IMediaControl::remove_ChannelUpPressed, ChannelUpPressed(handler));
}

template <typename D> void impl_IMediaControl<D>::ChannelUpPressed(event_token cookie) const
{
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->remove_ChannelUpPressed(cookie));
}

template <typename D> event_token impl_IMediaControl<D>::ChannelDownPressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->add_ChannelDownPressed(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IMediaControl> impl_IMediaControl<D>::ChannelDownPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IMediaControl>(this, &ABI::Windows::Media::IMediaControl::remove_ChannelDownPressed, ChannelDownPressed(handler));
}

template <typename D> void impl_IMediaControl<D>::ChannelDownPressed(event_token cookie) const
{
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->remove_ChannelDownPressed(cookie));
}

template <typename D> Windows::Media::SoundLevel impl_IMediaControl<D>::SoundLevel() const
{
    Windows::Media::SoundLevel value {};
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->get_SoundLevel(&value));
    return value;
}

template <typename D> void impl_IMediaControl<D>::TrackName(hstring_ref value) const
{
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->put_TrackName(get(value)));
}

template <typename D> hstring impl_IMediaControl<D>::TrackName() const
{
    hstring value;
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->get_TrackName(put(value)));
    return value;
}

template <typename D> void impl_IMediaControl<D>::ArtistName(hstring_ref value) const
{
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->put_ArtistName(get(value)));
}

template <typename D> hstring impl_IMediaControl<D>::ArtistName() const
{
    hstring value;
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->get_ArtistName(put(value)));
    return value;
}

template <typename D> void impl_IMediaControl<D>::IsPlaying(bool value) const
{
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->put_IsPlaying(value));
}

template <typename D> bool impl_IMediaControl<D>::IsPlaying() const
{
    bool value {};
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->get_IsPlaying(&value));
    return value;
}

template <typename D> void impl_IMediaControl<D>::AlbumArt(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->put_AlbumArt(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_IMediaControl<D>::AlbumArt() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IMediaControl &>(static_cast<const D &>(*this))->get_AlbumArt(put(value)));
    return value;
}

inline AudioFrame::AudioFrame(uint32_t capacity) :
    AudioFrame(get_activation_factory<AudioFrame, IAudioFrameFactory>().Create(capacity))
{}

inline event_token MediaControl::SoundLevelChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    return get_activation_factory<MediaControl, IMediaControl>().SoundLevelChanged(handler);
}

inline factory_event_revoker<IMediaControl> MediaControl::SoundLevelChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    auto factory = get_activation_factory<MediaControl, IMediaControl>();
    return { factory, &ABI::Windows::Media::IMediaControl::remove_SoundLevelChanged, factory.SoundLevelChanged(handler) };
}

inline void MediaControl::SoundLevelChanged(event_token cookie)
{
    get_activation_factory<MediaControl, IMediaControl>().SoundLevelChanged(cookie);
}

inline event_token MediaControl::PlayPressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    return get_activation_factory<MediaControl, IMediaControl>().PlayPressed(handler);
}

inline factory_event_revoker<IMediaControl> MediaControl::PlayPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    auto factory = get_activation_factory<MediaControl, IMediaControl>();
    return { factory, &ABI::Windows::Media::IMediaControl::remove_PlayPressed, factory.PlayPressed(handler) };
}

inline void MediaControl::PlayPressed(event_token cookie)
{
    get_activation_factory<MediaControl, IMediaControl>().PlayPressed(cookie);
}

inline event_token MediaControl::PausePressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    return get_activation_factory<MediaControl, IMediaControl>().PausePressed(handler);
}

inline factory_event_revoker<IMediaControl> MediaControl::PausePressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    auto factory = get_activation_factory<MediaControl, IMediaControl>();
    return { factory, &ABI::Windows::Media::IMediaControl::remove_PausePressed, factory.PausePressed(handler) };
}

inline void MediaControl::PausePressed(event_token cookie)
{
    get_activation_factory<MediaControl, IMediaControl>().PausePressed(cookie);
}

inline event_token MediaControl::StopPressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    return get_activation_factory<MediaControl, IMediaControl>().StopPressed(handler);
}

inline factory_event_revoker<IMediaControl> MediaControl::StopPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    auto factory = get_activation_factory<MediaControl, IMediaControl>();
    return { factory, &ABI::Windows::Media::IMediaControl::remove_StopPressed, factory.StopPressed(handler) };
}

inline void MediaControl::StopPressed(event_token cookie)
{
    get_activation_factory<MediaControl, IMediaControl>().StopPressed(cookie);
}

inline event_token MediaControl::PlayPauseTogglePressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    return get_activation_factory<MediaControl, IMediaControl>().PlayPauseTogglePressed(handler);
}

inline factory_event_revoker<IMediaControl> MediaControl::PlayPauseTogglePressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    auto factory = get_activation_factory<MediaControl, IMediaControl>();
    return { factory, &ABI::Windows::Media::IMediaControl::remove_PlayPauseTogglePressed, factory.PlayPauseTogglePressed(handler) };
}

inline void MediaControl::PlayPauseTogglePressed(event_token cookie)
{
    get_activation_factory<MediaControl, IMediaControl>().PlayPauseTogglePressed(cookie);
}

inline event_token MediaControl::RecordPressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    return get_activation_factory<MediaControl, IMediaControl>().RecordPressed(handler);
}

inline factory_event_revoker<IMediaControl> MediaControl::RecordPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    auto factory = get_activation_factory<MediaControl, IMediaControl>();
    return { factory, &ABI::Windows::Media::IMediaControl::remove_RecordPressed, factory.RecordPressed(handler) };
}

inline void MediaControl::RecordPressed(event_token cookie)
{
    get_activation_factory<MediaControl, IMediaControl>().RecordPressed(cookie);
}

inline event_token MediaControl::NextTrackPressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    return get_activation_factory<MediaControl, IMediaControl>().NextTrackPressed(handler);
}

inline factory_event_revoker<IMediaControl> MediaControl::NextTrackPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    auto factory = get_activation_factory<MediaControl, IMediaControl>();
    return { factory, &ABI::Windows::Media::IMediaControl::remove_NextTrackPressed, factory.NextTrackPressed(handler) };
}

inline void MediaControl::NextTrackPressed(event_token cookie)
{
    get_activation_factory<MediaControl, IMediaControl>().NextTrackPressed(cookie);
}

inline event_token MediaControl::PreviousTrackPressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    return get_activation_factory<MediaControl, IMediaControl>().PreviousTrackPressed(handler);
}

inline factory_event_revoker<IMediaControl> MediaControl::PreviousTrackPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    auto factory = get_activation_factory<MediaControl, IMediaControl>();
    return { factory, &ABI::Windows::Media::IMediaControl::remove_PreviousTrackPressed, factory.PreviousTrackPressed(handler) };
}

inline void MediaControl::PreviousTrackPressed(event_token cookie)
{
    get_activation_factory<MediaControl, IMediaControl>().PreviousTrackPressed(cookie);
}

inline event_token MediaControl::FastForwardPressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    return get_activation_factory<MediaControl, IMediaControl>().FastForwardPressed(handler);
}

inline factory_event_revoker<IMediaControl> MediaControl::FastForwardPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    auto factory = get_activation_factory<MediaControl, IMediaControl>();
    return { factory, &ABI::Windows::Media::IMediaControl::remove_FastForwardPressed, factory.FastForwardPressed(handler) };
}

inline void MediaControl::FastForwardPressed(event_token cookie)
{
    get_activation_factory<MediaControl, IMediaControl>().FastForwardPressed(cookie);
}

inline event_token MediaControl::RewindPressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    return get_activation_factory<MediaControl, IMediaControl>().RewindPressed(handler);
}

inline factory_event_revoker<IMediaControl> MediaControl::RewindPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    auto factory = get_activation_factory<MediaControl, IMediaControl>();
    return { factory, &ABI::Windows::Media::IMediaControl::remove_RewindPressed, factory.RewindPressed(handler) };
}

inline void MediaControl::RewindPressed(event_token cookie)
{
    get_activation_factory<MediaControl, IMediaControl>().RewindPressed(cookie);
}

inline event_token MediaControl::ChannelUpPressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    return get_activation_factory<MediaControl, IMediaControl>().ChannelUpPressed(handler);
}

inline factory_event_revoker<IMediaControl> MediaControl::ChannelUpPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    auto factory = get_activation_factory<MediaControl, IMediaControl>();
    return { factory, &ABI::Windows::Media::IMediaControl::remove_ChannelUpPressed, factory.ChannelUpPressed(handler) };
}

inline void MediaControl::ChannelUpPressed(event_token cookie)
{
    get_activation_factory<MediaControl, IMediaControl>().ChannelUpPressed(cookie);
}

inline event_token MediaControl::ChannelDownPressed(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    return get_activation_factory<MediaControl, IMediaControl>().ChannelDownPressed(handler);
}

inline factory_event_revoker<IMediaControl> MediaControl::ChannelDownPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    auto factory = get_activation_factory<MediaControl, IMediaControl>();
    return { factory, &ABI::Windows::Media::IMediaControl::remove_ChannelDownPressed, factory.ChannelDownPressed(handler) };
}

inline void MediaControl::ChannelDownPressed(event_token cookie)
{
    get_activation_factory<MediaControl, IMediaControl>().ChannelDownPressed(cookie);
}

inline Windows::Media::SoundLevel MediaControl::SoundLevel()
{
    return get_activation_factory<MediaControl, IMediaControl>().SoundLevel();
}

inline void MediaControl::TrackName(hstring_ref value)
{
    get_activation_factory<MediaControl, IMediaControl>().TrackName(value);
}

inline hstring MediaControl::TrackName()
{
    return get_activation_factory<MediaControl, IMediaControl>().TrackName();
}

inline void MediaControl::ArtistName(hstring_ref value)
{
    get_activation_factory<MediaControl, IMediaControl>().ArtistName(value);
}

inline hstring MediaControl::ArtistName()
{
    return get_activation_factory<MediaControl, IMediaControl>().ArtistName();
}

inline void MediaControl::IsPlaying(bool value)
{
    get_activation_factory<MediaControl, IMediaControl>().IsPlaying(value);
}

inline bool MediaControl::IsPlaying()
{
    return get_activation_factory<MediaControl, IMediaControl>().IsPlaying();
}

inline void MediaControl::AlbumArt(const Windows::Foundation::Uri & value)
{
    get_activation_factory<MediaControl, IMediaControl>().AlbumArt(value);
}

inline Windows::Foundation::Uri MediaControl::AlbumArt()
{
    return get_activation_factory<MediaControl, IMediaControl>().AlbumArt();
}

inline MediaExtensionManager::MediaExtensionManager() :
    MediaExtensionManager(activate_instance<MediaExtensionManager>())
{}

inline hstring MediaMarkerTypes::Bookmark()
{
    return get_activation_factory<MediaMarkerTypes, IMediaMarkerTypesStatics>().Bookmark();
}

inline MediaTimelineController::MediaTimelineController() :
    MediaTimelineController(activate_instance<MediaTimelineController>())
{}

inline Windows::Media::SystemMediaTransportControls SystemMediaTransportControls::GetForCurrentView()
{
    return get_activation_factory<SystemMediaTransportControls, ISystemMediaTransportControlsStatics>().GetForCurrentView();
}

inline SystemMediaTransportControlsTimelineProperties::SystemMediaTransportControlsTimelineProperties() :
    SystemMediaTransportControlsTimelineProperties(activate_instance<SystemMediaTransportControlsTimelineProperties>())
{}

inline hstring VideoEffects::VideoStabilization()
{
    return get_activation_factory<VideoEffects, IVideoEffectsStatics>().VideoStabilization();
}

inline VideoFrame::VideoFrame(Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height) :
    VideoFrame(get_activation_factory<VideoFrame, IVideoFrameFactory>().Create(format, width, height))
{}

inline VideoFrame::VideoFrame(Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode alpha) :
    VideoFrame(get_activation_factory<VideoFrame, IVideoFrameFactory>().CreateWithAlpha(format, width, height, alpha))
{}

}

}
