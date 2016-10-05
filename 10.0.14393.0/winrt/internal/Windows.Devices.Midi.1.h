// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Devices.Midi.0.h"
#include "Windows.Devices.Enumeration.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Midi {

struct __declspec(uuid("be1fa860-62b4-4d52-a37e-92e54d35b909")) __declspec(novtable) IMidiChannelPressureMessage : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Channel(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Pressure(uint8_t * value) = 0;
};

struct __declspec(uuid("6218ed2f-2284-412a-94cf-10fb04842c6c")) __declspec(novtable) IMidiChannelPressureMessageFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateMidiChannelPressureMessage(uint8_t channel, uint8_t pressure, Windows::Devices::Midi::IMidiChannelPressureMessage ** value) = 0;
};

struct __declspec(uuid("b7e15f83-780d-405f-b781-3e1598c97f40")) __declspec(novtable) IMidiControlChangeMessage : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Channel(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Controller(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_ControlValue(uint8_t * value) = 0;
};

struct __declspec(uuid("2ab14321-956c-46ad-9752-f87f55052fe3")) __declspec(novtable) IMidiControlChangeMessageFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateMidiControlChangeMessage(uint8_t channel, uint8_t controller, uint8_t controlValue, Windows::Devices::Midi::IMidiControlChangeMessage ** value) = 0;
};

struct __declspec(uuid("d5c1d9db-971a-4eaf-a23d-ea19fe607ff9")) __declspec(novtable) IMidiInPort : Windows::IInspectable
{
    virtual HRESULT __stdcall add_MessageReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::Midi::MidiInPort, Windows::Devices::Midi::MidiMessageReceivedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_MessageReceived(event_token token) = 0;
    virtual HRESULT __stdcall get_DeviceId(hstring * value) = 0;
};

struct __declspec(uuid("44c439dc-67ff-4a6e-8bac-fdb6610cf296")) __declspec(novtable) IMidiInPortStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_FromIdAsync(hstring deviceId, Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiInPort> ** value) = 0;
    virtual HRESULT __stdcall abi_GetDeviceSelector(hstring * value) = 0;
};

struct __declspec(uuid("79767945-1094-4283-9be0-289fc0ee8334")) __declspec(novtable) IMidiMessage : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Timestamp(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall get_RawData(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall get_Type(winrt::Windows::Devices::Midi::MidiMessageType * value) = 0;
};

struct __declspec(uuid("76566e56-f328-4b51-907d-b3a8ce96bf80")) __declspec(novtable) IMidiMessageReceivedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Message(Windows::Devices::Midi::IMidiMessage ** value) = 0;
};

struct __declspec(uuid("16fd8af4-198e-4d8f-a654-d305a293548f")) __declspec(novtable) IMidiNoteOffMessage : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Channel(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Note(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Velocity(uint8_t * value) = 0;
};

struct __declspec(uuid("a6b240e0-a749-425f-8af4-a4d979cc15b5")) __declspec(novtable) IMidiNoteOffMessageFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateMidiNoteOffMessage(uint8_t channel, uint8_t note, uint8_t velocity, Windows::Devices::Midi::IMidiNoteOffMessage ** value) = 0;
};

struct __declspec(uuid("e0224af5-6181-46dd-afa2-410004c057aa")) __declspec(novtable) IMidiNoteOnMessage : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Channel(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Note(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Velocity(uint8_t * value) = 0;
};

struct __declspec(uuid("9b4280a0-59c1-420e-b517-15a10aa9606b")) __declspec(novtable) IMidiNoteOnMessageFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateMidiNoteOnMessage(uint8_t channel, uint8_t note, uint8_t velocity, Windows::Devices::Midi::IMidiNoteOnMessage ** value) = 0;
};

struct __declspec(uuid("931d6d9f-57a2-4a3a-adb8-4640886f6693")) __declspec(novtable) IMidiOutPort : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SendMessage(Windows::Devices::Midi::IMidiMessage * midiMessage) = 0;
    virtual HRESULT __stdcall abi_SendBuffer(Windows::Storage::Streams::IBuffer * midiData) = 0;
    virtual HRESULT __stdcall get_DeviceId(hstring * value) = 0;
};

