// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.ApplicationModel.Appointments.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.ApplicationModel.Appointments.AppointmentsProvider.3.h"
#include "Windows.ApplicationModel.Appointments.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::AppointmentsProvider::IAddAppointmentOperation> : produce_base<D, Windows::ApplicationModel::Appointments::AppointmentsProvider::IAddAppointmentOperation>
{
    HRESULT __stdcall get_AppointmentInformation(abi_arg_out<Windows::ApplicationModel::Appointments::IAppointment> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppointmentInformation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourcePackageFamilyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SourcePackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompleted(abi_arg_in<hstring> itemId) noexcept override
    {
        try
        {
            this->shim().ReportCompleted(*reinterpret_cast<const hstring *>(&itemId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCanceled() noexcept override
    {
        try
        {
            this->shim().ReportCanceled();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportError(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ReportError(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DismissUI() noexcept override
    {
        try
        {
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
    HRESULT __stdcall get_AddAppointment(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AddAppointment());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReplaceAppointment(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReplaceAppointment());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemoveAppointment(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemoveAppointment());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShowTimeFrame(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ShowTimeFrame());
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
struct produce<D, Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics2> : produce_base<D, Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics2>
{
    HRESULT __stdcall get_ShowAppointmentDetails(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ShowAppointmentDetails());
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
struct produce<D, Windows::ApplicationModel::Appointments::AppointmentsProvider::IRemoveAppointmentOperation> : produce_base<D, Windows::ApplicationModel::Appointments::AppointmentsProvider::IRemoveAppointmentOperation>
{
    HRESULT __stdcall get_AppointmentId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppointmentId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InstanceStartDate(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InstanceStartDate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourcePackageFamilyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SourcePackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompleted() noexcept override
    {
        try
        {
            this->shim().ReportCompleted();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCanceled() noexcept override
    {
        try
        {
            this->shim().ReportCanceled();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportError(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ReportError(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DismissUI() noexcept override
    {
        try
        {
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
    HRESULT __stdcall get_AppointmentId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppointmentId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppointmentInformation(abi_arg_out<Windows::ApplicationModel::Appointments::IAppointment> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppointmentInformation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InstanceStartDate(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InstanceStartDate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourcePackageFamilyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SourcePackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompleted(abi_arg_in<hstring> itemId) noexcept override
    {
        try
        {
            this->shim().ReportCompleted(*reinterpret_cast<const hstring *>(&itemId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCanceled() noexcept override
    {
        try
        {
            this->shim().ReportCanceled();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportError(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ReportError(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DismissUI() noexcept override
    {
        try
        {
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

namespace Windows::ApplicationModel::Appointments::AppointmentsProvider {

template <typename D> hstring impl_IAppointmentsProviderLaunchActionVerbsStatics<D>::AddAppointment() const
{
    hstring value;
    check_hresult(static_cast<const IAppointmentsProviderLaunchActionVerbsStatics &>(static_cast<const D &>(*this))->get_AddAppointment(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentsProviderLaunchActionVerbsStatics<D>::ReplaceAppointment() const
{
    hstring value;
    check_hresult(static_cast<const IAppointmentsProviderLaunchActionVerbsStatics &>(static_cast<const D &>(*this))->get_ReplaceAppointment(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentsProviderLaunchActionVerbsStatics<D>::RemoveAppointment() const
{
    hstring value;
    check_hresult(static_cast<const IAppointmentsProviderLaunchActionVerbsStatics &>(static_cast<const D &>(*this))->get_RemoveAppointment(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentsProviderLaunchActionVerbsStatics<D>::ShowTimeFrame() const
{
    hstring value;
    check_hresult(static_cast<const IAppointmentsProviderLaunchActionVerbsStatics &>(static_cast<const D &>(*this))->get_ShowTimeFrame(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentsProviderLaunchActionVerbsStatics2<D>::ShowAppointmentDetails() const
{
    hstring value;
    check_hresult(static_cast<const IAppointmentsProviderLaunchActionVerbsStatics2 &>(static_cast<const D &>(*this))->get_ShowAppointmentDetails(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::Appointment impl_IAddAppointmentOperation<D>::AppointmentInformation() const
{
    Windows::ApplicationModel::Appointments::Appointment value { nullptr };
    check_hresult(static_cast<const IAddAppointmentOperation &>(static_cast<const D &>(*this))->get_AppointmentInformation(put(value)));
    return value;
}

template <typename D> hstring impl_IAddAppointmentOperation<D>::SourcePackageFamilyName() const
{
    hstring value;
    check_hresult(static_cast<const IAddAppointmentOperation &>(static_cast<const D &>(*this))->get_SourcePackageFamilyName(put(value)));
    return value;
}

template <typename D> void impl_IAddAppointmentOperation<D>::ReportCompleted(hstring_ref itemId) const
{
    check_hresult(static_cast<const IAddAppointmentOperation &>(static_cast<const D &>(*this))->abi_ReportCompleted(get(itemId)));
}

template <typename D> void impl_IAddAppointmentOperation<D>::ReportCanceled() const
{
    check_hresult(static_cast<const IAddAppointmentOperation &>(static_cast<const D &>(*this))->abi_ReportCanceled());
}

template <typename D> void impl_IAddAppointmentOperation<D>::ReportError(hstring_ref value) const
{
    check_hresult(static_cast<const IAddAppointmentOperation &>(static_cast<const D &>(*this))->abi_ReportError(get(value)));
}

template <typename D> void impl_IAddAppointmentOperation<D>::DismissUI() const
{
    check_hresult(static_cast<const IAddAppointmentOperation &>(static_cast<const D &>(*this))->abi_DismissUI());
}

template <typename D> hstring impl_IReplaceAppointmentOperation<D>::AppointmentId() const
{
    hstring value;
    check_hresult(static_cast<const IReplaceAppointmentOperation &>(static_cast<const D &>(*this))->get_AppointmentId(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::Appointment impl_IReplaceAppointmentOperation<D>::AppointmentInformation() const
{
    Windows::ApplicationModel::Appointments::Appointment value { nullptr };
    check_hresult(static_cast<const IReplaceAppointmentOperation &>(static_cast<const D &>(*this))->get_AppointmentInformation(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IReplaceAppointmentOperation<D>::InstanceStartDate() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IReplaceAppointmentOperation &>(static_cast<const D &>(*this))->get_InstanceStartDate(put(value)));
    return value;
}

template <typename D> hstring impl_IReplaceAppointmentOperation<D>::SourcePackageFamilyName() const
{
    hstring value;
    check_hresult(static_cast<const IReplaceAppointmentOperation &>(static_cast<const D &>(*this))->get_SourcePackageFamilyName(put(value)));
    return value;
}

template <typename D> void impl_IReplaceAppointmentOperation<D>::ReportCompleted(hstring_ref itemId) const
{
    check_hresult(static_cast<const IReplaceAppointmentOperation &>(static_cast<const D &>(*this))->abi_ReportCompleted(get(itemId)));
}

template <typename D> void impl_IReplaceAppointmentOperation<D>::ReportCanceled() const
{
    check_hresult(static_cast<const IReplaceAppointmentOperation &>(static_cast<const D &>(*this))->abi_ReportCanceled());
}

template <typename D> void impl_IReplaceAppointmentOperation<D>::ReportError(hstring_ref value) const
{
    check_hresult(static_cast<const IReplaceAppointmentOperation &>(static_cast<const D &>(*this))->abi_ReportError(get(value)));
}

template <typename D> void impl_IReplaceAppointmentOperation<D>::DismissUI() const
{
    check_hresult(static_cast<const IReplaceAppointmentOperation &>(static_cast<const D &>(*this))->abi_DismissUI());
}

template <typename D> hstring impl_IRemoveAppointmentOperation<D>::AppointmentId() const
{
    hstring value;
    check_hresult(static_cast<const IRemoveAppointmentOperation &>(static_cast<const D &>(*this))->get_AppointmentId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IRemoveAppointmentOperation<D>::InstanceStartDate() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IRemoveAppointmentOperation &>(static_cast<const D &>(*this))->get_InstanceStartDate(put(value)));
    return value;
}

template <typename D> hstring impl_IRemoveAppointmentOperation<D>::SourcePackageFamilyName() const
{
    hstring value;
    check_hresult(static_cast<const IRemoveAppointmentOperation &>(static_cast<const D &>(*this))->get_SourcePackageFamilyName(put(value)));
    return value;
}

template <typename D> void impl_IRemoveAppointmentOperation<D>::ReportCompleted() const
{
    check_hresult(static_cast<const IRemoveAppointmentOperation &>(static_cast<const D &>(*this))->abi_ReportCompleted());
}

template <typename D> void impl_IRemoveAppointmentOperation<D>::ReportCanceled() const
{
    check_hresult(static_cast<const IRemoveAppointmentOperation &>(static_cast<const D &>(*this))->abi_ReportCanceled());
}

template <typename D> void impl_IRemoveAppointmentOperation<D>::ReportError(hstring_ref value) const
{
    check_hresult(static_cast<const IRemoveAppointmentOperation &>(static_cast<const D &>(*this))->abi_ReportError(get(value)));
}

template <typename D> void impl_IRemoveAppointmentOperation<D>::DismissUI() const
{
    check_hresult(static_cast<const IRemoveAppointmentOperation &>(static_cast<const D &>(*this))->abi_DismissUI());
}

inline hstring AppointmentsProviderLaunchActionVerbs::AddAppointment()
{
    return get_activation_factory<AppointmentsProviderLaunchActionVerbs, IAppointmentsProviderLaunchActionVerbsStatics>().AddAppointment();
}

inline hstring AppointmentsProviderLaunchActionVerbs::ReplaceAppointment()
{
    return get_activation_factory<AppointmentsProviderLaunchActionVerbs, IAppointmentsProviderLaunchActionVerbsStatics>().ReplaceAppointment();
}

inline hstring AppointmentsProviderLaunchActionVerbs::RemoveAppointment()
{
    return get_activation_factory<AppointmentsProviderLaunchActionVerbs, IAppointmentsProviderLaunchActionVerbsStatics>().RemoveAppointment();
}

inline hstring AppointmentsProviderLaunchActionVerbs::ShowTimeFrame()
{
    return get_activation_factory<AppointmentsProviderLaunchActionVerbs, IAppointmentsProviderLaunchActionVerbsStatics>().ShowTimeFrame();
}

inline hstring AppointmentsProviderLaunchActionVerbs::ShowAppointmentDetails()
{
    return get_activation_factory<AppointmentsProviderLaunchActionVerbs, IAppointmentsProviderLaunchActionVerbsStatics2>().ShowAppointmentDetails();
}

}

}
