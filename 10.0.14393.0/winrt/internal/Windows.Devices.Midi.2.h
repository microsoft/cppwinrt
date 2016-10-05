// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Devices.Midi.1.h"
#include "Windows.Foundation.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_cc664f0e_edb1_55c8_9ef7_ec9007e4561c
#define WINRT_GENERIC_cc664f0e_edb1_55c8_9ef7_ec9007e4561c
template <> struct __declspec(uuid("cc664f0e-edb1-55c8-9ef7-ec9007e4561c")) __declspec(novtable) IAsyncOperation<Windows::Devices::Midi::MidiInPort> : impl_IAsyncOperation<Windows::Devices::Midi::MidiInPort> {};
#endif

#ifndef WINRT_GENERIC_32699a4d_1cc0_5a1c_9da6_875197875086
#define WINRT_GENERIC_32699a4d_1cc0_5a1c_9da6_875197875086
template <> struct __declspec(uuid("32699a4d-1cc0-5a1c-9da6-875197875086")) __declspec(novtable) IAsyncOperation<Windows::Devices::Midi::IMidiOutPort> : impl_IAsyncOperation<Windows::Devices::Midi::IMidiOutPort> {};
#endif

#ifndef WINRT_GENERIC_9388b978_13f1_5e37_8133_94430d90dd50
#define WINRT_GENERIC_9388b978_13f1_5e37_8133_94430d90dd50
template <> struct __declspec(uuid("9388b978-13f1-5e37-8133-94430d90dd50")) __declspec(novtable) IAsyncOperation<Windows::Devices::Midi::MidiSynthesizer> : impl_IAsyncOperation<Windows::Devices::Midi::MidiSynthesizer> {};
#endif

#ifndef WINRT_GENERIC_50017240_cc39_5775_8a6b_f6f22386bfca
#define WINRT_GENERIC_50017240_cc39_5775_8a6b_f6f22386bfca
template <> struct __declspec(uuid("50017240-cc39-5775-8a6b-f6f22386bfca")) __declspec(novtable) TypedEventHandler<Windows::Devices::Midi::MidiInPort, Windows::Devices::Midi::MidiMessageReceivedEventArgs> : impl_TypedEventHandler<Windows::Devices::Midi::MidiInPort, Windows::Devices::Midi::MidiMessageReceivedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_6c090fb2_8099_558f_8a92_9a8ea806e6fb
#define WINRT_GENERIC_6c090fb2_8099_558f_8a92_9a8ea806e6fb
template <> struct __declspec(uuid("6c090fb2-8099-558f-8a92-9a8ea806e6fb")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::Midi::MidiInPort> : impl_AsyncOperationCompletedHandler<Windows::Devices::Midi::MidiInPort> {};
#endif

#ifndef WINRT_GENERIC_eed37805_2a49_59b4_b4d4_1188c6819122
#define WINRT_GENERIC_eed37805_2a49_59b4_b4d4_1188c6819122
template <> struct __declspec(uuid("eed37805-2a49-59b4-b4d4-1188c6819122")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::Midi::IMidiOutPort> : impl_AsyncOperationCompletedHandler<Windows::Devices::Midi::IMidiOutPort> {};
#endif

#ifndef WINRT_GENERIC_5d716335_d087_516f_ad0a_63f61cbcf342
#define WINRT_GENERIC_5d716335_d087_516f_ad0a_63f61cbcf342
template <> struct __declspec(uuid("5d716335-d087-516f-ad0a-63f61cbcf342")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::Midi::MidiSynthesizer> : impl_AsyncOperationCompletedHandler<Windows::Devices::Midi::MidiSynthesizer> {};
#endif


}

namespace Windows::Devices::Midi {

template <typename D>
struct WINRT_EBO impl_IMidiChannelPressureMessage
{
    uint8_t Channel() const;
    uint8_t Pressure() const;
};

template <typename D>
struct WINRT_EBO impl_IMidiChannelPressureMessageFactory
{
    Windows::Devices::Midi::MidiChannelPressureMessage CreateMidiChannelPressureMessage(uint8_t channel, uint8_t pressure) const;
};

template <typename D>
struct WINRT_EBO impl_IMidiControlChangeMessage
{
    uint8_t Channel() const;
    uint8_t Controller() const;
    uint8_t ControlValue() const;
};

template <typename D>
struct WINRT_EBO impl_IMidiControlChangeMessageFactory
{
    Windows::Devices::Midi::MidiControlChangeMessage CreateMidiControlChangeMessage(uint8_t channel, uint8_t controller, uint8_t controlValue) const;
};

template <typename D>
struct WINRT_EBO impl_IMidiInPort
{
    event_token MessageReceived(const Windows::Foundation::TypedEventHandler<Windows::Devices::Midi::MidiInPort, Windows::Devices::Midi::MidiMessageReceivedEventArgs> & handler) const;
    using MessageReceived_revoker = event_revoker<IMidiInPort>;
    MessageReceived_revoker MessageReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Midi::MidiInPort, Windows::Devices::Midi::MidiMessageReceivedEventArgs> & handler) const;
    void MessageReceived(event_token token) const;
    hstring DeviceId() const;
};

template <typename D>
struct WINRT_EBO impl_IMidiInPortStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiInPort> FromIdAsync(hstring_ref deviceId) const;
    hstring GetDeviceSelector() const;
};

template <typename D>
struct WINRT_EBO impl_IMidiMessage
{
    Windows::Foundation::TimeSpan Timestamp() const;
    Windows::Storage::Streams::IBuffer RawData() const;
    Windows::Devices::Midi::MidiMessageType Type() const;
};

template <typename D>
struct WINRT_EBO impl_IMidiMessageReceivedEventArgs
{
    Windows::Devices::Midi::IMidiMessage Message() const;
};

template <typename D>
struct WINRT_EBO impl_IMidiNoteOffMessage
{
    uint8_t Channel() const;
    uint8_t Note() const;
    uint8_t Velocity() const;
};

template <typename D>
struct WINRT_EBO impl_IMidiNoteOffMessageFactory
{
    Windows::Devices::Midi::MidiNoteOffMessage CreateMidiNoteOffMessage(uint8_t channel, uint8_t note, uint8_t velocity) const;
};

template <typename D>
struct WINRT_EBO impl_IMidiNoteOnMessage
{
    uint8_t Channel() const;
    uint8_t Note() const;
    uint8_t Velocity() const;
};

template <typename D>
struct WINRT_EBO impl_IMidiNoteOnMessageFactory
{
    Windows::Devices::Midi::MidiNoteOnMessage CreateMidiNoteOnMessage(uint8_t channel, uint8_t note, uint8_t velocity) const;
};

template <typename D>
struct WINRT_EBO impl_IMidiOutPort
{
    void SendMessage(const Windows::Devices::Midi::IMidiMessage & midiMessage) const;
    void SendBuffer(const Windows::Storage::Streams::IBuffer & midiData) const;
    hstring DeviceId() const;
};

template <typename D>
struct WINRT_EBO impl_IMidiOutPortStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::IMidiOutPort> FromIdAsync(hstring_ref deviceId) const;
    hstring GetDeviceSelector() const;
};

