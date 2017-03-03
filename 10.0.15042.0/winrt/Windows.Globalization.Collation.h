// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Globalization.Collation.3.h"
#include "Windows.Globalization.h"
#include "Windows.Foundation.Collections.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Globalization::Collation::ICharacterGrouping> : produce_base<D, Windows::Globalization::Collation::ICharacterGrouping>
{
    HRESULT __stdcall get_First(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_Label(impl::abi_arg_out<hstring> value) noexcept override
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
    HRESULT __stdcall abi_Lookup(impl::abi_arg_in<hstring> text, impl::abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Lookup(*reinterpret_cast<const hstring *>(&text)));
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
    HRESULT __stdcall abi_Create(impl::abi_arg_in<hstring> language, impl::abi_arg_out<Windows::Globalization::Collation::ICharacterGroupings> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<const hstring *>(&language)));
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

namespace Windows::Globalization::Collation {

template <typename D> hstring impl_ICharacterGrouping<D>::First() const
{
    hstring value;
    check_hresult(WINRT_SHIM(ICharacterGrouping)->get_First(put_abi(value)));
    return value;
}

template <typename D> hstring impl_ICharacterGrouping<D>::Label() const
{
    hstring value;
    check_hresult(WINRT_SHIM(ICharacterGrouping)->get_Label(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::Collation::CharacterGroupings impl_ICharacterGroupingsFactory<D>::Create(hstring_view language) const
{
    Windows::Globalization::Collation::CharacterGroupings result { nullptr };
    check_hresult(WINRT_SHIM(ICharacterGroupingsFactory)->abi_Create(get_abi(language), put_abi(result)));
    return result;
}

template <typename D> hstring impl_ICharacterGroupings<D>::Lookup(hstring_view text) const
{
    hstring result;
    check_hresult(WINRT_SHIM(ICharacterGroupings)->abi_Lookup(get_abi(text), put_abi(result)));
    return result;
}

inline CharacterGroupings::CharacterGroupings() :
    CharacterGroupings(activate_instance<CharacterGroupings>())
{}

inline CharacterGroupings::CharacterGroupings(hstring_view language) :
    CharacterGroupings(get_activation_factory<CharacterGroupings, ICharacterGroupingsFactory>().Create(language))
{}

}

}

template<>
struct std::hash<winrt::Windows::Globalization::Collation::ICharacterGrouping>
{
    size_t operator()(const winrt::Windows::Globalization::Collation::ICharacterGrouping & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Globalization::Collation::ICharacterGroupings>
{
    size_t operator()(const winrt::Windows::Globalization::Collation::ICharacterGroupings & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Globalization::Collation::ICharacterGroupingsFactory>
{
    size_t operator()(const winrt::Windows::Globalization::Collation::ICharacterGroupingsFactory & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Globalization::Collation::CharacterGrouping>
{
    size_t operator()(const winrt::Windows::Globalization::Collation::CharacterGrouping & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Globalization::Collation::CharacterGroupings>
{
    size_t operator()(const winrt::Windows::Globalization::Collation::CharacterGroupings & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
