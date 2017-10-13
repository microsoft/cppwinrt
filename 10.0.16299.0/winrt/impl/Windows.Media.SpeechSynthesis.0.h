// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Media {

struct IMediaMarker;

}

WINRT_EXPORT namespace winrt::Windows::Media::Core {

struct TimedMetadataTrack;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

enum class InputStreamOptions : unsigned;
struct IBuffer;
struct IInputStream;
struct IOutputStream;
struct IRandomAccessStream;

}

WINRT_EXPORT namespace winrt::Windows::Media::SpeechSynthesis {

enum class VoiceGender : int32_t
{
    Male = 0,
    Female = 1,
};

struct IInstalledVoicesStatic;
struct IInstalledVoicesStatic2;
struct ISpeechSynthesisStream;
struct ISpeechSynthesizer;
struct ISpeechSynthesizer2;
struct ISpeechSynthesizerOptions;
struct ISpeechSynthesizerOptions2;
struct IVoiceInformation;
struct SpeechSynthesisStream;
struct SpeechSynthesizer;
struct SpeechSynthesizerOptions;
struct VoiceInformation;

}

namespace winrt::impl {

template <> struct category<Windows::Media::SpeechSynthesis::IInstalledVoicesStatic>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechSynthesis::IInstalledVoicesStatic2>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechSynthesis::ISpeechSynthesisStream>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechSynthesis::ISpeechSynthesizer>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechSynthesis::ISpeechSynthesizer2>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions2>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechSynthesis::IVoiceInformation>{ using type = interface_category; };
template <> struct category<Windows::Media::SpeechSynthesis::SpeechSynthesisStream>{ using type = class_category; };
template <> struct category<Windows::Media::SpeechSynthesis::SpeechSynthesizer>{ using type = class_category; };
template <> struct category<Windows::Media::SpeechSynthesis::SpeechSynthesizerOptions>{ using type = class_category; };
template <> struct category<Windows::Media::SpeechSynthesis::VoiceInformation>{ using type = class_category; };
template <> struct category<Windows::Media::SpeechSynthesis::VoiceGender>{ using type = enum_category; };
template <> struct name<Windows::Media::SpeechSynthesis::IInstalledVoicesStatic>{ static constexpr auto & value{ L"Windows.Media.SpeechSynthesis.IInstalledVoicesStatic" }; };
template <> struct name<Windows::Media::SpeechSynthesis::IInstalledVoicesStatic2>{ static constexpr auto & value{ L"Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2" }; };
template <> struct name<Windows::Media::SpeechSynthesis::ISpeechSynthesisStream>{ static constexpr auto & value{ L"Windows.Media.SpeechSynthesis.ISpeechSynthesisStream" }; };
template <> struct name<Windows::Media::SpeechSynthesis::ISpeechSynthesizer>{ static constexpr auto & value{ L"Windows.Media.SpeechSynthesis.ISpeechSynthesizer" }; };
template <> struct name<Windows::Media::SpeechSynthesis::ISpeechSynthesizer2>{ static constexpr auto & value{ L"Windows.Media.SpeechSynthesis.ISpeechSynthesizer2" }; };
template <> struct name<Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions>{ static constexpr auto & value{ L"Windows.Media.SpeechSynthesis.ISpeechSynthesizerOptions" }; };
template <> struct name<Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions2>{ static constexpr auto & value{ L"Windows.Media.SpeechSynthesis.ISpeechSynthesizerOptions2" }; };
template <> struct name<Windows::Media::SpeechSynthesis::IVoiceInformation>{ static constexpr auto & value{ L"Windows.Media.SpeechSynthesis.IVoiceInformation" }; };
template <> struct name<Windows::Media::SpeechSynthesis::SpeechSynthesisStream>{ static constexpr auto & value{ L"Windows.Media.SpeechSynthesis.SpeechSynthesisStream" }; };
template <> struct name<Windows::Media::SpeechSynthesis::SpeechSynthesizer>{ static constexpr auto & value{ L"Windows.Media.SpeechSynthesis.SpeechSynthesizer" }; };
template <> struct name<Windows::Media::SpeechSynthesis::SpeechSynthesizerOptions>{ static constexpr auto & value{ L"Windows.Media.SpeechSynthesis.SpeechSynthesizerOptions" }; };
template <> struct name<Windows::Media::SpeechSynthesis::VoiceInformation>{ static constexpr auto & value{ L"Windows.Media.SpeechSynthesis.VoiceInformation" }; };
template <> struct name<Windows::Media::SpeechSynthesis::VoiceGender>{ static constexpr auto & value{ L"Windows.Media.SpeechSynthesis.VoiceGender" }; };
template <> struct guid<Windows::Media::SpeechSynthesis::IInstalledVoicesStatic>{ static constexpr GUID value{ 0x7D526ECC,0x7533,0x4C3F,{ 0x85,0xBE,0x88,0x8C,0x2B,0xAE,0xEB,0xDC } }; };
template <> struct guid<Windows::Media::SpeechSynthesis::IInstalledVoicesStatic2>{ static constexpr GUID value{ 0x64255F2E,0x358D,0x4058,{ 0xBE,0x9A,0xFD,0x3F,0xCB,0x42,0x35,0x30 } }; };
template <> struct guid<Windows::Media::SpeechSynthesis::ISpeechSynthesisStream>{ static constexpr GUID value{ 0x83E46E93,0x244C,0x4622,{ 0xBA,0x0B,0x62,0x29,0xC4,0xD0,0xD6,0x5D } }; };
template <> struct guid<Windows::Media::SpeechSynthesis::ISpeechSynthesizer>{ static constexpr GUID value{ 0xCE9F7C76,0x97F4,0x4CED,{ 0xAD,0x68,0xD5,0x1C,0x45,0x8E,0x45,0xC6 } }; };
template <> struct guid<Windows::Media::SpeechSynthesis::ISpeechSynthesizer2>{ static constexpr GUID value{ 0xA7C5ECB2,0x4339,0x4D6A,{ 0xBB,0xF8,0xC7,0xA4,0xF1,0x54,0x4C,0x2E } }; };
template <> struct guid<Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions>{ static constexpr GUID value{ 0xA0E23871,0xCC3D,0x43C9,{ 0x91,0xB1,0xEE,0x18,0x53,0x24,0xD8,0x3D } }; };
template <> struct guid<Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions2>{ static constexpr GUID value{ 0x1CBEF60E,0x119C,0x4BED,{ 0xB1,0x18,0xD2,0x50,0xC3,0xA2,0x57,0x93 } }; };
template <> struct guid<Windows::Media::SpeechSynthesis::IVoiceInformation>{ static constexpr GUID value{ 0xB127D6A4,0x1291,0x4604,{ 0xAA,0x9C,0x83,0x13,0x40,0x83,0x35,0x2C } }; };
template <> struct default_interface<Windows::Media::SpeechSynthesis::SpeechSynthesisStream>{ using type = Windows::Media::SpeechSynthesis::ISpeechSynthesisStream; };
template <> struct default_interface<Windows::Media::SpeechSynthesis::SpeechSynthesizer>{ using type = Windows::Media::SpeechSynthesis::ISpeechSynthesizer; };
template <> struct default_interface<Windows::Media::SpeechSynthesis::SpeechSynthesizerOptions>{ using type = Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions; };
template <> struct default_interface<Windows::Media::SpeechSynthesis::VoiceInformation>{ using type = Windows::Media::SpeechSynthesis::IVoiceInformation; };

template <typename D>
struct consume_Windows_Media_SpeechSynthesis_IInstalledVoicesStatic
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::SpeechSynthesis::VoiceInformation> AllVoices() const noexcept;
    Windows::Media::SpeechSynthesis::VoiceInformation DefaultVoice() const noexcept;
};
template <> struct consume<Windows::Media::SpeechSynthesis::IInstalledVoicesStatic> { template <typename D> using type = consume_Windows_Media_SpeechSynthesis_IInstalledVoicesStatic<D>; };

