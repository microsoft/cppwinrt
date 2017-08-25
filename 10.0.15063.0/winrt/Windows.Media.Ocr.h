// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Globalization.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.Media.Ocr.2.h"
#include "winrt/Windows.Media.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Ocr::OcrResult> consume_Windows_Media_Ocr_IOcrEngine<D>::RecognizeAsync(Windows::Graphics::Imaging::SoftwareBitmap const& bitmap) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Ocr::OcrResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Ocr::IOcrEngine)->RecognizeAsync(get_abi(bitmap), put_abi(result)));
    return result;
}

template <typename D> Windows::Globalization::Language consume_Windows_Media_Ocr_IOcrEngine<D>::RecognizerLanguage() const
{
    Windows::Globalization::Language value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Ocr::IOcrEngine)->get_RecognizerLanguage(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Ocr_IOcrEngineStatics<D>::MaxImageDimension() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Ocr::IOcrEngineStatics)->get_MaxImageDimension(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language> consume_Windows_Media_Ocr_IOcrEngineStatics<D>::AvailableRecognizerLanguages() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Ocr::IOcrEngineStatics)->get_AvailableRecognizerLanguages(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Ocr_IOcrEngineStatics<D>::IsLanguageSupported(Windows::Globalization::Language const& language) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Media::Ocr::IOcrEngineStatics)->IsLanguageSupported(get_abi(language), &result));
    return result;
}

template <typename D> Windows::Media::Ocr::OcrEngine consume_Windows_Media_Ocr_IOcrEngineStatics<D>::TryCreateFromLanguage(Windows::Globalization::Language const& language) const
{
    Windows::Media::Ocr::OcrEngine result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Ocr::IOcrEngineStatics)->TryCreateFromLanguage(get_abi(language), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Ocr::OcrEngine consume_Windows_Media_Ocr_IOcrEngineStatics<D>::TryCreateFromUserProfileLanguages() const
{
    Windows::Media::Ocr::OcrEngine result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Ocr::IOcrEngineStatics)->TryCreateFromUserProfileLanguages(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Ocr::OcrWord> consume_Windows_Media_Ocr_IOcrLine<D>::Words() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Ocr::OcrWord> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Ocr::IOcrLine)->get_Words(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Ocr_IOcrLine<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Ocr::IOcrLine)->get_Text(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Ocr::OcrLine> consume_Windows_Media_Ocr_IOcrResult<D>::Lines() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Ocr::OcrLine> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Ocr::IOcrResult)->get_Lines(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Media_Ocr_IOcrResult<D>::TextAngle() const
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Ocr::IOcrResult)->get_TextAngle(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Ocr_IOcrResult<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Ocr::IOcrResult)->get_Text(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_Media_Ocr_IOcrWord<D>::BoundingRect() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::Media::Ocr::IOcrWord)->get_BoundingRect(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Ocr_IOcrWord<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Ocr::IOcrWord)->get_Text(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Media::Ocr::IOcrEngine> : produce_base<D, Windows::Media::Ocr::IOcrEngine>
{
    HRESULT __stdcall RecognizeAsync(::IUnknown* bitmap, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RecognizeAsync(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&bitmap)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecognizerLanguage(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RecognizerLanguage());
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
struct produce<D, Windows::Media::Ocr::IOcrEngineStatics> : produce_base<D, Windows::Media::Ocr::IOcrEngineStatics>
{
    HRESULT __stdcall get_MaxImageDimension(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxImageDimension());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AvailableRecognizerLanguages(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AvailableRecognizerLanguages());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsLanguageSupported(::IUnknown* language, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsLanguageSupported(*reinterpret_cast<Windows::Globalization::Language const*>(&language)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryCreateFromLanguage(::IUnknown* language, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryCreateFromLanguage(*reinterpret_cast<Windows::Globalization::Language const*>(&language)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryCreateFromUserProfileLanguages(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryCreateFromUserProfileLanguages());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Ocr::IOcrLine> : produce_base<D, Windows::Media::Ocr::IOcrLine>
{
    HRESULT __stdcall get_Words(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Words());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Text(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Text());
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
struct produce<D, Windows::Media::Ocr::IOcrResult> : produce_base<D, Windows::Media::Ocr::IOcrResult>
{
    HRESULT __stdcall get_Lines(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Lines());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TextAngle(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TextAngle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Text(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Text());
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
struct produce<D, Windows::Media::Ocr::IOcrWord> : produce_base<D, Windows::Media::Ocr::IOcrWord>
{
    HRESULT __stdcall get_BoundingRect(abi_t<Windows::Foundation::Rect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BoundingRect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Text(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Text());
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

WINRT_EXPORT namespace winrt::Windows::Media::Ocr {

inline uint32_t OcrEngine::MaxImageDimension()
{
    return get_activation_factory<OcrEngine, Windows::Media::Ocr::IOcrEngineStatics>().MaxImageDimension();
}

inline Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language> OcrEngine::AvailableRecognizerLanguages()
{
    return get_activation_factory<OcrEngine, Windows::Media::Ocr::IOcrEngineStatics>().AvailableRecognizerLanguages();
}

inline bool OcrEngine::IsLanguageSupported(Windows::Globalization::Language const& language)
{
    return get_activation_factory<OcrEngine, Windows::Media::Ocr::IOcrEngineStatics>().IsLanguageSupported(language);
}

inline Windows::Media::Ocr::OcrEngine OcrEngine::TryCreateFromLanguage(Windows::Globalization::Language const& language)
{
    return get_activation_factory<OcrEngine, Windows::Media::Ocr::IOcrEngineStatics>().TryCreateFromLanguage(language);
}

inline Windows::Media::Ocr::OcrEngine OcrEngine::TryCreateFromUserProfileLanguages()
{
    return get_activation_factory<OcrEngine, Windows::Media::Ocr::IOcrEngineStatics>().TryCreateFromUserProfileLanguages();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::Ocr::IOcrEngine> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Ocr::IOcrEngine> {};

template<> struct hash<winrt::Windows::Media::Ocr::IOcrEngineStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Ocr::IOcrEngineStatics> {};

template<> struct hash<winrt::Windows::Media::Ocr::IOcrLine> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Ocr::IOcrLine> {};

template<> struct hash<winrt::Windows::Media::Ocr::IOcrResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Ocr::IOcrResult> {};

template<> struct hash<winrt::Windows::Media::Ocr::IOcrWord> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Ocr::IOcrWord> {};

template<> struct hash<winrt::Windows::Media::Ocr::OcrEngine> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Ocr::OcrEngine> {};

template<> struct hash<winrt::Windows::Media::Ocr::OcrLine> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Ocr::OcrLine> {};

template<> struct hash<winrt::Windows::Media::Ocr::OcrResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Ocr::OcrResult> {};

template<> struct hash<winrt::Windows::Media::Ocr::OcrWord> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Ocr::OcrWord> {};

}

WINRT_WARNING_POP
