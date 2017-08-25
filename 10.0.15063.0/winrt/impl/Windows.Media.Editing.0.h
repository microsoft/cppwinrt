// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX::Direct3D11 {

struct IDirect3DSurface;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging {

struct ImageStream;

}

WINRT_EXPORT namespace winrt::Windows::Media::Core {

struct MediaStreamSource;

}

WINRT_EXPORT namespace winrt::Windows::Media::Effects {

struct IAudioEffectDefinition;
struct IVideoCompositorDefinition;
struct IVideoEffectDefinition;

}

WINRT_EXPORT namespace winrt::Windows::Media::MediaProperties {

struct AudioEncodingProperties;
struct MediaEncodingProfile;
struct VideoEncodingProperties;

}

WINRT_EXPORT namespace winrt::Windows::Media::Transcoding {

enum class TranscodeFailureReason;

}

WINRT_EXPORT namespace winrt::Windows::Storage {

struct IStorageFile;
struct StorageFile;

}

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Windows::Media::Editing {

enum class MediaTrimmingPreference
{
    Fast = 0,
    Precise = 1,
};

enum class VideoFramePrecision
{
    NearestFrame = 0,
    NearestKeyFrame = 1,
};

struct IBackgroundAudioTrack;
struct IBackgroundAudioTrackStatics;
struct IEmbeddedAudioTrack;
struct IMediaClip;
struct IMediaClipStatics;
struct IMediaClipStatics2;
struct IMediaComposition;
struct IMediaComposition2;
struct IMediaCompositionStatics;
struct IMediaOverlay;
struct IMediaOverlayFactory;
struct IMediaOverlayLayer;
struct IMediaOverlayLayerFactory;
struct BackgroundAudioTrack;
struct EmbeddedAudioTrack;
struct MediaClip;
struct MediaComposition;
struct MediaOverlay;
struct MediaOverlayLayer;

}

