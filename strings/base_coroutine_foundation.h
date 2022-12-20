
namespace winrt::impl
{
    template <typename Async>
    struct async_completed_handler;

    template <typename Async>
    using async_completed_handler_t = typename async_completed_handler<Async>::type;

    template <>
    struct async_completed_handler<Windows::Foundation::IAsyncAction>
    {
        using type = Windows::Foundation::AsyncActionCompletedHandler;
    };

    template <typename TProgress>
    struct async_completed_handler<Windows::Foundation::IAsyncActionWithProgress<TProgress>>
    {
        using type = Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>;
    };

    template <typename TResult>
    struct async_completed_handler<Windows::Foundation::IAsyncOperation<TResult>>
    {
        using type = Windows::Foundation::AsyncOperationCompletedHandler<TResult>;
    };

    template <typename TResult, typename TProgress>
    struct async_completed_handler<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>
    {
        using type = Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>;
    };

    inline void check_sta_blocking_wait() noexcept
    {
        // Note: A blocking wait on the UI thread for an asynchronous operation can cause a deadlock.
        // See https://docs.microsoft.com/windows/uwp/cpp-and-winrt-apis/concurrency#block-the-calling-thread
        WINRT_ASSERT(!is_sta_thread());
    }

    template <typename T, typename H>
    std::pair<T, H*> make_delegate_with_shared_state(H&& handler)
    {
        auto d = make_delegate<T, H>(std::forward<H>(handler));
        auto abi = reinterpret_cast<delegate<T, H>*>(get_abi(d));
        return { std::move(d), abi };
    }

    template <typename Async>
    auto wait_for_completed(Async const& async, uint32_t const timeout)
    {
        struct shared_type
        {
            handle event{ check_pointer(WINRT_IMPL_CreateEventW(nullptr, true, false, nullptr)) };
            Windows::Foundation::AsyncStatus status{ Windows::Foundation::AsyncStatus::Started };

            void operator()(Async const&, Windows::Foundation::AsyncStatus operation_status) noexcept
            {
                status = operation_status;
                WINRT_VERIFY(WINRT_IMPL_SetEvent(event.get()));
            }
        };

        auto [delegate, shared] = make_delegate_with_shared_state<async_completed_handler_t<Async>>(shared_type{});
        async.Completed(delegate);
        WINRT_IMPL_WaitForSingleObject(shared->event.get(), timeout);
        return shared->status;
    }

    template <typename Async>
    auto wait_for(Async const& async, Windows::Foundation::TimeSpan const& timeout)
    {
        check_sta_blocking_wait();
        auto const milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(timeout).count();
        WINRT_ASSERT((milliseconds >= 0) && (static_cast<uint64_t>(milliseconds) < 0xFFFFFFFFull)); // Within uint32_t range and not INFINITE
        return wait_for_completed(async, static_cast<uint32_t>(milliseconds));
    }

    inline void check_status_canceled(Windows::Foundation::AsyncStatus status)
    {
        if (status == Windows::Foundation::AsyncStatus::Canceled)
        {
            throw hresult_canceled();
        }
    }

    template <typename Async>
    auto wait_get(Async const& async)
    {
        check_sta_blocking_wait();

        auto status = async.Status();
        if (status == Windows::Foundation::AsyncStatus::Started)
        {
            status = wait_for_completed(async, 0xFFFFFFFF); // INFINITE
        }
        check_status_canceled(status);

        return async.GetResults();
    }

    template<typename Awaiter>
    struct disconnect_aware_handler
    {
        disconnect_aware_handler(Awaiter* awaiter, coroutine_handle<> handle) noexcept
            : m_awaiter(awaiter), m_handle(handle) { }

        disconnect_aware_handler(disconnect_aware_handler&& other) noexcept
            : m_context(std::move(other.m_context))
            , m_awaiter(std::exchange(other.m_awaiter, {}))
            , m_handle(std::exchange(other.m_handle, {})) { }

