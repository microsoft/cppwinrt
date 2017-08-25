// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::AppService {

struct AppServiceConnection;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct IMemoryBufferReference;
struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct IPropertySet;
struct ValueSet;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX::Direct3D11 {

struct IDirect3DSurface;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging {

enum class BitmapAlphaMode;
enum class BitmapPixelFormat;
struct SoftwareBitmap;

}

WINRT_EXPORT namespace winrt::Windows::Storage {

struct StorageFile;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct RandomAccessStreamReference;

}

WINRT_EXPORT namespace winrt::Windows::Media {

enum class AudioBufferAccessMode
{
    Read = 0,
    ReadWrite = 1,
    Write = 2,
};

enum class AudioProcessing
{
    Default = 0,
    Raw = 1,
};

enum class MediaPlaybackAutoRepeatMode
{
    None = 0,
    Track = 1,
    List = 2,
};

enum class MediaPlaybackStatus
{
    Closed = 0,
    Changing = 1,
    Stopped = 2,
    Playing = 3,
    Paused = 4,
};

enum class MediaPlaybackType
{
    Unknown = 0,
    Music = 1,
    Video = 2,
    Image = 3,
};

enum class MediaTimelineControllerState
{
    Paused = 0,
    Running = 1,
    Stalled = 2,
    Error = 3,
};

enum class SoundLevel
{
    Muted = 0,
    Low = 1,
    Full = 2,
};

enum class SystemMediaTransportControlsButton
{
    Play = 0,
    Pause = 1,
    Stop = 2,
    Record = 3,
    FastForward = 4,
    Rewind = 5,
    Next = 6,
    Previous = 7,
    ChannelUp = 8,
    ChannelDown = 9,
};

enum class SystemMediaTransportControlsProperty
{
    SoundLevel = 0,
};

struct IAudioBuffer;
struct IAudioFrame;
struct IAudioFrameFactory;
struct IAutoRepeatModeChangeRequestedEventArgs;
struct IImageDisplayProperties;
struct IMediaControl;
struct IMediaExtension;
struct IMediaExtensionManager;
struct IMediaExtensionManager2;
struct IMediaFrame;
struct IMediaMarker;
struct IMediaMarkerTypesStatics;
struct IMediaMarkers;
struct IMediaProcessingTriggerDetails;
struct IMediaTimelineController;
struct IMediaTimelineController2;
struct IMediaTimelineControllerFailedEventArgs;
struct IMusicDisplayProperties;
struct IMusicDisplayProperties2;
struct IMusicDisplayProperties3;
struct IPlaybackPositionChangeRequestedEventArgs;
struct IPlaybackRateChangeRequestedEventArgs;
struct IShuffleEnabledChangeRequestedEventArgs;
struct ISystemMediaTransportControls;
struct ISystemMediaTransportControls2;
struct ISystemMediaTransportControlsButtonPressedEventArgs;
struct ISystemMediaTransportControlsDisplayUpdater;
struct ISystemMediaTransportControlsPropertyChangedEventArgs;
struct ISystemMediaTransportControlsStatics;
struct ISystemMediaTransportControlsTimelineProperties;
struct IVideoDisplayProperties;
struct IVideoDisplayProperties2;
struct IVideoEffectsStatics;
struct IVideoFrame;
struct IVideoFrameFactory;
struct AudioBuffer;
struct AudioFrame;
struct AutoRepeatModeChangeRequestedEventArgs;
struct ImageDisplayProperties;
struct MediaControl;
struct MediaExtensionManager;
struct MediaMarkerTypes;
struct MediaProcessingTriggerDetails;
struct MediaTimelineController;
struct MediaTimelineControllerFailedEventArgs;
struct MusicDisplayProperties;
struct PlaybackPositionChangeRequestedEventArgs;
struct PlaybackRateChangeRequestedEventArgs;
struct ShuffleEnabledChangeRequestedEventArgs;
struct SystemMediaTransportControls;
struct SystemMediaTransportControlsButtonPressedEventArgs;
struct SystemMediaTransportControlsDisplayUpdater;
struct SystemMediaTransportControlsPropertyChangedEventArgs;
struct SystemMediaTransportControlsTimelineProperties;
struct VideoDisplayProperties;
struct VideoEffects;
struct VideoFrame;
struct MediaTimeRange;

}

namespace winrt::impl {

template <> struct category<Windows::Media::IAudioBuffer>{ using type = interface_category; };
template <> struct category<Windows::Media::IAudioFrame>{ using type = interface_category; };
template <> struct category<Windows::Media::IAudioFrameFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::IAutoRepeatModeChangeRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::IImageDisplayProperties>{ using type = interface_category; };
template <> struct category<Windows::Media::IMediaControl>{ using type = interface_category; };
template <> struct category<Windows::Media::IMediaExtension>{ using type = interface_category; };
template <> struct category<Windows::Media::IMediaExtensionManager>{ using type = interface_category; };
template <> struct category<Windows::Media::IMediaExtensionManager2>{ using type = interface_category; };
template <> struct category<Windows::Media::IMediaFrame>{ using type = interface_category; };
template <> struct category<Windows::Media::IMediaMarker>{ using type = interface_category; };
template <> struct category<Windows::Media::IMediaMarkerTypesStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::IMediaMarkers>{ using type = interface_category; };
template <> struct category<Windows::Media::IMediaProcessingTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::Media::IMediaTimelineController>{ using type = interface_category; };
template <> struct category<Windows::Media::IMediaTimelineController2>{ using type = interface_category; };
template <> struct category<Windows::Media::IMediaTimelineControllerFailedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::IMusicDisplayProperties>{ using type = interface_category; };
template <> struct category<Windows::Media::IMusicDisplayProperties2>{ using type = interface_category; };
template <> struct category<Windows::Media::IMusicDisplayProperties3>{ using type = interface_category; };
template <> struct category<Windows::Media::IPlaybackPositionChangeRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::IPlaybackRateChangeRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::IShuffleEnabledChangeRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::ISystemMediaTransportControls>{ using type = interface_category; };
template <> struct category<Windows::Media::ISystemMediaTransportControls2>{ using type = interface_category; };
template <> struct category<Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::ISystemMediaTransportControlsDisplayUpdater>{ using type = interface_category; };
template <> struct category<Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::ISystemMediaTransportControlsStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::ISystemMediaTransportControlsTimelineProperties>{ using type = interface_category; };
template <> struct category<Windows::Media::IVideoDisplayProperties>{ using type = interface_category; };
template <> struct category<Windows::Media::IVideoDisplayProperties2>{ using type = interface_category; };
template <> struct category<Windows::Media::IVideoEffectsStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::IVideoFrame>{ using type = interface_category; };
template <> struct category<Windows::Media::IVideoFrameFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::AudioBuffer>{ using type = class_category; };
template <> struct category<Windows::Media::AudioFrame>{ using type = class_category; };
template <> struct category<Windows::Media::AutoRepeatModeChangeRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::ImageDisplayProperties>{ using type = class_category; };
template <> struct category<Windows::Media::MediaControl>{ using type = class_category; };
template <> struct category<Windows::Media::MediaExtensionManager>{ using type = class_category; };
template <> struct category<Windows::Media::MediaMarkerTypes>{ using type = class_category; };
template <> struct category<Windows::Media::MediaProcessingTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::Media::MediaTimelineController>{ using type = class_category; };
template <> struct category<Windows::Media::MediaTimelineControllerFailedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::MusicDisplayProperties>{ using type = class_category; };
template <> struct category<Windows::Media::PlaybackPositionChangeRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::PlaybackRateChangeRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::ShuffleEnabledChangeRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::SystemMediaTransportControls>{ using type = class_category; };
template <> struct category<Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::SystemMediaTransportControlsDisplayUpdater>{ using type = class_category; };
template <> struct category<Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::SystemMediaTransportControlsTimelineProperties>{ using type = class_category; };
template <> struct category<Windows::Media::VideoDisplayProperties>{ using type = class_category; };
template <> struct category<Windows::Media::VideoEffects>{ using type = class_category; };
template <> struct category<Windows::Media::VideoFrame>{ using type = class_category; };
template <> struct category<Windows::Media::AudioBufferAccessMode>{ using type = enum_category; };
template <> struct category<Windows::Media::AudioProcessing>{ using type = enum_category; };
template <> struct category<Windows::Media::MediaPlaybackAutoRepeatMode>{ using type = enum_category; };
template <> struct category<Windows::Media::MediaPlaybackStatus>{ using type = enum_category; };
template <> struct category<Windows::Media::MediaPlaybackType>{ using type = enum_category; };
template <> struct category<Windows::Media::MediaTimelineControllerState>{ using type = enum_category; };
template <> struct category<Windows::Media::SoundLevel>{ using type = enum_category; };
template <> struct category<Windows::Media::SystemMediaTransportControlsButton>{ using type = enum_category; };
template <> struct category<Windows::Media::SystemMediaTransportControlsProperty>{ using type = enum_category; };
template <> struct category<Windows::Media::MediaTimeRange>{ using type = struct_category<Windows::Foundation::TimeSpan,Windows::Foundation::TimeSpan>; };
template <> struct name<Windows::Media::IAudioBuffer>{ static constexpr auto & value{ L"Windows.Media.IAudioBuffer" }; };
template <> struct name<Windows::Media::IAudioFrame>{ static constexpr auto & value{ L"Windows.Media.IAudioFrame" }; };
template <> struct name<Windows::Media::IAudioFrameFactory>{ static constexpr auto & value{ L"Windows.Media.IAudioFrameFactory" }; };
template <> struct name<Windows::Media::IAutoRepeatModeChangeRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.IAutoRepeatModeChangeRequestedEventArgs" }; };
template <> struct name<Windows::Media::IImageDisplayProperties>{ static constexpr auto & value{ L"Windows.Media.IImageDisplayProperties" }; };
template <> struct name<Windows::Media::IMediaControl>{ static constexpr auto & value{ L"Windows.Media.IMediaControl" }; };
template <> struct name<Windows::Media::IMediaExtension>{ static constexpr auto & value{ L"Windows.Media.IMediaExtension" }; };
template <> struct name<Windows::Media::IMediaExtensionManager>{ static constexpr auto & value{ L"Windows.Media.IMediaExtensionManager" }; };
template <> struct name<Windows::Media::IMediaExtensionManager2>{ static constexpr auto & value{ L"Windows.Media.IMediaExtensionManager2" }; };
template <> struct name<Windows::Media::IMediaFrame>{ static constexpr auto & value{ L"Windows.Media.IMediaFrame" }; };
template <> struct name<Windows::Media::IMediaMarker>{ static constexpr auto & value{ L"Windows.Media.IMediaMarker" }; };
template <> struct name<Windows::Media::IMediaMarkerTypesStatics>{ static constexpr auto & value{ L"Windows.Media.IMediaMarkerTypesStatics" }; };
template <> struct name<Windows::Media::IMediaMarkers>{ static constexpr auto & value{ L"Windows.Media.IMediaMarkers" }; };
template <> struct name<Windows::Media::IMediaProcessingTriggerDetails>{ static constexpr auto & value{ L"Windows.Media.IMediaProcessingTriggerDetails" }; };
template <> struct name<Windows::Media::IMediaTimelineController>{ static constexpr auto & value{ L"Windows.Media.IMediaTimelineController" }; };
template <> struct name<Windows::Media::IMediaTimelineController2>{ static constexpr auto & value{ L"Windows.Media.IMediaTimelineController2" }; };
template <> struct name<Windows::Media::IMediaTimelineControllerFailedEventArgs>{ static constexpr auto & value{ L"Windows.Media.IMediaTimelineControllerFailedEventArgs" }; };
template <> struct name<Windows::Media::IMusicDisplayProperties>{ static constexpr auto & value{ L"Windows.Media.IMusicDisplayProperties" }; };
template <> struct name<Windows::Media::IMusicDisplayProperties2>{ static constexpr auto & value{ L"Windows.Media.IMusicDisplayProperties2" }; };
template <> struct name<Windows::Media::IMusicDisplayProperties3>{ static constexpr auto & value{ L"Windows.Media.IMusicDisplayProperties3" }; };
template <> struct name<Windows::Media::IPlaybackPositionChangeRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.IPlaybackPositionChangeRequestedEventArgs" }; };
template <> struct name<Windows::Media::IPlaybackRateChangeRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.IPlaybackRateChangeRequestedEventArgs" }; };
template <> struct name<Windows::Media::IShuffleEnabledChangeRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.IShuffleEnabledChangeRequestedEventArgs" }; };
template <> struct name<Windows::Media::ISystemMediaTransportControls>{ static constexpr auto & value{ L"Windows.Media.ISystemMediaTransportControls" }; };
template <> struct name<Windows::Media::ISystemMediaTransportControls2>{ static constexpr auto & value{ L"Windows.Media.ISystemMediaTransportControls2" }; };
template <> struct name<Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs>{ static constexpr auto & value{ L"Windows.Media.ISystemMediaTransportControlsButtonPressedEventArgs" }; };
template <> struct name<Windows::Media::ISystemMediaTransportControlsDisplayUpdater>{ static constexpr auto & value{ L"Windows.Media.ISystemMediaTransportControlsDisplayUpdater" }; };
template <> struct name<Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.ISystemMediaTransportControlsPropertyChangedEventArgs" }; };
template <> struct name<Windows::Media::ISystemMediaTransportControlsStatics>{ static constexpr auto & value{ L"Windows.Media.ISystemMediaTransportControlsStatics" }; };
template <> struct name<Windows::Media::ISystemMediaTransportControlsTimelineProperties>{ static constexpr auto & value{ L"Windows.Media.ISystemMediaTransportControlsTimelineProperties" }; };
template <> struct name<Windows::Media::IVideoDisplayProperties>{ static constexpr auto & value{ L"Windows.Media.IVideoDisplayProperties" }; };
template <> struct name<Windows::Media::IVideoDisplayProperties2>{ static constexpr auto & value{ L"Windows.Media.IVideoDisplayProperties2" }; };
template <> struct name<Windows::Media::IVideoEffectsStatics>{ static constexpr auto & value{ L"Windows.Media.IVideoEffectsStatics" }; };
template <> struct name<Windows::Media::IVideoFrame>{ static constexpr auto & value{ L"Windows.Media.IVideoFrame" }; };
template <> struct name<Windows::Media::IVideoFrameFactory>{ static constexpr auto & value{ L"Windows.Media.IVideoFrameFactory" }; };
template <> struct name<Windows::Media::AudioBuffer>{ static constexpr auto & value{ L"Windows.Media.AudioBuffer" }; };
template <> struct name<Windows::Media::AudioFrame>{ static constexpr auto & value{ L"Windows.Media.AudioFrame" }; };
template <> struct name<Windows::Media::AutoRepeatModeChangeRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.AutoRepeatModeChangeRequestedEventArgs" }; };
template <> struct name<Windows::Media::ImageDisplayProperties>{ static constexpr auto & value{ L"Windows.Media.ImageDisplayProperties" }; };
template <> struct name<Windows::Media::MediaControl>{ static constexpr auto & value{ L"Windows.Media.MediaControl" }; };
template <> struct name<Windows::Media::MediaExtensionManager>{ static constexpr auto & value{ L"Windows.Media.MediaExtensionManager" }; };
template <> struct name<Windows::Media::MediaMarkerTypes>{ static constexpr auto & value{ L"Windows.Media.MediaMarkerTypes" }; };
template <> struct name<Windows::Media::MediaProcessingTriggerDetails>{ static constexpr auto & value{ L"Windows.Media.MediaProcessingTriggerDetails" }; };
template <> struct name<Windows::Media::MediaTimelineController>{ static constexpr auto & value{ L"Windows.Media.MediaTimelineController" }; };
template <> struct name<Windows::Media::MediaTimelineControllerFailedEventArgs>{ static constexpr auto & value{ L"Windows.Media.MediaTimelineControllerFailedEventArgs" }; };
template <> struct name<Windows::Media::MusicDisplayProperties>{ static constexpr auto & value{ L"Windows.Media.MusicDisplayProperties" }; };
template <> struct name<Windows::Media::PlaybackPositionChangeRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.PlaybackPositionChangeRequestedEventArgs" }; };
template <> struct name<Windows::Media::PlaybackRateChangeRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.PlaybackRateChangeRequestedEventArgs" }; };
template <> struct name<Windows::Media::ShuffleEnabledChangeRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.ShuffleEnabledChangeRequestedEventArgs" }; };
template <> struct name<Windows::Media::SystemMediaTransportControls>{ static constexpr auto & value{ L"Windows.Media.SystemMediaTransportControls" }; };
template <> struct name<Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs>{ static constexpr auto & value{ L"Windows.Media.SystemMediaTransportControlsButtonPressedEventArgs" }; };
template <> struct name<Windows::Media::SystemMediaTransportControlsDisplayUpdater>{ static constexpr auto & value{ L"Windows.Media.SystemMediaTransportControlsDisplayUpdater" }; };
template <> struct name<Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.SystemMediaTransportControlsPropertyChangedEventArgs" }; };
template <> struct name<Windows::Media::SystemMediaTransportControlsTimelineProperties>{ static constexpr auto & value{ L"Windows.Media.SystemMediaTransportControlsTimelineProperties" }; };
template <> struct name<Windows::Media::VideoDisplayProperties>{ static constexpr auto & value{ L"Windows.Media.VideoDisplayProperties" }; };
template <> struct name<Windows::Media::VideoEffects>{ static constexpr auto & value{ L"Windows.Media.VideoEffects" }; };
template <> struct name<Windows::Media::VideoFrame>{ static constexpr auto & value{ L"Windows.Media.VideoFrame" }; };
template <> struct name<Windows::Media::AudioBufferAccessMode>{ static constexpr auto & value{ L"Windows.Media.AudioBufferAccessMode" }; };
template <> struct name<Windows::Media::AudioProcessing>{ static constexpr auto & value{ L"Windows.Media.AudioProcessing" }; };
template <> struct name<Windows::Media::MediaPlaybackAutoRepeatMode>{ static constexpr auto & value{ L"Windows.Media.MediaPlaybackAutoRepeatMode" }; };
template <> struct name<Windows::Media::MediaPlaybackStatus>{ static constexpr auto & value{ L"Windows.Media.MediaPlaybackStatus" }; };
template <> struct name<Windows::Media::MediaPlaybackType>{ static constexpr auto & value{ L"Windows.Media.MediaPlaybackType" }; };
template <> struct name<Windows::Media::MediaTimelineControllerState>{ static constexpr auto & value{ L"Windows.Media.MediaTimelineControllerState" }; };
template <> struct name<Windows::Media::SoundLevel>{ static constexpr auto & value{ L"Windows.Media.SoundLevel" }; };
template <> struct name<Windows::Media::SystemMediaTransportControlsButton>{ static constexpr auto & value{ L"Windows.Media.SystemMediaTransportControlsButton" }; };
template <> struct name<Windows::Media::SystemMediaTransportControlsProperty>{ static constexpr auto & value{ L"Windows.Media.SystemMediaTransportControlsProperty" }; };
template <> struct name<Windows::Media::MediaTimeRange>{ static constexpr auto & value{ L"Windows.Media.MediaTimeRange" }; };
template <> struct guid<Windows::Media::IAudioBuffer>{ static constexpr GUID value{ 0x35175827,0x724B,0x4C6A,{ 0xB1,0x30,0xF6,0x53,0x7F,0x9A,0xE0,0xD0 } }; };
template <> struct guid<Windows::Media::IAudioFrame>{ static constexpr GUID value{ 0xE36AC304,0xAAB2,0x4277,{ 0x9E,0xD0,0x43,0xCE,0xDF,0x8E,0x29,0xC6 } }; };
template <> struct guid<Windows::Media::IAudioFrameFactory>{ static constexpr GUID value{ 0x91A90ADE,0x2422,0x40A6,{ 0xB9,0xAD,0x30,0xD0,0x24,0x04,0x31,0x7D } }; };
template <> struct guid<Windows::Media::IAutoRepeatModeChangeRequestedEventArgs>{ static constexpr GUID value{ 0xEA137EFA,0xD852,0x438E,{ 0x88,0x2B,0xC9,0x90,0x10,0x9A,0x78,0xF4 } }; };
template <> struct guid<Windows::Media::IImageDisplayProperties>{ static constexpr GUID value{ 0xCD0BC7EF,0x54E7,0x411F,{ 0x99,0x33,0xF0,0xE9,0x8B,0x0A,0x96,0xD2 } }; };
template <> struct guid<Windows::Media::IMediaControl>{ static constexpr GUID value{ 0x98F1FBE1,0x7A8D,0x42CB,{ 0xB6,0xFE,0x8F,0xE6,0x98,0x26,0x4F,0x13 } }; };
template <> struct guid<Windows::Media::IMediaExtension>{ static constexpr GUID value{ 0x07915118,0x45DF,0x442B,{ 0x8A,0x3F,0xF7,0x82,0x6A,0x63,0x70,0xAB } }; };
template <> struct guid<Windows::Media::IMediaExtensionManager>{ static constexpr GUID value{ 0x4A25EAF5,0x242D,0x4DFB,{ 0x97,0xF4,0x69,0xB7,0xC4,0x25,0x76,0xFF } }; };
template <> struct guid<Windows::Media::IMediaExtensionManager2>{ static constexpr GUID value{ 0x5BCEBF47,0x4043,0x4FED,{ 0xAC,0xAF,0x54,0xEC,0x29,0xDF,0xB1,0xF7 } }; };
template <> struct guid<Windows::Media::IMediaFrame>{ static constexpr GUID value{ 0xBFB52F8C,0x5943,0x47D8,{ 0x8E,0x10,0x05,0x30,0x8A,0xA5,0xFB,0xD0 } }; };
template <> struct guid<Windows::Media::IMediaMarker>{ static constexpr GUID value{ 0x1803DEF8,0xDCA5,0x4B6F,{ 0x9C,0x20,0xE3,0xD3,0xC0,0x64,0x36,0x25 } }; };
template <> struct guid<Windows::Media::IMediaMarkerTypesStatics>{ static constexpr GUID value{ 0xBB198040,0x482F,0x4743,{ 0x88,0x32,0x45,0x85,0x38,0x21,0xEC,0xE0 } }; };
template <> struct guid<Windows::Media::IMediaMarkers>{ static constexpr GUID value{ 0xAFEAB189,0xF8DD,0x466E,{ 0xAA,0x10,0x92,0x0B,0x52,0x35,0x3F,0xDF } }; };
template <> struct guid<Windows::Media::IMediaProcessingTriggerDetails>{ static constexpr GUID value{ 0xEB8564AC,0xA351,0x4F4E,{ 0xB4,0xF0,0x9B,0xF2,0x40,0x89,0x93,0xDB } }; };
template <> struct guid<Windows::Media::IMediaTimelineController>{ static constexpr GUID value{ 0x8ED361F3,0x0B78,0x4360,{ 0xBF,0x71,0x0C,0x84,0x19,0x99,0xEA,0x1B } }; };
template <> struct guid<Windows::Media::IMediaTimelineController2>{ static constexpr GUID value{ 0xEF74EA38,0x9E72,0x4DF9,{ 0x83,0x55,0x6E,0x90,0xC8,0x1B,0xBA,0xDD } }; };
template <> struct guid<Windows::Media::IMediaTimelineControllerFailedEventArgs>{ static constexpr GUID value{ 0x8821F81D,0x3E77,0x43FB,{ 0xBE,0x26,0x4F,0xC8,0x7A,0x04,0x48,0x34 } }; };
template <> struct guid<Windows::Media::IMusicDisplayProperties>{ static constexpr GUID value{ 0x6BBF0C59,0xD0A0,0x4D26,{ 0x92,0xA0,0xF9,0x78,0xE1,0xD1,0x8E,0x7B } }; };
template <> struct guid<Windows::Media::IMusicDisplayProperties2>{ static constexpr GUID value{ 0x00368462,0x97D3,0x44B9,{ 0xB0,0x0F,0x00,0x8A,0xFC,0xEF,0xAF,0x18 } }; };
template <> struct guid<Windows::Media::IMusicDisplayProperties3>{ static constexpr GUID value{ 0x4DB51AC1,0x0681,0x4E8C,{ 0x94,0x01,0xB8,0x15,0x9D,0x9E,0xEF,0xC7 } }; };
template <> struct guid<Windows::Media::IPlaybackPositionChangeRequestedEventArgs>{ static constexpr GUID value{ 0xB4493F88,0xEB28,0x4961,{ 0x9C,0x14,0x33,0x5E,0x44,0xF3,0xE1,0x25 } }; };
template <> struct guid<Windows::Media::IPlaybackRateChangeRequestedEventArgs>{ static constexpr GUID value{ 0x2CE2C41F,0x3CD6,0x4F77,{ 0x9B,0xA7,0xEB,0x27,0xC2,0x6A,0x21,0x40 } }; };
template <> struct guid<Windows::Media::IShuffleEnabledChangeRequestedEventArgs>{ static constexpr GUID value{ 0x49B593FE,0x4FD0,0x4666,{ 0xA3,0x14,0xC0,0xE0,0x19,0x40,0xD3,0x02 } }; };
template <> struct guid<Windows::Media::ISystemMediaTransportControls>{ static constexpr GUID value{ 0x99FA3FF4,0x1742,0x42A6,{ 0x90,0x2E,0x08,0x7D,0x41,0xF9,0x65,0xEC } }; };
template <> struct guid<Windows::Media::ISystemMediaTransportControls2>{ static constexpr GUID value{ 0xEA98D2F6,0x7F3C,0x4AF2,{ 0xA5,0x86,0x72,0x88,0x98,0x08,0xEF,0xB1 } }; };
template <> struct guid<Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs>{ static constexpr GUID value{ 0xB7F47116,0xA56F,0x4DC8,{ 0x9E,0x11,0x92,0x03,0x1F,0x4A,0x87,0xC2 } }; };
template <> struct guid<Windows::Media::ISystemMediaTransportControlsDisplayUpdater>{ static constexpr GUID value{ 0x8ABBC53E,0xFA55,0x4ECF,{ 0xAD,0x8E,0xC9,0x84,0xE5,0xDD,0x15,0x50 } }; };
template <> struct guid<Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs>{ static constexpr GUID value{ 0xD0CA0936,0x339B,0x4CB3,{ 0x8E,0xEB,0x73,0x76,0x07,0xF5,0x6E,0x08 } }; };
template <> struct guid<Windows::Media::ISystemMediaTransportControlsStatics>{ static constexpr GUID value{ 0x43BA380A,0xECA4,0x4832,{ 0x91,0xAB,0xD4,0x15,0xFA,0xE4,0x84,0xC6 } }; };
template <> struct guid<Windows::Media::ISystemMediaTransportControlsTimelineProperties>{ static constexpr GUID value{ 0x5125316A,0xC3A2,0x475B,{ 0x85,0x07,0x93,0x53,0x4D,0xC8,0x8F,0x15 } }; };
template <> struct guid<Windows::Media::IVideoDisplayProperties>{ static constexpr GUID value{ 0x5609FDB1,0x5D2D,0x4872,{ 0x81,0x70,0x45,0xDE,0xE5,0xBC,0x2F,0x5C } }; };
template <> struct guid<Windows::Media::IVideoDisplayProperties2>{ static constexpr GUID value{ 0xB410E1CE,0xAB52,0x41AB,{ 0xA4,0x86,0xCC,0x10,0xFA,0xB1,0x52,0xF9 } }; };
template <> struct guid<Windows::Media::IVideoEffectsStatics>{ static constexpr GUID value{ 0x1FCDA5E8,0xBAF1,0x4521,{ 0x98,0x0C,0x3B,0xCE,0xBB,0x44,0xCF,0x38 } }; };
template <> struct guid<Windows::Media::IVideoFrame>{ static constexpr GUID value{ 0x0CC06625,0x90FC,0x4C92,{ 0xBD,0x95,0x7D,0xED,0x21,0x81,0x9D,0x1C } }; };
template <> struct guid<Windows::Media::IVideoFrameFactory>{ static constexpr GUID value{ 0x014B6D69,0x2228,0x4C92,{ 0x92,0xFF,0x50,0xC3,0x80,0xD3,0xE7,0x76 } }; };
template <> struct default_interface<Windows::Media::AudioBuffer>{ using type = Windows::Media::IAudioBuffer; };
template <> struct default_interface<Windows::Media::AudioFrame>{ using type = Windows::Media::IAudioFrame; };
template <> struct default_interface<Windows::Media::AutoRepeatModeChangeRequestedEventArgs>{ using type = Windows::Media::IAutoRepeatModeChangeRequestedEventArgs; };
template <> struct default_interface<Windows::Media::ImageDisplayProperties>{ using type = Windows::Media::IImageDisplayProperties; };
template <> struct default_interface<Windows::Media::MediaExtensionManager>{ using type = Windows::Media::IMediaExtensionManager; };
template <> struct default_interface<Windows::Media::MediaProcessingTriggerDetails>{ using type = Windows::Media::IMediaProcessingTriggerDetails; };
template <> struct default_interface<Windows::Media::MediaTimelineController>{ using type = Windows::Media::IMediaTimelineController; };
template <> struct default_interface<Windows::Media::MediaTimelineControllerFailedEventArgs>{ using type = Windows::Media::IMediaTimelineControllerFailedEventArgs; };
template <> struct default_interface<Windows::Media::MusicDisplayProperties>{ using type = Windows::Media::IMusicDisplayProperties; };
template <> struct default_interface<Windows::Media::PlaybackPositionChangeRequestedEventArgs>{ using type = Windows::Media::IPlaybackPositionChangeRequestedEventArgs; };
template <> struct default_interface<Windows::Media::PlaybackRateChangeRequestedEventArgs>{ using type = Windows::Media::IPlaybackRateChangeRequestedEventArgs; };
template <> struct default_interface<Windows::Media::ShuffleEnabledChangeRequestedEventArgs>{ using type = Windows::Media::IShuffleEnabledChangeRequestedEventArgs; };
template <> struct default_interface<Windows::Media::SystemMediaTransportControls>{ using type = Windows::Media::ISystemMediaTransportControls; };
template <> struct default_interface<Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs>{ using type = Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs; };
template <> struct default_interface<Windows::Media::SystemMediaTransportControlsDisplayUpdater>{ using type = Windows::Media::ISystemMediaTransportControlsDisplayUpdater; };
template <> struct default_interface<Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs>{ using type = Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs; };
template <> struct default_interface<Windows::Media::SystemMediaTransportControlsTimelineProperties>{ using type = Windows::Media::ISystemMediaTransportControlsTimelineProperties; };
template <> struct default_interface<Windows::Media::VideoDisplayProperties>{ using type = Windows::Media::IVideoDisplayProperties; };
template <> struct default_interface<Windows::Media::VideoFrame>{ using type = Windows::Media::IVideoFrame; };

template <typename D>
struct consume_Windows_Media_IAudioBuffer
{
    uint32_t Capacity() const;
    uint32_t Length() const;
    void Length(uint32_t value) const;
};
template <> struct consume<Windows::Media::IAudioBuffer> { template <typename D> using type = consume_Windows_Media_IAudioBuffer<D>; };

template <typename D>
struct consume_Windows_Media_IAudioFrame
{
    Windows::Media::AudioBuffer LockBuffer(Windows::Media::AudioBufferAccessMode const& mode) const;
};
template <> struct consume<Windows::Media::IAudioFrame> { template <typename D> using type = consume_Windows_Media_IAudioFrame<D>; };

template <typename D>
struct consume_Windows_Media_IAudioFrameFactory
{
    Windows::Media::AudioFrame Create(uint32_t capacity) const;
};
template <> struct consume<Windows::Media::IAudioFrameFactory> { template <typename D> using type = consume_Windows_Media_IAudioFrameFactory<D>; };

template <typename D>
struct consume_Windows_Media_IAutoRepeatModeChangeRequestedEventArgs
{
    Windows::Media::MediaPlaybackAutoRepeatMode RequestedAutoRepeatMode() const;
};
template <> struct consume<Windows::Media::IAutoRepeatModeChangeRequestedEventArgs> { template <typename D> using type = consume_Windows_Media_IAutoRepeatModeChangeRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_IImageDisplayProperties
{
    hstring Title() const;
    void Title(param::hstring const& value) const;
    hstring Subtitle() const;
    void Subtitle(param::hstring const& value) const;
};
template <> struct consume<Windows::Media::IImageDisplayProperties> { template <typename D> using type = consume_Windows_Media_IImageDisplayProperties<D>; };

template <typename D>
struct consume_Windows_Media_IMediaControl
{
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] event_token SoundLevelChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using SoundLevelChanged_revoker = event_revoker<Windows::Media::IMediaControl>;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] SoundLevelChanged_revoker SoundLevelChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] void SoundLevelChanged(event_token const& cookie) const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] event_token PlayPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using PlayPressed_revoker = event_revoker<Windows::Media::IMediaControl>;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] PlayPressed_revoker PlayPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] void PlayPressed(event_token const& cookie) const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] event_token PausePressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using PausePressed_revoker = event_revoker<Windows::Media::IMediaControl>;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] PausePressed_revoker PausePressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] void PausePressed(event_token const& cookie) const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] event_token StopPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using StopPressed_revoker = event_revoker<Windows::Media::IMediaControl>;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] StopPressed_revoker StopPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] void StopPressed(event_token const& cookie) const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] event_token PlayPauseTogglePressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using PlayPauseTogglePressed_revoker = event_revoker<Windows::Media::IMediaControl>;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] PlayPauseTogglePressed_revoker PlayPauseTogglePressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] void PlayPauseTogglePressed(event_token const& cookie) const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] event_token RecordPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using RecordPressed_revoker = event_revoker<Windows::Media::IMediaControl>;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] RecordPressed_revoker RecordPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] void RecordPressed(event_token const& cookie) const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] event_token NextTrackPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using NextTrackPressed_revoker = event_revoker<Windows::Media::IMediaControl>;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] NextTrackPressed_revoker NextTrackPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] void NextTrackPressed(event_token const& cookie) const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] event_token PreviousTrackPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using PreviousTrackPressed_revoker = event_revoker<Windows::Media::IMediaControl>;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] PreviousTrackPressed_revoker PreviousTrackPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] void PreviousTrackPressed(event_token const& cookie) const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] event_token FastForwardPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using FastForwardPressed_revoker = event_revoker<Windows::Media::IMediaControl>;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] FastForwardPressed_revoker FastForwardPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] void FastForwardPressed(event_token const& cookie) const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] event_token RewindPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using RewindPressed_revoker = event_revoker<Windows::Media::IMediaControl>;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] RewindPressed_revoker RewindPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] void RewindPressed(event_token const& cookie) const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] event_token ChannelUpPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using ChannelUpPressed_revoker = event_revoker<Windows::Media::IMediaControl>;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] ChannelUpPressed_revoker ChannelUpPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] void ChannelUpPressed(event_token const& cookie) const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] event_token ChannelDownPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using ChannelDownPressed_revoker = event_revoker<Windows::Media::IMediaControl>;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] ChannelDownPressed_revoker ChannelDownPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] void ChannelDownPressed(event_token const& cookie) const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] Windows::Media::SoundLevel SoundLevel() const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] void TrackName(param::hstring const& value) const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] hstring TrackName() const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] void ArtistName(param::hstring const& value) const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] hstring ArtistName() const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] void IsPlaying(bool value) const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] bool IsPlaying() const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] void AlbumArt(Windows::Foundation::Uri const& value) const;
    [[deprecated("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")]] Windows::Foundation::Uri AlbumArt() const;
};
template <> struct consume<Windows::Media::IMediaControl> { template <typename D> using type = consume_Windows_Media_IMediaControl<D>; };

