// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Services.TargetedContent.3.h"
#include "Windows.Storage.Streams.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Services::TargetedContent::ITargetedContentAction> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentAction>
{
    HRESULT __stdcall abi_InvokeAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> asyncAction) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_abi(this->shim().InvokeAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs>
{
    HRESULT __stdcall abi_GetDeferral(impl::abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::Services::TargetedContent::ITargetedContentChangedEventArgs> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentChangedEventArgs>
{
    HRESULT __stdcall abi_GetDeferral(impl::abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasPreviousContentExpired(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasPreviousContentExpired());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::TargetedContent::ITargetedContentCollection> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentCollection>
{
    HRESULT __stdcall get_Id(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall abi_ReportInteraction(Windows::Services::TargetedContent::TargetedContentInteraction interaction) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportInteraction(interaction);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCustomInteraction(impl::abi_arg_in<hstring> customInteractionName) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportCustomInteraction(*reinterpret_cast<const hstring *>(&customInteractionName));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Path(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Path());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(impl::abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::Services::TargetedContent::TargetedContentValue>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Collections(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentCollection>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Collections());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Items(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentItem>> value) noexcept override
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
struct produce<D, Windows::Services::TargetedContent::ITargetedContentContainer> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentContainer>
{
    HRESULT __stdcall get_Id(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_Timestamp(impl::abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Availability(Windows::Services::TargetedContent::TargetedContentAvailability * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Availability());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Content(impl::abi_arg_out<Windows::Services::TargetedContent::ITargetedContentCollection> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Content());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SelectSingleObject(impl::abi_arg_in<hstring> path, impl::abi_arg_out<Windows::Services::TargetedContent::ITargetedContentObject> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SelectSingleObject(*reinterpret_cast<const hstring *>(&path)));
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
struct produce<D, Windows::Services::TargetedContent::ITargetedContentContainerStatics> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentContainerStatics>
{
    HRESULT __stdcall abi_GetAsync(impl::abi_arg_in<hstring> contentId, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer>> asyncOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_abi(this->shim().GetAsync(*reinterpret_cast<const hstring *>(&contentId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::TargetedContent::ITargetedContentImage> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentImage>
{
    HRESULT __stdcall get_Height(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Height());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Width(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Width());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::TargetedContent::ITargetedContentItem> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentItem>
{
    HRESULT __stdcall get_Path(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Path());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportInteraction(Windows::Services::TargetedContent::TargetedContentInteraction interaction) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportInteraction(interaction);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCustomInteraction(impl::abi_arg_in<hstring> customInteractionName) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportCustomInteraction(*reinterpret_cast<const hstring *>(&customInteractionName));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_State(impl::abi_arg_out<Windows::Services::TargetedContent::ITargetedContentItemState> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(impl::abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::Services::TargetedContent::TargetedContentValue>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Collections(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentCollection>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Collections());
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
struct produce<D, Windows::Services::TargetedContent::ITargetedContentItemState> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentItemState>
{
    HRESULT __stdcall get_ShouldDisplay(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShouldDisplay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppInstallationState(Windows::Services::TargetedContent::TargetedContentAppInstallationState * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppInstallationState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::TargetedContent::ITargetedContentObject> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentObject>
{
    HRESULT __stdcall get_ObjectKind(Windows::Services::TargetedContent::TargetedContentObjectKind * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ObjectKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Collection(impl::abi_arg_out<Windows::Services::TargetedContent::ITargetedContentCollection> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Collection());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Item(impl::abi_arg_out<Windows::Services::TargetedContent::ITargetedContentItem> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Item());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(impl::abi_arg_out<Windows::Services::TargetedContent::ITargetedContentValue> value) noexcept override
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
};

template <typename D>
struct produce<D, Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs>
{
    HRESULT __stdcall abi_GetDeferral(impl::abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::Services::TargetedContent::ITargetedContentSubscription> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentSubscription>
{
    HRESULT __stdcall get_Id(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall abi_GetContentContainerAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer>> asyncOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_abi(this->shim().GetContentContainerAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ContentChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentChangedEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().ContentChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ContentChanged(event_token cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentChanged(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AvailabilityChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().AvailabilityChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AvailabilityChanged(event_token cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AvailabilityChanged(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StateChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().StateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StateChanged(event_token cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StateChanged(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions>
{
    HRESULT __stdcall get_SubscriptionId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SubscriptionId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowPartialContentAvailability(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AllowPartialContentAvailability());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllowPartialContentAvailability(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowPartialContentAvailability(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CloudQueryParameters(impl::abi_arg_out<Windows::Foundation::Collections::IMap<hstring, hstring>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CloudQueryParameters());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalFilters(impl::abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LocalFilters());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Update() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Update();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics>
{
    HRESULT __stdcall abi_GetAsync(impl::abi_arg_in<hstring> subscriptionId, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentSubscription>> asyncOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_abi(this->shim().GetAsync(*reinterpret_cast<const hstring *>(&subscriptionId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetOptions(impl::abi_arg_in<hstring> subscriptionId, impl::abi_arg_out<Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetOptions(*reinterpret_cast<const hstring *>(&subscriptionId)));
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
struct produce<D, Windows::Services::TargetedContent::ITargetedContentValue> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentValue>
{
    HRESULT __stdcall get_ValueKind(Windows::Services::TargetedContent::TargetedContentValueKind * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ValueKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Path(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Path());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_String(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().String());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Uri(impl::abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Number(double * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Number());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Boolean(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Boolean());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_File(impl::abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().File());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ImageFile(impl::abi_arg_out<Windows::Services::TargetedContent::ITargetedContentImage> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ImageFile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Action(impl::abi_arg_out<Windows::Services::TargetedContent::ITargetedContentAction> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Action());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Strings(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Strings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Uris(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Foundation::Uri>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Uris());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Numbers(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<double>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Numbers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Booleans(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<bool>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Booleans());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Files(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentFile>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Files());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ImageFiles(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentImage>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ImageFiles());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Actions(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentAction>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Actions());
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

namespace Windows::Services::TargetedContent {

template <typename D> hstring impl_ITargetedContentSubscriptionOptions<D>::SubscriptionId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(ITargetedContentSubscriptionOptions)->get_SubscriptionId(put_abi(value)));
    return value;
}

template <typename D> bool impl_ITargetedContentSubscriptionOptions<D>::AllowPartialContentAvailability() const
{
    bool value {};
    check_hresult(WINRT_SHIM(ITargetedContentSubscriptionOptions)->get_AllowPartialContentAvailability(&value));
    return value;
}

template <typename D> void impl_ITargetedContentSubscriptionOptions<D>::AllowPartialContentAvailability(bool value) const
{
    check_hresult(WINRT_SHIM(ITargetedContentSubscriptionOptions)->put_AllowPartialContentAvailability(value));
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> impl_ITargetedContentSubscriptionOptions<D>::CloudQueryParameters() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value;
    check_hresult(WINRT_SHIM(ITargetedContentSubscriptionOptions)->get_CloudQueryParameters(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_ITargetedContentSubscriptionOptions<D>::LocalFilters() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(WINRT_SHIM(ITargetedContentSubscriptionOptions)->get_LocalFilters(put_abi(value)));
    return value;
}

template <typename D> void impl_ITargetedContentSubscriptionOptions<D>::Update() const
{
    check_hresult(WINRT_SHIM(ITargetedContentSubscriptionOptions)->abi_Update());
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentSubscription> impl_ITargetedContentSubscriptionStatics<D>::GetAsync(hstring_view subscriptionId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentSubscription> asyncOperation;
    check_hresult(WINRT_SHIM(ITargetedContentSubscriptionStatics)->abi_GetAsync(get_abi(subscriptionId), put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Services::TargetedContent::TargetedContentSubscriptionOptions impl_ITargetedContentSubscriptionStatics<D>::GetOptions(hstring_view subscriptionId) const
{
    Windows::Services::TargetedContent::TargetedContentSubscriptionOptions value { nullptr };
    check_hresult(WINRT_SHIM(ITargetedContentSubscriptionStatics)->abi_GetOptions(get_abi(subscriptionId), put_abi(value)));
    return value;
}

template <typename D> hstring impl_ITargetedContentSubscription<D>::Id() const
{
    hstring value;
    check_hresult(WINRT_SHIM(ITargetedContentSubscription)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer> impl_ITargetedContentSubscription<D>::GetContentContainerAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer> asyncOperation;
    check_hresult(WINRT_SHIM(ITargetedContentSubscription)->abi_GetContentContainerAsync(put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> event_token impl_ITargetedContentSubscription<D>::ContentChanged(const Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentChangedEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(WINRT_SHIM(ITargetedContentSubscription)->add_ContentChanged(get_abi(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ITargetedContentSubscription> impl_ITargetedContentSubscription<D>::ContentChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ITargetedContentSubscription>(this, &ABI::Windows::Services::TargetedContent::ITargetedContentSubscription::remove_ContentChanged, ContentChanged(handler));
}

template <typename D> void impl_ITargetedContentSubscription<D>::ContentChanged(event_token cookie) const
{
    check_hresult(WINRT_SHIM(ITargetedContentSubscription)->remove_ContentChanged(cookie));
}

template <typename D> event_token impl_ITargetedContentSubscription<D>::AvailabilityChanged(const Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(WINRT_SHIM(ITargetedContentSubscription)->add_AvailabilityChanged(get_abi(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ITargetedContentSubscription> impl_ITargetedContentSubscription<D>::AvailabilityChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ITargetedContentSubscription>(this, &ABI::Windows::Services::TargetedContent::ITargetedContentSubscription::remove_AvailabilityChanged, AvailabilityChanged(handler));
}

template <typename D> void impl_ITargetedContentSubscription<D>::AvailabilityChanged(event_token cookie) const
{
    check_hresult(WINRT_SHIM(ITargetedContentSubscription)->remove_AvailabilityChanged(cookie));
}

template <typename D> event_token impl_ITargetedContentSubscription<D>::StateChanged(const Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(WINRT_SHIM(ITargetedContentSubscription)->add_StateChanged(get_abi(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ITargetedContentSubscription> impl_ITargetedContentSubscription<D>::StateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ITargetedContentSubscription>(this, &ABI::Windows::Services::TargetedContent::ITargetedContentSubscription::remove_StateChanged, StateChanged(handler));
}

template <typename D> void impl_ITargetedContentSubscription<D>::StateChanged(event_token cookie) const
{
    check_hresult(WINRT_SHIM(ITargetedContentSubscription)->remove_StateChanged(cookie));
}

template <typename D> Windows::Foundation::Deferral impl_ITargetedContentChangedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(WINRT_SHIM(ITargetedContentChangedEventArgs)->abi_GetDeferral(put_abi(value)));
    return value;
}

template <typename D> bool impl_ITargetedContentChangedEventArgs<D>::HasPreviousContentExpired() const
{
    bool value {};
    check_hresult(WINRT_SHIM(ITargetedContentChangedEventArgs)->get_HasPreviousContentExpired(&value));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_ITargetedContentAvailabilityChangedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(WINRT_SHIM(ITargetedContentAvailabilityChangedEventArgs)->abi_GetDeferral(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_ITargetedContentStateChangedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(WINRT_SHIM(ITargetedContentStateChangedEventArgs)->abi_GetDeferral(put_abi(value)));
    return value;
}

template <typename D> uint32_t impl_ITargetedContentImage<D>::Height() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(ITargetedContentImage)->get_Height(&value));
    return value;
}

template <typename D> uint32_t impl_ITargetedContentImage<D>::Width() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(ITargetedContentImage)->get_Width(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ITargetedContentAction<D>::InvokeAsync() const
{
    Windows::Foundation::IAsyncAction asyncAction;
    check_hresult(WINRT_SHIM(ITargetedContentAction)->abi_InvokeAsync(put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer> impl_ITargetedContentContainerStatics<D>::GetAsync(hstring_view contentId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer> asyncOperation;
    check_hresult(WINRT_SHIM(ITargetedContentContainerStatics)->abi_GetAsync(get_abi(contentId), put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> hstring impl_ITargetedContentContainer<D>::Id() const
{
    hstring value;
    check_hresult(WINRT_SHIM(ITargetedContentContainer)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_ITargetedContentContainer<D>::Timestamp() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(WINRT_SHIM(ITargetedContentContainer)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::TargetedContent::TargetedContentAvailability impl_ITargetedContentContainer<D>::Availability() const
{
    Windows::Services::TargetedContent::TargetedContentAvailability value {};
    check_hresult(WINRT_SHIM(ITargetedContentContainer)->get_Availability(&value));
    return value;
}

template <typename D> Windows::Services::TargetedContent::TargetedContentCollection impl_ITargetedContentContainer<D>::Content() const
{
    Windows::Services::TargetedContent::TargetedContentCollection value { nullptr };
    check_hresult(WINRT_SHIM(ITargetedContentContainer)->get_Content(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::TargetedContent::TargetedContentObject impl_ITargetedContentContainer<D>::SelectSingleObject(hstring_view path) const
{
    Windows::Services::TargetedContent::TargetedContentObject value { nullptr };
    check_hresult(WINRT_SHIM(ITargetedContentContainer)->abi_SelectSingleObject(get_abi(path), put_abi(value)));
    return value;
}

template <typename D> Windows::Services::TargetedContent::TargetedContentObjectKind impl_ITargetedContentObject<D>::ObjectKind() const
{
    Windows::Services::TargetedContent::TargetedContentObjectKind value {};
    check_hresult(WINRT_SHIM(ITargetedContentObject)->get_ObjectKind(&value));
    return value;
}

template <typename D> Windows::Services::TargetedContent::TargetedContentCollection impl_ITargetedContentObject<D>::Collection() const
{
    Windows::Services::TargetedContent::TargetedContentCollection value { nullptr };
    check_hresult(WINRT_SHIM(ITargetedContentObject)->get_Collection(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::TargetedContent::TargetedContentItem impl_ITargetedContentObject<D>::Item() const
{
    Windows::Services::TargetedContent::TargetedContentItem value { nullptr };
    check_hresult(WINRT_SHIM(ITargetedContentObject)->get_Item(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::TargetedContent::TargetedContentValue impl_ITargetedContentObject<D>::Value() const
{
    Windows::Services::TargetedContent::TargetedContentValue value { nullptr };
    check_hresult(WINRT_SHIM(ITargetedContentObject)->get_Value(put_abi(value)));
    return value;
}

template <typename D> hstring impl_ITargetedContentCollection<D>::Id() const
{
    hstring value;
    check_hresult(WINRT_SHIM(ITargetedContentCollection)->get_Id(put_abi(value)));
    return value;
}

template <typename D> void impl_ITargetedContentCollection<D>::ReportInteraction(Windows::Services::TargetedContent::TargetedContentInteraction interaction) const
{
    check_hresult(WINRT_SHIM(ITargetedContentCollection)->abi_ReportInteraction(interaction));
}

template <typename D> void impl_ITargetedContentCollection<D>::ReportCustomInteraction(hstring_view customInteractionName) const
{
    check_hresult(WINRT_SHIM(ITargetedContentCollection)->abi_ReportCustomInteraction(get_abi(customInteractionName)));
}

template <typename D> hstring impl_ITargetedContentCollection<D>::Path() const
{
    hstring value;
    check_hresult(WINRT_SHIM(ITargetedContentCollection)->get_Path(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Services::TargetedContent::TargetedContentValue> impl_ITargetedContentCollection<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Services::TargetedContent::TargetedContentValue> value;
    check_hresult(WINRT_SHIM(ITargetedContentCollection)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentCollection> impl_ITargetedContentCollection<D>::Collections() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentCollection> value;
    check_hresult(WINRT_SHIM(ITargetedContentCollection)->get_Collections(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentItem> impl_ITargetedContentCollection<D>::Items() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentItem> value;
    check_hresult(WINRT_SHIM(ITargetedContentCollection)->get_Items(put_abi(value)));
    return value;
}

template <typename D> bool impl_ITargetedContentItemState<D>::ShouldDisplay() const
{
    bool value {};
    check_hresult(WINRT_SHIM(ITargetedContentItemState)->get_ShouldDisplay(&value));
    return value;
}

template <typename D> Windows::Services::TargetedContent::TargetedContentAppInstallationState impl_ITargetedContentItemState<D>::AppInstallationState() const
{
    Windows::Services::TargetedContent::TargetedContentAppInstallationState value {};
    check_hresult(WINRT_SHIM(ITargetedContentItemState)->get_AppInstallationState(&value));
    return value;
}

template <typename D> hstring impl_ITargetedContentItem<D>::Path() const
{
    hstring value;
    check_hresult(WINRT_SHIM(ITargetedContentItem)->get_Path(put_abi(value)));
    return value;
}

template <typename D> void impl_ITargetedContentItem<D>::ReportInteraction(Windows::Services::TargetedContent::TargetedContentInteraction interaction) const
{
    check_hresult(WINRT_SHIM(ITargetedContentItem)->abi_ReportInteraction(interaction));
}

template <typename D> void impl_ITargetedContentItem<D>::ReportCustomInteraction(hstring_view customInteractionName) const
{
    check_hresult(WINRT_SHIM(ITargetedContentItem)->abi_ReportCustomInteraction(get_abi(customInteractionName)));
}

template <typename D> Windows::Services::TargetedContent::TargetedContentItemState impl_ITargetedContentItem<D>::State() const
{
    Windows::Services::TargetedContent::TargetedContentItemState value { nullptr };
    check_hresult(WINRT_SHIM(ITargetedContentItem)->get_State(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Services::TargetedContent::TargetedContentValue> impl_ITargetedContentItem<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Services::TargetedContent::TargetedContentValue> value;
    check_hresult(WINRT_SHIM(ITargetedContentItem)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentCollection> impl_ITargetedContentItem<D>::Collections() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentCollection> value;
    check_hresult(WINRT_SHIM(ITargetedContentItem)->get_Collections(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::TargetedContent::TargetedContentValueKind impl_ITargetedContentValue<D>::ValueKind() const
{
    Windows::Services::TargetedContent::TargetedContentValueKind value {};
    check_hresult(WINRT_SHIM(ITargetedContentValue)->get_ValueKind(&value));
    return value;
}

template <typename D> hstring impl_ITargetedContentValue<D>::Path() const
{
    hstring value;
    check_hresult(WINRT_SHIM(ITargetedContentValue)->get_Path(put_abi(value)));
    return value;
}

template <typename D> hstring impl_ITargetedContentValue<D>::String() const
{
    hstring value;
    check_hresult(WINRT_SHIM(ITargetedContentValue)->get_String(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_ITargetedContentValue<D>::Uri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(WINRT_SHIM(ITargetedContentValue)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> double impl_ITargetedContentValue<D>::Number() const
{
    double value {};
    check_hresult(WINRT_SHIM(ITargetedContentValue)->get_Number(&value));
    return value;
}

template <typename D> bool impl_ITargetedContentValue<D>::Boolean() const
{
    bool value {};
    check_hresult(WINRT_SHIM(ITargetedContentValue)->get_Boolean(&value));
    return value;
}

template <typename D> Windows::Services::TargetedContent::TargetedContentFile impl_ITargetedContentValue<D>::File() const
{
    Windows::Services::TargetedContent::TargetedContentFile value { nullptr };
    check_hresult(WINRT_SHIM(ITargetedContentValue)->get_File(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::TargetedContent::TargetedContentImage impl_ITargetedContentValue<D>::ImageFile() const
{
    Windows::Services::TargetedContent::TargetedContentImage value { nullptr };
    check_hresult(WINRT_SHIM(ITargetedContentValue)->get_ImageFile(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::TargetedContent::TargetedContentAction impl_ITargetedContentValue<D>::Action() const
{
    Windows::Services::TargetedContent::TargetedContentAction value { nullptr };
    check_hresult(WINRT_SHIM(ITargetedContentValue)->get_Action(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_ITargetedContentValue<D>::Strings() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(WINRT_SHIM(ITargetedContentValue)->get_Strings(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Foundation::Uri> impl_ITargetedContentValue<D>::Uris() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Uri> value;
    check_hresult(WINRT_SHIM(ITargetedContentValue)->get_Uris(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<double> impl_ITargetedContentValue<D>::Numbers() const
{
    Windows::Foundation::Collections::IVectorView<double> value;
    check_hresult(WINRT_SHIM(ITargetedContentValue)->get_Numbers(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<bool> impl_ITargetedContentValue<D>::Booleans() const
{
    Windows::Foundation::Collections::IVectorView<bool> value;
    check_hresult(WINRT_SHIM(ITargetedContentValue)->get_Booleans(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentFile> impl_ITargetedContentValue<D>::Files() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentFile> value;
    check_hresult(WINRT_SHIM(ITargetedContentValue)->get_Files(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentImage> impl_ITargetedContentValue<D>::ImageFiles() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentImage> value;
    check_hresult(WINRT_SHIM(ITargetedContentValue)->get_ImageFiles(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentAction> impl_ITargetedContentValue<D>::Actions() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentAction> value;
    check_hresult(WINRT_SHIM(ITargetedContentValue)->get_Actions(put_abi(value)));
    return value;
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer> TargetedContentContainer::GetAsync(hstring_view contentId)
{
    return get_activation_factory<TargetedContentContainer, ITargetedContentContainerStatics>().GetAsync(contentId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentSubscription> TargetedContentSubscription::GetAsync(hstring_view subscriptionId)
{
    return get_activation_factory<TargetedContentSubscription, ITargetedContentSubscriptionStatics>().GetAsync(subscriptionId);
}

inline Windows::Services::TargetedContent::TargetedContentSubscriptionOptions TargetedContentSubscription::GetOptions(hstring_view subscriptionId)
{
    return get_activation_factory<TargetedContentSubscription, ITargetedContentSubscriptionStatics>().GetOptions(subscriptionId);
}

}

}

template<>
struct std::hash<winrt::Windows::Services::TargetedContent::ITargetedContentAction>
{
    size_t operator()(const winrt::Windows::Services::TargetedContent::ITargetedContentAction & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::TargetedContent::ITargetedContentChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Services::TargetedContent::ITargetedContentChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::TargetedContent::ITargetedContentCollection>
{
    size_t operator()(const winrt::Windows::Services::TargetedContent::ITargetedContentCollection & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::TargetedContent::ITargetedContentContainer>
{
    size_t operator()(const winrt::Windows::Services::TargetedContent::ITargetedContentContainer & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::TargetedContent::ITargetedContentContainerStatics>
{
    size_t operator()(const winrt::Windows::Services::TargetedContent::ITargetedContentContainerStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::TargetedContent::ITargetedContentImage>
{
    size_t operator()(const winrt::Windows::Services::TargetedContent::ITargetedContentImage & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::TargetedContent::ITargetedContentItem>
{
    size_t operator()(const winrt::Windows::Services::TargetedContent::ITargetedContentItem & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::TargetedContent::ITargetedContentItemState>
{
    size_t operator()(const winrt::Windows::Services::TargetedContent::ITargetedContentItemState & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::TargetedContent::ITargetedContentObject>
{
    size_t operator()(const winrt::Windows::Services::TargetedContent::ITargetedContentObject & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::TargetedContent::ITargetedContentSubscription>
{
    size_t operator()(const winrt::Windows::Services::TargetedContent::ITargetedContentSubscription & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions>
{
    size_t operator()(const winrt::Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics>
{
    size_t operator()(const winrt::Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::TargetedContent::ITargetedContentValue>
{
    size_t operator()(const winrt::Windows::Services::TargetedContent::ITargetedContentValue & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::TargetedContent::TargetedContentAction>
{
    size_t operator()(const winrt::Windows::Services::TargetedContent::TargetedContentAction & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::TargetedContent::TargetedContentChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Services::TargetedContent::TargetedContentChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::TargetedContent::TargetedContentCollection>
{
    size_t operator()(const winrt::Windows::Services::TargetedContent::TargetedContentCollection & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::TargetedContent::TargetedContentContainer>
{
    size_t operator()(const winrt::Windows::Services::TargetedContent::TargetedContentContainer & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::TargetedContent::TargetedContentFile>
{
    size_t operator()(const winrt::Windows::Services::TargetedContent::TargetedContentFile & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::TargetedContent::TargetedContentImage>
{
    size_t operator()(const winrt::Windows::Services::TargetedContent::TargetedContentImage & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::TargetedContent::TargetedContentItem>
{
    size_t operator()(const winrt::Windows::Services::TargetedContent::TargetedContentItem & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::TargetedContent::TargetedContentItemState>
{
    size_t operator()(const winrt::Windows::Services::TargetedContent::TargetedContentItemState & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::TargetedContent::TargetedContentObject>
{
    size_t operator()(const winrt::Windows::Services::TargetedContent::TargetedContentObject & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::TargetedContent::TargetedContentSubscription>
{
    size_t operator()(const winrt::Windows::Services::TargetedContent::TargetedContentSubscription & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::TargetedContent::TargetedContentSubscriptionOptions>
{
    size_t operator()(const winrt::Windows::Services::TargetedContent::TargetedContentSubscriptionOptions & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Services::TargetedContent::TargetedContentValue>
{
    size_t operator()(const winrt::Windows::Services::TargetedContent::TargetedContentValue & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
