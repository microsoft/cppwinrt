// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Enumeration.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.Midi.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Midi {

struct WINRT_EBO IMidiChannelPressureMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiChannelPressureMessage>,
    impl::require<IMidiChannelPressureMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiChannelPressureMessage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMidiChannelPressureMessageFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiChannelPressureMessageFactory>
{
    IMidiChannelPressureMessageFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMidiControlChangeMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiControlChangeMessage>,
    impl::require<IMidiControlChangeMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiControlChangeMessage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMidiControlChangeMessageFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiControlChangeMessageFactory>
{
    IMidiControlChangeMessageFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMidiInPort :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiInPort>,
    impl::require<IMidiInPort, Windows::Foundation::IClosable>
{
    IMidiInPort(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMidiInPortStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiInPortStatics>
{
    IMidiInPortStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMidiMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiMessage>
{
    IMidiMessage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMidiMessageReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiMessageReceivedEventArgs>
{
    IMidiMessageReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMidiNoteOffMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiNoteOffMessage>,
    impl::require<IMidiNoteOffMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiNoteOffMessage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMidiNoteOffMessageFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiNoteOffMessageFactory>
{
    IMidiNoteOffMessageFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMidiNoteOnMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiNoteOnMessage>,
    impl::require<IMidiNoteOnMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiNoteOnMessage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMidiNoteOnMessageFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiNoteOnMessageFactory>
{
    IMidiNoteOnMessageFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMidiOutPort :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiOutPort>,
    impl::require<IMidiOutPort, Windows::Foundation::IClosable>
{
    IMidiOutPort(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMidiOutPortStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiOutPortStatics>
{
    IMidiOutPortStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMidiPitchBendChangeMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiPitchBendChangeMessage>,
    impl::require<IMidiPitchBendChangeMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiPitchBendChangeMessage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMidiPitchBendChangeMessageFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiPitchBendChangeMessageFactory>
{
    IMidiPitchBendChangeMessageFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMidiPolyphonicKeyPressureMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiPolyphonicKeyPressureMessage>,
    impl::require<IMidiPolyphonicKeyPressureMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiPolyphonicKeyPressureMessage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMidiPolyphonicKeyPressureMessageFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiPolyphonicKeyPressureMessageFactory>
{
    IMidiPolyphonicKeyPressureMessageFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMidiProgramChangeMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiProgramChangeMessage>,
    impl::require<IMidiProgramChangeMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiProgramChangeMessage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMidiProgramChangeMessageFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiProgramChangeMessageFactory>
{
    IMidiProgramChangeMessageFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMidiSongPositionPointerMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiSongPositionPointerMessage>,
    impl::require<IMidiSongPositionPointerMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiSongPositionPointerMessage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMidiSongPositionPointerMessageFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiSongPositionPointerMessageFactory>
{
    IMidiSongPositionPointerMessageFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMidiSongSelectMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiSongSelectMessage>,
    impl::require<IMidiSongSelectMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiSongSelectMessage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMidiSongSelectMessageFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiSongSelectMessageFactory>
{
    IMidiSongSelectMessageFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMidiSynthesizer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiSynthesizer>,
    impl::require<IMidiSynthesizer, Windows::Devices::Midi::IMidiOutPort, Windows::Foundation::IClosable>
{
    IMidiSynthesizer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMidiSynthesizerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiSynthesizerStatics>
{
    IMidiSynthesizerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMidiSystemExclusiveMessageFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiSystemExclusiveMessageFactory>
{
    IMidiSystemExclusiveMessageFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMidiTimeCodeMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiTimeCodeMessage>,
    impl::require<IMidiTimeCodeMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiTimeCodeMessage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMidiTimeCodeMessageFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMidiTimeCodeMessageFactory>
{
    IMidiTimeCodeMessageFactory(std::nullptr_t = nullptr) noexcept {}
};

}
