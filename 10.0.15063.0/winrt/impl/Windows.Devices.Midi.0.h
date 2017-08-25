// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration {

struct DeviceInformation;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Midi {

enum class MidiMessageType
{
    None = 0,
    NoteOff = 128,
    NoteOn = 144,
    PolyphonicKeyPressure = 160,
    ControlChange = 176,
    ProgramChange = 192,
    ChannelPressure = 208,
    PitchBendChange = 224,
    SystemExclusive = 240,
    MidiTimeCode = 241,
    SongPositionPointer = 242,
    SongSelect = 243,
    TuneRequest = 246,
    EndSystemExclusive = 247,
    TimingClock = 248,
    Start = 250,
    Continue = 251,
    Stop = 252,
    ActiveSensing = 254,
    SystemReset = 255,
};

struct IMidiChannelPressureMessage;
struct IMidiChannelPressureMessageFactory;
struct IMidiControlChangeMessage;
struct IMidiControlChangeMessageFactory;
struct IMidiInPort;
struct IMidiInPortStatics;
struct IMidiMessage;
struct IMidiMessageReceivedEventArgs;
struct IMidiNoteOffMessage;
struct IMidiNoteOffMessageFactory;
struct IMidiNoteOnMessage;
struct IMidiNoteOnMessageFactory;
struct IMidiOutPort;
struct IMidiOutPortStatics;
struct IMidiPitchBendChangeMessage;
struct IMidiPitchBendChangeMessageFactory;
struct IMidiPolyphonicKeyPressureMessage;
struct IMidiPolyphonicKeyPressureMessageFactory;
struct IMidiProgramChangeMessage;
struct IMidiProgramChangeMessageFactory;
struct IMidiSongPositionPointerMessage;
struct IMidiSongPositionPointerMessageFactory;
struct IMidiSongSelectMessage;
struct IMidiSongSelectMessageFactory;
struct IMidiSynthesizer;
struct IMidiSynthesizerStatics;
struct IMidiSystemExclusiveMessageFactory;
struct IMidiTimeCodeMessage;
struct IMidiTimeCodeMessageFactory;
struct MidiActiveSensingMessage;
struct MidiChannelPressureMessage;
struct MidiContinueMessage;
struct MidiControlChangeMessage;
struct MidiInPort;
struct MidiMessageReceivedEventArgs;
struct MidiNoteOffMessage;
struct MidiNoteOnMessage;
struct MidiOutPort;
struct MidiPitchBendChangeMessage;
struct MidiPolyphonicKeyPressureMessage;
struct MidiProgramChangeMessage;
struct MidiSongPositionPointerMessage;
struct MidiSongSelectMessage;
struct MidiStartMessage;
struct MidiStopMessage;
struct MidiSynthesizer;
struct MidiSystemExclusiveMessage;
struct MidiSystemResetMessage;
struct MidiTimeCodeMessage;
struct MidiTimingClockMessage;
struct MidiTuneRequestMessage;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Midi::IMidiChannelPressureMessage>{ using type = interface_category; };
template <> struct category<Windows::Devices::Midi::IMidiChannelPressureMessageFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Midi::IMidiControlChangeMessage>{ using type = interface_category; };
template <> struct category<Windows::Devices::Midi::IMidiControlChangeMessageFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Midi::IMidiInPort>{ using type = interface_category; };
template <> struct category<Windows::Devices::Midi::IMidiInPortStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Midi::IMidiMessage>{ using type = interface_category; };
template <> struct category<Windows::Devices::Midi::IMidiMessageReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Midi::IMidiNoteOffMessage>{ using type = interface_category; };
template <> struct category<Windows::Devices::Midi::IMidiNoteOffMessageFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Midi::IMidiNoteOnMessage>{ using type = interface_category; };
template <> struct category<Windows::Devices::Midi::IMidiNoteOnMessageFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Midi::IMidiOutPort>{ using type = interface_category; };
template <> struct category<Windows::Devices::Midi::IMidiOutPortStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Midi::IMidiPitchBendChangeMessage>{ using type = interface_category; };
template <> struct category<Windows::Devices::Midi::IMidiPitchBendChangeMessageFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage>{ using type = interface_category; };
template <> struct category<Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessageFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Midi::IMidiProgramChangeMessage>{ using type = interface_category; };
template <> struct category<Windows::Devices::Midi::IMidiProgramChangeMessageFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Midi::IMidiSongPositionPointerMessage>{ using type = interface_category; };
template <> struct category<Windows::Devices::Midi::IMidiSongPositionPointerMessageFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Midi::IMidiSongSelectMessage>{ using type = interface_category; };
template <> struct category<Windows::Devices::Midi::IMidiSongSelectMessageFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Midi::IMidiSynthesizer>{ using type = interface_category; };
template <> struct category<Windows::Devices::Midi::IMidiSynthesizerStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Midi::IMidiSystemExclusiveMessageFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Midi::IMidiTimeCodeMessage>{ using type = interface_category; };
template <> struct category<Windows::Devices::Midi::IMidiTimeCodeMessageFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Midi::MidiActiveSensingMessage>{ using type = class_category; };
template <> struct category<Windows::Devices::Midi::MidiChannelPressureMessage>{ using type = class_category; };
template <> struct category<Windows::Devices::Midi::MidiContinueMessage>{ using type = class_category; };
template <> struct category<Windows::Devices::Midi::MidiControlChangeMessage>{ using type = class_category; };
template <> struct category<Windows::Devices::Midi::MidiInPort>{ using type = class_category; };
template <> struct category<Windows::Devices::Midi::MidiMessageReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Midi::MidiNoteOffMessage>{ using type = class_category; };
template <> struct category<Windows::Devices::Midi::MidiNoteOnMessage>{ using type = class_category; };
template <> struct category<Windows::Devices::Midi::MidiOutPort>{ using type = class_category; };
template <> struct category<Windows::Devices::Midi::MidiPitchBendChangeMessage>{ using type = class_category; };
template <> struct category<Windows::Devices::Midi::MidiPolyphonicKeyPressureMessage>{ using type = class_category; };
template <> struct category<Windows::Devices::Midi::MidiProgramChangeMessage>{ using type = class_category; };
template <> struct category<Windows::Devices::Midi::MidiSongPositionPointerMessage>{ using type = class_category; };
template <> struct category<Windows::Devices::Midi::MidiSongSelectMessage>{ using type = class_category; };
template <> struct category<Windows::Devices::Midi::MidiStartMessage>{ using type = class_category; };
template <> struct category<Windows::Devices::Midi::MidiStopMessage>{ using type = class_category; };
template <> struct category<Windows::Devices::Midi::MidiSynthesizer>{ using type = class_category; };
template <> struct category<Windows::Devices::Midi::MidiSystemExclusiveMessage>{ using type = class_category; };
template <> struct category<Windows::Devices::Midi::MidiSystemResetMessage>{ using type = class_category; };
template <> struct category<Windows::Devices::Midi::MidiTimeCodeMessage>{ using type = class_category; };
template <> struct category<Windows::Devices::Midi::MidiTimingClockMessage>{ using type = class_category; };
template <> struct category<Windows::Devices::Midi::MidiTuneRequestMessage>{ using type = class_category; };
template <> struct category<Windows::Devices::Midi::MidiMessageType>{ using type = enum_category; };
template <> struct name<Windows::Devices::Midi::IMidiChannelPressureMessage>{ static constexpr auto & value{ L"Windows.Devices.Midi.IMidiChannelPressureMessage" }; };
template <> struct name<Windows::Devices::Midi::IMidiChannelPressureMessageFactory>{ static constexpr auto & value{ L"Windows.Devices.Midi.IMidiChannelPressureMessageFactory" }; };
template <> struct name<Windows::Devices::Midi::IMidiControlChangeMessage>{ static constexpr auto & value{ L"Windows.Devices.Midi.IMidiControlChangeMessage" }; };
template <> struct name<Windows::Devices::Midi::IMidiControlChangeMessageFactory>{ static constexpr auto & value{ L"Windows.Devices.Midi.IMidiControlChangeMessageFactory" }; };
template <> struct name<Windows::Devices::Midi::IMidiInPort>{ static constexpr auto & value{ L"Windows.Devices.Midi.IMidiInPort" }; };
template <> struct name<Windows::Devices::Midi::IMidiInPortStatics>{ static constexpr auto & value{ L"Windows.Devices.Midi.IMidiInPortStatics" }; };
template <> struct name<Windows::Devices::Midi::IMidiMessage>{ static constexpr auto & value{ L"Windows.Devices.Midi.IMidiMessage" }; };
template <> struct name<Windows::Devices::Midi::IMidiMessageReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Midi.IMidiMessageReceivedEventArgs" }; };
template <> struct name<Windows::Devices::Midi::IMidiNoteOffMessage>{ static constexpr auto & value{ L"Windows.Devices.Midi.IMidiNoteOffMessage" }; };
template <> struct name<Windows::Devices::Midi::IMidiNoteOffMessageFactory>{ static constexpr auto & value{ L"Windows.Devices.Midi.IMidiNoteOffMessageFactory" }; };
template <> struct name<Windows::Devices::Midi::IMidiNoteOnMessage>{ static constexpr auto & value{ L"Windows.Devices.Midi.IMidiNoteOnMessage" }; };
template <> struct name<Windows::Devices::Midi::IMidiNoteOnMessageFactory>{ static constexpr auto & value{ L"Windows.Devices.Midi.IMidiNoteOnMessageFactory" }; };
template <> struct name<Windows::Devices::Midi::IMidiOutPort>{ static constexpr auto & value{ L"Windows.Devices.Midi.IMidiOutPort" }; };
template <> struct name<Windows::Devices::Midi::IMidiOutPortStatics>{ static constexpr auto & value{ L"Windows.Devices.Midi.IMidiOutPortStatics" }; };
template <> struct name<Windows::Devices::Midi::IMidiPitchBendChangeMessage>{ static constexpr auto & value{ L"Windows.Devices.Midi.IMidiPitchBendChangeMessage" }; };
template <> struct name<Windows::Devices::Midi::IMidiPitchBendChangeMessageFactory>{ static constexpr auto & value{ L"Windows.Devices.Midi.IMidiPitchBendChangeMessageFactory" }; };
template <> struct name<Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage>{ static constexpr auto & value{ L"Windows.Devices.Midi.IMidiPolyphonicKeyPressureMessage" }; };
template <> struct name<Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessageFactory>{ static constexpr auto & value{ L"Windows.Devices.Midi.IMidiPolyphonicKeyPressureMessageFactory" }; };
template <> struct name<Windows::Devices::Midi::IMidiProgramChangeMessage>{ static constexpr auto & value{ L"Windows.Devices.Midi.IMidiProgramChangeMessage" }; };
template <> struct name<Windows::Devices::Midi::IMidiProgramChangeMessageFactory>{ static constexpr auto & value{ L"Windows.Devices.Midi.IMidiProgramChangeMessageFactory" }; };
template <> struct name<Windows::Devices::Midi::IMidiSongPositionPointerMessage>{ static constexpr auto & value{ L"Windows.Devices.Midi.IMidiSongPositionPointerMessage" }; };
template <> struct name<Windows::Devices::Midi::IMidiSongPositionPointerMessageFactory>{ static constexpr auto & value{ L"Windows.Devices.Midi.IMidiSongPositionPointerMessageFactory" }; };
template <> struct name<Windows::Devices::Midi::IMidiSongSelectMessage>{ static constexpr auto & value{ L"Windows.Devices.Midi.IMidiSongSelectMessage" }; };
template <> struct name<Windows::Devices::Midi::IMidiSongSelectMessageFactory>{ static constexpr auto & value{ L"Windows.Devices.Midi.IMidiSongSelectMessageFactory" }; };
template <> struct name<Windows::Devices::Midi::IMidiSynthesizer>{ static constexpr auto & value{ L"Windows.Devices.Midi.IMidiSynthesizer" }; };
template <> struct name<Windows::Devices::Midi::IMidiSynthesizerStatics>{ static constexpr auto & value{ L"Windows.Devices.Midi.IMidiSynthesizerStatics" }; };
template <> struct name<Windows::Devices::Midi::IMidiSystemExclusiveMessageFactory>{ static constexpr auto & value{ L"Windows.Devices.Midi.IMidiSystemExclusiveMessageFactory" }; };
template <> struct name<Windows::Devices::Midi::IMidiTimeCodeMessage>{ static constexpr auto & value{ L"Windows.Devices.Midi.IMidiTimeCodeMessage" }; };
template <> struct name<Windows::Devices::Midi::IMidiTimeCodeMessageFactory>{ static constexpr auto & value{ L"Windows.Devices.Midi.IMidiTimeCodeMessageFactory" }; };
template <> struct name<Windows::Devices::Midi::MidiActiveSensingMessage>{ static constexpr auto & value{ L"Windows.Devices.Midi.MidiActiveSensingMessage" }; };
template <> struct name<Windows::Devices::Midi::MidiChannelPressureMessage>{ static constexpr auto & value{ L"Windows.Devices.Midi.MidiChannelPressureMessage" }; };
template <> struct name<Windows::Devices::Midi::MidiContinueMessage>{ static constexpr auto & value{ L"Windows.Devices.Midi.MidiContinueMessage" }; };
template <> struct name<Windows::Devices::Midi::MidiControlChangeMessage>{ static constexpr auto & value{ L"Windows.Devices.Midi.MidiControlChangeMessage" }; };
template <> struct name<Windows::Devices::Midi::MidiInPort>{ static constexpr auto & value{ L"Windows.Devices.Midi.MidiInPort" }; };
template <> struct name<Windows::Devices::Midi::MidiMessageReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Midi.MidiMessageReceivedEventArgs" }; };
template <> struct name<Windows::Devices::Midi::MidiNoteOffMessage>{ static constexpr auto & value{ L"Windows.Devices.Midi.MidiNoteOffMessage" }; };
template <> struct name<Windows::Devices::Midi::MidiNoteOnMessage>{ static constexpr auto & value{ L"Windows.Devices.Midi.MidiNoteOnMessage" }; };
template <> struct name<Windows::Devices::Midi::MidiOutPort>{ static constexpr auto & value{ L"Windows.Devices.Midi.MidiOutPort" }; };
template <> struct name<Windows::Devices::Midi::MidiPitchBendChangeMessage>{ static constexpr auto & value{ L"Windows.Devices.Midi.MidiPitchBendChangeMessage" }; };
template <> struct name<Windows::Devices::Midi::MidiPolyphonicKeyPressureMessage>{ static constexpr auto & value{ L"Windows.Devices.Midi.MidiPolyphonicKeyPressureMessage" }; };
template <> struct name<Windows::Devices::Midi::MidiProgramChangeMessage>{ static constexpr auto & value{ L"Windows.Devices.Midi.MidiProgramChangeMessage" }; };
template <> struct name<Windows::Devices::Midi::MidiSongPositionPointerMessage>{ static constexpr auto & value{ L"Windows.Devices.Midi.MidiSongPositionPointerMessage" }; };
template <> struct name<Windows::Devices::Midi::MidiSongSelectMessage>{ static constexpr auto & value{ L"Windows.Devices.Midi.MidiSongSelectMessage" }; };
template <> struct name<Windows::Devices::Midi::MidiStartMessage>{ static constexpr auto & value{ L"Windows.Devices.Midi.MidiStartMessage" }; };
template <> struct name<Windows::Devices::Midi::MidiStopMessage>{ static constexpr auto & value{ L"Windows.Devices.Midi.MidiStopMessage" }; };
template <> struct name<Windows::Devices::Midi::MidiSynthesizer>{ static constexpr auto & value{ L"Windows.Devices.Midi.MidiSynthesizer" }; };
template <> struct name<Windows::Devices::Midi::MidiSystemExclusiveMessage>{ static constexpr auto & value{ L"Windows.Devices.Midi.MidiSystemExclusiveMessage" }; };
template <> struct name<Windows::Devices::Midi::MidiSystemResetMessage>{ static constexpr auto & value{ L"Windows.Devices.Midi.MidiSystemResetMessage" }; };
template <> struct name<Windows::Devices::Midi::MidiTimeCodeMessage>{ static constexpr auto & value{ L"Windows.Devices.Midi.MidiTimeCodeMessage" }; };
template <> struct name<Windows::Devices::Midi::MidiTimingClockMessage>{ static constexpr auto & value{ L"Windows.Devices.Midi.MidiTimingClockMessage" }; };
template <> struct name<Windows::Devices::Midi::MidiTuneRequestMessage>{ static constexpr auto & value{ L"Windows.Devices.Midi.MidiTuneRequestMessage" }; };
template <> struct name<Windows::Devices::Midi::MidiMessageType>{ static constexpr auto & value{ L"Windows.Devices.Midi.MidiMessageType" }; };
template <> struct guid<Windows::Devices::Midi::IMidiChannelPressureMessage>{ static constexpr GUID value{ 0xBE1FA860,0x62B4,0x4D52,{ 0xA3,0x7E,0x92,0xE5,0x4D,0x35,0xB9,0x09 } }; };
template <> struct guid<Windows::Devices::Midi::IMidiChannelPressureMessageFactory>{ static constexpr GUID value{ 0x6218ED2F,0x2284,0x412A,{ 0x94,0xCF,0x10,0xFB,0x04,0x84,0x2C,0x6C } }; };
template <> struct guid<Windows::Devices::Midi::IMidiControlChangeMessage>{ static constexpr GUID value{ 0xB7E15F83,0x780D,0x405F,{ 0xB7,0x81,0x3E,0x15,0x98,0xC9,0x7F,0x40 } }; };
template <> struct guid<Windows::Devices::Midi::IMidiControlChangeMessageFactory>{ static constexpr GUID value{ 0x2AB14321,0x956C,0x46AD,{ 0x97,0x52,0xF8,0x7F,0x55,0x05,0x2F,0xE3 } }; };
template <> struct guid<Windows::Devices::Midi::IMidiInPort>{ static constexpr GUID value{ 0xD5C1D9DB,0x971A,0x4EAF,{ 0xA2,0x3D,0xEA,0x19,0xFE,0x60,0x7F,0xF9 } }; };
template <> struct guid<Windows::Devices::Midi::IMidiInPortStatics>{ static constexpr GUID value{ 0x44C439DC,0x67FF,0x4A6E,{ 0x8B,0xAC,0xFD,0xB6,0x61,0x0C,0xF2,0x96 } }; };
template <> struct guid<Windows::Devices::Midi::IMidiMessage>{ static constexpr GUID value{ 0x79767945,0x1094,0x4283,{ 0x9B,0xE0,0x28,0x9F,0xC0,0xEE,0x83,0x34 } }; };
template <> struct guid<Windows::Devices::Midi::IMidiMessageReceivedEventArgs>{ static constexpr GUID value{ 0x76566E56,0xF328,0x4B51,{ 0x90,0x7D,0xB3,0xA8,0xCE,0x96,0xBF,0x80 } }; };
template <> struct guid<Windows::Devices::Midi::IMidiNoteOffMessage>{ static constexpr GUID value{ 0x16FD8AF4,0x198E,0x4D8F,{ 0xA6,0x54,0xD3,0x05,0xA2,0x93,0x54,0x8F } }; };
template <> struct guid<Windows::Devices::Midi::IMidiNoteOffMessageFactory>{ static constexpr GUID value{ 0xA6B240E0,0xA749,0x425F,{ 0x8A,0xF4,0xA4,0xD9,0x79,0xCC,0x15,0xB5 } }; };
template <> struct guid<Windows::Devices::Midi::IMidiNoteOnMessage>{ static constexpr GUID value{ 0xE0224AF5,0x6181,0x46DD,{ 0xAF,0xA2,0x41,0x00,0x04,0xC0,0x57,0xAA } }; };
template <> struct guid<Windows::Devices::Midi::IMidiNoteOnMessageFactory>{ static constexpr GUID value{ 0x9B4280A0,0x59C1,0x420E,{ 0xB5,0x17,0x15,0xA1,0x0A,0xA9,0x60,0x6B } }; };
template <> struct guid<Windows::Devices::Midi::IMidiOutPort>{ static constexpr GUID value{ 0x931D6D9F,0x57A2,0x4A3A,{ 0xAD,0xB8,0x46,0x40,0x88,0x6F,0x66,0x93 } }; };
template <> struct guid<Windows::Devices::Midi::IMidiOutPortStatics>{ static constexpr GUID value{ 0x065CC3E9,0x0F88,0x448B,{ 0x9B,0x64,0xA9,0x58,0x26,0xC6,0x5B,0x8F } }; };
template <> struct guid<Windows::Devices::Midi::IMidiPitchBendChangeMessage>{ static constexpr GUID value{ 0x29DF4CB1,0x2E9F,0x4FAF,{ 0x8C,0x2B,0x9C,0xB8,0x2A,0x90,0x79,0xCA } }; };
template <> struct guid<Windows::Devices::Midi::IMidiPitchBendChangeMessageFactory>{ static constexpr GUID value{ 0xF5EEDF55,0xCFC8,0x4926,{ 0xB3,0x0E,0xA3,0x62,0x23,0x93,0x30,0x6C } }; };
template <> struct guid<Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage>{ static constexpr GUID value{ 0x1F7337FE,0xACE8,0x48A0,{ 0x86,0x8E,0x7C,0xDB,0xF2,0x0F,0x04,0xD6 } }; };
template <> struct guid<Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessageFactory>{ static constexpr GUID value{ 0xE98F483E,0xC4B3,0x4DD2,{ 0x91,0x7C,0xE3,0x49,0x81,0x5A,0x1B,0x3B } }; };
template <> struct guid<Windows::Devices::Midi::IMidiProgramChangeMessage>{ static constexpr GUID value{ 0x9CBB3C78,0x7A3E,0x4327,{ 0xAA,0x98,0x20,0xB8,0xE4,0x48,0x5A,0xF8 } }; };
template <> struct guid<Windows::Devices::Midi::IMidiProgramChangeMessageFactory>{ static constexpr GUID value{ 0xD6B04387,0x524B,0x4104,{ 0x9C,0x99,0x65,0x72,0xBF,0xD2,0xE2,0x61 } }; };
template <> struct guid<Windows::Devices::Midi::IMidiSongPositionPointerMessage>{ static constexpr GUID value{ 0x4CA50C56,0xEC5E,0x4AE4,{ 0xA1,0x15,0x88,0xDC,0x57,0xCC,0x2B,0x79 } }; };
template <> struct guid<Windows::Devices::Midi::IMidiSongPositionPointerMessageFactory>{ static constexpr GUID value{ 0x9C00E996,0xF10B,0x4FEA,{ 0xB3,0x95,0xF5,0xD6,0xCF,0x80,0xF6,0x4E } }; };
template <> struct guid<Windows::Devices::Midi::IMidiSongSelectMessage>{ static constexpr GUID value{ 0x49F0F27F,0x6D83,0x4741,{ 0xA5,0xBF,0x46,0x29,0xF6,0xBE,0x97,0x4F } }; };
template <> struct guid<Windows::Devices::Midi::IMidiSongSelectMessageFactory>{ static constexpr GUID value{ 0x848878E4,0x8748,0x4129,{ 0xA6,0x6C,0xA0,0x54,0x93,0xF7,0x5D,0xAA } }; };
template <> struct guid<Windows::Devices::Midi::IMidiSynthesizer>{ static constexpr GUID value{ 0xF0DA155E,0xDB90,0x405F,{ 0xB8,0xAE,0x21,0xD2,0xE1,0x7F,0x2E,0x45 } }; };
template <> struct guid<Windows::Devices::Midi::IMidiSynthesizerStatics>{ static constexpr GUID value{ 0x4224EAA8,0x6629,0x4D6B,{ 0xAA,0x8F,0xD4,0x52,0x1A,0x5A,0x31,0xCE } }; };
template <> struct guid<Windows::Devices::Midi::IMidiSystemExclusiveMessageFactory>{ static constexpr GUID value{ 0x083DE222,0x3B74,0x4320,{ 0x9B,0x42,0x0C,0xA8,0x54,0x5F,0x8A,0x24 } }; };
template <> struct guid<Windows::Devices::Midi::IMidiTimeCodeMessage>{ static constexpr GUID value{ 0x0BF7087D,0xFA63,0x4A1C,{ 0x8D,0xEB,0xC0,0xE8,0x77,0x96,0xA6,0xD7 } }; };
template <> struct guid<Windows::Devices::Midi::IMidiTimeCodeMessageFactory>{ static constexpr GUID value{ 0xEB3099C5,0x771C,0x40DE,{ 0xB9,0x61,0x17,0x5A,0x74,0x89,0xA8,0x5E } }; };
template <> struct default_interface<Windows::Devices::Midi::MidiActiveSensingMessage>{ using type = Windows::Devices::Midi::IMidiMessage; };
template <> struct default_interface<Windows::Devices::Midi::MidiChannelPressureMessage>{ using type = Windows::Devices::Midi::IMidiChannelPressureMessage; };
template <> struct default_interface<Windows::Devices::Midi::MidiContinueMessage>{ using type = Windows::Devices::Midi::IMidiMessage; };
template <> struct default_interface<Windows::Devices::Midi::MidiControlChangeMessage>{ using type = Windows::Devices::Midi::IMidiControlChangeMessage; };
template <> struct default_interface<Windows::Devices::Midi::MidiInPort>{ using type = Windows::Devices::Midi::IMidiInPort; };
template <> struct default_interface<Windows::Devices::Midi::MidiMessageReceivedEventArgs>{ using type = Windows::Devices::Midi::IMidiMessageReceivedEventArgs; };
template <> struct default_interface<Windows::Devices::Midi::MidiNoteOffMessage>{ using type = Windows::Devices::Midi::IMidiNoteOffMessage; };
template <> struct default_interface<Windows::Devices::Midi::MidiNoteOnMessage>{ using type = Windows::Devices::Midi::IMidiNoteOnMessage; };
template <> struct default_interface<Windows::Devices::Midi::MidiOutPort>{ using type = Windows::Devices::Midi::IMidiOutPort; };
template <> struct default_interface<Windows::Devices::Midi::MidiPitchBendChangeMessage>{ using type = Windows::Devices::Midi::IMidiPitchBendChangeMessage; };
template <> struct default_interface<Windows::Devices::Midi::MidiPolyphonicKeyPressureMessage>{ using type = Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage; };
template <> struct default_interface<Windows::Devices::Midi::MidiProgramChangeMessage>{ using type = Windows::Devices::Midi::IMidiProgramChangeMessage; };
template <> struct default_interface<Windows::Devices::Midi::MidiSongPositionPointerMessage>{ using type = Windows::Devices::Midi::IMidiSongPositionPointerMessage; };
template <> struct default_interface<Windows::Devices::Midi::MidiSongSelectMessage>{ using type = Windows::Devices::Midi::IMidiSongSelectMessage; };
template <> struct default_interface<Windows::Devices::Midi::MidiStartMessage>{ using type = Windows::Devices::Midi::IMidiMessage; };
template <> struct default_interface<Windows::Devices::Midi::MidiStopMessage>{ using type = Windows::Devices::Midi::IMidiMessage; };
template <> struct default_interface<Windows::Devices::Midi::MidiSynthesizer>{ using type = Windows::Devices::Midi::IMidiSynthesizer; };
template <> struct default_interface<Windows::Devices::Midi::MidiSystemExclusiveMessage>{ using type = Windows::Devices::Midi::IMidiMessage; };
template <> struct default_interface<Windows::Devices::Midi::MidiSystemResetMessage>{ using type = Windows::Devices::Midi::IMidiMessage; };
template <> struct default_interface<Windows::Devices::Midi::MidiTimeCodeMessage>{ using type = Windows::Devices::Midi::IMidiTimeCodeMessage; };
template <> struct default_interface<Windows::Devices::Midi::MidiTimingClockMessage>{ using type = Windows::Devices::Midi::IMidiMessage; };
template <> struct default_interface<Windows::Devices::Midi::MidiTuneRequestMessage>{ using type = Windows::Devices::Midi::IMidiMessage; };

template <typename D>
struct consume_Windows_Devices_Midi_IMidiChannelPressureMessage
{
    uint8_t Channel() const;
    uint8_t Pressure() const;
};
template <> struct consume<Windows::Devices::Midi::IMidiChannelPressureMessage> { template <typename D> using type = consume_Windows_Devices_Midi_IMidiChannelPressureMessage<D>; };

template <typename D>
struct consume_Windows_Devices_Midi_IMidiChannelPressureMessageFactory
{
    Windows::Devices::Midi::MidiChannelPressureMessage CreateMidiChannelPressureMessage(uint8_t channel, uint8_t pressure) const;
};
template <> struct consume<Windows::Devices::Midi::IMidiChannelPressureMessageFactory> { template <typename D> using type = consume_Windows_Devices_Midi_IMidiChannelPressureMessageFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Midi_IMidiControlChangeMessage
{
    uint8_t Channel() const;
    uint8_t Controller() const;
    uint8_t ControlValue() const;
};
template <> struct consume<Windows::Devices::Midi::IMidiControlChangeMessage> { template <typename D> using type = consume_Windows_Devices_Midi_IMidiControlChangeMessage<D>; };

template <typename D>
struct consume_Windows_Devices_Midi_IMidiControlChangeMessageFactory
{
    Windows::Devices::Midi::MidiControlChangeMessage CreateMidiControlChangeMessage(uint8_t channel, uint8_t controller, uint8_t controlValue) const;
};
template <> struct consume<Windows::Devices::Midi::IMidiControlChangeMessageFactory> { template <typename D> using type = consume_Windows_Devices_Midi_IMidiControlChangeMessageFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Midi_IMidiInPort
{
    event_token MessageReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::Midi::MidiInPort, Windows::Devices::Midi::MidiMessageReceivedEventArgs> const& handler) const;
    using MessageReceived_revoker = event_revoker<Windows::Devices::Midi::IMidiInPort>;
    MessageReceived_revoker MessageReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Midi::MidiInPort, Windows::Devices::Midi::MidiMessageReceivedEventArgs> const& handler) const;
    void MessageReceived(event_token const& token) const;
    hstring DeviceId() const;
};
template <> struct consume<Windows::Devices::Midi::IMidiInPort> { template <typename D> using type = consume_Windows_Devices_Midi_IMidiInPort<D>; };

template <typename D>
struct consume_Windows_Devices_Midi_IMidiInPortStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiInPort> FromIdAsync(param::hstring const& deviceId) const;
    hstring GetDeviceSelector() const;
};
template <> struct consume<Windows::Devices::Midi::IMidiInPortStatics> { template <typename D> using type = consume_Windows_Devices_Midi_IMidiInPortStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Midi_IMidiMessage
{
    Windows::Foundation::TimeSpan Timestamp() const;
    Windows::Storage::Streams::IBuffer RawData() const;
    Windows::Devices::Midi::MidiMessageType Type() const;
};
template <> struct consume<Windows::Devices::Midi::IMidiMessage> { template <typename D> using type = consume_Windows_Devices_Midi_IMidiMessage<D>; };

template <typename D>
struct consume_Windows_Devices_Midi_IMidiMessageReceivedEventArgs
{
    Windows::Devices::Midi::IMidiMessage Message() const;
};
template <> struct consume<Windows::Devices::Midi::IMidiMessageReceivedEventArgs> { template <typename D> using type = consume_Windows_Devices_Midi_IMidiMessageReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Midi_IMidiNoteOffMessage
{
    uint8_t Channel() const;
    uint8_t Note() const;
    uint8_t Velocity() const;
};
template <> struct consume<Windows::Devices::Midi::IMidiNoteOffMessage> { template <typename D> using type = consume_Windows_Devices_Midi_IMidiNoteOffMessage<D>; };

template <typename D>
struct consume_Windows_Devices_Midi_IMidiNoteOffMessageFactory
{
    Windows::Devices::Midi::MidiNoteOffMessage CreateMidiNoteOffMessage(uint8_t channel, uint8_t note, uint8_t velocity) const;
};
template <> struct consume<Windows::Devices::Midi::IMidiNoteOffMessageFactory> { template <typename D> using type = consume_Windows_Devices_Midi_IMidiNoteOffMessageFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Midi_IMidiNoteOnMessage
{
    uint8_t Channel() const;
    uint8_t Note() const;
    uint8_t Velocity() const;
};
template <> struct consume<Windows::Devices::Midi::IMidiNoteOnMessage> { template <typename D> using type = consume_Windows_Devices_Midi_IMidiNoteOnMessage<D>; };

template <typename D>
struct consume_Windows_Devices_Midi_IMidiNoteOnMessageFactory
{
    Windows::Devices::Midi::MidiNoteOnMessage CreateMidiNoteOnMessage(uint8_t channel, uint8_t note, uint8_t velocity) const;
};
template <> struct consume<Windows::Devices::Midi::IMidiNoteOnMessageFactory> { template <typename D> using type = consume_Windows_Devices_Midi_IMidiNoteOnMessageFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Midi_IMidiOutPort
{
    void SendMessage(Windows::Devices::Midi::IMidiMessage const& midiMessage) const;
    void SendBuffer(Windows::Storage::Streams::IBuffer const& midiData) const;
    hstring DeviceId() const;
};
template <> struct consume<Windows::Devices::Midi::IMidiOutPort> { template <typename D> using type = consume_Windows_Devices_Midi_IMidiOutPort<D>; };

template <typename D>
struct consume_Windows_Devices_Midi_IMidiOutPortStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::IMidiOutPort> FromIdAsync(param::hstring const& deviceId) const;
    hstring GetDeviceSelector() const;
};
template <> struct consume<Windows::Devices::Midi::IMidiOutPortStatics> { template <typename D> using type = consume_Windows_Devices_Midi_IMidiOutPortStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Midi_IMidiPitchBendChangeMessage
{
    uint8_t Channel() const;
    uint16_t Bend() const;
};
template <> struct consume<Windows::Devices::Midi::IMidiPitchBendChangeMessage> { template <typename D> using type = consume_Windows_Devices_Midi_IMidiPitchBendChangeMessage<D>; };

template <typename D>
struct consume_Windows_Devices_Midi_IMidiPitchBendChangeMessageFactory
{
    Windows::Devices::Midi::MidiPitchBendChangeMessage CreateMidiPitchBendChangeMessage(uint8_t channel, uint16_t bend) const;
};
template <> struct consume<Windows::Devices::Midi::IMidiPitchBendChangeMessageFactory> { template <typename D> using type = consume_Windows_Devices_Midi_IMidiPitchBendChangeMessageFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Midi_IMidiPolyphonicKeyPressureMessage
{
    uint8_t Channel() const;
    uint8_t Note() const;
    uint8_t Pressure() const;
};
template <> struct consume<Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage> { template <typename D> using type = consume_Windows_Devices_Midi_IMidiPolyphonicKeyPressureMessage<D>; };

template <typename D>
struct consume_Windows_Devices_Midi_IMidiPolyphonicKeyPressureMessageFactory
{
    Windows::Devices::Midi::MidiPolyphonicKeyPressureMessage CreateMidiPolyphonicKeyPressureMessage(uint8_t channel, uint8_t note, uint8_t pressure) const;
};
template <> struct consume<Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessageFactory> { template <typename D> using type = consume_Windows_Devices_Midi_IMidiPolyphonicKeyPressureMessageFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Midi_IMidiProgramChangeMessage
{
    uint8_t Channel() const;
    uint8_t Program() const;
};
template <> struct consume<Windows::Devices::Midi::IMidiProgramChangeMessage> { template <typename D> using type = consume_Windows_Devices_Midi_IMidiProgramChangeMessage<D>; };

template <typename D>
struct consume_Windows_Devices_Midi_IMidiProgramChangeMessageFactory
{
    Windows::Devices::Midi::MidiProgramChangeMessage CreateMidiProgramChangeMessage(uint8_t channel, uint8_t program) const;
};
template <> struct consume<Windows::Devices::Midi::IMidiProgramChangeMessageFactory> { template <typename D> using type = consume_Windows_Devices_Midi_IMidiProgramChangeMessageFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Midi_IMidiSongPositionPointerMessage
{
    uint16_t Beats() const;
};
template <> struct consume<Windows::Devices::Midi::IMidiSongPositionPointerMessage> { template <typename D> using type = consume_Windows_Devices_Midi_IMidiSongPositionPointerMessage<D>; };

template <typename D>
struct consume_Windows_Devices_Midi_IMidiSongPositionPointerMessageFactory
{
    Windows::Devices::Midi::MidiSongPositionPointerMessage CreateMidiSongPositionPointerMessage(uint16_t beats) const;
};
template <> struct consume<Windows::Devices::Midi::IMidiSongPositionPointerMessageFactory> { template <typename D> using type = consume_Windows_Devices_Midi_IMidiSongPositionPointerMessageFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Midi_IMidiSongSelectMessage
{
    uint8_t Song() const;
};
template <> struct consume<Windows::Devices::Midi::IMidiSongSelectMessage> { template <typename D> using type = consume_Windows_Devices_Midi_IMidiSongSelectMessage<D>; };

template <typename D>
struct consume_Windows_Devices_Midi_IMidiSongSelectMessageFactory
{
    Windows::Devices::Midi::MidiSongSelectMessage CreateMidiSongSelectMessage(uint8_t song) const;
};
template <> struct consume<Windows::Devices::Midi::IMidiSongSelectMessageFactory> { template <typename D> using type = consume_Windows_Devices_Midi_IMidiSongSelectMessageFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Midi_IMidiSynthesizer
{
    Windows::Devices::Enumeration::DeviceInformation AudioDevice() const;
    double Volume() const;
    void Volume(double value) const;
};
template <> struct consume<Windows::Devices::Midi::IMidiSynthesizer> { template <typename D> using type = consume_Windows_Devices_Midi_IMidiSynthesizer<D>; };

template <typename D>
struct consume_Windows_Devices_Midi_IMidiSynthesizerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiSynthesizer> CreateAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiSynthesizer> CreateAsync(Windows::Devices::Enumeration::DeviceInformation const& audioDevice) const;
    bool IsSynthesizer(Windows::Devices::Enumeration::DeviceInformation const& midiDevice) const;
};
template <> struct consume<Windows::Devices::Midi::IMidiSynthesizerStatics> { template <typename D> using type = consume_Windows_Devices_Midi_IMidiSynthesizerStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Midi_IMidiSystemExclusiveMessageFactory
{
    Windows::Devices::Midi::MidiSystemExclusiveMessage CreateMidiSystemExclusiveMessage(Windows::Storage::Streams::IBuffer const& rawData) const;
};
template <> struct consume<Windows::Devices::Midi::IMidiSystemExclusiveMessageFactory> { template <typename D> using type = consume_Windows_Devices_Midi_IMidiSystemExclusiveMessageFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Midi_IMidiTimeCodeMessage
{
    uint8_t FrameType() const;
    uint8_t Values() const;
};
template <> struct consume<Windows::Devices::Midi::IMidiTimeCodeMessage> { template <typename D> using type = consume_Windows_Devices_Midi_IMidiTimeCodeMessage<D>; };

template <typename D>
struct consume_Windows_Devices_Midi_IMidiTimeCodeMessageFactory
{
    Windows::Devices::Midi::MidiTimeCodeMessage CreateMidiTimeCodeMessage(uint8_t frameType, uint8_t values) const;
};
template <> struct consume<Windows::Devices::Midi::IMidiTimeCodeMessageFactory> { template <typename D> using type = consume_Windows_Devices_Midi_IMidiTimeCodeMessageFactory<D>; };

template <> struct abi<Windows::Devices::Midi::IMidiChannelPressureMessage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Channel(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_Pressure(uint8_t* value) = 0;
};};

template <> struct abi<Windows::Devices::Midi::IMidiChannelPressureMessageFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateMidiChannelPressureMessage(uint8_t channel, uint8_t pressure, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Midi::IMidiControlChangeMessage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Channel(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_Controller(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_ControlValue(uint8_t* value) = 0;
};};

template <> struct abi<Windows::Devices::Midi::IMidiControlChangeMessageFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateMidiControlChangeMessage(uint8_t channel, uint8_t controller, uint8_t controlValue, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Midi::IMidiInPort>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_MessageReceived(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_MessageReceived(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::Midi::IMidiInPortStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::Midi::IMidiMessage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_RawData(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Type(abi_t<Windows::Devices::Midi::MidiMessageType>* value) = 0;
};};

template <> struct abi<Windows::Devices::Midi::IMidiMessageReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Message(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Midi::IMidiNoteOffMessage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Channel(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_Note(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_Velocity(uint8_t* value) = 0;
};};

template <> struct abi<Windows::Devices::Midi::IMidiNoteOffMessageFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateMidiNoteOffMessage(uint8_t channel, uint8_t note, uint8_t velocity, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Midi::IMidiNoteOnMessage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Channel(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_Note(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_Velocity(uint8_t* value) = 0;
};};

template <> struct abi<Windows::Devices::Midi::IMidiNoteOnMessageFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateMidiNoteOnMessage(uint8_t channel, uint8_t note, uint8_t velocity, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Midi::IMidiOutPort>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SendMessage(::IUnknown* midiMessage) = 0;
    virtual HRESULT __stdcall SendBuffer(::IUnknown* midiData) = 0;
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::Midi::IMidiOutPortStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::Midi::IMidiPitchBendChangeMessage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Channel(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_Bend(uint16_t* value) = 0;
};};

template <> struct abi<Windows::Devices::Midi::IMidiPitchBendChangeMessageFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateMidiPitchBendChangeMessage(uint8_t channel, uint16_t bend, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Channel(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_Note(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_Pressure(uint8_t* value) = 0;
};};

template <> struct abi<Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessageFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateMidiPolyphonicKeyPressureMessage(uint8_t channel, uint8_t note, uint8_t pressure, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Midi::IMidiProgramChangeMessage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Channel(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_Program(uint8_t* value) = 0;
};};

template <> struct abi<Windows::Devices::Midi::IMidiProgramChangeMessageFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateMidiProgramChangeMessage(uint8_t channel, uint8_t program, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Midi::IMidiSongPositionPointerMessage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Beats(uint16_t* value) = 0;
};};

template <> struct abi<Windows::Devices::Midi::IMidiSongPositionPointerMessageFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateMidiSongPositionPointerMessage(uint16_t beats, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Midi::IMidiSongSelectMessage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Song(uint8_t* value) = 0;
};};

template <> struct abi<Windows::Devices::Midi::IMidiSongSelectMessageFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateMidiSongSelectMessage(uint8_t song, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Midi::IMidiSynthesizer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AudioDevice(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Volume(double* value) = 0;
    virtual HRESULT __stdcall put_Volume(double value) = 0;
};};

template <> struct abi<Windows::Devices::Midi::IMidiSynthesizerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateAsync(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateFromAudioDeviceAsync(::IUnknown* audioDevice, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall IsSynthesizer(::IUnknown* midiDevice, bool* value) = 0;
};};

template <> struct abi<Windows::Devices::Midi::IMidiSystemExclusiveMessageFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateMidiSystemExclusiveMessage(::IUnknown* rawData, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Midi::IMidiTimeCodeMessage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FrameType(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_Values(uint8_t* value) = 0;
};};

template <> struct abi<Windows::Devices::Midi::IMidiTimeCodeMessageFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateMidiTimeCodeMessage(uint8_t frameType, uint8_t values, ::IUnknown** value) = 0;
};};

}