namespace winrt::impl {

template <> struct category<Windows::Media::Editing::IBackgroundAudioTrack>{ using type = interface_category; };
template <> struct category<Windows::Media::Editing::IBackgroundAudioTrackStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::Editing::IEmbeddedAudioTrack>{ using type = interface_category; };
template <> struct category<Windows::Media::Editing::IMediaClip>{ using type = interface_category; };
template <> struct category<Windows::Media::Editing::IMediaClipStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::Editing::IMediaClipStatics2>{ using type = interface_category; };
template <> struct category<Windows::Media::Editing::IMediaComposition>{ using type = interface_category; };
template <> struct category<Windows::Media::Editing::IMediaComposition2>{ using type = interface_category; };
template <> struct category<Windows::Media::Editing::IMediaCompositionStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::Editing::IMediaOverlay>{ using type = interface_category; };
template <> struct category<Windows::Media::Editing::IMediaOverlayFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::Editing::IMediaOverlayLayer>{ using type = interface_category; };
template <> struct category<Windows::Media::Editing::IMediaOverlayLayerFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::Editing::BackgroundAudioTrack>{ using type = class_category; };
template <> struct category<Windows::Media::Editing::EmbeddedAudioTrack>{ using type = class_category; };
template <> struct category<Windows::Media::Editing::MediaClip>{ using type = class_category; };
template <> struct category<Windows::Media::Editing::MediaComposition>{ using type = class_category; };
template <> struct category<Windows::Media::Editing::MediaOverlay>{ using type = class_category; };
template <> struct category<Windows::Media::Editing::MediaOverlayLayer>{ using type = class_category; };
template <> struct category<Windows::Media::Editing::MediaTrimmingPreference>{ using type = enum_category; };
template <> struct category<Windows::Media::Editing::VideoFramePrecision>{ using type = enum_category; };
template <> struct name<Windows::Media::Editing::IBackgroundAudioTrack>{ static constexpr auto & value{ L"Windows.Media.Editing.IBackgroundAudioTrack" }; };
template <> struct name<Windows::Media::Editing::IBackgroundAudioTrackStatics>{ static constexpr auto & value{ L"Windows.Media.Editing.IBackgroundAudioTrackStatics" }; };
template <> struct name<Windows::Media::Editing::IEmbeddedAudioTrack>{ static constexpr auto & value{ L"Windows.Media.Editing.IEmbeddedAudioTrack" }; };
template <> struct name<Windows::Media::Editing::IMediaClip>{ static constexpr auto & value{ L"Windows.Media.Editing.IMediaClip" }; };
template <> struct name<Windows::Media::Editing::IMediaClipStatics>{ static constexpr auto & value{ L"Windows.Media.Editing.IMediaClipStatics" }; };
template <> struct name<Windows::Media::Editing::IMediaClipStatics2>{ static constexpr auto & value{ L"Windows.Media.Editing.IMediaClipStatics2" }; };
template <> struct name<Windows::Media::Editing::IMediaComposition>{ static constexpr auto & value{ L"Windows.Media.Editing.IMediaComposition" }; };
template <> struct name<Windows::Media::Editing::IMediaComposition2>{ static constexpr auto & value{ L"Windows.Media.Editing.IMediaComposition2" }; };
template <> struct name<Windows::Media::Editing::IMediaCompositionStatics>{ static constexpr auto & value{ L"Windows.Media.Editing.IMediaCompositionStatics" }; };
template <> struct name<Windows::Media::Editing::IMediaOverlay>{ static constexpr auto & value{ L"Windows.Media.Editing.IMediaOverlay" }; };
template <> struct name<Windows::Media::Editing::IMediaOverlayFactory>{ static constexpr auto & value{ L"Windows.Media.Editing.IMediaOverlayFactory" }; };
template <> struct name<Windows::Media::Editing::IMediaOverlayLayer>{ static constexpr auto & value{ L"Windows.Media.Editing.IMediaOverlayLayer" }; };
template <> struct name<Windows::Media::Editing::IMediaOverlayLayerFactory>{ static constexpr auto & value{ L"Windows.Media.Editing.IMediaOverlayLayerFactory" }; };
template <> struct name<Windows::Media::Editing::BackgroundAudioTrack>{ static constexpr auto & value{ L"Windows.Media.Editing.BackgroundAudioTrack" }; };
template <> struct name<Windows::Media::Editing::EmbeddedAudioTrack>{ static constexpr auto & value{ L"Windows.Media.Editing.EmbeddedAudioTrack" }; };
template <> struct name<Windows::Media::Editing::MediaClip>{ static constexpr auto & value{ L"Windows.Media.Editing.MediaClip" }; };
template <> struct name<Windows::Media::Editing::MediaComposition>{ static constexpr auto & value{ L"Windows.Media.Editing.MediaComposition" }; };
template <> struct name<Windows::Media::Editing::MediaOverlay>{ static constexpr auto & value{ L"Windows.Media.Editing.MediaOverlay" }; };
template <> struct name<Windows::Media::Editing::MediaOverlayLayer>{ static constexpr auto & value{ L"Windows.Media.Editing.MediaOverlayLayer" }; };
template <> struct name<Windows::Media::Editing::MediaTrimmingPreference>{ static constexpr auto & value{ L"Windows.Media.Editing.MediaTrimmingPreference" }; };
template <> struct name<Windows::Media::Editing::VideoFramePrecision>{ static constexpr auto & value{ L"Windows.Media.Editing.VideoFramePrecision" }; };
template <> struct guid<Windows::Media::Editing::IBackgroundAudioTrack>{ static constexpr GUID value{ 0x4B91B3BD,0x9E21,0x4266,{ 0xA9,0xC2,0x67,0xDD,0x01,0x1A,0x23,0x57 } }; };
template <> struct guid<Windows::Media::Editing::IBackgroundAudioTrackStatics>{ static constexpr GUID value{ 0xD9B1C0D7,0xD018,0x42A8,{ 0xA5,0x59,0xCB,0x4D,0x9E,0x97,0xE6,0x64 } }; };
template <> struct guid<Windows::Media::Editing::IEmbeddedAudioTrack>{ static constexpr GUID value{ 0x55EE5A7A,0x2D30,0x3FBA,{ 0xA1,0x90,0x4F,0x1A,0x64,0x54,0xF8,0x8F } }; };
template <> struct guid<Windows::Media::Editing::IMediaClip>{ static constexpr GUID value{ 0x53F25366,0x5FBA,0x3EA4,{ 0x86,0x93,0x24,0x76,0x18,0x11,0x14,0x0A } }; };
template <> struct guid<Windows::Media::Editing::IMediaClipStatics>{ static constexpr GUID value{ 0xFA402B68,0x928F,0x43C4,{ 0xBC,0x6E,0x78,0x3A,0x1A,0x35,0x96,0x56 } }; };
template <> struct guid<Windows::Media::Editing::IMediaClipStatics2>{ static constexpr GUID value{ 0x5B1DD7B3,0x854E,0x4D9B,{ 0x87,0x7D,0x47,0x74,0xA5,0x56,0xCD,0x12 } }; };
template <> struct guid<Windows::Media::Editing::IMediaComposition>{ static constexpr GUID value{ 0x2E06E605,0xDC71,0x41D6,{ 0xB8,0x37,0x2D,0x2B,0xC1,0x4A,0x29,0x47 } }; };
template <> struct guid<Windows::Media::Editing::IMediaComposition2>{ static constexpr GUID value{ 0xA59E5372,0x2366,0x492C,{ 0xBE,0xC8,0xE6,0xDF,0xBA,0x6D,0x02,0x81 } }; };
template <> struct guid<Windows::Media::Editing::IMediaCompositionStatics>{ static constexpr GUID value{ 0x87A08F04,0xE32A,0x45CE,{ 0x8F,0x66,0xA3,0x0D,0xF0,0x76,0x62,0x24 } }; };
template <> struct guid<Windows::Media::Editing::IMediaOverlay>{ static constexpr GUID value{ 0xA902AE5D,0x7869,0x4830,{ 0x8A,0xB1,0x94,0xDC,0x01,0xC0,0x5F,0xA4 } }; };
template <> struct guid<Windows::Media::Editing::IMediaOverlayFactory>{ static constexpr GUID value{ 0xB584828A,0x6188,0x4F8F,{ 0xA2,0xE0,0xAA,0x55,0x2D,0x59,0x8E,0x18 } }; };
template <> struct guid<Windows::Media::Editing::IMediaOverlayLayer>{ static constexpr GUID value{ 0xA6D9BA57,0xEEDA,0x46C6,{ 0xBB,0xE5,0xE3,0x98,0xC8,0x41,0x68,0xAC } }; };
template <> struct guid<Windows::Media::Editing::IMediaOverlayLayerFactory>{ static constexpr GUID value{ 0x947CB473,0xA39E,0x4362,{ 0xAB,0xBF,0x9F,0x8B,0x50,0x70,0xA0,0x62 } }; };
template <> struct default_interface<Windows::Media::Editing::BackgroundAudioTrack>{ using type = Windows::Media::Editing::IBackgroundAudioTrack; };
template <> struct default_interface<Windows::Media::Editing::EmbeddedAudioTrack>{ using type = Windows::Media::Editing::IEmbeddedAudioTrack; };
template <> struct default_interface<Windows::Media::Editing::MediaClip>{ using type = Windows::Media::Editing::IMediaClip; };
template <> struct default_interface<Windows::Media::Editing::MediaComposition>{ using type = Windows::Media::Editing::IMediaComposition; };
template <> struct default_interface<Windows::Media::Editing::MediaOverlay>{ using type = Windows::Media::Editing::IMediaOverlay; };
template <> struct default_interface<Windows::Media::Editing::MediaOverlayLayer>{ using type = Windows::Media::Editing::IMediaOverlayLayer; };

template <typename D>
struct consume_Windows_Media_Editing_IBackgroundAudioTrack
{
    Windows::Foundation::TimeSpan TrimTimeFromStart() const;
    void TrimTimeFromStart(Windows::Foundation::TimeSpan const& value) const;
    Windows::Foundation::TimeSpan TrimTimeFromEnd() const;
    void TrimTimeFromEnd(Windows::Foundation::TimeSpan const& value) const;
    Windows::Foundation::TimeSpan OriginalDuration() const;
    Windows::Foundation::TimeSpan TrimmedDuration() const;
    Windows::Foundation::Collections::IMap<hstring, hstring> UserData() const;
    void Delay(Windows::Foundation::TimeSpan const& value) const;
    Windows::Foundation::TimeSpan Delay() const;
    void Volume(double value) const;
    double Volume() const;
    Windows::Media::Editing::BackgroundAudioTrack Clone() const;
    Windows::Media::MediaProperties::AudioEncodingProperties GetAudioEncodingProperties() const;
    Windows::Foundation::Collections::IVector<Windows::Media::Effects::IAudioEffectDefinition> AudioEffectDefinitions() const;
};
template <> struct consume<Windows::Media::Editing::IBackgroundAudioTrack> { template <typename D> using type = consume_Windows_Media_Editing_IBackgroundAudioTrack<D>; };

template <typename D>
struct consume_Windows_Media_Editing_IBackgroundAudioTrackStatics
{
    Windows::Media::Editing::BackgroundAudioTrack CreateFromEmbeddedAudioTrack(Windows::Media::Editing::EmbeddedAudioTrack const& embeddedAudioTrack) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Editing::BackgroundAudioTrack> CreateFromFileAsync(Windows::Storage::IStorageFile const& file) const;
};
template <> struct consume<Windows::Media::Editing::IBackgroundAudioTrackStatics> { template <typename D> using type = consume_Windows_Media_Editing_IBackgroundAudioTrackStatics<D>; };

template <typename D>
struct consume_Windows_Media_Editing_IEmbeddedAudioTrack
{
    Windows::Media::MediaProperties::AudioEncodingProperties GetAudioEncodingProperties() const;
};
template <> struct consume<Windows::Media::Editing::IEmbeddedAudioTrack> { template <typename D> using type = consume_Windows_Media_Editing_IEmbeddedAudioTrack<D>; };

template <typename D>
struct consume_Windows_Media_Editing_IMediaClip
{
    Windows::Foundation::TimeSpan TrimTimeFromStart() const;
    void TrimTimeFromStart(Windows::Foundation::TimeSpan const& value) const;
    Windows::Foundation::TimeSpan TrimTimeFromEnd() const;
    void TrimTimeFromEnd(Windows::Foundation::TimeSpan const& value) const;
    Windows::Foundation::TimeSpan OriginalDuration() const;
    Windows::Foundation::TimeSpan TrimmedDuration() const;
    Windows::Foundation::Collections::IMap<hstring, hstring> UserData() const;
    Windows::Media::Editing::MediaClip Clone() const;
    Windows::Foundation::TimeSpan StartTimeInComposition() const;
    Windows::Foundation::TimeSpan EndTimeInComposition() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Editing::EmbeddedAudioTrack> EmbeddedAudioTracks() const;
    uint32_t SelectedEmbeddedAudioTrackIndex() const;
    void SelectedEmbeddedAudioTrackIndex(uint32_t value) const;
    void Volume(double value) const;
    double Volume() const;
    Windows::Media::MediaProperties::VideoEncodingProperties GetVideoEncodingProperties() const;
    Windows::Foundation::Collections::IVector<Windows::Media::Effects::IAudioEffectDefinition> AudioEffectDefinitions() const;
    Windows::Foundation::Collections::IVector<Windows::Media::Effects::IVideoEffectDefinition> VideoEffectDefinitions() const;
};
template <> struct consume<Windows::Media::Editing::IMediaClip> { template <typename D> using type = consume_Windows_Media_Editing_IMediaClip<D>; };

template <typename D>
struct consume_Windows_Media_Editing_IMediaClipStatics
{
    Windows::Media::Editing::MediaClip CreateFromColor(Windows::UI::Color const& color, Windows::Foundation::TimeSpan const& originalDuration) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Editing::MediaClip> CreateFromFileAsync(Windows::Storage::IStorageFile const& file) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Editing::MediaClip> CreateFromImageFileAsync(Windows::Storage::IStorageFile const& file, Windows::Foundation::TimeSpan const& originalDuration) const;
};
template <> struct consume<Windows::Media::Editing::IMediaClipStatics> { template <typename D> using type = consume_Windows_Media_Editing_IMediaClipStatics<D>; };

template <typename D>
struct consume_Windows_Media_Editing_IMediaClipStatics2
{
    Windows::Media::Editing::MediaClip CreateFromSurface(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, Windows::Foundation::TimeSpan const& originalDuration) const;
};
template <> struct consume<Windows::Media::Editing::IMediaClipStatics2> { template <typename D> using type = consume_Windows_Media_Editing_IMediaClipStatics2<D>; };

template <typename D>
struct consume_Windows_Media_Editing_IMediaComposition
{
    Windows::Foundation::TimeSpan Duration() const;
    Windows::Foundation::Collections::IVector<Windows::Media::Editing::MediaClip> Clips() const;
    Windows::Foundation::Collections::IVector<Windows::Media::Editing::BackgroundAudioTrack> BackgroundAudioTracks() const;
    Windows::Foundation::Collections::IMap<hstring, hstring> UserData() const;
    Windows::Media::Editing::MediaComposition Clone() const;
    Windows::Foundation::IAsyncAction SaveAsync(Windows::Storage::IStorageFile const& file) const;
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::ImageStream> GetThumbnailAsync(Windows::Foundation::TimeSpan const& timeFromStart, int32_t scaledWidth, int32_t scaledHeight, Windows::Media::Editing::VideoFramePrecision const& framePrecision) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::ImageStream>> GetThumbnailsAsync(param::async_iterable<Windows::Foundation::TimeSpan> const& timesFromStart, int32_t scaledWidth, int32_t scaledHeight, Windows::Media::Editing::VideoFramePrecision const& framePrecision) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Transcoding::TranscodeFailureReason, double> RenderToFileAsync(Windows::Storage::IStorageFile const& destination) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Transcoding::TranscodeFailureReason, double> RenderToFileAsync(Windows::Storage::IStorageFile const& destination, Windows::Media::Editing::MediaTrimmingPreference const& trimmingPreference) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Transcoding::TranscodeFailureReason, double> RenderToFileAsync(Windows::Storage::IStorageFile const& destination, Windows::Media::Editing::MediaTrimmingPreference const& trimmingPreference, Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile) const;
    Windows::Media::MediaProperties::MediaEncodingProfile CreateDefaultEncodingProfile() const;
    Windows::Media::Core::MediaStreamSource GenerateMediaStreamSource() const;
    Windows::Media::Core::MediaStreamSource GenerateMediaStreamSource(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile) const;
    Windows::Media::Core::MediaStreamSource GeneratePreviewMediaStreamSource(int32_t scaledWidth, int32_t scaledHeight) const;
};
template <> struct consume<Windows::Media::Editing::IMediaComposition> { template <typename D> using type = consume_Windows_Media_Editing_IMediaComposition<D>; };

template <typename D>
struct consume_Windows_Media_Editing_IMediaComposition2
{
    Windows::Foundation::Collections::IVector<Windows::Media::Editing::MediaOverlayLayer> OverlayLayers() const;
};
template <> struct consume<Windows::Media::Editing::IMediaComposition2> { template <typename D> using type = consume_Windows_Media_Editing_IMediaComposition2<D>; };

template <typename D>
struct consume_Windows_Media_Editing_IMediaCompositionStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Editing::MediaComposition> LoadAsync(Windows::Storage::StorageFile const& file) const;
};
template <> struct consume<Windows::Media::Editing::IMediaCompositionStatics> { template <typename D> using type = consume_Windows_Media_Editing_IMediaCompositionStatics<D>; };

