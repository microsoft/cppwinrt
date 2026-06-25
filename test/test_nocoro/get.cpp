#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Storage;

template<typename TResult>
struct async_completion_source : implements<async_completion_source<TResult>, IAsyncOperation<TResult>, IAsyncInfo>
{
    void set_result(TResult result)
    {
        m_result = std::move(result);
        m_status = AsyncStatus::Completed;
        m_completed(*this, m_status);
    }

    void Completed(AsyncOperationCompletedHandler<TResult> completed)
    {
        m_completed = completed;
    }

    AsyncOperationCompletedHandler<TResult> Completed() const noexcept
    {
        return m_completed;
    }

    TResult GetResults()
    {
        return m_result.value();
    }

    uint32_t Id() const
    {
        return 1;
    }

    AsyncStatus Status() const
    {
        return m_status;
    }

    hresult ErrorCode() const
    {
        return hresult(0); // S_OK
    }

    void Cancel() const
    {
        throw hresult_error(0x80070032); // E_NOT_SUPPORTED
    }

    void Close() const
    {
    }

private:
    AsyncStatus m_status = AsyncStatus::Started;
    AsyncOperationCompletedHandler<TResult> m_completed;
    std::optional<TResult> m_result;
};

TEST_CASE("get")
{
    auto acs = winrt::make_self<async_completion_source<uint32_t>>();

    std::thread worker([acs]
    {
        std::this_thread::sleep_for(1s);
        acs->set_result(0xDEADBEEF);
    });

    worker.detach();

    REQUIRE(acs.as<IAsyncOperation<uint32_t>>().get() == 0xDEADBEEF);
}

TEST_CASE("get_only_safe_from_non_presenting_sta")
{
    // Call a real WinRT async operation from an STA thread.
    // This is the scenario the new API is designed for: an STA that is not
    // presenting UI, where a synchronous blocking wait is safe.
    std::exception_ptr failure{};
    std::thread sta_thread([&failure]
    {
        try
        {
            winrt::init_apartment(winrt::apartment_type::single_threaded);

            auto content = PathIO::ReadTextAsync(L"C:\\Windows\\win.ini").get_only_safe_from_non_presenting_sta();

            REQUIRE(content.size() > 0);

            winrt::uninit_apartment();
        }
        catch (...)
        {
            failure = std::current_exception();
        }
    });

    sta_thread.join();

    if (failure)
    {
        std::rethrow_exception(failure);
    }
}
