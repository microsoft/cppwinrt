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
    Calendar calendar;
    calendar.SetToNow();
    auto time = clock::now();
    auto diff = calendar.GetDateTime() - time;
    REQUIRE(abs(diff) < milliseconds{ 100 });
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
    const DateTime now_dt = clock::now();
    const time_t now_tt = time(nullptr);

    // Round trip from DateTime to time_t and back.
    // confirm that nothing happens other than truncating the fractional seconds
    REQUIRE(clock::from_time_t(clock::to_time_t(now_dt)) == time_point_cast<seconds>(now_dt));

    // Same thing in reverse
    REQUIRE(clock::to_time_t(clock::from_time_t(now_tt)) == now_tt);

    // Conversions are verified to be consistent. Now, verify that we're correctly converting epochs
    const auto diff = duration_cast<milliseconds>(abs(now_dt - clock::from_time_t(now_tt))).count();
    REQUIRE(diff < 1000);
}

TEST_CASE("clock, FILETIME")
{
    const DateTime now_dt = clock::now();
    FILETIME now_ft;
    ::GetSystemTimePreciseAsFileTime(&now_ft);

    // Round trip conversions
    REQUIRE(clock::from_file_time(clock::to_file_time(now_dt)) == now_dt);

    REQUIRE(clock::to_file_time(clock::from_file_time(now_ft)) == now_ft);

    // Verify epoch
    const auto diff = abs(now_dt - clock::from_file_time(now_ft));
    REQUIRE(diff < milliseconds{ 100 });
}

TEST_CASE("clock, system_clock")
{
    DateTime const now_dt = clock::now();
    auto const now_sys = system_clock::now();

    // Round trip DateTime to std::chrono::system_clock::time_point and back
    REQUIRE(clock::from_sys(clock::to_sys(now_dt)) == now_dt);

    // Round trip other direction
    REQUIRE(clock::to_sys(clock::from_sys(now_sys)) == now_sys);

    // Round trip with custom resolution
    {
        auto const now_dt_sec = time_point_cast<seconds>(now_dt);
        REQUIRE(clock::from_sys(clock::to_sys(now_dt_sec)) == now_dt_sec);
    }
    {
        auto const now_dt_mins = time_point_cast<minutes>(now_dt);
        REQUIRE(clock::from_sys(clock::to_sys(now_dt_mins)) == now_dt_mins);
    }
    {
        auto const now_sys_sec = time_point_cast<seconds>(now_sys);
        REQUIRE(clock::to_sys(clock::from_sys(now_sys_sec)) == now_sys_sec);
    }
    {
        auto const now_sys_mins = time_point_cast<seconds>(now_sys);
        REQUIRE(clock::to_sys(clock::from_sys(now_sys_mins)) == now_sys_mins);
    }

    // Verify that the epoch calculations are correct.
    {
        auto const diff = now_dt - clock::from_sys(now_sys);
        REQUIRE(abs(diff) < milliseconds{ 100 });
    }
    {
        auto const diff = now_sys - clock::to_sys(now_dt);
        REQUIRE(abs(diff) < milliseconds{ 100 });
    }
}
