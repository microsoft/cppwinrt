
#ifndef __clang__

#include <experimental/coroutine>

#else

namespace std::experimental
{
    template <typename R, typename...> struct coroutine_traits
    {
        using promise_type = typename R::promise_type;
    };

    template <typename Promise = void> struct coroutine_handle;

    template <> struct coroutine_handle<void>
    {
        coroutine_handle(decltype(nullptr)) noexcept
        {
        }

        coroutine_handle() noexcept
        {
        }

        static coroutine_handle from_address(void* address) noexcept
        {
            coroutine_handle result;
            result.ptr = address;
            return result;
        }

        coroutine_handle& operator=(decltype(nullptr)) noexcept
        {
            ptr = nullptr;
            return *this;
        }

        explicit operator bool() const noexcept
        {
            return ptr;
        }

        void* address() const noexcept
        {
            return ptr;
        }

        void operator()() const
        {
            resume();
        }

        void resume() const
        {
            __builtin_coro_resume(ptr);
        }

        void destroy() const
        {
            __builtin_coro_destroy(ptr);
        }

        bool done() const
        {
            return __builtin_coro_done(ptr);
        }

    protected:
        void* ptr{};
    };

    template <typename Promise> struct coroutine_handle : coroutine_handle<>
    {
        using coroutine_handle<>::operator=;

        static coroutine_handle from_address(void* address) noexcept
        {
            coroutine_handle result;
            result.ptr = address;
            return result;
        }

        Promise& promise() const
        {
            return *reinterpret_cast<Promise*>(__builtin_coro_promise(ptr, alignof(Promise), false));
        }

        static coroutine_handle from_promise(Promise& promise)
        {
            coroutine_handle result;
            result.ptr = __builtin_coro_promise(&promise, alignof(Promise), true);
            return result;
        }
    };

    template <typename Promise>
    bool operator==(coroutine_handle<Promise> const& left, coroutine_handle<Promise> const& right) noexcept
    {
        return left.address() == right.address();
    }

    template <typename Promise>
    bool operator!=(coroutine_handle<Promise> const& left, coroutine_handle<Promise> const& right) noexcept
    {
        return !(left == right);
    }

    struct suspend_always
    {
        bool await_ready() noexcept { return false; }
        void await_suspend(coroutine_handle<>) noexcept {}
        void await_resume() noexcept {}
    };

    struct suspend_never
    {
        bool await_ready() noexcept { return true; }
        void await_suspend(coroutine_handle<>) noexcept {}
        void await_resume() noexcept {}
    };
}

#endif
