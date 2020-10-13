
WINRT_EXPORT namespace winrt
{
    [[nodiscard]] inline auto resume_foreground(
        Microsoft::System::DispatcherQueue const& dispatcher,
        Microsoft::System::DispatcherQueuePriority const priority = Microsoft::System::DispatcherQueuePriority::Normal) noexcept
    {
        struct awaitable
        {
            awaitable(Microsoft::System::DispatcherQueue const& dispatcher, Microsoft::System::DispatcherQueuePriority const priority) noexcept :
                m_dispatcher(dispatcher),
                m_priority(priority)
            {
            }

            bool await_ready() const noexcept
            {
                return false;
            }

            bool await_resume() const noexcept
            {
                return m_queued;
            }

            bool await_suspend(impl::coroutine_handle<> handle)
            {
                return m_dispatcher.TryEnqueue(m_priority, [handle, this]
                    {
                        m_queued = true;
                        handle();
                    });
            }

        private:
            Microsoft::System::DispatcherQueue const& m_dispatcher;
            Microsoft::System::DispatcherQueuePriority const m_priority;
            bool m_queued{};
        };

        return awaitable{ dispatcher, priority };
    };

#ifdef WINRT_IMPL_COROUTINES
    inline auto operator co_await(Microsoft::System::DispatcherQueue const& dispatcher)
    {
        return resume_foreground(dispatcher);
    }
#endif
}
