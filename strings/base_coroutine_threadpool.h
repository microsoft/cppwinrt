
namespace winrt::impl
{
    inline auto submit_threadpool_callback(void(__stdcall* callback)(void*, void* context), void* context)
    {
        if (!WINRT_IMPL_TrySubmitThreadpoolCallback(callback, context, nullptr))
        {
            throw_last_error();
        }
    }

    inline void __stdcall resume_background_callback(void*, void* context) noexcept
    {
        coroutine_handle<>::from_address(context)();
    };

    inline auto resume_background(coroutine_handle<> handle)
    {
        submit_threadpool_callback(resume_background_callback, handle.address());
    }

    inline std::pair<int32_t, int32_t> get_apartment_type() noexcept
    {
        int32_t aptType;
        int32_t aptTypeQualifier;
        if (0 == WINRT_IMPL_CoGetApartmentType(&aptType, &aptTypeQualifier))
        {
            return { aptType, aptTypeQualifier };
        }
        else
        {
            return { 1 /* APTTYPE_MTA */, 1 /* APTTYPEQUALIFIER_IMPLICIT_MTA */ };
        }
    }

    inline bool is_sta_thread() noexcept
    {
        auto type = get_apartment_type();
        switch (type.first)
        {
        case 0: /* APTTYPE_STA */
        case 3: /* APTTYPE_MAINSTA */
            return true;
        case 2: /* APTTYPE_NA */
            return type.second == 3 /* APTTYPEQUALIFIER_NA_ON_STA */ ||
                type.second == 5 /* APTTYPEQUALIFIER_NA_ON_MAINSTA */;
        }
        return false;
    }

    struct resume_apartment_context
    {
        com_ptr<IContextCallback> m_context = try_capture<IContextCallback>(WINRT_IMPL_CoGetObjectContext);
        int32_t m_context_type = get_apartment_type().first;
    };

    inline int32_t __stdcall resume_apartment_callback(com_callback_args* args) noexcept
    {
        coroutine_handle<>::from_address(args->data)();
        return 0;
    };

    inline void resume_apartment_sync(com_ptr<IContextCallback> const& context, coroutine_handle<> handle)
    {
        com_callback_args args{};
        args.data = handle.address();

        check_hresult(context->ContextCallback(resume_apartment_callback, &args, guid_of<ICallbackWithNoReentrancyToApplicationSTA>(), 5, nullptr));
    }

    inline void resume_apartment_on_threadpool(com_ptr<IContextCallback> const& context, coroutine_handle<> handle)
    {
        struct threadpool_resume
        {
            threadpool_resume(com_ptr<IContextCallback> const& context, coroutine_handle<> handle) :
                m_context(context), m_handle(handle) { }
            com_ptr<IContextCallback> m_context;
            coroutine_handle<> m_handle;
        };
        auto state = std::make_unique<threadpool_resume>(context, handle);
        submit_threadpool_callback([](void*, void* p)
            {
                std::unique_ptr<threadpool_resume> state{ static_cast<threadpool_resume*>(p) };
                resume_apartment_sync(state->m_context, state->m_handle);
            }, state.get());
        state.release();
    }

    inline auto resume_apartment(resume_apartment_context const& context, coroutine_handle<> handle)
    {
        if ((context.m_context == nullptr) || (context.m_context == try_capture<IContextCallback>(WINRT_IMPL_CoGetObjectContext)))
        {
            handle();
        }
        else if (context.m_context_type == 1 /* APTTYPE_MTA */)
        {
            resume_background(handle);
        }
        else if ((context.m_context_type == 2 /* APTTYPE_NTA */) && is_sta_thread())
        {
            resume_apartment_on_threadpool(context.m_context, handle);
        }
        else
        {
            resume_apartment_sync(context.m_context, handle);
        }
    }

    template <typename T>
    class awaiter_finder
    {
        template <typename U, typename = decltype(std::declval<U>().await_ready())> static constexpr bool find_awaitable_member(int) { return true; }
        template <typename> static constexpr bool find_awaitable_member(...) { return false; }

        template <typename U, typename = decltype(std::declval<U>().operator co_await())> static constexpr bool find_co_await_member(int) { return true; }
        template <typename> static constexpr bool find_co_await_member(...) { return false; }

        template <typename U, typename = decltype(operator co_await(std::declval<U>()))> static constexpr bool find_co_await_free(int) { return true; }
        template <typename> static constexpr bool find_co_await_free(...) { return false; }

    public:

        static constexpr bool has_awaitable_member = find_awaitable_member<T>(0);
        static constexpr bool has_co_await_member = find_co_await_member<T&&>(0);
        static constexpr bool has_co_await_free = find_co_await_free<T&&>(0);
    };
}

