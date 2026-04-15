
#if defined(_DEBUG) && !defined(WINRT_NATVIS)
#define WINRT_NATVIS
#endif

#ifdef WINRT_NATVIS

namespace winrt::impl
{
    struct natvis
    {
        static auto __stdcall abi_val(void* object, wchar_t const * iid_str, int method)
        {
            union variant
            {
                bool b;
                wchar_t c;
                std::int8_t i1;
                std::int16_t i2;
                std::int32_t i4;
                std::int64_t i8;
                std::uint8_t u1;
                std::uint16_t u2;
                std::uint32_t u4;
                std::uint64_t u8;
                float r4;
                double r8;
                guid g;
                void* s;
                std::uint8_t v[1024];
            }
            value;
            value.s = 0;
            guid iid;
            if (WINRT_IMPL_IIDFromString(iid_str, &iid) == 0)
            {
                struct memory_basic_information
                {
                    void* base_address;
                    void* allocation_base;
                    std::uint32_t allocation_protect;
#ifdef _WIN64
                    std::uint32_t __alignment1;
#endif
                    std::uintptr_t region_size;
                    std::uint32_t state;
                    std::uint32_t protect;
                    std::uint32_t type;
#ifdef _WIN64
                    std::uint32_t __alignment2;
#endif
                };
                memory_basic_information info;
                // validate object pointer is readable
                if ((WINRT_IMPL_VirtualQuery(object, &info, sizeof(info)) != 0) && ((info.protect & 0xEE) != 0))
                {
                    inspectable_abi* pinsp;
                    if (((unknown_abi*)object)->QueryInterface(iid, reinterpret_cast<void**>(&pinsp)) == 0)
                    {
                        static const int IInspectable_vtbl_size = 6;
                        auto vtbl = *(void***)pinsp;
                        // validate vtbl pointer is readable
                        if ((WINRT_IMPL_VirtualQuery(vtbl, &info, sizeof(info)) != 0) && ((info.protect & 0xEE) != 0))
                        {
                            auto vfunc = vtbl[method + IInspectable_vtbl_size];
                            // validate method pointer is executable
                            if ((WINRT_IMPL_VirtualQuery(vfunc, &info, sizeof(info)) != 0) && ((info.protect & 0xF0) != 0))
                            {
                                typedef std::int32_t(__stdcall inspectable_abi:: * PropertyAccessor)(void*);
                                (pinsp->**(PropertyAccessor*)&vfunc)(&value);
                                pinsp->Release();
                            }
                        }
                    }
                }
            }
            return value;
        }

        static auto __stdcall get_val(winrt::Windows::Foundation::IInspectable* object, wchar_t const* iid_str, int method)
        {
            return abi_val(static_cast<unknown_abi*>(get_abi(*object)), iid_str, method);
        }
    };
}

extern "C"
__declspec(selectany)
decltype(winrt::impl::natvis::abi_val) & WINRT_abi_val = winrt::impl::natvis::abi_val;

extern "C"
__declspec(selectany)
decltype(winrt::impl::natvis::get_val) & WINRT_get_val = winrt::impl::natvis::get_val;

#ifdef _M_IX86
#pragma comment(linker, "/include:_WINRT_abi_val")
#pragma comment(linker, "/include:_WINRT_get_val")
#else
#pragma comment(linker, "/include:WINRT_abi_val")
#pragma comment(linker, "/include:WINRT_get_val")
#endif

#endif
