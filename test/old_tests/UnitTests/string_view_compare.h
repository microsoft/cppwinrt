#pragma once

#include <string_view>

template <typename CharT>
inline constexpr bool string_view_equal(std::basic_string_view<CharT> left, std::basic_string_view<CharT> right) noexcept
{
    if (left.size() != right.size())
    {
        return false;
    }

    for (size_t i = 0; i < left.size(); ++i)
    {
        if (left[i] != right[i])
        {
            return false;
        }
    }

    return true;
}