struct __declspec(uuid("065cc3e9-0f88-448b-9b64-a95826c65b8f")) __declspec(novtable) IMidiOutPortStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_FromIdAsync(hstring deviceId, Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::IMidiOutPort> ** value) = 0;
    virtual HRESULT __stdcall abi_GetDeviceSelector(hstring * value) = 0;
};

struct __declspec(uuid("29df4cb1-2e9f-4faf-8c2b-9cb82a9079ca")) __declspec(novtable) IMidiPitchBendChangeMessage : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Channel(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Bend(uint16_t * value) = 0;
};

struct __declspec(uuid("f5eedf55-cfc8-4926-b30e-a3622393306c")) __declspec(novtable) IMidiPitchBendChangeMessageFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateMidiPitchBendChangeMessage(uint8_t channel, uint16_t bend, Windows::Devices::Midi::IMidiPitchBendChangeMessage ** value) = 0;
};

struct __declspec(uuid("1f7337fe-ace8-48a0-868e-7cdbf20f04d6")) __declspec(novtable) IMidiPolyphonicKeyPressureMessage : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Channel(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Note(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Pressure(uint8_t * value) = 0;
};

struct __declspec(uuid("e98f483e-c4b3-4dd2-917c-e349815a1b3b")) __declspec(novtable) IMidiPolyphonicKeyPressureMessageFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateMidiPolyphonicKeyPressureMessage(uint8_t channel, uint8_t note, uint8_t pressure, Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage ** value) = 0;
};

struct __declspec(uuid("9cbb3c78-7a3e-4327-aa98-20b8e4485af8")) __declspec(novtable) IMidiProgramChangeMessage : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Channel(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Program(uint8_t * value) = 0;
};

struct __declspec(uuid("d6b04387-524b-4104-9c99-6572bfd2e261")) __declspec(novtable) IMidiProgramChangeMessageFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateMidiProgramChangeMessage(uint8_t channel, uint8_t program, Windows::Devices::Midi::IMidiProgramChangeMessage ** value) = 0;
};

struct __declspec(uuid("4ca50c56-ec5e-4ae4-a115-88dc57cc2b79")) __declspec(novtable) IMidiSongPositionPointerMessage : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Beats(uint16_t * value) = 0;
};

struct __declspec(uuid("9c00e996-f10b-4fea-b395-f5d6cf80f64e")) __declspec(novtable) IMidiSongPositionPointerMessageFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateMidiSongPositionPointerMessage(uint16_t beats, Windows::Devices::Midi::IMidiSongPositionPointerMessage ** value) = 0;
};

struct __declspec(uuid("49f0f27f-6d83-4741-a5bf-4629f6be974f")) __declspec(novtable) IMidiSongSelectMessage : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Song(uint8_t * value) = 0;
};

struct __declspec(uuid("848878e4-8748-4129-a66c-a05493f75daa")) __declspec(novtable) IMidiSongSelectMessageFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateMidiSongSelectMessage(uint8_t song, Windows::Devices::Midi::IMidiSongSelectMessage ** value) = 0;
};

struct __declspec(uuid("f0da155e-db90-405f-b8ae-21d2e17f2e45")) __declspec(novtable) IMidiSynthesizer : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AudioDevice(Windows::Devices::Enumeration::IDeviceInformation ** value) = 0;
    virtual HRESULT __stdcall get_Volume(double * value) = 0;
    virtual HRESULT __stdcall put_Volume(double value) = 0;
};

struct __declspec(uuid("4224eaa8-6629-4d6b-aa8f-d4521a5a31ce")) __declspec(novtable) IMidiSynthesizerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiSynthesizer> ** value) = 0;
    virtual HRESULT __stdcall abi_CreateFromAudioDeviceAsync(Windows::Devices::Enumeration::IDeviceInformation * audioDevice, Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiSynthesizer> ** value) = 0;
    virtual HRESULT __stdcall abi_IsSynthesizer(Windows::Devices::Enumeration::IDeviceInformation * midiDevice, bool * value) = 0;
};

