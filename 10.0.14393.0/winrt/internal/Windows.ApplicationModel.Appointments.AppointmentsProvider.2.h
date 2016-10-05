// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.Appointments.AppointmentsProvider.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_5541d8a7_497c_5aa4_86fc_7713adbf2a2c
#define WINRT_GENERIC_5541d8a7_497c_5aa4_86fc_7713adbf2a2c
template <> struct __declspec(uuid("5541d8a7-497c-5aa4-86fc-7713adbf2a2c")) __declspec(novtable) IReference<Windows::Foundation::DateTime> : impl_IReference<Windows::Foundation::DateTime> {};
#endif


}

namespace Windows::ApplicationModel::Appointments::AppointmentsProvider {

template <typename D>
struct WINRT_EBO impl_IAddAppointmentOperation
{
    Windows::ApplicationModel::Appointments::Appointment AppointmentInformation() const;
    hstring SourcePackageFamilyName() const;
    void ReportCompleted(hstring_ref itemId) const;
    void ReportCanceled() const;
    void ReportError(hstring_ref value) const;
    void DismissUI() const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentsProviderLaunchActionVerbsStatics
{
    hstring AddAppointment() const;
    hstring ReplaceAppointment() const;
    hstring RemoveAppointment() const;
    hstring ShowTimeFrame() const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentsProviderLaunchActionVerbsStatics2
{
    hstring ShowAppointmentDetails() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoveAppointmentOperation
{
    hstring AppointmentId() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> InstanceStartDate() const;
    hstring SourcePackageFamilyName() const;
    void ReportCompleted() const;
    void ReportCanceled() const;
    void ReportError(hstring_ref value) const;
    void DismissUI() const;
};

template <typename D>
struct WINRT_EBO impl_IReplaceAppointmentOperation
{
    hstring AppointmentId() const;
    Windows::ApplicationModel::Appointments::Appointment AppointmentInformation() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> InstanceStartDate() const;
    hstring SourcePackageFamilyName() const;
    void ReportCompleted(hstring_ref itemId) const;
    void ReportCanceled() const;
    void ReportError(hstring_ref value) const;
    void DismissUI() const;
};

struct IAddAppointmentOperation :
    Windows::IInspectable,
    impl::consume<IAddAppointmentOperation>
{
    IAddAppointmentOperation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAddAppointmentOperation>(m_ptr); }
};

struct IAppointmentsProviderLaunchActionVerbsStatics :
    Windows::IInspectable,
    impl::consume<IAppointmentsProviderLaunchActionVerbsStatics>
{
    IAppointmentsProviderLaunchActionVerbsStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentsProviderLaunchActionVerbsStatics>(m_ptr); }
};

struct IAppointmentsProviderLaunchActionVerbsStatics2 :
    Windows::IInspectable,
    impl::consume<IAppointmentsProviderLaunchActionVerbsStatics2>
{
    IAppointmentsProviderLaunchActionVerbsStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentsProviderLaunchActionVerbsStatics2>(m_ptr); }
};

struct IRemoveAppointmentOperation :
    Windows::IInspectable,
    impl::consume<IRemoveAppointmentOperation>
{
    IRemoveAppointmentOperation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRemoveAppointmentOperation>(m_ptr); }
};

struct IReplaceAppointmentOperation :
    Windows::IInspectable,
    impl::consume<IReplaceAppointmentOperation>
{
    IReplaceAppointmentOperation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IReplaceAppointmentOperation>(m_ptr); }
};

}

}
