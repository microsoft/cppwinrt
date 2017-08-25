// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Graphics.Printing.2.h"
#include "winrt/impl/Windows.Graphics.Printing.OptionDetails.2.h"
#include "winrt/Windows.Graphics.Printing.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemDetails<D>::ItemId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails)->get_ItemId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemDetails<D>::ItemDisplayName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails)->put_ItemDisplayName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemDetails<D>::ItemDisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails)->get_ItemDisplayName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemListOptionDetails<D>::AddItem(param::hstring const& itemId, param::hstring const& displayName) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails)->AddItem(get_abi(itemId), get_abi(displayName)));
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomOptionDetails<D>::DisplayName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails)->put_DisplayName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomOptionDetails<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomTextOptionDetails<D>::MaxCharacters(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails)->put_MaxCharacters(value));
}

template <typename D> uint32_t consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomTextOptionDetails<D>::MaxCharacters() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails)->get_MaxCharacters(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Foundation::IInspectable> consume_Windows_Graphics_Printing_OptionDetails_IPrintItemListOptionDetails<D>::Items() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails)->get_Items(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Printing_OptionDetails_IPrintNumberOptionDetails<D>::MinValue() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintNumberOptionDetails)->get_MinValue(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Printing_OptionDetails_IPrintNumberOptionDetails<D>::MaxValue() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintNumberOptionDetails)->get_MaxValue(&value));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintOptionDetails<D>::OptionId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails)->get_OptionId(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::OptionDetails::PrintOptionType consume_Windows_Graphics_Printing_OptionDetails_IPrintOptionDetails<D>::OptionType() const
{
    Windows::Graphics::Printing::OptionDetails::PrintOptionType value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails)->get_OptionType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintOptionDetails<D>::ErrorText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails)->put_ErrorText(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintOptionDetails<D>::ErrorText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails)->get_ErrorText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintOptionDetails<D>::State(Windows::Graphics::Printing::OptionDetails::PrintOptionStates const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails)->put_State(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing::OptionDetails::PrintOptionStates consume_Windows_Graphics_Printing_OptionDetails_IPrintOptionDetails<D>::State() const
{
    Windows::Graphics::Printing::OptionDetails::PrintOptionStates value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails)->get_State(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Graphics_Printing_OptionDetails_IPrintOptionDetails<D>::Value() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails)->get_Value(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Graphics_Printing_OptionDetails_IPrintOptionDetails<D>::TrySetValue(Windows::Foundation::IInspectable const& value) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails)->TrySetValue(get_abi(value), &succeeded));
    return succeeded;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionChangedEventArgs<D>::OptionId() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs)->get_OptionId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails> consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetails<D>::Options() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails)->get_Options(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::OptionDetails::PrintCustomItemListOptionDetails consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetails<D>::CreateItemListOption(param::hstring const& optionId, param::hstring const& displayName) const
{
    Windows::Graphics::Printing::OptionDetails::PrintCustomItemListOptionDetails itemListOption{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails)->CreateItemListOption(get_abi(optionId), get_abi(displayName), put_abi(itemListOption)));
    return itemListOption;
}

template <typename D> Windows::Graphics::Printing::OptionDetails::PrintCustomTextOptionDetails consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetails<D>::CreateTextOption(param::hstring const& optionId, param::hstring const& displayName) const
{
    Windows::Graphics::Printing::OptionDetails::PrintCustomTextOptionDetails textOption{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails)->CreateTextOption(get_abi(optionId), get_abi(displayName), put_abi(textOption)));
    return textOption;
}

template <typename D> event_token consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetails<D>::OptionChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails, Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails)->add_OptionChanged(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails> consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetails<D>::OptionChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails, Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails>(this, &abi_t<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails>::remove_OptionChanged, OptionChanged(eventHandler));
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetails<D>::OptionChanged(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails)->remove_OptionChanged(get_abi(eventCookie)));
}

template <typename D> event_token consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetails<D>::BeginValidation(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails, Windows::Foundation::IInspectable> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails)->add_BeginValidation(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails> consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetails<D>::BeginValidation(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails, Windows::Foundation::IInspectable> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails>(this, &abi_t<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails>::remove_BeginValidation, BeginValidation(eventHandler));
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetails<D>::BeginValidation(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails)->remove_BeginValidation(get_abi(eventCookie)));
}

template <typename D> Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetailsStatic<D>::GetFromPrintTaskOptions(Windows::Graphics::Printing::PrintTaskOptions const& printTaskOptions) const
{
    Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails printTaskOptionDetails{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetailsStatic)->GetFromPrintTaskOptions(get_abi(printTaskOptions), put_abi(printTaskOptionDetails)));
    return printTaskOptionDetails;
}

