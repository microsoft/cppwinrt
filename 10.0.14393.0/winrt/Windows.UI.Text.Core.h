// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Globalization.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.UI.Text.Core.3.h"
#include "Windows.UI.Text.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::UI::Text::Core::ICoreTextCompositionCompletedEventArgs> : produce_base<D, Windows::UI::Text::Core::ICoreTextCompositionCompletedEventArgs>
{
    HRESULT __stdcall get_IsCanceled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsCanceled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CompositionSegments(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::UI::Text::Core::CoreTextCompositionSegment>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CompositionSegments());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeferral());
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
struct produce<D, Windows::UI::Text::Core::ICoreTextCompositionSegment> : produce_base<D, Windows::UI::Text::Core::ICoreTextCompositionSegment>
{
    HRESULT __stdcall get_PreconversionString(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PreconversionString());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Range(abi_arg_out<Windows::UI::Text::Core::CoreTextRange> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Range());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Text::Core::ICoreTextCompositionStartedEventArgs> : produce_base<D, Windows::UI::Text::Core::ICoreTextCompositionStartedEventArgs>
{
    HRESULT __stdcall get_IsCanceled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsCanceled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeferral());
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
struct produce<D, Windows::UI::Text::Core::ICoreTextEditContext> : produce_base<D, Windows::UI::Text::Core::ICoreTextEditContext>
{
    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Name(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Name(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InputScope(Windows::UI::Text::Core::CoreTextInputScope * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InputScope());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InputScope(Windows::UI::Text::Core::CoreTextInputScope value) noexcept override
    {
        try
        {
            this->shim().InputScope(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsReadOnly(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsReadOnly());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsReadOnly(bool value) noexcept override
    {
        try
        {
            this->shim().IsReadOnly(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InputPaneDisplayPolicy(Windows::UI::Text::Core::CoreTextInputPaneDisplayPolicy * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InputPaneDisplayPolicy());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InputPaneDisplayPolicy(Windows::UI::Text::Core::CoreTextInputPaneDisplayPolicy value) noexcept override
    {
        try
        {
            this->shim().InputPaneDisplayPolicy(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TextRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextTextRequestedEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().TextRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextTextRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TextRequested(event_token cookie) noexcept override
    {
        try
        {
            this->shim().TextRequested(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SelectionRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextSelectionRequestedEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().SelectionRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextSelectionRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SelectionRequested(event_token cookie) noexcept override
    {
        try
        {
            this->shim().SelectionRequested(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_LayoutRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextLayoutRequestedEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().LayoutRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextLayoutRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LayoutRequested(event_token cookie) noexcept override
    {
        try
        {
            this->shim().LayoutRequested(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TextUpdating(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextTextUpdatingEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().TextUpdating(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextTextUpdatingEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TextUpdating(event_token cookie) noexcept override
    {
        try
        {
            this->shim().TextUpdating(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SelectionUpdating(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextSelectionUpdatingEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().SelectionUpdating(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextSelectionUpdatingEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SelectionUpdating(event_token cookie) noexcept override
    {
        try
        {
            this->shim().SelectionUpdating(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_FormatUpdating(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextFormatUpdatingEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().FormatUpdating(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextFormatUpdatingEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_FormatUpdating(event_token cookie) noexcept override
    {
        try
        {
            this->shim().FormatUpdating(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CompositionStarted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextCompositionStartedEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().CompositionStarted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextCompositionStartedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CompositionStarted(event_token cookie) noexcept override
    {
        try
        {
            this->shim().CompositionStarted(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CompositionCompleted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextCompositionCompletedEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().CompositionCompleted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextCompositionCompletedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CompositionCompleted(event_token cookie) noexcept override
    {
        try
        {
            this->shim().CompositionCompleted(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_FocusRemoved(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::IInspectable>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().FocusRemoved(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_FocusRemoved(event_token cookie) noexcept override
    {
        try
        {
            this->shim().FocusRemoved(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_NotifyFocusEnter() noexcept override
    {
        try
        {
            this->shim().NotifyFocusEnter();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_NotifyFocusLeave() noexcept override
    {
        try
        {
            this->shim().NotifyFocusLeave();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_NotifyTextChanged(abi_arg_in<Windows::UI::Text::Core::CoreTextRange> modifiedRange, int32_t newLength, abi_arg_in<Windows::UI::Text::Core::CoreTextRange> newSelection) noexcept override
    {
        try
        {
            this->shim().NotifyTextChanged(*reinterpret_cast<const Windows::UI::Text::Core::CoreTextRange *>(&modifiedRange), newLength, *reinterpret_cast<const Windows::UI::Text::Core::CoreTextRange *>(&newSelection));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_NotifySelectionChanged(abi_arg_in<Windows::UI::Text::Core::CoreTextRange> selection) noexcept override
    {
        try
        {
            this->shim().NotifySelectionChanged(*reinterpret_cast<const Windows::UI::Text::Core::CoreTextRange *>(&selection));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_NotifyLayoutChanged() noexcept override
    {
        try
        {
            this->shim().NotifyLayoutChanged();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Text::Core::ICoreTextEditContext2> : produce_base<D, Windows::UI::Text::Core::ICoreTextEditContext2>
{
    HRESULT __stdcall add_NotifyFocusLeaveCompleted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::IInspectable>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().NotifyFocusLeaveCompleted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_NotifyFocusLeaveCompleted(event_token cookie) noexcept override
    {
        try
        {
            this->shim().NotifyFocusLeaveCompleted(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs> : produce_base<D, Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs>
{
    HRESULT __stdcall get_Range(abi_arg_out<Windows::UI::Text::Core::CoreTextRange> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Range());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TextColor(abi_arg_out<Windows::Foundation::IReference<winrt::Windows::UI::ViewManagement::UIElementType>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TextColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BackgroundColor(abi_arg_out<Windows::Foundation::IReference<winrt::Windows::UI::ViewManagement::UIElementType>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UnderlineColor(abi_arg_out<Windows::Foundation::IReference<winrt::Windows::UI::ViewManagement::UIElementType>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UnderlineColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UnderlineType(abi_arg_out<Windows::Foundation::IReference<winrt::Windows::UI::Text::UnderlineType>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UnderlineType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Reason(Windows::UI::Text::Core::CoreTextFormatUpdatingReason * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Reason());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Result(Windows::UI::Text::Core::CoreTextFormatUpdatingResult * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Result());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Result(Windows::UI::Text::Core::CoreTextFormatUpdatingResult value) noexcept override
    {
        try
        {
            this->shim().Result(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCanceled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsCanceled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeferral());
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
struct produce<D, Windows::UI::Text::Core::ICoreTextLayoutBounds> : produce_base<D, Windows::UI::Text::Core::ICoreTextLayoutBounds>
{
    HRESULT __stdcall get_TextBounds(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TextBounds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TextBounds(abi_arg_in<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            this->shim().TextBounds(*reinterpret_cast<const Windows::Foundation::Rect *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ControlBounds(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ControlBounds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ControlBounds(abi_arg_in<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            this->shim().ControlBounds(*reinterpret_cast<const Windows::Foundation::Rect *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Text::Core::ICoreTextLayoutRequest> : produce_base<D, Windows::UI::Text::Core::ICoreTextLayoutRequest>
{
    HRESULT __stdcall get_Range(abi_arg_out<Windows::UI::Text::Core::CoreTextRange> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Range());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LayoutBounds(abi_arg_out<Windows::UI::Text::Core::ICoreTextLayoutBounds> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LayoutBounds());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCanceled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsCanceled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeferral());
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
struct produce<D, Windows::UI::Text::Core::ICoreTextLayoutRequestedEventArgs> : produce_base<D, Windows::UI::Text::Core::ICoreTextLayoutRequestedEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::UI::Text::Core::ICoreTextLayoutRequest> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Request());
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
struct produce<D, Windows::UI::Text::Core::ICoreTextSelectionRequest> : produce_base<D, Windows::UI::Text::Core::ICoreTextSelectionRequest>
{
    HRESULT __stdcall get_Selection(abi_arg_out<Windows::UI::Text::Core::CoreTextRange> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Selection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Selection(abi_arg_in<Windows::UI::Text::Core::CoreTextRange> value) noexcept override
    {
        try
        {
            this->shim().Selection(*reinterpret_cast<const Windows::UI::Text::Core::CoreTextRange *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCanceled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsCanceled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeferral());
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
struct produce<D, Windows::UI::Text::Core::ICoreTextSelectionRequestedEventArgs> : produce_base<D, Windows::UI::Text::Core::ICoreTextSelectionRequestedEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::UI::Text::Core::ICoreTextSelectionRequest> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Request());
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
struct produce<D, Windows::UI::Text::Core::ICoreTextSelectionUpdatingEventArgs> : produce_base<D, Windows::UI::Text::Core::ICoreTextSelectionUpdatingEventArgs>
{
    HRESULT __stdcall get_Selection(abi_arg_out<Windows::UI::Text::Core::CoreTextRange> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Selection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Result(Windows::UI::Text::Core::CoreTextSelectionUpdatingResult * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Result());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Result(Windows::UI::Text::Core::CoreTextSelectionUpdatingResult value) noexcept override
    {
        try
        {
            this->shim().Result(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCanceled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsCanceled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeferral());
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
struct produce<D, Windows::UI::Text::Core::ICoreTextServicesManager> : produce_base<D, Windows::UI::Text::Core::ICoreTextServicesManager>
{
    HRESULT __stdcall get_InputLanguage(abi_arg_out<Windows::Globalization::ILanguage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InputLanguage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_InputLanguageChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextServicesManager, Windows::IInspectable>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().InputLanguageChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextServicesManager, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_InputLanguageChanged(event_token cookie) noexcept override
    {
        try
        {
            this->shim().InputLanguageChanged(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateEditContext(abi_arg_out<Windows::UI::Text::Core::ICoreTextEditContext> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateEditContext());
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
struct produce<D, Windows::UI::Text::Core::ICoreTextServicesManagerStatics> : produce_base<D, Windows::UI::Text::Core::ICoreTextServicesManagerStatics>
{
    HRESULT __stdcall abi_GetForCurrentView(abi_arg_out<Windows::UI::Text::Core::ICoreTextServicesManager> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetForCurrentView());
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
struct produce<D, Windows::UI::Text::Core::ICoreTextServicesStatics> : produce_base<D, Windows::UI::Text::Core::ICoreTextServicesStatics>
{
    HRESULT __stdcall get_HiddenCharacter(wchar_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HiddenCharacter());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Text::Core::ICoreTextTextRequest> : produce_base<D, Windows::UI::Text::Core::ICoreTextTextRequest>
{
    HRESULT __stdcall get_Range(abi_arg_out<Windows::UI::Text::Core::CoreTextRange> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Range());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Text(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Text(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Text(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCanceled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsCanceled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeferral());
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
struct produce<D, Windows::UI::Text::Core::ICoreTextTextRequestedEventArgs> : produce_base<D, Windows::UI::Text::Core::ICoreTextTextRequestedEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::UI::Text::Core::ICoreTextTextRequest> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Request());
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
struct produce<D, Windows::UI::Text::Core::ICoreTextTextUpdatingEventArgs> : produce_base<D, Windows::UI::Text::Core::ICoreTextTextUpdatingEventArgs>
{
    HRESULT __stdcall get_Range(abi_arg_out<Windows::UI::Text::Core::CoreTextRange> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Range());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Text(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NewSelection(abi_arg_out<Windows::UI::Text::Core::CoreTextRange> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NewSelection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InputLanguage(abi_arg_out<Windows::Globalization::ILanguage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InputLanguage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Result(Windows::UI::Text::Core::CoreTextTextUpdatingResult * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Result());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Result(Windows::UI::Text::Core::CoreTextTextUpdatingResult value) noexcept override
    {
        try
        {
            this->shim().Result(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCanceled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsCanceled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeferral());
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

namespace Windows::UI::Text::Core {

template <typename D> Windows::UI::Text::Core::CoreTextRange impl_ICoreTextTextRequest<D>::Range() const
{
    Windows::UI::Text::Core::CoreTextRange value {};
    check_hresult(static_cast<const ICoreTextTextRequest &>(static_cast<const D &>(*this))->get_Range(put(value)));
    return value;
}

template <typename D> hstring impl_ICoreTextTextRequest<D>::Text() const
{
    hstring value;
    check_hresult(static_cast<const ICoreTextTextRequest &>(static_cast<const D &>(*this))->get_Text(put(value)));
    return value;
}

template <typename D> void impl_ICoreTextTextRequest<D>::Text(hstring_ref value) const
{
    check_hresult(static_cast<const ICoreTextTextRequest &>(static_cast<const D &>(*this))->put_Text(get(value)));
}

template <typename D> bool impl_ICoreTextTextRequest<D>::IsCanceled() const
{
    bool value {};
    check_hresult(static_cast<const ICoreTextTextRequest &>(static_cast<const D &>(*this))->get_IsCanceled(&value));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_ICoreTextTextRequest<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(static_cast<const ICoreTextTextRequest &>(static_cast<const D &>(*this))->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextTextRequest impl_ICoreTextTextRequestedEventArgs<D>::Request() const
{
    Windows::UI::Text::Core::CoreTextTextRequest value { nullptr };
    check_hresult(static_cast<const ICoreTextTextRequestedEventArgs &>(static_cast<const D &>(*this))->get_Request(put(value)));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextRange impl_ICoreTextSelectionRequest<D>::Selection() const
{
    Windows::UI::Text::Core::CoreTextRange value {};
    check_hresult(static_cast<const ICoreTextSelectionRequest &>(static_cast<const D &>(*this))->get_Selection(put(value)));
    return value;
}

template <typename D> void impl_ICoreTextSelectionRequest<D>::Selection(const Windows::UI::Text::Core::CoreTextRange & value) const
{
    check_hresult(static_cast<const ICoreTextSelectionRequest &>(static_cast<const D &>(*this))->put_Selection(get(value)));
}

template <typename D> bool impl_ICoreTextSelectionRequest<D>::IsCanceled() const
{
    bool value {};
    check_hresult(static_cast<const ICoreTextSelectionRequest &>(static_cast<const D &>(*this))->get_IsCanceled(&value));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_ICoreTextSelectionRequest<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(static_cast<const ICoreTextSelectionRequest &>(static_cast<const D &>(*this))->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextSelectionRequest impl_ICoreTextSelectionRequestedEventArgs<D>::Request() const
{
    Windows::UI::Text::Core::CoreTextSelectionRequest value { nullptr };
    check_hresult(static_cast<const ICoreTextSelectionRequestedEventArgs &>(static_cast<const D &>(*this))->get_Request(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect impl_ICoreTextLayoutBounds<D>::TextBounds() const
{
    Windows::Foundation::Rect value {};
    check_hresult(static_cast<const ICoreTextLayoutBounds &>(static_cast<const D &>(*this))->get_TextBounds(put(value)));
    return value;
}

template <typename D> void impl_ICoreTextLayoutBounds<D>::TextBounds(const Windows::Foundation::Rect & value) const
{
    check_hresult(static_cast<const ICoreTextLayoutBounds &>(static_cast<const D &>(*this))->put_TextBounds(get(value)));
}

template <typename D> Windows::Foundation::Rect impl_ICoreTextLayoutBounds<D>::ControlBounds() const
{
    Windows::Foundation::Rect value {};
    check_hresult(static_cast<const ICoreTextLayoutBounds &>(static_cast<const D &>(*this))->get_ControlBounds(put(value)));
    return value;
}

template <typename D> void impl_ICoreTextLayoutBounds<D>::ControlBounds(const Windows::Foundation::Rect & value) const
{
    check_hresult(static_cast<const ICoreTextLayoutBounds &>(static_cast<const D &>(*this))->put_ControlBounds(get(value)));
}

template <typename D> Windows::UI::Text::Core::CoreTextRange impl_ICoreTextLayoutRequest<D>::Range() const
{
    Windows::UI::Text::Core::CoreTextRange value {};
    check_hresult(static_cast<const ICoreTextLayoutRequest &>(static_cast<const D &>(*this))->get_Range(put(value)));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextLayoutBounds impl_ICoreTextLayoutRequest<D>::LayoutBounds() const
{
    Windows::UI::Text::Core::CoreTextLayoutBounds value { nullptr };
    check_hresult(static_cast<const ICoreTextLayoutRequest &>(static_cast<const D &>(*this))->get_LayoutBounds(put(value)));
    return value;
}

template <typename D> bool impl_ICoreTextLayoutRequest<D>::IsCanceled() const
{
    bool value {};
    check_hresult(static_cast<const ICoreTextLayoutRequest &>(static_cast<const D &>(*this))->get_IsCanceled(&value));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_ICoreTextLayoutRequest<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(static_cast<const ICoreTextLayoutRequest &>(static_cast<const D &>(*this))->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextLayoutRequest impl_ICoreTextLayoutRequestedEventArgs<D>::Request() const
{
    Windows::UI::Text::Core::CoreTextLayoutRequest value { nullptr };
    check_hresult(static_cast<const ICoreTextLayoutRequestedEventArgs &>(static_cast<const D &>(*this))->get_Request(put(value)));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextRange impl_ICoreTextTextUpdatingEventArgs<D>::Range() const
{
    Windows::UI::Text::Core::CoreTextRange value {};
    check_hresult(static_cast<const ICoreTextTextUpdatingEventArgs &>(static_cast<const D &>(*this))->get_Range(put(value)));
    return value;
}

template <typename D> hstring impl_ICoreTextTextUpdatingEventArgs<D>::Text() const
{
    hstring value;
    check_hresult(static_cast<const ICoreTextTextUpdatingEventArgs &>(static_cast<const D &>(*this))->get_Text(put(value)));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextRange impl_ICoreTextTextUpdatingEventArgs<D>::NewSelection() const
{
    Windows::UI::Text::Core::CoreTextRange value {};
    check_hresult(static_cast<const ICoreTextTextUpdatingEventArgs &>(static_cast<const D &>(*this))->get_NewSelection(put(value)));
    return value;
}

template <typename D> Windows::Globalization::Language impl_ICoreTextTextUpdatingEventArgs<D>::InputLanguage() const
{
    Windows::Globalization::Language value { nullptr };
    check_hresult(static_cast<const ICoreTextTextUpdatingEventArgs &>(static_cast<const D &>(*this))->get_InputLanguage(put(value)));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextTextUpdatingResult impl_ICoreTextTextUpdatingEventArgs<D>::Result() const
{
    Windows::UI::Text::Core::CoreTextTextUpdatingResult value {};
    check_hresult(static_cast<const ICoreTextTextUpdatingEventArgs &>(static_cast<const D &>(*this))->get_Result(&value));
    return value;
}

template <typename D> void impl_ICoreTextTextUpdatingEventArgs<D>::Result(Windows::UI::Text::Core::CoreTextTextUpdatingResult value) const
{
    check_hresult(static_cast<const ICoreTextTextUpdatingEventArgs &>(static_cast<const D &>(*this))->put_Result(value));
}

template <typename D> bool impl_ICoreTextTextUpdatingEventArgs<D>::IsCanceled() const
{
    bool value {};
    check_hresult(static_cast<const ICoreTextTextUpdatingEventArgs &>(static_cast<const D &>(*this))->get_IsCanceled(&value));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_ICoreTextTextUpdatingEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(static_cast<const ICoreTextTextUpdatingEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextRange impl_ICoreTextSelectionUpdatingEventArgs<D>::Selection() const
{
    Windows::UI::Text::Core::CoreTextRange value {};
    check_hresult(static_cast<const ICoreTextSelectionUpdatingEventArgs &>(static_cast<const D &>(*this))->get_Selection(put(value)));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextSelectionUpdatingResult impl_ICoreTextSelectionUpdatingEventArgs<D>::Result() const
{
    Windows::UI::Text::Core::CoreTextSelectionUpdatingResult value {};
    check_hresult(static_cast<const ICoreTextSelectionUpdatingEventArgs &>(static_cast<const D &>(*this))->get_Result(&value));
    return value;
}

template <typename D> void impl_ICoreTextSelectionUpdatingEventArgs<D>::Result(Windows::UI::Text::Core::CoreTextSelectionUpdatingResult value) const
{
    check_hresult(static_cast<const ICoreTextSelectionUpdatingEventArgs &>(static_cast<const D &>(*this))->put_Result(value));
}

template <typename D> bool impl_ICoreTextSelectionUpdatingEventArgs<D>::IsCanceled() const
{
    bool value {};
    check_hresult(static_cast<const ICoreTextSelectionUpdatingEventArgs &>(static_cast<const D &>(*this))->get_IsCanceled(&value));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_ICoreTextSelectionUpdatingEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(static_cast<const ICoreTextSelectionUpdatingEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextRange impl_ICoreTextFormatUpdatingEventArgs<D>::Range() const
{
    Windows::UI::Text::Core::CoreTextRange value {};
    check_hresult(static_cast<const ICoreTextFormatUpdatingEventArgs &>(static_cast<const D &>(*this))->get_Range(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<winrt::Windows::UI::ViewManagement::UIElementType> impl_ICoreTextFormatUpdatingEventArgs<D>::TextColor() const
{
    Windows::Foundation::IReference<winrt::Windows::UI::ViewManagement::UIElementType> value;
    check_hresult(static_cast<const ICoreTextFormatUpdatingEventArgs &>(static_cast<const D &>(*this))->get_TextColor(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<winrt::Windows::UI::ViewManagement::UIElementType> impl_ICoreTextFormatUpdatingEventArgs<D>::BackgroundColor() const
{
    Windows::Foundation::IReference<winrt::Windows::UI::ViewManagement::UIElementType> value;
    check_hresult(static_cast<const ICoreTextFormatUpdatingEventArgs &>(static_cast<const D &>(*this))->get_BackgroundColor(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<winrt::Windows::UI::ViewManagement::UIElementType> impl_ICoreTextFormatUpdatingEventArgs<D>::UnderlineColor() const
{
    Windows::Foundation::IReference<winrt::Windows::UI::ViewManagement::UIElementType> value;
    check_hresult(static_cast<const ICoreTextFormatUpdatingEventArgs &>(static_cast<const D &>(*this))->get_UnderlineColor(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<winrt::Windows::UI::Text::UnderlineType> impl_ICoreTextFormatUpdatingEventArgs<D>::UnderlineType() const
{
    Windows::Foundation::IReference<winrt::Windows::UI::Text::UnderlineType> value;
    check_hresult(static_cast<const ICoreTextFormatUpdatingEventArgs &>(static_cast<const D &>(*this))->get_UnderlineType(put(value)));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextFormatUpdatingReason impl_ICoreTextFormatUpdatingEventArgs<D>::Reason() const
{
    Windows::UI::Text::Core::CoreTextFormatUpdatingReason value {};
    check_hresult(static_cast<const ICoreTextFormatUpdatingEventArgs &>(static_cast<const D &>(*this))->get_Reason(&value));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextFormatUpdatingResult impl_ICoreTextFormatUpdatingEventArgs<D>::Result() const
{
    Windows::UI::Text::Core::CoreTextFormatUpdatingResult value {};
    check_hresult(static_cast<const ICoreTextFormatUpdatingEventArgs &>(static_cast<const D &>(*this))->get_Result(&value));
    return value;
}

template <typename D> void impl_ICoreTextFormatUpdatingEventArgs<D>::Result(Windows::UI::Text::Core::CoreTextFormatUpdatingResult value) const
{
    check_hresult(static_cast<const ICoreTextFormatUpdatingEventArgs &>(static_cast<const D &>(*this))->put_Result(value));
}

template <typename D> bool impl_ICoreTextFormatUpdatingEventArgs<D>::IsCanceled() const
{
    bool value {};
    check_hresult(static_cast<const ICoreTextFormatUpdatingEventArgs &>(static_cast<const D &>(*this))->get_IsCanceled(&value));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_ICoreTextFormatUpdatingEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(static_cast<const ICoreTextFormatUpdatingEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> bool impl_ICoreTextCompositionStartedEventArgs<D>::IsCanceled() const
{
    bool value {};
    check_hresult(static_cast<const ICoreTextCompositionStartedEventArgs &>(static_cast<const D &>(*this))->get_IsCanceled(&value));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_ICoreTextCompositionStartedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(static_cast<const ICoreTextCompositionStartedEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> bool impl_ICoreTextCompositionCompletedEventArgs<D>::IsCanceled() const
{
    bool value {};
    check_hresult(static_cast<const ICoreTextCompositionCompletedEventArgs &>(static_cast<const D &>(*this))->get_IsCanceled(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Text::Core::CoreTextCompositionSegment> impl_ICoreTextCompositionCompletedEventArgs<D>::CompositionSegments() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Text::Core::CoreTextCompositionSegment> value;
    check_hresult(static_cast<const ICoreTextCompositionCompletedEventArgs &>(static_cast<const D &>(*this))->get_CompositionSegments(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_ICoreTextCompositionCompletedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(static_cast<const ICoreTextCompositionCompletedEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> event_token impl_ICoreTextEditContext2<D>::NotifyFocusLeaveCompleted(const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::IInspectable> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const ICoreTextEditContext2 &>(static_cast<const D &>(*this))->add_NotifyFocusLeaveCompleted(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreTextEditContext2> impl_ICoreTextEditContext2<D>::NotifyFocusLeaveCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, ICoreTextEditContext2>(this, &ABI::Windows::UI::Text::Core::ICoreTextEditContext2::remove_NotifyFocusLeaveCompleted, NotifyFocusLeaveCompleted(handler));
}

template <typename D> void impl_ICoreTextEditContext2<D>::NotifyFocusLeaveCompleted(event_token cookie) const
{
    check_hresult(static_cast<const ICoreTextEditContext2 &>(static_cast<const D &>(*this))->remove_NotifyFocusLeaveCompleted(cookie));
}

template <typename D> hstring impl_ICoreTextEditContext<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> void impl_ICoreTextEditContext<D>::Name(hstring_ref value) const
{
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->put_Name(get(value)));
}

template <typename D> Windows::UI::Text::Core::CoreTextInputScope impl_ICoreTextEditContext<D>::InputScope() const
{
    Windows::UI::Text::Core::CoreTextInputScope value {};
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->get_InputScope(&value));
    return value;
}

template <typename D> void impl_ICoreTextEditContext<D>::InputScope(Windows::UI::Text::Core::CoreTextInputScope value) const
{
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->put_InputScope(value));
}

template <typename D> bool impl_ICoreTextEditContext<D>::IsReadOnly() const
{
    bool value {};
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->get_IsReadOnly(&value));
    return value;
}

template <typename D> void impl_ICoreTextEditContext<D>::IsReadOnly(bool value) const
{
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->put_IsReadOnly(value));
}

template <typename D> Windows::UI::Text::Core::CoreTextInputPaneDisplayPolicy impl_ICoreTextEditContext<D>::InputPaneDisplayPolicy() const
{
    Windows::UI::Text::Core::CoreTextInputPaneDisplayPolicy value {};
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->get_InputPaneDisplayPolicy(&value));
    return value;
}

template <typename D> void impl_ICoreTextEditContext<D>::InputPaneDisplayPolicy(Windows::UI::Text::Core::CoreTextInputPaneDisplayPolicy value) const
{
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->put_InputPaneDisplayPolicy(value));
}

template <typename D> event_token impl_ICoreTextEditContext<D>::TextRequested(const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextTextRequestedEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->add_TextRequested(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreTextEditContext> impl_ICoreTextEditContext<D>::TextRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextTextRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreTextEditContext>(this, &ABI::Windows::UI::Text::Core::ICoreTextEditContext::remove_TextRequested, TextRequested(handler));
}

template <typename D> void impl_ICoreTextEditContext<D>::TextRequested(event_token cookie) const
{
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->remove_TextRequested(cookie));
}

template <typename D> event_token impl_ICoreTextEditContext<D>::SelectionRequested(const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextSelectionRequestedEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->add_SelectionRequested(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreTextEditContext> impl_ICoreTextEditContext<D>::SelectionRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextSelectionRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreTextEditContext>(this, &ABI::Windows::UI::Text::Core::ICoreTextEditContext::remove_SelectionRequested, SelectionRequested(handler));
}

template <typename D> void impl_ICoreTextEditContext<D>::SelectionRequested(event_token cookie) const
{
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->remove_SelectionRequested(cookie));
}

template <typename D> event_token impl_ICoreTextEditContext<D>::LayoutRequested(const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextLayoutRequestedEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->add_LayoutRequested(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreTextEditContext> impl_ICoreTextEditContext<D>::LayoutRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextLayoutRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreTextEditContext>(this, &ABI::Windows::UI::Text::Core::ICoreTextEditContext::remove_LayoutRequested, LayoutRequested(handler));
}

template <typename D> void impl_ICoreTextEditContext<D>::LayoutRequested(event_token cookie) const
{
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->remove_LayoutRequested(cookie));
}

template <typename D> event_token impl_ICoreTextEditContext<D>::TextUpdating(const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextTextUpdatingEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->add_TextUpdating(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreTextEditContext> impl_ICoreTextEditContext<D>::TextUpdating(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextTextUpdatingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreTextEditContext>(this, &ABI::Windows::UI::Text::Core::ICoreTextEditContext::remove_TextUpdating, TextUpdating(handler));
}

template <typename D> void impl_ICoreTextEditContext<D>::TextUpdating(event_token cookie) const
{
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->remove_TextUpdating(cookie));
}

template <typename D> event_token impl_ICoreTextEditContext<D>::SelectionUpdating(const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextSelectionUpdatingEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->add_SelectionUpdating(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreTextEditContext> impl_ICoreTextEditContext<D>::SelectionUpdating(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextSelectionUpdatingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreTextEditContext>(this, &ABI::Windows::UI::Text::Core::ICoreTextEditContext::remove_SelectionUpdating, SelectionUpdating(handler));
}

template <typename D> void impl_ICoreTextEditContext<D>::SelectionUpdating(event_token cookie) const
{
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->remove_SelectionUpdating(cookie));
}

template <typename D> event_token impl_ICoreTextEditContext<D>::FormatUpdating(const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextFormatUpdatingEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->add_FormatUpdating(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreTextEditContext> impl_ICoreTextEditContext<D>::FormatUpdating(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextFormatUpdatingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreTextEditContext>(this, &ABI::Windows::UI::Text::Core::ICoreTextEditContext::remove_FormatUpdating, FormatUpdating(handler));
}

template <typename D> void impl_ICoreTextEditContext<D>::FormatUpdating(event_token cookie) const
{
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->remove_FormatUpdating(cookie));
}

template <typename D> event_token impl_ICoreTextEditContext<D>::CompositionStarted(const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextCompositionStartedEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->add_CompositionStarted(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreTextEditContext> impl_ICoreTextEditContext<D>::CompositionStarted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextCompositionStartedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreTextEditContext>(this, &ABI::Windows::UI::Text::Core::ICoreTextEditContext::remove_CompositionStarted, CompositionStarted(handler));
}

template <typename D> void impl_ICoreTextEditContext<D>::CompositionStarted(event_token cookie) const
{
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->remove_CompositionStarted(cookie));
}

template <typename D> event_token impl_ICoreTextEditContext<D>::CompositionCompleted(const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextCompositionCompletedEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->add_CompositionCompleted(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreTextEditContext> impl_ICoreTextEditContext<D>::CompositionCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextCompositionCompletedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICoreTextEditContext>(this, &ABI::Windows::UI::Text::Core::ICoreTextEditContext::remove_CompositionCompleted, CompositionCompleted(handler));
}

template <typename D> void impl_ICoreTextEditContext<D>::CompositionCompleted(event_token cookie) const
{
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->remove_CompositionCompleted(cookie));
}

template <typename D> event_token impl_ICoreTextEditContext<D>::FocusRemoved(const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::IInspectable> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->add_FocusRemoved(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreTextEditContext> impl_ICoreTextEditContext<D>::FocusRemoved(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, ICoreTextEditContext>(this, &ABI::Windows::UI::Text::Core::ICoreTextEditContext::remove_FocusRemoved, FocusRemoved(handler));
}

template <typename D> void impl_ICoreTextEditContext<D>::FocusRemoved(event_token cookie) const
{
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->remove_FocusRemoved(cookie));
}

template <typename D> void impl_ICoreTextEditContext<D>::NotifyFocusEnter() const
{
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->abi_NotifyFocusEnter());
}

template <typename D> void impl_ICoreTextEditContext<D>::NotifyFocusLeave() const
{
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->abi_NotifyFocusLeave());
}

template <typename D> void impl_ICoreTextEditContext<D>::NotifyTextChanged(const Windows::UI::Text::Core::CoreTextRange & modifiedRange, int32_t newLength, const Windows::UI::Text::Core::CoreTextRange & newSelection) const
{
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->abi_NotifyTextChanged(get(modifiedRange), newLength, get(newSelection)));
}

template <typename D> void impl_ICoreTextEditContext<D>::NotifySelectionChanged(const Windows::UI::Text::Core::CoreTextRange & selection) const
{
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->abi_NotifySelectionChanged(get(selection)));
}

template <typename D> void impl_ICoreTextEditContext<D>::NotifyLayoutChanged() const
{
    check_hresult(static_cast<const ICoreTextEditContext &>(static_cast<const D &>(*this))->abi_NotifyLayoutChanged());
}

template <typename D> Windows::Globalization::Language impl_ICoreTextServicesManager<D>::InputLanguage() const
{
    Windows::Globalization::Language value { nullptr };
    check_hresult(static_cast<const ICoreTextServicesManager &>(static_cast<const D &>(*this))->get_InputLanguage(put(value)));
    return value;
}

template <typename D> event_token impl_ICoreTextServicesManager<D>::InputLanguageChanged(const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextServicesManager, Windows::IInspectable> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const ICoreTextServicesManager &>(static_cast<const D &>(*this))->add_InputLanguageChanged(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ICoreTextServicesManager> impl_ICoreTextServicesManager<D>::InputLanguageChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextServicesManager, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, ICoreTextServicesManager>(this, &ABI::Windows::UI::Text::Core::ICoreTextServicesManager::remove_InputLanguageChanged, InputLanguageChanged(handler));
}

template <typename D> void impl_ICoreTextServicesManager<D>::InputLanguageChanged(event_token cookie) const
{
    check_hresult(static_cast<const ICoreTextServicesManager &>(static_cast<const D &>(*this))->remove_InputLanguageChanged(cookie));
}

template <typename D> Windows::UI::Text::Core::CoreTextEditContext impl_ICoreTextServicesManager<D>::CreateEditContext() const
{
    Windows::UI::Text::Core::CoreTextEditContext value { nullptr };
    check_hresult(static_cast<const ICoreTextServicesManager &>(static_cast<const D &>(*this))->abi_CreateEditContext(put(value)));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextServicesManager impl_ICoreTextServicesManagerStatics<D>::GetForCurrentView() const
{
    Windows::UI::Text::Core::CoreTextServicesManager value { nullptr };
    check_hresult(static_cast<const ICoreTextServicesManagerStatics &>(static_cast<const D &>(*this))->abi_GetForCurrentView(put(value)));
    return value;
}

template <typename D> wchar_t impl_ICoreTextServicesStatics<D>::HiddenCharacter() const
{
    wchar_t value {};
    check_hresult(static_cast<const ICoreTextServicesStatics &>(static_cast<const D &>(*this))->get_HiddenCharacter(&value));
    return value;
}

template <typename D> hstring impl_ICoreTextCompositionSegment<D>::PreconversionString() const
{
    hstring value;
    check_hresult(static_cast<const ICoreTextCompositionSegment &>(static_cast<const D &>(*this))->get_PreconversionString(put(value)));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextRange impl_ICoreTextCompositionSegment<D>::Range() const
{
    Windows::UI::Text::Core::CoreTextRange value {};
    check_hresult(static_cast<const ICoreTextCompositionSegment &>(static_cast<const D &>(*this))->get_Range(put(value)));
    return value;
}

inline wchar_t CoreTextServicesConstants::HiddenCharacter()
{
    return get_activation_factory<CoreTextServicesConstants, ICoreTextServicesStatics>().HiddenCharacter();
}

inline Windows::UI::Text::Core::CoreTextServicesManager CoreTextServicesManager::GetForCurrentView()
{
    return get_activation_factory<CoreTextServicesManager, ICoreTextServicesManagerStatics>().GetForCurrentView();
}

}

}
