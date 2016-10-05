// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Globalization.Collation.3.h"
#include "Windows.Globalization.h"
#include "Windows.Foundation.Collections.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Globalization::Collation::ICharacterGrouping> : produce_base<D, Windows::Globalization::Collation::ICharacterGrouping>
{
    HRESULT __stdcall get_First(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().First());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Label(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Label());
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
    HRESULT __stdcall abi_Lookup(abi_arg_in<hstring> text, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Lookup(*reinterpret_cast<const hstring *>(&text)));
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
    check_hresult(static_cast<const ICharacterGrouping &>(static_cast<const D &>(*this))->get_First(put(value)));
    return value;
}

template <typename D> hstring impl_ICharacterGrouping<D>::Label() const
{
    hstring value;
    check_hresult(static_cast<const ICharacterGrouping &>(static_cast<const D &>(*this))->get_Label(put(value)));
    return value;
}

template <typename D> hstring impl_ICharacterGroupings<D>::Lookup(hstring_ref text) const
{
    hstring result;
    check_hresult(static_cast<const ICharacterGroupings &>(static_cast<const D &>(*this))->abi_Lookup(get(text), put(result)));
    return result;
}

inline CharacterGroupings::CharacterGroupings() :
    CharacterGroupings(activate_instance<CharacterGroupings>())
{}

}

}
