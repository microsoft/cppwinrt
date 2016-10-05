// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Media.PlayTo.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Media::PlayTo {

struct __declspec(uuid("99711324-edc7-4bf5-91f6-3c8627db59e5")) __declspec(novtable) ICurrentTimeChangeRequestedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Time(Windows::Foundation::TimeSpan * value) = 0;
};

struct __declspec(uuid("e4b4f5f6-af1f-4f1e-b437-7da32400e1d4")) __declspec(novtable) IMuteChangeRequestedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Mute(bool * value) = 0;
};

struct __declspec(uuid("112fbfc8-f235-4fde-8d41-9bf27c9e9a40")) __declspec(novtable) IPlayToConnection : Windows::IInspectable
{
    virtual HRESULT __stdcall get_State(winrt::Windows::Media::PlayTo::PlayToConnectionState * value) = 0;
    virtual HRESULT __stdcall add_StateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionStateChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_StateChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_Transferred(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionTransferredEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Transferred(event_token token) = 0;
    virtual HRESULT __stdcall add_Error(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionErrorEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Error(event_token token) = 0;
};

struct __declspec(uuid("bf5eada6-88e6-445f-9d40-d9b9f8939896")) __declspec(novtable) IPlayToConnectionErrorEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Code(winrt::Windows::Media::PlayTo::PlayToConnectionError * value) = 0;
    virtual HRESULT __stdcall get_Message(hstring * value) = 0;
};

struct __declspec(uuid("68c4b50f-0c20-4980-8602-58c62238d423")) __declspec(novtable) IPlayToConnectionStateChangedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PreviousState(winrt::Windows::Media::PlayTo::PlayToConnectionState * value) = 0;
    virtual HRESULT __stdcall get_CurrentState(winrt::Windows::Media::PlayTo::PlayToConnectionState * value) = 0;
};

struct __declspec(uuid("fae3193a-0683-47d9-8df0-18cbb48984d8")) __declspec(novtable) IPlayToConnectionTransferredEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PreviousSource(Windows::Media::PlayTo::IPlayToSource ** value) = 0;
    virtual HRESULT __stdcall get_CurrentSource(Windows::Media::PlayTo::IPlayToSource ** value) = 0;
};

struct __declspec(uuid("f56a206e-1b77-42ef-8f0d-b949f8d9b260")) __declspec(novtable) IPlayToManager : Windows::IInspectable
{
    virtual HRESULT __stdcall add_SourceRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceRequestedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SourceRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_SourceSelected(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceSelectedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SourceSelected(event_token token) = 0;
    virtual HRESULT __stdcall put_DefaultSourceSelection(bool value) = 0;
    virtual HRESULT __stdcall get_DefaultSourceSelection(bool * value) = 0;
};

struct __declspec(uuid("64e6a887-3982-4f3b-ba20-6155e435325b")) __declspec(novtable) IPlayToManagerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetForCurrentView(Windows::Media::PlayTo::IPlayToManager ** playToManager) = 0;
    virtual HRESULT __stdcall abi_ShowPlayToUI() = 0;
};

