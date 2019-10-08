
WINRT_EXPORT namespace winrt
{
    struct slim_condition_variable;

    struct slim_mutex
    {
        slim_mutex(slim_mutex const&) = delete;
        slim_mutex& operator=(slim_mutex const&) = delete;
        slim_mutex() noexcept = default;

        void lock() noexcept
        {
            WINRT_AcquireSRWLockExclusive(&m_lock);
        }

        void lock_shared() noexcept
        {
            WINRT_AcquireSRWLockShared(&m_lock);
        }

        bool try_lock() noexcept
        {
            return 0 != WINRT_TryAcquireSRWLockExclusive(&m_lock);
        }

        bool try_lock_shared() noexcept
        {
            return 0 != WINRT_TryAcquireSRWLockShared(&m_lock);
        }

        void unlock() noexcept
        {
            WINRT_ReleaseSRWLockExclusive(&m_lock);
        }

        void unlock_shared() noexcept
        {
            WINRT_ReleaseSRWLockShared(&m_lock);
        }

    private:
        friend slim_condition_variable;

        auto get() noexcept
        {
            return &m_lock;
        }

        impl::srwlock m_lock{};
    };

    struct slim_lock_guard
    {
        explicit slim_lock_guard(slim_mutex& m) noexcept :
        m_mutex(m)
        {
            m_mutex.lock();
        }

        ~slim_lock_guard() noexcept
        {
            m_mutex.unlock();
        }

    private:
        slim_mutex& m_mutex;
    };

    struct slim_condition_variable
    {
        slim_condition_variable(slim_condition_variable const&) = delete;
        slim_condition_variable const& operator=(slim_condition_variable const&) = delete;
        slim_condition_variable() noexcept = default;

        template <typename T>
        void wait(slim_mutex& x, T predicate)
        {
            while (!predicate())
            {
                WINRT_VERIFY(WINRT_SleepConditionVariableSRW(&m_cv, x.get(), 0xFFFFFFFF /*INFINITE*/, 0));
            }
        }

        template <typename T>
        bool wait_for(slim_mutex& x, std::chrono::high_resolution_clock::duration const timeout, T predicate)
        {
            auto const until = std::chrono::high_resolution_clock::now() + timeout;

            while (!predicate())
            {
                auto const milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(until - std::chrono::high_resolution_clock::now()).count();

                if (milliseconds <= 0)
                {
                    return false;
                }

                if (!WINRT_SleepConditionVariableSRW(&m_cv, x.get(), static_cast<uint32_t>(milliseconds), 0))
                {
                    return predicate();
                }
            }

            return true;
        }

        void notify_one() noexcept
        {
            WINRT_WakeConditionVariable(&m_cv);
        }

        void notify_all() noexcept
        {
            WINRT_WakeAllConditionVariable(&m_cv);
        }

    private:
        impl::condition_variable m_cv{};
    };
}