template <typename D>
struct WINRT_EBO impl_IMidiPitchBendChangeMessage
{
    uint8_t Channel() const;
    uint16_t Bend() const;
};

template <typename D>
struct WINRT_EBO impl_IMidiPitchBendChangeMessageFactory
{
    Windows::Devices::Midi::MidiPitchBendChangeMessage CreateMidiPitchBendChangeMessage(uint8_t channel, uint16_t bend) const;
};

template <typename D>
struct WINRT_EBO impl_IMidiPolyphonicKeyPressureMessage
{
    uint8_t Channel() const;
    uint8_t Note() const;
    uint8_t Pressure() const;
};

template <typename D>
struct WINRT_EBO impl_IMidiPolyphonicKeyPressureMessageFactory
{
    Windows::Devices::Midi::MidiPolyphonicKeyPressureMessage CreateMidiPolyphonicKeyPressureMessage(uint8_t channel, uint8_t note, uint8_t pressure) const;
};

template <typename D>
struct WINRT_EBO impl_IMidiProgramChangeMessage
{
    uint8_t Channel() const;
    uint8_t Program() const;
};

template <typename D>
struct WINRT_EBO impl_IMidiProgramChangeMessageFactory
{
    Windows::Devices::Midi::MidiProgramChangeMessage CreateMidiProgramChangeMessage(uint8_t channel, uint8_t program) const;
};

template <typename D>
struct WINRT_EBO impl_IMidiSongPositionPointerMessage
{
    uint16_t Beats() const;
};

template <typename D>
struct WINRT_EBO impl_IMidiSongPositionPointerMessageFactory
{
    Windows::Devices::Midi::MidiSongPositionPointerMessage CreateMidiSongPositionPointerMessage(uint16_t beats) const;
};

template <typename D>
struct WINRT_EBO impl_IMidiSongSelectMessage
{
    uint8_t Song() const;
};

