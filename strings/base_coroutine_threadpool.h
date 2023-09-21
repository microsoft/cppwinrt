
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
        resume_apartment_context() = default;
        resume_apartment_context(std::nullptr_t) : m_context(nullptr), m_context_type(-1) {}

        bool valid() const noexcept
        {
            return m_context_type.value >= 0;
        }

        com_ptr<IContextCallback> m_context = try_capture<IContextCallback>(WINRT_IMPL_CoGetObjectContext);
        movable_primitive<int32_t, -1> m_context_type = get_apartment_type().first;
    };

    inline int32_t __stdcall resume_apartment_callback(com_callback_args* args) noexcept
    {
        coroutine_handle<>::from_address(args->data)();
        return 0;
    };

    [[nodiscard]] inline bool resume_apartment_sync(com_ptr<IContextCallback> const& context, coroutine_handle<> handle, int32_t* failure)
    {
        com_callback_args args{};
        args.data = handle.address();

        auto result = context->ContextCallback(resume_apartment_callback, &args, guid_of<ICallbackWithNoReentrancyToApplicationSTA>(), 5, nullptr);
        if (result < 0)
        {
            // Resume the coroutine on the wrong apartment, but tell it why.
            *failure = result;
            return false;
        }
        return true;
    }

    struct threadpool_resume
    {
        threadpool_resume(com_ptr<IContextCallback> const& context, coroutine_handle<> handle, int32_t* failure) :
            m_context(context), m_handle(handle), m_failure(failure) { }
        com_ptr<IContextCallback> m_context;
        coroutine_handle<> m_handle;
        int32_t* m_failure;
    };

    inline void __stdcall fallback_submit_threadpool_callback(void*, void* p) noexcept
    {
        std::unique_ptr<threadpool_resume> state{ static_cast<threadpool_resume*>(p) };
        if (!resume_apartment_sync(state->m_context, state->m_handle, state->m_failure))
        {
            state->m_handle.resume();
        }
    }

    inline void resume_apartment_on_threadpool(com_ptr<IContextCallback> const& context, coroutine_handle<> handle, int32_t* failure)
    {
        auto state = std::make_unique<threadpool_resume>(context, handle, failure);
        submit_threadpool_callback(fallback_submit_threadpool_callback, state.get());
        state.release();
    }

    [[nodiscard]] inline auto resume_apartment(resume_apartment_context const& context, coroutine_handle<> handle, int32_t* failure)
    {
        WINRT_ASSERT(context.valid());
        if ((context.m_context == nullptr) || (context.m_context == try_capture<IContextCallback>(WINRT_IMPL_CoGetObjectContext)))
        {
            return false;
        }
        else if (context.m_context_type.value == 1 /* APTTYPE_MTA */)
        {
            resume_background(handle);
            return true;
        }
        else if (is_sta_thread())
        {
            resume_apartment_on_threadpool(context.m_context, handle, failure);
            return true;
        }
        else
        {
            return resume_apartment_sync(context.m_context, handle, failure);
        }
    }
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

        bool enable_cancellation_propagation(bool value) noexcept
        {
            return std::exchange(m_propagate_cancellation, value);
        }

        bool cancellation_propagation_enabled() const noexcept
        {
            return m_propagate_cancellation;
        }

    private:
        static inline auto const cancelling_ptr = reinterpret_cast<canceller_t>(1);

        std::atomic<canceller_t> m_canceller{ nullptr };
        void* m_context{ nullptr };
        bool m_propagate_cancellation{ false };
    };

    template <typename Derived>
    struct cancellable_awaiter
    {
        cancellable_awaiter() noexcept = default;
        cancellable_awaiter(cancellable_awaiter const&) = default;

        ~cancellable_awaiter()
        {
            if (m_promise)
            {
                m_promise->revoke_canceller();
            }
        }

        void operator=(cancellable_awaiter const&) = delete;

    protected:
        template <typename T>
        void set_cancellable_promise_from_handle(impl::coroutine_handle<T> const& handle)
        {
            if constexpr (std::is_base_of_v<cancellable_promise, T>)
            {
                set_cancellable_promise(&handle.promise());
            }
        }

    private:
        void set_cancellable_promise(cancellable_promise* promise)
        {
            if (promise->cancellation_propagation_enabled())
            {
                m_promise = promise;
                static_cast<Derived*>(this)->enable_cancellation(m_promise);
            }
        }

        cancellable_promise* m_promise = nullptr;
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
        apartment_context() = default;
        apartment_context(std::nullptr_t) : context(nullptr) { }

        operator bool() const noexcept { return context.valid(); }
        bool operator!() const noexcept { return !context.valid(); }

        impl::resume_apartment_context context;
    };
}