        ~disconnect_aware_handler()
        {
            if (m_handle) Complete();
        }

        template<typename Async>
        void operator()(Async&&, Windows::Foundation::AsyncStatus status)
        {
            m_awaiter->status = status;
            Complete();
        }

    private:
        resume_apartment_context m_context;
        Awaiter* m_awaiter;
        coroutine_handle<> m_handle;

        void Complete()
        {
            if (m_awaiter->suspending.exchange(false, std::memory_order_release))
            {
                m_handle = nullptr; // resumption deferred to await_suspend
            }
            else
            {
                resume_apartment(m_context, std::exchange(m_handle, {}), &m_awaiter->failure);
            }

        }
    };

#ifdef WINRT_IMPL_COROUTINES
    template <typename Async>
    struct await_adapter : cancellable_awaiter<await_adapter<Async>>
    {
        await_adapter(Async const& async) : async(async) { }

        Async const& async;
        Windows::Foundation::AsyncStatus status = Windows::Foundation::AsyncStatus::Started;
        int32_t failure = 0;
        std::atomic<bool> suspending = true;

        void enable_cancellation(cancellable_promise* promise)
        {
            promise->set_canceller([](void* parameter)
            {
                cancel_asynchronously(reinterpret_cast<await_adapter*>(parameter)->async);
            }, this);
        }

        bool await_ready() const noexcept
        {
            return false;
        }

        template <typename T>
        auto await_suspend(coroutine_handle<T> handle)
        {
            this->set_cancellable_promise_from_handle(handle);
            return register_completed_callback(handle);
        }

        auto await_resume() const
        {
            check_hresult(failure);
            check_status_canceled(status);
            return async.GetResults();
        }

    private:
        auto register_completed_callback(coroutine_handle<> handle)
        {
            auto extend_lifetime = async;
            async.Completed(disconnect_aware_handler(this, handle));
#ifdef _RESUMABLE_FUNCTIONS_SUPPORTED
            if (!suspending.exchange(false, std::memory_order_acquire))
            {
                handle.resume();
            }
#else
            return suspending.exchange(false, std::memory_order_acquire);
#endif
        }

        static fire_and_forget cancel_asynchronously(Async async)
        {
            co_await winrt::resume_background();
            try
            {
                async.Cancel();
            }
            catch (hresult_error const&)
            {
            }
        }
    };
#endif

    template <typename D>
    auto consume_Windows_Foundation_IAsyncAction<D>::get() const
    {
        impl::wait_get(static_cast<Windows::Foundation::IAsyncAction const&>(static_cast<D const&>(*this)));
    }
    template <typename D>
    auto consume_Windows_Foundation_IAsyncAction<D>::wait_for(Windows::Foundation::TimeSpan const& timeout) const
    {
        return impl::wait_for(static_cast<Windows::Foundation::IAsyncAction const&>(static_cast<D const&>(*this)), timeout);
    }

    template <typename D, typename TResult>
    auto consume_Windows_Foundation_IAsyncOperation<D, TResult>::get() const
    {
        return impl::wait_get(static_cast<Windows::Foundation::IAsyncOperation<TResult> const&>(static_cast<D const&>(*this)));
    }
    template <typename D, typename TResult>
    auto consume_Windows_Foundation_IAsyncOperation<D, TResult>::wait_for(Windows::Foundation::TimeSpan const& timeout) const
    {
        return impl::wait_for(static_cast<Windows::Foundation::IAsyncOperation<TResult> const&>(static_cast<D const&>(*this)), timeout);
    }

    template <typename D, typename TProgress>
    auto consume_Windows_Foundation_IAsyncActionWithProgress<D, TProgress>::get() const
    {
        impl::wait_get(static_cast<Windows::Foundation::IAsyncActionWithProgress<TProgress> const&>(static_cast<D const&>(*this)));
    }
    template <typename D, typename TProgress>
    auto consume_Windows_Foundation_IAsyncActionWithProgress<D, TProgress>::wait_for(Windows::Foundation::TimeSpan const& timeout) const
    {
        return impl::wait_for(static_cast<Windows::Foundation::IAsyncActionWithProgress<TProgress> const&>(static_cast<D const&>(*this)), timeout);
    }