struct __declspec(uuid("083de222-3b74-4320-9b42-0ca8545f8a24")) __declspec(novtable) IMidiSystemExclusiveMessageFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateMidiSystemExclusiveMessage(Windows::Storage::Streams::IBuffer * rawData, Windows::Devices::Midi::IMidiMessage ** value) = 0;
};

struct __declspec(uuid("0bf7087d-fa63-4a1c-8deb-c0e87796a6d7")) __declspec(novtable) IMidiTimeCodeMessage : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FrameType(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Values(uint8_t * value) = 0;
};

struct __declspec(uuid("eb3099c5-771c-40de-b961-175a7489a85e")) __declspec(novtable) IMidiTimeCodeMessageFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateMidiTimeCodeMessage(uint8_t frameType, uint8_t values, Windows::Devices::Midi::IMidiTimeCodeMessage ** value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Devices::Midi::MidiActiveSensingMessage> { using default_interface = Windows::Devices::Midi::IMidiMessage; };
template <> struct traits<Windows::Devices::Midi::MidiChannelPressureMessage> { using default_interface = Windows::Devices::Midi::IMidiChannelPressureMessage; };
template <> struct traits<Windows::Devices::Midi::MidiContinueMessage> { using default_interface = Windows::Devices::Midi::IMidiMessage; };
template <> struct traits<Windows::Devices::Midi::MidiControlChangeMessage> { using default_interface = Windows::Devices::Midi::IMidiControlChangeMessage; };
template <> struct traits<Windows::Devices::Midi::MidiInPort> { using default_interface = Windows::Devices::Midi::IMidiInPort; };
template <> struct traits<Windows::Devices::Midi::MidiMessageReceivedEventArgs> { using default_interface = Windows::Devices::Midi::IMidiMessageReceivedEventArgs; };
template <> struct traits<Windows::Devices::Midi::MidiNoteOffMessage> { using default_interface = Windows::Devices::Midi::IMidiNoteOffMessage; };
template <> struct traits<Windows::Devices::Midi::MidiNoteOnMessage> { using default_interface = Windows::Devices::Midi::IMidiNoteOnMessage; };
template <> struct traits<Windows::Devices::Midi::MidiOutPort> { using default_interface = Windows::Devices::Midi::IMidiOutPort; };
template <> struct traits<Windows::Devices::Midi::MidiPitchBendChangeMessage> { using default_interface = Windows::Devices::Midi::IMidiPitchBendChangeMessage; };
template <> struct traits<Windows::Devices::Midi::MidiPolyphonicKeyPressureMessage> { using default_interface = Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage; };
template <> struct traits<Windows::Devices::Midi::MidiProgramChangeMessage> { using default_interface = Windows::Devices::Midi::IMidiProgramChangeMessage; };
template <> struct traits<Windows::Devices::Midi::MidiSongPositionPointerMessage> { using default_interface = Windows::Devices::Midi::IMidiSongPositionPointerMessage; };
template <> struct traits<Windows::Devices::Midi::MidiSongSelectMessage> { using default_interface = Windows::Devices::Midi::IMidiSongSelectMessage; };
template <> struct traits<Windows::Devices::Midi::MidiStartMessage> { using default_interface = Windows::Devices::Midi::IMidiMessage; };
template <> struct traits<Windows::Devices::Midi::MidiStopMessage> { using default_interface = Windows::Devices::Midi::IMidiMessage; };
template <> struct traits<Windows::Devices::Midi::MidiSynthesizer> { using default_interface = Windows::Devices::Midi::IMidiSynthesizer; };
template <> struct traits<Windows::Devices::Midi::MidiSystemExclusiveMessage> { using default_interface = Windows::Devices::Midi::IMidiMessage; };
template <> struct traits<Windows::Devices::Midi::MidiSystemResetMessage> { using default_interface = Windows::Devices::Midi::IMidiMessage; };
template <> struct traits<Windows::Devices::Midi::MidiTimeCodeMessage> { using default_interface = Windows::Devices::Midi::IMidiTimeCodeMessage; };
template <> struct traits<Windows::Devices::Midi::MidiTimingClockMessage> { using default_interface = Windows::Devices::Midi::IMidiMessage; };
template <> struct traits<Windows::Devices::Midi::MidiTuneRequestMessage> { using default_interface = Windows::Devices::Midi::IMidiMessage; };

}

