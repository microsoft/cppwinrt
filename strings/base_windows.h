
namespace winrt::impl
{
#ifdef WINRT_DIAGNOSTICS

    struct factory_diagnostics_info
    {
        bool is_agile{ true };
        uint32_t requests{ 0 };
    };

    struct diagnostics_info
    {
        std::map<std::wstring_view, uint32_t> queries;
        std::map<std::wstring_view, factory_diagnostics_info> factories;
    };

    struct diagnostics_cache
    {
        template <typename T>
        void add_query()
        {
            slim_lock_guard const guard(m_lock);
            ++m_info.queries[name_of<T>()];
        }

        template <typename T>
        void add_factory()
        {
            slim_lock_guard const guard(m_lock);
            factory_diagnostics_info& factory = m_info.factories[name_of<T>()];
            ++factory.requests;
        }

        template <typename T>
        void non_agile_factory()
        {
            slim_lock_guard const guard(m_lock);
            factory_diagnostics_info& factory = m_info.factories[name_of<T>()];
            factory.is_agile = false;
        }

        auto get()
        {
            slim_lock_guard const guard(m_lock);
            return m_info;
        }

        auto detach()
        {
            slim_lock_guard const guard(m_lock);
            return std::move(m_info);
        }

    private:

        slim_mutex m_lock;
        diagnostics_info m_info;
    };

    inline diagnostics_cache& get_diagnostics_info() noexcept
    {
        static diagnostics_cache info;
        return info;
    }

#endif

    template <typename T>
    using com_ref = std::conditional_t<std::is_base_of_v<Windows::Foundation::IUnknown, T>, T, com_ptr<T>>;

    template <typename T, std::enable_if_t<is_implements_v<T>, int> = 0>
    com_ref<T> wrap_as_result(void* result)
    {
        return { &static_cast<produce<T, typename default_interface<T>::type>*>(result)->shim(), take_ownership_from_abi };
    }

    template <typename T, std::enable_if_t<!is_implements_v<T>, int> = 0>
    com_ref<T> wrap_as_result(void* result)
    {
        return { result, take_ownership_from_abi };
    }

    template <typename To, typename From>
    com_ref<To> as(From* ptr)
    {
#ifdef WINRT_DIAGNOSTICS
        get_diagnostics_info().add_query<To>();
#endif

        if (!ptr)
        {
            return nullptr;
        }

        void* result{};
        check_hresult(ptr->QueryInterface(guid_of<To>(), &result));
        return wrap_as_result<To>(result);
    }

    template <typename To, typename From>
    com_ref<To> try_as(From* ptr) noexcept
    {
#ifdef WINRT_DIAGNOSTICS
        get_diagnostics_info().add_query<To>();
#endif

        if (!ptr)
        {
            return nullptr;
        }

        void* result{};
        ptr->QueryInterface(guid_of<To>(), &result);
        return wrap_as_result<To>(result);
    }
}

WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct IUnknown
    {
        IUnknown() noexcept = default;
        IUnknown(std::nullptr_t) noexcept {}
        void* operator new(size_t) = delete;

        IUnknown(void* ptr, take_ownership_from_abi_t) noexcept : m_ptr(static_cast<impl::unknown_abi*>(ptr))
        {
        }

        IUnknown(IUnknown const& other) noexcept : m_ptr(other.m_ptr)
        {
            add_ref();
        }

        IUnknown(IUnknown&& other) noexcept : m_ptr(std::exchange(other.m_ptr, {}))
        {
        }

        ~IUnknown() noexcept
        {
            release_ref();
        }

        IUnknown& operator=(IUnknown const& other) noexcept
        {
            if (this != &other)
            {
                release_ref();
                m_ptr = other.m_ptr;
                add_ref();
            }

            return*this;
        }

        IUnknown& operator=(IUnknown&& other) noexcept
        {
            if (this != &other)
            {
                release_ref();
                m_ptr = std::exchange(other.m_ptr, {});
            }

            return*this;
        }

        explicit operator bool() const noexcept
        {
            return nullptr != m_ptr;
        }

        IUnknown& operator=(std::nullptr_t) noexcept
        {
            release_ref();
            return*this;
        }

        template <typename To>
        auto as() const
        {
            return impl::as<To>(m_ptr);
        }

        template <typename To>
        auto try_as() const noexcept
        {
            return impl::try_as<To>(m_ptr);
        }

        template <typename To>
        void as(To& to) const
        {
            to = as<impl::wrapped_type_t<To>>();
        }

        template <typename To>
        bool try_as(To& to) const noexcept
        {
            to = try_as<impl::wrapped_type_t<To>>();
            return static_cast<bool>(to);
        }

        hresult as(guid const& id, void** result) const noexcept
        {
            return m_ptr->QueryInterface(id, result);
        }

        friend void swap(IUnknown& left, IUnknown& right) noexcept
        {
            std::swap(left.m_ptr, right.m_ptr);
        }

    private:

        void add_ref() const noexcept
        {
            if (m_ptr)
            {
                m_ptr->AddRef();
            }
        }

        void release_ref() noexcept
        {
            if (m_ptr)
            {
                unconditional_release_ref();
            }
        }

        __declspec(noinline) void unconditional_release_ref() noexcept
        {
            std::exchange(m_ptr, {})->Release();
        }

        impl::unknown_abi* m_ptr{};
    };
}