template <typename D>
struct consume_Windows_Media_IMediaExtension
{
    void SetProperties(Windows::Foundation::Collections::IPropertySet const& configuration) const;
};
template <> struct consume<Windows::Media::IMediaExtension> { template <typename D> using type = consume_Windows_Media_IMediaExtension<D>; };

template <typename D>
struct consume_Windows_Media_IMediaExtensionManager
{
    void RegisterSchemeHandler(param::hstring const& activatableClassId, param::hstring const& scheme) const;
    void RegisterSchemeHandler(param::hstring const& activatableClassId, param::hstring const& scheme, Windows::Foundation::Collections::IPropertySet const& configuration) const;
    void RegisterByteStreamHandler(param::hstring const& activatableClassId, param::hstring const& fileExtension, param::hstring const& mimeType) const;
    void RegisterByteStreamHandler(param::hstring const& activatableClassId, param::hstring const& fileExtension, param::hstring const& mimeType, Windows::Foundation::Collections::IPropertySet const& configuration) const;
    void RegisterAudioDecoder(param::hstring const& activatableClassId, GUID const& inputSubtype, GUID const& outputSubtype) const;
    void RegisterAudioDecoder(param::hstring const& activatableClassId, GUID const& inputSubtype, GUID const& outputSubtype, Windows::Foundation::Collections::IPropertySet const& configuration) const;
    void RegisterAudioEncoder(param::hstring const& activatableClassId, GUID const& inputSubtype, GUID const& outputSubtype) const;
    void RegisterAudioEncoder(param::hstring const& activatableClassId, GUID const& inputSubtype, GUID const& outputSubtype, Windows::Foundation::Collections::IPropertySet const& configuration) const;
    void RegisterVideoDecoder(param::hstring const& activatableClassId, GUID const& inputSubtype, GUID const& outputSubtype) const;
    void RegisterVideoDecoder(param::hstring const& activatableClassId, GUID const& inputSubtype, GUID const& outputSubtype, Windows::Foundation::Collections::IPropertySet const& configuration) const;
    void RegisterVideoEncoder(param::hstring const& activatableClassId, GUID const& inputSubtype, GUID const& outputSubtype) const;
    void RegisterVideoEncoder(param::hstring const& activatableClassId, GUID const& inputSubtype, GUID const& outputSubtype, Windows::Foundation::Collections::IPropertySet const& configuration) const;
};
template <> struct consume<Windows::Media::IMediaExtensionManager> { template <typename D> using type = consume_Windows_Media_IMediaExtensionManager<D>; };

