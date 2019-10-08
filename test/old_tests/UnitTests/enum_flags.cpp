#include "pch.h"
#include "catch.hpp"

#pragma warning(disable:4471) // a forward declaration of an unscoped enumeration must have an underlying type
#include <Windows.ApplicationModel.Appointments.h>
#include "winrt/Windows.ApplicationModel.Appointments.h"

TEST_CASE("enum_flags")
{
    using winrt_dow = winrt::Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek;
    using midl_dow = ABI::Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek;

    winrt_dow w = {};
    midl_dow m = {};

    REQUIRE(static_cast<uint32_t>(w) == static_cast<uint32_t>(m));

    w |= winrt_dow::Monday | winrt_dow::Tuesday;
    m |= midl_dow::AppointmentDaysOfWeek_Monday | midl_dow::AppointmentDaysOfWeek_Tuesday;

    REQUIRE(static_cast<uint32_t>(w) == static_cast<uint32_t>(m));

    w |= winrt_dow::Wednesday;
    m |= midl_dow::AppointmentDaysOfWeek_Wednesday;

    REQUIRE(static_cast<uint32_t>(w) == static_cast<uint32_t>(m));

    w = w & (winrt_dow::Tuesday | winrt_dow::Wednesday);
    m = m & (midl_dow::AppointmentDaysOfWeek_Tuesday | midl_dow::AppointmentDaysOfWeek_Wednesday);

    REQUIRE(static_cast<uint32_t>(w) == static_cast<uint32_t>(m));

    w &= (winrt_dow::Monday | winrt_dow::Tuesday);
    m &= (midl_dow::AppointmentDaysOfWeek_Monday | midl_dow::AppointmentDaysOfWeek_Tuesday);

    REQUIRE(static_cast<uint32_t>(w) == static_cast<uint32_t>(m));

    w = ~w;
    m = ~m;

    REQUIRE(static_cast<uint32_t>(w) == static_cast<uint32_t>(m));

    w = (winrt_dow::Monday | winrt_dow::Tuesday) ^ (winrt_dow::Tuesday | winrt_dow::Wednesday);
    m = (midl_dow::AppointmentDaysOfWeek_Monday | midl_dow::AppointmentDaysOfWeek_Tuesday) ^ (midl_dow::AppointmentDaysOfWeek_Tuesday | midl_dow::AppointmentDaysOfWeek_Wednesday);

    REQUIRE(static_cast<uint32_t>(w) == static_cast<uint32_t>(m));

    w ^= (winrt_dow::Monday | winrt_dow::Tuesday | winrt_dow::Wednesday);
    m ^= (midl_dow::AppointmentDaysOfWeek_Monday | midl_dow::AppointmentDaysOfWeek_Tuesday | midl_dow::AppointmentDaysOfWeek_Wednesday);

    REQUIRE(static_cast<uint32_t>(w) == static_cast<uint32_t>(m));
}
