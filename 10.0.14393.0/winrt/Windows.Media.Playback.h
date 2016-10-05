// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Media.3.h"
#include "internal/Windows.Devices.Enumeration.3.h"
#include "internal/Windows.Media.Casting.3.h"
#include "internal/Windows.UI.Composition.3.h"
#include "internal/Windows.Media.MediaProperties.3.h"
#include "internal/Windows.Media.Protection.3.h"
#include "internal/Windows.Storage.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Media.Core.3.h"
#include "internal/Windows.Media.Playback.3.h"
#include "Windows.Media.h"
#include "Windows.Foundation.h"
#include "Windows.Foundation.Collections.h"
#include "Windows.Media.Core.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Media::Playback::IBackgroundMediaPlayerStatics> : produce_base<D, Windows::Media::Playback::IBackgroundMediaPlayerStatics>
{
    HRESULT __stdcall get_Current(abi_arg_out<Windows::Media::Playback::IMediaPlayer> player) noexcept override
    {
        try
        {
            *player = detach(this->shim().Current());
            return S_OK;
        }
        catch (...)
        {
            *player = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MessageReceivedFromBackground(abi_arg_in<Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().MessageReceivedFromBackground(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MessageReceivedFromBackground(event_token token) noexcept override
    {
        try
        {
            this->shim().MessageReceivedFromBackground(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MessageReceivedFromForeground(abi_arg_in<Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().MessageReceivedFromForeground(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MessageReceivedFromForeground(event_token token) noexcept override
    {
        try
        {
            this->shim().MessageReceivedFromForeground(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendMessageToBackground(abi_arg_in<Windows::Foundation::Collections::IPropertySet> value) noexcept override
    {
        try
        {
            this->shim().SendMessageToBackground(*reinterpret_cast<const Windows::Foundation::Collections::ValueSet *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendMessageToForeground(abi_arg_in<Windows::Foundation::Collections::IPropertySet> value) noexcept override
    {
        try
        {
            this->shim().SendMessageToForeground(*reinterpret_cast<const Windows::Foundation::Collections::ValueSet *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsMediaPlaying(bool * isMediaPlaying) noexcept override
    {
        try
        {
            *isMediaPlaying = detach(this->shim().IsMediaPlaying());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Shutdown() noexcept override
    {
        try
        {
            this->shim().Shutdown();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs> : produce_base<D, Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs>
{
    HRESULT __stdcall get_NewItem(abi_arg_out<Windows::Media::Playback::IMediaPlaybackItem> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NewItem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OldItem(abi_arg_out<Windows::Media::Playback::IMediaPlaybackItem> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OldItem());
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
struct produce<D, Windows::Media::Playback::IMediaBreak> : produce_base<D, Windows::Media::Playback::IMediaBreak>
{
    HRESULT __stdcall get_PlaybackList(abi_arg_out<Windows::Media::Playback::IMediaPlaybackList> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PlaybackList());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PresentationPosition(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PresentationPosition());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InsertionMethod(Windows::Media::Playback::MediaBreakInsertionMethod * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InsertionMethod());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomProperties(abi_arg_out<Windows::Foundation::Collections::IPropertySet> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CustomProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanStart(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanStart());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanStart(bool value) noexcept override
    {
        try
        {
            this->shim().CanStart(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaBreakEndedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaBreakEndedEventArgs>
{
    HRESULT __stdcall get_MediaBreak(abi_arg_out<Windows::Media::Playback::IMediaBreak> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediaBreak());
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
struct produce<D, Windows::Media::Playback::IMediaBreakFactory> : produce_base<D, Windows::Media::Playback::IMediaBreakFactory>
{
    HRESULT __stdcall abi_Create(Windows::Media::Playback::MediaBreakInsertionMethod insertionMethod, abi_arg_out<Windows::Media::Playback::IMediaBreak> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(insertionMethod));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithPresentationPosition(Windows::Media::Playback::MediaBreakInsertionMethod insertionMethod, abi_arg_in<Windows::Foundation::TimeSpan> presentationPosition, abi_arg_out<Windows::Media::Playback::IMediaBreak> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateWithPresentationPosition(insertionMethod, *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&presentationPosition)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaBreakManager> : produce_base<D, Windows::Media::Playback::IMediaBreakManager>
{
    HRESULT __stdcall add_BreaksSeekedOver(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakSeekedOverEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().BreaksSeekedOver(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakSeekedOverEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BreaksSeekedOver(event_token token) noexcept override
    {
        try
        {
            this->shim().BreaksSeekedOver(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_BreakStarted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakStartedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().BreakStarted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakStartedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BreakStarted(event_token token) noexcept override
    {
        try
        {
            this->shim().BreakStarted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_BreakEnded(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakEndedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().BreakEnded(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakEndedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BreakEnded(event_token token) noexcept override
    {
        try
        {
            this->shim().BreakEnded(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_BreakSkipped(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakSkippedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().BreakSkipped(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakSkippedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BreakSkipped(event_token token) noexcept override
    {
        try
        {
            this->shim().BreakSkipped(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentBreak(abi_arg_out<Windows::Media::Playback::IMediaBreak> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CurrentBreak());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PlaybackSession(abi_arg_out<Windows::Media::Playback::IMediaPlaybackSession> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PlaybackSession());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PlayBreak(abi_arg_in<Windows::Media::Playback::IMediaBreak> value) noexcept override
    {
        try
        {
            this->shim().PlayBreak(*reinterpret_cast<const Windows::Media::Playback::MediaBreak *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SkipCurrentBreak() noexcept override
    {
        try
        {
            this->shim().SkipCurrentBreak();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaBreakSchedule> : produce_base<D, Windows::Media::Playback::IMediaBreakSchedule>
{
    HRESULT __stdcall add_ScheduleChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakSchedule, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ScheduleChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakSchedule, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ScheduleChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().ScheduleChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InsertMidrollBreak(abi_arg_in<Windows::Media::Playback::IMediaBreak> mediaBreak) noexcept override
    {
        try
        {
            this->shim().InsertMidrollBreak(*reinterpret_cast<const Windows::Media::Playback::MediaBreak *>(&mediaBreak));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveMidrollBreak(abi_arg_in<Windows::Media::Playback::IMediaBreak> mediaBreak) noexcept override
    {
        try
        {
            this->shim().RemoveMidrollBreak(*reinterpret_cast<const Windows::Media::Playback::MediaBreak *>(&mediaBreak));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MidrollBreaks(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Playback::MediaBreak>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MidrollBreaks());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PrerollBreak(abi_arg_in<Windows::Media::Playback::IMediaBreak> value) noexcept override
    {
        try
        {
            this->shim().PrerollBreak(*reinterpret_cast<const Windows::Media::Playback::MediaBreak *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrerollBreak(abi_arg_out<Windows::Media::Playback::IMediaBreak> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PrerollBreak());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PostrollBreak(abi_arg_in<Windows::Media::Playback::IMediaBreak> value) noexcept override
    {
        try
        {
            this->shim().PostrollBreak(*reinterpret_cast<const Windows::Media::Playback::MediaBreak *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PostrollBreak(abi_arg_out<Windows::Media::Playback::IMediaBreak> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PostrollBreak());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PlaybackItem(abi_arg_out<Windows::Media::Playback::IMediaPlaybackItem> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PlaybackItem());
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
struct produce<D, Windows::Media::Playback::IMediaBreakSeekedOverEventArgs> : produce_base<D, Windows::Media::Playback::IMediaBreakSeekedOverEventArgs>
{
    HRESULT __stdcall get_SeekedOverBreaks(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Playback::MediaBreak>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SeekedOverBreaks());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OldPosition(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OldPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NewPosition(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NewPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaBreakSkippedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaBreakSkippedEventArgs>
{
    HRESULT __stdcall get_MediaBreak(abi_arg_out<Windows::Media::Playback::IMediaBreak> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediaBreak());
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
struct produce<D, Windows::Media::Playback::IMediaBreakStartedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaBreakStartedEventArgs>
{
    HRESULT __stdcall get_MediaBreak(abi_arg_out<Windows::Media::Playback::IMediaBreak> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediaBreak());
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
struct produce<D, Windows::Media::Playback::IMediaEnginePlaybackSource> : produce_base<D, Windows::Media::Playback::IMediaEnginePlaybackSource>
{
    HRESULT __stdcall get_CurrentItem(abi_arg_out<Windows::Media::Playback::IMediaPlaybackItem> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CurrentItem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPlaybackSource(abi_arg_in<Windows::Media::Playback::IMediaPlaybackSource> source) noexcept override
    {
        try
        {
            this->shim().SetPlaybackSource(*reinterpret_cast<const Windows::Media::Playback::IMediaPlaybackSource *>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaItemDisplayProperties> : produce_base<D, Windows::Media::Playback::IMediaItemDisplayProperties>
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
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackCommandManager> : produce_base<D, Windows::Media::Playback::IMediaPlaybackCommandManager>
{
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

    HRESULT __stdcall get_MediaPlayer(abi_arg_out<Windows::Media::Playback::IMediaPlayer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediaPlayer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PlayBehavior(abi_arg_out<Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PlayBehavior());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PauseBehavior(abi_arg_out<Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PauseBehavior());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NextBehavior(abi_arg_out<Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NextBehavior());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreviousBehavior(abi_arg_out<Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PreviousBehavior());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FastForwardBehavior(abi_arg_out<Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FastForwardBehavior());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RewindBehavior(abi_arg_out<Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RewindBehavior());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShuffleBehavior(abi_arg_out<Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ShuffleBehavior());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoRepeatModeBehavior(abi_arg_out<Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AutoRepeatModeBehavior());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PositionBehavior(abi_arg_out<Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PositionBehavior());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RateBehavior(abi_arg_out<Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RateBehavior());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PlayReceived(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPlayReceivedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PlayReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPlayReceivedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PlayReceived(event_token token) noexcept override
    {
        try
        {
            this->shim().PlayReceived(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PauseReceived(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPauseReceivedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PauseReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPauseReceivedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PauseReceived(event_token token) noexcept override
    {
        try
        {
            this->shim().PauseReceived(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_NextReceived(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerNextReceivedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().NextReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerNextReceivedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_NextReceived(event_token token) noexcept override
    {
        try
        {
            this->shim().NextReceived(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PreviousReceived(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPreviousReceivedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PreviousReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPreviousReceivedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PreviousReceived(event_token token) noexcept override
    {
        try
        {
            this->shim().PreviousReceived(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_FastForwardReceived(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerFastForwardReceivedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().FastForwardReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerFastForwardReceivedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_FastForwardReceived(event_token token) noexcept override
    {
        try
        {
            this->shim().FastForwardReceived(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RewindReceived(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerRewindReceivedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().RewindReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerRewindReceivedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RewindReceived(event_token token) noexcept override
    {
        try
        {
            this->shim().RewindReceived(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ShuffleReceived(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerShuffleReceivedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ShuffleReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerShuffleReceivedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ShuffleReceived(event_token token) noexcept override
    {
        try
        {
            this->shim().ShuffleReceived(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AutoRepeatModeReceived(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().AutoRepeatModeReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AutoRepeatModeReceived(event_token token) noexcept override
    {
        try
        {
            this->shim().AutoRepeatModeReceived(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PositionReceived(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPositionReceivedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PositionReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPositionReceivedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PositionReceived(event_token token) noexcept override
    {
        try
        {
            this->shim().PositionReceived(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RateReceived(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerRateReceivedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().RateReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerRateReceivedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RateReceived(event_token token) noexcept override
    {
        try
        {
            this->shim().RateReceived(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs>
{
    HRESULT __stdcall get_Handled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept override
    {
        try
        {
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeferral());
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
struct produce<D, Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior> : produce_base<D, Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior>
{
    HRESULT __stdcall get_CommandManager(abi_arg_out<Windows::Media::Playback::IMediaPlaybackCommandManager> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CommandManager());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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

    HRESULT __stdcall get_EnablingRule(Windows::Media::Playback::MediaCommandEnablingRule * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EnablingRule());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EnablingRule(Windows::Media::Playback::MediaCommandEnablingRule value) noexcept override
    {
        try
        {
            this->shim().EnablingRule(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_IsEnabledChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().IsEnabledChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_IsEnabledChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().IsEnabledChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackCommandManagerFastForwardReceivedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlaybackCommandManagerFastForwardReceivedEventArgs>
{
    HRESULT __stdcall get_Handled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept override
    {
        try
        {
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeferral());
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
struct produce<D, Windows::Media::Playback::IMediaPlaybackCommandManagerNextReceivedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlaybackCommandManagerNextReceivedEventArgs>
{
    HRESULT __stdcall get_Handled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept override
    {
        try
        {
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeferral());
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
struct produce<D, Windows::Media::Playback::IMediaPlaybackCommandManagerPauseReceivedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlaybackCommandManagerPauseReceivedEventArgs>
{
    HRESULT __stdcall get_Handled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept override
    {
        try
        {
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeferral());
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
struct produce<D, Windows::Media::Playback::IMediaPlaybackCommandManagerPlayReceivedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlaybackCommandManagerPlayReceivedEventArgs>
{
    HRESULT __stdcall get_Handled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept override
    {
        try
        {
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeferral());
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
struct produce<D, Windows::Media::Playback::IMediaPlaybackCommandManagerPositionReceivedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlaybackCommandManagerPositionReceivedEventArgs>
{
    HRESULT __stdcall get_Handled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept override
    {
        try
        {
            this->shim().Handled(value);
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

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeferral());
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
struct produce<D, Windows::Media::Playback::IMediaPlaybackCommandManagerPreviousReceivedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlaybackCommandManagerPreviousReceivedEventArgs>
{
    HRESULT __stdcall get_Handled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept override
    {
        try
        {
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeferral());
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
struct produce<D, Windows::Media::Playback::IMediaPlaybackCommandManagerRateReceivedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlaybackCommandManagerRateReceivedEventArgs>
{
    HRESULT __stdcall get_Handled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept override
    {
        try
        {
            this->shim().Handled(value);
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

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeferral());
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
struct produce<D, Windows::Media::Playback::IMediaPlaybackCommandManagerRewindReceivedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlaybackCommandManagerRewindReceivedEventArgs>
{
    HRESULT __stdcall get_Handled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept override
    {
        try
        {
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeferral());
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
struct produce<D, Windows::Media::Playback::IMediaPlaybackCommandManagerShuffleReceivedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlaybackCommandManagerShuffleReceivedEventArgs>
{
    HRESULT __stdcall get_Handled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept override
    {
        try
        {
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsShuffleRequested(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsShuffleRequested());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeferral());
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
struct produce<D, Windows::Media::Playback::IMediaPlaybackItem> : produce_base<D, Windows::Media::Playback::IMediaPlaybackItem>
{
    HRESULT __stdcall add_AudioTracksChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().AudioTracksChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AudioTracksChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().AudioTracksChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_VideoTracksChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().VideoTracksChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_VideoTracksChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().VideoTracksChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TimedMetadataTracksChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().TimedMetadataTracksChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TimedMetadataTracksChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().TimedMetadataTracksChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(abi_arg_out<Windows::Media::Core::IMediaSource2> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioTracks(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Core::AudioTrack>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AudioTracks());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoTracks(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Core::VideoTrack>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoTracks());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TimedMetadataTracks(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Core::TimedMetadataTrack>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TimedMetadataTracks());
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
struct produce<D, Windows::Media::Playback::IMediaPlaybackItem2> : produce_base<D, Windows::Media::Playback::IMediaPlaybackItem2>
{
    HRESULT __stdcall get_BreakSchedule(abi_arg_out<Windows::Media::Playback::IMediaBreakSchedule> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BreakSchedule());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_DurationLimit(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DurationLimit());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanSkip(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanSkip());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanSkip(bool value) noexcept override
    {
        try
        {
            this->shim().CanSkip(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDisplayProperties(abi_arg_out<Windows::Media::Playback::IMediaItemDisplayProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDisplayProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ApplyDisplayProperties(abi_arg_in<Windows::Media::Playback::IMediaItemDisplayProperties> value) noexcept override
    {
        try
        {
            this->shim().ApplyDisplayProperties(*reinterpret_cast<const Windows::Media::Playback::MediaItemDisplayProperties *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackItemError> : produce_base<D, Windows::Media::Playback::IMediaPlaybackItemError>
{
    HRESULT __stdcall get_ErrorCode(Windows::Media::Playback::MediaPlaybackItemErrorCode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedError(HRESULT * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExtendedError());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackItemFactory> : produce_base<D, Windows::Media::Playback::IMediaPlaybackItemFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::Media::Core::IMediaSource2> source, abi_arg_out<Windows::Media::Playback::IMediaPlaybackItem> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Create(*reinterpret_cast<const Windows::Media::Core::MediaSource *>(&source)));
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
struct produce<D, Windows::Media::Playback::IMediaPlaybackItemFactory2> : produce_base<D, Windows::Media::Playback::IMediaPlaybackItemFactory2>
{
    HRESULT __stdcall abi_CreateWithStartTime(abi_arg_in<Windows::Media::Core::IMediaSource2> source, abi_arg_in<Windows::Foundation::TimeSpan> startTime, abi_arg_out<Windows::Media::Playback::IMediaPlaybackItem> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateWithStartTime(*reinterpret_cast<const Windows::Media::Core::MediaSource *>(&source), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&startTime)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithStartTimeAndDurationLimit(abi_arg_in<Windows::Media::Core::IMediaSource2> source, abi_arg_in<Windows::Foundation::TimeSpan> startTime, abi_arg_in<Windows::Foundation::TimeSpan> durationLimit, abi_arg_out<Windows::Media::Playback::IMediaPlaybackItem> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateWithStartTimeAndDurationLimit(*reinterpret_cast<const Windows::Media::Core::MediaSource *>(&source), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&startTime), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&durationLimit)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackItemFailedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlaybackItemFailedEventArgs>
{
    HRESULT __stdcall get_Item(abi_arg_out<Windows::Media::Playback::IMediaPlaybackItem> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Item());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Error(abi_arg_out<Windows::Media::Playback::IMediaPlaybackItemError> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Error());
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
struct produce<D, Windows::Media::Playback::IMediaPlaybackItemOpenedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlaybackItemOpenedEventArgs>
{
    HRESULT __stdcall get_Item(abi_arg_out<Windows::Media::Playback::IMediaPlaybackItem> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Item());
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
struct produce<D, Windows::Media::Playback::IMediaPlaybackItemStatics> : produce_base<D, Windows::Media::Playback::IMediaPlaybackItemStatics>
{
    HRESULT __stdcall abi_FindFromMediaSource(abi_arg_in<Windows::Media::Core::IMediaSource2> source, abi_arg_out<Windows::Media::Playback::IMediaPlaybackItem> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FindFromMediaSource(*reinterpret_cast<const Windows::Media::Core::MediaSource *>(&source)));
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
struct produce<D, Windows::Media::Playback::IMediaPlaybackList> : produce_base<D, Windows::Media::Playback::IMediaPlaybackList>
{
    HRESULT __stdcall add_ItemFailed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::MediaPlaybackItemFailedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ItemFailed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::MediaPlaybackItemFailedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ItemFailed(event_token token) noexcept override
    {
        try
        {
            this->shim().ItemFailed(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CurrentItemChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::CurrentMediaPlaybackItemChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().CurrentItemChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::CurrentMediaPlaybackItemChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CurrentItemChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().CurrentItemChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ItemOpened(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::MediaPlaybackItemOpenedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ItemOpened(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::MediaPlaybackItemOpenedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ItemOpened(event_token token) noexcept override
    {
        try
        {
            this->shim().ItemOpened(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Items(abi_arg_out<Windows::Foundation::Collections::IObservableVector<Windows::Media::Playback::MediaPlaybackItem>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Items());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoRepeatEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AutoRepeatEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AutoRepeatEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().AutoRepeatEnabled(value);
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

    HRESULT __stdcall get_CurrentItem(abi_arg_out<Windows::Media::Playback::IMediaPlaybackItem> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CurrentItem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentItemIndex(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CurrentItemIndex());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MoveNext(abi_arg_out<Windows::Media::Playback::IMediaPlaybackItem> item) noexcept override
    {
        try
        {
            *item = detach(this->shim().MoveNext());
            return S_OK;
        }
        catch (...)
        {
            *item = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MovePrevious(abi_arg_out<Windows::Media::Playback::IMediaPlaybackItem> item) noexcept override
    {
        try
        {
            *item = detach(this->shim().MovePrevious());
            return S_OK;
        }
        catch (...)
        {
            *item = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MoveTo(uint32_t itemIndex, abi_arg_out<Windows::Media::Playback::IMediaPlaybackItem> item) noexcept override
    {
        try
        {
            *item = detach(this->shim().MoveTo(itemIndex));
            return S_OK;
        }
        catch (...)
        {
            *item = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackList2> : produce_base<D, Windows::Media::Playback::IMediaPlaybackList2>
{
    HRESULT __stdcall get_MaxPrefetchTime(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxPrefetchTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxPrefetchTime(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            this->shim().MaxPrefetchTime(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StartingItem(abi_arg_out<Windows::Media::Playback::IMediaPlaybackItem> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StartingItem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StartingItem(abi_arg_in<Windows::Media::Playback::IMediaPlaybackItem> value) noexcept override
    {
        try
        {
            this->shim().StartingItem(*reinterpret_cast<const Windows::Media::Playback::MediaPlaybackItem *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShuffledItems(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Playback::MediaPlaybackItem>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ShuffledItems());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetShuffledItems(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Media::Playback::MediaPlaybackItem>> value) noexcept override
    {
        try
        {
            this->shim().SetShuffledItems(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Media::Playback::MediaPlaybackItem> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackSession> : produce_base<D, Windows::Media::Playback::IMediaPlaybackSession>
{
    HRESULT __stdcall add_PlaybackStateChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PlaybackStateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PlaybackStateChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().PlaybackStateChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PlaybackRateChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PlaybackRateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PlaybackRateChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().PlaybackRateChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SeekCompleted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().SeekCompleted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SeekCompleted(event_token token) noexcept override
    {
        try
        {
            this->shim().SeekCompleted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_BufferingStarted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().BufferingStarted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BufferingStarted(event_token token) noexcept override
    {
        try
        {
            this->shim().BufferingStarted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_BufferingEnded(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().BufferingEnded(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BufferingEnded(event_token token) noexcept override
    {
        try
        {
            this->shim().BufferingEnded(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_BufferingProgressChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().BufferingProgressChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BufferingProgressChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().BufferingProgressChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DownloadProgressChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().DownloadProgressChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DownloadProgressChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().DownloadProgressChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_NaturalDurationChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().NaturalDurationChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_NaturalDurationChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().NaturalDurationChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PositionChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PositionChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PositionChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().PositionChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_NaturalVideoSizeChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().NaturalVideoSizeChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_NaturalVideoSizeChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().NaturalVideoSizeChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaPlayer(abi_arg_out<Windows::Media::Playback::IMediaPlayer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediaPlayer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NaturalDuration(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NaturalDuration());
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

    HRESULT __stdcall get_PlaybackState(Windows::Media::Playback::MediaPlaybackState * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PlaybackState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanSeek(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanSeek());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanPause(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanPause());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsProtected(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsProtected());
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

    HRESULT __stdcall get_BufferingProgress(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BufferingProgress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DownloadProgress(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DownloadProgress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NaturalVideoHeight(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NaturalVideoHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NaturalVideoWidth(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NaturalVideoWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NormalizedSourceRect(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NormalizedSourceRect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NormalizedSourceRect(abi_arg_in<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            this->shim().NormalizedSourceRect(*reinterpret_cast<const Windows::Foundation::Rect *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StereoscopicVideoPackingMode(Windows::Media::MediaProperties::StereoscopicVideoPackingMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StereoscopicVideoPackingMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StereoscopicVideoPackingMode(Windows::Media::MediaProperties::StereoscopicVideoPackingMode value) noexcept override
    {
        try
        {
            this->shim().StereoscopicVideoPackingMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackSource> : produce_base<D, Windows::Media::Playback::IMediaPlaybackSource>
{};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList> : produce_base<D, Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList>
{
    HRESULT __stdcall add_PresentationModeChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList, Windows::Media::Playback::TimedMetadataPresentationModeChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PresentationModeChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList, Windows::Media::Playback::TimedMetadataPresentationModeChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PresentationModeChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().PresentationModeChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPresentationMode(uint32_t index, Windows::Media::Playback::TimedMetadataTrackPresentationMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetPresentationMode(index));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPresentationMode(uint32_t index, Windows::Media::Playback::TimedMetadataTrackPresentationMode value) noexcept override
    {
        try
        {
            this->shim().SetPresentationMode(index, value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlayer> : produce_base<D, Windows::Media::Playback::IMediaPlayer>
{
    HRESULT __stdcall get_AutoPlay(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AutoPlay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AutoPlay(bool value) noexcept override
    {
        try
        {
            this->shim().AutoPlay(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NaturalDuration(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NaturalDuration());
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

    HRESULT __stdcall get_BufferingProgress(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BufferingProgress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentState(Windows::Media::Playback::MediaPlayerState * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CurrentState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanSeek(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanSeek());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanPause(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanPause());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsLoopingEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsLoopingEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsLoopingEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsLoopingEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsProtected(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsProtected());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsMuted(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsMuted());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsMuted(bool value) noexcept override
    {
        try
        {
            this->shim().IsMuted(value);
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

    HRESULT __stdcall get_Volume(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Volume());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Volume(double value) noexcept override
    {
        try
        {
            this->shim().Volume(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PlaybackMediaMarkers(abi_arg_out<Windows::Media::Playback::IPlaybackMediaMarkerSequence> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PlaybackMediaMarkers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MediaOpened(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().MediaOpened(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MediaOpened(event_token token) noexcept override
    {
        try
        {
            this->shim().MediaOpened(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MediaEnded(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().MediaEnded(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MediaEnded(event_token token) noexcept override
    {
        try
        {
            this->shim().MediaEnded(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MediaFailed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::MediaPlayerFailedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().MediaFailed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::MediaPlayerFailedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MediaFailed(event_token token) noexcept override
    {
        try
        {
            this->shim().MediaFailed(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CurrentStateChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().CurrentStateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CurrentStateChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().CurrentStateChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PlaybackMediaMarkerReached(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::PlaybackMediaMarkerReachedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PlaybackMediaMarkerReached(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::PlaybackMediaMarkerReachedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PlaybackMediaMarkerReached(event_token token) noexcept override
    {
        try
        {
            this->shim().PlaybackMediaMarkerReached(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MediaPlayerRateChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::MediaPlayerRateChangedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().MediaPlayerRateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::MediaPlayerRateChangedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MediaPlayerRateChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().MediaPlayerRateChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_VolumeChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().VolumeChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_VolumeChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().VolumeChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SeekCompleted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().SeekCompleted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SeekCompleted(event_token token) noexcept override
    {
        try
        {
            this->shim().SeekCompleted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_BufferingStarted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().BufferingStarted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BufferingStarted(event_token token) noexcept override
    {
        try
        {
            this->shim().BufferingStarted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_BufferingEnded(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().BufferingEnded(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BufferingEnded(event_token token) noexcept override
    {
        try
        {
            this->shim().BufferingEnded(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Play() noexcept override
    {
        try
        {
            this->shim().Play();
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

    HRESULT __stdcall abi_SetUriSource(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().SetUriSource(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlayer2> : produce_base<D, Windows::Media::Playback::IMediaPlayer2>
{
    HRESULT __stdcall get_SystemMediaTransportControls(abi_arg_out<Windows::Media::ISystemMediaTransportControls> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SystemMediaTransportControls());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioCategory(Windows::Media::Playback::MediaPlayerAudioCategory * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AudioCategory());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AudioCategory(Windows::Media::Playback::MediaPlayerAudioCategory value) noexcept override
    {
        try
        {
            this->shim().AudioCategory(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioDeviceType(Windows::Media::Playback::MediaPlayerAudioDeviceType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AudioDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AudioDeviceType(Windows::Media::Playback::MediaPlayerAudioDeviceType value) noexcept override
    {
        try
        {
            this->shim().AudioDeviceType(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlayer3> : produce_base<D, Windows::Media::Playback::IMediaPlayer3>
{
    HRESULT __stdcall add_IsMutedChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().IsMutedChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_IsMutedChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().IsMutedChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SourceChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().SourceChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().SourceChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioBalance(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AudioBalance());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AudioBalance(double value) noexcept override
    {
        try
        {
            this->shim().AudioBalance(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RealTimePlayback(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RealTimePlayback());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RealTimePlayback(bool value) noexcept override
    {
        try
        {
            this->shim().RealTimePlayback(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StereoscopicVideoRenderMode(Windows::Media::Playback::StereoscopicVideoRenderMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StereoscopicVideoRenderMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StereoscopicVideoRenderMode(Windows::Media::Playback::StereoscopicVideoRenderMode value) noexcept override
    {
        try
        {
            this->shim().StereoscopicVideoRenderMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BreakManager(abi_arg_out<Windows::Media::Playback::IMediaBreakManager> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BreakManager());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CommandManager(abi_arg_out<Windows::Media::Playback::IMediaPlaybackCommandManager> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CommandManager());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioDevice(abi_arg_out<Windows::Devices::Enumeration::IDeviceInformation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AudioDevice());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AudioDevice(abi_arg_in<Windows::Devices::Enumeration::IDeviceInformation> value) noexcept override
    {
        try
        {
            this->shim().AudioDevice(*reinterpret_cast<const Windows::Devices::Enumeration::DeviceInformation *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TimelineController(abi_arg_out<Windows::Media::IMediaTimelineController> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TimelineController());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TimelineController(abi_arg_in<Windows::Media::IMediaTimelineController> value) noexcept override
    {
        try
        {
            this->shim().TimelineController(*reinterpret_cast<const Windows::Media::MediaTimelineController *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TimelineControllerPositionOffset(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TimelineControllerPositionOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TimelineControllerPositionOffset(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            this->shim().TimelineControllerPositionOffset(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PlaybackSession(abi_arg_out<Windows::Media::Playback::IMediaPlaybackSession> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PlaybackSession());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StepForwardOneFrame() noexcept override
    {
        try
        {
            this->shim().StepForwardOneFrame();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StepBackwardOneFrame() noexcept override
    {
        try
        {
            this->shim().StepBackwardOneFrame();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAsCastingSource(abi_arg_out<Windows::Media::Casting::ICastingSource> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetAsCastingSource());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlayer4> : produce_base<D, Windows::Media::Playback::IMediaPlayer4>
{
    HRESULT __stdcall abi_SetSurfaceSize(abi_arg_in<Windows::Foundation::Size> size) noexcept override
    {
        try
        {
            this->shim().SetSurfaceSize(*reinterpret_cast<const Windows::Foundation::Size *>(&size));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSurface(abi_arg_in<Windows::UI::Composition::ICompositor> compositor, abi_arg_out<Windows::Media::Playback::IMediaPlayerSurface> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetSurface(*reinterpret_cast<const Windows::UI::Composition::Compositor *>(&compositor)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlayerDataReceivedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlayerDataReceivedEventArgs>
{
    HRESULT __stdcall get_Data(abi_arg_out<Windows::Foundation::Collections::IPropertySet> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Data());
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
struct produce<D, Windows::Media::Playback::IMediaPlayerEffects> : produce_base<D, Windows::Media::Playback::IMediaPlayerEffects>
{
    HRESULT __stdcall abi_AddAudioEffect(abi_arg_in<hstring> activatableClassId, bool effectOptional, abi_arg_in<Windows::Foundation::Collections::IPropertySet> configuration) noexcept override
    {
        try
        {
            this->shim().AddAudioEffect(*reinterpret_cast<const hstring *>(&activatableClassId), effectOptional, *reinterpret_cast<const Windows::Foundation::Collections::IPropertySet *>(&configuration));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveAllEffects() noexcept override
    {
        try
        {
            this->shim().RemoveAllEffects();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlayerEffects2> : produce_base<D, Windows::Media::Playback::IMediaPlayerEffects2>
{
    HRESULT __stdcall abi_AddVideoEffect(abi_arg_in<hstring> activatableClassId, bool effectOptional, abi_arg_in<Windows::Foundation::Collections::IPropertySet> effectConfiguration) noexcept override
    {
        try
        {
            this->shim().AddVideoEffect(*reinterpret_cast<const hstring *>(&activatableClassId), effectOptional, *reinterpret_cast<const Windows::Foundation::Collections::IPropertySet *>(&effectConfiguration));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlayerFailedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlayerFailedEventArgs>
{
    HRESULT __stdcall get_Error(Windows::Media::Playback::MediaPlayerError * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Error());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedErrorCode(HRESULT * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExtendedErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorMessage(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ErrorMessage());
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
struct produce<D, Windows::Media::Playback::IMediaPlayerRateChangedEventArgs> : produce_base<D, Windows::Media::Playback::IMediaPlayerRateChangedEventArgs>
{
    HRESULT __stdcall get_NewRate(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NewRate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlayerSource> : produce_base<D, Windows::Media::Playback::IMediaPlayerSource>
{
    HRESULT __stdcall get_ProtectionManager(abi_arg_out<Windows::Media::Protection::IMediaProtectionManager> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProtectionManager());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ProtectionManager(abi_arg_in<Windows::Media::Protection::IMediaProtectionManager> value) noexcept override
    {
        try
        {
            this->shim().ProtectionManager(*reinterpret_cast<const Windows::Media::Protection::MediaProtectionManager *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetFileSource(abi_arg_in<Windows::Storage::IStorageFile> file) noexcept override
    {
        try
        {
            this->shim().SetFileSource(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetStreamSource(abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> stream) noexcept override
    {
        try
        {
            this->shim().SetStreamSource(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&stream));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetMediaSource(abi_arg_in<Windows::Media::Core::IMediaSource> source) noexcept override
    {
        try
        {
            this->shim().SetMediaSource(*reinterpret_cast<const Windows::Media::Core::IMediaSource *>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlayerSource2> : produce_base<D, Windows::Media::Playback::IMediaPlayerSource2>
{
    HRESULT __stdcall get_Source(abi_arg_out<Windows::Media::Playback::IMediaPlaybackSource> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(abi_arg_in<Windows::Media::Playback::IMediaPlaybackSource> value) noexcept override
    {
        try
        {
            this->shim().Source(*reinterpret_cast<const Windows::Media::Playback::IMediaPlaybackSource *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IMediaPlayerSurface> : produce_base<D, Windows::Media::Playback::IMediaPlayerSurface>
{
    HRESULT __stdcall get_CompositionSurface(abi_arg_out<Windows::UI::Composition::ICompositionSurface> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CompositionSurface());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Compositor(abi_arg_out<Windows::UI::Composition::ICompositor> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Compositor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaPlayer(abi_arg_out<Windows::Media::Playback::IMediaPlayer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediaPlayer());
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
struct produce<D, Windows::Media::Playback::IPlaybackMediaMarker> : produce_base<D, Windows::Media::Playback::IPlaybackMediaMarker>
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
struct produce<D, Windows::Media::Playback::IPlaybackMediaMarkerFactory> : produce_base<D, Windows::Media::Playback::IPlaybackMediaMarkerFactory>
{
    HRESULT __stdcall abi_CreateFromTime(abi_arg_in<Windows::Foundation::TimeSpan> value, abi_arg_out<Windows::Media::Playback::IPlaybackMediaMarker> marker) noexcept override
    {
        try
        {
            *marker = detach(this->shim().CreateFromTime(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *marker = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Create(abi_arg_in<Windows::Foundation::TimeSpan> value, abi_arg_in<hstring> mediaMarketType, abi_arg_in<hstring> text, abi_arg_out<Windows::Media::Playback::IPlaybackMediaMarker> marker) noexcept override
    {
        try
        {
            *marker = detach(this->shim().Create(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value), *reinterpret_cast<const hstring *>(&mediaMarketType), *reinterpret_cast<const hstring *>(&text)));
            return S_OK;
        }
        catch (...)
        {
            *marker = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::IPlaybackMediaMarkerReachedEventArgs> : produce_base<D, Windows::Media::Playback::IPlaybackMediaMarkerReachedEventArgs>
{
    HRESULT __stdcall get_PlaybackMediaMarker(abi_arg_out<Windows::Media::Playback::IPlaybackMediaMarker> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PlaybackMediaMarker());
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
struct produce<D, Windows::Media::Playback::IPlaybackMediaMarkerSequence> : produce_base<D, Windows::Media::Playback::IPlaybackMediaMarkerSequence>
{
    HRESULT __stdcall get_Size(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Insert(abi_arg_in<Windows::Media::Playback::IPlaybackMediaMarker> value) noexcept override
    {
        try
        {
            this->shim().Insert(*reinterpret_cast<const Windows::Media::Playback::PlaybackMediaMarker *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Clear() noexcept override
    {
        try
        {
            this->shim().Clear();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Playback::ITimedMetadataPresentationModeChangedEventArgs> : produce_base<D, Windows::Media::Playback::ITimedMetadataPresentationModeChangedEventArgs>
{
    HRESULT __stdcall get_Track(abi_arg_out<Windows::Media::Core::ITimedMetadataTrack> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Track());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OldPresentationMode(Windows::Media::Playback::TimedMetadataTrackPresentationMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OldPresentationMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NewPresentationMode(Windows::Media::Playback::TimedMetadataTrackPresentationMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NewPresentationMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Media::Playback {

template <typename D> Windows::Foundation::TimeSpan impl_IPlaybackMediaMarker<D>::Time() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IPlaybackMediaMarker &>(static_cast<const D &>(*this))->get_Time(put(value)));
    return value;
}

template <typename D> hstring impl_IPlaybackMediaMarker<D>::MediaMarkerType() const
{
    hstring value;
    check_hresult(static_cast<const IPlaybackMediaMarker &>(static_cast<const D &>(*this))->get_MediaMarkerType(put(value)));
    return value;
}

template <typename D> hstring impl_IPlaybackMediaMarker<D>::Text() const
{
    hstring value;
    check_hresult(static_cast<const IPlaybackMediaMarker &>(static_cast<const D &>(*this))->get_Text(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::PlaybackMediaMarker impl_IPlaybackMediaMarkerFactory<D>::CreateFromTime(const Windows::Foundation::TimeSpan & value) const
{
    Windows::Media::Playback::PlaybackMediaMarker marker { nullptr };
    check_hresult(static_cast<const IPlaybackMediaMarkerFactory &>(static_cast<const D &>(*this))->abi_CreateFromTime(get(value), put(marker)));
    return marker;
}

template <typename D> Windows::Media::Playback::PlaybackMediaMarker impl_IPlaybackMediaMarkerFactory<D>::Create(const Windows::Foundation::TimeSpan & value, hstring_ref mediaMarketType, hstring_ref text) const
{
    Windows::Media::Playback::PlaybackMediaMarker marker { nullptr };
    check_hresult(static_cast<const IPlaybackMediaMarkerFactory &>(static_cast<const D &>(*this))->abi_Create(get(value), get(mediaMarketType), get(text), put(marker)));
    return marker;
}

template <typename D> uint32_t impl_IPlaybackMediaMarkerSequence<D>::Size() const
{
    uint32_t value {};
    check_hresult(static_cast<const IPlaybackMediaMarkerSequence &>(static_cast<const D &>(*this))->get_Size(&value));
    return value;
}

template <typename D> void impl_IPlaybackMediaMarkerSequence<D>::Insert(const Windows::Media::Playback::PlaybackMediaMarker & value) const
{
    check_hresult(static_cast<const IPlaybackMediaMarkerSequence &>(static_cast<const D &>(*this))->abi_Insert(get(value)));
}

template <typename D> void impl_IPlaybackMediaMarkerSequence<D>::Clear() const
{
    check_hresult(static_cast<const IPlaybackMediaMarkerSequence &>(static_cast<const D &>(*this))->abi_Clear());
}

template <typename D> Windows::Media::Playback::MediaPlayerError impl_IMediaPlayerFailedEventArgs<D>::Error() const
{
    Windows::Media::Playback::MediaPlayerError value {};
    check_hresult(static_cast<const IMediaPlayerFailedEventArgs &>(static_cast<const D &>(*this))->get_Error(&value));
    return value;
}

template <typename D> HRESULT impl_IMediaPlayerFailedEventArgs<D>::ExtendedErrorCode() const
{
    HRESULT value {};
    check_hresult(static_cast<const IMediaPlayerFailedEventArgs &>(static_cast<const D &>(*this))->get_ExtendedErrorCode(&value));
    return value;
}

template <typename D> hstring impl_IMediaPlayerFailedEventArgs<D>::ErrorMessage() const
{
    hstring value;
    check_hresult(static_cast<const IMediaPlayerFailedEventArgs &>(static_cast<const D &>(*this))->get_ErrorMessage(put(value)));
    return value;
}

template <typename D> double impl_IMediaPlayerRateChangedEventArgs<D>::NewRate() const
{
    double value {};
    check_hresult(static_cast<const IMediaPlayerRateChangedEventArgs &>(static_cast<const D &>(*this))->get_NewRate(&value));
    return value;
}

template <typename D> Windows::Media::Playback::PlaybackMediaMarker impl_IPlaybackMediaMarkerReachedEventArgs<D>::PlaybackMediaMarker() const
{
    Windows::Media::Playback::PlaybackMediaMarker value { nullptr };
    check_hresult(static_cast<const IPlaybackMediaMarkerReachedEventArgs &>(static_cast<const D &>(*this))->get_PlaybackMediaMarker(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::ValueSet impl_IMediaPlayerDataReceivedEventArgs<D>::Data() const
{
    Windows::Foundation::Collections::ValueSet value { nullptr };
    check_hresult(static_cast<const IMediaPlayerDataReceivedEventArgs &>(static_cast<const D &>(*this))->get_Data(put(value)));
    return value;
}

template <typename D> bool impl_IMediaPlayer<D>::AutoPlay() const
{
    bool value {};
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->get_AutoPlay(&value));
    return value;
}

template <typename D> void impl_IMediaPlayer<D>::AutoPlay(bool value) const
{
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->put_AutoPlay(value));
}

template <typename D> Windows::Foundation::TimeSpan impl_IMediaPlayer<D>::NaturalDuration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->get_NaturalDuration(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IMediaPlayer<D>::Position() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> void impl_IMediaPlayer<D>::Position(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->put_Position(get(value)));
}

template <typename D> double impl_IMediaPlayer<D>::BufferingProgress() const
{
    double value {};
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->get_BufferingProgress(&value));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlayerState impl_IMediaPlayer<D>::CurrentState() const
{
    Windows::Media::Playback::MediaPlayerState value {};
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->get_CurrentState(&value));
    return value;
}

template <typename D> bool impl_IMediaPlayer<D>::CanSeek() const
{
    bool value {};
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->get_CanSeek(&value));
    return value;
}

template <typename D> bool impl_IMediaPlayer<D>::CanPause() const
{
    bool value {};
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->get_CanPause(&value));
    return value;
}

template <typename D> bool impl_IMediaPlayer<D>::IsLoopingEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->get_IsLoopingEnabled(&value));
    return value;
}

template <typename D> void impl_IMediaPlayer<D>::IsLoopingEnabled(bool value) const
{
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->put_IsLoopingEnabled(value));
}

template <typename D> bool impl_IMediaPlayer<D>::IsProtected() const
{
    bool value {};
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->get_IsProtected(&value));
    return value;
}

template <typename D> bool impl_IMediaPlayer<D>::IsMuted() const
{
    bool value {};
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->get_IsMuted(&value));
    return value;
}

template <typename D> void impl_IMediaPlayer<D>::IsMuted(bool value) const
{
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->put_IsMuted(value));
}

template <typename D> double impl_IMediaPlayer<D>::PlaybackRate() const
{
    double value {};
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->get_PlaybackRate(&value));
    return value;
}

template <typename D> void impl_IMediaPlayer<D>::PlaybackRate(double value) const
{
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->put_PlaybackRate(value));
}

template <typename D> double impl_IMediaPlayer<D>::Volume() const
{
    double value {};
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->get_Volume(&value));
    return value;
}

template <typename D> void impl_IMediaPlayer<D>::Volume(double value) const
{
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->put_Volume(value));
}

template <typename D> Windows::Media::Playback::PlaybackMediaMarkerSequence impl_IMediaPlayer<D>::PlaybackMediaMarkers() const
{
    Windows::Media::Playback::PlaybackMediaMarkerSequence value { nullptr };
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->get_PlaybackMediaMarkers(put(value)));
    return value;
}

template <typename D> event_token impl_IMediaPlayer<D>::MediaOpened(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->add_MediaOpened(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlayer> impl_IMediaPlayer<D>::MediaOpened(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IMediaPlayer>(this, &ABI::Windows::Media::Playback::IMediaPlayer::remove_MediaOpened, MediaOpened(value));
}

template <typename D> void impl_IMediaPlayer<D>::MediaOpened(event_token token) const
{
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->remove_MediaOpened(token));
}

template <typename D> event_token impl_IMediaPlayer<D>::MediaEnded(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->add_MediaEnded(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlayer> impl_IMediaPlayer<D>::MediaEnded(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IMediaPlayer>(this, &ABI::Windows::Media::Playback::IMediaPlayer::remove_MediaEnded, MediaEnded(value));
}

template <typename D> void impl_IMediaPlayer<D>::MediaEnded(event_token token) const
{
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->remove_MediaEnded(token));
}

template <typename D> event_token impl_IMediaPlayer<D>::MediaFailed(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::MediaPlayerFailedEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->add_MediaFailed(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlayer> impl_IMediaPlayer<D>::MediaFailed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::MediaPlayerFailedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IMediaPlayer>(this, &ABI::Windows::Media::Playback::IMediaPlayer::remove_MediaFailed, MediaFailed(value));
}

template <typename D> void impl_IMediaPlayer<D>::MediaFailed(event_token token) const
{
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->remove_MediaFailed(token));
}

template <typename D> event_token impl_IMediaPlayer<D>::CurrentStateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->add_CurrentStateChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlayer> impl_IMediaPlayer<D>::CurrentStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IMediaPlayer>(this, &ABI::Windows::Media::Playback::IMediaPlayer::remove_CurrentStateChanged, CurrentStateChanged(value));
}

template <typename D> void impl_IMediaPlayer<D>::CurrentStateChanged(event_token token) const
{
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->remove_CurrentStateChanged(token));
}

template <typename D> event_token impl_IMediaPlayer<D>::PlaybackMediaMarkerReached(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::PlaybackMediaMarkerReachedEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->add_PlaybackMediaMarkerReached(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlayer> impl_IMediaPlayer<D>::PlaybackMediaMarkerReached(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::PlaybackMediaMarkerReachedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IMediaPlayer>(this, &ABI::Windows::Media::Playback::IMediaPlayer::remove_PlaybackMediaMarkerReached, PlaybackMediaMarkerReached(value));
}

template <typename D> void impl_IMediaPlayer<D>::PlaybackMediaMarkerReached(event_token token) const
{
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->remove_PlaybackMediaMarkerReached(token));
}

template <typename D> event_token impl_IMediaPlayer<D>::MediaPlayerRateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::MediaPlayerRateChangedEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->add_MediaPlayerRateChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlayer> impl_IMediaPlayer<D>::MediaPlayerRateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::MediaPlayerRateChangedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IMediaPlayer>(this, &ABI::Windows::Media::Playback::IMediaPlayer::remove_MediaPlayerRateChanged, MediaPlayerRateChanged(value));
}

template <typename D> void impl_IMediaPlayer<D>::MediaPlayerRateChanged(event_token token) const
{
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->remove_MediaPlayerRateChanged(token));
}

template <typename D> event_token impl_IMediaPlayer<D>::VolumeChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->add_VolumeChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlayer> impl_IMediaPlayer<D>::VolumeChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IMediaPlayer>(this, &ABI::Windows::Media::Playback::IMediaPlayer::remove_VolumeChanged, VolumeChanged(value));
}

template <typename D> void impl_IMediaPlayer<D>::VolumeChanged(event_token token) const
{
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->remove_VolumeChanged(token));
}

template <typename D> event_token impl_IMediaPlayer<D>::SeekCompleted(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->add_SeekCompleted(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlayer> impl_IMediaPlayer<D>::SeekCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IMediaPlayer>(this, &ABI::Windows::Media::Playback::IMediaPlayer::remove_SeekCompleted, SeekCompleted(value));
}

template <typename D> void impl_IMediaPlayer<D>::SeekCompleted(event_token token) const
{
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->remove_SeekCompleted(token));
}

template <typename D> event_token impl_IMediaPlayer<D>::BufferingStarted(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->add_BufferingStarted(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlayer> impl_IMediaPlayer<D>::BufferingStarted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IMediaPlayer>(this, &ABI::Windows::Media::Playback::IMediaPlayer::remove_BufferingStarted, BufferingStarted(value));
}

template <typename D> void impl_IMediaPlayer<D>::BufferingStarted(event_token token) const
{
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->remove_BufferingStarted(token));
}

template <typename D> event_token impl_IMediaPlayer<D>::BufferingEnded(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->add_BufferingEnded(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlayer> impl_IMediaPlayer<D>::BufferingEnded(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IMediaPlayer>(this, &ABI::Windows::Media::Playback::IMediaPlayer::remove_BufferingEnded, BufferingEnded(value));
}

template <typename D> void impl_IMediaPlayer<D>::BufferingEnded(event_token token) const
{
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->remove_BufferingEnded(token));
}

template <typename D> void impl_IMediaPlayer<D>::Play() const
{
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->abi_Play());
}

template <typename D> void impl_IMediaPlayer<D>::Pause() const
{
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->abi_Pause());
}

template <typename D> void impl_IMediaPlayer<D>::SetUriSource(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const IMediaPlayer &>(static_cast<const D &>(*this))->abi_SetUriSource(get(value)));
}

template <typename D> Windows::Media::SystemMediaTransportControls impl_IMediaPlayer2<D>::SystemMediaTransportControls() const
{
    Windows::Media::SystemMediaTransportControls value { nullptr };
    check_hresult(static_cast<const IMediaPlayer2 &>(static_cast<const D &>(*this))->get_SystemMediaTransportControls(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlayerAudioCategory impl_IMediaPlayer2<D>::AudioCategory() const
{
    Windows::Media::Playback::MediaPlayerAudioCategory value {};
    check_hresult(static_cast<const IMediaPlayer2 &>(static_cast<const D &>(*this))->get_AudioCategory(&value));
    return value;
}

template <typename D> void impl_IMediaPlayer2<D>::AudioCategory(Windows::Media::Playback::MediaPlayerAudioCategory value) const
{
    check_hresult(static_cast<const IMediaPlayer2 &>(static_cast<const D &>(*this))->put_AudioCategory(value));
}

template <typename D> Windows::Media::Playback::MediaPlayerAudioDeviceType impl_IMediaPlayer2<D>::AudioDeviceType() const
{
    Windows::Media::Playback::MediaPlayerAudioDeviceType value {};
    check_hresult(static_cast<const IMediaPlayer2 &>(static_cast<const D &>(*this))->get_AudioDeviceType(&value));
    return value;
}

template <typename D> void impl_IMediaPlayer2<D>::AudioDeviceType(Windows::Media::Playback::MediaPlayerAudioDeviceType value) const
{
    check_hresult(static_cast<const IMediaPlayer2 &>(static_cast<const D &>(*this))->put_AudioDeviceType(value));
}

template <typename D> event_token impl_IMediaPlayer3<D>::IsMutedChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlayer3 &>(static_cast<const D &>(*this))->add_IsMutedChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlayer3> impl_IMediaPlayer3<D>::IsMutedChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IMediaPlayer3>(this, &ABI::Windows::Media::Playback::IMediaPlayer3::remove_IsMutedChanged, IsMutedChanged(value));
}

template <typename D> void impl_IMediaPlayer3<D>::IsMutedChanged(event_token token) const
{
    check_hresult(static_cast<const IMediaPlayer3 &>(static_cast<const D &>(*this))->remove_IsMutedChanged(token));
}

template <typename D> event_token impl_IMediaPlayer3<D>::SourceChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlayer3 &>(static_cast<const D &>(*this))->add_SourceChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlayer3> impl_IMediaPlayer3<D>::SourceChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IMediaPlayer3>(this, &ABI::Windows::Media::Playback::IMediaPlayer3::remove_SourceChanged, SourceChanged(value));
}

template <typename D> void impl_IMediaPlayer3<D>::SourceChanged(event_token token) const
{
    check_hresult(static_cast<const IMediaPlayer3 &>(static_cast<const D &>(*this))->remove_SourceChanged(token));
}

template <typename D> double impl_IMediaPlayer3<D>::AudioBalance() const
{
    double value {};
    check_hresult(static_cast<const IMediaPlayer3 &>(static_cast<const D &>(*this))->get_AudioBalance(&value));
    return value;
}

template <typename D> void impl_IMediaPlayer3<D>::AudioBalance(double value) const
{
    check_hresult(static_cast<const IMediaPlayer3 &>(static_cast<const D &>(*this))->put_AudioBalance(value));
}

template <typename D> bool impl_IMediaPlayer3<D>::RealTimePlayback() const
{
    bool value {};
    check_hresult(static_cast<const IMediaPlayer3 &>(static_cast<const D &>(*this))->get_RealTimePlayback(&value));
    return value;
}

template <typename D> void impl_IMediaPlayer3<D>::RealTimePlayback(bool value) const
{
    check_hresult(static_cast<const IMediaPlayer3 &>(static_cast<const D &>(*this))->put_RealTimePlayback(value));
}

template <typename D> Windows::Media::Playback::StereoscopicVideoRenderMode impl_IMediaPlayer3<D>::StereoscopicVideoRenderMode() const
{
    Windows::Media::Playback::StereoscopicVideoRenderMode value {};
    check_hresult(static_cast<const IMediaPlayer3 &>(static_cast<const D &>(*this))->get_StereoscopicVideoRenderMode(&value));
    return value;
}

template <typename D> void impl_IMediaPlayer3<D>::StereoscopicVideoRenderMode(Windows::Media::Playback::StereoscopicVideoRenderMode value) const
{
    check_hresult(static_cast<const IMediaPlayer3 &>(static_cast<const D &>(*this))->put_StereoscopicVideoRenderMode(value));
}

template <typename D> Windows::Media::Playback::MediaBreakManager impl_IMediaPlayer3<D>::BreakManager() const
{
    Windows::Media::Playback::MediaBreakManager value { nullptr };
    check_hresult(static_cast<const IMediaPlayer3 &>(static_cast<const D &>(*this))->get_BreakManager(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackCommandManager impl_IMediaPlayer3<D>::CommandManager() const
{
    Windows::Media::Playback::MediaPlaybackCommandManager value { nullptr };
    check_hresult(static_cast<const IMediaPlayer3 &>(static_cast<const D &>(*this))->get_CommandManager(put(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceInformation impl_IMediaPlayer3<D>::AudioDevice() const
{
    Windows::Devices::Enumeration::DeviceInformation value { nullptr };
    check_hresult(static_cast<const IMediaPlayer3 &>(static_cast<const D &>(*this))->get_AudioDevice(put(value)));
    return value;
}

template <typename D> void impl_IMediaPlayer3<D>::AudioDevice(const Windows::Devices::Enumeration::DeviceInformation & value) const
{
    check_hresult(static_cast<const IMediaPlayer3 &>(static_cast<const D &>(*this))->put_AudioDevice(get(value)));
}

template <typename D> Windows::Media::MediaTimelineController impl_IMediaPlayer3<D>::TimelineController() const
{
    Windows::Media::MediaTimelineController value { nullptr };
    check_hresult(static_cast<const IMediaPlayer3 &>(static_cast<const D &>(*this))->get_TimelineController(put(value)));
    return value;
}

template <typename D> void impl_IMediaPlayer3<D>::TimelineController(const Windows::Media::MediaTimelineController & value) const
{
    check_hresult(static_cast<const IMediaPlayer3 &>(static_cast<const D &>(*this))->put_TimelineController(get(value)));
}

template <typename D> Windows::Foundation::TimeSpan impl_IMediaPlayer3<D>::TimelineControllerPositionOffset() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IMediaPlayer3 &>(static_cast<const D &>(*this))->get_TimelineControllerPositionOffset(put(value)));
    return value;
}

template <typename D> void impl_IMediaPlayer3<D>::TimelineControllerPositionOffset(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const IMediaPlayer3 &>(static_cast<const D &>(*this))->put_TimelineControllerPositionOffset(get(value)));
}

template <typename D> Windows::Media::Playback::MediaPlaybackSession impl_IMediaPlayer3<D>::PlaybackSession() const
{
    Windows::Media::Playback::MediaPlaybackSession value { nullptr };
    check_hresult(static_cast<const IMediaPlayer3 &>(static_cast<const D &>(*this))->get_PlaybackSession(put(value)));
    return value;
}

template <typename D> void impl_IMediaPlayer3<D>::StepForwardOneFrame() const
{
    check_hresult(static_cast<const IMediaPlayer3 &>(static_cast<const D &>(*this))->abi_StepForwardOneFrame());
}

template <typename D> void impl_IMediaPlayer3<D>::StepBackwardOneFrame() const
{
    check_hresult(static_cast<const IMediaPlayer3 &>(static_cast<const D &>(*this))->abi_StepBackwardOneFrame());
}

template <typename D> Windows::Media::Casting::CastingSource impl_IMediaPlayer3<D>::GetAsCastingSource() const
{
    Windows::Media::Casting::CastingSource returnValue { nullptr };
    check_hresult(static_cast<const IMediaPlayer3 &>(static_cast<const D &>(*this))->abi_GetAsCastingSource(put(returnValue)));
    return returnValue;
}

template <typename D> void impl_IMediaPlayer4<D>::SetSurfaceSize(const Windows::Foundation::Size & size) const
{
    check_hresult(static_cast<const IMediaPlayer4 &>(static_cast<const D &>(*this))->abi_SetSurfaceSize(get(size)));
}

template <typename D> Windows::Media::Playback::MediaPlayerSurface impl_IMediaPlayer4<D>::GetSurface(const Windows::UI::Composition::Compositor & compositor) const
{
    Windows::Media::Playback::MediaPlayerSurface result { nullptr };
    check_hresult(static_cast<const IMediaPlayer4 &>(static_cast<const D &>(*this))->abi_GetSurface(get(compositor), put(result)));
    return result;
}

template <typename D> event_token impl_IMediaPlaybackSession<D>::PlaybackStateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->add_PlaybackStateChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlaybackSession> impl_IMediaPlaybackSession<D>::PlaybackStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IMediaPlaybackSession>(this, &ABI::Windows::Media::Playback::IMediaPlaybackSession::remove_PlaybackStateChanged, PlaybackStateChanged(value));
}

template <typename D> void impl_IMediaPlaybackSession<D>::PlaybackStateChanged(event_token token) const
{
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->remove_PlaybackStateChanged(token));
}

template <typename D> event_token impl_IMediaPlaybackSession<D>::PlaybackRateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->add_PlaybackRateChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlaybackSession> impl_IMediaPlaybackSession<D>::PlaybackRateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IMediaPlaybackSession>(this, &ABI::Windows::Media::Playback::IMediaPlaybackSession::remove_PlaybackRateChanged, PlaybackRateChanged(value));
}

template <typename D> void impl_IMediaPlaybackSession<D>::PlaybackRateChanged(event_token token) const
{
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->remove_PlaybackRateChanged(token));
}

template <typename D> event_token impl_IMediaPlaybackSession<D>::SeekCompleted(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->add_SeekCompleted(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlaybackSession> impl_IMediaPlaybackSession<D>::SeekCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IMediaPlaybackSession>(this, &ABI::Windows::Media::Playback::IMediaPlaybackSession::remove_SeekCompleted, SeekCompleted(value));
}

template <typename D> void impl_IMediaPlaybackSession<D>::SeekCompleted(event_token token) const
{
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->remove_SeekCompleted(token));
}

template <typename D> event_token impl_IMediaPlaybackSession<D>::BufferingStarted(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->add_BufferingStarted(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlaybackSession> impl_IMediaPlaybackSession<D>::BufferingStarted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IMediaPlaybackSession>(this, &ABI::Windows::Media::Playback::IMediaPlaybackSession::remove_BufferingStarted, BufferingStarted(value));
}

template <typename D> void impl_IMediaPlaybackSession<D>::BufferingStarted(event_token token) const
{
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->remove_BufferingStarted(token));
}

template <typename D> event_token impl_IMediaPlaybackSession<D>::BufferingEnded(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->add_BufferingEnded(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlaybackSession> impl_IMediaPlaybackSession<D>::BufferingEnded(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IMediaPlaybackSession>(this, &ABI::Windows::Media::Playback::IMediaPlaybackSession::remove_BufferingEnded, BufferingEnded(value));
}

template <typename D> void impl_IMediaPlaybackSession<D>::BufferingEnded(event_token token) const
{
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->remove_BufferingEnded(token));
}

template <typename D> event_token impl_IMediaPlaybackSession<D>::BufferingProgressChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->add_BufferingProgressChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlaybackSession> impl_IMediaPlaybackSession<D>::BufferingProgressChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IMediaPlaybackSession>(this, &ABI::Windows::Media::Playback::IMediaPlaybackSession::remove_BufferingProgressChanged, BufferingProgressChanged(value));
}

template <typename D> void impl_IMediaPlaybackSession<D>::BufferingProgressChanged(event_token token) const
{
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->remove_BufferingProgressChanged(token));
}

template <typename D> event_token impl_IMediaPlaybackSession<D>::DownloadProgressChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->add_DownloadProgressChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlaybackSession> impl_IMediaPlaybackSession<D>::DownloadProgressChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IMediaPlaybackSession>(this, &ABI::Windows::Media::Playback::IMediaPlaybackSession::remove_DownloadProgressChanged, DownloadProgressChanged(value));
}

template <typename D> void impl_IMediaPlaybackSession<D>::DownloadProgressChanged(event_token token) const
{
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->remove_DownloadProgressChanged(token));
}

template <typename D> event_token impl_IMediaPlaybackSession<D>::NaturalDurationChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->add_NaturalDurationChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlaybackSession> impl_IMediaPlaybackSession<D>::NaturalDurationChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IMediaPlaybackSession>(this, &ABI::Windows::Media::Playback::IMediaPlaybackSession::remove_NaturalDurationChanged, NaturalDurationChanged(value));
}

template <typename D> void impl_IMediaPlaybackSession<D>::NaturalDurationChanged(event_token token) const
{
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->remove_NaturalDurationChanged(token));
}

template <typename D> event_token impl_IMediaPlaybackSession<D>::PositionChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->add_PositionChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlaybackSession> impl_IMediaPlaybackSession<D>::PositionChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IMediaPlaybackSession>(this, &ABI::Windows::Media::Playback::IMediaPlaybackSession::remove_PositionChanged, PositionChanged(value));
}

template <typename D> void impl_IMediaPlaybackSession<D>::PositionChanged(event_token token) const
{
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->remove_PositionChanged(token));
}

template <typename D> event_token impl_IMediaPlaybackSession<D>::NaturalVideoSizeChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->add_NaturalVideoSizeChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlaybackSession> impl_IMediaPlaybackSession<D>::NaturalVideoSizeChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IMediaPlaybackSession>(this, &ABI::Windows::Media::Playback::IMediaPlaybackSession::remove_NaturalVideoSizeChanged, NaturalVideoSizeChanged(value));
}

template <typename D> void impl_IMediaPlaybackSession<D>::NaturalVideoSizeChanged(event_token token) const
{
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->remove_NaturalVideoSizeChanged(token));
}

template <typename D> Windows::Media::Playback::MediaPlayer impl_IMediaPlaybackSession<D>::MediaPlayer() const
{
    Windows::Media::Playback::MediaPlayer value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->get_MediaPlayer(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IMediaPlaybackSession<D>::NaturalDuration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->get_NaturalDuration(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IMediaPlaybackSession<D>::Position() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> void impl_IMediaPlaybackSession<D>::Position(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->put_Position(get(value)));
}

template <typename D> Windows::Media::Playback::MediaPlaybackState impl_IMediaPlaybackSession<D>::PlaybackState() const
{
    Windows::Media::Playback::MediaPlaybackState value {};
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->get_PlaybackState(&value));
    return value;
}

template <typename D> bool impl_IMediaPlaybackSession<D>::CanSeek() const
{
    bool value {};
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->get_CanSeek(&value));
    return value;
}

template <typename D> bool impl_IMediaPlaybackSession<D>::CanPause() const
{
    bool value {};
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->get_CanPause(&value));
    return value;
}

template <typename D> bool impl_IMediaPlaybackSession<D>::IsProtected() const
{
    bool value {};
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->get_IsProtected(&value));
    return value;
}

template <typename D> double impl_IMediaPlaybackSession<D>::PlaybackRate() const
{
    double value {};
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->get_PlaybackRate(&value));
    return value;
}

template <typename D> void impl_IMediaPlaybackSession<D>::PlaybackRate(double value) const
{
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->put_PlaybackRate(value));
}

template <typename D> double impl_IMediaPlaybackSession<D>::BufferingProgress() const
{
    double value {};
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->get_BufferingProgress(&value));
    return value;
}

template <typename D> double impl_IMediaPlaybackSession<D>::DownloadProgress() const
{
    double value {};
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->get_DownloadProgress(&value));
    return value;
}

template <typename D> uint32_t impl_IMediaPlaybackSession<D>::NaturalVideoHeight() const
{
    uint32_t value {};
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->get_NaturalVideoHeight(&value));
    return value;
}

template <typename D> uint32_t impl_IMediaPlaybackSession<D>::NaturalVideoWidth() const
{
    uint32_t value {};
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->get_NaturalVideoWidth(&value));
    return value;
}

template <typename D> Windows::Foundation::Rect impl_IMediaPlaybackSession<D>::NormalizedSourceRect() const
{
    Windows::Foundation::Rect value {};
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->get_NormalizedSourceRect(put(value)));
    return value;
}

template <typename D> void impl_IMediaPlaybackSession<D>::NormalizedSourceRect(const Windows::Foundation::Rect & value) const
{
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->put_NormalizedSourceRect(get(value)));
}

template <typename D> Windows::Media::MediaProperties::StereoscopicVideoPackingMode impl_IMediaPlaybackSession<D>::StereoscopicVideoPackingMode() const
{
    Windows::Media::MediaProperties::StereoscopicVideoPackingMode value {};
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->get_StereoscopicVideoPackingMode(&value));
    return value;
}

template <typename D> void impl_IMediaPlaybackSession<D>::StereoscopicVideoPackingMode(Windows::Media::MediaProperties::StereoscopicVideoPackingMode value) const
{
    check_hresult(static_cast<const IMediaPlaybackSession &>(static_cast<const D &>(*this))->put_StereoscopicVideoPackingMode(value));
}

template <typename D> Windows::Media::Protection::MediaProtectionManager impl_IMediaPlayerSource<D>::ProtectionManager() const
{
    Windows::Media::Protection::MediaProtectionManager value { nullptr };
    check_hresult(static_cast<const IMediaPlayerSource &>(static_cast<const D &>(*this))->get_ProtectionManager(put(value)));
    return value;
}

template <typename D> void impl_IMediaPlayerSource<D>::ProtectionManager(const Windows::Media::Protection::MediaProtectionManager & value) const
{
    check_hresult(static_cast<const IMediaPlayerSource &>(static_cast<const D &>(*this))->put_ProtectionManager(get(value)));
}

template <typename D> void impl_IMediaPlayerSource<D>::SetFileSource(const Windows::Storage::IStorageFile & file) const
{
    check_hresult(static_cast<const IMediaPlayerSource &>(static_cast<const D &>(*this))->abi_SetFileSource(get(file)));
}

template <typename D> void impl_IMediaPlayerSource<D>::SetStreamSource(const Windows::Storage::Streams::IRandomAccessStream & stream) const
{
    check_hresult(static_cast<const IMediaPlayerSource &>(static_cast<const D &>(*this))->abi_SetStreamSource(get(stream)));
}

template <typename D> void impl_IMediaPlayerSource<D>::SetMediaSource(const Windows::Media::Core::IMediaSource & source) const
{
    check_hresult(static_cast<const IMediaPlayerSource &>(static_cast<const D &>(*this))->abi_SetMediaSource(get(source)));
}

template <typename D> Windows::Media::Playback::IMediaPlaybackSource impl_IMediaPlayerSource2<D>::Source() const
{
    Windows::Media::Playback::IMediaPlaybackSource value;
    check_hresult(static_cast<const IMediaPlayerSource2 &>(static_cast<const D &>(*this))->get_Source(put(value)));
    return value;
}

template <typename D> void impl_IMediaPlayerSource2<D>::Source(const Windows::Media::Playback::IMediaPlaybackSource & value) const
{
    check_hresult(static_cast<const IMediaPlayerSource2 &>(static_cast<const D &>(*this))->put_Source(get(value)));
}

template <typename D> void impl_IMediaPlayerEffects<D>::AddAudioEffect(hstring_ref activatableClassId, bool effectOptional, const Windows::Foundation::Collections::IPropertySet & configuration) const
{
    check_hresult(static_cast<const IMediaPlayerEffects &>(static_cast<const D &>(*this))->abi_AddAudioEffect(get(activatableClassId), effectOptional, get(configuration)));
}

template <typename D> void impl_IMediaPlayerEffects<D>::RemoveAllEffects() const
{
    check_hresult(static_cast<const IMediaPlayerEffects &>(static_cast<const D &>(*this))->abi_RemoveAllEffects());
}

template <typename D> void impl_IMediaPlayerEffects2<D>::AddVideoEffect(hstring_ref activatableClassId, bool effectOptional, const Windows::Foundation::Collections::IPropertySet & effectConfiguration) const
{
    check_hresult(static_cast<const IMediaPlayerEffects2 &>(static_cast<const D &>(*this))->abi_AddVideoEffect(get(activatableClassId), effectOptional, get(effectConfiguration)));
}

template <typename D> Windows::Media::Playback::MediaBreak impl_IMediaBreakStartedEventArgs<D>::MediaBreak() const
{
    Windows::Media::Playback::MediaBreak value { nullptr };
    check_hresult(static_cast<const IMediaBreakStartedEventArgs &>(static_cast<const D &>(*this))->get_MediaBreak(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaBreak impl_IMediaBreakEndedEventArgs<D>::MediaBreak() const
{
    Windows::Media::Playback::MediaBreak value { nullptr };
    check_hresult(static_cast<const IMediaBreakEndedEventArgs &>(static_cast<const D &>(*this))->get_MediaBreak(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaBreak impl_IMediaBreakSkippedEventArgs<D>::MediaBreak() const
{
    Windows::Media::Playback::MediaBreak value { nullptr };
    check_hresult(static_cast<const IMediaBreakSkippedEventArgs &>(static_cast<const D &>(*this))->get_MediaBreak(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Playback::MediaBreak> impl_IMediaBreakSeekedOverEventArgs<D>::SeekedOverBreaks() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Playback::MediaBreak> value;
    check_hresult(static_cast<const IMediaBreakSeekedOverEventArgs &>(static_cast<const D &>(*this))->get_SeekedOverBreaks(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IMediaBreakSeekedOverEventArgs<D>::OldPosition() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IMediaBreakSeekedOverEventArgs &>(static_cast<const D &>(*this))->get_OldPosition(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IMediaBreakSeekedOverEventArgs<D>::NewPosition() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IMediaBreakSeekedOverEventArgs &>(static_cast<const D &>(*this))->get_NewPosition(put(value)));
    return value;
}

template <typename D> event_token impl_IMediaBreakManager<D>::BreaksSeekedOver(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakSeekedOverEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaBreakManager &>(static_cast<const D &>(*this))->add_BreaksSeekedOver(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaBreakManager> impl_IMediaBreakManager<D>::BreaksSeekedOver(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakSeekedOverEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMediaBreakManager>(this, &ABI::Windows::Media::Playback::IMediaBreakManager::remove_BreaksSeekedOver, BreaksSeekedOver(handler));
}

template <typename D> void impl_IMediaBreakManager<D>::BreaksSeekedOver(event_token token) const
{
    check_hresult(static_cast<const IMediaBreakManager &>(static_cast<const D &>(*this))->remove_BreaksSeekedOver(token));
}

template <typename D> event_token impl_IMediaBreakManager<D>::BreakStarted(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakStartedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaBreakManager &>(static_cast<const D &>(*this))->add_BreakStarted(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaBreakManager> impl_IMediaBreakManager<D>::BreakStarted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakStartedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMediaBreakManager>(this, &ABI::Windows::Media::Playback::IMediaBreakManager::remove_BreakStarted, BreakStarted(handler));
}

template <typename D> void impl_IMediaBreakManager<D>::BreakStarted(event_token token) const
{
    check_hresult(static_cast<const IMediaBreakManager &>(static_cast<const D &>(*this))->remove_BreakStarted(token));
}

template <typename D> event_token impl_IMediaBreakManager<D>::BreakEnded(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakEndedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaBreakManager &>(static_cast<const D &>(*this))->add_BreakEnded(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaBreakManager> impl_IMediaBreakManager<D>::BreakEnded(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakEndedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMediaBreakManager>(this, &ABI::Windows::Media::Playback::IMediaBreakManager::remove_BreakEnded, BreakEnded(handler));
}

template <typename D> void impl_IMediaBreakManager<D>::BreakEnded(event_token token) const
{
    check_hresult(static_cast<const IMediaBreakManager &>(static_cast<const D &>(*this))->remove_BreakEnded(token));
}

template <typename D> event_token impl_IMediaBreakManager<D>::BreakSkipped(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakSkippedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaBreakManager &>(static_cast<const D &>(*this))->add_BreakSkipped(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaBreakManager> impl_IMediaBreakManager<D>::BreakSkipped(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakSkippedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMediaBreakManager>(this, &ABI::Windows::Media::Playback::IMediaBreakManager::remove_BreakSkipped, BreakSkipped(handler));
}

template <typename D> void impl_IMediaBreakManager<D>::BreakSkipped(event_token token) const
{
    check_hresult(static_cast<const IMediaBreakManager &>(static_cast<const D &>(*this))->remove_BreakSkipped(token));
}

template <typename D> Windows::Media::Playback::MediaBreak impl_IMediaBreakManager<D>::CurrentBreak() const
{
    Windows::Media::Playback::MediaBreak value { nullptr };
    check_hresult(static_cast<const IMediaBreakManager &>(static_cast<const D &>(*this))->get_CurrentBreak(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackSession impl_IMediaBreakManager<D>::PlaybackSession() const
{
    Windows::Media::Playback::MediaPlaybackSession value { nullptr };
    check_hresult(static_cast<const IMediaBreakManager &>(static_cast<const D &>(*this))->get_PlaybackSession(put(value)));
    return value;
}

template <typename D> void impl_IMediaBreakManager<D>::PlayBreak(const Windows::Media::Playback::MediaBreak & value) const
{
    check_hresult(static_cast<const IMediaBreakManager &>(static_cast<const D &>(*this))->abi_PlayBreak(get(value)));
}

template <typename D> void impl_IMediaBreakManager<D>::SkipCurrentBreak() const
{
    check_hresult(static_cast<const IMediaBreakManager &>(static_cast<const D &>(*this))->abi_SkipCurrentBreak());
}

template <typename D> Windows::UI::Composition::ICompositionSurface impl_IMediaPlayerSurface<D>::CompositionSurface() const
{
    Windows::UI::Composition::ICompositionSurface value;
    check_hresult(static_cast<const IMediaPlayerSurface &>(static_cast<const D &>(*this))->get_CompositionSurface(put(value)));
    return value;
}

template <typename D> Windows::UI::Composition::Compositor impl_IMediaPlayerSurface<D>::Compositor() const
{
    Windows::UI::Composition::Compositor value { nullptr };
    check_hresult(static_cast<const IMediaPlayerSurface &>(static_cast<const D &>(*this))->get_Compositor(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlayer impl_IMediaPlayerSurface<D>::MediaPlayer() const
{
    Windows::Media::Playback::MediaPlayer value { nullptr };
    check_hresult(static_cast<const IMediaPlayerSurface &>(static_cast<const D &>(*this))->get_MediaPlayer(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlayer impl_IBackgroundMediaPlayerStatics<D>::Current() const
{
    Windows::Media::Playback::MediaPlayer player { nullptr };
    check_hresult(static_cast<const IBackgroundMediaPlayerStatics &>(static_cast<const D &>(*this))->get_Current(put(player)));
    return player;
}

template <typename D> event_token impl_IBackgroundMediaPlayerStatics<D>::MessageReceivedFromBackground(const Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IBackgroundMediaPlayerStatics &>(static_cast<const D &>(*this))->add_MessageReceivedFromBackground(get(value), &token));
    return token;
}

template <typename D> event_revoker<IBackgroundMediaPlayerStatics> impl_IBackgroundMediaPlayerStatics<D>::MessageReceivedFromBackground(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IBackgroundMediaPlayerStatics>(this, &ABI::Windows::Media::Playback::IBackgroundMediaPlayerStatics::remove_MessageReceivedFromBackground, MessageReceivedFromBackground(value));
}

template <typename D> void impl_IBackgroundMediaPlayerStatics<D>::MessageReceivedFromBackground(event_token token) const
{
    check_hresult(static_cast<const IBackgroundMediaPlayerStatics &>(static_cast<const D &>(*this))->remove_MessageReceivedFromBackground(token));
}

template <typename D> event_token impl_IBackgroundMediaPlayerStatics<D>::MessageReceivedFromForeground(const Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IBackgroundMediaPlayerStatics &>(static_cast<const D &>(*this))->add_MessageReceivedFromForeground(get(value), &token));
    return token;
}

template <typename D> event_revoker<IBackgroundMediaPlayerStatics> impl_IBackgroundMediaPlayerStatics<D>::MessageReceivedFromForeground(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IBackgroundMediaPlayerStatics>(this, &ABI::Windows::Media::Playback::IBackgroundMediaPlayerStatics::remove_MessageReceivedFromForeground, MessageReceivedFromForeground(value));
}

template <typename D> void impl_IBackgroundMediaPlayerStatics<D>::MessageReceivedFromForeground(event_token token) const
{
    check_hresult(static_cast<const IBackgroundMediaPlayerStatics &>(static_cast<const D &>(*this))->remove_MessageReceivedFromForeground(token));
}

template <typename D> void impl_IBackgroundMediaPlayerStatics<D>::SendMessageToBackground(const Windows::Foundation::Collections::ValueSet & value) const
{
    check_hresult(static_cast<const IBackgroundMediaPlayerStatics &>(static_cast<const D &>(*this))->abi_SendMessageToBackground(get(value)));
}

template <typename D> void impl_IBackgroundMediaPlayerStatics<D>::SendMessageToForeground(const Windows::Foundation::Collections::ValueSet & value) const
{
    check_hresult(static_cast<const IBackgroundMediaPlayerStatics &>(static_cast<const D &>(*this))->abi_SendMessageToForeground(get(value)));
}

template <typename D> bool impl_IBackgroundMediaPlayerStatics<D>::IsMediaPlaying() const
{
    bool isMediaPlaying {};
    check_hresult(static_cast<const IBackgroundMediaPlayerStatics &>(static_cast<const D &>(*this))->abi_IsMediaPlaying(&isMediaPlaying));
    return isMediaPlaying;
}

template <typename D> void impl_IBackgroundMediaPlayerStatics<D>::Shutdown() const
{
    check_hresult(static_cast<const IBackgroundMediaPlayerStatics &>(static_cast<const D &>(*this))->abi_Shutdown());
}

template <typename D> bool impl_IMediaPlaybackCommandManagerPlayReceivedEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(static_cast<const IMediaPlaybackCommandManagerPlayReceivedEventArgs &>(static_cast<const D &>(*this))->get_Handled(&value));
    return value;
}

template <typename D> void impl_IMediaPlaybackCommandManagerPlayReceivedEventArgs<D>::Handled(bool value) const
{
    check_hresult(static_cast<const IMediaPlaybackCommandManagerPlayReceivedEventArgs &>(static_cast<const D &>(*this))->put_Handled(value));
}

template <typename D> Windows::Foundation::Deferral impl_IMediaPlaybackCommandManagerPlayReceivedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackCommandManagerPlayReceivedEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> bool impl_IMediaPlaybackCommandManagerPauseReceivedEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(static_cast<const IMediaPlaybackCommandManagerPauseReceivedEventArgs &>(static_cast<const D &>(*this))->get_Handled(&value));
    return value;
}

template <typename D> void impl_IMediaPlaybackCommandManagerPauseReceivedEventArgs<D>::Handled(bool value) const
{
    check_hresult(static_cast<const IMediaPlaybackCommandManagerPauseReceivedEventArgs &>(static_cast<const D &>(*this))->put_Handled(value));
}

template <typename D> Windows::Foundation::Deferral impl_IMediaPlaybackCommandManagerPauseReceivedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackCommandManagerPauseReceivedEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> bool impl_IMediaPlaybackCommandManagerNextReceivedEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(static_cast<const IMediaPlaybackCommandManagerNextReceivedEventArgs &>(static_cast<const D &>(*this))->get_Handled(&value));
    return value;
}

template <typename D> void impl_IMediaPlaybackCommandManagerNextReceivedEventArgs<D>::Handled(bool value) const
{
    check_hresult(static_cast<const IMediaPlaybackCommandManagerNextReceivedEventArgs &>(static_cast<const D &>(*this))->put_Handled(value));
}

template <typename D> Windows::Foundation::Deferral impl_IMediaPlaybackCommandManagerNextReceivedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackCommandManagerNextReceivedEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> bool impl_IMediaPlaybackCommandManagerPreviousReceivedEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(static_cast<const IMediaPlaybackCommandManagerPreviousReceivedEventArgs &>(static_cast<const D &>(*this))->get_Handled(&value));
    return value;
}

template <typename D> void impl_IMediaPlaybackCommandManagerPreviousReceivedEventArgs<D>::Handled(bool value) const
{
    check_hresult(static_cast<const IMediaPlaybackCommandManagerPreviousReceivedEventArgs &>(static_cast<const D &>(*this))->put_Handled(value));
}

template <typename D> Windows::Foundation::Deferral impl_IMediaPlaybackCommandManagerPreviousReceivedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackCommandManagerPreviousReceivedEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> bool impl_IMediaPlaybackCommandManagerFastForwardReceivedEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(static_cast<const IMediaPlaybackCommandManagerFastForwardReceivedEventArgs &>(static_cast<const D &>(*this))->get_Handled(&value));
    return value;
}

template <typename D> void impl_IMediaPlaybackCommandManagerFastForwardReceivedEventArgs<D>::Handled(bool value) const
{
    check_hresult(static_cast<const IMediaPlaybackCommandManagerFastForwardReceivedEventArgs &>(static_cast<const D &>(*this))->put_Handled(value));
}

template <typename D> Windows::Foundation::Deferral impl_IMediaPlaybackCommandManagerFastForwardReceivedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackCommandManagerFastForwardReceivedEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> bool impl_IMediaPlaybackCommandManagerRewindReceivedEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(static_cast<const IMediaPlaybackCommandManagerRewindReceivedEventArgs &>(static_cast<const D &>(*this))->get_Handled(&value));
    return value;
}

template <typename D> void impl_IMediaPlaybackCommandManagerRewindReceivedEventArgs<D>::Handled(bool value) const
{
    check_hresult(static_cast<const IMediaPlaybackCommandManagerRewindReceivedEventArgs &>(static_cast<const D &>(*this))->put_Handled(value));
}

template <typename D> Windows::Foundation::Deferral impl_IMediaPlaybackCommandManagerRewindReceivedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackCommandManagerRewindReceivedEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> bool impl_IMediaPlaybackCommandManagerShuffleReceivedEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(static_cast<const IMediaPlaybackCommandManagerShuffleReceivedEventArgs &>(static_cast<const D &>(*this))->get_Handled(&value));
    return value;
}

template <typename D> void impl_IMediaPlaybackCommandManagerShuffleReceivedEventArgs<D>::Handled(bool value) const
{
    check_hresult(static_cast<const IMediaPlaybackCommandManagerShuffleReceivedEventArgs &>(static_cast<const D &>(*this))->put_Handled(value));
}

template <typename D> bool impl_IMediaPlaybackCommandManagerShuffleReceivedEventArgs<D>::IsShuffleRequested() const
{
    bool value {};
    check_hresult(static_cast<const IMediaPlaybackCommandManagerShuffleReceivedEventArgs &>(static_cast<const D &>(*this))->get_IsShuffleRequested(&value));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IMediaPlaybackCommandManagerShuffleReceivedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackCommandManagerShuffleReceivedEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> bool impl_IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(static_cast<const IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs &>(static_cast<const D &>(*this))->get_Handled(&value));
    return value;
}

template <typename D> void impl_IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs<D>::Handled(bool value) const
{
    check_hresult(static_cast<const IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs &>(static_cast<const D &>(*this))->put_Handled(value));
}

template <typename D> Windows::Media::MediaPlaybackAutoRepeatMode impl_IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs<D>::AutoRepeatMode() const
{
    Windows::Media::MediaPlaybackAutoRepeatMode value {};
    check_hresult(static_cast<const IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs &>(static_cast<const D &>(*this))->get_AutoRepeatMode(&value));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> bool impl_IMediaPlaybackCommandManagerPositionReceivedEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(static_cast<const IMediaPlaybackCommandManagerPositionReceivedEventArgs &>(static_cast<const D &>(*this))->get_Handled(&value));
    return value;
}

template <typename D> void impl_IMediaPlaybackCommandManagerPositionReceivedEventArgs<D>::Handled(bool value) const
{
    check_hresult(static_cast<const IMediaPlaybackCommandManagerPositionReceivedEventArgs &>(static_cast<const D &>(*this))->put_Handled(value));
}

template <typename D> Windows::Foundation::TimeSpan impl_IMediaPlaybackCommandManagerPositionReceivedEventArgs<D>::Position() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IMediaPlaybackCommandManagerPositionReceivedEventArgs &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IMediaPlaybackCommandManagerPositionReceivedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackCommandManagerPositionReceivedEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> bool impl_IMediaPlaybackCommandManagerRateReceivedEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(static_cast<const IMediaPlaybackCommandManagerRateReceivedEventArgs &>(static_cast<const D &>(*this))->get_Handled(&value));
    return value;
}

template <typename D> void impl_IMediaPlaybackCommandManagerRateReceivedEventArgs<D>::Handled(bool value) const
{
    check_hresult(static_cast<const IMediaPlaybackCommandManagerRateReceivedEventArgs &>(static_cast<const D &>(*this))->put_Handled(value));
}

template <typename D> double impl_IMediaPlaybackCommandManagerRateReceivedEventArgs<D>::PlaybackRate() const
{
    double value {};
    check_hresult(static_cast<const IMediaPlaybackCommandManagerRateReceivedEventArgs &>(static_cast<const D &>(*this))->get_PlaybackRate(&value));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IMediaPlaybackCommandManagerRateReceivedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackCommandManagerRateReceivedEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackCommandManager impl_IMediaPlaybackCommandManagerCommandBehavior<D>::CommandManager() const
{
    Windows::Media::Playback::MediaPlaybackCommandManager value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackCommandManagerCommandBehavior &>(static_cast<const D &>(*this))->get_CommandManager(put(value)));
    return value;
}

template <typename D> bool impl_IMediaPlaybackCommandManagerCommandBehavior<D>::IsEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IMediaPlaybackCommandManagerCommandBehavior &>(static_cast<const D &>(*this))->get_IsEnabled(&value));
    return value;
}

template <typename D> Windows::Media::Playback::MediaCommandEnablingRule impl_IMediaPlaybackCommandManagerCommandBehavior<D>::EnablingRule() const
{
    Windows::Media::Playback::MediaCommandEnablingRule value {};
    check_hresult(static_cast<const IMediaPlaybackCommandManagerCommandBehavior &>(static_cast<const D &>(*this))->get_EnablingRule(&value));
    return value;
}

template <typename D> void impl_IMediaPlaybackCommandManagerCommandBehavior<D>::EnablingRule(Windows::Media::Playback::MediaCommandEnablingRule value) const
{
    check_hresult(static_cast<const IMediaPlaybackCommandManagerCommandBehavior &>(static_cast<const D &>(*this))->put_EnablingRule(value));
}

template <typename D> event_token impl_IMediaPlaybackCommandManagerCommandBehavior<D>::IsEnabledChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlaybackCommandManagerCommandBehavior &>(static_cast<const D &>(*this))->add_IsEnabledChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlaybackCommandManagerCommandBehavior> impl_IMediaPlaybackCommandManagerCommandBehavior<D>::IsEnabledChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IMediaPlaybackCommandManagerCommandBehavior>(this, &ABI::Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior::remove_IsEnabledChanged, IsEnabledChanged(handler));
}

template <typename D> void impl_IMediaPlaybackCommandManagerCommandBehavior<D>::IsEnabledChanged(event_token token) const
{
    check_hresult(static_cast<const IMediaPlaybackCommandManagerCommandBehavior &>(static_cast<const D &>(*this))->remove_IsEnabledChanged(token));
}

template <typename D> bool impl_IMediaPlaybackCommandManager<D>::IsEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->get_IsEnabled(&value));
    return value;
}

template <typename D> void impl_IMediaPlaybackCommandManager<D>::IsEnabled(bool value) const
{
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->put_IsEnabled(value));
}

template <typename D> Windows::Media::Playback::MediaPlayer impl_IMediaPlaybackCommandManager<D>::MediaPlayer() const
{
    Windows::Media::Playback::MediaPlayer value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->get_MediaPlayer(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior impl_IMediaPlaybackCommandManager<D>::PlayBehavior() const
{
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->get_PlayBehavior(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior impl_IMediaPlaybackCommandManager<D>::PauseBehavior() const
{
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->get_PauseBehavior(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior impl_IMediaPlaybackCommandManager<D>::NextBehavior() const
{
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->get_NextBehavior(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior impl_IMediaPlaybackCommandManager<D>::PreviousBehavior() const
{
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->get_PreviousBehavior(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior impl_IMediaPlaybackCommandManager<D>::FastForwardBehavior() const
{
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->get_FastForwardBehavior(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior impl_IMediaPlaybackCommandManager<D>::RewindBehavior() const
{
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->get_RewindBehavior(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior impl_IMediaPlaybackCommandManager<D>::ShuffleBehavior() const
{
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->get_ShuffleBehavior(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior impl_IMediaPlaybackCommandManager<D>::AutoRepeatModeBehavior() const
{
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->get_AutoRepeatModeBehavior(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior impl_IMediaPlaybackCommandManager<D>::PositionBehavior() const
{
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->get_PositionBehavior(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior impl_IMediaPlaybackCommandManager<D>::RateBehavior() const
{
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->get_RateBehavior(put(value)));
    return value;
}

template <typename D> event_token impl_IMediaPlaybackCommandManager<D>::PlayReceived(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPlayReceivedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->add_PlayReceived(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlaybackCommandManager> impl_IMediaPlaybackCommandManager<D>::PlayReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPlayReceivedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMediaPlaybackCommandManager>(this, &ABI::Windows::Media::Playback::IMediaPlaybackCommandManager::remove_PlayReceived, PlayReceived(handler));
}

template <typename D> void impl_IMediaPlaybackCommandManager<D>::PlayReceived(event_token token) const
{
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->remove_PlayReceived(token));
}

template <typename D> event_token impl_IMediaPlaybackCommandManager<D>::PauseReceived(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPauseReceivedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->add_PauseReceived(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlaybackCommandManager> impl_IMediaPlaybackCommandManager<D>::PauseReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPauseReceivedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMediaPlaybackCommandManager>(this, &ABI::Windows::Media::Playback::IMediaPlaybackCommandManager::remove_PauseReceived, PauseReceived(handler));
}

template <typename D> void impl_IMediaPlaybackCommandManager<D>::PauseReceived(event_token token) const
{
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->remove_PauseReceived(token));
}

template <typename D> event_token impl_IMediaPlaybackCommandManager<D>::NextReceived(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerNextReceivedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->add_NextReceived(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlaybackCommandManager> impl_IMediaPlaybackCommandManager<D>::NextReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerNextReceivedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMediaPlaybackCommandManager>(this, &ABI::Windows::Media::Playback::IMediaPlaybackCommandManager::remove_NextReceived, NextReceived(handler));
}

template <typename D> void impl_IMediaPlaybackCommandManager<D>::NextReceived(event_token token) const
{
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->remove_NextReceived(token));
}

template <typename D> event_token impl_IMediaPlaybackCommandManager<D>::PreviousReceived(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPreviousReceivedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->add_PreviousReceived(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlaybackCommandManager> impl_IMediaPlaybackCommandManager<D>::PreviousReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPreviousReceivedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMediaPlaybackCommandManager>(this, &ABI::Windows::Media::Playback::IMediaPlaybackCommandManager::remove_PreviousReceived, PreviousReceived(handler));
}

template <typename D> void impl_IMediaPlaybackCommandManager<D>::PreviousReceived(event_token token) const
{
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->remove_PreviousReceived(token));
}

template <typename D> event_token impl_IMediaPlaybackCommandManager<D>::FastForwardReceived(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerFastForwardReceivedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->add_FastForwardReceived(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlaybackCommandManager> impl_IMediaPlaybackCommandManager<D>::FastForwardReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerFastForwardReceivedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMediaPlaybackCommandManager>(this, &ABI::Windows::Media::Playback::IMediaPlaybackCommandManager::remove_FastForwardReceived, FastForwardReceived(handler));
}

template <typename D> void impl_IMediaPlaybackCommandManager<D>::FastForwardReceived(event_token token) const
{
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->remove_FastForwardReceived(token));
}

template <typename D> event_token impl_IMediaPlaybackCommandManager<D>::RewindReceived(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerRewindReceivedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->add_RewindReceived(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlaybackCommandManager> impl_IMediaPlaybackCommandManager<D>::RewindReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerRewindReceivedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMediaPlaybackCommandManager>(this, &ABI::Windows::Media::Playback::IMediaPlaybackCommandManager::remove_RewindReceived, RewindReceived(handler));
}

template <typename D> void impl_IMediaPlaybackCommandManager<D>::RewindReceived(event_token token) const
{
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->remove_RewindReceived(token));
}

template <typename D> event_token impl_IMediaPlaybackCommandManager<D>::ShuffleReceived(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerShuffleReceivedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->add_ShuffleReceived(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlaybackCommandManager> impl_IMediaPlaybackCommandManager<D>::ShuffleReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerShuffleReceivedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMediaPlaybackCommandManager>(this, &ABI::Windows::Media::Playback::IMediaPlaybackCommandManager::remove_ShuffleReceived, ShuffleReceived(handler));
}

template <typename D> void impl_IMediaPlaybackCommandManager<D>::ShuffleReceived(event_token token) const
{
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->remove_ShuffleReceived(token));
}

template <typename D> event_token impl_IMediaPlaybackCommandManager<D>::AutoRepeatModeReceived(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->add_AutoRepeatModeReceived(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlaybackCommandManager> impl_IMediaPlaybackCommandManager<D>::AutoRepeatModeReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMediaPlaybackCommandManager>(this, &ABI::Windows::Media::Playback::IMediaPlaybackCommandManager::remove_AutoRepeatModeReceived, AutoRepeatModeReceived(handler));
}

template <typename D> void impl_IMediaPlaybackCommandManager<D>::AutoRepeatModeReceived(event_token token) const
{
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->remove_AutoRepeatModeReceived(token));
}

template <typename D> event_token impl_IMediaPlaybackCommandManager<D>::PositionReceived(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPositionReceivedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->add_PositionReceived(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlaybackCommandManager> impl_IMediaPlaybackCommandManager<D>::PositionReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPositionReceivedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMediaPlaybackCommandManager>(this, &ABI::Windows::Media::Playback::IMediaPlaybackCommandManager::remove_PositionReceived, PositionReceived(handler));
}

template <typename D> void impl_IMediaPlaybackCommandManager<D>::PositionReceived(event_token token) const
{
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->remove_PositionReceived(token));
}

template <typename D> event_token impl_IMediaPlaybackCommandManager<D>::RateReceived(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerRateReceivedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->add_RateReceived(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlaybackCommandManager> impl_IMediaPlaybackCommandManager<D>::RateReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerRateReceivedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMediaPlaybackCommandManager>(this, &ABI::Windows::Media::Playback::IMediaPlaybackCommandManager::remove_RateReceived, RateReceived(handler));
}

template <typename D> void impl_IMediaPlaybackCommandManager<D>::RateReceived(event_token token) const
{
    check_hresult(static_cast<const IMediaPlaybackCommandManager &>(static_cast<const D &>(*this))->remove_RateReceived(token));
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem impl_IMediaPlaybackItemFactory<D>::Create(const Windows::Media::Core::MediaSource & source) const
{
    Windows::Media::Playback::MediaPlaybackItem value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackItemFactory &>(static_cast<const D &>(*this))->abi_Create(get(source), put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem impl_IMediaPlaybackItemFactory2<D>::CreateWithStartTime(const Windows::Media::Core::MediaSource & source, const Windows::Foundation::TimeSpan & startTime) const
{
    Windows::Media::Playback::MediaPlaybackItem result { nullptr };
    check_hresult(static_cast<const IMediaPlaybackItemFactory2 &>(static_cast<const D &>(*this))->abi_CreateWithStartTime(get(source), get(startTime), put(result)));
    return result;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem impl_IMediaPlaybackItemFactory2<D>::CreateWithStartTimeAndDurationLimit(const Windows::Media::Core::MediaSource & source, const Windows::Foundation::TimeSpan & startTime, const Windows::Foundation::TimeSpan & durationLimit) const
{
    Windows::Media::Playback::MediaPlaybackItem result { nullptr };
    check_hresult(static_cast<const IMediaPlaybackItemFactory2 &>(static_cast<const D &>(*this))->abi_CreateWithStartTimeAndDurationLimit(get(source), get(startTime), get(durationLimit), put(result)));
    return result;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem impl_IMediaPlaybackItemStatics<D>::FindFromMediaSource(const Windows::Media::Core::MediaSource & source) const
{
    Windows::Media::Playback::MediaPlaybackItem value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackItemStatics &>(static_cast<const D &>(*this))->abi_FindFromMediaSource(get(source), put(value)));
    return value;
}

template <typename D> event_token impl_IMediaPlaybackItem<D>::AudioTracksChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlaybackItem &>(static_cast<const D &>(*this))->add_AudioTracksChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlaybackItem> impl_IMediaPlaybackItem<D>::AudioTracksChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMediaPlaybackItem>(this, &ABI::Windows::Media::Playback::IMediaPlaybackItem::remove_AudioTracksChanged, AudioTracksChanged(handler));
}

template <typename D> void impl_IMediaPlaybackItem<D>::AudioTracksChanged(event_token token) const
{
    check_hresult(static_cast<const IMediaPlaybackItem &>(static_cast<const D &>(*this))->remove_AudioTracksChanged(token));
}

template <typename D> event_token impl_IMediaPlaybackItem<D>::VideoTracksChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlaybackItem &>(static_cast<const D &>(*this))->add_VideoTracksChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlaybackItem> impl_IMediaPlaybackItem<D>::VideoTracksChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMediaPlaybackItem>(this, &ABI::Windows::Media::Playback::IMediaPlaybackItem::remove_VideoTracksChanged, VideoTracksChanged(handler));
}

template <typename D> void impl_IMediaPlaybackItem<D>::VideoTracksChanged(event_token token) const
{
    check_hresult(static_cast<const IMediaPlaybackItem &>(static_cast<const D &>(*this))->remove_VideoTracksChanged(token));
}

template <typename D> event_token impl_IMediaPlaybackItem<D>::TimedMetadataTracksChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlaybackItem &>(static_cast<const D &>(*this))->add_TimedMetadataTracksChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlaybackItem> impl_IMediaPlaybackItem<D>::TimedMetadataTracksChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMediaPlaybackItem>(this, &ABI::Windows::Media::Playback::IMediaPlaybackItem::remove_TimedMetadataTracksChanged, TimedMetadataTracksChanged(handler));
}

template <typename D> void impl_IMediaPlaybackItem<D>::TimedMetadataTracksChanged(event_token token) const
{
    check_hresult(static_cast<const IMediaPlaybackItem &>(static_cast<const D &>(*this))->remove_TimedMetadataTracksChanged(token));
}

template <typename D> Windows::Media::Core::MediaSource impl_IMediaPlaybackItem<D>::Source() const
{
    Windows::Media::Core::MediaSource value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackItem &>(static_cast<const D &>(*this))->get_Source(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackAudioTrackList impl_IMediaPlaybackItem<D>::AudioTracks() const
{
    Windows::Media::Playback::MediaPlaybackAudioTrackList value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackItem &>(static_cast<const D &>(*this))->get_AudioTracks(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackVideoTrackList impl_IMediaPlaybackItem<D>::VideoTracks() const
{
    Windows::Media::Playback::MediaPlaybackVideoTrackList value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackItem &>(static_cast<const D &>(*this))->get_VideoTracks(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList impl_IMediaPlaybackItem<D>::TimedMetadataTracks() const
{
    Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackItem &>(static_cast<const D &>(*this))->get_TimedMetadataTracks(put(value)));
    return value;
}

template <typename D> Windows::Media::MediaPlaybackType impl_IMediaItemDisplayProperties<D>::Type() const
{
    Windows::Media::MediaPlaybackType value {};
    check_hresult(static_cast<const IMediaItemDisplayProperties &>(static_cast<const D &>(*this))->get_Type(&value));
    return value;
}

template <typename D> void impl_IMediaItemDisplayProperties<D>::Type(Windows::Media::MediaPlaybackType value) const
{
    check_hresult(static_cast<const IMediaItemDisplayProperties &>(static_cast<const D &>(*this))->put_Type(value));
}

template <typename D> Windows::Media::MusicDisplayProperties impl_IMediaItemDisplayProperties<D>::MusicProperties() const
{
    Windows::Media::MusicDisplayProperties value { nullptr };
    check_hresult(static_cast<const IMediaItemDisplayProperties &>(static_cast<const D &>(*this))->get_MusicProperties(put(value)));
    return value;
}

template <typename D> Windows::Media::VideoDisplayProperties impl_IMediaItemDisplayProperties<D>::VideoProperties() const
{
    Windows::Media::VideoDisplayProperties value { nullptr };
    check_hresult(static_cast<const IMediaItemDisplayProperties &>(static_cast<const D &>(*this))->get_VideoProperties(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::RandomAccessStreamReference impl_IMediaItemDisplayProperties<D>::Thumbnail() const
{
    Windows::Storage::Streams::RandomAccessStreamReference value { nullptr };
    check_hresult(static_cast<const IMediaItemDisplayProperties &>(static_cast<const D &>(*this))->get_Thumbnail(put(value)));
    return value;
}

template <typename D> void impl_IMediaItemDisplayProperties<D>::Thumbnail(const Windows::Storage::Streams::RandomAccessStreamReference & value) const
{
    check_hresult(static_cast<const IMediaItemDisplayProperties &>(static_cast<const D &>(*this))->put_Thumbnail(get(value)));
}

template <typename D> void impl_IMediaItemDisplayProperties<D>::ClearAll() const
{
    check_hresult(static_cast<const IMediaItemDisplayProperties &>(static_cast<const D &>(*this))->abi_ClearAll());
}

template <typename D> Windows::Media::Playback::MediaBreakSchedule impl_IMediaPlaybackItem2<D>::BreakSchedule() const
{
    Windows::Media::Playback::MediaBreakSchedule value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackItem2 &>(static_cast<const D &>(*this))->get_BreakSchedule(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IMediaPlaybackItem2<D>::StartTime() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IMediaPlaybackItem2 &>(static_cast<const D &>(*this))->get_StartTime(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> impl_IMediaPlaybackItem2<D>::DurationLimit() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value;
    check_hresult(static_cast<const IMediaPlaybackItem2 &>(static_cast<const D &>(*this))->get_DurationLimit(put(value)));
    return value;
}

template <typename D> bool impl_IMediaPlaybackItem2<D>::CanSkip() const
{
    bool value {};
    check_hresult(static_cast<const IMediaPlaybackItem2 &>(static_cast<const D &>(*this))->get_CanSkip(&value));
    return value;
}

template <typename D> void impl_IMediaPlaybackItem2<D>::CanSkip(bool value) const
{
    check_hresult(static_cast<const IMediaPlaybackItem2 &>(static_cast<const D &>(*this))->put_CanSkip(value));
}

template <typename D> Windows::Media::Playback::MediaItemDisplayProperties impl_IMediaPlaybackItem2<D>::GetDisplayProperties() const
{
    Windows::Media::Playback::MediaItemDisplayProperties value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackItem2 &>(static_cast<const D &>(*this))->abi_GetDisplayProperties(put(value)));
    return value;
}

template <typename D> void impl_IMediaPlaybackItem2<D>::ApplyDisplayProperties(const Windows::Media::Playback::MediaItemDisplayProperties & value) const
{
    check_hresult(static_cast<const IMediaPlaybackItem2 &>(static_cast<const D &>(*this))->abi_ApplyDisplayProperties(get(value)));
}

template <typename D> Windows::Media::Playback::MediaBreak impl_IMediaBreakFactory<D>::Create(Windows::Media::Playback::MediaBreakInsertionMethod insertionMethod) const
{
    Windows::Media::Playback::MediaBreak result { nullptr };
    check_hresult(static_cast<const IMediaBreakFactory &>(static_cast<const D &>(*this))->abi_Create(insertionMethod, put(result)));
    return result;
}

template <typename D> Windows::Media::Playback::MediaBreak impl_IMediaBreakFactory<D>::CreateWithPresentationPosition(Windows::Media::Playback::MediaBreakInsertionMethod insertionMethod, const Windows::Foundation::TimeSpan & presentationPosition) const
{
    Windows::Media::Playback::MediaBreak result { nullptr };
    check_hresult(static_cast<const IMediaBreakFactory &>(static_cast<const D &>(*this))->abi_CreateWithPresentationPosition(insertionMethod, get(presentationPosition), put(result)));
    return result;
}

template <typename D> Windows::Media::Playback::MediaPlaybackList impl_IMediaBreak<D>::PlaybackList() const
{
    Windows::Media::Playback::MediaPlaybackList value { nullptr };
    check_hresult(static_cast<const IMediaBreak &>(static_cast<const D &>(*this))->get_PlaybackList(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> impl_IMediaBreak<D>::PresentationPosition() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value;
    check_hresult(static_cast<const IMediaBreak &>(static_cast<const D &>(*this))->get_PresentationPosition(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaBreakInsertionMethod impl_IMediaBreak<D>::InsertionMethod() const
{
    Windows::Media::Playback::MediaBreakInsertionMethod value {};
    check_hresult(static_cast<const IMediaBreak &>(static_cast<const D &>(*this))->get_InsertionMethod(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::ValueSet impl_IMediaBreak<D>::CustomProperties() const
{
    Windows::Foundation::Collections::ValueSet value { nullptr };
    check_hresult(static_cast<const IMediaBreak &>(static_cast<const D &>(*this))->get_CustomProperties(put(value)));
    return value;
}

template <typename D> bool impl_IMediaBreak<D>::CanStart() const
{
    bool value {};
    check_hresult(static_cast<const IMediaBreak &>(static_cast<const D &>(*this))->get_CanStart(&value));
    return value;
}

template <typename D> void impl_IMediaBreak<D>::CanStart(bool value) const
{
    check_hresult(static_cast<const IMediaBreak &>(static_cast<const D &>(*this))->put_CanStart(value));
}

template <typename D> event_token impl_IMediaBreakSchedule<D>::ScheduleChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakSchedule, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaBreakSchedule &>(static_cast<const D &>(*this))->add_ScheduleChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaBreakSchedule> impl_IMediaBreakSchedule<D>::ScheduleChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakSchedule, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IMediaBreakSchedule>(this, &ABI::Windows::Media::Playback::IMediaBreakSchedule::remove_ScheduleChanged, ScheduleChanged(handler));
}

template <typename D> void impl_IMediaBreakSchedule<D>::ScheduleChanged(event_token token) const
{
    check_hresult(static_cast<const IMediaBreakSchedule &>(static_cast<const D &>(*this))->remove_ScheduleChanged(token));
}

template <typename D> void impl_IMediaBreakSchedule<D>::InsertMidrollBreak(const Windows::Media::Playback::MediaBreak & mediaBreak) const
{
    check_hresult(static_cast<const IMediaBreakSchedule &>(static_cast<const D &>(*this))->abi_InsertMidrollBreak(get(mediaBreak)));
}

template <typename D> void impl_IMediaBreakSchedule<D>::RemoveMidrollBreak(const Windows::Media::Playback::MediaBreak & mediaBreak) const
{
    check_hresult(static_cast<const IMediaBreakSchedule &>(static_cast<const D &>(*this))->abi_RemoveMidrollBreak(get(mediaBreak)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Playback::MediaBreak> impl_IMediaBreakSchedule<D>::MidrollBreaks() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Playback::MediaBreak> value;
    check_hresult(static_cast<const IMediaBreakSchedule &>(static_cast<const D &>(*this))->get_MidrollBreaks(put(value)));
    return value;
}

template <typename D> void impl_IMediaBreakSchedule<D>::PrerollBreak(const Windows::Media::Playback::MediaBreak & value) const
{
    check_hresult(static_cast<const IMediaBreakSchedule &>(static_cast<const D &>(*this))->put_PrerollBreak(get(value)));
}

template <typename D> Windows::Media::Playback::MediaBreak impl_IMediaBreakSchedule<D>::PrerollBreak() const
{
    Windows::Media::Playback::MediaBreak value { nullptr };
    check_hresult(static_cast<const IMediaBreakSchedule &>(static_cast<const D &>(*this))->get_PrerollBreak(put(value)));
    return value;
}

template <typename D> void impl_IMediaBreakSchedule<D>::PostrollBreak(const Windows::Media::Playback::MediaBreak & value) const
{
    check_hresult(static_cast<const IMediaBreakSchedule &>(static_cast<const D &>(*this))->put_PostrollBreak(get(value)));
}

template <typename D> Windows::Media::Playback::MediaBreak impl_IMediaBreakSchedule<D>::PostrollBreak() const
{
    Windows::Media::Playback::MediaBreak value { nullptr };
    check_hresult(static_cast<const IMediaBreakSchedule &>(static_cast<const D &>(*this))->get_PostrollBreak(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem impl_IMediaBreakSchedule<D>::PlaybackItem() const
{
    Windows::Media::Playback::MediaPlaybackItem value { nullptr };
    check_hresult(static_cast<const IMediaBreakSchedule &>(static_cast<const D &>(*this))->get_PlaybackItem(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItemErrorCode impl_IMediaPlaybackItemError<D>::ErrorCode() const
{
    Windows::Media::Playback::MediaPlaybackItemErrorCode value {};
    check_hresult(static_cast<const IMediaPlaybackItemError &>(static_cast<const D &>(*this))->get_ErrorCode(&value));
    return value;
}

template <typename D> HRESULT impl_IMediaPlaybackItemError<D>::ExtendedError() const
{
    HRESULT value {};
    check_hresult(static_cast<const IMediaPlaybackItemError &>(static_cast<const D &>(*this))->get_ExtendedError(&value));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem impl_IMediaEnginePlaybackSource<D>::CurrentItem() const
{
    Windows::Media::Playback::MediaPlaybackItem value { nullptr };
    check_hresult(static_cast<const IMediaEnginePlaybackSource &>(static_cast<const D &>(*this))->get_CurrentItem(put(value)));
    return value;
}

template <typename D> void impl_IMediaEnginePlaybackSource<D>::SetPlaybackSource(const Windows::Media::Playback::IMediaPlaybackSource & source) const
{
    check_hresult(static_cast<const IMediaEnginePlaybackSource &>(static_cast<const D &>(*this))->abi_SetPlaybackSource(get(source)));
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem impl_IMediaPlaybackItemOpenedEventArgs<D>::Item() const
{
    Windows::Media::Playback::MediaPlaybackItem value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackItemOpenedEventArgs &>(static_cast<const D &>(*this))->get_Item(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem impl_IMediaPlaybackItemFailedEventArgs<D>::Item() const
{
    Windows::Media::Playback::MediaPlaybackItem value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackItemFailedEventArgs &>(static_cast<const D &>(*this))->get_Item(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItemError impl_IMediaPlaybackItemFailedEventArgs<D>::Error() const
{
    Windows::Media::Playback::MediaPlaybackItemError value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackItemFailedEventArgs &>(static_cast<const D &>(*this))->get_Error(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem impl_ICurrentMediaPlaybackItemChangedEventArgs<D>::NewItem() const
{
    Windows::Media::Playback::MediaPlaybackItem value { nullptr };
    check_hresult(static_cast<const ICurrentMediaPlaybackItemChangedEventArgs &>(static_cast<const D &>(*this))->get_NewItem(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem impl_ICurrentMediaPlaybackItemChangedEventArgs<D>::OldItem() const
{
    Windows::Media::Playback::MediaPlaybackItem value { nullptr };
    check_hresult(static_cast<const ICurrentMediaPlaybackItemChangedEventArgs &>(static_cast<const D &>(*this))->get_OldItem(put(value)));
    return value;
}

template <typename D> event_token impl_IMediaPlaybackList<D>::ItemFailed(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::MediaPlaybackItemFailedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlaybackList &>(static_cast<const D &>(*this))->add_ItemFailed(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlaybackList> impl_IMediaPlaybackList<D>::ItemFailed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::MediaPlaybackItemFailedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMediaPlaybackList>(this, &ABI::Windows::Media::Playback::IMediaPlaybackList::remove_ItemFailed, ItemFailed(handler));
}

template <typename D> void impl_IMediaPlaybackList<D>::ItemFailed(event_token token) const
{
    check_hresult(static_cast<const IMediaPlaybackList &>(static_cast<const D &>(*this))->remove_ItemFailed(token));
}

template <typename D> event_token impl_IMediaPlaybackList<D>::CurrentItemChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::CurrentMediaPlaybackItemChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlaybackList &>(static_cast<const D &>(*this))->add_CurrentItemChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlaybackList> impl_IMediaPlaybackList<D>::CurrentItemChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::CurrentMediaPlaybackItemChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMediaPlaybackList>(this, &ABI::Windows::Media::Playback::IMediaPlaybackList::remove_CurrentItemChanged, CurrentItemChanged(handler));
}

template <typename D> void impl_IMediaPlaybackList<D>::CurrentItemChanged(event_token token) const
{
    check_hresult(static_cast<const IMediaPlaybackList &>(static_cast<const D &>(*this))->remove_CurrentItemChanged(token));
}

template <typename D> event_token impl_IMediaPlaybackList<D>::ItemOpened(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::MediaPlaybackItemOpenedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlaybackList &>(static_cast<const D &>(*this))->add_ItemOpened(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlaybackList> impl_IMediaPlaybackList<D>::ItemOpened(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::MediaPlaybackItemOpenedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMediaPlaybackList>(this, &ABI::Windows::Media::Playback::IMediaPlaybackList::remove_ItemOpened, ItemOpened(handler));
}

template <typename D> void impl_IMediaPlaybackList<D>::ItemOpened(event_token token) const
{
    check_hresult(static_cast<const IMediaPlaybackList &>(static_cast<const D &>(*this))->remove_ItemOpened(token));
}

template <typename D> Windows::Foundation::Collections::IObservableVector<Windows::Media::Playback::MediaPlaybackItem> impl_IMediaPlaybackList<D>::Items() const
{
    Windows::Foundation::Collections::IObservableVector<Windows::Media::Playback::MediaPlaybackItem> value;
    check_hresult(static_cast<const IMediaPlaybackList &>(static_cast<const D &>(*this))->get_Items(put(value)));
    return value;
}

template <typename D> bool impl_IMediaPlaybackList<D>::AutoRepeatEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IMediaPlaybackList &>(static_cast<const D &>(*this))->get_AutoRepeatEnabled(&value));
    return value;
}

template <typename D> void impl_IMediaPlaybackList<D>::AutoRepeatEnabled(bool value) const
{
    check_hresult(static_cast<const IMediaPlaybackList &>(static_cast<const D &>(*this))->put_AutoRepeatEnabled(value));
}

template <typename D> bool impl_IMediaPlaybackList<D>::ShuffleEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IMediaPlaybackList &>(static_cast<const D &>(*this))->get_ShuffleEnabled(&value));
    return value;
}

template <typename D> void impl_IMediaPlaybackList<D>::ShuffleEnabled(bool value) const
{
    check_hresult(static_cast<const IMediaPlaybackList &>(static_cast<const D &>(*this))->put_ShuffleEnabled(value));
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem impl_IMediaPlaybackList<D>::CurrentItem() const
{
    Windows::Media::Playback::MediaPlaybackItem value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackList &>(static_cast<const D &>(*this))->get_CurrentItem(put(value)));
    return value;
}

template <typename D> uint32_t impl_IMediaPlaybackList<D>::CurrentItemIndex() const
{
    uint32_t value {};
    check_hresult(static_cast<const IMediaPlaybackList &>(static_cast<const D &>(*this))->get_CurrentItemIndex(&value));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem impl_IMediaPlaybackList<D>::MoveNext() const
{
    Windows::Media::Playback::MediaPlaybackItem item { nullptr };
    check_hresult(static_cast<const IMediaPlaybackList &>(static_cast<const D &>(*this))->abi_MoveNext(put(item)));
    return item;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem impl_IMediaPlaybackList<D>::MovePrevious() const
{
    Windows::Media::Playback::MediaPlaybackItem item { nullptr };
    check_hresult(static_cast<const IMediaPlaybackList &>(static_cast<const D &>(*this))->abi_MovePrevious(put(item)));
    return item;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem impl_IMediaPlaybackList<D>::MoveTo(uint32_t itemIndex) const
{
    Windows::Media::Playback::MediaPlaybackItem item { nullptr };
    check_hresult(static_cast<const IMediaPlaybackList &>(static_cast<const D &>(*this))->abi_MoveTo(itemIndex, put(item)));
    return item;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> impl_IMediaPlaybackList2<D>::MaxPrefetchTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value;
    check_hresult(static_cast<const IMediaPlaybackList2 &>(static_cast<const D &>(*this))->get_MaxPrefetchTime(put(value)));
    return value;
}

template <typename D> void impl_IMediaPlaybackList2<D>::MaxPrefetchTime(const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> & value) const
{
    check_hresult(static_cast<const IMediaPlaybackList2 &>(static_cast<const D &>(*this))->put_MaxPrefetchTime(get(value)));
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem impl_IMediaPlaybackList2<D>::StartingItem() const
{
    Windows::Media::Playback::MediaPlaybackItem value { nullptr };
    check_hresult(static_cast<const IMediaPlaybackList2 &>(static_cast<const D &>(*this))->get_StartingItem(put(value)));
    return value;
}

template <typename D> void impl_IMediaPlaybackList2<D>::StartingItem(const Windows::Media::Playback::MediaPlaybackItem & value) const
{
    check_hresult(static_cast<const IMediaPlaybackList2 &>(static_cast<const D &>(*this))->put_StartingItem(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Playback::MediaPlaybackItem> impl_IMediaPlaybackList2<D>::ShuffledItems() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Playback::MediaPlaybackItem> value;
    check_hresult(static_cast<const IMediaPlaybackList2 &>(static_cast<const D &>(*this))->get_ShuffledItems(put(value)));
    return value;
}

template <typename D> void impl_IMediaPlaybackList2<D>::SetShuffledItems(const Windows::Foundation::Collections::IIterable<Windows::Media::Playback::MediaPlaybackItem> & value) const
{
    check_hresult(static_cast<const IMediaPlaybackList2 &>(static_cast<const D &>(*this))->abi_SetShuffledItems(get(value)));
}

template <typename D> event_token impl_IMediaPlaybackTimedMetadataTrackList<D>::PresentationModeChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList, Windows::Media::Playback::TimedMetadataPresentationModeChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaPlaybackTimedMetadataTrackList &>(static_cast<const D &>(*this))->add_PresentationModeChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaPlaybackTimedMetadataTrackList> impl_IMediaPlaybackTimedMetadataTrackList<D>::PresentationModeChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList, Windows::Media::Playback::TimedMetadataPresentationModeChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMediaPlaybackTimedMetadataTrackList>(this, &ABI::Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList::remove_PresentationModeChanged, PresentationModeChanged(handler));
}

template <typename D> void impl_IMediaPlaybackTimedMetadataTrackList<D>::PresentationModeChanged(event_token token) const
{
    check_hresult(static_cast<const IMediaPlaybackTimedMetadataTrackList &>(static_cast<const D &>(*this))->remove_PresentationModeChanged(token));
}

template <typename D> Windows::Media::Playback::TimedMetadataTrackPresentationMode impl_IMediaPlaybackTimedMetadataTrackList<D>::GetPresentationMode(uint32_t index) const
{
    Windows::Media::Playback::TimedMetadataTrackPresentationMode value {};
    check_hresult(static_cast<const IMediaPlaybackTimedMetadataTrackList &>(static_cast<const D &>(*this))->abi_GetPresentationMode(index, &value));
    return value;
}

template <typename D> void impl_IMediaPlaybackTimedMetadataTrackList<D>::SetPresentationMode(uint32_t index, Windows::Media::Playback::TimedMetadataTrackPresentationMode value) const
{
    check_hresult(static_cast<const IMediaPlaybackTimedMetadataTrackList &>(static_cast<const D &>(*this))->abi_SetPresentationMode(index, value));
}

template <typename D> Windows::Media::Core::TimedMetadataTrack impl_ITimedMetadataPresentationModeChangedEventArgs<D>::Track() const
{
    Windows::Media::Core::TimedMetadataTrack value { nullptr };
    check_hresult(static_cast<const ITimedMetadataPresentationModeChangedEventArgs &>(static_cast<const D &>(*this))->get_Track(put(value)));
    return value;
}

template <typename D> Windows::Media::Playback::TimedMetadataTrackPresentationMode impl_ITimedMetadataPresentationModeChangedEventArgs<D>::OldPresentationMode() const
{
    Windows::Media::Playback::TimedMetadataTrackPresentationMode value {};
    check_hresult(static_cast<const ITimedMetadataPresentationModeChangedEventArgs &>(static_cast<const D &>(*this))->get_OldPresentationMode(&value));
    return value;
}

template <typename D> Windows::Media::Playback::TimedMetadataTrackPresentationMode impl_ITimedMetadataPresentationModeChangedEventArgs<D>::NewPresentationMode() const
{
    Windows::Media::Playback::TimedMetadataTrackPresentationMode value {};
    check_hresult(static_cast<const ITimedMetadataPresentationModeChangedEventArgs &>(static_cast<const D &>(*this))->get_NewPresentationMode(&value));
    return value;
}

inline Windows::Media::Playback::MediaPlayer BackgroundMediaPlayer::Current()
{
    return get_activation_factory<BackgroundMediaPlayer, IBackgroundMediaPlayerStatics>().Current();
}

inline event_token BackgroundMediaPlayer::MessageReceivedFromBackground(const Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> & value)
{
    return get_activation_factory<BackgroundMediaPlayer, IBackgroundMediaPlayerStatics>().MessageReceivedFromBackground(value);
}

inline factory_event_revoker<IBackgroundMediaPlayerStatics> BackgroundMediaPlayer::MessageReceivedFromBackground(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> & value)
{
    auto factory = get_activation_factory<BackgroundMediaPlayer, IBackgroundMediaPlayerStatics>();
    return { factory, &ABI::Windows::Media::Playback::IBackgroundMediaPlayerStatics::remove_MessageReceivedFromBackground, factory.MessageReceivedFromBackground(value) };
}

inline void BackgroundMediaPlayer::MessageReceivedFromBackground(event_token token)
{
    get_activation_factory<BackgroundMediaPlayer, IBackgroundMediaPlayerStatics>().MessageReceivedFromBackground(token);
}

inline event_token BackgroundMediaPlayer::MessageReceivedFromForeground(const Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> & value)
{
    return get_activation_factory<BackgroundMediaPlayer, IBackgroundMediaPlayerStatics>().MessageReceivedFromForeground(value);
}

inline factory_event_revoker<IBackgroundMediaPlayerStatics> BackgroundMediaPlayer::MessageReceivedFromForeground(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> & value)
{
    auto factory = get_activation_factory<BackgroundMediaPlayer, IBackgroundMediaPlayerStatics>();
    return { factory, &ABI::Windows::Media::Playback::IBackgroundMediaPlayerStatics::remove_MessageReceivedFromForeground, factory.MessageReceivedFromForeground(value) };
}

inline void BackgroundMediaPlayer::MessageReceivedFromForeground(event_token token)
{
    get_activation_factory<BackgroundMediaPlayer, IBackgroundMediaPlayerStatics>().MessageReceivedFromForeground(token);
}

inline void BackgroundMediaPlayer::SendMessageToBackground(const Windows::Foundation::Collections::ValueSet & value)
{
    get_activation_factory<BackgroundMediaPlayer, IBackgroundMediaPlayerStatics>().SendMessageToBackground(value);
}

inline void BackgroundMediaPlayer::SendMessageToForeground(const Windows::Foundation::Collections::ValueSet & value)
{
    get_activation_factory<BackgroundMediaPlayer, IBackgroundMediaPlayerStatics>().SendMessageToForeground(value);
}

inline bool BackgroundMediaPlayer::IsMediaPlaying()
{
    return get_activation_factory<BackgroundMediaPlayer, IBackgroundMediaPlayerStatics>().IsMediaPlaying();
}

inline void BackgroundMediaPlayer::Shutdown()
{
    get_activation_factory<BackgroundMediaPlayer, IBackgroundMediaPlayerStatics>().Shutdown();
}

inline MediaBreak::MediaBreak(Windows::Media::Playback::MediaBreakInsertionMethod insertionMethod) :
    MediaBreak(get_activation_factory<MediaBreak, IMediaBreakFactory>().Create(insertionMethod))
{}

inline MediaBreak::MediaBreak(Windows::Media::Playback::MediaBreakInsertionMethod insertionMethod, const Windows::Foundation::TimeSpan & presentationPosition) :
    MediaBreak(get_activation_factory<MediaBreak, IMediaBreakFactory>().CreateWithPresentationPosition(insertionMethod, presentationPosition))
{}

inline MediaPlaybackItem::MediaPlaybackItem(const Windows::Media::Core::MediaSource & source) :
    MediaPlaybackItem(get_activation_factory<MediaPlaybackItem, IMediaPlaybackItemFactory>().Create(source))
{}

inline MediaPlaybackItem::MediaPlaybackItem(const Windows::Media::Core::MediaSource & source, const Windows::Foundation::TimeSpan & startTime) :
    MediaPlaybackItem(get_activation_factory<MediaPlaybackItem, IMediaPlaybackItemFactory2>().CreateWithStartTime(source, startTime))
{}

inline MediaPlaybackItem::MediaPlaybackItem(const Windows::Media::Core::MediaSource & source, const Windows::Foundation::TimeSpan & startTime, const Windows::Foundation::TimeSpan & durationLimit) :
    MediaPlaybackItem(get_activation_factory<MediaPlaybackItem, IMediaPlaybackItemFactory2>().CreateWithStartTimeAndDurationLimit(source, startTime, durationLimit))
{}

inline Windows::Media::Playback::MediaPlaybackItem MediaPlaybackItem::FindFromMediaSource(const Windows::Media::Core::MediaSource & source)
{
    return get_activation_factory<MediaPlaybackItem, IMediaPlaybackItemStatics>().FindFromMediaSource(source);
}

inline MediaPlaybackList::MediaPlaybackList() :
    MediaPlaybackList(activate_instance<MediaPlaybackList>())
{}

inline MediaPlayer::MediaPlayer() :
    MediaPlayer(activate_instance<MediaPlayer>())
{}

inline PlaybackMediaMarker::PlaybackMediaMarker(const Windows::Foundation::TimeSpan & value) :
    PlaybackMediaMarker(get_activation_factory<PlaybackMediaMarker, IPlaybackMediaMarkerFactory>().CreateFromTime(value))
{}

inline PlaybackMediaMarker::PlaybackMediaMarker(const Windows::Foundation::TimeSpan & value, hstring_ref mediaMarketType, hstring_ref text) :
    PlaybackMediaMarker(get_activation_factory<PlaybackMediaMarker, IPlaybackMediaMarkerFactory>().Create(value, mediaMarketType, text))
{}

}

}