template <typename D>
struct consume_Windows_Media_IMediaExtensionManager2
{
    void RegisterMediaExtensionForAppService(Windows::Media::IMediaExtension const& extension, Windows::ApplicationModel::AppService::AppServiceConnection const& connection) const;
};
template <> struct consume<Windows::Media::IMediaExtensionManager2> { template <typename D> using type = consume_Windows_Media_IMediaExtensionManager2<D>; };

template <typename D>
struct consume_Windows_Media_IMediaFrame
{
    hstring Type() const;
    bool IsReadOnly() const;
    void RelativeTime(optional<Windows::Foundation::TimeSpan> const& value) const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> RelativeTime() const;
    void SystemRelativeTime(optional<Windows::Foundation::TimeSpan> const& value) const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> SystemRelativeTime() const;
    void Duration(optional<Windows::Foundation::TimeSpan> const& value) const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> Duration() const;
    void IsDiscontinuous(bool value) const;
    bool IsDiscontinuous() const;
    Windows::Foundation::Collections::IPropertySet ExtendedProperties() const;
};
template <> struct consume<Windows::Media::IMediaFrame> { template <typename D> using type = consume_Windows_Media_IMediaFrame<D>; };

template <typename D>
struct consume_Windows_Media_IMediaMarker
{
    Windows::Foundation::TimeSpan Time() const;
    hstring MediaMarkerType() const;
    hstring Text() const;
};
template <> struct consume<Windows::Media::IMediaMarker> { template <typename D> using type = consume_Windows_Media_IMediaMarker<D>; };