namespace Windows::Devices::Midi {

template <typename T> struct impl_IMidiChannelPressureMessage;
template <typename T> struct impl_IMidiChannelPressureMessageFactory;
template <typename T> struct impl_IMidiControlChangeMessage;
template <typename T> struct impl_IMidiControlChangeMessageFactory;
template <typename T> struct impl_IMidiInPort;
template <typename T> struct impl_IMidiInPortStatics;
template <typename T> struct impl_IMidiMessage;
template <typename T> struct impl_IMidiMessageReceivedEventArgs;
template <typename T> struct impl_IMidiNoteOffMessage;
template <typename T> struct impl_IMidiNoteOffMessageFactory;
template <typename T> struct impl_IMidiNoteOnMessage;
template <typename T> struct impl_IMidiNoteOnMessageFactory;
template <typename T> struct impl_IMidiOutPort;
template <typename T> struct impl_IMidiOutPortStatics;
template <typename T> struct impl_IMidiPitchBendChangeMessage;
template <typename T> struct impl_IMidiPitchBendChangeMessageFactory;
template <typename T> struct impl_IMidiPolyphonicKeyPressureMessage;
template <typename T> struct impl_IMidiPolyphonicKeyPressureMessageFactory;
template <typename T> struct impl_IMidiProgramChangeMessage;
template <typename T> struct impl_IMidiProgramChangeMessageFactory;
template <typename T> struct impl_IMidiSongPositionPointerMessage;
template <typename T> struct impl_IMidiSongPositionPointerMessageFactory;
template <typename T> struct impl_IMidiSongSelectMessage;
template <typename T> struct impl_IMidiSongSelectMessageFactory;
template <typename T> struct impl_IMidiSynthesizer;
template <typename T> struct impl_IMidiSynthesizerStatics;
template <typename T> struct impl_IMidiSystemExclusiveMessageFactory;
template <typename T> struct impl_IMidiTimeCodeMessage;
template <typename T> struct impl_IMidiTimeCodeMessageFactory;

}

