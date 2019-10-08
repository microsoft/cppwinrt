
WINRT_EXPORT namespace winrt
{
#ifdef __cpp_coroutines
    template<typename D>
    struct deferrable_event_args
    {
        Windows::Foundation::Deferral GetDeferral()
        {
            slim_lock_guard const guard(m_lock);

            if (m_handle)
            {
                // Cannot ask for deferral after the event handler returned.
                throw hresult_illegal_method_call();
            }

            Windows::Foundation::Deferral deferral{ {static_cast<D&>(*this).get_strong(), &deferrable_event_args::one_deferral_completed } };
            ++m_outstanding_deferrals;
            return deferral;
        }

        [[nodiscard]] Windows::Foundation::IAsyncAction wait_for_deferrals()
        {
            struct awaitable : std::experimental::suspend_always
            {
                bool await_suspend(coroutine_handle handle)
                {
                    return m_deferrable.await_suspend(handle);
                }

                deferrable_event_args& m_deferrable;
            };

            co_await awaitable{ {}, *this };
        }

    private:

        using coroutine_handle = std::experimental::coroutine_handle<>;

        void one_deferral_completed()
        {
            coroutine_handle resume = nullptr;
            {
                slim_lock_guard const guard(m_lock);

                if (m_outstanding_deferrals <= 0)
                {
                    throw hresult_illegal_method_call();
                }

                if (--m_outstanding_deferrals == 0)
                {
                    resume = m_handle;
                }
            }

            if (resume)
            {
                impl::resume_background(resume);
            }
        }

        bool await_suspend(coroutine_handle handle) noexcept
        {
            slim_lock_guard const guard(m_lock);
            m_handle = handle;
            return m_outstanding_deferrals > 0;
        }

        slim_mutex m_lock;
        int32_t m_outstanding_deferrals = 0;
        coroutine_handle m_handle = nullptr;
    };
#endif
}
