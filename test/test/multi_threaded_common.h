#pragma once

#include <thread>

struct unique_thread
{
    std::thread thread;
    std::exception_ptr ex;

    unique_thread() = default;

    template <typename Func, typename... Args>
    unique_thread(Func&& fn, Args&&... args)
    {
        thread = std::thread([this, fn = std::forward<Func>(fn)](auto&&... args)
        {
            try
            {
                fn(std::forward<decltype(args)>(args)...);
            }
            catch (...)
            {
                ex = std::current_exception();
            }
        }, std::forward<Args>(args)...);
    }

    ~unique_thread() noexcept(false)
    {
        if (thread.joinable())
        {
            join();
        }
    }

    unique_thread(unique_thread&&) = default;
    unique_thread& operator=(unique_thread&&) = default;

    void join()
    {
        thread.join();
        if (ex)
        {
            std::rethrow_exception(ex);
        }
    }
};

template <typename T> // int or IInspectable
T conditional_box(int value)
{
    if constexpr (std::is_same_v<T, int>)
    {
        return value;
    }
    else
    {
        return winrt::box_value(value);
    }
}

template <typename T>
int conditional_unbox(T const& value)
{
    if constexpr (std::is_same_v<T, int>)
    {
        return value;
    }
    else
    {
        return winrt::unbox_value<int>(value);
    }
}
