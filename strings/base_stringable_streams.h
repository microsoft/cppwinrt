
inline std::wostream& operator<<(std::wostream& stream, winrt::Windows::Foundation::IStringable const& stringable)
{
    stream << stringable.ToString();
    return stream;
}