WINRT_EXPORT namespace winrt
{
    struct cancellable_promise
    {
        using canceller_t = void(*)(void*);

        void set_canceller(canceller_t canceller, void* context)
        {
            m_context = context;
            m_canceller.store(canceller, std::memory_order_release);
        }

        void revoke_canceller()
        {
            while (m_canceller.exchange(nullptr, std::memory_order_acquire) == cancelling_ptr)
            {
                std::this_thread::yield();
            }
        }

        void cancel()
        {
            auto canceller = m_canceller.exchange(cancelling_ptr, std::memory_order_acquire);
            struct unique_cancellation_lock
            {
                cancellable_promise* promise;
                ~unique_cancellation_lock()
                {
                    promise->m_canceller.store(nullptr, std::memory_order_release);
                }
            } lock{ this };

            if ((canceller != nullptr) && (canceller != cancelling_ptr))
            {
                canceller(m_context);
            }
        }

    private:
        static inline auto const cancelling_ptr = reinterpret_cast<canceller_t>(1);

        std::atomic<canceller_t> m_canceller{ nullptr };
        void* m_context{ nullptr };
    };

    struct enable_await_cancellation
    {
        enable_await_cancellation() noexcept = default;
        enable_await_cancellation(enable_await_cancellation const&) = default;

        ~enable_await_cancellation()
        {
            if (m_promise)
            {
                m_promise->revoke_canceller();
            }
        }

        void operator=(enable_await_cancellation const&) = delete;

        void set_cancellable_promise(cancellable_promise* promise) noexcept
        {
            m_promise = promise;
        }

    private:

        cancellable_promise* m_promise = nullptr;
    };
}

namespace winrt::impl
{
    template <typename T>
    decltype(auto) get_awaiter(T&& value) noexcept
    {
        if constexpr (awaiter_finder<T>::has_co_await_member)
        {
            static_assert(!awaiter_finder<T>::has_co_await_free, "Ambiguous operator co_await (as both member and free function).");
            return static_cast<T&&>(value).operator co_await();
        }
        else if constexpr (awaiter_finder<T>::has_co_await_free)
        {
            return operator co_await(static_cast<T&&>(value));
        }
        else
        {
            static_assert(awaiter_finder<T>::has_awaitable_member, "Not an awaitable type");
            return static_cast<T&&>(value);
        }
    }

    template <typename T>
    struct notify_awaiter
    {
        decltype(get_awaiter(std::declval<T&&>())) awaitable;

