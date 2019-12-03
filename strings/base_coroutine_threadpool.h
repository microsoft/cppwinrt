
namespace winrt::impl
{
    inline void __stdcall resume_background_callback(void*, void* context) noexcept
    {
        std::experimental::coroutine_handle<>::from_address(context)();
    };

    inline auto resume_background(std::experimental::coroutine_handle<> handle)
    {
        if (!WINRT_TrySubmitThreadpoolCallback(resume_background_callback, handle.address(), nullptr))
        {
            throw_last_error();
        }
    }

    inline bool is_sta() noexcept
    {
        int32_t aptType;
        int32_t aptTypeQualifier;
        return (0 == WINRT_CoGetApartmentType(&aptType, &aptTypeQualifier)) && ((aptType == 0 /*APTTYPE_STA*/) || (aptType == 3 /*APTTYPE_MAINSTA*/));
    }

    inline auto sta_apartment_context()
    {
        return is_sta() ? capture<IContextCallback>(WINRT_CoGetObjectContext) : nullptr;
    }

    inline int32_t __stdcall resume_apartment_callback(com_callback_args* args) noexcept
    {
        std::experimental::coroutine_handle<>::from_address(args->data)();
        return 0;
    };

    inline auto resume_apartment(com_ptr<IContextCallback> const& sta_context, std::experimental::coroutine_handle<> handle)
    {
        if (sta_context)
        {
            com_callback_args args{};
            args.data = handle.address();

            check_hresult(sta_context->ContextCallback(resume_apartment_callback, &args, guid_of<ICallbackWithNoReentrancyToApplicationSTA>(), 5, nullptr));
        }
        else
        {
            if (is_sta())
            {
                resume_background(handle);
            }
            else
            {
                handle();
            }
        }
    }

    template <typename T>
    class has_awaitable_member
    {
        template <typename U, typename = decltype(std::declval<U>().await_ready())> static constexpr bool get_value(int) { return true; }
        template <typename> static constexpr bool get_value(...) { return false; }

    public:

        static constexpr bool value = get_value<T>(0);
    };

    template <typename T>
    class has_awaitable_free
    {
        template <typename U, typename = decltype(await_ready(std::declval<U>()))> static constexpr bool get_value(int) { return true; }
        template <typename> static constexpr bool get_value(...) { return false; }

    public:

        static constexpr bool value = get_value<T>(0);
    };

    template <typename T>
    struct free_await_adapter_impl
    {
        T&& awaitable;

        bool ready()
        {
            return await_ready(awaitable);
        }

        template <typename U>
        auto suspend(std::experimental::coroutine_handle<U> handle)
        {
            return await_suspend(awaitable, handle);
        }

        auto resume()
        {
            return await_resume(awaitable);
        }
    };

    template <typename T>
    struct free_await_adapter
    {
        T&& awaitable;

        bool await_ready()
        {
            return free_await_adapter_impl<T>{ static_cast<T&&>(awaitable) }.ready();
        }

        template <typename U>
        auto await_suspend(std::experimental::coroutine_handle<U> handle)
        {
            return free_await_adapter_impl<T>{ static_cast<T&&>(awaitable) }.suspend(handle);
        }

        auto await_resume()
        {
            return free_await_adapter_impl<T>{ static_cast<T&&>(awaitable) }.resume();
        }
    };

    template <typename T>
    struct member_await_adapter
    {
        T&& awaitable;

        bool await_ready()
        {
            return awaitable.await_ready();
        }

        template <typename U>
        auto await_suspend(std::experimental::coroutine_handle<U> handle)
        {
            return awaitable.await_suspend(handle);
        }

        auto await_resume()
        {
            return awaitable.await_resume();
        }
    };

    template <typename T>
    auto get_awaiter(T&& value) noexcept -> decltype(static_cast<T&&>(value).operator co_await())
    {
        return static_cast<T&&>(value).operator co_await();
    }

    template <typename T>
    auto get_awaiter(T&& value) noexcept -> decltype(operator co_await(static_cast<T&&>(value)))
    {
        return operator co_await(static_cast<T&&>(value));
    }

    template <typename T, std::enable_if_t<has_awaitable_member<T>::value, int> = 0>
    auto get_awaiter(T&& value) noexcept
    {
        return member_await_adapter<T>{ static_cast<T&&>(value) };
    }

