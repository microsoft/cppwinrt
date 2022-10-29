inline std::wostream& operator<<(std::wostream& stream, winrt::Windows::Foundation::IStringable const& stringable)
{
    stream << stringable.ToString();
    return stream;
}

#ifdef __cpp_lib_format
template <typename FormatContext>
auto std::formatter<winrt::Windows::Foundation::IStringable, wchar_t>::format(winrt::Windows::Foundation::IStringable const& obj, FormatContext& fc)
{
    return std::formatter<winrt::hstring, wchar_t>::format(obj.ToString(), fc);
}
#endif
