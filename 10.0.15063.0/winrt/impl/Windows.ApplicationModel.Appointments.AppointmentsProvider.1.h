// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Appointments.0.h"
#include "winrt/impl/Windows.ApplicationModel.Appointments.AppointmentsProvider.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider {

struct WINRT_EBO IAddAppointmentOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAddAppointmentOperation>
{
    IAddAppointmentOperation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentsProviderLaunchActionVerbsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentsProviderLaunchActionVerbsStatics>
{
    IAppointmentsProviderLaunchActionVerbsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentsProviderLaunchActionVerbsStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentsProviderLaunchActionVerbsStatics2>
{
    IAppointmentsProviderLaunchActionVerbsStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoveAppointmentOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoveAppointmentOperation>
{
    IRemoveAppointmentOperation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IReplaceAppointmentOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IReplaceAppointmentOperation>
{
    IReplaceAppointmentOperation(std::nullptr_t = nullptr) noexcept {}
};

}
