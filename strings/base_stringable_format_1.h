
#ifdef __cpp_lib_format
template <>
struct std::formatter<winrt::Windows::Foundation::IStringable, wchar_t> : std::formatter<winrt::hstring, wchar_t>
{
    template <typename FormatContext>
    WINRT_IMPL_AUTO(void) format(winrt::Windows::Foundation::IStringable const& obj, FormatContext& fc);
};
#endif