    template <typename T, std::enable_if_t<has_awaitable_free<T>::value, int> = 0>
    auto get_awaiter(T&& value) noexcept
    {
        return free_await_adapter<T>{ static_cast<T&&>(value) };
    }

    template <typename T>
    struct notify_awaiter
    {
        decltype(get_awaiter(std::declval<T&&>())) awaitable;

        notify_awaiter(T&& awaitable) : awaitable(get_awaiter(static_cast<T&&>(awaitable)))
        {
        }

        bool await_ready()
        {
            if (winrt_suspend_handler)
            {
                winrt_suspend_handler(this);
            }

            return awaitable.await_ready();
        }

        template <typename U>
        auto await_suspend(std::experimental::coroutine_handle<U> handle)
        {
            return awaitable.await_suspend(handle);
        }

        auto await_resume()
        {
            if (winrt_resume_handler)
            {
                winrt_resume_handler(this);
            }

            return awaitable.await_resume();
        }
    };
}

WINRT_EXPORT namespace winrt
{
    [[nodiscard]] inline auto resume_background() noexcept
    {
        struct awaitable
        {
            bool await_ready() const noexcept
            {
                return false;
            }

            void await_resume() const noexcept
            {
            }

            void await_suspend(std::experimental::coroutine_handle<> handle) const
            {
                impl::resume_background(handle);
            }
        };

        return awaitable{};
    }

    template <typename T>
    [[nodiscard]] auto resume_background(T const& context) noexcept
    {
        struct awaitable
        {
            awaitable(T const& context) : m_context(context)
            {
            }

            bool await_ready() const noexcept
            {
                return false;
            }

            void await_resume() const noexcept
            {
            }

            void await_suspend(std::experimental::coroutine_handle<> resume)
            {
                m_resume = resume;

                if (!WINRT_TrySubmitThreadpoolCallback(callback, this, nullptr))
                {
                    throw_last_error();
                }
            }

        private:

            static void __stdcall callback(void*, void* context) noexcept
            {
                auto that = static_cast<awaitable*>(context);
                auto guard = that->m_context();
                that->m_resume();
            }

            T const& m_context;
            std::experimental::coroutine_handle<> m_resume{ nullptr };
        };

        return awaitable{ context };
    }

    struct apartment_context
    {
        bool await_ready() const noexcept
        {
            return false;
        }

        void await_resume() const noexcept
        {
        }

        void await_suspend(std::experimental::coroutine_handle<> handle) const
        {
            impl::resume_apartment(sta_context, handle);
        }

        com_ptr<impl::IContextCallback> sta_context = impl::sta_apartment_context();
    };

    [[nodiscard]] inline auto resume_after(Windows::Foundation::TimeSpan duration) noexcept
    {
        struct awaitable
        {
            explicit awaitable(Windows::Foundation::TimeSpan duration) noexcept :
                m_duration(duration)
            {
            }

            bool await_ready() const noexcept
            {
                return m_duration.count() <= 0;
            }

            void await_suspend(std::experimental::coroutine_handle<> handle)
            {
                m_timer.attach(check_pointer(WINRT_CreateThreadpoolTimer(callback, handle.address(), nullptr)));
                int64_t relative_count = -m_duration.count();
                WINRT_SetThreadpoolTimer(m_timer.get(), &relative_count, 0, 0);
            }

            void await_resume() const noexcept
            {
            }

        private:

            static void __stdcall callback(void*, void* context, void*) noexcept
            {
                std::experimental::coroutine_handle<>::from_address(context)();
            }

            struct timer_traits
            {
                using type = impl::ptp_timer;

                static void close(type value) noexcept
                {
                    WINRT_CloseThreadpoolTimer(value);
                }

                static constexpr type invalid() noexcept
                {
                    return nullptr;
                }
            };

            handle_type<timer_traits> m_timer;
            Windows::Foundation::TimeSpan m_duration;
        };

        return awaitable{ duration };
    }

#ifdef __cpp_coroutines
    inline auto operator co_await(Windows::Foundation::TimeSpan duration)
    {
        return resume_after(duration);
    }
#endif

    [[nodiscard]] inline auto resume_on_signal(void* handle, Windows::Foundation::TimeSpan timeout = {}) noexcept
    {
        struct awaitable
        {
            awaitable(void* handle, Windows::Foundation::TimeSpan timeout) noexcept :
                m_timeout(timeout),
                m_handle(handle)
            {}

            bool await_ready() const noexcept
            {
                return WINRT_WaitForSingleObject(m_handle, 0) == 0;
            }

            void await_suspend(std::experimental::coroutine_handle<> resume)
            {
                m_resume = resume;
                m_wait.attach(check_pointer(WINRT_CreateThreadpoolWait(callback, this, nullptr)));
                int64_t relative_count = -m_timeout.count();
                int64_t* file_time = relative_count != 0 ? &relative_count : nullptr;
                WINRT_SetThreadpoolWait(m_wait.get(), m_handle, file_time);
            }

            bool await_resume() const noexcept
            {
                return m_result == 0;
            }

        private:

            static void __stdcall callback(void*, void* context, void*, uint32_t result) noexcept
            {
                auto that = static_cast<awaitable*>(context);
                that->m_result = result;
                that->m_resume();
            }

            struct wait_traits
            {
                using type = impl::ptp_wait;

                static void close(type value) noexcept
                {
                    WINRT_CloseThreadpoolWait(value);
                }

                static constexpr type invalid() noexcept
                {
                    return nullptr;
                }
            };

            handle_type<wait_traits> m_wait;
            Windows::Foundation::TimeSpan m_timeout;
            void* m_handle;
            uint32_t m_result{};
            std::experimental::coroutine_handle<> m_resume{ nullptr };
        };

        return awaitable{ handle, timeout };
    }

    struct thread_pool
    {
        thread_pool() :
            m_pool(check_pointer(WINRT_CreateThreadpool(nullptr)))
        {
            m_environment.Pool = m_pool.get();
        }

        void thread_limits(uint32_t const high, uint32_t const low)
        {
            WINRT_SetThreadpoolThreadMaximum(m_pool.get(), high);
            check_bool(WINRT_SetThreadpoolThreadMinimum(m_pool.get(), low));
        }

        bool await_ready() const noexcept
        {
            return false;
        }

        void await_resume() const noexcept
        {
        }

        void await_suspend(std::experimental::coroutine_handle<> handle)
        {
            if (!WINRT_TrySubmitThreadpoolCallback(callback, handle.address(), &m_environment))
            {
                throw_last_error();
            }
        }

    private:

        static void __stdcall callback(void*, void* context) noexcept
        {
            std::experimental::coroutine_handle<>::from_address(context)();
        }

        struct pool_traits
        {
            using type = impl::ptp_pool;

            static void close(type value) noexcept
            {
                WINRT_CloseThreadpool(value);
            }

            static constexpr type invalid() noexcept
            {
                return nullptr;
            }
        };

        struct environment // TP_CALLBACK_ENVIRON
        {
            uint32_t Version{ 3 };
            void* Pool{};
            void* CleanupGroup{};
            void* CleanupGroupCancelCallback{};
            void* RaceDll{};
            void* ActivationContext{};
            void* FinalizationCallback{};
            union
            {
                uint32_t Flags{};
                struct
                {
                    uint32_t LongFunction : 1;
                    uint32_t Persistent : 1;
                    uint32_t Private : 30;
                } s;
            } u;
            int32_t CallbackPriority{ 1 };
            uint32_t Size{ sizeof(environment) };
        };

        handle_type<pool_traits> m_pool;
        environment m_environment;
    };

    struct fire_and_forget {};
}

namespace std::experimental
{
    template <typename... Args>
    struct coroutine_traits<winrt::fire_and_forget, Args...>
    {
        struct promise_type
        {
            winrt::fire_and_forget get_return_object() const noexcept
            {
                return{};
            }

            void return_void() const noexcept
            {
            }

            suspend_never initial_suspend() const noexcept
            {
                return{};
            }

            suspend_never final_suspend() const noexcept
            {
                return{};
            }

            void unhandled_exception() const noexcept
            {
                winrt::terminate();
            }

            template <typename Expression>
            auto await_transform(Expression&& expression)
            {
                return winrt::impl::notify_awaiter<Expression>{ static_cast<Expression&&>(expression) };
            }
        };
    };
}