struct __declspec(uuid("ac15cf47-a162-4aa6-af1b-3aa35f3b9069")) __declspec(novtable) IPlayToReceiver : Windows::IInspectable
{
    virtual HRESULT __stdcall add_PlayRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_PlayRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_PauseRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_PauseRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_SourceChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::SourceChangeRequestedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SourceChangeRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_PlaybackRateChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::PlaybackRateChangeRequestedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_PlaybackRateChangeRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_CurrentTimeChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::CurrentTimeChangeRequestedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_CurrentTimeChangeRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_MuteChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::MuteChangeRequestedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_MuteChangeRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_VolumeChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::VolumeChangeRequestedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_VolumeChangeRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_TimeUpdateRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_TimeUpdateRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_StopRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_StopRequested(event_token token) = 0;
    virtual HRESULT __stdcall abi_NotifyVolumeChange(double volume, bool mute) = 0;
    virtual HRESULT __stdcall abi_NotifyRateChange(double rate) = 0;
    virtual HRESULT __stdcall abi_NotifyLoadedMetadata() = 0;
    virtual HRESULT __stdcall abi_NotifyTimeUpdate(Windows::Foundation::TimeSpan currentTime) = 0;
    virtual HRESULT __stdcall abi_NotifyDurationChange(Windows::Foundation::TimeSpan duration) = 0;
    virtual HRESULT __stdcall abi_NotifySeeking() = 0;
    virtual HRESULT __stdcall abi_NotifySeeked() = 0;
    virtual HRESULT __stdcall abi_NotifyPaused() = 0;
    virtual HRESULT __stdcall abi_NotifyPlaying() = 0;
    virtual HRESULT __stdcall abi_NotifyEnded() = 0;
    virtual HRESULT __stdcall abi_NotifyError() = 0;
    virtual HRESULT __stdcall abi_NotifyStopped() = 0;
    virtual HRESULT __stdcall get_FriendlyName(hstring * value) = 0;
    virtual HRESULT __stdcall put_FriendlyName(hstring value) = 0;
    virtual HRESULT __stdcall put_SupportsImage(bool value) = 0;
    virtual HRESULT __stdcall get_SupportsImage(bool * value) = 0;
    virtual HRESULT __stdcall put_SupportsAudio(bool value) = 0;
    virtual HRESULT __stdcall get_SupportsAudio(bool * value) = 0;
    virtual HRESULT __stdcall put_SupportsVideo(bool value) = 0;
    virtual HRESULT __stdcall get_SupportsVideo(bool * value) = 0;
    virtual HRESULT __stdcall get_Properties(Windows::Foundation::Collections::IPropertySet ** value) = 0;
    virtual HRESULT __stdcall abi_StartAsync(Windows::Foundation::IAsyncAction ** action) = 0;
    virtual HRESULT __stdcall abi_StopAsync(Windows::Foundation::IAsyncAction ** action) = 0;
};

struct __declspec(uuid("7f138a08-fbb7-4b09-8356-aa5f4e335c31")) __declspec(novtable) IPlayToSource : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Connection(Windows::Media::PlayTo::IPlayToConnection ** value) = 0;
    virtual HRESULT __stdcall get_Next(Windows::Media::PlayTo::IPlayToSource ** value) = 0;
    virtual HRESULT __stdcall put_Next(Windows::Media::PlayTo::IPlayToSource * value) = 0;
    virtual HRESULT __stdcall abi_PlayNext() = 0;
};

struct __declspec(uuid("4100891d-278e-4f29-859b-a9e501053e7d")) __declspec(novtable) IPlayToSourceDeferral : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Complete() = 0;
};

struct __declspec(uuid("f8584665-64f4-44a0-ac0d-468d2b8fda83")) __declspec(novtable) IPlayToSourceRequest : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Deadline(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall abi_DisplayErrorString(hstring errorString) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::Media::PlayTo::IPlayToSourceDeferral ** deferral) = 0;
    virtual HRESULT __stdcall abi_SetSource(Windows::Media::PlayTo::IPlayToSource * value) = 0;
};

struct __declspec(uuid("c5cdc330-29df-4ec6-9da9-9fbdfcfc1b3e")) __declspec(novtable) IPlayToSourceRequestedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SourceRequest(Windows::Media::PlayTo::IPlayToSourceRequest ** value) = 0;
};

struct __declspec(uuid("0c9d8511-5202-4dcb-8c67-abda12bb3c12")) __declspec(novtable) IPlayToSourceSelectedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FriendlyName(hstring * value) = 0;
    virtual HRESULT __stdcall get_Icon(Windows::Storage::Streams::IRandomAccessStreamWithContentType ** value) = 0;
    virtual HRESULT __stdcall get_SupportsImage(bool * value) = 0;
    virtual HRESULT __stdcall get_SupportsAudio(bool * value) = 0;
    virtual HRESULT __stdcall get_SupportsVideo(bool * value) = 0;
};

