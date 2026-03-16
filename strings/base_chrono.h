
WINRT_EXPORT namespace winrt
{
    struct file_time
    {
        std::uint64_t value{};

        file_time() noexcept = default;

        constexpr explicit file_time(std::uint64_t const value) noexcept : value(value)
        {
        }

#ifdef _FILETIME_
        constexpr file_time(FILETIME const& value) noexcept
            : value(value.dwLowDateTime | (static_cast<std::uint64_t>(value.dwHighDateTime) << 32))
        {
        }

        operator FILETIME() const noexcept
        {
            return { static_cast<DWORD>(value & 0xFFFFFFFF), static_cast<DWORD>(value >> 32) };
        }
#endif
    };

    struct clock
    {
        using rep = std::int64_t;
        using period = impl::filetime_period;
        using duration = Windows::Foundation::TimeSpan;
        using time_point = Windows::Foundation::DateTime;

        static constexpr bool is_steady = false;

        static time_point now() noexcept
        {
            file_time ft;
            WINRT_IMPL_GetSystemTimePreciseAsFileTime(&ft);
            return from_file_time(ft);
        }

        static time_t to_time_t(time_point const& time) noexcept
        {
            return static_cast<time_t>(std::chrono::system_clock::to_time_t(std::chrono::time_point_cast<std::chrono::system_clock::duration>(to_sys(time))));
        }

        static time_point from_time_t(time_t time) noexcept
        {
            return from_sys(std::chrono::time_point_cast<duration>(std::chrono::system_clock::from_time_t(time)));
        }

        static file_time to_file_time(time_point const& time) noexcept
        {
            return file_time{ static_cast<std::uint64_t>(time.time_since_epoch().count()) };
        }

        static time_point from_file_time(file_time const& time) noexcept
        {
            return time_point{ duration{ time.value } };
        }

        static auto to_FILETIME(time_point const& time) noexcept
        {
            return to_file_time(time);
        }

        static time_point from_FILETIME(file_time const& time) noexcept
        {
            return from_file_time(time);
        }

        template <typename Duration>
        static std::chrono::time_point<std::chrono::system_clock, std::common_type_t<Duration, std::chrono::seconds>>
            to_sys(std::chrono::time_point<clock, Duration> const& tp)
        {
            return epoch + tp.time_since_epoch();
        }

        template <typename Duration>
        static std::chrono::time_point<clock, std::common_type_t<Duration, std::chrono::seconds>>
            from_sys(std::chrono::time_point<std::chrono::system_clock, Duration> const& tp)
        {
            using result_t = std::chrono::time_point<clock, std::common_type_t<Duration, std::chrono::seconds>>;
            return result_t{ tp - epoch };
        }

    private:

        // system_clock epoch is 00:00:00, Jan 1 1970.
        // This is 11644473600 seconds after Windows FILETIME epoch of 00:00:00, Jan 1 1601.
        static constexpr std::chrono::time_point<std::chrono::system_clock, std::chrono::seconds> epoch{ std::chrono::seconds{ -11644473600 } };
    };
}