    template <typename D, typename TResult, typename TProgress>
    auto consume_Windows_Foundation_IAsyncOperationWithProgress<D, TResult, TProgress>::get() const
    {
        return impl::wait_get(static_cast<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress> const&>(static_cast<D const&>(*this)));
    }
    template <typename D, typename TResult, typename TProgress>
    auto consume_Windows_Foundation_IAsyncOperationWithProgress<D, TResult, TProgress>::wait_for(Windows::Foundation::TimeSpan const& timeout) const
    {
        return impl::wait_for(static_cast<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress> const&>(static_cast<D const&>(*this)), timeout);
    }
}

#ifdef WINRT_IMPL_COROUTINES
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    inline impl::await_adapter<IAsyncAction> operator co_await(IAsyncAction const& async)
    {
        return{ async };
    }

    template <typename TProgress>
    impl::await_adapter<IAsyncActionWithProgress<TProgress>> operator co_await(IAsyncActionWithProgress<TProgress> const& async)
    {
        return{ async };
    }

    template <typename TResult>
    impl::await_adapter<IAsyncOperation<TResult>> operator co_await(IAsyncOperation<TResult> const& async)
    {
        return{ async };
    }

    template <typename TResult, typename TProgress>
    impl::await_adapter<IAsyncOperationWithProgress<TResult, TProgress>> operator co_await(IAsyncOperationWithProgress<TResult, TProgress> const& async)
    {
        return{ async };
    }
}
#endif

WINRT_EXPORT namespace winrt
{
    struct get_progress_token_t {};

    inline get_progress_token_t get_progress_token() noexcept
    {
        return{};
    }

    struct get_cancellation_token_t {};

    inline get_cancellation_token_t get_cancellation_token() noexcept
    {
        return{};
    }
}

namespace winrt::impl
{
    template <typename Promise>
    struct cancellation_token
    {
        cancellation_token(Promise* promise) noexcept : m_promise(promise)
        {
        }

        bool await_ready() const noexcept
        {
            return true;
        }

        void await_suspend(coroutine_handle<>) const noexcept
        {
        }

        cancellation_token<Promise> await_resume() const noexcept
        {
            return *this;
        }

        bool operator()() const noexcept
        {
            return m_promise->Status() == Windows::Foundation::AsyncStatus::Canceled;
        }

        void callback(winrt::delegate<>&& cancel) const noexcept
        {
            m_promise->cancellation_callback(std::move(cancel));
        }

        bool enable_propagation(bool value = true) const noexcept
        {
            return m_promise->enable_cancellation_propagation(value);
        }

    private:

        Promise* m_promise;
    };

    template <typename Promise, typename Progress>
    struct progress_token
    {
        progress_token(Promise* promise) noexcept :
            m_promise(promise)
        {
        }

        bool await_ready() const noexcept
        {
            return true;
        }

        void await_suspend(coroutine_handle<>) const noexcept
        {
        }

        progress_token<Promise, Progress> await_resume() const noexcept
        {
            return *this;
        }

        void operator()(Progress const& result) const
        {
            m_promise->set_progress(result);
        }

        template<typename T>
        void set_result(T&& value) const
        {
            static_assert(!std::is_same_v<Progress, void>, "Setting preliminary results requires IAsync...WithProgress");
            m_promise->return_value(std::forward<T>(value));
        }

    private:

        Promise* m_promise;
    };

    template <typename Derived, typename AsyncInterface, typename TProgress = void>
    struct promise_base : implements<Derived, AsyncInterface, Windows::Foundation::IAsyncInfo>, cancellable_promise
    {
        using AsyncStatus = Windows::Foundation::AsyncStatus;