template <typename D>
struct consume_Windows_Media_SpeechSynthesis_IInstalledVoicesStatic2
{
    Windows::Foundation::IAsyncOperation<bool> TrySetDefaultVoiceAsync(Windows::Media::SpeechSynthesis::VoiceInformation const& voice) const;
};
template <> struct consume<Windows::Media::SpeechSynthesis::IInstalledVoicesStatic2> { template <typename D> using type = consume_Windows_Media_SpeechSynthesis_IInstalledVoicesStatic2<D>; };

template <typename D>
struct consume_Windows_Media_SpeechSynthesis_ISpeechSynthesisStream
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::IMediaMarker> Markers() const noexcept;
};
template <> struct consume<Windows::Media::SpeechSynthesis::ISpeechSynthesisStream> { template <typename D> using type = consume_Windows_Media_SpeechSynthesis_ISpeechSynthesisStream<D>; };

template <typename D>
struct consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizer
{
    Windows::Foundation::IAsyncOperation<Windows::Media::SpeechSynthesis::SpeechSynthesisStream> SynthesizeTextToStreamAsync(param::hstring const& text) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::SpeechSynthesis::SpeechSynthesisStream> SynthesizeSsmlToStreamAsync(param::hstring const& Ssml) const;
    void Voice(Windows::Media::SpeechSynthesis::VoiceInformation const& value) const noexcept;
    Windows::Media::SpeechSynthesis::VoiceInformation Voice() const noexcept;
};
template <> struct consume<Windows::Media::SpeechSynthesis::ISpeechSynthesizer> { template <typename D> using type = consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizer<D>; };