template <typename D>
struct WINRT_EBO impl_IMidiSongSelectMessageFactory
{
    Windows::Devices::Midi::MidiSongSelectMessage CreateMidiSongSelectMessage(uint8_t song) const;
};

template <typename D>
struct WINRT_EBO impl_IMidiSynthesizer
{
    Windows::Devices::Enumeration::DeviceInformation AudioDevice() const;
    double Volume() const;
    void Volume(double value) const;
};

template <typename D>
struct WINRT_EBO impl_IMidiSynthesizerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiSynthesizer> CreateAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiSynthesizer> CreateAsync(const Windows::Devices::Enumeration::DeviceInformation & audioDevice) const;
    bool IsSynthesizer(const Windows::Devices::Enumeration::DeviceInformation & midiDevice) const;
};

template <typename D>
struct WINRT_EBO impl_IMidiSystemExclusiveMessageFactory
{
    Windows::Devices::Midi::MidiSystemExclusiveMessage CreateMidiSystemExclusiveMessage(const Windows::Storage::Streams::IBuffer & rawData) const;
};

template <typename D>
struct WINRT_EBO impl_IMidiTimeCodeMessage
{
    uint8_t FrameType() const;
    uint8_t Values() const;
};

template <typename D>
struct WINRT_EBO impl_IMidiTimeCodeMessageFactory
{
    Windows::Devices::Midi::MidiTimeCodeMessage CreateMidiTimeCodeMessage(uint8_t frameType, uint8_t values) const;
};

struct IMidiChannelPressureMessage :
    Windows::IInspectable,
    impl::consume<IMidiChannelPressureMessage>,
    impl::require<IMidiChannelPressureMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiChannelPressureMessage(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMidiChannelPressureMessage>(m_ptr); }
};

struct IMidiChannelPressureMessageFactory :
    Windows::IInspectable,
    impl::consume<IMidiChannelPressureMessageFactory>
{
    IMidiChannelPressureMessageFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMidiChannelPressureMessageFactory>(m_ptr); }
};

struct IMidiControlChangeMessage :
    Windows::IInspectable,
    impl::consume<IMidiControlChangeMessage>,
    impl::require<IMidiControlChangeMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiControlChangeMessage(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMidiControlChangeMessage>(m_ptr); }
};

struct IMidiControlChangeMessageFactory :
    Windows::IInspectable,
    impl::consume<IMidiControlChangeMessageFactory>
{
    IMidiControlChangeMessageFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMidiControlChangeMessageFactory>(m_ptr); }
};

struct IMidiInPort :
    Windows::IInspectable,
    impl::consume<IMidiInPort>,
    impl::require<IMidiInPort, Windows::Foundation::IClosable>
{
    IMidiInPort(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMidiInPort>(m_ptr); }
};

struct IMidiInPortStatics :
    Windows::IInspectable,
    impl::consume<IMidiInPortStatics>
{
    IMidiInPortStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMidiInPortStatics>(m_ptr); }
};

struct IMidiMessage :
    Windows::IInspectable,
    impl::consume<IMidiMessage>
{
    IMidiMessage(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMidiMessage>(m_ptr); }
};

struct IMidiMessageReceivedEventArgs :
    Windows::IInspectable,
    impl::consume<IMidiMessageReceivedEventArgs>
{
    IMidiMessageReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMidiMessageReceivedEventArgs>(m_ptr); }
};

struct IMidiNoteOffMessage :
    Windows::IInspectable,
    impl::consume<IMidiNoteOffMessage>,
    impl::require<IMidiNoteOffMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiNoteOffMessage(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMidiNoteOffMessage>(m_ptr); }
};

struct IMidiNoteOffMessageFactory :
    Windows::IInspectable,
    impl::consume<IMidiNoteOffMessageFactory>
{
    IMidiNoteOffMessageFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMidiNoteOffMessageFactory>(m_ptr); }
};

struct IMidiNoteOnMessage :
    Windows::IInspectable,
    impl::consume<IMidiNoteOnMessage>,
    impl::require<IMidiNoteOnMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiNoteOnMessage(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMidiNoteOnMessage>(m_ptr); }
};

struct IMidiNoteOnMessageFactory :
    Windows::IInspectable,
    impl::consume<IMidiNoteOnMessageFactory>
{
    IMidiNoteOnMessageFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMidiNoteOnMessageFactory>(m_ptr); }
};

struct IMidiOutPort :
    Windows::IInspectable,
    impl::consume<IMidiOutPort>,
    impl::require<IMidiOutPort, Windows::Foundation::IClosable>
{
    IMidiOutPort(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMidiOutPort>(m_ptr); }
};

