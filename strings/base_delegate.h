
WINRT_EXPORT namespace winrt
{
#if defined (WINRT_NO_MODULE_LOCK)

    // Defining WINRT_NO_MODULE_LOCK is appropriate for apps (executables) that don't implement something like DllCanUnloadNow
    // and can thus avoid the synchronization overhead imposed by the default module lock.

    constexpr auto get_module_lock() noexcept
    {
        struct lock
        {
            constexpr uint32_t operator++() noexcept
            {
                return 1;
            }

            constexpr uint32_t operator--() noexcept
            {
                return 0;
            }
        };

        return lock{};
    }

#elif defined (WINRT_CUSTOM_MODULE_LOCK)

    // When WINRT_CUSTOM_MODULE_LOCK is defined, you must provide an implementation of winrt::get_module_lock()
    // that returns an object that implements operator++ and operator--.

#else

    // This is the default implementation for use with DllCanUnloadNow.

    inline impl::atomic_ref_count& get_module_lock() noexcept
    {
        static impl::atomic_ref_count s_lock;
        return s_lock;
    }

#endif
}

namespace winrt::impl
{
    template <typename T, typename H>
    struct implements_delegate : abi_t<T>, H
    {
        implements_delegate(H&& handler) : H(std::forward<H>(handler))
        {
            ++get_module_lock();
        }

        ~implements_delegate() noexcept
        {
            --get_module_lock();
        }

        int32_t __stdcall QueryInterface(guid const& id, void** result) noexcept final
        {
            if (is_guid_of<T>(id) || is_guid_of<Windows::Foundation::IUnknown>(id) || is_guid_of<IAgileObject>(id))
            {
                *result = static_cast<abi_t<T>*>(this);
                AddRef();
                return 0;
            }

            if (is_guid_of<IMarshal>(id))
            {
                return make_marshaler(this, result);
            }

            *result = nullptr;
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
                delete static_cast<delegate<T, H>*>(this);
            }

            return remaining;
        }

    private:

        atomic_ref_count m_references{ 1 };
    };

    template <typename T, typename H>
    T make_delegate(H&& handler)
    {
        return { static_cast<void*>(static_cast<abi_t<T>*>(new delegate<T, H>(std::forward<H>(handler)))), take_ownership_from_abi };
    }

    template <typename T>
    T make_agile_delegate(T const& delegate) noexcept
    {
        if constexpr (!has_category_v<T>)
        {
            return delegate;
        }
        else
        {
            if (delegate.template try_as<IAgileObject>())
            {
                return delegate;
            }

            com_ptr<IAgileReference> ref;
            WINRT_RoGetAgileReference(0, guid_of<T>(), get_abi(delegate), ref.put_void());

            if (ref)
            {
                return [ref = std::move(ref)](auto&& ... args)
                {
                    T delegate;
                    ref->Resolve(guid_of<T>(), put_abi(delegate));
                    return delegate(args...);
                };
            }

            return delegate;
        }
    }

    template <typename R, typename... Args>
    struct __declspec(novtable) variadic_delegate_abi : unknown_abi
    {
        virtual R invoke(Args const& ...) = 0;
    };

    template <typename H, typename R, typename... Args>
    struct variadic_delegate final : variadic_delegate_abi<R, Args...>, H
    {
        variadic_delegate(H&& handler) : H(std::forward<H>(handler))
        {
            ++get_module_lock();
        }

        ~variadic_delegate() noexcept
        {
            --get_module_lock();
        }

        R invoke(Args const& ... args) final
        {
            if constexpr (std::is_void_v<R>)
            {
                (*this)(args...);
            }
            else
            {
                return (*this)(args...);
            }
        }

        int32_t __stdcall QueryInterface(guid const& id, void** result) noexcept final
        {
            if (is_guid_of<Windows::Foundation::IUnknown>(id) || is_guid_of<IAgileObject>(id))
            {
                *result = static_cast<unknown_abi*>(this);
                AddRef();
                return 0;
            }

            *result = nullptr;
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

    private:

        atomic_ref_count m_references{ 1 };
    };

    template <typename R, typename... Args>
    struct __declspec(empty_bases) delegate_base : Windows::Foundation::IUnknown
    {
        delegate_base(std::nullptr_t = nullptr) noexcept {}
        delegate_base(void* ptr, take_ownership_from_abi_t) noexcept : IUnknown(ptr, take_ownership_from_abi) {}

        template <typename L>
        delegate_base(L handler) :
            delegate_base(make(std::forward<L>(handler)))
        {}

        template <typename F> delegate_base(F* handler) :
            delegate_base([=](auto&& ... args) { handler(args...); })
        {}

        template <typename O, typename M> delegate_base(O* object, M method) :
            delegate_base([=](auto&& ... args) { ((*object).*(method))(args...); })
        {}

        template <typename O, typename M> delegate_base(com_ptr<O>&& object, M method) :
            delegate_base([o = std::move(object), method](auto&& ... args) { return ((*o).*(method))(args...); })
        {
        }

        template <typename O, typename M> delegate_base(winrt::weak_ref<O>&& object, M method) :
            delegate_base([o = std::move(object), method](auto&& ... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
        {
        }

        auto operator()(Args const& ... args) const
        {
            return (*(variadic_delegate_abi<R, Args...> * *)this)->invoke(args...);
        }

    private:

        template <typename H>
        static delegate_base<R, Args...> make(H&& handler)
        {
            return { static_cast<void*>(new variadic_delegate<H, R, Args...>(std::forward<H>(handler))), take_ownership_from_abi };
        }
    };
}

WINRT_EXPORT namespace winrt
{
    template <typename... Args>
    struct __declspec(empty_bases) delegate : impl::delegate_base<void, Args...>
    {
        using impl::delegate_base<void, Args...>::delegate_base;
    };

    template <typename R, typename... Args>
    struct __declspec(empty_bases) delegate<R(Args...)> : impl::delegate_base<R, Args...>
    {
        using impl::delegate_base<R, Args...>::delegate_base;
    };
}