template <typename D>
struct consume_Windows_Media_IMediaMarkerTypesStatics
{
    hstring Bookmark() const;
};
template <> struct consume<Windows::Media::IMediaMarkerTypesStatics> { template <typename D> using type = consume_Windows_Media_IMediaMarkerTypesStatics<D>; };

template <typename D>
struct consume_Windows_Media_IMediaMarkers
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::IMediaMarker> Markers() const;
};
template <> struct consume<Windows::Media::IMediaMarkers> { template <typename D> using type = consume_Windows_Media_IMediaMarkers<D>; };

template <typename D>
struct consume_Windows_Media_IMediaProcessingTriggerDetails
{
    Windows::Foundation::Collections::ValueSet Arguments() const;
};
template <> struct consume<Windows::Media::IMediaProcessingTriggerDetails> { template <typename D> using type = consume_Windows_Media_IMediaProcessingTriggerDetails<D>; };

template <typename D>
struct consume_Windows_Media_IMediaTimelineController
{
    void Start() const;
    void Resume() const;
    void Pause() const;
    Windows::Foundation::TimeSpan Position() const;
    void Position(Windows::Foundation::TimeSpan const& value) const;
    double ClockRate() const;
    void ClockRate(double value) const;
    Windows::Media::MediaTimelineControllerState State() const;
    event_token PositionChanged(Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::Foundation::IInspectable> const& positionChangedEventHandler) const;
    using PositionChanged_revoker = event_revoker<Windows::Media::IMediaTimelineController>;
    PositionChanged_revoker PositionChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::Foundation::IInspectable> const& positionChangedEventHandler) const;
    void PositionChanged(event_token const& eventCookie) const;
    event_token StateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::Foundation::IInspectable> const& stateChangedEventHandler) const;
    using StateChanged_revoker = event_revoker<Windows::Media::IMediaTimelineController>;
    StateChanged_revoker StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::Foundation::IInspectable> const& stateChangedEventHandler) const;
    void StateChanged(event_token const& eventCookie) const;
};
template <> struct consume<Windows::Media::IMediaTimelineController> { template <typename D> using type = consume_Windows_Media_IMediaTimelineController<D>; };