struct __declspec(uuid("aab253eb-3301-4dc4-afba-b2f2ed9635a0")) __declspec(novtable) IPlayToSourceWithPreferredSourceUri : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PreferredSourceUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_PreferredSourceUri(Windows::Foundation::IUriRuntimeClass * value) = 0;
};

struct __declspec(uuid("0f5661ae-2c88-4cca-8540-d586095d13a5")) __declspec(novtable) IPlaybackRateChangeRequestedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Rate(double * value) = 0;
};

struct __declspec(uuid("fb3f3a96-7aa6-4a8b-86e7-54f6c6d34f64")) __declspec(novtable) ISourceChangeRequestedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Stream(Windows::Storage::Streams::IRandomAccessStreamWithContentType ** value) = 0;
    virtual HRESULT __stdcall get_Title(hstring * value) = 0;
    virtual HRESULT __stdcall get_Author(hstring * value) = 0;
    virtual HRESULT __stdcall get_Album(hstring * value) = 0;
    virtual HRESULT __stdcall get_Genre(hstring * value) = 0;
    virtual HRESULT __stdcall get_Description(hstring * value) = 0;
    virtual HRESULT __stdcall get_Date(Windows::Foundation::IReference<Windows::Foundation::DateTime> ** value) = 0;
    virtual HRESULT __stdcall get_Thumbnail(Windows::Storage::Streams::IRandomAccessStreamReference ** value) = 0;
    virtual HRESULT __stdcall get_Rating(Windows::Foundation::IReference<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall get_Properties(Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> ** value) = 0;
};

struct __declspec(uuid("6f026d5c-cf75-4c2b-913e-6d7c6c329179")) __declspec(novtable) IVolumeChangeRequestedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Volume(double * value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Media::PlayTo::CurrentTimeChangeRequestedEventArgs> { using default_interface = Windows::Media::PlayTo::ICurrentTimeChangeRequestedEventArgs; };
template <> struct traits<Windows::Media::PlayTo::MuteChangeRequestedEventArgs> { using default_interface = Windows::Media::PlayTo::IMuteChangeRequestedEventArgs; };
template <> struct traits<Windows::Media::PlayTo::PlayToConnection> { using default_interface = Windows::Media::PlayTo::IPlayToConnection; };
template <> struct traits<Windows::Media::PlayTo::PlayToConnectionErrorEventArgs> { using default_interface = Windows::Media::PlayTo::IPlayToConnectionErrorEventArgs; };
template <> struct traits<Windows::Media::PlayTo::PlayToConnectionStateChangedEventArgs> { using default_interface = Windows::Media::PlayTo::IPlayToConnectionStateChangedEventArgs; };
template <> struct traits<Windows::Media::PlayTo::PlayToConnectionTransferredEventArgs> { using default_interface = Windows::Media::PlayTo::IPlayToConnectionTransferredEventArgs; };
template <> struct traits<Windows::Media::PlayTo::PlayToManager> { using default_interface = Windows::Media::PlayTo::IPlayToManager; };
template <> struct traits<Windows::Media::PlayTo::PlayToReceiver> { using default_interface = Windows::Media::PlayTo::IPlayToReceiver; };
template <> struct traits<Windows::Media::PlayTo::PlayToSource> { using default_interface = Windows::Media::PlayTo::IPlayToSource; };
template <> struct traits<Windows::Media::PlayTo::PlayToSourceDeferral> { using default_interface = Windows::Media::PlayTo::IPlayToSourceDeferral; };
template <> struct traits<Windows::Media::PlayTo::PlayToSourceRequest> { using default_interface = Windows::Media::PlayTo::IPlayToSourceRequest; };
template <> struct traits<Windows::Media::PlayTo::PlayToSourceRequestedEventArgs> { using default_interface = Windows::Media::PlayTo::IPlayToSourceRequestedEventArgs; };
template <> struct traits<Windows::Media::PlayTo::PlayToSourceSelectedEventArgs> { using default_interface = Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs; };
template <> struct traits<Windows::Media::PlayTo::PlaybackRateChangeRequestedEventArgs> { using default_interface = Windows::Media::PlayTo::IPlaybackRateChangeRequestedEventArgs; };
template <> struct traits<Windows::Media::PlayTo::SourceChangeRequestedEventArgs> { using default_interface = Windows::Media::PlayTo::ISourceChangeRequestedEventArgs; };
template <> struct traits<Windows::Media::PlayTo::VolumeChangeRequestedEventArgs> { using default_interface = Windows::Media::PlayTo::IVolumeChangeRequestedEventArgs; };

}