        unsigned long __stdcall Release() noexcept
        {
            uint32_t const remaining = this->subtract_reference();

            if (remaining == 0)
            {
                std::atomic_thread_fence(std::memory_order_acquire);
                coroutine_handle<Derived>::from_promise(*static_cast<Derived*>(this)).destroy();
            }

            return remaining;
        }

        void Completed(async_completed_handler_t<AsyncInterface> const& handler)
        {
            AsyncStatus status;

            {
                slim_lock_guard const guard(m_lock);

                if (m_completed_assigned)
                {
                    throw hresult_illegal_delegate_assignment();
                }

                m_completed_assigned = true;

                status = m_status.load(std::memory_order_relaxed);
                if (status == AsyncStatus::Started)
                {
                    m_completed = make_agile_delegate(handler);
                    return;
                }
            }

            if (handler)
            {
                winrt::impl::invoke(handler, *this, status);
            }
        }

        auto Completed() noexcept
        {
            slim_lock_guard const guard(m_lock);
            return m_completed;
        }

        uint32_t Id() const noexcept
        {
            return 1;
        }

        AsyncStatus Status() noexcept
        {
            // It's okay to race against another thread that is changing the
            // status. In the case where the promise was published from another
            // thread, we need acquire in order to preserve causality.
            return m_status.load(std::memory_order_acquire);
        }

