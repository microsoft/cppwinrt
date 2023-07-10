#include "pch.h"
#include "catch.hpp"
#include "winrt/Windows.Globalization.h"
#include <ctime>

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Globalization;
using namespace std::chrono;

namespace winrt
{
    bool operator==(const FILETIME& lhs, const FILETIME& rhs) noexcept
    {
        return lhs.dwHighDateTime == rhs.dwHighDateTime &&
            lhs.dwLowDateTime == rhs.dwLowDateTime;
    }
}

// To confirm that two clocks have the same epoch, we
// capture one clock, then the other, then the first again,
// and verify that the three timestamps are ordered. This avoids
// spurious failures if a test machine is slow or experiences a
// clock tick at just the wrong time.
//
// We use a duration_cast to milliseconds so that the assertion
// failure message tells us how many milliseconds of error we encountered.
#define REQUIRE_ORDERED(a, b, c) \
    REQUIRE(duration_cast<milliseconds>((b) - (a)).count() >= 0); \
    REQUIRE(duration_cast<milliseconds>((c) - (b)).count() >= 0)

namespace Catch
{
    template<typename Rep, typename Period>
    std::string toString(const duration<Rep, Period>& value_)
    {
        nanoseconds value = value_;
        std::string result;
        if (value >= seconds{ 1 })
        {
            auto count = duration_cast<seconds>(value).count();
            result.append(std::to_string(count));
            result.append(" seconds");
            value %= seconds{ 1 };
        }
        assert(value < seconds{ 1 });
        if (value >= nanoseconds{ 1 })
        {
            auto count = duration_cast<nanoseconds>(value).count();
            if (!result.empty()) { result.append(", "); }
            result.append(std::to_string(count));
            result.append(" nanoseconds");
            value %= nanoseconds{ 1 };
        }
        return result;
    }
}

TEST_CASE("clock, now")
{
    // Confirm that clock::now agrees with Calendar::SetToNow.
    Calendar calendar1;
    calendar1.SetToNow();
    auto time = clock::now();
    Calendar calendar2;
    calendar2.SetToNow();
    REQUIRE_ORDERED(calendar1.GetDateTime(), time, calendar2.GetDateTime());
}

TEST_CASE("clock, units")
{
    auto time = clock::now();
    Calendar calendar;
    calendar.SetDateTime(time);

    // Add 5 minutes to both to verify that units conversion is working properly
    calendar.AddMinutes(5);
    REQUIRE(calendar.GetDateTime() == (time + 5min));
}

TEST_CASE("clock, time_t")
{
    const DateTime now1_dt = clock::now();
    const time_t now_tt = time(nullptr);
    const DateTime now2_dt = clock::now();

    // Round trip from DateTime to time_t and back.
    // confirm that nothing happens other than truncating the fractional seconds
    REQUIRE(clock::from_time_t(clock::to_time_t(now1_dt)) == time_point_cast<seconds>(now1_dt));

    // Same thing in reverse
    REQUIRE(clock::to_time_t(clock::from_time_t(now_tt)) == now_tt);

    // Conversions are verified to be consistent. Now, verify that we're correctly converting epochs
    // Note that time_t has only 1s resolution, so we need to add 2 seconds of slop on either side.
    // (One second for measurement error, and another second for rounding error.)
    REQUIRE_ORDERED(now1_dt - 2s, clock::from_time_t(now_tt), now2_dt + 2s);
}

TEST_CASE("clock, FILETIME")
{
    const DateTime now1_dt = clock::now();
    FILETIME now_ft;
    ::GetSystemTimePreciseAsFileTime(&now_ft);
    const DateTime now2_dt = clock::now();

    // Round trip conversions
    REQUIRE(clock::from_file_time(clock::to_file_time(now1_dt)) == now1_dt);

    REQUIRE(clock::to_file_time(clock::from_file_time(now_ft)) == now_ft);

    // Verify epoch
    REQUIRE_ORDERED(now1_dt, clock::from_file_time(now_ft), now2_dt);
}

TEST_CASE("clock, system_clock")
{
    DateTime const now1_dt = clock::now();
    auto const now1_sys = system_clock::now();
    DateTime const now2_dt = clock::now();
    auto const now2_sys = system_clock::now();

    // Round trip DateTime to std::chrono::system_clock::time_point and back
    REQUIRE(clock::from_sys(clock::to_sys(now1_dt)) == now1_dt);

    // Round trip other direction
    REQUIRE(clock::to_sys(clock::from_sys(now1_sys)) == now1_sys);

    // Round trip with custom resolution
    {
        auto const now_dt_sec = time_point_cast<seconds>(now1_dt);
        REQUIRE(clock::from_sys(clock::to_sys(now_dt_sec)) == now_dt_sec);
    }
    {
        auto const now_dt_mins = time_point_cast<minutes>(now1_dt);
        REQUIRE(clock::from_sys(clock::to_sys(now_dt_mins)) == now_dt_mins);
    }
    {
        auto const now_sys_sec = time_point_cast<seconds>(now1_sys);
        REQUIRE(clock::to_sys(clock::from_sys(now_sys_sec)) == now_sys_sec);
    }
    {
        auto const now_sys_mins = time_point_cast<seconds>(now1_sys);
        REQUIRE(clock::to_sys(clock::from_sys(now_sys_mins)) == now_sys_mins);
    }

    // Verify that the epoch calculations are correct.
    {
        REQUIRE_ORDERED(now1_dt, clock::from_sys(now1_sys), now2_dt);
        REQUIRE_ORDERED(clock::from_sys(now1_sys), now2_dt, clock::from_sys(now2_sys));
    }
}
