// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Globalization.Collation.2.h"
#include "winrt/Windows.Globalization.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Globalization_Collation_ICharacterGrouping<D>::First() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::Collation::ICharacterGrouping)->get_First(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_Collation_ICharacterGrouping<D>::Label() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::Collation::ICharacterGrouping)->get_Label(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_Collation_ICharacterGroupings<D>::Lookup(param::hstring const& text) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::Collation::ICharacterGroupings)->Lookup(get_abi(text), put_abi(result)));
    return result;
}

template <typename D> Windows::Globalization::Collation::CharacterGroupings consume_Windows_Globalization_Collation_ICharacterGroupingsFactory<D>::Create(param::hstring const& language) const
{
    Windows::Globalization::Collation::CharacterGroupings result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::Collation::ICharacterGroupingsFactory)->Create(get_abi(language), put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Globalization::Collation::ICharacterGrouping> : produce_base<D, Windows::Globalization::Collation::ICharacterGrouping>
{
    HRESULT __stdcall get_First(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().First());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Label(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Label());
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
struct produce<D, Windows::Globalization::Collation::ICharacterGroupings> : produce_base<D, Windows::Globalization::Collation::ICharacterGroupings>
{
    HRESULT __stdcall Lookup(HSTRING text, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Lookup(*reinterpret_cast<hstring const*>(&text)));
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
struct produce<D, Windows::Globalization::Collation::ICharacterGroupingsFactory> : produce_base<D, Windows::Globalization::Collation::ICharacterGroupingsFactory>
{
    HRESULT __stdcall Create(HSTRING language, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&language)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Globalization::Collation {

inline CharacterGroupings::CharacterGroupings() :
    CharacterGroupings(activate_instance<CharacterGroupings>())
{}

inline CharacterGroupings::CharacterGroupings(param::hstring const& language) :
    CharacterGroupings(get_activation_factory<CharacterGroupings, Windows::Globalization::Collation::ICharacterGroupingsFactory>().Create(language))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Globalization::Collation::ICharacterGrouping> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::Collation::ICharacterGrouping> {};

template<> struct hash<winrt::Windows::Globalization::Collation::ICharacterGroupings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::Collation::ICharacterGroupings> {};

template<> struct hash<winrt::Windows::Globalization::Collation::ICharacterGroupingsFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::Collation::ICharacterGroupingsFactory> {};

template<> struct hash<winrt::Windows::Globalization::Collation::CharacterGrouping> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::Collation::CharacterGrouping> {};

template<> struct hash<winrt::Windows::Globalization::Collation::CharacterGroupings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::Collation::CharacterGroupings> {};

}

WINRT_WARNING_POP
