
namespace winrt::impl
{
#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4458) // declaration hides class member (okay because we do not use named members of base class)
#endif

    struct implements_delegate_base
    {
        WINRT_IMPL_NOINLINE std::uint32_t increment_reference() noexcept
        {
            return ++m_references;
        }

        WINRT_IMPL_NOINLINE std::uint32_t decrement_reference() noexcept
        {
            return --m_references;
        }

        WINRT_IMPL_NOINLINE std::uint32_t query_interface(guid const& id, void** result, unknown_abi* derivedAbiPtr, guid const& derivedId) noexcept
        {
            if (id == derivedId || is_guid_of<Windows::Foundation::IUnknown>(id) || is_guid_of<IAgileObject>(id))
            {
                *result = derivedAbiPtr;
                increment_reference();
                return 0;
            }

            if (is_guid_of<IMarshal>(id))
            {
                return make_marshaler(derivedAbiPtr, result);
            }

            *result = nullptr;
            return error_no_interface;
        }

    private:
        atomic_ref_count m_references{ 1 };
    };

    template <typename T, typename H>
    struct implements_delegate : abi_t<T>, implements_delegate_base, H, update_module_lock
    {
        implements_delegate(H&& handler) : H(std::forward<H>(handler))
        {
        }

        std::int32_t __stdcall QueryInterface(guid const& id, void** result) noexcept final
        {
            return query_interface(id, result, static_cast<abi_t<T>*>(this), guid_of<T>());
        }

        std::uint32_t __stdcall AddRef() noexcept final
        {
            return increment_reference();
        }

        std::uint32_t __stdcall Release() noexcept final
        {
            auto const remaining = decrement_reference();

            if (remaining == 0)
            {
                delete static_cast<delegate<T, H>*>(this);
            }

            return remaining;
        }
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

            const auto id = guid_of<T>();
            com_ptr<IAgileReference> ref;
            get_agile_reference(id, get_abi(delegate), ref.put_void());

            if (ref)
            {
                return [ref = std::move(ref), id](auto&& ... args)
                {
                    T delegate;
                    ref->Resolve(id, put_abi(delegate));
                    return delegate(args...);
                };
            }

            return delegate;
        }
    }

    template <typename R, typename... Args>
    struct WINRT_IMPL_ABI_DECL variadic_delegate_abi : unknown_abi
    {
        virtual R invoke(Args const& ...) = 0;
    };

    template <typename H, typename R, typename... Args>
    struct variadic_delegate final : variadic_delegate_abi<R, Args...>, implements_delegate_base, H, update_module_lock
    {
        variadic_delegate(H&& handler) : H(std::forward<H>(handler))
        {
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

        std::int32_t __stdcall QueryInterface(guid const& id, void** result) noexcept final
        {
            return query_interface(id, result, static_cast<unknown_abi*>(this), guid_of<Windows::Foundation::IUnknown>());
        }

        std::uint32_t __stdcall AddRef() noexcept final
        {
            return increment_reference();
        }

        std::uint32_t __stdcall Release() noexcept final
        {
            auto const remaining = decrement_reference();

            if (remaining == 0)
            {
                delete this;
            }

            return remaining;
        }
    };

    template <typename R, typename... Args>
    struct WINRT_IMPL_EMPTY_BASES delegate_base : Windows::Foundation::IUnknown
    {
        delegate_base(std::nullptr_t = nullptr) noexcept {}
        delegate_base(void* ptr, take_ownership_from_abi_t) noexcept : IUnknown(ptr, take_ownership_from_abi) {}

        template <typename L>
        delegate_base(L handler) :
            delegate_base(make(std::forward<L>(handler)))
        {}

        template <typename F> delegate_base(F* handler) :
            delegate_base([=](auto&& ... args) { return handler(args...); })
        {}

        template <typename O, typename M> delegate_base(O* object, M method) :
            delegate_base([=](auto&& ... args) { return ((*object).*(method))(args...); })
        {}

        template <typename O, typename M> delegate_base(com_ptr<O>&& object, M method) :
            delegate_base([o = std::move(object), method](auto&& ... args) { return ((*o).*(method))(args...); })
        {
        }

        template <typename O, typename LM> delegate_base(winrt::weak_ref<O>&& object, LM&& lambda_or_method) :
            delegate_base([o = std::move(object), lm = std::forward<LM>(lambda_or_method)](auto&&... args) { if (auto s = o.get()) {
            if constexpr (std::is_member_function_pointer_v<LM>) ((*s).*(lm))(args...);
            else lm(args...);
        }})
        {
        }

        template <typename O, typename M> delegate_base(std::shared_ptr<O>&& object, M method) :
            delegate_base([o = std::move(object), method](auto&& ... args) { return ((*o).*(method))(args...); })
        {
        }

        template <typename O, typename LM> delegate_base(std::weak_ptr<O>&& object, LM&& lambda_or_method) :
            delegate_base([o = std::move(object), lm = std::forward<LM>(lambda_or_method)](auto&&... args) { if (auto s = o.lock()) {
                if constexpr (std::is_member_function_pointer_v<LM>) ((*s).*(lm))(args...);
                else lm(args...);
        }})
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

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
}

WINRT_EXPORT namespace winrt
{
    template <typename... Args>
    struct WINRT_IMPL_EMPTY_BASES delegate : impl::delegate_base<void, Args...>
    {
        using impl::delegate_base<void, Args...>::delegate_base;
    };

    template <typename R, typename... Args>
    struct WINRT_IMPL_EMPTY_BASES delegate<R(Args...)> : impl::delegate_base<R, Args...>
    {
        using impl::delegate_base<R, Args...>::delegate_base;
    };
}