namespace Windows::Media::PlayTo {

template <typename T> struct impl_ICurrentTimeChangeRequestedEventArgs;
template <typename T> struct impl_IMuteChangeRequestedEventArgs;
template <typename T> struct impl_IPlayToConnection;
template <typename T> struct impl_IPlayToConnectionErrorEventArgs;
template <typename T> struct impl_IPlayToConnectionStateChangedEventArgs;
template <typename T> struct impl_IPlayToConnectionTransferredEventArgs;
template <typename T> struct impl_IPlayToManager;
template <typename T> struct impl_IPlayToManagerStatics;
template <typename T> struct impl_IPlayToReceiver;
template <typename T> struct impl_IPlayToSource;
template <typename T> struct impl_IPlayToSourceDeferral;
template <typename T> struct impl_IPlayToSourceRequest;
template <typename T> struct impl_IPlayToSourceRequestedEventArgs;
template <typename T> struct impl_IPlayToSourceSelectedEventArgs;
template <typename T> struct impl_IPlayToSourceWithPreferredSourceUri;
template <typename T> struct impl_IPlaybackRateChangeRequestedEventArgs;
template <typename T> struct impl_ISourceChangeRequestedEventArgs;
template <typename T> struct impl_IVolumeChangeRequestedEventArgs;

}