namespace winrt::impl
{
    struct apartment_awaiter
    {
        apartment_context const& context;
        int32_t failure = 0;

        bool await_ready() const noexcept
        {
            return false;
        }

        void await_resume() const
        {
            check_hresult(failure);
        }

        bool await_suspend(impl::coroutine_handle<> handle)
        {
            auto context_copy = context;
            return impl::resume_apartment(context_copy.context, handle, &failure);
        }
    };

    template <typename Derived, typename Traits, typename Result = void>
    struct threadpool_awaiter_base : cancellable_awaiter<threadpool_awaiter_base<Derived, Traits, Result>>
    {
        void enable_cancellation(cancellable_promise* promise)
        {
            promise->set_canceller([](void* context)
            {
                auto that = static_cast<threadpool_awaiter_base*>(context);
                if (that->m_state.exchange(state::canceled, std::memory_order_acquire) == state::suspended)
                {
                    if (static_cast<Derived*>(that)->cancel(that->m_handle.get()))
                    {
                        static_cast<Derived*>(that)->fire_immediately(that->m_handle.get());
                    }
                }
            }, this);
        }

        Result await_resume()
        {
            if (m_state.exchange(state::idle, std::memory_order_relaxed) == state::canceled)
            {
                throw hresult_canceled();
            }

            if constexpr (!std::is_same_v<void, Result>)
            {
                return static_cast<Derived*>(this)->get_result();
            }
        }

        template <typename T>
        bool await_suspend(impl::coroutine_handle<T> resume)
        {
            handle_type<Traits> new_handle;
            new_handle.attach(check_pointer(static_cast<Derived*>(this)->create_threadpool_handle()));

            state expected = state::idle;
            if (m_state.compare_exchange_strong(expected, state::pending, std::memory_order_release))
            {
                this->set_cancellable_promise_from_handle(resume);

                m_resume = resume;
                m_handle = std::move(new_handle);

                if (m_state.load(std::memory_order_acquire) != state::canceled)
                {
                    slim_lock_guard guard{m_mutex};

                    static_cast<Derived*>(this)->suspend_on_threadpool(m_handle.get());

                    expected = state::pending;
                    if (!m_state.compare_exchange_strong(expected, state::suspended, std::memory_order_release))
                    {
                        // handle the case of the cancelation occurring while we where suspending on the thread pool
                        if (static_cast<Derived*>(this)->cancel(m_handle.get()))
                        {
                            // we canceled before a callback was scheduled, so we can short-circuit
                            return false;
                        }
                    }

                    return true;
                }
                else
                {
                    // short-circuit in case of an early cancelation
                    return false;
                }
            }
            else
            {
                throw hresult_illegal_method_call();
            }
        }

    protected:
        threadpool_awaiter_base() = default;

        void resume()
        {
            {
                // acquire the mutex to ensure await_suspend is finished executing
                slim_lock_guard guard{m_mutex};
            }

            m_resume();
        }

    private:
        enum class state { idle, pending, suspended, canceled };

        handle_type<Traits> m_handle;
        impl::coroutine_handle<> m_resume{ nullptr };
        std::atomic<state> m_state{ state::idle };
        slim_mutex m_mutex;
    };

    struct tp_timer_traits
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

    struct timespan_awaiter : threadpool_awaiter_base<timespan_awaiter, tp_timer_traits>
    {
        explicit timespan_awaiter(Windows::Foundation::TimeSpan duration) noexcept :
            m_duration(duration)
        {
        }