template <typename D>
struct consume_Windows_Media_IMediaTimelineController2
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> Duration() const;
    void Duration(optional<Windows::Foundation::TimeSpan> const& value) const;
    bool IsLoopingEnabled() const;
    void IsLoopingEnabled(bool value) const;
    event_token Failed(Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::Media::MediaTimelineControllerFailedEventArgs> const& eventHandler) const;
    using Failed_revoker = event_revoker<Windows::Media::IMediaTimelineController2>;
    Failed_revoker Failed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::Media::MediaTimelineControllerFailedEventArgs> const& eventHandler) const;
    void Failed(event_token const& token) const;
    event_token Ended(Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::Foundation::IInspectable> const& eventHandler) const;
    using Ended_revoker = event_revoker<Windows::Media::IMediaTimelineController2>;
    Ended_revoker Ended(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::Foundation::IInspectable> const& eventHandler) const;
    void Ended(event_token const& token) const;
};
template <> struct consume<Windows::Media::IMediaTimelineController2> { template <typename D> using type = consume_Windows_Media_IMediaTimelineController2<D>; };

template <typename D>
struct consume_Windows_Media_IMediaTimelineControllerFailedEventArgs
{
    HRESULT ExtendedError() const;
};
template <> struct consume<Windows::Media::IMediaTimelineControllerFailedEventArgs> { template <typename D> using type = consume_Windows_Media_IMediaTimelineControllerFailedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_IMusicDisplayProperties
{
    hstring Title() const;
    void Title(param::hstring const& value) const;
    hstring AlbumArtist() const;
    void AlbumArtist(param::hstring const& value) const;
    hstring Artist() const;
    void Artist(param::hstring const& value) const;
};
template <> struct consume<Windows::Media::IMusicDisplayProperties> { template <typename D> using type = consume_Windows_Media_IMusicDisplayProperties<D>; };

template <typename D>
struct consume_Windows_Media_IMusicDisplayProperties2
{
    hstring AlbumTitle() const;
    void AlbumTitle(param::hstring const& value) const;
    uint32_t TrackNumber() const;
    void TrackNumber(uint32_t value) const;
    Windows::Foundation::Collections::IVector<hstring> Genres() const;
};
template <> struct consume<Windows::Media::IMusicDisplayProperties2> { template <typename D> using type = consume_Windows_Media_IMusicDisplayProperties2<D>; };

template <typename D>
struct consume_Windows_Media_IMusicDisplayProperties3
{
    uint32_t AlbumTrackCount() const;
    void AlbumTrackCount(uint32_t value) const;
};
template <> struct consume<Windows::Media::IMusicDisplayProperties3> { template <typename D> using type = consume_Windows_Media_IMusicDisplayProperties3<D>; };

template <typename D>
struct consume_Windows_Media_IPlaybackPositionChangeRequestedEventArgs
{
    Windows::Foundation::TimeSpan RequestedPlaybackPosition() const;
};
template <> struct consume<Windows::Media::IPlaybackPositionChangeRequestedEventArgs> { template <typename D> using type = consume_Windows_Media_IPlaybackPositionChangeRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_IPlaybackRateChangeRequestedEventArgs
{
    double RequestedPlaybackRate() const;
};
template <> struct consume<Windows::Media::IPlaybackRateChangeRequestedEventArgs> { template <typename D> using type = consume_Windows_Media_IPlaybackRateChangeRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_IShuffleEnabledChangeRequestedEventArgs
{
    bool RequestedShuffleEnabled() const;
};
template <> struct consume<Windows::Media::IShuffleEnabledChangeRequestedEventArgs> { template <typename D> using type = consume_Windows_Media_IShuffleEnabledChangeRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_ISystemMediaTransportControls
{
    Windows::Media::MediaPlaybackStatus PlaybackStatus() const;
    void PlaybackStatus(Windows::Media::MediaPlaybackStatus const& value) const;
    Windows::Media::SystemMediaTransportControlsDisplayUpdater DisplayUpdater() const;
    Windows::Media::SoundLevel SoundLevel() const;
    bool IsEnabled() const;
    void IsEnabled(bool value) const;
    bool IsPlayEnabled() const;
    void IsPlayEnabled(bool value) const;
    bool IsStopEnabled() const;
    void IsStopEnabled(bool value) const;
    bool IsPauseEnabled() const;
    void IsPauseEnabled(bool value) const;
    bool IsRecordEnabled() const;
    void IsRecordEnabled(bool value) const;
    bool IsFastForwardEnabled() const;
    void IsFastForwardEnabled(bool value) const;
    bool IsRewindEnabled() const;
    void IsRewindEnabled(bool value) const;
    bool IsPreviousEnabled() const;
    void IsPreviousEnabled(bool value) const;
    bool IsNextEnabled() const;
    void IsNextEnabled(bool value) const;
    bool IsChannelUpEnabled() const;
    void IsChannelUpEnabled(bool value) const;
    bool IsChannelDownEnabled() const;
    void IsChannelDownEnabled(bool value) const;
    event_token ButtonPressed(Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs> const& handler) const;
    using ButtonPressed_revoker = event_revoker<Windows::Media::ISystemMediaTransportControls>;
    ButtonPressed_revoker ButtonPressed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs> const& handler) const;
    void ButtonPressed(event_token const& token) const;
    event_token PropertyChanged(Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs> const& handler) const;
    using PropertyChanged_revoker = event_revoker<Windows::Media::ISystemMediaTransportControls>;
    PropertyChanged_revoker PropertyChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs> const& handler) const;
    void PropertyChanged(event_token const& token) const;
};
template <> struct consume<Windows::Media::ISystemMediaTransportControls> { template <typename D> using type = consume_Windows_Media_ISystemMediaTransportControls<D>; };

template <typename D>
struct consume_Windows_Media_ISystemMediaTransportControls2
{
    Windows::Media::MediaPlaybackAutoRepeatMode AutoRepeatMode() const;
    void AutoRepeatMode(Windows::Media::MediaPlaybackAutoRepeatMode const& value) const;
    bool ShuffleEnabled() const;
    void ShuffleEnabled(bool value) const;
    double PlaybackRate() const;
    void PlaybackRate(double value) const;
    void UpdateTimelineProperties(Windows::Media::SystemMediaTransportControlsTimelineProperties const& timelineProperties) const;
    event_token PlaybackPositionChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::PlaybackPositionChangeRequestedEventArgs> const& handler) const;
    using PlaybackPositionChangeRequested_revoker = event_revoker<Windows::Media::ISystemMediaTransportControls2>;
    PlaybackPositionChangeRequested_revoker PlaybackPositionChangeRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::PlaybackPositionChangeRequestedEventArgs> const& handler) const;
    void PlaybackPositionChangeRequested(event_token const& token) const;
    event_token PlaybackRateChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::PlaybackRateChangeRequestedEventArgs> const& handler) const;
    using PlaybackRateChangeRequested_revoker = event_revoker<Windows::Media::ISystemMediaTransportControls2>;
    PlaybackRateChangeRequested_revoker PlaybackRateChangeRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::PlaybackRateChangeRequestedEventArgs> const& handler) const;
    void PlaybackRateChangeRequested(event_token const& token) const;
    event_token ShuffleEnabledChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::ShuffleEnabledChangeRequestedEventArgs> const& handler) const;
    using ShuffleEnabledChangeRequested_revoker = event_revoker<Windows::Media::ISystemMediaTransportControls2>;
    ShuffleEnabledChangeRequested_revoker ShuffleEnabledChangeRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::ShuffleEnabledChangeRequestedEventArgs> const& handler) const;
    void ShuffleEnabledChangeRequested(event_token const& token) const;
    event_token AutoRepeatModeChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::AutoRepeatModeChangeRequestedEventArgs> const& handler) const;
    using AutoRepeatModeChangeRequested_revoker = event_revoker<Windows::Media::ISystemMediaTransportControls2>;
    AutoRepeatModeChangeRequested_revoker AutoRepeatModeChangeRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::AutoRepeatModeChangeRequestedEventArgs> const& handler) const;
    void AutoRepeatModeChangeRequested(event_token const& token) const;
};
template <> struct consume<Windows::Media::ISystemMediaTransportControls2> { template <typename D> using type = consume_Windows_Media_ISystemMediaTransportControls2<D>; };

