
WINRT_EXPORT namespace winrt
{
    struct access_token : handle
    {
        static access_token process()
        {
            access_token token;
            check_bool(WINRT_IMPL_OpenProcessToken(WINRT_IMPL_GetCurrentProcess(), 0x0002 /*TOKEN_DUPLICATE*/, token.put()));
            access_token duplicate;
            check_bool(WINRT_IMPL_DuplicateToken(token.get(), 2 /*SecurityImpersonation*/, duplicate.put()));
            return duplicate;
        }

        static access_token thread()
        {
            access_token token;

            if (!WINRT_IMPL_OpenThreadToken(WINRT_IMPL_GetCurrentThread(), 0x0004 /*TOKEN_IMPERSONATE*/, 1, token.put()))
            {
                std::uint32_t const error = WINRT_IMPL_GetLastError();

                if (error != 1008 /*ERROR_NO_TOKEN*/)
                {
                    throw_hresult(impl::hresult_from_win32(error));
                }
            }

            return token;
        }

        static access_token client()
        {
            struct impersonate_guard
            {
                impersonate_guard(com_ptr<impl::IServerSecurity> const& server) : m_server(server)
                {
                    check_hresult(m_server->ImpersonateClient());
                }

                ~impersonate_guard()
                {
                    check_hresult(m_server->RevertToSelf());
                }

            private:

                com_ptr<impl::IServerSecurity> const& m_server;
            };

            auto server = capture<impl::IServerSecurity>(WINRT_IMPL_CoGetCallContext);
            impersonate_guard impersonate(server);
            return thread();
        }

        access_token() = default;
        access_token(access_token&& other) = default;
        access_token& operator=(access_token&& other) = default;

        access_token impersonate() const
        {
            auto previous = thread();
            check_bool(WINRT_IMPL_SetThreadToken(nullptr, get()));
            return previous;
        }

        void revert() const
        {
            check_bool(WINRT_IMPL_SetThreadToken(nullptr, get()));
        }

        auto operator()() const
        {
            struct guard
            {
                guard(access_token&& previous) noexcept : m_previous(std::move(previous))
                {
                }

                ~guard()
                {
                    m_previous.revert();
                }

                guard(guard const&)
                {
                    // A Visual C++ compiler bug (550631) requires the copy constructor even though it is never called.
                    WINRT_ASSERT(false);
                }

            private:

                access_token const m_previous;
            };

            return guard(impersonate());
        }
    };
}
