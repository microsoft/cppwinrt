#pragma once

#if defined(_WIN32)
#include <windows.h>
#include <shlwapi.h>
#else
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <unistd.h>
#endif

#include <stdexcept>
#include <assert.h>
#include <array>
#include <bitset>
#include <fstream>
#include <future>
#include <list>
#include <map>
#include <optional>
#include <regex>
#include <string>
#include <string_view>
#include <variant>
#include <vector>
#include <set>
#include <filesystem>

#if defined(_DEBUG)
#define XLANG_DEBUG
#define XLANG_ASSERT assert
#else
#define XLANG_ASSERT(expression) ((void)0)
#endif

namespace winmd
{
    using namespace std::literals;

    namespace impl
    {
        [[noreturn]] inline void throw_invalid(std::string const& message)
        {
            throw std::invalid_argument(message);
        }

        template <typename...T>
        [[noreturn]] inline void throw_invalid(std::string message, T const&... args)
        {
            (message.append(args), ...);
            throw std::invalid_argument(message);
        }

        template <typename T>
        auto c_str(std::basic_string_view<T> const& view) noexcept
        {
            if (*(view.data() + view.size()))
            {
                std::terminate();
            }

            return view.data();
        }

        inline bool starts_with(std::string_view const& value, std::string_view const& match) noexcept
        {
            return 0 == value.compare(0, match.size(), match);
        }
    }
}