namespace impl {

template <> struct traits<Windows::Media::PlayTo::ICurrentTimeChangeRequestedEventArgs>
{
    using abi = ABI::Windows::Media::PlayTo::ICurrentTimeChangeRequestedEventArgs;
    template <typename D> using consume = Windows::Media::PlayTo::impl_ICurrentTimeChangeRequestedEventArgs<D>;
};

template <> struct traits<Windows::Media::PlayTo::IMuteChangeRequestedEventArgs>
{
    using abi = ABI::Windows::Media::PlayTo::IMuteChangeRequestedEventArgs;
    template <typename D> using consume = Windows::Media::PlayTo::impl_IMuteChangeRequestedEventArgs<D>;
};

template <> struct traits<Windows::Media::PlayTo::IPlayToConnection>
{
    using abi = ABI::Windows::Media::PlayTo::IPlayToConnection;
    template <typename D> using consume = Windows::Media::PlayTo::impl_IPlayToConnection<D>;
};

template <> struct traits<Windows::Media::PlayTo::IPlayToConnectionErrorEventArgs>
{
    using abi = ABI::Windows::Media::PlayTo::IPlayToConnectionErrorEventArgs;
    template <typename D> using consume = Windows::Media::PlayTo::impl_IPlayToConnectionErrorEventArgs<D>;
};

template <> struct traits<Windows::Media::PlayTo::IPlayToConnectionStateChangedEventArgs>
{
    using abi = ABI::Windows::Media::PlayTo::IPlayToConnectionStateChangedEventArgs;
    template <typename D> using consume = Windows::Media::PlayTo::impl_IPlayToConnectionStateChangedEventArgs<D>;
};

template <> struct traits<Windows::Media::PlayTo::IPlayToConnectionTransferredEventArgs>
{
    using abi = ABI::Windows::Media::PlayTo::IPlayToConnectionTransferredEventArgs;
    template <typename D> using consume = Windows::Media::PlayTo::impl_IPlayToConnectionTransferredEventArgs<D>;
};

template <> struct traits<Windows::Media::PlayTo::IPlayToManager>
{
    using abi = ABI::Windows::Media::PlayTo::IPlayToManager;
    template <typename D> using consume = Windows::Media::PlayTo::impl_IPlayToManager<D>;
};

template <> struct traits<Windows::Media::PlayTo::IPlayToManagerStatics>
{
    using abi = ABI::Windows::Media::PlayTo::IPlayToManagerStatics;
    template <typename D> using consume = Windows::Media::PlayTo::impl_IPlayToManagerStatics<D>;
};

template <> struct traits<Windows::Media::PlayTo::IPlayToReceiver>
{
    using abi = ABI::Windows::Media::PlayTo::IPlayToReceiver;
    template <typename D> using consume = Windows::Media::PlayTo::impl_IPlayToReceiver<D>;
};

template <> struct traits<Windows::Media::PlayTo::IPlayToSource>
{
    using abi = ABI::Windows::Media::PlayTo::IPlayToSource;
    template <typename D> using consume = Windows::Media::PlayTo::impl_IPlayToSource<D>;
};

template <> struct traits<Windows::Media::PlayTo::IPlayToSourceDeferral>
{
    using abi = ABI::Windows::Media::PlayTo::IPlayToSourceDeferral;
    template <typename D> using consume = Windows::Media::PlayTo::impl_IPlayToSourceDeferral<D>;
};

template <> struct traits<Windows::Media::PlayTo::IPlayToSourceRequest>
{
    using abi = ABI::Windows::Media::PlayTo::IPlayToSourceRequest;
    template <typename D> using consume = Windows::Media::PlayTo::impl_IPlayToSourceRequest<D>;
};

template <> struct traits<Windows::Media::PlayTo::IPlayToSourceRequestedEventArgs>
{
    using abi = ABI::Windows::Media::PlayTo::IPlayToSourceRequestedEventArgs;
    template <typename D> using consume = Windows::Media::PlayTo::impl_IPlayToSourceRequestedEventArgs<D>;
};

template <> struct traits<Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs>
{
    using abi = ABI::Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs;
    template <typename D> using consume = Windows::Media::PlayTo::impl_IPlayToSourceSelectedEventArgs<D>;
};

template <> struct traits<Windows::Media::PlayTo::IPlayToSourceWithPreferredSourceUri>
{
    using abi = ABI::Windows::Media::PlayTo::IPlayToSourceWithPreferredSourceUri;
    template <typename D> using consume = Windows::Media::PlayTo::impl_IPlayToSourceWithPreferredSourceUri<D>;
};

template <> struct traits<Windows::Media::PlayTo::IPlaybackRateChangeRequestedEventArgs>
{
    using abi = ABI::Windows::Media::PlayTo::IPlaybackRateChangeRequestedEventArgs;
    template <typename D> using consume = Windows::Media::PlayTo::impl_IPlaybackRateChangeRequestedEventArgs<D>;
};

template <> struct traits<Windows::Media::PlayTo::ISourceChangeRequestedEventArgs>
{
    using abi = ABI::Windows::Media::PlayTo::ISourceChangeRequestedEventArgs;
    template <typename D> using consume = Windows::Media::PlayTo::impl_ISourceChangeRequestedEventArgs<D>;
};

template <> struct traits<Windows::Media::PlayTo::IVolumeChangeRequestedEventArgs>
{
    using abi = ABI::Windows::Media::PlayTo::IVolumeChangeRequestedEventArgs;
    template <typename D> using consume = Windows::Media::PlayTo::impl_IVolumeChangeRequestedEventArgs<D>;
};

template <> struct traits<Windows::Media::PlayTo::CurrentTimeChangeRequestedEventArgs>
{
    using abi = ABI::Windows::Media::PlayTo::CurrentTimeChangeRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.PlayTo.CurrentTimeChangeRequestedEventArgs"; }
};

template <> struct traits<Windows::Media::PlayTo::MuteChangeRequestedEventArgs>
{
    using abi = ABI::Windows::Media::PlayTo::MuteChangeRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.PlayTo.MuteChangeRequestedEventArgs"; }
};

template <> struct traits<Windows::Media::PlayTo::PlayToConnection>
{
    using abi = ABI::Windows::Media::PlayTo::PlayToConnection;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.PlayTo.PlayToConnection"; }
};

template <> struct traits<Windows::Media::PlayTo::PlayToConnectionErrorEventArgs>
{
    using abi = ABI::Windows::Media::PlayTo::PlayToConnectionErrorEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.PlayTo.PlayToConnectionErrorEventArgs"; }
};

template <> struct traits<Windows::Media::PlayTo::PlayToConnectionStateChangedEventArgs>
{
    using abi = ABI::Windows::Media::PlayTo::PlayToConnectionStateChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.PlayTo.PlayToConnectionStateChangedEventArgs"; }
};

template <> struct traits<Windows::Media::PlayTo::PlayToConnectionTransferredEventArgs>
{
    using abi = ABI::Windows::Media::PlayTo::PlayToConnectionTransferredEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.PlayTo.PlayToConnectionTransferredEventArgs"; }
};

template <> struct traits<Windows::Media::PlayTo::PlayToManager>
{
    using abi = ABI::Windows::Media::PlayTo::PlayToManager;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.PlayTo.PlayToManager"; }
};

template <> struct traits<Windows::Media::PlayTo::PlayToReceiver>
{
    using abi = ABI::Windows::Media::PlayTo::PlayToReceiver;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.PlayTo.PlayToReceiver"; }
};

template <> struct traits<Windows::Media::PlayTo::PlayToSource>
{
    using abi = ABI::Windows::Media::PlayTo::PlayToSource;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.PlayTo.PlayToSource"; }
};

template <> struct traits<Windows::Media::PlayTo::PlayToSourceDeferral>
{
    using abi = ABI::Windows::Media::PlayTo::PlayToSourceDeferral;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.PlayTo.PlayToSourceDeferral"; }
};

template <> struct traits<Windows::Media::PlayTo::PlayToSourceRequest>
{
    using abi = ABI::Windows::Media::PlayTo::PlayToSourceRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.PlayTo.PlayToSourceRequest"; }
};

template <> struct traits<Windows::Media::PlayTo::PlayToSourceRequestedEventArgs>
{
    using abi = ABI::Windows::Media::PlayTo::PlayToSourceRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.PlayTo.PlayToSourceRequestedEventArgs"; }
};

template <> struct traits<Windows::Media::PlayTo::PlayToSourceSelectedEventArgs>
{
    using abi = ABI::Windows::Media::PlayTo::PlayToSourceSelectedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.PlayTo.PlayToSourceSelectedEventArgs"; }
};

template <> struct traits<Windows::Media::PlayTo::PlaybackRateChangeRequestedEventArgs>
{
    using abi = ABI::Windows::Media::PlayTo::PlaybackRateChangeRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.PlayTo.PlaybackRateChangeRequestedEventArgs"; }
};

template <> struct traits<Windows::Media::PlayTo::SourceChangeRequestedEventArgs>
{
    using abi = ABI::Windows::Media::PlayTo::SourceChangeRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.PlayTo.SourceChangeRequestedEventArgs"; }
};

template <> struct traits<Windows::Media::PlayTo::VolumeChangeRequestedEventArgs>
{
    using abi = ABI::Windows::Media::PlayTo::VolumeChangeRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.PlayTo.VolumeChangeRequestedEventArgs"; }
};

}

}