template <typename D> uint32_t consume_Windows_Graphics_Printing_OptionDetails_IPrintTextOptionDetails<D>::MaxCharacters() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintTextOptionDetails)->get_MaxCharacters(&value));
    return value;
}

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails>
{
    HRESULT __stdcall get_ItemId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ItemId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ItemDisplayName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ItemDisplayName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemDisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ItemDisplayName());
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
    HRESULT __stdcall AddItem(HSTRING itemId, HSTRING displayName) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddItem(*reinterpret_cast<hstring const*>(&itemId), *reinterpret_cast<hstring const*>(&displayName));
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
    HRESULT __stdcall put_DisplayName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails>
{
    HRESULT __stdcall put_MaxCharacters(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxCharacters(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxCharacters(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxCharacters());
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
    HRESULT __stdcall get_Items(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Items());
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
    HRESULT __stdcall get_MinValue(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MinValue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxValue(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxValue());
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
    HRESULT __stdcall get_OptionId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OptionId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OptionType(abi_t<Windows::Graphics::Printing::OptionDetails::PrintOptionType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OptionType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ErrorText(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ErrorText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorText(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ErrorText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_State(abi_t<Windows::Graphics::Printing::OptionDetails::PrintOptionStates> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().State(*reinterpret_cast<Windows::Graphics::Printing::OptionDetails::PrintOptionStates const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_State(abi_t<Windows::Graphics::Printing::OptionDetails::PrintOptionStates>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySetValue(::IUnknown* value, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TrySetValue(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value)));
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
    HRESULT __stdcall get_OptionId(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OptionId());
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

    HRESULT __stdcall CreateItemListOption(HSTRING optionId, HSTRING displayName, ::IUnknown** itemListOption) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *itemListOption = detach_abi(this->shim().CreateItemListOption(*reinterpret_cast<hstring const*>(&optionId), *reinterpret_cast<hstring const*>(&displayName)));
            return S_OK;
        }
        catch (...)
        {
            *itemListOption = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateTextOption(HSTRING optionId, HSTRING displayName, ::IUnknown** textOption) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *textOption = detach_abi(this->shim().CreateTextOption(*reinterpret_cast<hstring const*>(&optionId), *reinterpret_cast<hstring const*>(&displayName)));
            return S_OK;
        }
        catch (...)
        {
            *textOption = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_OptionChanged(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_abi(this->shim().OptionChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails, Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_OptionChanged(abi_t<event_token> eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OptionChanged(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_BeginValidation(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_abi(this->shim().BeginValidation(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails, Windows::Foundation::IInspectable> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BeginValidation(abi_t<event_token> eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BeginValidation(*reinterpret_cast<event_token const*>(&eventCookie));
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
    HRESULT __stdcall GetFromPrintTaskOptions(::IUnknown* printTaskOptions, ::IUnknown** printTaskOptionDetails) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *printTaskOptionDetails = detach_abi(this->shim().GetFromPrintTaskOptions(*reinterpret_cast<Windows::Graphics::Printing::PrintTaskOptions const*>(&printTaskOptions)));
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
    HRESULT __stdcall get_MaxCharacters(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxCharacters());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Printing::OptionDetails {

inline Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails PrintTaskOptionDetails::GetFromPrintTaskOptions(Windows::Graphics::Printing::PrintTaskOptions const& printTaskOptions)
{
    return get_activation_factory<PrintTaskOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetailsStatic>().GetFromPrintTaskOptions(printTaskOptions);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails> {};

template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails> {};

template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails> {};

template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails> {};

template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails> {};

template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintNumberOptionDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::OptionDetails::IPrintNumberOptionDetails> {};

template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails> {};

template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs> {};

template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails> {};

template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetailsStatic> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetailsStatic> {};

template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintTextOptionDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::OptionDetails::IPrintTextOptionDetails> {};

template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintBindingOptionDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::OptionDetails::PrintBindingOptionDetails> {};

template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintBorderingOptionDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::OptionDetails::PrintBorderingOptionDetails> {};

template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintCollationOptionDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::OptionDetails::PrintCollationOptionDetails> {};

template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintColorModeOptionDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::OptionDetails::PrintColorModeOptionDetails> {};

template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintCopiesOptionDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::OptionDetails::PrintCopiesOptionDetails> {};

template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintCustomItemDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::OptionDetails::PrintCustomItemDetails> {};

template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintCustomItemListOptionDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::OptionDetails::PrintCustomItemListOptionDetails> {};

template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintCustomTextOptionDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::OptionDetails::PrintCustomTextOptionDetails> {};

template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintDuplexOptionDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::OptionDetails::PrintDuplexOptionDetails> {};

template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintHolePunchOptionDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::OptionDetails::PrintHolePunchOptionDetails> {};

template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintMediaSizeOptionDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::OptionDetails::PrintMediaSizeOptionDetails> {};

template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintMediaTypeOptionDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::OptionDetails::PrintMediaTypeOptionDetails> {};

template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintOrientationOptionDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::OptionDetails::PrintOrientationOptionDetails> {};

template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintQualityOptionDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::OptionDetails::PrintQualityOptionDetails> {};

template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintStapleOptionDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::OptionDetails::PrintStapleOptionDetails> {};

template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs> {};

template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails> {};

}

WINRT_WARNING_POP
