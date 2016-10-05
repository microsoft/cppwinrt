// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Midi {

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

namespace Windows::Devices::Midi {

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

namespace Windows::Devices::Midi {

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

}

}
