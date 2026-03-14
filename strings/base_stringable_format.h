
#ifdef __cpp_lib_format
template <typename FormatContext>
auto std::formatter<winrt::Windows::Foundation::IStringable, wchar_t>::format(winrt::Windows::Foundation::IStringable const& obj, FormatContext& fc) const
{
    return std::formatter<winrt::hstring, wchar_t>::format(obj.ToString(), fc);
}
#endif
