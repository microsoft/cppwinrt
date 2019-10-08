
#define CPPWINRT_VERSION "%"

// WINRT_version is used by Microsoft to analyze C++/WinRT library adoption and inform future product decisions.
extern "C"
__declspec(selectany)
char const * const WINRT_version = "C++/WinRT version:" CPPWINRT_VERSION;

#ifdef _M_IX86
#pragma comment(linker, "/include:_WINRT_version")
#else
#pragma comment(linker, "/include:WINRT_version")
#endif

WINRT_EXPORT namespace winrt
{
    template <size_t BaseSize, size_t ComponentSize>
    constexpr bool check_version(char const(&base)[BaseSize], char const(&component)[ComponentSize]) noexcept
    {
        if constexpr (BaseSize != ComponentSize)
        {
            return false;
        }

        for (size_t i = 0; i != BaseSize - 1; ++i)
        {
            if (base[i] != component[i])
            {
                return false;
            }
        }

        return true;
    }
}