struct IMidiOutPortStatics :
    Windows::IInspectable,
    impl::consume<IMidiOutPortStatics>
{
    IMidiOutPortStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMidiOutPortStatics>(m_ptr); }
};

struct IMidiPitchBendChangeMessage :
    Windows::IInspectable,
    impl::consume<IMidiPitchBendChangeMessage>,
    impl::require<IMidiPitchBendChangeMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiPitchBendChangeMessage(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMidiPitchBendChangeMessage>(m_ptr); }
};

struct IMidiPitchBendChangeMessageFactory :
    Windows::IInspectable,
    impl::consume<IMidiPitchBendChangeMessageFactory>
{
    IMidiPitchBendChangeMessageFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMidiPitchBendChangeMessageFactory>(m_ptr); }
};

struct IMidiPolyphonicKeyPressureMessage :
    Windows::IInspectable,
    impl::consume<IMidiPolyphonicKeyPressureMessage>,
    impl::require<IMidiPolyphonicKeyPressureMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiPolyphonicKeyPressureMessage(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMidiPolyphonicKeyPressureMessage>(m_ptr); }
};

struct IMidiPolyphonicKeyPressureMessageFactory :
    Windows::IInspectable,
    impl::consume<IMidiPolyphonicKeyPressureMessageFactory>
{
    IMidiPolyphonicKeyPressureMessageFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMidiPolyphonicKeyPressureMessageFactory>(m_ptr); }
};

struct IMidiProgramChangeMessage :
    Windows::IInspectable,
    impl::consume<IMidiProgramChangeMessage>,
    impl::require<IMidiProgramChangeMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiProgramChangeMessage(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMidiProgramChangeMessage>(m_ptr); }
};

struct IMidiProgramChangeMessageFactory :
    Windows::IInspectable,
    impl::consume<IMidiProgramChangeMessageFactory>
{
    IMidiProgramChangeMessageFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMidiProgramChangeMessageFactory>(m_ptr); }
};

struct IMidiSongPositionPointerMessage :
    Windows::IInspectable,
    impl::consume<IMidiSongPositionPointerMessage>,
    impl::require<IMidiSongPositionPointerMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiSongPositionPointerMessage(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMidiSongPositionPointerMessage>(m_ptr); }
};

struct IMidiSongPositionPointerMessageFactory :
    Windows::IInspectable,
    impl::consume<IMidiSongPositionPointerMessageFactory>
{
    IMidiSongPositionPointerMessageFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMidiSongPositionPointerMessageFactory>(m_ptr); }
};

struct IMidiSongSelectMessage :
    Windows::IInspectable,
    impl::consume<IMidiSongSelectMessage>,
    impl::require<IMidiSongSelectMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiSongSelectMessage(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMidiSongSelectMessage>(m_ptr); }
};

struct IMidiSongSelectMessageFactory :
    Windows::IInspectable,
    impl::consume<IMidiSongSelectMessageFactory>
{
    IMidiSongSelectMessageFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMidiSongSelectMessageFactory>(m_ptr); }
};

struct IMidiSynthesizer :
    Windows::IInspectable,
    impl::consume<IMidiSynthesizer>,
    impl::require<IMidiSynthesizer, Windows::Devices::Midi::IMidiOutPort, Windows::Foundation::IClosable>
{
    IMidiSynthesizer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMidiSynthesizer>(m_ptr); }
};

struct IMidiSynthesizerStatics :
    Windows::IInspectable,
    impl::consume<IMidiSynthesizerStatics>
{
    IMidiSynthesizerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMidiSynthesizerStatics>(m_ptr); }
};

struct IMidiSystemExclusiveMessageFactory :
    Windows::IInspectable,
    impl::consume<IMidiSystemExclusiveMessageFactory>
{
    IMidiSystemExclusiveMessageFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMidiSystemExclusiveMessageFactory>(m_ptr); }
};

struct IMidiTimeCodeMessage :
    Windows::IInspectable,
    impl::consume<IMidiTimeCodeMessage>,
    impl::require<IMidiTimeCodeMessage, Windows::Devices::Midi::IMidiMessage>
{
    IMidiTimeCodeMessage(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMidiTimeCodeMessage>(m_ptr); }
};

struct IMidiTimeCodeMessageFactory :
    Windows::IInspectable,
    impl::consume<IMidiTimeCodeMessageFactory>
{
    IMidiTimeCodeMessageFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMidiTimeCodeMessageFactory>(m_ptr); }
};

}

}