        notify_awaiter(T&& awaitable_arg, [[maybe_unused]] cancellable_promise* promise = nullptr) : awaitable(get_awaiter(static_cast<T&&>(awaitable_arg)))
        {
            if constexpr (std::is_convertible_v<std::remove_reference_t<decltype(awaitable)>&, enable_await_cancellation&>)
            {
                if (promise)
                {
                    static_cast<enable_await_cancellation&>(awaitable).set_cancellable_promise(promise);
                    awaitable.enable_cancellation(promise);
                }
            }
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
        auto await_suspend(coroutine_handle<U> handle)
        {
            return awaitable.await_suspend(handle);
        }

        decltype(auto) await_resume()
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

            void await_suspend(impl::coroutine_handle<> handle) const
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

            void await_suspend(impl::coroutine_handle<> resume)
            {
                m_resume = resume;

                if (!WINRT_IMPL_TrySubmitThreadpoolCallback(callback, this, nullptr))
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
            impl::coroutine_handle<> m_resume{ nullptr };
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

        void await_suspend(impl::coroutine_handle<> handle) const
        {
            auto copy = context; // resuming may destruct *this, so use a copy
            impl::resume_apartment(copy, handle);
        }

        impl::resume_apartment_context context;
    };

    [[nodiscard]] inline auto resume_after(Windows::Foundation::TimeSpan duration) noexcept
    {
        struct awaitable : enable_await_cancellation
        {
            explicit awaitable(Windows::Foundation::TimeSpan duration) noexcept :
                m_duration(duration)
            {
            }

            void enable_cancellation(cancellable_promise* promise)
            {
                promise->set_canceller([](void* context)
                {
                    auto that = static_cast<awaitable*>(context);
                    if (that->m_state.exchange(state::canceled, std::memory_order_acquire) == state::pending)
                    {
                        that->fire_immediately();
                    }
                }, this);
            }

            bool await_ready() const noexcept
            {
                return m_duration.count() <= 0;
            }

            void await_suspend(impl::coroutine_handle<> handle)
            {
                m_handle = handle;
                m_timer.attach(check_pointer(WINRT_IMPL_CreateThreadpoolTimer(callback, this, nullptr)));
                int64_t relative_count = -m_duration.count();
                WINRT_IMPL_SetThreadpoolTimerEx(m_timer.get(), &relative_count, 0, 0);

                state expected = state::idle;
                if (!m_state.compare_exchange_strong(expected, state::pending, std::memory_order_release))
                {
                    fire_immediately();
                }
            }

            void await_resume()
            {
                if (m_state.exchange(state::idle, std::memory_order_relaxed) == state::canceled)
                {
                    throw hresult_canceled();
                }
            }

        private:

            void fire_immediately() noexcept
            {
                if (WINRT_IMPL_SetThreadpoolTimerEx(m_timer.get(), nullptr, 0, 0))
                {
                    int64_t now = 0;
                    WINRT_IMPL_SetThreadpoolTimerEx(m_timer.get(), &now, 0, 0);
                }
            }

            static void __stdcall callback(void*, void* context, void*) noexcept
            {
                auto that = reinterpret_cast<awaitable*>(context);
                that->m_handle();
            }

            struct timer_traits
            {
                using type = impl::ptp_timer;

                static void close(type value) noexcept
                {
                    WINRT_IMPL_CloseThreadpoolTimer(value);
                }

                static constexpr type invalid() noexcept
                {
                    return nullptr;
                }
            };

            enum class state { idle, pending, canceled };

            handle_type<timer_traits> m_timer;
            Windows::Foundation::TimeSpan m_duration;
            impl::coroutine_handle<> m_handle;
            std::atomic<state> m_state{ state::idle };
        };

        return awaitable{ duration };
    }

#ifdef WINRT_IMPL_COROUTINES
    inline auto operator co_await(Windows::Foundation::TimeSpan duration)
    {
        return resume_after(duration);
    }
#endif

    [[nodiscard]] inline auto resume_on_signal(void* handle, Windows::Foundation::TimeSpan timeout = {}) noexcept
    {
        struct awaitable : enable_await_cancellation
        {
            awaitable(void* handle, Windows::Foundation::TimeSpan timeout) noexcept :
                m_timeout(timeout),
                m_handle(handle)
            {}

            void enable_cancellation(cancellable_promise* promise)
            {
                promise->set_canceller([](void* context)
                {
                    auto that = static_cast<awaitable*>(context);
                    if (that->m_state.exchange(state::canceled, std::memory_order_acquire) == state::pending)
                    {
                        that->fire_immediately();
                    }
                }, this);
            }

            bool await_ready() const noexcept
            {
                return WINRT_IMPL_WaitForSingleObject(m_handle, 0) == 0;
            }

            void await_suspend(impl::coroutine_handle<> resume)
            {
                m_resume = resume;
                m_wait.attach(check_pointer(WINRT_IMPL_CreateThreadpoolWait(callback, this, nullptr)));
                int64_t relative_count = -m_timeout.count();
                int64_t* file_time = relative_count != 0 ? &relative_count : nullptr;
                WINRT_IMPL_SetThreadpoolWaitEx(m_wait.get(), m_handle, file_time, nullptr);

                state expected = state::idle;
                if (!m_state.compare_exchange_strong(expected, state::pending, std::memory_order_release))
                {
                    fire_immediately();
                }
            }

            bool await_resume()
            {
                if (m_state.exchange(state::idle, std::memory_order_relaxed) == state::canceled)
                {
                    throw hresult_canceled();
                }
                return m_result == 0;
            }

        private:

            void fire_immediately() noexcept
            {
                if (WINRT_IMPL_SetThreadpoolWaitEx(m_wait.get(), nullptr, nullptr, nullptr))
                {
                    int64_t now = 0;
                    WINRT_IMPL_SetThreadpoolWaitEx(m_wait.get(), WINRT_IMPL_GetCurrentProcess(), &now, nullptr);
                }
            }

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
                    WINRT_IMPL_CloseThreadpoolWait(value);
                }

                static constexpr type invalid() noexcept
                {
                    return nullptr;
                }
            };

            enum class state { idle, pending, canceled };

            handle_type<wait_traits> m_wait;
            Windows::Foundation::TimeSpan m_timeout;
            void* m_handle;
            uint32_t m_result{};
            impl::coroutine_handle<> m_resume{ nullptr };
            std::atomic<state> m_state{ state::idle };
        };

        return awaitable{ handle, timeout };
    }

    struct thread_pool
    {
        thread_pool() :
            m_pool(check_pointer(WINRT_IMPL_CreateThreadpool(nullptr)))
        {
            m_environment.Pool = m_pool.get();
        }

        void thread_limits(uint32_t const high, uint32_t const low)
        {
            WINRT_IMPL_SetThreadpoolThreadMaximum(m_pool.get(), high);
            check_bool(WINRT_IMPL_SetThreadpoolThreadMinimum(m_pool.get(), low));
        }

        bool await_ready() const noexcept
        {
            return false;
        }

        void await_resume() const noexcept
        {
        }

        void await_suspend(impl::coroutine_handle<> handle)
        {
            if (!WINRT_IMPL_TrySubmitThreadpoolCallback(callback, handle.address(), &m_environment))
            {
                throw_last_error();
            }
        }

    private:

        static void __stdcall callback(void*, void* context) noexcept
        {
            impl::coroutine_handle<>::from_address(context)();
        }

        struct pool_traits
        {
            using type = impl::ptp_pool;

            static void close(type value) noexcept
            {
                WINRT_IMPL_CloseThreadpool(value);
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

#ifdef __cpp_lib_coroutine
namespace std
#else
namespace std::experimental
#endif
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
                if (winrt_suspend_handler)
                {
                    winrt_suspend_handler(this);
                }

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
