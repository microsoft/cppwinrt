
#if defined(_MSC_VER)
#define WINRT_IMPL_RETURNADDRESS() _ReturnAddress()
#elif defined(__GNUC__)
#define WINRT_IMPL_RETURNADDRESS() __builtin_extract_return_addr(__builtin_return_address(0))
#else
#define WINRT_IMPL_RETURNADDRESS() nullptr
#endif

namespace winrt::impl
{
    struct heap_traits
    {
        using type = wchar_t*;

        static void close(type value) noexcept
        {
            WINRT_VERIFY(WINRT_IMPL_HeapFree(WINRT_IMPL_GetProcessHeap(), 0, value));
        }

        static constexpr type invalid() noexcept
        {
            return nullptr;
        }
    };

    struct bstr_traits
    {
        using type = wchar_t*;

        static void close(type value) noexcept
        {
            WINRT_IMPL_SysFreeString(value);
        }

        static constexpr type invalid() noexcept
        {
            return nullptr;
        }
    };

    using bstr_handle = handle_type<bstr_traits>;

    inline hstring trim_hresult_message(wchar_t const* const message, uint32_t size) noexcept
    {
        wchar_t const* back = message + size - 1;

        while (size&& iswspace(*back))
        {
            --size;
            --back;
        }

        return { message, size };
    }

    inline hstring message_from_hresult(hresult code) noexcept
    {
        handle_type<impl::heap_traits> message;

        uint32_t const size = WINRT_IMPL_FormatMessageW(0x00001300, // FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS
            nullptr,
            code,
            0x00000400, // MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT)
            reinterpret_cast<wchar_t*>(message.put()),
            0,
            nullptr);

        return trim_hresult_message(message.get(), size);
    }

    constexpr int32_t hresult_from_win32(uint32_t const x) noexcept
    {
        return (int32_t)(x) <= 0 ? (int32_t)(x) : (int32_t)(((x) & 0x0000FFFF) | (7 << 16) | 0x80000000);
    }

    constexpr int32_t hresult_from_nt(uint32_t const x) noexcept
    {
        return ((int32_t)((x) | 0x10000000));
    }

    struct error_info_fallback final : IErrorInfo, IRestrictedErrorInfo, update_module_lock
    {
        error_info_fallback(int32_t code, void* message) noexcept :
            m_code(code),
            m_message(message ? *reinterpret_cast<winrt::hstring*>(&message) : message_from_hresult(code))
        {
        }

        int32_t __stdcall QueryInterface(guid const& id, void** object) noexcept final
        {
            if (is_guid_of<IRestrictedErrorInfo>(id) || is_guid_of<Windows::Foundation::IUnknown>(id) || is_guid_of<IAgileObject>(id))
            {
                *object = static_cast<IRestrictedErrorInfo*>(this);
                AddRef();
                return 0;
            }

            if (is_guid_of<IErrorInfo>(id))
            {
                *object = static_cast<IErrorInfo*>(this);
                AddRef();
                return 0;
            }

            *object = nullptr;
            return error_no_interface;
        }

        uint32_t __stdcall AddRef() noexcept final
        {
            return ++m_references;
        }

        uint32_t __stdcall Release() noexcept final
        {
            auto const remaining = --m_references;

            if (remaining == 0)
            {
                delete this;
            }

            return remaining;
        }

        int32_t __stdcall GetGUID(guid* value) noexcept final
        {
            *value = {};
            return 0;
        }

        int32_t __stdcall GetSource(bstr* value) noexcept final
        {
            *value = nullptr;
            return 0;
        }

        int32_t __stdcall GetDescription(bstr* value) noexcept final
        {
            *value = WINRT_IMPL_SysAllocString(m_message.c_str());
            return *value ? error_ok : error_bad_alloc;
        }

        int32_t __stdcall GetHelpFile(bstr* value) noexcept final
        {
            *value = nullptr;
            return 0;
        }

        int32_t __stdcall GetHelpContext(uint32_t* value) noexcept final
        {
            *value = 0;
            return 0;
        }

