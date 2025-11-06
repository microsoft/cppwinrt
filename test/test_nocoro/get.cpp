#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

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
    auto acs = winrt::make_self<async_completion_source<int>>();

    std::thread worker([acs]
    {
        std::this_thread::sleep_for(1s);
        acs->set_result(0xDEADBEEF);
    });

    worker.detach();

    REQUIRE(acs.as<IAsyncOperation<int>>().get() == 0xDEADBEEF);
}
