
#ifdef __cpp_lib_format
template <>
struct std::formatter<winrt::Windows::Foundation::IStringable, wchar_t> : std::formatter<winrt::hstring, wchar_t>
{
    template <typename FormatContext>
    auto format(winrt::Windows::Foundation::IStringable const& obj, FormatContext& fc) const;
};
#endif