template <typename D>
struct consume_Windows_Media_Editing_IMediaOverlay
{
    Windows::Foundation::Rect Position() const;
    void Position(Windows::Foundation::Rect const& value) const;
    void Delay(Windows::Foundation::TimeSpan const& value) const;
    Windows::Foundation::TimeSpan Delay() const;
    double Opacity() const;
    void Opacity(double value) const;
    Windows::Media::Editing::MediaOverlay Clone() const;
    Windows::Media::Editing::MediaClip Clip() const;
    bool AudioEnabled() const;
    void AudioEnabled(bool value) const;
};
template <> struct consume<Windows::Media::Editing::IMediaOverlay> { template <typename D> using type = consume_Windows_Media_Editing_IMediaOverlay<D>; };

template <typename D>
struct consume_Windows_Media_Editing_IMediaOverlayFactory
{
    Windows::Media::Editing::MediaOverlay Create(Windows::Media::Editing::MediaClip const& clip) const;
    Windows::Media::Editing::MediaOverlay CreateWithPositionAndOpacity(Windows::Media::Editing::MediaClip const& clip, Windows::Foundation::Rect const& position, double opacity) const;
};
template <> struct consume<Windows::Media::Editing::IMediaOverlayFactory> { template <typename D> using type = consume_Windows_Media_Editing_IMediaOverlayFactory<D>; };

