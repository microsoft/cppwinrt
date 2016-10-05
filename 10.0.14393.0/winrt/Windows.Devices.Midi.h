// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Devices.Enumeration.3.h"
#include "internal/Windows.Devices.Midi.3.h"
#include "Windows.Devices.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiChannelPressureMessage> : produce_base<D, Windows::Devices::Midi::IMidiChannelPressureMessage>
{
    HRESULT __stdcall get_Channel(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Channel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pressure(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Pressure());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiChannelPressureMessageFactory> : produce_base<D, Windows::Devices::Midi::IMidiChannelPressureMessageFactory>
{
    HRESULT __stdcall abi_CreateMidiChannelPressureMessage(uint8_t channel, uint8_t pressure, abi_arg_out<Windows::Devices::Midi::IMidiChannelPressureMessage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateMidiChannelPressureMessage(channel, pressure));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiControlChangeMessage> : produce_base<D, Windows::Devices::Midi::IMidiControlChangeMessage>
{
    HRESULT __stdcall get_Channel(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Channel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Controller(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Controller());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ControlValue(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ControlValue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiControlChangeMessageFactory> : produce_base<D, Windows::Devices::Midi::IMidiControlChangeMessageFactory>
{
    HRESULT __stdcall abi_CreateMidiControlChangeMessage(uint8_t channel, uint8_t controller, uint8_t controlValue, abi_arg_out<Windows::Devices::Midi::IMidiControlChangeMessage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateMidiControlChangeMessage(channel, controller, controlValue));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiInPort> : produce_base<D, Windows::Devices::Midi::IMidiInPort>
{
    HRESULT __stdcall add_MessageReceived(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Midi::MidiInPort, Windows::Devices::Midi::MidiMessageReceivedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().MessageReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Midi::MidiInPort, Windows::Devices::Midi::MidiMessageReceivedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MessageReceived(event_token token) noexcept override
    {
        try
        {
            this->shim().MessageReceived(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiInPortStatics> : produce_base<D, Windows::Devices::Midi::IMidiInPortStatics>
{
    HRESULT __stdcall abi_FromIdAsync(abi_arg_in<hstring> deviceId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiInPort>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromIdAsync(*reinterpret_cast<const hstring *>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelector(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiMessage> : produce_base<D, Windows::Devices::Midi::IMidiMessage>
{
    HRESULT __stdcall get_Timestamp(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RawData(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RawData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Type(Windows::Devices::Midi::MidiMessageType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiMessageReceivedEventArgs> : produce_base<D, Windows::Devices::Midi::IMidiMessageReceivedEventArgs>
{
    HRESULT __stdcall get_Message(abi_arg_out<Windows::Devices::Midi::IMidiMessage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Message());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiNoteOffMessage> : produce_base<D, Windows::Devices::Midi::IMidiNoteOffMessage>
{
    HRESULT __stdcall get_Channel(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Channel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Note(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Note());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Velocity(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Velocity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiNoteOffMessageFactory> : produce_base<D, Windows::Devices::Midi::IMidiNoteOffMessageFactory>
{
    HRESULT __stdcall abi_CreateMidiNoteOffMessage(uint8_t channel, uint8_t note, uint8_t velocity, abi_arg_out<Windows::Devices::Midi::IMidiNoteOffMessage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateMidiNoteOffMessage(channel, note, velocity));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiNoteOnMessage> : produce_base<D, Windows::Devices::Midi::IMidiNoteOnMessage>
{
    HRESULT __stdcall get_Channel(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Channel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Note(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Note());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Velocity(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Velocity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiNoteOnMessageFactory> : produce_base<D, Windows::Devices::Midi::IMidiNoteOnMessageFactory>
{
    HRESULT __stdcall abi_CreateMidiNoteOnMessage(uint8_t channel, uint8_t note, uint8_t velocity, abi_arg_out<Windows::Devices::Midi::IMidiNoteOnMessage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateMidiNoteOnMessage(channel, note, velocity));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiOutPort> : produce_base<D, Windows::Devices::Midi::IMidiOutPort>
{
    HRESULT __stdcall abi_SendMessage(abi_arg_in<Windows::Devices::Midi::IMidiMessage> midiMessage) noexcept override
    {
        try
        {
            this->shim().SendMessage(*reinterpret_cast<const Windows::Devices::Midi::IMidiMessage *>(&midiMessage));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendBuffer(abi_arg_in<Windows::Storage::Streams::IBuffer> midiData) noexcept override
    {
        try
        {
            this->shim().SendBuffer(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&midiData));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiOutPortStatics> : produce_base<D, Windows::Devices::Midi::IMidiOutPortStatics>
{
    HRESULT __stdcall abi_FromIdAsync(abi_arg_in<hstring> deviceId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::IMidiOutPort>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromIdAsync(*reinterpret_cast<const hstring *>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelector(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiPitchBendChangeMessage> : produce_base<D, Windows::Devices::Midi::IMidiPitchBendChangeMessage>
{
    HRESULT __stdcall get_Channel(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Channel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bend(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Bend());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiPitchBendChangeMessageFactory> : produce_base<D, Windows::Devices::Midi::IMidiPitchBendChangeMessageFactory>
{
    HRESULT __stdcall abi_CreateMidiPitchBendChangeMessage(uint8_t channel, uint16_t bend, abi_arg_out<Windows::Devices::Midi::IMidiPitchBendChangeMessage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateMidiPitchBendChangeMessage(channel, bend));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage> : produce_base<D, Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage>
{
    HRESULT __stdcall get_Channel(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Channel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Note(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Note());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pressure(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Pressure());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessageFactory> : produce_base<D, Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessageFactory>
{
    HRESULT __stdcall abi_CreateMidiPolyphonicKeyPressureMessage(uint8_t channel, uint8_t note, uint8_t pressure, abi_arg_out<Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateMidiPolyphonicKeyPressureMessage(channel, note, pressure));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiProgramChangeMessage> : produce_base<D, Windows::Devices::Midi::IMidiProgramChangeMessage>
{
    HRESULT __stdcall get_Channel(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Channel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Program(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Program());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiProgramChangeMessageFactory> : produce_base<D, Windows::Devices::Midi::IMidiProgramChangeMessageFactory>
{
    HRESULT __stdcall abi_CreateMidiProgramChangeMessage(uint8_t channel, uint8_t program, abi_arg_out<Windows::Devices::Midi::IMidiProgramChangeMessage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateMidiProgramChangeMessage(channel, program));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiSongPositionPointerMessage> : produce_base<D, Windows::Devices::Midi::IMidiSongPositionPointerMessage>
{
    HRESULT __stdcall get_Beats(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Beats());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiSongPositionPointerMessageFactory> : produce_base<D, Windows::Devices::Midi::IMidiSongPositionPointerMessageFactory>
{
    HRESULT __stdcall abi_CreateMidiSongPositionPointerMessage(uint16_t beats, abi_arg_out<Windows::Devices::Midi::IMidiSongPositionPointerMessage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateMidiSongPositionPointerMessage(beats));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiSongSelectMessage> : produce_base<D, Windows::Devices::Midi::IMidiSongSelectMessage>
{
    HRESULT __stdcall get_Song(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Song());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiSongSelectMessageFactory> : produce_base<D, Windows::Devices::Midi::IMidiSongSelectMessageFactory>
{
    HRESULT __stdcall abi_CreateMidiSongSelectMessage(uint8_t song, abi_arg_out<Windows::Devices::Midi::IMidiSongSelectMessage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateMidiSongSelectMessage(song));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiSynthesizer> : produce_base<D, Windows::Devices::Midi::IMidiSynthesizer>
{
    HRESULT __stdcall get_AudioDevice(abi_arg_out<Windows::Devices::Enumeration::IDeviceInformation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AudioDevice());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Volume(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Volume());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Volume(double value) noexcept override
    {
        try
        {
            this->shim().Volume(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiSynthesizerStatics> : produce_base<D, Windows::Devices::Midi::IMidiSynthesizerStatics>
{
    HRESULT __stdcall abi_CreateAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiSynthesizer>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromAudioDeviceAsync(abi_arg_in<Windows::Devices::Enumeration::IDeviceInformation> audioDevice, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiSynthesizer>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateAsync(*reinterpret_cast<const Windows::Devices::Enumeration::DeviceInformation *>(&audioDevice)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsSynthesizer(abi_arg_in<Windows::Devices::Enumeration::IDeviceInformation> midiDevice, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsSynthesizer(*reinterpret_cast<const Windows::Devices::Enumeration::DeviceInformation *>(&midiDevice)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiSystemExclusiveMessageFactory> : produce_base<D, Windows::Devices::Midi::IMidiSystemExclusiveMessageFactory>
{
    HRESULT __stdcall abi_CreateMidiSystemExclusiveMessage(abi_arg_in<Windows::Storage::Streams::IBuffer> rawData, abi_arg_out<Windows::Devices::Midi::IMidiMessage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateMidiSystemExclusiveMessage(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&rawData)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiTimeCodeMessage> : produce_base<D, Windows::Devices::Midi::IMidiTimeCodeMessage>
{
    HRESULT __stdcall get_FrameType(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FrameType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Values(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Values());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiTimeCodeMessageFactory> : produce_base<D, Windows::Devices::Midi::IMidiTimeCodeMessageFactory>
{
    HRESULT __stdcall abi_CreateMidiTimeCodeMessage(uint8_t frameType, uint8_t values, abi_arg_out<Windows::Devices::Midi::IMidiTimeCodeMessage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateMidiTimeCodeMessage(frameType, values));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Devices::Midi {

template <typename D> Windows::Foundation::TimeSpan impl_IMidiMessage<D>::Timestamp() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IMidiMessage &>(static_cast<const D &>(*this))->get_Timestamp(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IMidiMessage<D>::RawData() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IMidiMessage &>(static_cast<const D &>(*this))->get_RawData(put(value)));
    return value;
}

template <typename D> Windows::Devices::Midi::MidiMessageType impl_IMidiMessage<D>::Type() const
{
    Windows::Devices::Midi::MidiMessageType value {};
    check_hresult(static_cast<const IMidiMessage &>(static_cast<const D &>(*this))->get_Type(&value));
    return value;
}

template <typename D> uint8_t impl_IMidiNoteOffMessage<D>::Channel() const
{
    uint8_t value {};
    check_hresult(static_cast<const IMidiNoteOffMessage &>(static_cast<const D &>(*this))->get_Channel(&value));
    return value;
}

template <typename D> uint8_t impl_IMidiNoteOffMessage<D>::Note() const
{
    uint8_t value {};
    check_hresult(static_cast<const IMidiNoteOffMessage &>(static_cast<const D &>(*this))->get_Note(&value));
    return value;
}

template <typename D> uint8_t impl_IMidiNoteOffMessage<D>::Velocity() const
{
    uint8_t value {};
    check_hresult(static_cast<const IMidiNoteOffMessage &>(static_cast<const D &>(*this))->get_Velocity(&value));
    return value;
}

template <typename D> uint8_t impl_IMidiNoteOnMessage<D>::Channel() const
{
    uint8_t value {};
    check_hresult(static_cast<const IMidiNoteOnMessage &>(static_cast<const D &>(*this))->get_Channel(&value));
    return value;
}

template <typename D> uint8_t impl_IMidiNoteOnMessage<D>::Note() const
{
    uint8_t value {};
    check_hresult(static_cast<const IMidiNoteOnMessage &>(static_cast<const D &>(*this))->get_Note(&value));
    return value;
}

template <typename D> uint8_t impl_IMidiNoteOnMessage<D>::Velocity() const
{
    uint8_t value {};
    check_hresult(static_cast<const IMidiNoteOnMessage &>(static_cast<const D &>(*this))->get_Velocity(&value));
    return value;
}

template <typename D> uint8_t impl_IMidiPolyphonicKeyPressureMessage<D>::Channel() const
{
    uint8_t value {};
    check_hresult(static_cast<const IMidiPolyphonicKeyPressureMessage &>(static_cast<const D &>(*this))->get_Channel(&value));
    return value;
}

template <typename D> uint8_t impl_IMidiPolyphonicKeyPressureMessage<D>::Note() const
{
    uint8_t value {};
    check_hresult(static_cast<const IMidiPolyphonicKeyPressureMessage &>(static_cast<const D &>(*this))->get_Note(&value));
    return value;
}

template <typename D> uint8_t impl_IMidiPolyphonicKeyPressureMessage<D>::Pressure() const
{
    uint8_t value {};
    check_hresult(static_cast<const IMidiPolyphonicKeyPressureMessage &>(static_cast<const D &>(*this))->get_Pressure(&value));
    return value;
}

template <typename D> uint8_t impl_IMidiControlChangeMessage<D>::Channel() const
{
    uint8_t value {};
    check_hresult(static_cast<const IMidiControlChangeMessage &>(static_cast<const D &>(*this))->get_Channel(&value));
    return value;
}

template <typename D> uint8_t impl_IMidiControlChangeMessage<D>::Controller() const
{
    uint8_t value {};
    check_hresult(static_cast<const IMidiControlChangeMessage &>(static_cast<const D &>(*this))->get_Controller(&value));
    return value;
}

template <typename D> uint8_t impl_IMidiControlChangeMessage<D>::ControlValue() const
{
    uint8_t value {};
    check_hresult(static_cast<const IMidiControlChangeMessage &>(static_cast<const D &>(*this))->get_ControlValue(&value));
    return value;
}

template <typename D> uint8_t impl_IMidiProgramChangeMessage<D>::Channel() const
{
    uint8_t value {};
    check_hresult(static_cast<const IMidiProgramChangeMessage &>(static_cast<const D &>(*this))->get_Channel(&value));
    return value;
}

template <typename D> uint8_t impl_IMidiProgramChangeMessage<D>::Program() const
{
    uint8_t value {};
    check_hresult(static_cast<const IMidiProgramChangeMessage &>(static_cast<const D &>(*this))->get_Program(&value));
    return value;
}

template <typename D> uint8_t impl_IMidiChannelPressureMessage<D>::Channel() const
{
    uint8_t value {};
    check_hresult(static_cast<const IMidiChannelPressureMessage &>(static_cast<const D &>(*this))->get_Channel(&value));
    return value;
}

template <typename D> uint8_t impl_IMidiChannelPressureMessage<D>::Pressure() const
{
    uint8_t value {};
    check_hresult(static_cast<const IMidiChannelPressureMessage &>(static_cast<const D &>(*this))->get_Pressure(&value));
    return value;
}

template <typename D> uint8_t impl_IMidiPitchBendChangeMessage<D>::Channel() const
{
    uint8_t value {};
    check_hresult(static_cast<const IMidiPitchBendChangeMessage &>(static_cast<const D &>(*this))->get_Channel(&value));
    return value;
}

template <typename D> uint16_t impl_IMidiPitchBendChangeMessage<D>::Bend() const
{
    uint16_t value {};
    check_hresult(static_cast<const IMidiPitchBendChangeMessage &>(static_cast<const D &>(*this))->get_Bend(&value));
    return value;
}

template <typename D> uint8_t impl_IMidiTimeCodeMessage<D>::FrameType() const
{
    uint8_t value {};
    check_hresult(static_cast<const IMidiTimeCodeMessage &>(static_cast<const D &>(*this))->get_FrameType(&value));
    return value;
}

template <typename D> uint8_t impl_IMidiTimeCodeMessage<D>::Values() const
{
    uint8_t value {};
    check_hresult(static_cast<const IMidiTimeCodeMessage &>(static_cast<const D &>(*this))->get_Values(&value));
    return value;
}

template <typename D> uint16_t impl_IMidiSongPositionPointerMessage<D>::Beats() const
{
    uint16_t value {};
    check_hresult(static_cast<const IMidiSongPositionPointerMessage &>(static_cast<const D &>(*this))->get_Beats(&value));
    return value;
}

template <typename D> uint8_t impl_IMidiSongSelectMessage<D>::Song() const
{
    uint8_t value {};
    check_hresult(static_cast<const IMidiSongSelectMessage &>(static_cast<const D &>(*this))->get_Song(&value));
    return value;
}

template <typename D> Windows::Devices::Midi::MidiNoteOffMessage impl_IMidiNoteOffMessageFactory<D>::CreateMidiNoteOffMessage(uint8_t channel, uint8_t note, uint8_t velocity) const
{
    Windows::Devices::Midi::MidiNoteOffMessage value { nullptr };
    check_hresult(static_cast<const IMidiNoteOffMessageFactory &>(static_cast<const D &>(*this))->abi_CreateMidiNoteOffMessage(channel, note, velocity, put(value)));
    return value;
}

template <typename D> Windows::Devices::Midi::MidiNoteOnMessage impl_IMidiNoteOnMessageFactory<D>::CreateMidiNoteOnMessage(uint8_t channel, uint8_t note, uint8_t velocity) const
{
    Windows::Devices::Midi::MidiNoteOnMessage value { nullptr };
    check_hresult(static_cast<const IMidiNoteOnMessageFactory &>(static_cast<const D &>(*this))->abi_CreateMidiNoteOnMessage(channel, note, velocity, put(value)));
    return value;
}

template <typename D> Windows::Devices::Midi::MidiPolyphonicKeyPressureMessage impl_IMidiPolyphonicKeyPressureMessageFactory<D>::CreateMidiPolyphonicKeyPressureMessage(uint8_t channel, uint8_t note, uint8_t pressure) const
{
    Windows::Devices::Midi::MidiPolyphonicKeyPressureMessage value { nullptr };
    check_hresult(static_cast<const IMidiPolyphonicKeyPressureMessageFactory &>(static_cast<const D &>(*this))->abi_CreateMidiPolyphonicKeyPressureMessage(channel, note, pressure, put(value)));
    return value;
}

template <typename D> Windows::Devices::Midi::MidiControlChangeMessage impl_IMidiControlChangeMessageFactory<D>::CreateMidiControlChangeMessage(uint8_t channel, uint8_t controller, uint8_t controlValue) const
{
    Windows::Devices::Midi::MidiControlChangeMessage value { nullptr };
    check_hresult(static_cast<const IMidiControlChangeMessageFactory &>(static_cast<const D &>(*this))->abi_CreateMidiControlChangeMessage(channel, controller, controlValue, put(value)));
    return value;
}

template <typename D> Windows::Devices::Midi::MidiProgramChangeMessage impl_IMidiProgramChangeMessageFactory<D>::CreateMidiProgramChangeMessage(uint8_t channel, uint8_t program) const
{
    Windows::Devices::Midi::MidiProgramChangeMessage value { nullptr };
    check_hresult(static_cast<const IMidiProgramChangeMessageFactory &>(static_cast<const D &>(*this))->abi_CreateMidiProgramChangeMessage(channel, program, put(value)));
    return value;
}

template <typename D> Windows::Devices::Midi::MidiChannelPressureMessage impl_IMidiChannelPressureMessageFactory<D>::CreateMidiChannelPressureMessage(uint8_t channel, uint8_t pressure) const
{
    Windows::Devices::Midi::MidiChannelPressureMessage value { nullptr };
    check_hresult(static_cast<const IMidiChannelPressureMessageFactory &>(static_cast<const D &>(*this))->abi_CreateMidiChannelPressureMessage(channel, pressure, put(value)));
    return value;
}

template <typename D> Windows::Devices::Midi::MidiPitchBendChangeMessage impl_IMidiPitchBendChangeMessageFactory<D>::CreateMidiPitchBendChangeMessage(uint8_t channel, uint16_t bend) const
{
    Windows::Devices::Midi::MidiPitchBendChangeMessage value { nullptr };
    check_hresult(static_cast<const IMidiPitchBendChangeMessageFactory &>(static_cast<const D &>(*this))->abi_CreateMidiPitchBendChangeMessage(channel, bend, put(value)));
    return value;
}

template <typename D> Windows::Devices::Midi::MidiSystemExclusiveMessage impl_IMidiSystemExclusiveMessageFactory<D>::CreateMidiSystemExclusiveMessage(const Windows::Storage::Streams::IBuffer & rawData) const
{
    Windows::Devices::Midi::MidiSystemExclusiveMessage value { nullptr };
    check_hresult(static_cast<const IMidiSystemExclusiveMessageFactory &>(static_cast<const D &>(*this))->abi_CreateMidiSystemExclusiveMessage(get(rawData), put(value)));
    return value;
}

template <typename D> Windows::Devices::Midi::MidiTimeCodeMessage impl_IMidiTimeCodeMessageFactory<D>::CreateMidiTimeCodeMessage(uint8_t frameType, uint8_t values) const
{
    Windows::Devices::Midi::MidiTimeCodeMessage value { nullptr };
    check_hresult(static_cast<const IMidiTimeCodeMessageFactory &>(static_cast<const D &>(*this))->abi_CreateMidiTimeCodeMessage(frameType, values, put(value)));
    return value;
}

template <typename D> Windows::Devices::Midi::MidiSongPositionPointerMessage impl_IMidiSongPositionPointerMessageFactory<D>::CreateMidiSongPositionPointerMessage(uint16_t beats) const
{
    Windows::Devices::Midi::MidiSongPositionPointerMessage value { nullptr };
    check_hresult(static_cast<const IMidiSongPositionPointerMessageFactory &>(static_cast<const D &>(*this))->abi_CreateMidiSongPositionPointerMessage(beats, put(value)));
    return value;
}

template <typename D> Windows::Devices::Midi::MidiSongSelectMessage impl_IMidiSongSelectMessageFactory<D>::CreateMidiSongSelectMessage(uint8_t song) const
{
    Windows::Devices::Midi::MidiSongSelectMessage value { nullptr };
    check_hresult(static_cast<const IMidiSongSelectMessageFactory &>(static_cast<const D &>(*this))->abi_CreateMidiSongSelectMessage(song, put(value)));
    return value;
}

template <typename D> Windows::Devices::Midi::IMidiMessage impl_IMidiMessageReceivedEventArgs<D>::Message() const
{
    Windows::Devices::Midi::IMidiMessage value;
    check_hresult(static_cast<const IMidiMessageReceivedEventArgs &>(static_cast<const D &>(*this))->get_Message(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiInPort> impl_IMidiInPortStatics<D>::FromIdAsync(hstring_ref deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiInPort> value;
    check_hresult(static_cast<const IMidiInPortStatics &>(static_cast<const D &>(*this))->abi_FromIdAsync(get(deviceId), put(value)));
    return value;
}

template <typename D> hstring impl_IMidiInPortStatics<D>::GetDeviceSelector() const
{
    hstring value;
    check_hresult(static_cast<const IMidiInPortStatics &>(static_cast<const D &>(*this))->abi_GetDeviceSelector(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::IMidiOutPort> impl_IMidiOutPortStatics<D>::FromIdAsync(hstring_ref deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::IMidiOutPort> value;
    check_hresult(static_cast<const IMidiOutPortStatics &>(static_cast<const D &>(*this))->abi_FromIdAsync(get(deviceId), put(value)));
    return value;
}

template <typename D> hstring impl_IMidiOutPortStatics<D>::GetDeviceSelector() const
{
    hstring value;
    check_hresult(static_cast<const IMidiOutPortStatics &>(static_cast<const D &>(*this))->abi_GetDeviceSelector(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiSynthesizer> impl_IMidiSynthesizerStatics<D>::CreateAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiSynthesizer> value;
    check_hresult(static_cast<const IMidiSynthesizerStatics &>(static_cast<const D &>(*this))->abi_CreateAsync(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiSynthesizer> impl_IMidiSynthesizerStatics<D>::CreateAsync(const Windows::Devices::Enumeration::DeviceInformation & audioDevice) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiSynthesizer> value;
    check_hresult(static_cast<const IMidiSynthesizerStatics &>(static_cast<const D &>(*this))->abi_CreateFromAudioDeviceAsync(get(audioDevice), put(value)));
    return value;
}

template <typename D> bool impl_IMidiSynthesizerStatics<D>::IsSynthesizer(const Windows::Devices::Enumeration::DeviceInformation & midiDevice) const
{
    bool value {};
    check_hresult(static_cast<const IMidiSynthesizerStatics &>(static_cast<const D &>(*this))->abi_IsSynthesizer(get(midiDevice), &value));
    return value;
}

template <typename D> void impl_IMidiOutPort<D>::SendMessage(const Windows::Devices::Midi::IMidiMessage & midiMessage) const
{
    check_hresult(static_cast<const IMidiOutPort &>(static_cast<const D &>(*this))->abi_SendMessage(get(midiMessage)));
}

template <typename D> void impl_IMidiOutPort<D>::SendBuffer(const Windows::Storage::Streams::IBuffer & midiData) const
{
    check_hresult(static_cast<const IMidiOutPort &>(static_cast<const D &>(*this))->abi_SendBuffer(get(midiData)));
}

template <typename D> hstring impl_IMidiOutPort<D>::DeviceId() const
{
    hstring value;
    check_hresult(static_cast<const IMidiOutPort &>(static_cast<const D &>(*this))->get_DeviceId(put(value)));
    return value;
}

template <typename D> event_token impl_IMidiInPort<D>::MessageReceived(const Windows::Foundation::TypedEventHandler<Windows::Devices::Midi::MidiInPort, Windows::Devices::Midi::MidiMessageReceivedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMidiInPort &>(static_cast<const D &>(*this))->add_MessageReceived(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMidiInPort> impl_IMidiInPort<D>::MessageReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Midi::MidiInPort, Windows::Devices::Midi::MidiMessageReceivedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMidiInPort>(this, &ABI::Windows::Devices::Midi::IMidiInPort::remove_MessageReceived, MessageReceived(handler));
}

template <typename D> void impl_IMidiInPort<D>::MessageReceived(event_token token) const
{
    check_hresult(static_cast<const IMidiInPort &>(static_cast<const D &>(*this))->remove_MessageReceived(token));
}

template <typename D> hstring impl_IMidiInPort<D>::DeviceId() const
{
    hstring value;
    check_hresult(static_cast<const IMidiInPort &>(static_cast<const D &>(*this))->get_DeviceId(put(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceInformation impl_IMidiSynthesizer<D>::AudioDevice() const
{
    Windows::Devices::Enumeration::DeviceInformation value { nullptr };
    check_hresult(static_cast<const IMidiSynthesizer &>(static_cast<const D &>(*this))->get_AudioDevice(put(value)));
    return value;
}

template <typename D> double impl_IMidiSynthesizer<D>::Volume() const
{
    double value {};
    check_hresult(static_cast<const IMidiSynthesizer &>(static_cast<const D &>(*this))->get_Volume(&value));
    return value;
}

template <typename D> void impl_IMidiSynthesizer<D>::Volume(double value) const
{
    check_hresult(static_cast<const IMidiSynthesizer &>(static_cast<const D &>(*this))->put_Volume(value));
}

inline MidiActiveSensingMessage::MidiActiveSensingMessage() :
    MidiActiveSensingMessage(activate_instance<MidiActiveSensingMessage>())
{}

inline MidiChannelPressureMessage::MidiChannelPressureMessage(uint8_t channel, uint8_t pressure) :
    MidiChannelPressureMessage(get_activation_factory<MidiChannelPressureMessage, IMidiChannelPressureMessageFactory>().CreateMidiChannelPressureMessage(channel, pressure))
{}

inline MidiContinueMessage::MidiContinueMessage() :
    MidiContinueMessage(activate_instance<MidiContinueMessage>())
{}

inline MidiControlChangeMessage::MidiControlChangeMessage(uint8_t channel, uint8_t controller, uint8_t controlValue) :
    MidiControlChangeMessage(get_activation_factory<MidiControlChangeMessage, IMidiControlChangeMessageFactory>().CreateMidiControlChangeMessage(channel, controller, controlValue))
{}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiInPort> MidiInPort::FromIdAsync(hstring_ref deviceId)
{
    return get_activation_factory<MidiInPort, IMidiInPortStatics>().FromIdAsync(deviceId);
}

inline hstring MidiInPort::GetDeviceSelector()
{
    return get_activation_factory<MidiInPort, IMidiInPortStatics>().GetDeviceSelector();
}

inline MidiNoteOffMessage::MidiNoteOffMessage(uint8_t channel, uint8_t note, uint8_t velocity) :
    MidiNoteOffMessage(get_activation_factory<MidiNoteOffMessage, IMidiNoteOffMessageFactory>().CreateMidiNoteOffMessage(channel, note, velocity))
{}

inline MidiNoteOnMessage::MidiNoteOnMessage(uint8_t channel, uint8_t note, uint8_t velocity) :
    MidiNoteOnMessage(get_activation_factory<MidiNoteOnMessage, IMidiNoteOnMessageFactory>().CreateMidiNoteOnMessage(channel, note, velocity))
{}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::IMidiOutPort> MidiOutPort::FromIdAsync(hstring_ref deviceId)
{
    return get_activation_factory<MidiOutPort, IMidiOutPortStatics>().FromIdAsync(deviceId);
}

inline hstring MidiOutPort::GetDeviceSelector()
{
    return get_activation_factory<MidiOutPort, IMidiOutPortStatics>().GetDeviceSelector();
}

inline MidiPitchBendChangeMessage::MidiPitchBendChangeMessage(uint8_t channel, uint16_t bend) :
    MidiPitchBendChangeMessage(get_activation_factory<MidiPitchBendChangeMessage, IMidiPitchBendChangeMessageFactory>().CreateMidiPitchBendChangeMessage(channel, bend))
{}

inline MidiPolyphonicKeyPressureMessage::MidiPolyphonicKeyPressureMessage(uint8_t channel, uint8_t note, uint8_t pressure) :
    MidiPolyphonicKeyPressureMessage(get_activation_factory<MidiPolyphonicKeyPressureMessage, IMidiPolyphonicKeyPressureMessageFactory>().CreateMidiPolyphonicKeyPressureMessage(channel, note, pressure))
{}

inline MidiProgramChangeMessage::MidiProgramChangeMessage(uint8_t channel, uint8_t program) :
    MidiProgramChangeMessage(get_activation_factory<MidiProgramChangeMessage, IMidiProgramChangeMessageFactory>().CreateMidiProgramChangeMessage(channel, program))
{}

inline MidiSongPositionPointerMessage::MidiSongPositionPointerMessage(uint16_t beats) :
    MidiSongPositionPointerMessage(get_activation_factory<MidiSongPositionPointerMessage, IMidiSongPositionPointerMessageFactory>().CreateMidiSongPositionPointerMessage(beats))
{}

inline MidiSongSelectMessage::MidiSongSelectMessage(uint8_t song) :
    MidiSongSelectMessage(get_activation_factory<MidiSongSelectMessage, IMidiSongSelectMessageFactory>().CreateMidiSongSelectMessage(song))
{}

inline MidiStartMessage::MidiStartMessage() :
    MidiStartMessage(activate_instance<MidiStartMessage>())
{}

inline MidiStopMessage::MidiStopMessage() :
    MidiStopMessage(activate_instance<MidiStopMessage>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiSynthesizer> MidiSynthesizer::CreateAsync()
{
    return get_activation_factory<MidiSynthesizer, IMidiSynthesizerStatics>().CreateAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiSynthesizer> MidiSynthesizer::CreateAsync(const Windows::Devices::Enumeration::DeviceInformation & audioDevice)
{
    return get_activation_factory<MidiSynthesizer, IMidiSynthesizerStatics>().CreateAsync(audioDevice);
}

inline bool MidiSynthesizer::IsSynthesizer(const Windows::Devices::Enumeration::DeviceInformation & midiDevice)
{
    return get_activation_factory<MidiSynthesizer, IMidiSynthesizerStatics>().IsSynthesizer(midiDevice);
}

inline MidiSystemExclusiveMessage::MidiSystemExclusiveMessage(const Windows::Storage::Streams::IBuffer & rawData) :
    MidiSystemExclusiveMessage(get_activation_factory<MidiSystemExclusiveMessage, IMidiSystemExclusiveMessageFactory>().CreateMidiSystemExclusiveMessage(rawData))
{}

inline MidiSystemResetMessage::MidiSystemResetMessage() :
    MidiSystemResetMessage(activate_instance<MidiSystemResetMessage>())
{}

inline MidiTimeCodeMessage::MidiTimeCodeMessage(uint8_t frameType, uint8_t values) :
    MidiTimeCodeMessage(get_activation_factory<MidiTimeCodeMessage, IMidiTimeCodeMessageFactory>().CreateMidiTimeCodeMessage(frameType, values))
{}

inline MidiTimingClockMessage::MidiTimingClockMessage() :
    MidiTimingClockMessage(activate_instance<MidiTimingClockMessage>())
{}

inline MidiTuneRequestMessage::MidiTuneRequestMessage() :
    MidiTuneRequestMessage(activate_instance<MidiTuneRequestMessage>())
{}

}

}