        hresult ErrorCode() noexcept
        {
            try
            {
                slim_lock_guard const guard(m_lock);
                rethrow_if_failed(m_status.load(std::memory_order_relaxed));
                return 0;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        void Cancel() noexcept
        {
            winrt::delegate<> cancel;

            {
                slim_lock_guard const guard(m_lock);

                if (m_status.load(std::memory_order_relaxed) == AsyncStatus::Started)
                {
                    m_status.store(AsyncStatus::Canceled, std::memory_order_relaxed);
                    m_exception = std::make_exception_ptr(hresult_canceled());
                    cancel = std::move(m_cancel);
                }
            }

            if (cancel)
            {
                cancel();
            }

            cancellable_promise::cancel();
        }

        void Close() const noexcept
        {
        }

        auto GetResults()
        {
            slim_lock_guard const guard(m_lock);

            auto status = m_status.load(std::memory_order_relaxed);

            if constexpr (std::is_same_v<TProgress, void>)
            {
                if (status == AsyncStatus::Completed)
                {
                    return static_cast<Derived*>(this)->get_return_value();
                }
                rethrow_if_failed(status);
                WINRT_ASSERT(status == AsyncStatus::Started);
                throw hresult_illegal_method_call();
            }
            else
            {
                if (status == AsyncStatus::Completed || status == AsyncStatus::Started)
                {
                    return static_cast<Derived*>(this)->copy_return_value();
                }
                WINRT_ASSERT(status == AsyncStatus::Error || status == AsyncStatus::Canceled);
                std::rethrow_exception(m_exception);
            }

        }

        AsyncInterface get_return_object() const noexcept
        {
            return *this;
        }

        void get_return_value() const noexcept
        {
        }

        void copy_return_value() const noexcept
        {
        }

        void set_completed() noexcept
        {
            async_completed_handler_t<AsyncInterface> handler;
            AsyncStatus status;

            {
                slim_lock_guard const guard(m_lock);

                status = m_status.load(std::memory_order_relaxed);
                if (status == AsyncStatus::Started)
                {
                    status = AsyncStatus::Completed;
                    m_status.store(status, std::memory_order_relaxed);
                }

                handler = std::move(this->m_completed);
            }

            if (handler)
            {
                winrt::impl::invoke(handler, *this, status);
            }
        }

        suspend_never initial_suspend() const noexcept
        {
            return{};
        }

        struct final_suspend_awaiter
        {
            promise_base* promise;

            bool await_ready() const noexcept
            {
                return false;
            }

            void await_resume() const noexcept
            {
            }

            bool await_suspend(coroutine_handle<>) const noexcept
            {
                promise->set_completed();
                uint32_t const remaining = promise->subtract_reference();

                if (remaining == 0)
                {
                    std::atomic_thread_fence(std::memory_order_acquire);
                }

                return remaining > 0;
            }
        };

        auto final_suspend() noexcept
        {
            return final_suspend_awaiter{ this };
        }

        void unhandled_exception() noexcept
        {
            slim_lock_guard const guard(m_lock);
            WINRT_ASSERT(m_status.load(std::memory_order_relaxed) == AsyncStatus::Started || m_status.load(std::memory_order_relaxed) == AsyncStatus::Canceled);
            m_exception = std::current_exception();

            try
            {
                std::rethrow_exception(m_exception);
            }
            catch (hresult_canceled const&)
            {
                m_status.store(AsyncStatus::Canceled, std::memory_order_relaxed);
            }
            catch (...)
            {
                m_status.store(AsyncStatus::Error, std::memory_order_relaxed);
            }
        }

        template <typename Expression>
        Expression&& await_transform(Expression&& expression)
        {
            if (Status() == AsyncStatus::Canceled)
            {
                throw winrt::hresult_canceled();
            }

            return std::forward<Expression>(expression);
        }

        cancellation_token<Derived> await_transform(get_cancellation_token_t) noexcept
        {
            return{ static_cast<Derived*>(this) };
        }

        progress_token<Derived, TProgress> await_transform(get_progress_token_t) noexcept
        {
            return{ static_cast<Derived*>(this) };
        }

        void cancellation_callback(winrt::delegate<>&& cancel) noexcept
        {
            {
                slim_lock_guard const guard(m_lock);

                if (m_status.load(std::memory_order_relaxed) != AsyncStatus::Canceled)
                {
                    m_cancel = std::move(cancel);
                    return;
                }
            }

            if (cancel)
            {
                cancel();
            }
        }

#if defined(_DEBUG) && !defined(WINRT_NO_MAKE_DETECTION)
        void use_make_function_to_create_this_object() final
        {
        }
#endif

    protected:

        void rethrow_if_failed(AsyncStatus status) const
        {
            if (status == AsyncStatus::Error || status == AsyncStatus::Canceled)
            {
                std::rethrow_exception(m_exception);
            }
        }

        std::exception_ptr m_exception{};
        slim_mutex m_lock;
        async_completed_handler_t<AsyncInterface> m_completed;
        winrt::delegate<> m_cancel;
        std::atomic<AsyncStatus> m_status;
        bool m_completed_assigned{ false };
    };
}

#ifdef __cpp_lib_coroutine
namespace std
#else
namespace std::experimental
#endif
{
    template <typename... Args>
    struct coroutine_traits<winrt::Windows::Foundation::IAsyncAction, Args...>
    {
        struct promise_type final : winrt::impl::promise_base<promise_type, winrt::Windows::Foundation::IAsyncAction>
        {
            void return_void() const noexcept
            {
            }
        };
    };

    template <typename TProgress, typename... Args>
    struct coroutine_traits<winrt::Windows::Foundation::IAsyncActionWithProgress<TProgress>, Args...>
    {
        struct promise_type final : winrt::impl::promise_base<promise_type, winrt::Windows::Foundation::IAsyncActionWithProgress<TProgress>, TProgress>
        {
            using ProgressHandler = winrt::Windows::Foundation::AsyncActionProgressHandler<TProgress>;

            void Progress(ProgressHandler const& handler) noexcept
            {
                winrt::slim_lock_guard const guard(this->m_lock);
                m_progress = winrt::impl::make_agile_delegate(handler);
            }

            ProgressHandler Progress() noexcept
            {
                winrt::slim_lock_guard const guard(this->m_lock);
                return m_progress;
            }

            void return_void() const noexcept
            {
            }

            void set_progress(TProgress const& result)
            {
                if (auto handler = Progress())
                {
                    winrt::impl::invoke(handler, *this, result);
                }
            }

            ProgressHandler m_progress;
        };
    };

    template <typename TResult, typename... Args>
    struct coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<TResult>, Args...>
    {
        struct promise_type final : winrt::impl::promise_base<promise_type, winrt::Windows::Foundation::IAsyncOperation<TResult>>
        {
            TResult get_return_value() noexcept
            {
                return std::move(m_result);
            }

            TResult copy_return_value() noexcept
            {
                return m_result;
            }

            void return_value(TResult&& value) noexcept
            {
                m_result = std::move(value);
            }

            void return_value(TResult const& value) noexcept
            {
                m_result = value;
            }

            TResult m_result{ winrt::impl::empty_value<TResult>() };
        };
    };

    template <typename TResult, typename TProgress, typename... Args>
    struct coroutine_traits<winrt::Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>, Args...>
    {
        struct promise_type final : winrt::impl::promise_base<promise_type,
            winrt::Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>, TProgress>
        {
            using ProgressHandler = winrt::Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>;

            void Progress(ProgressHandler const& handler) noexcept
            {
                winrt::slim_lock_guard const guard(this->m_lock);
                m_progress = winrt::impl::make_agile_delegate(handler);
            }

            ProgressHandler Progress() noexcept
            {
                winrt::slim_lock_guard const guard(this->m_lock);
                return m_progress;
            }

            TResult get_return_value() noexcept
            {
                return std::move(m_result);
            }

            TResult copy_return_value() noexcept
            {
                return m_result;
            }

            void return_value(TResult&& value) noexcept
            {
                winrt::slim_lock_guard const guard(this->m_lock);
                m_result = std::move(value);
            }

            void return_value(TResult const& value) noexcept
            {
                winrt::slim_lock_guard const guard(this->m_lock);
                m_result = value;
            }

            void set_progress(TProgress const& result)
            {
                if (auto handler = Progress())
                {
                    winrt::impl::invoke(handler, *this, result);
                }
            }

            TResult m_result{ winrt::impl::empty_value<TResult>() };
            ProgressHandler m_progress;
        };
    };
}

WINRT_EXPORT namespace winrt
{
#ifdef WINRT_IMPL_COROUTINES
    template <typename... T>
    Windows::Foundation::IAsyncAction when_all(T... async)
    {
        (void(co_await async), ...);
        co_return;
    }

    template <typename T, typename... Rest>
    T when_any(T const& first, Rest const& ... rest)
    {
        static_assert(impl::has_category_v<T>, "T must be WinRT async type such as IAsyncAction or IAsyncOperation.");
        static_assert((std::is_same_v<T, Rest> && ...), "All when_any parameters must be the same type.");

        struct shared_type
        {
            handle event{ check_pointer(WINRT_IMPL_CreateEventW(nullptr, true, false, nullptr)) };
            Windows::Foundation::AsyncStatus status{ Windows::Foundation::AsyncStatus::Started };
            T result;

            void operator()(T const& sender, Windows::Foundation::AsyncStatus operation_status) noexcept
            {
                auto sender_abi = *(impl::unknown_abi**)&sender;

                if (nullptr == _InterlockedCompareExchangePointer(reinterpret_cast<void**>(&result), sender_abi, nullptr))
                {
                    sender_abi->AddRef();
                    status = operation_status;
                    WINRT_VERIFY(WINRT_IMPL_SetEvent(event.get()));
                }
            }
        };

        auto [delegate, shared] = impl::make_delegate_with_shared_state<impl::async_completed_handler_t<T>>(shared_type{});

        auto completed = [delegate = std::move(delegate)](T const& async)
        {
            async.Completed(delegate);
        };

        completed(first);
        (completed(rest), ...);
        co_await resume_on_signal(shared->event.get());
        impl::check_status_canceled(shared->status);
        co_return shared->result.GetResults();
    }
#endif
}