WINRT_EXPORT namespace winrt
{
    template <typename T, std::enable_if_t<!std::is_base_of_v<Windows::Foundation::IUnknown, T>, int> = 0>
    auto get_abi(T const& object) noexcept
    {
        return reinterpret_cast<impl::abi_t<T> const&>(object);
    }

    template <typename T, std::enable_if_t<!std::is_base_of_v<Windows::Foundation::IUnknown, T>, int> = 0>
    auto put_abi(T& object) noexcept
    {
        if constexpr (!std::is_trivially_destructible_v<T>)
        {
            object = {};
        }

        return reinterpret_cast<impl::abi_t<T>*>(&object);
    }

    template <typename T, typename V, std::enable_if_t<!std::is_base_of_v<Windows::Foundation::IUnknown, T>, int> = 0>
    void copy_from_abi(T& object, V&& value)
    {
        object = reinterpret_cast<T const&>(value);
    }

    template <typename T, typename V, std::enable_if_t<!std::is_base_of_v<Windows::Foundation::IUnknown, T>, int> = 0>
    void copy_to_abi(T const& object, V& value)
    {
        reinterpret_cast<T&>(value) = object;
    }

    template <typename T, std::enable_if_t<!std::is_base_of_v<Windows::Foundation::IUnknown, std::decay_t<T>> && !std::is_convertible_v<T, std::wstring_view>, int> = 0>
    auto detach_abi(T&& object)
    {
        impl::abi_t<T> result{};
        reinterpret_cast<T&>(result) = std::move(object);
        return result;
    }

    inline void* get_abi(Windows::Foundation::IUnknown const& object) noexcept
    {
        return *(void**)(&object);
    }

    inline void** put_abi(Windows::Foundation::IUnknown& object) noexcept
    {
        object = nullptr;
        return reinterpret_cast<void**>(&object);
    }

    inline void attach_abi(Windows::Foundation::IUnknown& object, void* value) noexcept
    {
        object = nullptr;
        *put_abi(object) = value;
    }

    inline void* detach_abi(Windows::Foundation::IUnknown& object) noexcept
    {
        void* temp = get_abi(object);
        *reinterpret_cast<void**>(&object) = nullptr;
        return temp;
    }

    inline void* detach_abi(Windows::Foundation::IUnknown&& object) noexcept
    {
        void* temp = get_abi(object);
        *reinterpret_cast<void**>(&object) = nullptr;
        return temp;
    }

    constexpr void* detach_abi(std::nullptr_t) noexcept
    {
        return nullptr;
    }

    inline void copy_from_abi(Windows::Foundation::IUnknown& object, void* value) noexcept
    {
        object = nullptr;

        if (value)
        {
            static_cast<impl::unknown_abi*>(value)->AddRef();
            *put_abi(object) = value;
        }
    }

    inline void copy_to_abi(Windows::Foundation::IUnknown const& object, void*& value) noexcept
    {
        WINRT_ASSERT(value == nullptr);
        value = get_abi(object);

        if (value)
        {
            static_cast<impl::unknown_abi*>(value)->AddRef();
        }
    }

#ifdef __IUnknown_INTERFACE_DEFINED__

    inline ::IUnknown* get_unknown(Windows::Foundation::IUnknown const& object) noexcept
    {
        return static_cast<::IUnknown*>(get_abi(object));
    }

#endif
}

WINRT_EXPORT namespace winrt::Windows::Foundation
{
    inline bool operator==(IUnknown const& left, IUnknown const& right) noexcept
    {
        if (get_abi(left) == get_abi(right))
        {
            return true;
        }
        if (!left || !right)
        {
            return false;
        }
        return get_abi(left.try_as<IUnknown>()) == get_abi(right.try_as<IUnknown>());
    }

    inline bool operator!=(IUnknown const& left, IUnknown const& right) noexcept
    {
        return !(left == right);
    }

    inline bool operator<(IUnknown const& left, IUnknown const& right) noexcept
    {
        if (get_abi(left) == get_abi(right))
        {
            return false;
        }
        if (!left || !right)
        {
            return get_abi(left) < get_abi(right);
        }
        return get_abi(left.try_as<IUnknown>()) < get_abi(right.try_as<IUnknown>());
    }

    inline bool operator>(IUnknown const& left, IUnknown const& right) noexcept
    {
        return right < left;
    }

    inline bool operator<=(IUnknown const& left, IUnknown const& right) noexcept
    {
        return !(right < left);
    }

    inline bool operator>=(IUnknown const& left, IUnknown const& right) noexcept
    {
        return !(left < right);
    }

    struct IInspectable : IUnknown
    {
        IInspectable(std::nullptr_t = nullptr) noexcept {}
        IInspectable(void* ptr, take_ownership_from_abi_t) noexcept : IUnknown(ptr, take_ownership_from_abi) {}
    };
}