template <typename D>
struct consume_Windows_Media_ISystemMediaTransportControlsButtonPressedEventArgs
{
    Windows::Media::SystemMediaTransportControlsButton Button() const;
};
template <> struct consume<Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs> { template <typename D> using type = consume_Windows_Media_ISystemMediaTransportControlsButtonPressedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_ISystemMediaTransportControlsDisplayUpdater
{
    Windows::Media::MediaPlaybackType Type() const;
    void Type(Windows::Media::MediaPlaybackType const& value) const;
    hstring AppMediaId() const;
    void AppMediaId(param::hstring const& value) const;
    Windows::Storage::Streams::RandomAccessStreamReference Thumbnail() const;
    void Thumbnail(Windows::Storage::Streams::RandomAccessStreamReference const& value) const;
    Windows::Media::MusicDisplayProperties MusicProperties() const;
    Windows::Media::VideoDisplayProperties VideoProperties() const;
    Windows::Media::ImageDisplayProperties ImageProperties() const;
    Windows::Foundation::IAsyncOperation<bool> CopyFromFileAsync(Windows::Media::MediaPlaybackType const& type, Windows::Storage::StorageFile const& source) const;
    void ClearAll() const;
    void Update() const;
};
template <> struct consume<Windows::Media::ISystemMediaTransportControlsDisplayUpdater> { template <typename D> using type = consume_Windows_Media_ISystemMediaTransportControlsDisplayUpdater<D>; };

template <typename D>
struct consume_Windows_Media_ISystemMediaTransportControlsPropertyChangedEventArgs
{
    Windows::Media::SystemMediaTransportControlsProperty Property() const;
};
template <> struct consume<Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs> { template <typename D> using type = consume_Windows_Media_ISystemMediaTransportControlsPropertyChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_ISystemMediaTransportControlsStatics
{
    Windows::Media::SystemMediaTransportControls GetForCurrentView() const;
};
template <> struct consume<Windows::Media::ISystemMediaTransportControlsStatics> { template <typename D> using type = consume_Windows_Media_ISystemMediaTransportControlsStatics<D>; };

template <typename D>
struct consume_Windows_Media_ISystemMediaTransportControlsTimelineProperties
{
    Windows::Foundation::TimeSpan StartTime() const;
    void StartTime(Windows::Foundation::TimeSpan const& value) const;
    Windows::Foundation::TimeSpan EndTime() const;
    void EndTime(Windows::Foundation::TimeSpan const& value) const;
    Windows::Foundation::TimeSpan MinSeekTime() const;
    void MinSeekTime(Windows::Foundation::TimeSpan const& value) const;
    Windows::Foundation::TimeSpan MaxSeekTime() const;
    void MaxSeekTime(Windows::Foundation::TimeSpan const& value) const;
    Windows::Foundation::TimeSpan Position() const;
    void Position(Windows::Foundation::TimeSpan const& value) const;
};
template <> struct consume<Windows::Media::ISystemMediaTransportControlsTimelineProperties> { template <typename D> using type = consume_Windows_Media_ISystemMediaTransportControlsTimelineProperties<D>; };

template <typename D>
struct consume_Windows_Media_IVideoDisplayProperties
{
    hstring Title() const;
    void Title(param::hstring const& value) const;
    hstring Subtitle() const;
    void Subtitle(param::hstring const& value) const;
};
template <> struct consume<Windows::Media::IVideoDisplayProperties> { template <typename D> using type = consume_Windows_Media_IVideoDisplayProperties<D>; };

template <typename D>
struct consume_Windows_Media_IVideoDisplayProperties2
{
    Windows::Foundation::Collections::IVector<hstring> Genres() const;
};
template <> struct consume<Windows::Media::IVideoDisplayProperties2> { template <typename D> using type = consume_Windows_Media_IVideoDisplayProperties2<D>; };

template <typename D>
struct consume_Windows_Media_IVideoEffectsStatics
{
    hstring VideoStabilization() const;
};
template <> struct consume<Windows::Media::IVideoEffectsStatics> { template <typename D> using type = consume_Windows_Media_IVideoEffectsStatics<D>; };

template <typename D>
struct consume_Windows_Media_IVideoFrame
{
    Windows::Graphics::Imaging::SoftwareBitmap SoftwareBitmap() const;
    Windows::Foundation::IAsyncAction CopyToAsync(Windows::Media::VideoFrame const& frame) const;
    Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface Direct3DSurface() const;
};
template <> struct consume<Windows::Media::IVideoFrame> { template <typename D> using type = consume_Windows_Media_IVideoFrame<D>; };

template <typename D>
struct consume_Windows_Media_IVideoFrameFactory
{
    Windows::Media::VideoFrame Create(Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height) const;
    Windows::Media::VideoFrame CreateWithAlpha(Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha) const;
};
template <> struct consume<Windows::Media::IVideoFrameFactory> { template <typename D> using type = consume_Windows_Media_IVideoFrameFactory<D>; };

template <> struct abi<Windows::Media::IAudioBuffer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Capacity(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Length(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_Length(uint32_t value) = 0;
};};

template <> struct abi<Windows::Media::IAudioFrame>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall LockBuffer(abi_t<Windows::Media::AudioBufferAccessMode> mode, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::IAudioFrameFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(uint32_t capacity, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::IAutoRepeatModeChangeRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RequestedAutoRepeatMode(abi_t<Windows::Media::MediaPlaybackAutoRepeatMode>* value) = 0;
};};

template <> struct abi<Windows::Media::IImageDisplayProperties>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Title(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Title(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Subtitle(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Subtitle(HSTRING value) = 0;
};};

template <> struct abi<Windows::Media::IMediaControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_SoundLevelChanged(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_SoundLevelChanged(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PlayPressed(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PlayPressed(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PausePressed(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PausePressed(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_StopPressed(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_StopPressed(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PlayPauseTogglePressed(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PlayPauseTogglePressed(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_RecordPressed(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_RecordPressed(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_NextTrackPressed(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_NextTrackPressed(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PreviousTrackPressed(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PreviousTrackPressed(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_FastForwardPressed(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_FastForwardPressed(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_RewindPressed(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_RewindPressed(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_ChannelUpPressed(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_ChannelUpPressed(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_ChannelDownPressed(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_ChannelDownPressed(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall get_SoundLevel(abi_t<Windows::Media::SoundLevel>* value) = 0;
    virtual HRESULT __stdcall put_TrackName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_TrackName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_ArtistName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ArtistName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_IsPlaying(bool value) = 0;
    virtual HRESULT __stdcall get_IsPlaying(bool* value) = 0;
    virtual HRESULT __stdcall put_AlbumArt(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_AlbumArt(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::IMediaExtension>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetProperties(::IUnknown* configuration) = 0;
};};

template <> struct abi<Windows::Media::IMediaExtensionManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RegisterSchemeHandler(HSTRING activatableClassId, HSTRING scheme) = 0;
    virtual HRESULT __stdcall RegisterSchemeHandlerWithSettings(HSTRING activatableClassId, HSTRING scheme, ::IUnknown* configuration) = 0;
    virtual HRESULT __stdcall RegisterByteStreamHandler(HSTRING activatableClassId, HSTRING fileExtension, HSTRING mimeType) = 0;
    virtual HRESULT __stdcall RegisterByteStreamHandlerWithSettings(HSTRING activatableClassId, HSTRING fileExtension, HSTRING mimeType, ::IUnknown* configuration) = 0;
    virtual HRESULT __stdcall RegisterAudioDecoder(HSTRING activatableClassId, abi_t<GUID> inputSubtype, abi_t<GUID> outputSubtype) = 0;
    virtual HRESULT __stdcall RegisterAudioDecoderWithSettings(HSTRING activatableClassId, abi_t<GUID> inputSubtype, abi_t<GUID> outputSubtype, ::IUnknown* configuration) = 0;
    virtual HRESULT __stdcall RegisterAudioEncoder(HSTRING activatableClassId, abi_t<GUID> inputSubtype, abi_t<GUID> outputSubtype) = 0;
    virtual HRESULT __stdcall RegisterAudioEncoderWithSettings(HSTRING activatableClassId, abi_t<GUID> inputSubtype, abi_t<GUID> outputSubtype, ::IUnknown* configuration) = 0;
    virtual HRESULT __stdcall RegisterVideoDecoder(HSTRING activatableClassId, abi_t<GUID> inputSubtype, abi_t<GUID> outputSubtype) = 0;
    virtual HRESULT __stdcall RegisterVideoDecoderWithSettings(HSTRING activatableClassId, abi_t<GUID> inputSubtype, abi_t<GUID> outputSubtype, ::IUnknown* configuration) = 0;
    virtual HRESULT __stdcall RegisterVideoEncoder(HSTRING activatableClassId, abi_t<GUID> inputSubtype, abi_t<GUID> outputSubtype) = 0;
    virtual HRESULT __stdcall RegisterVideoEncoderWithSettings(HSTRING activatableClassId, abi_t<GUID> inputSubtype, abi_t<GUID> outputSubtype, ::IUnknown* configuration) = 0;
};};

template <> struct abi<Windows::Media::IMediaExtensionManager2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RegisterMediaExtensionForAppService(::IUnknown* extension, ::IUnknown* connection) = 0;
};};

template <> struct abi<Windows::Media::IMediaFrame>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Type(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IsReadOnly(bool* value) = 0;
    virtual HRESULT __stdcall put_RelativeTime(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_RelativeTime(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_SystemRelativeTime(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_SystemRelativeTime(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Duration(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Duration(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_IsDiscontinuous(bool value) = 0;
    virtual HRESULT __stdcall get_IsDiscontinuous(bool* value) = 0;
    virtual HRESULT __stdcall get_ExtendedProperties(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::IMediaMarker>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Time(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_MediaMarkerType(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Text(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Media::IMediaMarkerTypesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Bookmark(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Media::IMediaMarkers>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Markers(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::IMediaProcessingTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Arguments(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::IMediaTimelineController>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Start() = 0;
    virtual HRESULT __stdcall Resume() = 0;
    virtual HRESULT __stdcall Pause() = 0;
    virtual HRESULT __stdcall get_Position(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_Position(abi_t<Windows::Foundation::TimeSpan> value) = 0;
    virtual HRESULT __stdcall get_ClockRate(double* value) = 0;
    virtual HRESULT __stdcall put_ClockRate(double value) = 0;
    virtual HRESULT __stdcall get_State(abi_t<Windows::Media::MediaTimelineControllerState>* value) = 0;
    virtual HRESULT __stdcall add_PositionChanged(::IUnknown* positionChangedEventHandler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_PositionChanged(abi_t<event_token> eventCookie) = 0;
    virtual HRESULT __stdcall add_StateChanged(::IUnknown* stateChangedEventHandler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_StateChanged(abi_t<event_token> eventCookie) = 0;
};};

template <> struct abi<Windows::Media::IMediaTimelineController2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Duration(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Duration(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_IsLoopingEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsLoopingEnabled(bool value) = 0;
    virtual HRESULT __stdcall add_Failed(::IUnknown* eventHandler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Failed(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Ended(::IUnknown* eventHandler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Ended(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Media::IMediaTimelineControllerFailedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ExtendedError(abi_t<HRESULT>* value) = 0;
};};

template <> struct abi<Windows::Media::IMusicDisplayProperties>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Title(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Title(HSTRING value) = 0;
    virtual HRESULT __stdcall get_AlbumArtist(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_AlbumArtist(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Artist(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Artist(HSTRING value) = 0;
};};

template <> struct abi<Windows::Media::IMusicDisplayProperties2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AlbumTitle(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_AlbumTitle(HSTRING value) = 0;
    virtual HRESULT __stdcall get_TrackNumber(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_TrackNumber(uint32_t value) = 0;
    virtual HRESULT __stdcall get_Genres(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::IMusicDisplayProperties3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AlbumTrackCount(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_AlbumTrackCount(uint32_t value) = 0;
};};

template <> struct abi<Windows::Media::IPlaybackPositionChangeRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RequestedPlaybackPosition(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
};};

template <> struct abi<Windows::Media::IPlaybackRateChangeRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RequestedPlaybackRate(double* value) = 0;
};};

template <> struct abi<Windows::Media::IShuffleEnabledChangeRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RequestedShuffleEnabled(bool* value) = 0;
};};

template <> struct abi<Windows::Media::ISystemMediaTransportControls>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PlaybackStatus(abi_t<Windows::Media::MediaPlaybackStatus>* value) = 0;
    virtual HRESULT __stdcall put_PlaybackStatus(abi_t<Windows::Media::MediaPlaybackStatus> value) = 0;
    virtual HRESULT __stdcall get_DisplayUpdater(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SoundLevel(abi_t<Windows::Media::SoundLevel>* value) = 0;
    virtual HRESULT __stdcall get_IsEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsPlayEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsPlayEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsStopEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsStopEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsPauseEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsPauseEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsRecordEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsRecordEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsFastForwardEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsFastForwardEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsRewindEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsRewindEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsPreviousEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsPreviousEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsNextEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsNextEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsChannelUpEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsChannelUpEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsChannelDownEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsChannelDownEnabled(bool value) = 0;
    virtual HRESULT __stdcall add_ButtonPressed(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ButtonPressed(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_PropertyChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PropertyChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Media::ISystemMediaTransportControls2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AutoRepeatMode(abi_t<Windows::Media::MediaPlaybackAutoRepeatMode>* value) = 0;
    virtual HRESULT __stdcall put_AutoRepeatMode(abi_t<Windows::Media::MediaPlaybackAutoRepeatMode> value) = 0;
    virtual HRESULT __stdcall get_ShuffleEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_ShuffleEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_PlaybackRate(double* value) = 0;
    virtual HRESULT __stdcall put_PlaybackRate(double value) = 0;
    virtual HRESULT __stdcall UpdateTimelineProperties(::IUnknown* timelineProperties) = 0;
    virtual HRESULT __stdcall add_PlaybackPositionChangeRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PlaybackPositionChangeRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_PlaybackRateChangeRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PlaybackRateChangeRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ShuffleEnabledChangeRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ShuffleEnabledChangeRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_AutoRepeatModeChangeRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_AutoRepeatModeChangeRequested(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Button(abi_t<Windows::Media::SystemMediaTransportControlsButton>* value) = 0;
};};

template <> struct abi<Windows::Media::ISystemMediaTransportControlsDisplayUpdater>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Type(abi_t<Windows::Media::MediaPlaybackType>* value) = 0;
    virtual HRESULT __stdcall put_Type(abi_t<Windows::Media::MediaPlaybackType> value) = 0;
    virtual HRESULT __stdcall get_AppMediaId(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_AppMediaId(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Thumbnail(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Thumbnail(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MusicProperties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VideoProperties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ImageProperties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CopyFromFileAsync(abi_t<Windows::Media::MediaPlaybackType> type, ::IUnknown* source, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ClearAll() = 0;
    virtual HRESULT __stdcall Update() = 0;
};};

template <> struct abi<Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Property(abi_t<Windows::Media::SystemMediaTransportControlsProperty>* value) = 0;
};};

template <> struct abi<Windows::Media::ISystemMediaTransportControlsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** mediaControl) = 0;
};};

template <> struct abi<Windows::Media::ISystemMediaTransportControlsTimelineProperties>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_StartTime(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_StartTime(abi_t<Windows::Foundation::TimeSpan> value) = 0;
    virtual HRESULT __stdcall get_EndTime(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_EndTime(abi_t<Windows::Foundation::TimeSpan> value) = 0;
    virtual HRESULT __stdcall get_MinSeekTime(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_MinSeekTime(abi_t<Windows::Foundation::TimeSpan> value) = 0;
    virtual HRESULT __stdcall get_MaxSeekTime(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_MaxSeekTime(abi_t<Windows::Foundation::TimeSpan> value) = 0;
    virtual HRESULT __stdcall get_Position(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_Position(abi_t<Windows::Foundation::TimeSpan> value) = 0;
};};

template <> struct abi<Windows::Media::IVideoDisplayProperties>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Title(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Title(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Subtitle(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Subtitle(HSTRING value) = 0;
};};

template <> struct abi<Windows::Media::IVideoDisplayProperties2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Genres(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::IVideoEffectsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_VideoStabilization(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Media::IVideoFrame>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SoftwareBitmap(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CopyToAsync(::IUnknown* frame, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Direct3DSurface(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::IVideoFrameFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(abi_t<Windows::Graphics::Imaging::BitmapPixelFormat> format, int32_t width, int32_t height, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateWithAlpha(abi_t<Windows::Graphics::Imaging::BitmapPixelFormat> format, int32_t width, int32_t height, abi_t<Windows::Graphics::Imaging::BitmapAlphaMode> alpha, ::IUnknown** value) = 0;
};};

}