template <typename D>
struct consume_Windows_Media_Editing_IMediaOverlayLayer
{
    Windows::Media::Editing::MediaOverlayLayer Clone() const;
    Windows::Foundation::Collections::IVector<Windows::Media::Editing::MediaOverlay> Overlays() const;
    Windows::Media::Effects::IVideoCompositorDefinition CustomCompositorDefinition() const;
};
template <> struct consume<Windows::Media::Editing::IMediaOverlayLayer> { template <typename D> using type = consume_Windows_Media_Editing_IMediaOverlayLayer<D>; };

template <typename D>
struct consume_Windows_Media_Editing_IMediaOverlayLayerFactory
{
    Windows::Media::Editing::MediaOverlayLayer CreateWithCompositorDefinition(Windows::Media::Effects::IVideoCompositorDefinition const& compositorDefinition) const;
};
template <> struct consume<Windows::Media::Editing::IMediaOverlayLayerFactory> { template <typename D> using type = consume_Windows_Media_Editing_IMediaOverlayLayerFactory<D>; };

template <> struct abi<Windows::Media::Editing::IBackgroundAudioTrack>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TrimTimeFromStart(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_TrimTimeFromStart(abi_t<Windows::Foundation::TimeSpan> value) = 0;
    virtual HRESULT __stdcall get_TrimTimeFromEnd(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_TrimTimeFromEnd(abi_t<Windows::Foundation::TimeSpan> value) = 0;
    virtual HRESULT __stdcall get_OriginalDuration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_TrimmedDuration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_UserData(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Delay(abi_t<Windows::Foundation::TimeSpan> value) = 0;
    virtual HRESULT __stdcall get_Delay(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_Volume(double value) = 0;
    virtual HRESULT __stdcall get_Volume(double* value) = 0;
    virtual HRESULT __stdcall Clone(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetAudioEncodingProperties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AudioEffectDefinitions(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Editing::IBackgroundAudioTrackStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateFromEmbeddedAudioTrack(::IUnknown* embeddedAudioTrack, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateFromFileAsync(::IUnknown* file, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Media::Editing::IEmbeddedAudioTrack>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetAudioEncodingProperties(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Editing::IMediaClip>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TrimTimeFromStart(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_TrimTimeFromStart(abi_t<Windows::Foundation::TimeSpan> value) = 0;
    virtual HRESULT __stdcall get_TrimTimeFromEnd(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_TrimTimeFromEnd(abi_t<Windows::Foundation::TimeSpan> value) = 0;
    virtual HRESULT __stdcall get_OriginalDuration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_TrimmedDuration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_UserData(::IUnknown** value) = 0;
    virtual HRESULT __stdcall Clone(::IUnknown** result) = 0;
    virtual HRESULT __stdcall get_StartTimeInComposition(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_EndTimeInComposition(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_EmbeddedAudioTracks(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SelectedEmbeddedAudioTrackIndex(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_SelectedEmbeddedAudioTrackIndex(uint32_t value) = 0;
    virtual HRESULT __stdcall put_Volume(double value) = 0;
    virtual HRESULT __stdcall get_Volume(double* value) = 0;
    virtual HRESULT __stdcall GetVideoEncodingProperties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AudioEffectDefinitions(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VideoEffectDefinitions(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Editing::IMediaClipStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateFromColor(abi_t<Windows::UI::Color> color, abi_t<Windows::Foundation::TimeSpan> originalDuration, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateFromFileAsync(::IUnknown* file, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateFromImageFileAsync(::IUnknown* file, abi_t<Windows::Foundation::TimeSpan> originalDuration, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Media::Editing::IMediaClipStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateFromSurface(::IUnknown* surface, abi_t<Windows::Foundation::TimeSpan> originalDuration, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Editing::IMediaComposition>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Duration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_Clips(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_BackgroundAudioTracks(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_UserData(::IUnknown** value) = 0;
    virtual HRESULT __stdcall Clone(::IUnknown** result) = 0;
    virtual HRESULT __stdcall SaveAsync(::IUnknown* file, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetThumbnailAsync(abi_t<Windows::Foundation::TimeSpan> timeFromStart, int32_t scaledWidth, int32_t scaledHeight, abi_t<Windows::Media::Editing::VideoFramePrecision> framePrecision, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetThumbnailsAsync(::IUnknown* timesFromStart, int32_t scaledWidth, int32_t scaledHeight, abi_t<Windows::Media::Editing::VideoFramePrecision> framePrecision, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RenderToFileAsync(::IUnknown* destination, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RenderToFileWithTrimmingPreferenceAsync(::IUnknown* destination, abi_t<Windows::Media::Editing::MediaTrimmingPreference> trimmingPreference, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RenderToFileWithProfileAsync(::IUnknown* destination, abi_t<Windows::Media::Editing::MediaTrimmingPreference> trimmingPreference, ::IUnknown* encodingProfile, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateDefaultEncodingProfile(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GenerateMediaStreamSource(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GenerateMediaStreamSourceWithProfile(::IUnknown* encodingProfile, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GeneratePreviewMediaStreamSource(int32_t scaledWidth, int32_t scaledHeight, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Editing::IMediaComposition2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_OverlayLayers(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Editing::IMediaCompositionStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall LoadAsync(::IUnknown* file, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Media::Editing::IMediaOverlay>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall put_Position(abi_t<Windows::Foundation::Rect> value) = 0;
    virtual HRESULT __stdcall put_Delay(abi_t<Windows::Foundation::TimeSpan> value) = 0;
    virtual HRESULT __stdcall get_Delay(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_Opacity(double* value) = 0;
    virtual HRESULT __stdcall put_Opacity(double value) = 0;
    virtual HRESULT __stdcall Clone(::IUnknown** result) = 0;
    virtual HRESULT __stdcall get_Clip(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AudioEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_AudioEnabled(bool value) = 0;
};};

template <> struct abi<Windows::Media::Editing::IMediaOverlayFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* clip, ::IUnknown** mediaOverlay) = 0;
    virtual HRESULT __stdcall CreateWithPositionAndOpacity(::IUnknown* clip, abi_t<Windows::Foundation::Rect> position, double opacity, ::IUnknown** mediaOverlay) = 0;
};};

template <> struct abi<Windows::Media::Editing::IMediaOverlayLayer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Clone(::IUnknown** result) = 0;
    virtual HRESULT __stdcall get_Overlays(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CustomCompositorDefinition(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Editing::IMediaOverlayLayerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWithCompositorDefinition(::IUnknown* compositorDefinition, ::IUnknown** mediaOverlayLayer) = 0;
};};

}
