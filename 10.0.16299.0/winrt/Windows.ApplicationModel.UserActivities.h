// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.Shell.2.h"
#include "winrt/impl/Windows.ApplicationModel.UserActivities.2.h"
#include "winrt/Windows.ApplicationModel.h"

namespace winrt::impl {

template <typename D> Windows::ApplicationModel::UserActivities::UserActivityState consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::State() const noexcept
{
    Windows::ApplicationModel::UserActivities::UserActivityState value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivity)->get_State(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::ActivityId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivity)->get_ActivityId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::UserActivities::UserActivityVisualElements consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::VisualElements() const noexcept
{
    Windows::ApplicationModel::UserActivities::UserActivityVisualElements value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivity)->get_VisualElements(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::ContentUri() const noexcept
{
    Windows::Foundation::Uri value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivity)->get_ContentUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::ContentUri(Windows::Foundation::Uri const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivity)->put_ContentUri(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::ContentType() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivity)->get_ContentType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::ContentType(param::hstring const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivity)->put_ContentType(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::FallbackUri() const noexcept
{
    Windows::Foundation::Uri value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivity)->get_FallbackUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::FallbackUri(Windows::Foundation::Uri const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivity)->put_FallbackUri(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::ActivationUri() const noexcept
{
    Windows::Foundation::Uri value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivity)->get_ActivationUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::ActivationUri(Windows::Foundation::Uri const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivity)->put_ActivationUri(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::UserActivities::IUserActivityContentInfo consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::ContentInfo() const noexcept
{
    Windows::ApplicationModel::UserActivities::IUserActivityContentInfo value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivity)->get_ContentInfo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::ContentInfo(Windows::ApplicationModel::UserActivities::IUserActivityContentInfo const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivity)->put_ContentInfo(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::SaveAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivity)->SaveAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::ApplicationModel::UserActivities::UserActivitySession consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::CreateSession() const
{
    Windows::ApplicationModel::UserActivities::UserActivitySession result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivity)->CreateSession(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_UserActivities_IUserActivityAttribution<D>::IconUri() const noexcept
{
    Windows::Foundation::Uri value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivityAttribution)->get_IconUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserActivities_IUserActivityAttribution<D>::IconUri(Windows::Foundation::Uri const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivityAttribution)->put_IconUri(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_UserActivities_IUserActivityAttribution<D>::AlternateText() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivityAttribution)->get_AlternateText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserActivities_IUserActivityAttribution<D>::AlternateText(param::hstring const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivityAttribution)->put_AlternateText(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_UserActivities_IUserActivityAttribution<D>::AddImageQuery() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivityAttribution)->get_AddImageQuery(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserActivities_IUserActivityAttribution<D>::AddImageQuery(bool value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivityAttribution)->put_AddImageQuery(value));
}

template <typename D> Windows::ApplicationModel::UserActivities::UserActivityAttribution consume_Windows_ApplicationModel_UserActivities_IUserActivityAttributionFactory<D>::CreateWithUri(Windows::Foundation::Uri const& iconUri) const
{
    Windows::ApplicationModel::UserActivities::UserActivityAttribution result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivityAttributionFactory)->CreateWithUri(get_abi(iconUri), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserActivities::UserActivity> consume_Windows_ApplicationModel_UserActivities_IUserActivityChannel<D>::GetOrCreateUserActivityAsync(param::hstring const& activityId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserActivities::UserActivity> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivityChannel)->GetOrCreateUserActivityAsync(get_abi(activityId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_UserActivities_IUserActivityChannel<D>::DeleteActivityAsync(param::hstring const& activityId) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivityChannel)->DeleteActivityAsync(get_abi(activityId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_UserActivities_IUserActivityChannel<D>::DeleteAllActivitiesAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivityChannel)->DeleteAllActivitiesAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::ApplicationModel::UserActivities::UserActivityChannel consume_Windows_ApplicationModel_UserActivities_IUserActivityChannelStatics<D>::GetDefault() const
{
    Windows::ApplicationModel::UserActivities::UserActivityChannel value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics)->GetDefault(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_UserActivities_IUserActivityContentInfo<D>::ToJson() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivityContentInfo)->ToJson(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::UserActivities::UserActivityContentInfo consume_Windows_ApplicationModel_UserActivities_IUserActivityContentInfoStatics<D>::FromJson(param::hstring const& value) const
{
    Windows::ApplicationModel::UserActivities::UserActivityContentInfo result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivityContentInfoStatics)->FromJson(get_abi(value), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_UserActivities_IUserActivitySession<D>::ActivityId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivitySession)->get_ActivityId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements<D>::DisplayText() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivityVisualElements)->get_DisplayText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements<D>::DisplayText(param::hstring const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivityVisualElements)->put_DisplayText(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements<D>::Description() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivityVisualElements)->get_Description(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements<D>::Description(param::hstring const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivityVisualElements)->put_Description(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements<D>::BackgroundColor() const noexcept
{
    Windows::UI::Color value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivityVisualElements)->get_BackgroundColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements<D>::BackgroundColor(Windows::UI::Color const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivityVisualElements)->put_BackgroundColor(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::UserActivities::UserActivityAttribution consume_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements<D>::Attribution() const noexcept
{
    Windows::ApplicationModel::UserActivities::UserActivityAttribution value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivityVisualElements)->get_Attribution(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements<D>::Attribution(Windows::ApplicationModel::UserActivities::UserActivityAttribution const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivityVisualElements)->put_Attribution(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements<D>::Content(Windows::UI::Shell::IAdaptiveCard const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivityVisualElements)->put_Content(get_abi(value)));
}

template <typename D> Windows::UI::Shell::IAdaptiveCard consume_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements<D>::Content() const noexcept
{
    Windows::UI::Shell::IAdaptiveCard value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::UserActivities::IUserActivityVisualElements)->get_Content(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::UserActivities::IUserActivity> : produce_base<D, Windows::ApplicationModel::UserActivities::IUserActivity>
{
    HRESULT __stdcall get_State(Windows::ApplicationModel::UserActivities::UserActivityState* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().State());
        return S_OK;
    }

    HRESULT __stdcall get_ActivityId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ActivityId());
        return S_OK;
    }

    HRESULT __stdcall get_VisualElements(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().VisualElements());
        return S_OK;
    }

    HRESULT __stdcall get_ContentUri(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ContentUri());
        return S_OK;
    }

    HRESULT __stdcall put_ContentUri(::IUnknown* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ContentUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_ContentType(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ContentType());
        return S_OK;
    }

    HRESULT __stdcall put_ContentType(HSTRING value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ContentType(*reinterpret_cast<hstring const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_FallbackUri(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().FallbackUri());
        return S_OK;
    }

    HRESULT __stdcall put_FallbackUri(::IUnknown* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().FallbackUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_ActivationUri(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ActivationUri());
        return S_OK;
    }

    HRESULT __stdcall put_ActivationUri(::IUnknown* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ActivationUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_ContentInfo(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ContentInfo());
        return S_OK;
    }

    HRESULT __stdcall put_ContentInfo(::IUnknown* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ContentInfo(*reinterpret_cast<Windows::ApplicationModel::UserActivities::IUserActivityContentInfo const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall SaveAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SaveAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateSession(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateSession());
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
struct produce<D, Windows::ApplicationModel::UserActivities::IUserActivityAttribution> : produce_base<D, Windows::ApplicationModel::UserActivities::IUserActivityAttribution>
{
    HRESULT __stdcall get_IconUri(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IconUri());
        return S_OK;
    }

    HRESULT __stdcall put_IconUri(::IUnknown* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().IconUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_AlternateText(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AlternateText());
        return S_OK;
    }

    HRESULT __stdcall put_AlternateText(HSTRING value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().AlternateText(*reinterpret_cast<hstring const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_AddImageQuery(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AddImageQuery());
        return S_OK;
    }

    HRESULT __stdcall put_AddImageQuery(bool value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().AddImageQuery(value);
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::UserActivities::IUserActivityAttributionFactory> : produce_base<D, Windows::ApplicationModel::UserActivities::IUserActivityAttributionFactory>
{
    HRESULT __stdcall CreateWithUri(::IUnknown* iconUri, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&iconUri)));
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
struct produce<D, Windows::ApplicationModel::UserActivities::IUserActivityChannel> : produce_base<D, Windows::ApplicationModel::UserActivities::IUserActivityChannel>
{
    HRESULT __stdcall GetOrCreateUserActivityAsync(HSTRING activityId, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetOrCreateUserActivityAsync(*reinterpret_cast<hstring const*>(&activityId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteActivityAsync(HSTRING activityId, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().DeleteActivityAsync(*reinterpret_cast<hstring const*>(&activityId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteAllActivitiesAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().DeleteAllActivitiesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics> : produce_base<D, Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics>
{
    HRESULT __stdcall GetDefault(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDefault());
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
struct produce<D, Windows::ApplicationModel::UserActivities::IUserActivityContentInfo> : produce_base<D, Windows::ApplicationModel::UserActivities::IUserActivityContentInfo>
{
    HRESULT __stdcall ToJson(HSTRING* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ToJson());
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
struct produce<D, Windows::ApplicationModel::UserActivities::IUserActivityContentInfoStatics> : produce_base<D, Windows::ApplicationModel::UserActivities::IUserActivityContentInfoStatics>
{
    HRESULT __stdcall FromJson(HSTRING value, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FromJson(*reinterpret_cast<hstring const*>(&value)));
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
struct produce<D, Windows::ApplicationModel::UserActivities::IUserActivitySession> : produce_base<D, Windows::ApplicationModel::UserActivities::IUserActivitySession>
{
    HRESULT __stdcall get_ActivityId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ActivityId());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::UserActivities::IUserActivityVisualElements> : produce_base<D, Windows::ApplicationModel::UserActivities::IUserActivityVisualElements>
{
    HRESULT __stdcall get_DisplayText(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DisplayText());
        return S_OK;
    }

    HRESULT __stdcall put_DisplayText(HSTRING value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().DisplayText(*reinterpret_cast<hstring const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Description());
        return S_OK;
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().Description(*reinterpret_cast<hstring const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_BackgroundColor(struct_of<4>* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().BackgroundColor());
        return S_OK;
    }

    HRESULT __stdcall put_BackgroundColor(struct_of<4> value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().BackgroundColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_Attribution(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Attribution());
        return S_OK;
    }

    HRESULT __stdcall put_Attribution(::IUnknown* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().Attribution(*reinterpret_cast<Windows::ApplicationModel::UserActivities::UserActivityAttribution const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall put_Content(::IUnknown* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().Content(*reinterpret_cast<Windows::UI::Shell::IAdaptiveCard const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_Content(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Content());
        return S_OK;
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserActivities {

inline UserActivityAttribution::UserActivityAttribution() :
    UserActivityAttribution(activate_instance<UserActivityAttribution>())
{}

inline UserActivityAttribution::UserActivityAttribution(Windows::Foundation::Uri const& iconUri) :
    UserActivityAttribution(get_activation_factory<UserActivityAttribution, Windows::ApplicationModel::UserActivities::IUserActivityAttributionFactory>().CreateWithUri(iconUri))
{}

inline Windows::ApplicationModel::UserActivities::UserActivityChannel UserActivityChannel::GetDefault()
{
    return get_activation_factory<UserActivityChannel, Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics>().GetDefault();
}

inline Windows::ApplicationModel::UserActivities::UserActivityContentInfo UserActivityContentInfo::FromJson(param::hstring const& value)
{
    return get_activation_factory<UserActivityContentInfo, Windows::ApplicationModel::UserActivities::IUserActivityContentInfoStatics>().FromJson(value);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivity> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserActivities::IUserActivity> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivityAttribution> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserActivities::IUserActivityAttribution> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivityAttributionFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserActivities::IUserActivityAttributionFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannel> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannel> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivityContentInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserActivities::IUserActivityContentInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivityContentInfoStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserActivities::IUserActivityContentInfoStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivitySession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserActivities::IUserActivitySession> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivityVisualElements> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserActivities::IUserActivityVisualElements> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::UserActivity> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserActivities::UserActivity> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::UserActivityAttribution> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserActivities::UserActivityAttribution> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::UserActivityChannel> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserActivities::UserActivityChannel> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::UserActivityContentInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserActivities::UserActivityContentInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::UserActivitySession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserActivities::UserActivitySession> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::UserActivityVisualElements> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserActivities::UserActivityVisualElements> {};

}

WINRT_WARNING_POP
