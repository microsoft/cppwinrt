
WINRT_EXPORT namespace winrt
{
    inline bool operator==(hstring const& left, hstring const& right) noexcept
    {
        return std::wstring_view(left) == std::wstring_view(right);
    }

    inline bool operator==(hstring const& left, std::wstring const& right) noexcept
    {
        return std::wstring_view(left) == right;
    }

    inline bool operator==(std::wstring const& left, hstring const& right) noexcept
    {
        return left == std::wstring_view(right);
    }

    inline bool operator==(hstring const& left, wchar_t const* right) noexcept
    {
        return std::wstring_view(left) == right;
    }

    inline bool operator==(wchar_t const* left, hstring const& right) noexcept
    {
        return left == std::wstring_view(right);
    }

    bool operator==(hstring const& left, std::nullptr_t) = delete;

    bool operator==(std::nullptr_t, hstring const& right) = delete;

    inline bool operator<(hstring const& left, hstring const& right) noexcept
    {
        return std::wstring_view(left) < std::wstring_view(right);
    }

    inline bool operator<(std::wstring const& left, hstring const& right) noexcept
    {
        return left < std::wstring_view(right);
    }

    inline bool operator<(hstring const& left, std::wstring const& right) noexcept
    {
        return std::wstring_view(left) < right;
    }

    inline bool operator<(hstring const& left, wchar_t const* right) noexcept
    {
        return std::wstring_view(left) < right;
    }

    inline bool operator<(wchar_t const* left, hstring const& right) noexcept
    {
        return left < std::wstring_view(right);
    }

    bool operator<(hstring const& left, nullptr_t) = delete;

    bool operator<(nullptr_t, hstring const& right) = delete;
    inline bool operator!=(hstring const& left, hstring const& right) noexcept { return !(left == right); }
    inline bool operator>(hstring const& left, hstring const& right) noexcept { return right < left; }
    inline bool operator<=(hstring const& left, hstring const& right) noexcept { return !(right < left); }
    inline bool operator>=(hstring const& left, hstring const& right) noexcept { return !(left < right); }

    inline bool operator!=(hstring const& left, std::wstring const& right) noexcept { return !(left == right); }
    inline bool operator>(hstring const& left, std::wstring const& right) noexcept { return right < left; }
    inline bool operator<=(hstring const& left, std::wstring const& right) noexcept { return !(right < left); }
    inline bool operator>=(hstring const& left, std::wstring const& right) noexcept { return !(left < right); }

    inline bool operator!=(std::wstring const& left, hstring const& right) noexcept { return !(left == right); }
    inline bool operator>(std::wstring const& left, hstring const& right) noexcept { return right < left; }
    inline bool operator<=(std::wstring const& left, hstring const& right) noexcept { return !(right < left); }
    inline bool operator>=(std::wstring const& left, hstring const& right) noexcept { return !(left < right); }

    inline bool operator!=(hstring const& left, wchar_t const* right) noexcept { return !(left == right); }
    inline bool operator>(hstring const& left, wchar_t const* right) noexcept { return right < left; }
    inline bool operator<=(hstring const& left, wchar_t const* right) noexcept { return !(right < left); }
    inline bool operator>=(hstring const& left, wchar_t const* right) noexcept { return !(left < right); }

    inline bool operator!=(wchar_t const* left, hstring const& right) noexcept { return !(left == right); }
    inline bool operator>(wchar_t const* left, hstring const& right) noexcept { return right < left; }
    inline bool operator<=(wchar_t const* left, hstring const& right) noexcept { return !(right < left); }
    inline bool operator>=(wchar_t const* left, hstring const& right) noexcept { return !(left < right); }

    bool operator!=(hstring const& left, std::nullptr_t right) = delete;
    bool operator>(hstring const& left, std::nullptr_t right) = delete;
    bool operator<=(hstring const& left, std::nullptr_t right) = delete;
    bool operator>=(hstring const& left, std::nullptr_t right) = delete;

    bool operator!=(std::nullptr_t left, hstring const& right) = delete;
    bool operator>(std::nullptr_t left, hstring const& right) = delete;
    bool operator<=(std::nullptr_t left, hstring const& right) = delete;
    bool operator>=(std::nullptr_t left, hstring const& right) = delete;
}

namespace winrt::impl
{
    inline hstring concat_hstring(std::wstring_view const& left, std::wstring_view const& right)
    {
        hstring_builder text(static_cast<uint32_t>(left.size() + right.size()));
        memcpy_s(text.data(), left.size() * sizeof(wchar_t), left.data(), left.size() * sizeof(wchar_t));
        memcpy_s(text.data() + left.size(), right.size() * sizeof(wchar_t), right.data(), right.size() * sizeof(wchar_t));
        return text.to_hstring();
    }
}

WINRT_EXPORT namespace winrt
{
    inline hstring operator+(hstring const& left, hstring const& right)
    {
        return impl::concat_hstring(left, right);
    }

    inline hstring operator+(hstring const& left, std::wstring const& right)
    {
        return impl::concat_hstring(left, right);
    }

    inline hstring operator+(std::wstring const& left, hstring const& right)
    {
        return impl::concat_hstring(left, right);
    }

    inline hstring operator+(hstring const& left, wchar_t const* right)
    {
        return impl::concat_hstring(left, right);
    }

    inline hstring operator+(wchar_t const* left, hstring const& right)
    {
        return impl::concat_hstring(left, right);
    }

    inline hstring operator+(hstring const& left, wchar_t right)
    {
        return impl::concat_hstring(left, std::wstring_view(&right, 1));
    }

    inline hstring operator+(wchar_t left, hstring const& right)
    {
        return impl::concat_hstring(std::wstring_view(&left, 1), right);
    }

    hstring operator+(hstring const& left, std::nullptr_t) = delete;

    hstring operator+(std::nullptr_t, hstring const& right) = delete;

    inline hstring operator+(hstring const& left, std::wstring_view const& right)
    {
        return impl::concat_hstring(left, right);
    }

    inline hstring operator+(std::wstring_view const& left, hstring const& right)
    {
        return impl::concat_hstring(left, right);
    }
}
