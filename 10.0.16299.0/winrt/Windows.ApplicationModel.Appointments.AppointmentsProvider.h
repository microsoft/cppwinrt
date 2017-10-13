// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.ApplicationModel.Appointments.2.h"
#include "winrt/impl/Windows.ApplicationModel.Appointments.AppointmentsProvider.2.h"
#include "winrt/Windows.ApplicationModel.Appointments.h"

namespace winrt::impl {

template <typename D> Windows::ApplicationModel::Appointments::Appointment consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IAddAppointmentOperation<D>::AppointmentInformation() const noexcept
{
    Windows::ApplicationModel::Appointments::Appointment value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Appointments::AppointmentsProvider::IAddAppointmentOperation)->get_AppointmentInformation(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IAddAppointmentOperation<D>::SourcePackageFamilyName() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Appointments::AppointmentsProvider::IAddAppointmentOperation)->get_SourcePackageFamilyName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IAddAppointmentOperation<D>::ReportCompleted(param::hstring const& itemId) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::AppointmentsProvider::IAddAppointmentOperation)->ReportCompleted(get_abi(itemId)));
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IAddAppointmentOperation<D>::ReportCanceled() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::AppointmentsProvider::IAddAppointmentOperation)->ReportCanceled());
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IAddAppointmentOperation<D>::ReportError(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::AppointmentsProvider::IAddAppointmentOperation)->ReportError(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IAddAppointmentOperation<D>::DismissUI() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::AppointmentsProvider::IAddAppointmentOperation)->DismissUI());
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IAppointmentsProviderLaunchActionVerbsStatics<D>::AddAppointment() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics)->get_AddAppointment(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IAppointmentsProviderLaunchActionVerbsStatics<D>::ReplaceAppointment() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics)->get_ReplaceAppointment(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IAppointmentsProviderLaunchActionVerbsStatics<D>::RemoveAppointment() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics)->get_RemoveAppointment(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IAppointmentsProviderLaunchActionVerbsStatics<D>::ShowTimeFrame() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics)->get_ShowTimeFrame(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IAppointmentsProviderLaunchActionVerbsStatics2<D>::ShowAppointmentDetails() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics2)->get_ShowAppointmentDetails(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IRemoveAppointmentOperation<D>::AppointmentId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Appointments::AppointmentsProvider::IRemoveAppointmentOperation)->get_AppointmentId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IRemoveAppointmentOperation<D>::InstanceStartDate() const noexcept
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Appointments::AppointmentsProvider::IRemoveAppointmentOperation)->get_InstanceStartDate(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IRemoveAppointmentOperation<D>::SourcePackageFamilyName() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Appointments::AppointmentsProvider::IRemoveAppointmentOperation)->get_SourcePackageFamilyName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IRemoveAppointmentOperation<D>::ReportCompleted() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::AppointmentsProvider::IRemoveAppointmentOperation)->ReportCompleted());
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IRemoveAppointmentOperation<D>::ReportCanceled() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::AppointmentsProvider::IRemoveAppointmentOperation)->ReportCanceled());
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IRemoveAppointmentOperation<D>::ReportError(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::AppointmentsProvider::IRemoveAppointmentOperation)->ReportError(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IRemoveAppointmentOperation<D>::DismissUI() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::AppointmentsProvider::IRemoveAppointmentOperation)->DismissUI());
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IReplaceAppointmentOperation<D>::AppointmentId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Appointments::AppointmentsProvider::IReplaceAppointmentOperation)->get_AppointmentId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::Appointment consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IReplaceAppointmentOperation<D>::AppointmentInformation() const noexcept
{
    Windows::ApplicationModel::Appointments::Appointment value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Appointments::AppointmentsProvider::IReplaceAppointmentOperation)->get_AppointmentInformation(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IReplaceAppointmentOperation<D>::InstanceStartDate() const noexcept
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Appointments::AppointmentsProvider::IReplaceAppointmentOperation)->get_InstanceStartDate(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IReplaceAppointmentOperation<D>::SourcePackageFamilyName() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Appointments::AppointmentsProvider::IReplaceAppointmentOperation)->get_SourcePackageFamilyName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IReplaceAppointmentOperation<D>::ReportCompleted(param::hstring const& itemId) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::AppointmentsProvider::IReplaceAppointmentOperation)->ReportCompleted(get_abi(itemId)));
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IReplaceAppointmentOperation<D>::ReportCanceled() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::AppointmentsProvider::IReplaceAppointmentOperation)->ReportCanceled());
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IReplaceAppointmentOperation<D>::ReportError(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::AppointmentsProvider::IReplaceAppointmentOperation)->ReportError(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IReplaceAppointmentOperation<D>::DismissUI() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::AppointmentsProvider::IReplaceAppointmentOperation)->DismissUI());
}

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::AppointmentsProvider::IAddAppointmentOperation> : produce_base<D, Windows::ApplicationModel::Appointments::AppointmentsProvider::IAddAppointmentOperation>
{
    HRESULT __stdcall get_AppointmentInformation(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AppointmentInformation());
        return S_OK;
    }

    HRESULT __stdcall get_SourcePackageFamilyName(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SourcePackageFamilyName());
        return S_OK;
    }

    HRESULT __stdcall ReportCompleted(HSTRING itemId) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportCompleted(*reinterpret_cast<hstring const*>(&itemId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportCanceled() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportCanceled();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportError(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportError(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DismissUI() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DismissUI();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics> : produce_base<D, Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics>
{
    HRESULT __stdcall get_AddAppointment(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AddAppointment());
        return S_OK;
    }

    HRESULT __stdcall get_ReplaceAppointment(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReplaceAppointment());
        return S_OK;
    }

    HRESULT __stdcall get_RemoveAppointment(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RemoveAppointment());
        return S_OK;
    }

    HRESULT __stdcall get_ShowTimeFrame(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ShowTimeFrame());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics2> : produce_base<D, Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics2>
{
    HRESULT __stdcall get_ShowAppointmentDetails(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ShowAppointmentDetails());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::AppointmentsProvider::IRemoveAppointmentOperation> : produce_base<D, Windows::ApplicationModel::Appointments::AppointmentsProvider::IRemoveAppointmentOperation>
{
    HRESULT __stdcall get_AppointmentId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AppointmentId());
        return S_OK;
    }

    HRESULT __stdcall get_InstanceStartDate(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().InstanceStartDate());
        return S_OK;
    }

    HRESULT __stdcall get_SourcePackageFamilyName(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SourcePackageFamilyName());
        return S_OK;
    }

    HRESULT __stdcall ReportCompleted() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportCompleted();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportCanceled() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportCanceled();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportError(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportError(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DismissUI() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DismissUI();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::AppointmentsProvider::IReplaceAppointmentOperation> : produce_base<D, Windows::ApplicationModel::Appointments::AppointmentsProvider::IReplaceAppointmentOperation>
{
    HRESULT __stdcall get_AppointmentId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AppointmentId());
        return S_OK;
    }

    HRESULT __stdcall get_AppointmentInformation(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AppointmentInformation());
        return S_OK;
    }

    HRESULT __stdcall get_InstanceStartDate(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().InstanceStartDate());
        return S_OK;
    }

    HRESULT __stdcall get_SourcePackageFamilyName(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SourcePackageFamilyName());
        return S_OK;
    }

    HRESULT __stdcall ReportCompleted(HSTRING itemId) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportCompleted(*reinterpret_cast<hstring const*>(&itemId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportCanceled() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportCanceled();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportError(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportError(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DismissUI() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DismissUI();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider {

inline hstring AppointmentsProviderLaunchActionVerbs::AddAppointment()
{
    return get_activation_factory<AppointmentsProviderLaunchActionVerbs, Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics>().AddAppointment();
}

inline hstring AppointmentsProviderLaunchActionVerbs::ReplaceAppointment()
{
    return get_activation_factory<AppointmentsProviderLaunchActionVerbs, Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics>().ReplaceAppointment();
}

inline hstring AppointmentsProviderLaunchActionVerbs::RemoveAppointment()
{
    return get_activation_factory<AppointmentsProviderLaunchActionVerbs, Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics>().RemoveAppointment();
}

inline hstring AppointmentsProviderLaunchActionVerbs::ShowTimeFrame()
{
    return get_activation_factory<AppointmentsProviderLaunchActionVerbs, Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics>().ShowTimeFrame();
}

inline hstring AppointmentsProviderLaunchActionVerbs::ShowAppointmentDetails()
{
    return get_activation_factory<AppointmentsProviderLaunchActionVerbs, Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics2>().ShowAppointmentDetails();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider::IAddAppointmentOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider::IAddAppointmentOperation> {};

template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider::IRemoveAppointmentOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider::IRemoveAppointmentOperation> {};

template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider::IReplaceAppointmentOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider::IReplaceAppointmentOperation> {};

template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider::AddAppointmentOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider::AddAppointmentOperation> {};

template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider::AppointmentsProviderLaunchActionVerbs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider::AppointmentsProviderLaunchActionVerbs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider::RemoveAppointmentOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider::RemoveAppointmentOperation> {};

template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider::ReplaceAppointmentOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider::ReplaceAppointmentOperation> {};

}

WINRT_WARNING_POP
