
WINRT_EXPORT namespace winrt
{
    [[nodiscard]] inline auto resume_foreground(
        Windows::UI::Core::CoreDispatcher const& dispatcher,
        Windows::UI::Core::CoreDispatcherPriority const priority = Windows::UI::Core::CoreDispatcherPriority::Normal) noexcept
    {
        struct awaitable
        {
            awaitable(Windows::UI::Core::CoreDispatcher const& dispatcher, Windows::UI::Core::CoreDispatcherPriority const priority) noexcept :
                m_dispatcher(dispatcher),
                m_priority(priority)
            {
            }

            bool await_ready() const noexcept
            {
                return false;
            }

            void await_resume() const noexcept
            {
            }

            void await_suspend(std::experimental::coroutine_handle<> handle) const
            {
                m_dispatcher.RunAsync(m_priority, [handle]
                    {
                        handle();
                    });
            }

        private:

            Windows::UI::Core::CoreDispatcher const& m_dispatcher;
            Windows::UI::Core::CoreDispatcherPriority const m_priority;
        };

        return awaitable{ dispatcher, priority };
    };

#ifdef __cpp_coroutines
    inline auto operator co_await(Windows::UI::Core::CoreDispatcher const& dispatcher)
    {
        return resume_foreground(dispatcher);
    }
#endif
}
