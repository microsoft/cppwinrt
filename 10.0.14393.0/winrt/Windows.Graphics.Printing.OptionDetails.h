// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Graphics.Printing.3.h"
#include "internal/Windows.Graphics.Printing.OptionDetails.3.h"
#include "Windows.Graphics.Printing.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails>
{
    HRESULT __stdcall get_ItemId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ItemId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ItemDisplayName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ItemDisplayName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemDisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ItemDisplayName());
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
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails>
{
    HRESULT __stdcall abi_AddItem(abi_arg_in<hstring> itemId, abi_arg_in<hstring> displayName) noexcept override
    {
        try
        {
            this->shim().AddItem(*reinterpret_cast<const hstring *>(&itemId), *reinterpret_cast<const hstring *>(&displayName));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails>
{
    HRESULT __stdcall put_DisplayName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().DisplayName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
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
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails>
{
    HRESULT __stdcall put_MaxCharacters(uint32_t value) noexcept override
    {
        try
        {
            this->shim().MaxCharacters(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxCharacters(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxCharacters());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails>
{
    HRESULT __stdcall get_Items(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::IInspectable>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Items());
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
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintNumberOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintNumberOptionDetails>
{
    HRESULT __stdcall get_MinValue(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MinValue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxValue(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxValue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails>
{
    HRESULT __stdcall get_OptionId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OptionId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OptionType(Windows::Graphics::Printing::OptionDetails::PrintOptionType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OptionType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ErrorText(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ErrorText(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ErrorText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_State(Windows::Graphics::Printing::OptionDetails::PrintOptionStates value) noexcept override
    {
        try
        {
            this->shim().State(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_State(Windows::Graphics::Printing::OptionDetails::PrintOptionStates * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySetValue(abi_arg_in<Windows::IInspectable> value, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TrySetValue(*reinterpret_cast<const Windows::IInspectable *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs>
{
    HRESULT __stdcall get_OptionId(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OptionId());
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
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails>
{
    HRESULT __stdcall get_Options(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Options());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateItemListOption(abi_arg_in<hstring> optionId, abi_arg_in<hstring> displayName, abi_arg_out<Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails> itemListOption) noexcept override
    {
        try
        {
            *itemListOption = detach(this->shim().CreateItemListOption(*reinterpret_cast<const hstring *>(&optionId), *reinterpret_cast<const hstring *>(&displayName)));
            return S_OK;
        }
        catch (...)
        {
            *itemListOption = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateTextOption(abi_arg_in<hstring> optionId, abi_arg_in<hstring> displayName, abi_arg_out<Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails> textOption) noexcept override
    {
        try
        {
            *textOption = detach(this->shim().CreateTextOption(*reinterpret_cast<const hstring *>(&optionId), *reinterpret_cast<const hstring *>(&displayName)));
            return S_OK;
        }
        catch (...)
        {
            *textOption = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_OptionChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails, Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs>> eventHandler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(this->shim().OptionChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails, Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs> *>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_OptionChanged(event_token eventCookie) noexcept override
    {
        try
        {
            this->shim().OptionChanged(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_BeginValidation(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails, Windows::IInspectable>> eventHandler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(this->shim().BeginValidation(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails, Windows::IInspectable> *>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BeginValidation(event_token eventCookie) noexcept override
    {
        try
        {
            this->shim().BeginValidation(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetailsStatic> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetailsStatic>
{
    HRESULT __stdcall abi_GetFromPrintTaskOptions(abi_arg_in<Windows::Graphics::Printing::IPrintTaskOptionsCore> printTaskOptions, abi_arg_out<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails> printTaskOptionDetails) noexcept override
    {
        try
        {
            *printTaskOptionDetails = detach(this->shim().GetFromPrintTaskOptions(*reinterpret_cast<const Windows::Graphics::Printing::PrintTaskOptions *>(&printTaskOptions)));
            return S_OK;
        }
        catch (...)
        {
            *printTaskOptionDetails = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintTextOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintTextOptionDetails>
{
    HRESULT __stdcall get_MaxCharacters(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxCharacters());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Graphics::Printing::OptionDetails {

template <typename D> hstring impl_IPrintOptionDetails<D>::OptionId() const
{
    hstring value;
    check_hresult(static_cast<const IPrintOptionDetails &>(static_cast<const D &>(*this))->get_OptionId(put(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::OptionDetails::PrintOptionType impl_IPrintOptionDetails<D>::OptionType() const
{
    Windows::Graphics::Printing::OptionDetails::PrintOptionType value {};
    check_hresult(static_cast<const IPrintOptionDetails &>(static_cast<const D &>(*this))->get_OptionType(&value));
    return value;
}

template <typename D> void impl_IPrintOptionDetails<D>::ErrorText(hstring_ref value) const
{
    check_hresult(static_cast<const IPrintOptionDetails &>(static_cast<const D &>(*this))->put_ErrorText(get(value)));
}

template <typename D> hstring impl_IPrintOptionDetails<D>::ErrorText() const
{
    hstring value;
    check_hresult(static_cast<const IPrintOptionDetails &>(static_cast<const D &>(*this))->get_ErrorText(put(value)));
    return value;
}

template <typename D> void impl_IPrintOptionDetails<D>::State(Windows::Graphics::Printing::OptionDetails::PrintOptionStates value) const
{
    check_hresult(static_cast<const IPrintOptionDetails &>(static_cast<const D &>(*this))->put_State(value));
}

template <typename D> Windows::Graphics::Printing::OptionDetails::PrintOptionStates impl_IPrintOptionDetails<D>::State() const
{
    Windows::Graphics::Printing::OptionDetails::PrintOptionStates value {};
    check_hresult(static_cast<const IPrintOptionDetails &>(static_cast<const D &>(*this))->get_State(&value));
    return value;
}

template <typename D> Windows::IInspectable impl_IPrintOptionDetails<D>::Value() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IPrintOptionDetails &>(static_cast<const D &>(*this))->get_Value(put(value)));
    return value;
}

template <typename D> bool impl_IPrintOptionDetails<D>::TrySetValue(const Windows::IInspectable & value) const
{
    bool succeeded {};
    check_hresult(static_cast<const IPrintOptionDetails &>(static_cast<const D &>(*this))->abi_TrySetValue(get(value), &succeeded));
    return succeeded;
}

template <typename D> uint32_t impl_IPrintNumberOptionDetails<D>::MinValue() const
{
    uint32_t value {};
    check_hresult(static_cast<const IPrintNumberOptionDetails &>(static_cast<const D &>(*this))->get_MinValue(&value));
    return value;
}

template <typename D> uint32_t impl_IPrintNumberOptionDetails<D>::MaxValue() const
{
    uint32_t value {};
    check_hresult(static_cast<const IPrintNumberOptionDetails &>(static_cast<const D &>(*this))->get_MaxValue(&value));
    return value;
}

template <typename D> uint32_t impl_IPrintTextOptionDetails<D>::MaxCharacters() const
{
    uint32_t value {};
    check_hresult(static_cast<const IPrintTextOptionDetails &>(static_cast<const D &>(*this))->get_MaxCharacters(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::IInspectable> impl_IPrintItemListOptionDetails<D>::Items() const
{
    Windows::Foundation::Collections::IVectorView<Windows::IInspectable> value;
    check_hresult(static_cast<const IPrintItemListOptionDetails &>(static_cast<const D &>(*this))->get_Items(put(value)));
    return value;
}

template <typename D> void impl_IPrintCustomOptionDetails<D>::DisplayName(hstring_ref value) const
{
    check_hresult(static_cast<const IPrintCustomOptionDetails &>(static_cast<const D &>(*this))->put_DisplayName(get(value)));
}

template <typename D> hstring impl_IPrintCustomOptionDetails<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IPrintCustomOptionDetails &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> void impl_IPrintCustomTextOptionDetails<D>::MaxCharacters(uint32_t value) const
{
    check_hresult(static_cast<const IPrintCustomTextOptionDetails &>(static_cast<const D &>(*this))->put_MaxCharacters(value));
}

template <typename D> uint32_t impl_IPrintCustomTextOptionDetails<D>::MaxCharacters() const
{
    uint32_t value {};
    check_hresult(static_cast<const IPrintCustomTextOptionDetails &>(static_cast<const D &>(*this))->get_MaxCharacters(&value));
    return value;
}

template <typename D> hstring impl_IPrintCustomItemDetails<D>::ItemId() const
{
    hstring value;
    check_hresult(static_cast<const IPrintCustomItemDetails &>(static_cast<const D &>(*this))->get_ItemId(put(value)));
    return value;
}

template <typename D> void impl_IPrintCustomItemDetails<D>::ItemDisplayName(hstring_ref value) const
{
    check_hresult(static_cast<const IPrintCustomItemDetails &>(static_cast<const D &>(*this))->put_ItemDisplayName(get(value)));
}

template <typename D> hstring impl_IPrintCustomItemDetails<D>::ItemDisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IPrintCustomItemDetails &>(static_cast<const D &>(*this))->get_ItemDisplayName(put(value)));
    return value;
}

template <typename D> void impl_IPrintCustomItemListOptionDetails<D>::AddItem(hstring_ref itemId, hstring_ref displayName) const
{
    check_hresult(static_cast<const IPrintCustomItemListOptionDetails &>(static_cast<const D &>(*this))->abi_AddItem(get(itemId), get(displayName)));
}

template <typename D> Windows::IInspectable impl_IPrintTaskOptionChangedEventArgs<D>::OptionId() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IPrintTaskOptionChangedEventArgs &>(static_cast<const D &>(*this))->get_OptionId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails> impl_IPrintTaskOptionDetails<D>::Options() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails> value;
    check_hresult(static_cast<const IPrintTaskOptionDetails &>(static_cast<const D &>(*this))->get_Options(put(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::OptionDetails::PrintCustomItemListOptionDetails impl_IPrintTaskOptionDetails<D>::CreateItemListOption(hstring_ref optionId, hstring_ref displayName) const
{
    Windows::Graphics::Printing::OptionDetails::PrintCustomItemListOptionDetails itemListOption { nullptr };
    check_hresult(static_cast<const IPrintTaskOptionDetails &>(static_cast<const D &>(*this))->abi_CreateItemListOption(get(optionId), get(displayName), put(itemListOption)));
    return itemListOption;
}

template <typename D> Windows::Graphics::Printing::OptionDetails::PrintCustomTextOptionDetails impl_IPrintTaskOptionDetails<D>::CreateTextOption(hstring_ref optionId, hstring_ref displayName) const
{
    Windows::Graphics::Printing::OptionDetails::PrintCustomTextOptionDetails textOption { nullptr };
    check_hresult(static_cast<const IPrintTaskOptionDetails &>(static_cast<const D &>(*this))->abi_CreateTextOption(get(optionId), get(displayName), put(textOption)));
    return textOption;
}

template <typename D> event_token impl_IPrintTaskOptionDetails<D>::OptionChanged(const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails, Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs> & eventHandler) const
{
    event_token eventCookie {};
    check_hresult(static_cast<const IPrintTaskOptionDetails &>(static_cast<const D &>(*this))->add_OptionChanged(get(eventHandler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IPrintTaskOptionDetails> impl_IPrintTaskOptionDetails<D>::OptionChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails, Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs> & eventHandler) const
{
    return impl::make_event_revoker<D, IPrintTaskOptionDetails>(this, &ABI::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails::remove_OptionChanged, OptionChanged(eventHandler));
}

template <typename D> void impl_IPrintTaskOptionDetails<D>::OptionChanged(event_token eventCookie) const
{
    check_hresult(static_cast<const IPrintTaskOptionDetails &>(static_cast<const D &>(*this))->remove_OptionChanged(eventCookie));
}

template <typename D> event_token impl_IPrintTaskOptionDetails<D>::BeginValidation(const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails, Windows::IInspectable> & eventHandler) const
{
    event_token eventCookie {};
    check_hresult(static_cast<const IPrintTaskOptionDetails &>(static_cast<const D &>(*this))->add_BeginValidation(get(eventHandler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IPrintTaskOptionDetails> impl_IPrintTaskOptionDetails<D>::BeginValidation(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails, Windows::IInspectable> & eventHandler) const
{
    return impl::make_event_revoker<D, IPrintTaskOptionDetails>(this, &ABI::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails::remove_BeginValidation, BeginValidation(eventHandler));
}

template <typename D> void impl_IPrintTaskOptionDetails<D>::BeginValidation(event_token eventCookie) const
{
    check_hresult(static_cast<const IPrintTaskOptionDetails &>(static_cast<const D &>(*this))->remove_BeginValidation(eventCookie));
}

template <typename D> Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails impl_IPrintTaskOptionDetailsStatic<D>::GetFromPrintTaskOptions(const Windows::Graphics::Printing::PrintTaskOptions & printTaskOptions) const
{
    Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails printTaskOptionDetails { nullptr };
    check_hresult(static_cast<const IPrintTaskOptionDetailsStatic &>(static_cast<const D &>(*this))->abi_GetFromPrintTaskOptions(get(printTaskOptions), put(printTaskOptionDetails)));
    return printTaskOptionDetails;
}

inline Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails PrintTaskOptionDetails::GetFromPrintTaskOptions(const Windows::Graphics::Printing::PrintTaskOptions & printTaskOptions)
{
    return get_activation_factory<PrintTaskOptionDetails, IPrintTaskOptionDetailsStatic>().GetFromPrintTaskOptions(printTaskOptions);
}

}

}
