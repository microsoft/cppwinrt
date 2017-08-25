// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Media.2.h"
#include "winrt/impl/Windows.Media.Core.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Media.SpeechSynthesis.2.h"
#include "winrt/Windows.Media.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::SpeechSynthesis::VoiceInformation> consume_Windows_Media_SpeechSynthesis_IInstalledVoicesStatic<D>::AllVoices() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::SpeechSynthesis::VoiceInformation> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::IInstalledVoicesStatic)->get_AllVoices(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::SpeechSynthesis::VoiceInformation consume_Windows_Media_SpeechSynthesis_IInstalledVoicesStatic<D>::DefaultVoice() const
{
    Windows::Media::SpeechSynthesis::VoiceInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::IInstalledVoicesStatic)->get_DefaultVoice(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::IMediaMarker> consume_Windows_Media_SpeechSynthesis_ISpeechSynthesisStream<D>::Markers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::IMediaMarker> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesisStream)->get_Markers(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::SpeechSynthesis::SpeechSynthesisStream> consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizer<D>::SynthesizeTextToStreamAsync(param::hstring const& text) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::SpeechSynthesis::SpeechSynthesisStream> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesizer)->SynthesizeTextToStreamAsync(get_abi(text), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::SpeechSynthesis::SpeechSynthesisStream> consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizer<D>::SynthesizeSsmlToStreamAsync(param::hstring const& Ssml) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::SpeechSynthesis::SpeechSynthesisStream> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesizer)->SynthesizeSsmlToStreamAsync(get_abi(Ssml), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizer<D>::Voice(Windows::Media::SpeechSynthesis::VoiceInformation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesizer)->put_Voice(get_abi(value)));
}

template <typename D> Windows::Media::SpeechSynthesis::VoiceInformation consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizer<D>::Voice() const
{
    Windows::Media::SpeechSynthesis::VoiceInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesizer)->get_Voice(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::SpeechSynthesis::SpeechSynthesizerOptions consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizer2<D>::Options() const
{
    Windows::Media::SpeechSynthesis::SpeechSynthesizerOptions value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesizer2)->get_Options(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions<D>::IncludeWordBoundaryMetadata() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions)->get_IncludeWordBoundaryMetadata(&value));
    return value;
}

template <typename D> void consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions<D>::IncludeWordBoundaryMetadata(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions)->put_IncludeWordBoundaryMetadata(value));
}

template <typename D> bool consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions<D>::IncludeSentenceBoundaryMetadata() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions)->get_IncludeSentenceBoundaryMetadata(&value));
    return value;
}

template <typename D> void consume_Windows_Media_SpeechSynthesis_ISpeechSynthesizerOptions<D>::IncludeSentenceBoundaryMetadata(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions)->put_IncludeSentenceBoundaryMetadata(value));
}

template <typename D> hstring consume_Windows_Media_SpeechSynthesis_IVoiceInformation<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::IVoiceInformation)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_SpeechSynthesis_IVoiceInformation<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::IVoiceInformation)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_SpeechSynthesis_IVoiceInformation<D>::Language() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::IVoiceInformation)->get_Language(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_SpeechSynthesis_IVoiceInformation<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::IVoiceInformation)->get_Description(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::SpeechSynthesis::VoiceGender consume_Windows_Media_SpeechSynthesis_IVoiceInformation<D>::Gender() const
{
    Windows::Media::SpeechSynthesis::VoiceGender value{};
    check_hresult(WINRT_SHIM(Windows::Media::SpeechSynthesis::IVoiceInformation)->get_Gender(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Media::SpeechSynthesis::IInstalledVoicesStatic> : produce_base<D, Windows::Media::SpeechSynthesis::IInstalledVoicesStatic>
{
    HRESULT __stdcall get_AllVoices(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AllVoices());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultVoice(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DefaultVoice());
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
struct produce<D, Windows::Media::SpeechSynthesis::ISpeechSynthesisStream> : produce_base<D, Windows::Media::SpeechSynthesis::ISpeechSynthesisStream>
{
    HRESULT __stdcall get_Markers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Markers());
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
struct produce<D, Windows::Media::SpeechSynthesis::ISpeechSynthesizer> : produce_base<D, Windows::Media::SpeechSynthesis::ISpeechSynthesizer>
{
    HRESULT __stdcall SynthesizeTextToStreamAsync(HSTRING text, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SynthesizeTextToStreamAsync(*reinterpret_cast<hstring const*>(&text)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SynthesizeSsmlToStreamAsync(HSTRING Ssml, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SynthesizeSsmlToStreamAsync(*reinterpret_cast<hstring const*>(&Ssml)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Voice(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Voice(*reinterpret_cast<Windows::Media::SpeechSynthesis::VoiceInformation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Voice(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Voice());
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
struct produce<D, Windows::Media::SpeechSynthesis::ISpeechSynthesizer2> : produce_base<D, Windows::Media::SpeechSynthesis::ISpeechSynthesizer2>
{
    HRESULT __stdcall get_Options(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Options());
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
struct produce<D, Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions> : produce_base<D, Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions>
{
    HRESULT __stdcall get_IncludeWordBoundaryMetadata(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IncludeWordBoundaryMetadata());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IncludeWordBoundaryMetadata(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IncludeWordBoundaryMetadata(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IncludeSentenceBoundaryMetadata(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IncludeSentenceBoundaryMetadata());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IncludeSentenceBoundaryMetadata(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IncludeSentenceBoundaryMetadata(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::SpeechSynthesis::IVoiceInformation> : produce_base<D, Windows::Media::SpeechSynthesis::IVoiceInformation>
{
    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Language(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Language());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gender(abi_t<Windows::Media::SpeechSynthesis::VoiceGender>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Gender());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Media::SpeechSynthesis {

inline SpeechSynthesizer::SpeechSynthesizer() :
    SpeechSynthesizer(activate_instance<SpeechSynthesizer>())
{}

inline Windows::Foundation::Collections::IVectorView<Windows::Media::SpeechSynthesis::VoiceInformation> SpeechSynthesizer::AllVoices()
{
    return get_activation_factory<SpeechSynthesizer, Windows::Media::SpeechSynthesis::IInstalledVoicesStatic>().AllVoices();
}

inline Windows::Media::SpeechSynthesis::VoiceInformation SpeechSynthesizer::DefaultVoice()
{
    return get_activation_factory<SpeechSynthesizer, Windows::Media::SpeechSynthesis::IInstalledVoicesStatic>().DefaultVoice();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::SpeechSynthesis::IInstalledVoicesStatic> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::SpeechSynthesis::IInstalledVoicesStatic> {};

template<> struct hash<winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesisStream> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesisStream> {};

template<> struct hash<winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesizer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesizer> {};

template<> struct hash<winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesizer2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesizer2> {};

template<> struct hash<winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions> {};

template<> struct hash<winrt::Windows::Media::SpeechSynthesis::IVoiceInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::SpeechSynthesis::IVoiceInformation> {};

template<> struct hash<winrt::Windows::Media::SpeechSynthesis::SpeechSynthesisStream> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::SpeechSynthesis::SpeechSynthesisStream> {};

template<> struct hash<winrt::Windows::Media::SpeechSynthesis::SpeechSynthesizer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::SpeechSynthesis::SpeechSynthesizer> {};

template<> struct hash<winrt::Windows::Media::SpeechSynthesis::SpeechSynthesizerOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::SpeechSynthesis::SpeechSynthesizerOptions> {};

template<> struct hash<winrt::Windows::Media::SpeechSynthesis::VoiceInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::SpeechSynthesis::VoiceInformation> {};

}

WINRT_WARNING_POP