namespace impl {

template <> struct traits<Windows::Devices::Midi::IMidiChannelPressureMessage>
{
    using abi = ABI::Windows::Devices::Midi::IMidiChannelPressureMessage;
    template <typename D> using consume = Windows::Devices::Midi::impl_IMidiChannelPressureMessage<D>;
};

template <> struct traits<Windows::Devices::Midi::IMidiChannelPressureMessageFactory>
{
    using abi = ABI::Windows::Devices::Midi::IMidiChannelPressureMessageFactory;
    template <typename D> using consume = Windows::Devices::Midi::impl_IMidiChannelPressureMessageFactory<D>;
};

template <> struct traits<Windows::Devices::Midi::IMidiControlChangeMessage>
{
    using abi = ABI::Windows::Devices::Midi::IMidiControlChangeMessage;
    template <typename D> using consume = Windows::Devices::Midi::impl_IMidiControlChangeMessage<D>;
};

template <> struct traits<Windows::Devices::Midi::IMidiControlChangeMessageFactory>
{
    using abi = ABI::Windows::Devices::Midi::IMidiControlChangeMessageFactory;
    template <typename D> using consume = Windows::Devices::Midi::impl_IMidiControlChangeMessageFactory<D>;
};

template <> struct traits<Windows::Devices::Midi::IMidiInPort>
{
    using abi = ABI::Windows::Devices::Midi::IMidiInPort;
    template <typename D> using consume = Windows::Devices::Midi::impl_IMidiInPort<D>;
};

template <> struct traits<Windows::Devices::Midi::IMidiInPortStatics>
{
    using abi = ABI::Windows::Devices::Midi::IMidiInPortStatics;
    template <typename D> using consume = Windows::Devices::Midi::impl_IMidiInPortStatics<D>;
};

template <> struct traits<Windows::Devices::Midi::IMidiMessage>
{
    using abi = ABI::Windows::Devices::Midi::IMidiMessage;
    template <typename D> using consume = Windows::Devices::Midi::impl_IMidiMessage<D>;
};

template <> struct traits<Windows::Devices::Midi::IMidiMessageReceivedEventArgs>
{
    using abi = ABI::Windows::Devices::Midi::IMidiMessageReceivedEventArgs;
    template <typename D> using consume = Windows::Devices::Midi::impl_IMidiMessageReceivedEventArgs<D>;
};

template <> struct traits<Windows::Devices::Midi::IMidiNoteOffMessage>
{
    using abi = ABI::Windows::Devices::Midi::IMidiNoteOffMessage;
    template <typename D> using consume = Windows::Devices::Midi::impl_IMidiNoteOffMessage<D>;
};

template <> struct traits<Windows::Devices::Midi::IMidiNoteOffMessageFactory>
{
    using abi = ABI::Windows::Devices::Midi::IMidiNoteOffMessageFactory;
    template <typename D> using consume = Windows::Devices::Midi::impl_IMidiNoteOffMessageFactory<D>;
};

template <> struct traits<Windows::Devices::Midi::IMidiNoteOnMessage>
{
    using abi = ABI::Windows::Devices::Midi::IMidiNoteOnMessage;
    template <typename D> using consume = Windows::Devices::Midi::impl_IMidiNoteOnMessage<D>;
};

template <> struct traits<Windows::Devices::Midi::IMidiNoteOnMessageFactory>
{
    using abi = ABI::Windows::Devices::Midi::IMidiNoteOnMessageFactory;
    template <typename D> using consume = Windows::Devices::Midi::impl_IMidiNoteOnMessageFactory<D>;
};

template <> struct traits<Windows::Devices::Midi::IMidiOutPort>
{
    using abi = ABI::Windows::Devices::Midi::IMidiOutPort;
    template <typename D> using consume = Windows::Devices::Midi::impl_IMidiOutPort<D>;
};

template <> struct traits<Windows::Devices::Midi::IMidiOutPortStatics>
{
    using abi = ABI::Windows::Devices::Midi::IMidiOutPortStatics;
    template <typename D> using consume = Windows::Devices::Midi::impl_IMidiOutPortStatics<D>;
};

template <> struct traits<Windows::Devices::Midi::IMidiPitchBendChangeMessage>
{
    using abi = ABI::Windows::Devices::Midi::IMidiPitchBendChangeMessage;
    template <typename D> using consume = Windows::Devices::Midi::impl_IMidiPitchBendChangeMessage<D>;
};

template <> struct traits<Windows::Devices::Midi::IMidiPitchBendChangeMessageFactory>
{
    using abi = ABI::Windows::Devices::Midi::IMidiPitchBendChangeMessageFactory;
    template <typename D> using consume = Windows::Devices::Midi::impl_IMidiPitchBendChangeMessageFactory<D>;
};

template <> struct traits<Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage>
{
    using abi = ABI::Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage;
    template <typename D> using consume = Windows::Devices::Midi::impl_IMidiPolyphonicKeyPressureMessage<D>;
};

template <> struct traits<Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessageFactory>
{
    using abi = ABI::Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessageFactory;
    template <typename D> using consume = Windows::Devices::Midi::impl_IMidiPolyphonicKeyPressureMessageFactory<D>;
};

template <> struct traits<Windows::Devices::Midi::IMidiProgramChangeMessage>
{
    using abi = ABI::Windows::Devices::Midi::IMidiProgramChangeMessage;
    template <typename D> using consume = Windows::Devices::Midi::impl_IMidiProgramChangeMessage<D>;
};

template <> struct traits<Windows::Devices::Midi::IMidiProgramChangeMessageFactory>
{
    using abi = ABI::Windows::Devices::Midi::IMidiProgramChangeMessageFactory;
    template <typename D> using consume = Windows::Devices::Midi::impl_IMidiProgramChangeMessageFactory<D>;
};

template <> struct traits<Windows::Devices::Midi::IMidiSongPositionPointerMessage>
{
    using abi = ABI::Windows::Devices::Midi::IMidiSongPositionPointerMessage;
    template <typename D> using consume = Windows::Devices::Midi::impl_IMidiSongPositionPointerMessage<D>;
};

template <> struct traits<Windows::Devices::Midi::IMidiSongPositionPointerMessageFactory>
{
    using abi = ABI::Windows::Devices::Midi::IMidiSongPositionPointerMessageFactory;
    template <typename D> using consume = Windows::Devices::Midi::impl_IMidiSongPositionPointerMessageFactory<D>;
};

template <> struct traits<Windows::Devices::Midi::IMidiSongSelectMessage>
{
    using abi = ABI::Windows::Devices::Midi::IMidiSongSelectMessage;
    template <typename D> using consume = Windows::Devices::Midi::impl_IMidiSongSelectMessage<D>;
};

template <> struct traits<Windows::Devices::Midi::IMidiSongSelectMessageFactory>
{
    using abi = ABI::Windows::Devices::Midi::IMidiSongSelectMessageFactory;
    template <typename D> using consume = Windows::Devices::Midi::impl_IMidiSongSelectMessageFactory<D>;
};

template <> struct traits<Windows::Devices::Midi::IMidiSynthesizer>
{
    using abi = ABI::Windows::Devices::Midi::IMidiSynthesizer;
    template <typename D> using consume = Windows::Devices::Midi::impl_IMidiSynthesizer<D>;
};

template <> struct traits<Windows::Devices::Midi::IMidiSynthesizerStatics>
{
    using abi = ABI::Windows::Devices::Midi::IMidiSynthesizerStatics;
    template <typename D> using consume = Windows::Devices::Midi::impl_IMidiSynthesizerStatics<D>;
};

template <> struct traits<Windows::Devices::Midi::IMidiSystemExclusiveMessageFactory>
{
    using abi = ABI::Windows::Devices::Midi::IMidiSystemExclusiveMessageFactory;
    template <typename D> using consume = Windows::Devices::Midi::impl_IMidiSystemExclusiveMessageFactory<D>;
};

template <> struct traits<Windows::Devices::Midi::IMidiTimeCodeMessage>
{
    using abi = ABI::Windows::Devices::Midi::IMidiTimeCodeMessage;
    template <typename D> using consume = Windows::Devices::Midi::impl_IMidiTimeCodeMessage<D>;
};

template <> struct traits<Windows::Devices::Midi::IMidiTimeCodeMessageFactory>
{
    using abi = ABI::Windows::Devices::Midi::IMidiTimeCodeMessageFactory;
    template <typename D> using consume = Windows::Devices::Midi::impl_IMidiTimeCodeMessageFactory<D>;
};

template <> struct traits<Windows::Devices::Midi::MidiActiveSensingMessage>
{
    using abi = ABI::Windows::Devices::Midi::MidiActiveSensingMessage;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Midi.MidiActiveSensingMessage"; }
};

template <> struct traits<Windows::Devices::Midi::MidiChannelPressureMessage>
{
    using abi = ABI::Windows::Devices::Midi::MidiChannelPressureMessage;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Midi.MidiChannelPressureMessage"; }
};

template <> struct traits<Windows::Devices::Midi::MidiContinueMessage>
{
    using abi = ABI::Windows::Devices::Midi::MidiContinueMessage;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Midi.MidiContinueMessage"; }
};

template <> struct traits<Windows::Devices::Midi::MidiControlChangeMessage>
{
    using abi = ABI::Windows::Devices::Midi::MidiControlChangeMessage;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Midi.MidiControlChangeMessage"; }
};

template <> struct traits<Windows::Devices::Midi::MidiInPort>
{
    using abi = ABI::Windows::Devices::Midi::MidiInPort;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Midi.MidiInPort"; }
};

template <> struct traits<Windows::Devices::Midi::MidiMessageReceivedEventArgs>
{
    using abi = ABI::Windows::Devices::Midi::MidiMessageReceivedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Midi.MidiMessageReceivedEventArgs"; }
};

template <> struct traits<Windows::Devices::Midi::MidiNoteOffMessage>
{
    using abi = ABI::Windows::Devices::Midi::MidiNoteOffMessage;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Midi.MidiNoteOffMessage"; }
};

template <> struct traits<Windows::Devices::Midi::MidiNoteOnMessage>
{
    using abi = ABI::Windows::Devices::Midi::MidiNoteOnMessage;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Midi.MidiNoteOnMessage"; }
};

template <> struct traits<Windows::Devices::Midi::MidiOutPort>
{
    using abi = ABI::Windows::Devices::Midi::MidiOutPort;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Midi.MidiOutPort"; }
};

template <> struct traits<Windows::Devices::Midi::MidiPitchBendChangeMessage>
{
    using abi = ABI::Windows::Devices::Midi::MidiPitchBendChangeMessage;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Midi.MidiPitchBendChangeMessage"; }
};

template <> struct traits<Windows::Devices::Midi::MidiPolyphonicKeyPressureMessage>
{
    using abi = ABI::Windows::Devices::Midi::MidiPolyphonicKeyPressureMessage;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Midi.MidiPolyphonicKeyPressureMessage"; }
};

template <> struct traits<Windows::Devices::Midi::MidiProgramChangeMessage>
{
    using abi = ABI::Windows::Devices::Midi::MidiProgramChangeMessage;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Midi.MidiProgramChangeMessage"; }
};

template <> struct traits<Windows::Devices::Midi::MidiSongPositionPointerMessage>
{
    using abi = ABI::Windows::Devices::Midi::MidiSongPositionPointerMessage;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Midi.MidiSongPositionPointerMessage"; }
};

template <> struct traits<Windows::Devices::Midi::MidiSongSelectMessage>
{
    using abi = ABI::Windows::Devices::Midi::MidiSongSelectMessage;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Midi.MidiSongSelectMessage"; }
};

template <> struct traits<Windows::Devices::Midi::MidiStartMessage>
{
    using abi = ABI::Windows::Devices::Midi::MidiStartMessage;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Midi.MidiStartMessage"; }
};

template <> struct traits<Windows::Devices::Midi::MidiStopMessage>
{
    using abi = ABI::Windows::Devices::Midi::MidiStopMessage;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Midi.MidiStopMessage"; }
};

template <> struct traits<Windows::Devices::Midi::MidiSynthesizer>
{
    using abi = ABI::Windows::Devices::Midi::MidiSynthesizer;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Midi.MidiSynthesizer"; }
};

template <> struct traits<Windows::Devices::Midi::MidiSystemExclusiveMessage>
{
    using abi = ABI::Windows::Devices::Midi::MidiSystemExclusiveMessage;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Midi.MidiSystemExclusiveMessage"; }
};

template <> struct traits<Windows::Devices::Midi::MidiSystemResetMessage>
{
    using abi = ABI::Windows::Devices::Midi::MidiSystemResetMessage;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Midi.MidiSystemResetMessage"; }
};

template <> struct traits<Windows::Devices::Midi::MidiTimeCodeMessage>
{
    using abi = ABI::Windows::Devices::Midi::MidiTimeCodeMessage;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Midi.MidiTimeCodeMessage"; }
};

template <> struct traits<Windows::Devices::Midi::MidiTimingClockMessage>
{
    using abi = ABI::Windows::Devices::Midi::MidiTimingClockMessage;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Midi.MidiTimingClockMessage"; }
};

template <> struct traits<Windows::Devices::Midi::MidiTuneRequestMessage>
{
    using abi = ABI::Windows::Devices::Midi::MidiTuneRequestMessage;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Midi.MidiTuneRequestMessage"; }
};

}

}