        bool await_ready() const noexcept
        {
            return m_duration.count() <= 0;
        }

        impl::ptp_timer create_threadpool_handle() noexcept
        {
            return WINRT_IMPL_CreateThreadpoolTimer(callback, this, nullptr);
        }

        void suspend_on_threadpool(impl::ptp_timer handle) const noexcept
        {
            int64_t relative_count = -m_duration.count();
            WINRT_IMPL_SetThreadpoolTimerEx(handle, &relative_count, 0, 0);
        }

        bool cancel(impl::ptp_timer handle) const noexcept
        {
            return WINRT_IMPL_SetThreadpoolTimerEx(handle, nullptr, 0, 0);
        }

        void fire_immediately(impl::ptp_timer handle) const noexcept
        {
            int64_t now = 0;
            WINRT_IMPL_SetThreadpoolTimerEx(handle, &now, 0, 0);
        }

    private:
        static void __stdcall callback(void*, void* context, void*) noexcept
        {
            auto that = reinterpret_cast<timespan_awaiter*>(context);
            that->resume();
        }

        Windows::Foundation::TimeSpan m_duration;
    };

    struct tp_wait_traits
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

    struct signal_awaiter : threadpool_awaiter_base<signal_awaiter, tp_wait_traits, bool>
    {
        signal_awaiter(void* handle, Windows::Foundation::TimeSpan timeout) noexcept :
            m_timeout(timeout),
            m_handle(handle)
        {}

        bool await_ready() const noexcept
        {
            return WINRT_IMPL_WaitForSingleObject(m_handle, 0) == 0;
        }

        bool get_result() const noexcept
        {
            return m_result == 0;
        }

        impl::ptp_wait create_threadpool_handle() noexcept
        {
            return WINRT_IMPL_CreateThreadpoolWait(callback, this, nullptr);
        }

        void suspend_on_threadpool(impl::ptp_wait handle) const noexcept
        {
            int64_t relative_count = -m_timeout.count();
            int64_t* file_time = relative_count != 0 ? &relative_count : nullptr;
            WINRT_IMPL_SetThreadpoolWaitEx(handle, m_handle, file_time, nullptr);
        }

        bool cancel(impl::ptp_wait handle) const noexcept
        {
            return WINRT_IMPL_SetThreadpoolWaitEx(handle, nullptr, nullptr, nullptr);
        }

        void fire_immediately(impl::ptp_wait handle) const noexcept
        {
            int64_t now = 0;
            WINRT_IMPL_SetThreadpoolWaitEx(handle, WINRT_IMPL_GetCurrentProcess(), &now, nullptr);
        }

    private:
        static void __stdcall callback(void*, void* context, void*, uint32_t result) noexcept
        {
            auto that = static_cast<signal_awaiter*>(context);
            that->m_result = result;
            that->resume();
        }

        Windows::Foundation::TimeSpan m_timeout;
        void* m_handle;
        uint32_t m_result{};
    };
}

WINRT_EXPORT namespace winrt
{
#ifdef WINRT_IMPL_COROUTINES
    inline impl::apartment_awaiter operator co_await(apartment_context const& context)
    {
        return{ context };
    }
#endif

    [[nodiscard]] inline impl::timespan_awaiter resume_after(Windows::Foundation::TimeSpan duration) noexcept
    {
        return impl::timespan_awaiter{ duration };
    }

#ifdef WINRT_IMPL_COROUTINES
    inline impl::timespan_awaiter operator co_await(Windows::Foundation::TimeSpan duration)
    {
        return resume_after(duration);
    }
#endif

    [[nodiscard]] inline impl::signal_awaiter resume_on_signal(void* handle, Windows::Foundation::TimeSpan timeout = {}) noexcept
    {
        return impl::signal_awaiter{ handle, timeout };
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
                return{};
            }

            void unhandled_exception() const noexcept
            {
                winrt::terminate();
            }
        };
    };
}