        int32_t __stdcall GetErrorDetails(bstr* fallback, int32_t* error, bstr* message, bstr* capability) noexcept final
        {
            *fallback = nullptr;
            *error = m_code;
            *capability = nullptr;
            *message = WINRT_IMPL_SysAllocString(m_message.c_str());
            return *message ? error_ok : error_bad_alloc;
        }

        int32_t __stdcall GetReference(bstr* value) noexcept final
        {
            *value = nullptr;
            return 0;
        }

    private:

        hresult const m_code;
        hstring const m_message;
        atomic_ref_count m_references{ 1 };
    };

    [[noreturn]] inline void __stdcall fallback_RoFailFastWithErrorContext(int32_t) noexcept
    {
        abort();
    }
}

WINRT_EXPORT namespace winrt
{
    struct hresult_error
    {
        using from_abi_t = take_ownership_from_abi_t;
        static constexpr auto from_abi{ take_ownership_from_abi };

        hresult_error() noexcept = default;
        hresult_error(hresult_error&&) = default;
        hresult_error& operator=(hresult_error&&) = default;

        hresult_error(hresult_error const& other) noexcept :
            m_code(other.m_code),
            m_info(other.m_info)
        {
        }

        hresult_error& operator=(hresult_error const& other) noexcept
        {
            m_code = other.m_code;
            m_info = other.m_info;
            return *this;
        }

        explicit hresult_error(hresult const code WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept : m_code(verify_error(code))
        {
            originate(code, nullptr WINRT_IMPL_SOURCE_LOCATION_FORWARD);
        }

        hresult_error(hresult const code, param::hstring const& message WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept : m_code(verify_error(code))
        {
            originate(code, get_abi(message) WINRT_IMPL_SOURCE_LOCATION_FORWARD);
        }

        hresult_error(hresult const code, take_ownership_from_abi_t WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept : m_code(verify_error(code))
        {
            com_ptr<impl::IErrorInfo> info;
            WINRT_IMPL_GetErrorInfo(0, info.put_void());

            if ((m_info = info.try_as<impl::IRestrictedErrorInfo>()))
            {
                WINRT_VERIFY_(0, m_info->GetReference(m_debug_reference.put()));

                if (auto info2 = m_info.try_as<impl::ILanguageExceptionErrorInfo2>())
                {
                    WINRT_VERIFY_(0, info2->CapturePropagationContext(nullptr));
                }
            }
            else
            {
                impl::bstr_handle legacy;

                if (info)
                {
                    info->GetDescription(legacy.put());
                }

                hstring message;

                if (legacy)
                {
                    message = impl::trim_hresult_message(legacy.get(), WINRT_IMPL_SysStringLen(legacy.get()));
                }

                originate(code, get_abi(message) WINRT_IMPL_SOURCE_LOCATION_FORWARD);
            }
        }

        hresult code() const noexcept
        {
            return m_code;
        }

        hstring message() const noexcept
        {
            if (m_info)
            {
                int32_t code{};
                impl::bstr_handle fallback;
                impl::bstr_handle message;
                impl::bstr_handle unused;

                if (0 == m_info->GetErrorDetails(fallback.put(), &code, message.put(), unused.put()))
                {
                    if (code == m_code)
                    {
                        if (message)
                        {
                            return impl::trim_hresult_message(message.get(), WINRT_IMPL_SysStringLen(message.get()));
                        }
                        else
                        {
                            return impl::trim_hresult_message(fallback.get(), WINRT_IMPL_SysStringLen(fallback.get()));
                        }
                    }
                }
            }

            return impl::message_from_hresult(m_code);
        }

        template <typename To>
        auto try_as() const noexcept
        {
            return m_info.try_as<To>();
        }

        hresult to_abi() const noexcept
        {
            if (m_info)
            {
                WINRT_IMPL_SetErrorInfo(0, m_info.try_as<impl::IErrorInfo>().get());
            }

            return m_code;
        }

    private:

        static int32_t __stdcall fallback_RoOriginateLanguageException(int32_t error, void* message, void*) noexcept
        {
            com_ptr<impl::IErrorInfo> info(new (std::nothrow) impl::error_info_fallback(error, message), take_ownership_from_abi);
            WINRT_VERIFY_(0, WINRT_IMPL_SetErrorInfo(0, info.get()));
            return 1;
        }

        void originate(hresult const code, void* message WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept
        {
            static int32_t(__stdcall* handler)(int32_t error, void* message, void* exception) noexcept;
            impl::load_runtime_function(L"combase.dll", "RoOriginateLanguageException", handler, fallback_RoOriginateLanguageException);
            WINRT_VERIFY(handler(code, message, nullptr));

            // This is an extension point that can be filled in by other libraries (such as WIL) to get call outs when errors are
            // originated.  This is intended for logging purposes.  When possible include the std::source_information so that accurate
            // information is available on the caller who generated the error.
            if (winrt_throw_hresult_handler)
            {
#ifdef __cpp_lib_source_location
                winrt_throw_hresult_handler(sourceInformation.line(), sourceInformation.file_name(), sourceInformation.function_name(), WINRT_IMPL_RETURNADDRESS(), code);
#else
                winrt_throw_hresult_handler(0, nullptr, nullptr, WINRT_IMPL_RETURNADDRESS(), code);
#endif
            }

            com_ptr<impl::IErrorInfo> info;
            WINRT_VERIFY_(0, WINRT_IMPL_GetErrorInfo(0, info.put_void()));
            WINRT_VERIFY(info.try_as(m_info));
        }

        static hresult verify_error(hresult const code) noexcept
        {
            WINRT_ASSERT(code < 0);
            return code;
        }


#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

        impl::bstr_handle m_debug_reference;
        uint32_t m_debug_magic{ 0xAABBCCDD };
        hresult m_code{ impl::error_fail };
        com_ptr<impl::IRestrictedErrorInfo> m_info;

#ifdef __clang__
#pragma clang diagnostic pop
#endif
    };

    struct hresult_access_denied : hresult_error
    {
        hresult_access_denied(WINRT_IMPL_SOURCE_LOCATION_ARGS_SINGLE_PARAM) noexcept : hresult_error(impl::error_access_denied WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
        hresult_access_denied(param::hstring const& message WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept : hresult_error(impl::error_access_denied, message WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
        hresult_access_denied(take_ownership_from_abi_t WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept : hresult_error(impl::error_access_denied, take_ownership_from_abi WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
    };

    struct hresult_wrong_thread : hresult_error
    {
        hresult_wrong_thread(WINRT_IMPL_SOURCE_LOCATION_ARGS_SINGLE_PARAM) noexcept : hresult_error(impl::error_wrong_thread WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
        hresult_wrong_thread(param::hstring const& message WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept : hresult_error(impl::error_wrong_thread, message WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
        hresult_wrong_thread(take_ownership_from_abi_t WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept : hresult_error(impl::error_wrong_thread, take_ownership_from_abi WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
    };

    struct hresult_not_implemented : hresult_error
    {
        hresult_not_implemented(WINRT_IMPL_SOURCE_LOCATION_ARGS_SINGLE_PARAM) noexcept : hresult_error(impl::error_not_implemented WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
        hresult_not_implemented(param::hstring const& message WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept : hresult_error(impl::error_not_implemented, message WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
        hresult_not_implemented(take_ownership_from_abi_t WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept : hresult_error(impl::error_not_implemented, take_ownership_from_abi WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
    };

    struct hresult_invalid_argument : hresult_error
    {
        hresult_invalid_argument(WINRT_IMPL_SOURCE_LOCATION_ARGS_SINGLE_PARAM) noexcept : hresult_error(impl::error_invalid_argument WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
        hresult_invalid_argument(param::hstring const& message WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept : hresult_error(impl::error_invalid_argument, message WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
        hresult_invalid_argument(take_ownership_from_abi_t WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept : hresult_error(impl::error_invalid_argument, take_ownership_from_abi WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
    };

    struct hresult_out_of_bounds : hresult_error
    {
        hresult_out_of_bounds(WINRT_IMPL_SOURCE_LOCATION_ARGS_SINGLE_PARAM) noexcept : hresult_error(impl::error_out_of_bounds WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
        hresult_out_of_bounds(param::hstring const& message WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept : hresult_error(impl::error_out_of_bounds, message WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
        hresult_out_of_bounds(take_ownership_from_abi_t WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept : hresult_error(impl::error_out_of_bounds, take_ownership_from_abi WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
    };

    struct hresult_no_interface : hresult_error
    {
        hresult_no_interface(WINRT_IMPL_SOURCE_LOCATION_ARGS_SINGLE_PARAM) noexcept : hresult_error(impl::error_no_interface WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
        hresult_no_interface(param::hstring const& message WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept : hresult_error(impl::error_no_interface, message WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
        hresult_no_interface(take_ownership_from_abi_t WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept : hresult_error(impl::error_no_interface, take_ownership_from_abi WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
    };

    struct hresult_class_not_available : hresult_error
    {
        hresult_class_not_available(WINRT_IMPL_SOURCE_LOCATION_ARGS_SINGLE_PARAM) noexcept : hresult_error(impl::error_class_not_available WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
        hresult_class_not_available(param::hstring const& message WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept : hresult_error(impl::error_class_not_available, message WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
        hresult_class_not_available(take_ownership_from_abi_t WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept : hresult_error(impl::error_class_not_available, take_ownership_from_abi WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
    };

    struct hresult_class_not_registered : hresult_error
    {
        hresult_class_not_registered(WINRT_IMPL_SOURCE_LOCATION_ARGS_SINGLE_PARAM) noexcept : hresult_error(impl::error_class_not_registered WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
        hresult_class_not_registered(param::hstring const& message WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept : hresult_error(impl::error_class_not_registered, message WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
        hresult_class_not_registered(take_ownership_from_abi_t WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept : hresult_error(impl::error_class_not_registered, take_ownership_from_abi WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
    };

    struct hresult_changed_state : hresult_error
    {
        hresult_changed_state(WINRT_IMPL_SOURCE_LOCATION_ARGS_SINGLE_PARAM) noexcept : hresult_error(impl::error_changed_state WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
        hresult_changed_state(param::hstring const& message WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept : hresult_error(impl::error_changed_state, message WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
        hresult_changed_state(take_ownership_from_abi_t WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept : hresult_error(impl::error_changed_state, take_ownership_from_abi WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
    };

    struct hresult_illegal_method_call : hresult_error
    {
        hresult_illegal_method_call(WINRT_IMPL_SOURCE_LOCATION_ARGS_SINGLE_PARAM) noexcept : hresult_error(impl::error_illegal_method_call WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
        hresult_illegal_method_call(param::hstring const& message WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept : hresult_error(impl::error_illegal_method_call, message WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
        hresult_illegal_method_call(take_ownership_from_abi_t WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept : hresult_error(impl::error_illegal_method_call, take_ownership_from_abi WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
    };

    struct hresult_illegal_state_change : hresult_error
    {
        hresult_illegal_state_change(WINRT_IMPL_SOURCE_LOCATION_ARGS_SINGLE_PARAM) noexcept : hresult_error(impl::error_illegal_state_change WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
        hresult_illegal_state_change(param::hstring const& message WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept : hresult_error(impl::error_illegal_state_change, message WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
        hresult_illegal_state_change(take_ownership_from_abi_t WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept : hresult_error(impl::error_illegal_state_change, take_ownership_from_abi WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
    };

    struct hresult_illegal_delegate_assignment : hresult_error
    {
        hresult_illegal_delegate_assignment(WINRT_IMPL_SOURCE_LOCATION_ARGS_SINGLE_PARAM) noexcept : hresult_error(impl::error_illegal_delegate_assignment WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
        hresult_illegal_delegate_assignment(param::hstring const& message WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept : hresult_error(impl::error_illegal_delegate_assignment, message WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
        hresult_illegal_delegate_assignment(take_ownership_from_abi_t WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept : hresult_error(impl::error_illegal_delegate_assignment, take_ownership_from_abi WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
    };

    struct hresult_canceled : hresult_error
    {
        hresult_canceled(WINRT_IMPL_SOURCE_LOCATION_ARGS_SINGLE_PARAM) noexcept : hresult_error(impl::error_canceled WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
        hresult_canceled(param::hstring const& message WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept : hresult_error(impl::error_canceled, message WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
        hresult_canceled(take_ownership_from_abi_t WINRT_IMPL_SOURCE_LOCATION_ARGS) noexcept : hresult_error(impl::error_canceled, take_ownership_from_abi WINRT_IMPL_SOURCE_LOCATION_FORWARD) {}
    };

    [[noreturn]] inline WINRT_IMPL_NOINLINE void throw_hresult(hresult const result WINRT_IMPL_SOURCE_LOCATION_ARGS)
    {
        if (winrt_throw_hresult_handler)
        {
#ifdef __cpp_lib_source_location
            winrt_throw_hresult_handler(sourceInformation.line(), sourceInformation.file_name(), sourceInformation.function_name(), WINRT_IMPL_RETURNADDRESS(), result);
#else
            winrt_throw_hresult_handler(0, nullptr, nullptr, WINRT_IMPL_RETURNADDRESS(), result);
#endif
        }

        if (result == impl::error_bad_alloc)
        {
            throw std::bad_alloc();
        }

        if (result == impl::error_access_denied)
        {
            throw hresult_access_denied(take_ownership_from_abi WINRT_IMPL_SOURCE_LOCATION_FORWARD);
        }

        if (result == impl::error_wrong_thread)
        {
            throw hresult_wrong_thread(take_ownership_from_abi WINRT_IMPL_SOURCE_LOCATION_FORWARD);
        }

        if (result == impl::error_not_implemented)
        {
            throw hresult_not_implemented(take_ownership_from_abi WINRT_IMPL_SOURCE_LOCATION_FORWARD);
        }

        if (result == impl::error_invalid_argument)
        {
            throw hresult_invalid_argument(take_ownership_from_abi WINRT_IMPL_SOURCE_LOCATION_FORWARD);
        }

        if (result == impl::error_out_of_bounds)
        {
            throw hresult_out_of_bounds(take_ownership_from_abi WINRT_IMPL_SOURCE_LOCATION_FORWARD);
        }

        if (result == impl::error_no_interface)
        {
            throw hresult_no_interface(take_ownership_from_abi WINRT_IMPL_SOURCE_LOCATION_FORWARD);
        }

        if (result == impl::error_class_not_available)
        {
            throw hresult_class_not_available(take_ownership_from_abi WINRT_IMPL_SOURCE_LOCATION_FORWARD);
        }

        if (result == impl::error_class_not_registered)
        {
            throw hresult_class_not_registered(take_ownership_from_abi WINRT_IMPL_SOURCE_LOCATION_FORWARD);
        }

        if (result == impl::error_changed_state)
        {
            throw hresult_changed_state(take_ownership_from_abi WINRT_IMPL_SOURCE_LOCATION_FORWARD);
        }

        if (result == impl::error_illegal_method_call)
        {
            throw hresult_illegal_method_call(take_ownership_from_abi WINRT_IMPL_SOURCE_LOCATION_FORWARD);
        }

        if (result == impl::error_illegal_state_change)
        {
            throw hresult_illegal_state_change(take_ownership_from_abi WINRT_IMPL_SOURCE_LOCATION_FORWARD);
        }

        if (result == impl::error_illegal_delegate_assignment)
        {
            throw hresult_illegal_delegate_assignment(take_ownership_from_abi WINRT_IMPL_SOURCE_LOCATION_FORWARD);
        }

        if (result == impl::error_canceled)
        {
            throw hresult_canceled(take_ownership_from_abi WINRT_IMPL_SOURCE_LOCATION_FORWARD);
        }

        throw hresult_error(result, take_ownership_from_abi WINRT_IMPL_SOURCE_LOCATION_FORWARD);
    }

    inline WINRT_IMPL_NOINLINE hresult to_hresult() noexcept
    {
        if (winrt_to_hresult_handler)
        {
            return winrt_to_hresult_handler(WINRT_IMPL_RETURNADDRESS());
        }

        try
        {
            throw;
        }
        catch (hresult_error const& e)
        {
            return e.to_abi();
        }
        catch (std::bad_alloc const&)
        {
            return impl::error_bad_alloc;
        }
        catch (std::out_of_range const& e)
        {
            return hresult_out_of_bounds(to_hstring(e.what())).to_abi();
        }
        catch (std::invalid_argument const& e)
        {
            return hresult_invalid_argument(to_hstring(e.what())).to_abi();
        }
        catch (std::exception const& e)
        {
            return hresult_error(impl::error_fail, to_hstring(e.what())).to_abi();
        }
    }

    inline WINRT_IMPL_NOINLINE hstring to_message()
    {
        if (winrt_to_message_handler)
        {
            return winrt_to_message_handler(WINRT_IMPL_RETURNADDRESS());
        }

        try
        {
            throw;
        }
        catch (hresult_error const& e)
        {
            return e.message();
        }
        catch (std::exception const& ex)
        {
            return to_hstring(ex.what());
        }
        catch (...)
        {
            abort();
        }
    }

    [[noreturn]] inline void throw_last_error(WINRT_IMPL_SOURCE_LOCATION_ARGS_SINGLE_PARAM)
    {
        throw_hresult(impl::hresult_from_win32(WINRT_IMPL_GetLastError()) WINRT_IMPL_SOURCE_LOCATION_FORWARD);
    }

    inline hresult check_hresult(hresult const result WINRT_IMPL_SOURCE_LOCATION_ARGS_NO_DEFAULT)
    {
        if (result < 0)
        {
            throw_hresult(result WINRT_IMPL_SOURCE_LOCATION_FORWARD);
        }
        return result;
    }

    template<typename T>
    void check_nt(T result WINRT_IMPL_SOURCE_LOCATION_ARGS)
    {
        if (result != 0)
        {
            throw_hresult(impl::hresult_from_nt(result) WINRT_IMPL_SOURCE_LOCATION_FORWARD);
        }
    }

    template<typename T>
    void check_win32(T result WINRT_IMPL_SOURCE_LOCATION_ARGS)
    {
        if (result != 0)
        {
            throw_hresult(impl::hresult_from_win32(result) WINRT_IMPL_SOURCE_LOCATION_FORWARD);
        }
    }

    template<typename T>
    T check_bool(T result WINRT_IMPL_SOURCE_LOCATION_ARGS)
    {
        if (!result)
        {
            winrt::throw_last_error(WINRT_IMPL_SOURCE_LOCATION_FORWARD_SINGLE_PARAM);
        }
        
        return result;
    }

    template<typename T>
    T* check_pointer(T* pointer WINRT_IMPL_SOURCE_LOCATION_ARGS)
    {
        if (!pointer)
        {
            throw_last_error(WINRT_IMPL_SOURCE_LOCATION_FORWARD_SINGLE_PARAM);
        }

        return pointer;
    }

    [[noreturn]] inline void terminate() noexcept
    {
        static void(__stdcall * handler)(int32_t) noexcept;
        impl::load_runtime_function(L"combase.dll", "RoFailFastWithErrorContext", handler, impl::fallback_RoFailFastWithErrorContext);
        handler(to_hresult());
        abort();
    }
}

namespace winrt::impl
{
    inline hresult check_hresult_allow_bounds(hresult const result WINRT_IMPL_SOURCE_LOCATION_ARGS)
    {
        if (result != impl::error_out_of_bounds && result != impl::error_fail && result != impl::error_file_not_found)
        {
            check_hresult(result WINRT_IMPL_SOURCE_LOCATION_FORWARD);
        }
        return result;
    }
}

#undef WINRT_IMPL_RETURNADDRESS
