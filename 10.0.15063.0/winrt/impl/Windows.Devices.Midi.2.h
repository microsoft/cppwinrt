// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Enumeration.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Devices.Midi.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Midi {

struct WINRT_EBO MidiActiveSensingMessage :
    Windows::Devices::Midi::IMidiMessage
{
    MidiActiveSensingMessage(std::nullptr_t) noexcept {}
    MidiActiveSensingMessage();
};

struct WINRT_EBO MidiChannelPressureMessage :
    Windows::Devices::Midi::IMidiChannelPressureMessage
{
    MidiChannelPressureMessage(std::nullptr_t) noexcept {}
    MidiChannelPressureMessage(uint8_t channel, uint8_t pressure);
};

struct WINRT_EBO MidiContinueMessage :
    Windows::Devices::Midi::IMidiMessage
{
    MidiContinueMessage(std::nullptr_t) noexcept {}
    MidiContinueMessage();
};

struct WINRT_EBO MidiControlChangeMessage :
    Windows::Devices::Midi::IMidiControlChangeMessage
{
    MidiControlChangeMessage(std::nullptr_t) noexcept {}
    MidiControlChangeMessage(uint8_t channel, uint8_t controller, uint8_t controlValue);
};

struct WINRT_EBO MidiInPort :
    Windows::Devices::Midi::IMidiInPort
{
    MidiInPort(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiInPort> FromIdAsync(param::hstring const& deviceId);
    static hstring GetDeviceSelector();
};

struct WINRT_EBO MidiMessageReceivedEventArgs :
    Windows::Devices::Midi::IMidiMessageReceivedEventArgs
{
    MidiMessageReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MidiNoteOffMessage :
    Windows::Devices::Midi::IMidiNoteOffMessage
{
    MidiNoteOffMessage(std::nullptr_t) noexcept {}
    MidiNoteOffMessage(uint8_t channel, uint8_t note, uint8_t velocity);
};

struct WINRT_EBO MidiNoteOnMessage :
    Windows::Devices::Midi::IMidiNoteOnMessage
{
    MidiNoteOnMessage(std::nullptr_t) noexcept {}
    MidiNoteOnMessage(uint8_t channel, uint8_t note, uint8_t velocity);
};

struct WINRT_EBO MidiOutPort :
    Windows::Devices::Midi::IMidiOutPort
{
    MidiOutPort(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::IMidiOutPort> FromIdAsync(param::hstring const& deviceId);
    static hstring GetDeviceSelector();
};

struct WINRT_EBO MidiPitchBendChangeMessage :
    Windows::Devices::Midi::IMidiPitchBendChangeMessage
{
    MidiPitchBendChangeMessage(std::nullptr_t) noexcept {}
    MidiPitchBendChangeMessage(uint8_t channel, uint16_t bend);
};

struct WINRT_EBO MidiPolyphonicKeyPressureMessage :
    Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage
{
    MidiPolyphonicKeyPressureMessage(std::nullptr_t) noexcept {}
    MidiPolyphonicKeyPressureMessage(uint8_t channel, uint8_t note, uint8_t pressure);
};

struct WINRT_EBO MidiProgramChangeMessage :
    Windows::Devices::Midi::IMidiProgramChangeMessage
{
    MidiProgramChangeMessage(std::nullptr_t) noexcept {}
    MidiProgramChangeMessage(uint8_t channel, uint8_t program);
};

struct WINRT_EBO MidiSongPositionPointerMessage :
    Windows::Devices::Midi::IMidiSongPositionPointerMessage
{
    MidiSongPositionPointerMessage(std::nullptr_t) noexcept {}
    MidiSongPositionPointerMessage(uint16_t beats);
};

struct WINRT_EBO MidiSongSelectMessage :
    Windows::Devices::Midi::IMidiSongSelectMessage
{
    MidiSongSelectMessage(std::nullptr_t) noexcept {}
    MidiSongSelectMessage(uint8_t song);
};

struct WINRT_EBO MidiStartMessage :
    Windows::Devices::Midi::IMidiMessage
{
    MidiStartMessage(std::nullptr_t) noexcept {}
    MidiStartMessage();
};

struct WINRT_EBO MidiStopMessage :
    Windows::Devices::Midi::IMidiMessage
{
    MidiStopMessage(std::nullptr_t) noexcept {}
    MidiStopMessage();
};

struct WINRT_EBO MidiSynthesizer :
    Windows::Devices::Midi::IMidiSynthesizer
{
    MidiSynthesizer(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiSynthesizer> CreateAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiSynthesizer> CreateAsync(Windows::Devices::Enumeration::DeviceInformation const& audioDevice);
    static bool IsSynthesizer(Windows::Devices::Enumeration::DeviceInformation const& midiDevice);
};

struct WINRT_EBO MidiSystemExclusiveMessage :
    Windows::Devices::Midi::IMidiMessage
{
    MidiSystemExclusiveMessage(std::nullptr_t) noexcept {}
    MidiSystemExclusiveMessage(Windows::Storage::Streams::IBuffer const& rawData);
};

struct WINRT_EBO MidiSystemResetMessage :
    Windows::Devices::Midi::IMidiMessage
{
    MidiSystemResetMessage(std::nullptr_t) noexcept {}
    MidiSystemResetMessage();
};

struct WINRT_EBO MidiTimeCodeMessage :
    Windows::Devices::Midi::IMidiTimeCodeMessage
{
    MidiTimeCodeMessage(std::nullptr_t) noexcept {}
    MidiTimeCodeMessage(uint8_t frameType, uint8_t values);
};

struct WINRT_EBO MidiTimingClockMessage :
    Windows::Devices::Midi::IMidiMessage
{
    MidiTimingClockMessage(std::nullptr_t) noexcept {}
    MidiTimingClockMessage();
};

struct WINRT_EBO MidiTuneRequestMessage :
    Windows::Devices::Midi::IMidiMessage
{
    MidiTuneRequestMessage(std::nullptr_t) noexcept {}
    MidiTuneRequestMessage();
};

}