template <typename D>
struct consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizer2
{
    Windows::Media::SpeechSynthesis::SpeechSynthesizerOptions Options() const noexcept;
};
template <> struct consume<Windows::Media::SpeechSynthesis::ISpeechSynthesizer2> { template <typename D> using type = consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizer2<D>; };

template <typename D>
struct consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions
{
    bool IncludeWordBoundaryMetadata() const noexcept;
    void IncludeWordBoundaryMetadata(bool value) const noexcept;
    bool IncludeSentenceBoundaryMetadata() const noexcept;
    void IncludeSentenceBoundaryMetadata(bool value) const noexcept;
};
template <> struct consume<Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions> { template <typename D> using type = consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions<D>; };

template <typename D>
struct consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions2
{
    double AudioVolume() const noexcept;
    void AudioVolume(double value) const noexcept;
    double SpeakingRate() const noexcept;
    void SpeakingRate(double value) const noexcept;
    double AudioPitch() const noexcept;
    void AudioPitch(double value) const noexcept;
};
template <> struct consume<Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions2> { template <typename D> using type = consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions2<D>; };

template <typename D>
struct consume_Windows_Media_SpeechSynthesis_IVoiceInformation
{
    hstring DisplayName() const noexcept;
    hstring Id() const noexcept;
    hstring Language() const noexcept;
    hstring Description() const noexcept;
    Windows::Media::SpeechSynthesis::VoiceGender Gender() const noexcept;
};
template <> struct consume<Windows::Media::SpeechSynthesis::IVoiceInformation> { template <typename D> using type = consume_Windows_Media_SpeechSynthesis_IVoiceInformation<D>; };

template <> struct abi<Windows::Media::SpeechSynthesis::IInstalledVoicesStatic>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AllVoices(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DefaultVoice(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::SpeechSynthesis::IInstalledVoicesStatic2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TrySetDefaultVoiceAsync(::IUnknown* voice, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Media::SpeechSynthesis::ISpeechSynthesisStream>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Markers(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::SpeechSynthesis::ISpeechSynthesizer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SynthesizeTextToStreamAsync(HSTRING text, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SynthesizeSsmlToStreamAsync(HSTRING Ssml, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall put_Voice(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Voice(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::SpeechSynthesis::ISpeechSynthesizer2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Options(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IncludeWordBoundaryMetadata(bool* value) = 0;
    virtual HRESULT __stdcall put_IncludeWordBoundaryMetadata(bool value) = 0;
    virtual HRESULT __stdcall get_IncludeSentenceBoundaryMetadata(bool* value) = 0;
    virtual HRESULT __stdcall put_IncludeSentenceBoundaryMetadata(bool value) = 0;
};};

template <> struct abi<Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AudioVolume(double* value) = 0;
    virtual HRESULT __stdcall put_AudioVolume(double value) = 0;
    virtual HRESULT __stdcall get_SpeakingRate(double* value) = 0;
    virtual HRESULT __stdcall put_SpeakingRate(double value) = 0;
    virtual HRESULT __stdcall get_AudioPitch(double* value) = 0;
    virtual HRESULT __stdcall put_AudioPitch(double value) = 0;
};};

template <> struct abi<Windows::Media::SpeechSynthesis::IVoiceInformation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Language(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Description(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Gender(Windows::Media::SpeechSynthesis::VoiceGender* value) = 0;
};};

}
