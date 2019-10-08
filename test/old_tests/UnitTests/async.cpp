#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Foundation;
using namespace std::chrono;

//
// These tests confirm that these non-suspending coroutines produce the correct types, complete immediately,
// produce the expected results, and invoke the Completed handler even when the coroutine has already completed.
// These coroutines also check for cancelation and throw if requested since these tests should not be canceled.
// The Cancel_IAsyncXxxx tests cover successful cancelation a bit further down.
//

namespace
{
    IAsyncAction NoSuspend_IAsyncAction()
    {
        co_await 0s;

        auto cancel = co_await get_cancellation_token();

        if (cancel())
        {
            throw hresult_error(E_UNEXPECTED);
        }
    }

    IAsyncActionWithProgress<double> NoSuspend_IAsyncActionWithProgress()
    {
        co_await 0s;

        auto cancel = co_await get_cancellation_token();

        if (cancel())
        {
            throw hresult_error(E_UNEXPECTED);
        }
    }

    IAsyncOperation<uint32_t> NoSuspend_IAsyncOperation()
    {
        co_await 0s;

        auto cancel = co_await get_cancellation_token();

        if (cancel())
        {
            throw hresult_error(E_UNEXPECTED);
        }

        co_return 123;
    }

    IAsyncOperationWithProgress<uint64_t, uint64_t> NoSuspend_IAsyncOperationWithProgress()
    {
        co_await 0s;

        auto cancel = co_await get_cancellation_token();

        if (cancel())
        {
            throw hresult_error(E_UNEXPECTED);
        }

        co_return 456;
    }
}

TEST_CASE("async, NoSuspend_IAsyncAction")
{
    IAsyncAction async = NoSuspend_IAsyncAction();
    REQUIRE(async.Status() == AsyncStatus::Completed);
    REQUIRE(async.ErrorCode() == S_OK);
    REQUIRE(async.Id() == 1);
    async.GetResults(); // should not throw

    bool completed = false;
    bool objectMatches = false;
    bool statusMatches = false;

    async.Completed([&](const IAsyncAction & sender, AsyncStatus status)
    {
        completed = true;
        objectMatches = (async == sender);
        statusMatches = (status == AsyncStatus::Completed);
    });

    REQUIRE(completed);
    REQUIRE(objectMatches);
    REQUIRE(statusMatches);

    REQUIRE_THROWS_AS(async.Completed([&](auto && ...) {}), hresult_illegal_delegate_assignment);

    async.Close();
    async.Cancel();
    REQUIRE(async.Status() == AsyncStatus::Completed);
}

TEST_CASE("async, NoSuspend_IAsyncActionWithProgress")
{
    IAsyncActionWithProgress<double> async = NoSuspend_IAsyncActionWithProgress();
    REQUIRE(async.Status() == AsyncStatus::Completed);
    REQUIRE(async.ErrorCode() == S_OK);
    REQUIRE(async.Id() == 1);
    async.GetResults(); // should not throw

    bool completed = false;
    bool objectMatches = false;
    bool statusMatches = false;

    async.Completed([&](const IAsyncActionWithProgress<double> & sender, AsyncStatus status)
    {
        completed = true;
        objectMatches = (async == sender);
        statusMatches = (status == AsyncStatus::Completed);
    });

    REQUIRE(completed);
    REQUIRE(objectMatches);
    REQUIRE(statusMatches);

    REQUIRE_THROWS_AS(async.Completed([&](auto && ...) {}), hresult_illegal_delegate_assignment);

    async.Close();
    async.Cancel();
    REQUIRE(async.Status() == AsyncStatus::Completed);
}

TEST_CASE("async, NoSuspend_IAsyncOperation")
{
    IAsyncOperation<uint32_t> async = NoSuspend_IAsyncOperation();
    REQUIRE(async.Status() == AsyncStatus::Completed);
    REQUIRE(async.ErrorCode() == S_OK);
    REQUIRE(async.Id() == 1);
    REQUIRE(async.GetResults() == 123);

    bool completed = false;
    bool objectMatches = false;
    bool statusMatches = false;

    async.Completed([&](const IAsyncOperation<uint32_t> & sender, AsyncStatus status)
    {
        completed = true;
        objectMatches = (async == sender);
        statusMatches = (status == AsyncStatus::Completed);
    });

    REQUIRE(completed);
    REQUIRE(objectMatches);
    REQUIRE(statusMatches);

    REQUIRE_THROWS_AS(async.Completed([&](auto && ...) {}), hresult_illegal_delegate_assignment);

    async.Close();
    async.Cancel();
    REQUIRE(async.Status() == AsyncStatus::Completed);
}

TEST_CASE("async, NoSuspend_IAsyncOperationWithProgress")
{
    IAsyncOperationWithProgress<uint64_t, uint64_t> async = NoSuspend_IAsyncOperationWithProgress();
    REQUIRE(async.Status() == AsyncStatus::Completed);
    REQUIRE(async.ErrorCode() == S_OK);
    REQUIRE(async.Id() == 1);
    REQUIRE(async.GetResults() == 456);

    bool completed = false;
    bool objectMatches = false;
    bool statusMatches = false;

    async.Completed([&](const IAsyncOperationWithProgress<uint64_t, uint64_t> & sender, AsyncStatus status)
    {
        completed = true;
        objectMatches = (async == sender);
        statusMatches = (status == AsyncStatus::Completed);
    });

    REQUIRE(completed);
    REQUIRE(objectMatches);
    REQUIRE(statusMatches);

    REQUIRE_THROWS_AS(async.Completed([&](auto && ...) {}), hresult_illegal_delegate_assignment);

    async.Close();
    async.Cancel();
    REQUIRE(async.Status() == AsyncStatus::Completed);
}

//
// These tests confirm that these coroutines do in fact suspend, can be queried before and after completion,
// and thus allow both Progress and Completed to be hooked up prior to completion. They all use an auto-reset
// event to coordinate the coroutine's initial resumption and completion to allow for predictable testing
// of the state machine.
//

namespace
{
    IAsyncAction Suspend_IAsyncAction(HANDLE go)
    {
        co_await resume_on_signal(go);
    }

    IAsyncActionWithProgress<double> Suspend_IAsyncActionWithProgress(HANDLE go)
    {
        co_await resume_on_signal(go);
        auto progress = co_await get_progress_token();
        progress(789.0);
    }

    IAsyncOperation<uint32_t> Suspend_IAsyncOperation(HANDLE go)
    {
        co_await resume_on_signal(go);
        co_return 123;
    }

    IAsyncOperationWithProgress<uint64_t, uint64_t> Suspend_IAsyncOperationWithProgress(HANDLE go)
    {
        co_await resume_on_signal(go);
        auto progress = co_await get_progress_token();
        progress(987);
        co_return 456;
    }
}

TEST_CASE("async, Suspend_IAsyncAction")
{
    handle event { CreateEvent(nullptr, false, false, nullptr)};
    IAsyncAction async = Suspend_IAsyncAction(event.get());
    REQUIRE(async.Status() == AsyncStatus::Started);
    async.Close();

    bool completed = false;

    async.Completed([&](const IAsyncAction & sender, AsyncStatus status)
    {
        completed = true;
        REQUIRE(async == sender);
        REQUIRE(status == AsyncStatus::Completed);
        SetEvent(event.get()); // signal completion
    });

    REQUIRE_THROWS_AS(async.Completed([&](auto && ...) {}), hresult_illegal_delegate_assignment);

    SetEvent(event.get()); // signal async to run
    REQUIRE(WaitForSingleObject(event.get(), INFINITE) == WAIT_OBJECT_0); // wait for async to complete
    REQUIRE(completed);
    REQUIRE(async.Status() == AsyncStatus::Completed);
    REQUIRE(async.ErrorCode() == S_OK);
}

TEST_CASE("async, Suspend_IAsyncActionWithProgress")
{
    handle event { CreateEvent(nullptr, false, false, nullptr)};
    IAsyncActionWithProgress<double> async = Suspend_IAsyncActionWithProgress(event.get());
    REQUIRE(async.Status() == AsyncStatus::Started);
    async.Close();

    bool completed = false;
    bool progress = false;

    async.Completed([&](const IAsyncActionWithProgress<double> & sender, AsyncStatus status)
    {
        completed = true;
        REQUIRE(async == sender);
        REQUIRE(status == AsyncStatus::Completed);
        SetEvent(event.get()); // signal completion
    });

    REQUIRE_THROWS_AS(async.Completed([&](auto && ...) {}), hresult_illegal_delegate_assignment);

    async.Progress([&](const IAsyncActionWithProgress<double> & sender, double value)
    {
        progress = true;
        REQUIRE(async == sender);
        REQUIRE(value == 789.0);
    });

    SetEvent(event.get()); // signal async to run
    REQUIRE(WaitForSingleObject(event.get(), INFINITE) == WAIT_OBJECT_0); // wait for async to complete
    REQUIRE(completed);
    REQUIRE(progress);
    REQUIRE(async.Status() == AsyncStatus::Completed);
    REQUIRE(async.ErrorCode() == S_OK);
}

TEST_CASE("async, Suspend_IAsyncOperation")
{
    handle event { CreateEvent(nullptr, false, false, nullptr)};
    IAsyncOperation<uint32_t> async = Suspend_IAsyncOperation(event.get());
    REQUIRE(async.Status() == AsyncStatus::Started);
    async.Close();

    bool completed = false;

    async.Completed([&](const IAsyncOperation<uint32_t> & sender, AsyncStatus status)
    {
        completed = true;
        REQUIRE(async == sender);
        REQUIRE(status == AsyncStatus::Completed);
        SetEvent(event.get()); // signal completion
    });

    REQUIRE_THROWS_AS(async.Completed([&](auto && ...) {}), hresult_illegal_delegate_assignment);

    SetEvent(event.get()); // signal async to run
    REQUIRE(WaitForSingleObject(event.get(), INFINITE) == WAIT_OBJECT_0); // wait for async to complete
    REQUIRE(async.GetResults() == 123);
    REQUIRE(completed);
    REQUIRE(async.Status() == AsyncStatus::Completed);
    REQUIRE(async.ErrorCode() == S_OK);
}

TEST_CASE("async, Suspend_IAsyncOperationWithProgress")
{
    handle event { CreateEvent(nullptr, false, false, nullptr)};
    IAsyncOperationWithProgress<uint64_t, uint64_t> async = Suspend_IAsyncOperationWithProgress(event.get());
    REQUIRE(async.Status() == AsyncStatus::Started);
    async.Close();

    bool completed = false;
    bool progress = false;

    async.Completed([&](const IAsyncOperationWithProgress<uint64_t, uint64_t> & sender, AsyncStatus status)
    {
        completed = true;
        REQUIRE(async == sender);
        REQUIRE(status == AsyncStatus::Completed);
        SetEvent(event.get()); // signal completion
    });

    REQUIRE_THROWS_AS(async.Completed([&](auto && ...) {}), hresult_illegal_delegate_assignment);

    async.Progress([&](const IAsyncOperationWithProgress<uint64_t, uint64_t> & sender, uint64_t value)
    {
        progress = true;
        REQUIRE(async == sender);
        REQUIRE(value == 987);
    });

    SetEvent(event.get()); // signal async to run
    REQUIRE(WaitForSingleObject(event.get(), INFINITE) == WAIT_OBJECT_0); // wait for async to complete
    REQUIRE(async.GetResults() == 456);
    REQUIRE(completed);
    REQUIRE(progress);
    REQUIRE(async.Status() == AsyncStatus::Completed);
    REQUIRE(async.ErrorCode() == S_OK);
}

//
// These tests confirm how exceptions are propagated when an error occurs. The Completed handler is
// still called, GetResults will throw the exception, and ErrorCode will return the HRESULT *and* prep
// the WinRT error object for pickup.
//

namespace
{
#if defined(_MSC_VER) 
    __pragma(warning(push))
        __pragma(warning(disable: 4702))    // unreachable code
#endif

        IAsyncAction Throw_IAsyncAction(HANDLE go)
    {
        co_await resume_on_signal(go);
        throw hresult_invalid_argument(L"Throw_IAsyncAction");
    }

    IAsyncActionWithProgress<double> Throw_IAsyncActionWithProgress(HANDLE go)
    {
        co_await resume_on_signal(go);
        throw hresult_invalid_argument(L"Throw_IAsyncActionWithProgress");
    }

    IAsyncOperation<uint32_t> Throw_IAsyncOperation(HANDLE go)
    {
        co_await resume_on_signal(go);
        throw hresult_invalid_argument(L"Throw_IAsyncOperation");
        co_return 123;
    }

    IAsyncOperationWithProgress<uint64_t, uint64_t> Throw_IAsyncOperationWithProgress(HANDLE go)
    {
        co_await resume_on_signal(go);
        throw hresult_invalid_argument(L"Throw_IAsyncOperationWithProgress");
        co_return 456;
    }

#if defined(_MSC_VER) 
    __pragma(warning(pop))
#endif
}

TEST_CASE("async, Throw_IAsyncAction")
{
    handle event { CreateEvent(nullptr, false, false, nullptr)};
    IAsyncAction async = Throw_IAsyncAction(event.get());
    REQUIRE(async.Status() == AsyncStatus::Started);

    SetEvent(event.get()); // signal async to run
    while (async.Status() != AsyncStatus::Error);

    bool completed = false;

    async.Completed([&](const IAsyncAction & sender, AsyncStatus status)
    {
        completed = true;
        REQUIRE(async == sender);
        REQUIRE(status == AsyncStatus::Error);
    });

    REQUIRE(completed);

    try
    {
        async.GetResults();
        REQUIRE(false);
    }
    catch (hresult_invalid_argument const & e)
    {
        REQUIRE(e.message() == L"Throw_IAsyncAction");
    }

    try
    {
        throw_hresult(async.ErrorCode());
    }
    catch (hresult_invalid_argument const & e)
    {
        REQUIRE(e.message() == L"Throw_IAsyncAction");
    }
}

TEST_CASE("async, Throw_IAsyncAction, 2")
{
    handle event { CreateEvent(nullptr, false, false, nullptr)};
    IAsyncAction async = Throw_IAsyncAction(event.get());
    REQUIRE(async.Status() == AsyncStatus::Started);

    bool completed = false;

    async.Completed([&](const IAsyncAction & sender, AsyncStatus status)
    {
        completed = true;
        REQUIRE(async == sender);
        REQUIRE(status == AsyncStatus::Error);
        SetEvent(event.get());
    });

    SetEvent(event.get()); // signal async to run
    REQUIRE(WaitForSingleObject(event.get(), INFINITE) == WAIT_OBJECT_0); // wait for async to be completed
    REQUIRE(async.Status() == AsyncStatus::Error);
    REQUIRE(completed);

    try
    {
        async.GetResults();
        REQUIRE(false);
    }
    catch (hresult_invalid_argument const & e)
    {
        REQUIRE(e.message() == L"Throw_IAsyncAction");
    }

    try
    {
        throw_hresult(async.ErrorCode());
    }
    catch (hresult_invalid_argument const & e)
    {
        REQUIRE(e.message() == L"Throw_IAsyncAction");
    }
}

TEST_CASE("async, Throw_IAsyncActionWithProgress")
{
    handle event { CreateEvent(nullptr, false, false, nullptr)};
    IAsyncActionWithProgress<double> async = Throw_IAsyncActionWithProgress(event.get());
    REQUIRE(async.Status() == AsyncStatus::Started);

    SetEvent(event.get()); // signal async to run
    while (async.Status() != AsyncStatus::Error);

    bool completed = false;

    async.Completed([&](const IAsyncActionWithProgress<double> & sender, AsyncStatus status)
    {
        completed = true;
        REQUIRE(async == sender);
        REQUIRE(status == AsyncStatus::Error);
    });

    REQUIRE(completed);

    try
    {
        async.GetResults();
        REQUIRE(false);
    }
    catch (hresult_invalid_argument const & e)
    {
        REQUIRE(e.message() == L"Throw_IAsyncActionWithProgress");
    }

    try
    {
        throw_hresult(async.ErrorCode());
    }
    catch (hresult_invalid_argument const & e)
    {
        REQUIRE(e.message() == L"Throw_IAsyncActionWithProgress");
    }
}

TEST_CASE("async, Throw_IAsyncActionWithProgress, 2")
{
    handle event { CreateEvent(nullptr, false, false, nullptr)};
    IAsyncActionWithProgress<double> async = Throw_IAsyncActionWithProgress(event.get());
    REQUIRE(async.Status() == AsyncStatus::Started);

    bool completed = false;

    async.Completed([&](const IAsyncActionWithProgress<double> & sender, AsyncStatus status)
    {
        completed = true;
        REQUIRE(async == sender);
        REQUIRE(status == AsyncStatus::Error);
        SetEvent(event.get());
    });

    SetEvent(event.get()); // signal async to run
    REQUIRE(WaitForSingleObject(event.get(), INFINITE) == WAIT_OBJECT_0); // wait for async to be completed
    REQUIRE(async.Status() == AsyncStatus::Error);
    REQUIRE(completed);

    try
    {
        async.GetResults();
        REQUIRE(false);
    }
    catch (hresult_invalid_argument const & e)
    {
        REQUIRE(e.message() == L"Throw_IAsyncActionWithProgress");
    }

    try
    {
        throw_hresult(async.ErrorCode());
    }
    catch (hresult_invalid_argument const & e)
    {
        REQUIRE(e.message() == L"Throw_IAsyncActionWithProgress");
    }
}

TEST_CASE("async, Throw_IAsyncOperation")
{
    handle event { CreateEvent(nullptr, false, false, nullptr)};
    IAsyncOperation<uint32_t> async = Throw_IAsyncOperation(event.get());
    REQUIRE(async.Status() == AsyncStatus::Started);

    SetEvent(event.get()); // signal async to run
    while (async.Status() != AsyncStatus::Error);

    bool completed = false;

    async.Completed([&](const IAsyncOperation<uint32_t> & sender, AsyncStatus status)
    {
        completed = true;
        REQUIRE(async == sender);
        REQUIRE(status == AsyncStatus::Error);
    });

    REQUIRE(completed);

    try
    {
        async.GetResults();
        REQUIRE(false);
    }
    catch (hresult_invalid_argument const & e)
    {
        REQUIRE(e.message() == L"Throw_IAsyncOperation");
    }

    try
    {
        throw_hresult(async.ErrorCode());
    }
    catch (hresult_invalid_argument const & e)
    {
        REQUIRE(e.message() == L"Throw_IAsyncOperation");
    }
}

TEST_CASE("async, Throw_IAsyncOperation, 2")
{
    handle event { CreateEvent(nullptr, false, false, nullptr)};
    IAsyncOperation<uint32_t> async = Throw_IAsyncOperation(event.get());
    REQUIRE(async.Status() == AsyncStatus::Started);

    bool completed = false;

    async.Completed([&](const IAsyncOperation<uint32_t> & sender, AsyncStatus status)
    {
        completed = true;
        REQUIRE(async == sender);
        REQUIRE(status == AsyncStatus::Error);
        SetEvent(event.get());
    });

    SetEvent(event.get()); // signal async to run
    REQUIRE(WaitForSingleObject(event.get(), INFINITE) == WAIT_OBJECT_0); // wait for async to be completed
    REQUIRE(async.Status() == AsyncStatus::Error);
    REQUIRE(completed);

    try
    {
        async.GetResults();
        REQUIRE(false);
    }
    catch (hresult_invalid_argument const & e)
    {
        REQUIRE(e.message() == L"Throw_IAsyncOperation");
    }

    try
    {
        throw_hresult(async.ErrorCode());
    }
    catch (hresult_invalid_argument const & e)
    {
        REQUIRE(e.message() == L"Throw_IAsyncOperation");
    }
}

TEST_CASE("async, Throw_IAsyncOperationWithProgress")
{
    handle event { CreateEvent(nullptr, false, false, nullptr)};
    IAsyncOperationWithProgress<uint64_t, uint64_t> async = Throw_IAsyncOperationWithProgress(event.get());
    REQUIRE(async.Status() == AsyncStatus::Started);

    SetEvent(event.get()); // signal async to run
    while (async.Status() != AsyncStatus::Error);

    bool completed = false;

    async.Completed([&](const IAsyncOperationWithProgress<uint64_t, uint64_t> & sender, AsyncStatus status)
    {
        completed = true;
        REQUIRE(async == sender);
        REQUIRE(status == AsyncStatus::Error);
    });

    REQUIRE(completed);

    try
    {
        async.GetResults();
        REQUIRE(false);
    }
    catch (hresult_invalid_argument const & e)
    {
        REQUIRE(e.message() == L"Throw_IAsyncOperationWithProgress");
    }

    try
    {
        throw_hresult(async.ErrorCode());
    }
    catch (hresult_invalid_argument const & e)
    {
        REQUIRE(e.message() == L"Throw_IAsyncOperationWithProgress");
    }
}

TEST_CASE("async, Throw_IAsyncOperationWithProgress, 2")
{
    handle event { CreateEvent(nullptr, false, false, nullptr)};
    IAsyncOperationWithProgress<uint64_t, uint64_t> async = Throw_IAsyncOperationWithProgress(event.get());
    REQUIRE(async.Status() == AsyncStatus::Started);

    bool completed = false;

    async.Completed([&](const IAsyncOperationWithProgress<uint64_t, uint64_t> & sender, AsyncStatus status)
    {
        completed = true;
        REQUIRE(async == sender);
        REQUIRE(status == AsyncStatus::Error);
        SetEvent(event.get());
    });

    SetEvent(event.get()); // signal async to run
    REQUIRE(WaitForSingleObject(event.get(), INFINITE) == WAIT_OBJECT_0); // wait for async to be completed
    REQUIRE(async.Status() == AsyncStatus::Error);
    REQUIRE(completed);

    try
    {
        async.GetResults();
        REQUIRE(false);
    }
    catch (hresult_invalid_argument const & e)
    {
        REQUIRE(e.message() == L"Throw_IAsyncOperationWithProgress");
    }

    try
    {
        throw_hresult(async.ErrorCode());
    }
    catch (hresult_invalid_argument const & e)
    {
        REQUIRE(e.message() == L"Throw_IAsyncOperationWithProgress");
    }
}

//
// These tests confirm cancelation behavior. These coroutines start by waiting for a signal, 
// call get_cancellation_token, check whether cancelation was requested, set the event to indicate
// to the calling test to acknowledge the cancelation. The calling test coordinates the signaling, 
// ensures the Cancel state was reached, and that GetResults has thrown hresult_illegal_method_call. 
//

namespace
{
    IAsyncAction Cancel_IAsyncAction(HANDLE go)
    {
        co_await resume_on_signal(go);

        auto cancel = co_await get_cancellation_token();

        REQUIRE(cancel());
        SetEvent(go); // signal cancelation
    }

    IAsyncActionWithProgress<double> Cancel_IAsyncActionWithProgress(HANDLE go)
    {
        co_await resume_on_signal(go);

        auto cancel = co_await get_cancellation_token();

        REQUIRE(cancel());
        SetEvent(go); // signal cancelation
    }

    IAsyncOperation<uint32_t> Cancel_IAsyncOperation(HANDLE go)
    {
        co_await resume_on_signal(go);

        auto cancel = co_await get_cancellation_token();

        REQUIRE(cancel());
        SetEvent(go); // signal cancelation
        co_return 123;
    }

    IAsyncOperationWithProgress<uint64_t, uint64_t> Cancel_IAsyncOperationWithProgress(HANDLE go)
    {
        co_await resume_on_signal(go);

        auto cancel = co_await get_cancellation_token();

        REQUIRE(cancel());
        SetEvent(go); // signal cancelation
        co_return 345;
    }
}

TEST_CASE("async, Cancel_IAsyncAction")
{
    handle event { CreateEvent(nullptr, false, false, nullptr)};
    IAsyncAction async = Cancel_IAsyncAction(event.get());
    REQUIRE(async.Status() == AsyncStatus::Started);
    REQUIRE_THROWS_AS(async.GetResults(), hresult_illegal_method_call);

    async.Cancel();
    SetEvent(event.get()); // signal async to run
    REQUIRE(WaitForSingleObject(event.get(), INFINITE) == WAIT_OBJECT_0); // wait for async to be canceled
    REQUIRE(async.Status() == AsyncStatus::Canceled);
    REQUIRE_THROWS_AS(async.GetResults(), hresult_canceled);
    REQUIRE(async.ErrorCode() == HRESULT_FROM_WIN32(ERROR_CANCELLED));

    bool completed = false;
    bool objectMatches = false;
    bool statusMatches = false;

    async.Completed([&](const IAsyncAction & sender, AsyncStatus status)
    {
        completed = true;
        objectMatches = (async == sender);
        statusMatches = (status == AsyncStatus::Canceled);
    });

    REQUIRE(completed);
    REQUIRE(objectMatches);
    REQUIRE(statusMatches);
}

TEST_CASE("async, Cancel_IAsyncAction, 2")
{
    handle event { CreateEvent(nullptr, false, false, nullptr)};
    IAsyncAction async = Cancel_IAsyncAction(event.get());
    REQUIRE(async.Status() == AsyncStatus::Started);
    REQUIRE_THROWS_AS(async.GetResults(), hresult_illegal_method_call);

    bool completed = false;
    bool objectMatches = false;
    bool statusMatches = false;

    async.Completed([&](const IAsyncAction & sender, AsyncStatus status)
    {
        completed = true;
        objectMatches = (async == sender);
        statusMatches = (status == AsyncStatus::Canceled);
    });

    async.Cancel();
    SetEvent(event.get()); // signal async to run
    REQUIRE(WaitForSingleObject(event.get(), INFINITE) == WAIT_OBJECT_0); // wait for async to be canceled
    REQUIRE(async.Status() == AsyncStatus::Canceled);
    REQUIRE_THROWS_AS(async.GetResults(), hresult_canceled);
    REQUIRE(async.ErrorCode() == HRESULT_FROM_WIN32(ERROR_CANCELLED));

    REQUIRE(completed);
    REQUIRE(objectMatches);
    REQUIRE(statusMatches);
}

TEST_CASE("async, Cancel_IAsyncActionWithProgress")
{
    handle event { CreateEvent(nullptr, false, false, nullptr)};
    IAsyncActionWithProgress<double> async = Cancel_IAsyncActionWithProgress(event.get());
    REQUIRE(async.Status() == AsyncStatus::Started);
    REQUIRE_THROWS_AS(async.GetResults(), hresult_illegal_method_call);

    async.Cancel();
    SetEvent(event.get()); // signal async to run
    REQUIRE(WaitForSingleObject(event.get(), INFINITE) == WAIT_OBJECT_0); // wait for async to be canceled
    REQUIRE(async.Status() == AsyncStatus::Canceled);
    REQUIRE_THROWS_AS(async.GetResults(), hresult_canceled);
    REQUIRE(async.ErrorCode() == HRESULT_FROM_WIN32(ERROR_CANCELLED));

    bool completed = false;
    bool objectMatches = false;
    bool statusMatches = false;

    async.Completed([&](const IAsyncActionWithProgress<double> & sender, AsyncStatus status)
    {
        completed = true;
        objectMatches = (async == sender);
        statusMatches = (status == AsyncStatus::Canceled);
    });

    REQUIRE(completed);
    REQUIRE(objectMatches);
    REQUIRE(statusMatches);
}

TEST_CASE("async, Cancel_IAsyncActionWithProgress, 2")
{
    handle event { CreateEvent(nullptr, false, false, nullptr)};
    IAsyncActionWithProgress<double> async = Cancel_IAsyncActionWithProgress(event.get());
    REQUIRE(async.Status() == AsyncStatus::Started);
    REQUIRE_THROWS_AS(async.GetResults(), hresult_illegal_method_call);

    bool completed = false;
    bool objectMatches = false;
    bool statusMatches = false;

    async.Completed([&](const IAsyncActionWithProgress<double> & sender, AsyncStatus status)
    {
        completed = true;
        objectMatches = (async == sender);
        statusMatches = (status == AsyncStatus::Canceled);
    });

    async.Cancel();
    SetEvent(event.get()); // signal async to run
    REQUIRE(WaitForSingleObject(event.get(), INFINITE) == WAIT_OBJECT_0); // wait for async to be canceled
    REQUIRE(async.Status() == AsyncStatus::Canceled);
    REQUIRE_THROWS_AS(async.GetResults(), hresult_canceled);
    REQUIRE(async.ErrorCode() == HRESULT_FROM_WIN32(ERROR_CANCELLED));

    REQUIRE(completed);
    REQUIRE(objectMatches);
    REQUIRE(statusMatches);
}

TEST_CASE("async, Cancel_IAsyncOperation")
{
    handle event { CreateEvent(nullptr, false, false, nullptr)};
    IAsyncOperation<uint32_t> async = Cancel_IAsyncOperation(event.get());
    REQUIRE(async.Status() == AsyncStatus::Started);
    REQUIRE_THROWS_AS(async.GetResults(), hresult_illegal_method_call);

    async.Cancel();
    SetEvent(event.get()); // signal async to run
    REQUIRE(WaitForSingleObject(event.get(), INFINITE) == WAIT_OBJECT_0); // wait for async to be canceled
    REQUIRE(async.Status() == AsyncStatus::Canceled);
    REQUIRE_THROWS_AS(async.GetResults(), hresult_canceled);
    REQUIRE(async.ErrorCode() == HRESULT_FROM_WIN32(ERROR_CANCELLED));

    bool completed = false;
    bool objectMatches = false;
    bool statusMatches = false;

    async.Completed([&](const IAsyncOperation<uint32_t> & sender, AsyncStatus status)
    {
        completed = true;
        objectMatches = (async == sender);
        statusMatches = (status == AsyncStatus::Canceled);
    });

    REQUIRE(completed);
    REQUIRE(objectMatches);
    REQUIRE(statusMatches);
}

TEST_CASE("async, Cancel_IAsyncOperation, 2")
{
    handle event { CreateEvent(nullptr, false, false, nullptr)};
    IAsyncOperation<uint32_t> async = Cancel_IAsyncOperation(event.get());
    REQUIRE(async.Status() == AsyncStatus::Started);
    REQUIRE_THROWS_AS(async.GetResults(), hresult_illegal_method_call);

    bool completed = false;
    bool objectMatches = false;
    bool statusMatches = false;

    async.Completed([&](const IAsyncOperation<uint32_t> & sender, AsyncStatus status)
    {
        completed = true;
        objectMatches = (async == sender);
        statusMatches = (status == AsyncStatus::Canceled);
    });

    async.Cancel();
    SetEvent(event.get()); // signal async to run
    REQUIRE(WaitForSingleObject(event.get(), INFINITE) == WAIT_OBJECT_0); // wait for async to be canceled
    REQUIRE(async.Status() == AsyncStatus::Canceled);
    REQUIRE_THROWS_AS(async.GetResults(), hresult_canceled);
    REQUIRE(async.ErrorCode() == HRESULT_FROM_WIN32(ERROR_CANCELLED));

    REQUIRE(completed);
    REQUIRE(objectMatches);
    REQUIRE(statusMatches);
}

TEST_CASE("async, Cancel_IAsyncOperationWithProgress")
{
    handle event { CreateEvent(nullptr, false, false, nullptr)};
    IAsyncOperationWithProgress<uint64_t, uint64_t> async = Cancel_IAsyncOperationWithProgress(event.get());
    REQUIRE(async.Status() == AsyncStatus::Started);
    REQUIRE_THROWS_AS(async.GetResults(), hresult_illegal_method_call);

    async.Cancel();
    SetEvent(event.get()); // signal async to run
    REQUIRE(WaitForSingleObject(event.get(), INFINITE) == WAIT_OBJECT_0); // wait for async to be canceled
    REQUIRE(async.Status() == AsyncStatus::Canceled);
    REQUIRE_THROWS_AS(async.GetResults(), hresult_canceled);
    REQUIRE(async.ErrorCode() == HRESULT_FROM_WIN32(ERROR_CANCELLED));

    bool completed = false;
    bool objectMatches = false;
    bool statusMatches = false;

    async.Completed([&](const IAsyncOperationWithProgress<uint64_t, uint64_t> & sender, AsyncStatus status)
    {
        completed = true;
        objectMatches = (async == sender);
        statusMatches = (status == AsyncStatus::Canceled);
    });

    REQUIRE(completed);
    REQUIRE(objectMatches);
    REQUIRE(statusMatches);
}

TEST_CASE("async, Cancel_IAsyncOperationWithProgress, 2")
{
    handle event { CreateEvent(nullptr, false, false, nullptr)};
    IAsyncOperationWithProgress<uint64_t, uint64_t> async = Cancel_IAsyncOperationWithProgress(event.get());
    REQUIRE(async.Status() == AsyncStatus::Started);
    REQUIRE_THROWS_AS(async.GetResults(), hresult_illegal_method_call);

    bool completed = false;
    bool objectMatches = false;
    bool statusMatches = false;

    async.Completed([&](const IAsyncOperationWithProgress<uint64_t, uint64_t> & sender, AsyncStatus status)
    {
        completed = true;
        objectMatches = (async == sender);
        statusMatches = (status == AsyncStatus::Canceled);
    });

    async.Cancel();
    SetEvent(event.get()); // signal async to run
    REQUIRE(WaitForSingleObject(event.get(), INFINITE) == WAIT_OBJECT_0); // wait for async to be canceled
    REQUIRE(async.Status() == AsyncStatus::Canceled);
    REQUIRE_THROWS_AS(async.GetResults(), hresult_canceled);
    REQUIRE(async.ErrorCode() == HRESULT_FROM_WIN32(ERROR_CANCELLED));

    REQUIRE(completed);
    REQUIRE(objectMatches);
    REQUIRE(statusMatches);
}

//
// These tests confirm the implicit cancelation behavior. The obeservable behavior should be the same as above
// but the implementation relies on an exception so we confirm that the state changes occur as before.
//

namespace
{
    struct signal_done
    {
        HANDLE signal;

        ~signal_done()
        {
            SetEvent(signal);
        }
    };

    IAsyncAction AutoCancel_IAsyncAction(HANDLE go)
    {
        signal_done d{ go };
        co_await resume_on_signal(go);
        co_await std::experimental::suspend_never{};
        REQUIRE(false);
    }

    IAsyncActionWithProgress<double> AutoCancel_IAsyncActionWithProgress(HANDLE go)
    {
        signal_done d{ go };
        co_await resume_on_signal(go);
        co_await std::experimental::suspend_never{};
        REQUIRE(false);
    }

    IAsyncOperation<uint32_t> AutoCancel_IAsyncOperation(HANDLE go)
    {
        signal_done d{ go };
        co_await resume_on_signal(go);
        co_await std::experimental::suspend_never{};
        REQUIRE(false);
        co_return 0;
    }

    IAsyncOperationWithProgress<uint64_t, uint64_t> AutoCancel_IAsyncOperationWithProgress(HANDLE go)
    {
        signal_done d{ go };
        co_await resume_on_signal(go);
        co_await std::experimental::suspend_never{};
        REQUIRE(false);
        co_return 0;
    }
}

TEST_CASE("async, AutoCancel_IAsyncAction")
{
    handle event { CreateEvent(nullptr, false, false, nullptr)};
    IAsyncAction async = AutoCancel_IAsyncAction(event.get());
    REQUIRE(async.Status() == AsyncStatus::Started);

    async.Cancel();
    SetEvent(event.get()); // signal async to run
    REQUIRE(WaitForSingleObject(event.get(), INFINITE) == WAIT_OBJECT_0); // wait for async to be canceled
    REQUIRE(async.Status() == AsyncStatus::Canceled);
    REQUIRE_THROWS_AS(async.GetResults(), hresult_canceled);

    bool completed = false;
    bool objectMatches = false;
    bool statusMatches = false;

    async.Completed([&](const IAsyncAction & sender, AsyncStatus status)
    {
        completed = true;
        objectMatches = (async == sender);
        statusMatches = (status == AsyncStatus::Canceled);
    });

    REQUIRE(completed);
    REQUIRE(objectMatches);
    REQUIRE(statusMatches);
}

TEST_CASE("async, AutoCancel_IAsyncAction, 2")
{
    handle event { CreateEvent(nullptr, false, false, nullptr)};
    IAsyncAction async = AutoCancel_IAsyncAction(event.get());
    REQUIRE(async.Status() == AsyncStatus::Started);

    bool completed = false;
    bool objectMatches = false;
    bool statusMatches = false;

    async.Completed([&](const IAsyncAction & sender, AsyncStatus status)
    {
        completed = true;
        objectMatches = (async == sender);
        statusMatches = (status == AsyncStatus::Canceled);
    });

    async.Cancel();
    SetEvent(event.get()); // signal async to run
    REQUIRE(WaitForSingleObject(event.get(), INFINITE) == WAIT_OBJECT_0); // wait for async to be canceled
    REQUIRE(async.Status() == AsyncStatus::Canceled);
    REQUIRE_THROWS_AS(async.GetResults(), hresult_canceled);

    REQUIRE(completed);
    REQUIRE(objectMatches);
    REQUIRE(statusMatches);
}

TEST_CASE("async, AutoCancel_IAsyncActionWithProgress")
{
    handle event { CreateEvent(nullptr, false, false, nullptr)};
    IAsyncActionWithProgress<double> async = AutoCancel_IAsyncActionWithProgress(event.get());
    REQUIRE(async.Status() == AsyncStatus::Started);

    async.Cancel();
    SetEvent(event.get()); // signal async to run
    REQUIRE(WaitForSingleObject(event.get(), INFINITE) == WAIT_OBJECT_0); // wait for async to be canceled
    REQUIRE(async.Status() == AsyncStatus::Canceled);
    REQUIRE_THROWS_AS(async.GetResults(), hresult_canceled);

    bool completed = false;
    bool objectMatches = false;
    bool statusMatches = false;

    async.Completed([&](const IAsyncActionWithProgress<double> & sender, AsyncStatus status)
    {
        completed = true;
        objectMatches = (async == sender);
        statusMatches = (status == AsyncStatus::Canceled);
    });

    REQUIRE(completed);
    REQUIRE(objectMatches);
    REQUIRE(statusMatches);
}

TEST_CASE("async, AutoCancel_IAsyncActionWithProgress, 2")
{
    handle event { CreateEvent(nullptr, false, false, nullptr)};
    IAsyncActionWithProgress<double> async = AutoCancel_IAsyncActionWithProgress(event.get());
    REQUIRE(async.Status() == AsyncStatus::Started);

    bool completed = false;
    bool objectMatches = false;
    bool statusMatches = false;

    async.Completed([&](const IAsyncActionWithProgress<double> & sender, AsyncStatus status)
    {
        completed = true;
        objectMatches = (async == sender);
        statusMatches = (status == AsyncStatus::Canceled);
    });

    async.Cancel();
    SetEvent(event.get()); // signal async to run
    REQUIRE(WaitForSingleObject(event.get(), INFINITE) == WAIT_OBJECT_0); // wait for async to be canceled
    REQUIRE(async.Status() == AsyncStatus::Canceled);
    REQUIRE_THROWS_AS(async.GetResults(), hresult_canceled);

    REQUIRE(completed);
    REQUIRE(objectMatches);
    REQUIRE(statusMatches);
}

TEST_CASE("async, AutoCancel_IAsyncOperation")
{
    handle event { CreateEvent(nullptr, false, false, nullptr)};
    IAsyncOperation<uint32_t> async = AutoCancel_IAsyncOperation(event.get());
    REQUIRE(async.Status() == AsyncStatus::Started);

    async.Cancel();
    SetEvent(event.get()); // signal async to run
    REQUIRE(WaitForSingleObject(event.get(), INFINITE) == WAIT_OBJECT_0); // wait for async to be canceled
    REQUIRE(async.Status() == AsyncStatus::Canceled);
    REQUIRE_THROWS_AS(async.GetResults(), hresult_canceled);

    bool completed = false;
    bool objectMatches = false;
    bool statusMatches = false;

    async.Completed([&](const IAsyncOperation<uint32_t> & sender, AsyncStatus status)
    {
        completed = true;
        objectMatches = (async == sender);
        statusMatches = (status == AsyncStatus::Canceled);
    });

    REQUIRE(completed);
    REQUIRE(objectMatches);
    REQUIRE(statusMatches);
}

TEST_CASE("async, AutoCancel_IAsyncOperation, 2")
{
    handle event { CreateEvent(nullptr, false, false, nullptr)};
    IAsyncOperation<uint32_t> async = AutoCancel_IAsyncOperation(event.get());
    REQUIRE(async.Status() == AsyncStatus::Started);

    bool completed = false;
    bool objectMatches = false;
    bool statusMatches = false;

    async.Completed([&](const IAsyncOperation<uint32_t> & sender, AsyncStatus status)
    {
        completed = true;
        objectMatches = (async == sender);
        statusMatches = (status == AsyncStatus::Canceled);
    });

    async.Cancel();
    SetEvent(event.get()); // signal async to run
    REQUIRE(WaitForSingleObject(event.get(), INFINITE) == WAIT_OBJECT_0); // wait for async to be canceled
    REQUIRE(async.Status() == AsyncStatus::Canceled);
    REQUIRE_THROWS_AS(async.GetResults(), hresult_canceled);

    REQUIRE(completed);
    REQUIRE(objectMatches);
    REQUIRE(statusMatches);
}

TEST_CASE("async, AutoCancel_IAsyncOperationWithProgress")
{
    handle event { CreateEvent(nullptr, false, false, nullptr)};
    IAsyncOperationWithProgress<uint64_t, uint64_t> async = AutoCancel_IAsyncOperationWithProgress(event.get());
    REQUIRE(async.Status() == AsyncStatus::Started);

    async.Cancel();
    SetEvent(event.get()); // signal async to run
    REQUIRE(WaitForSingleObject(event.get(), INFINITE) == WAIT_OBJECT_0); // wait for async to be canceled
    REQUIRE(async.Status() == AsyncStatus::Canceled);
    REQUIRE_THROWS_AS(async.GetResults(), hresult_canceled);

    bool completed = false;
    bool objectMatches = false;
    bool statusMatches = false;

    async.Completed([&](const IAsyncOperationWithProgress<uint64_t, uint64_t> & sender, AsyncStatus status)
    {
        completed = true;
        objectMatches = (async == sender);
        statusMatches = (status == AsyncStatus::Canceled);
    });

    REQUIRE(completed);
    REQUIRE(objectMatches);
    REQUIRE(statusMatches);
}

TEST_CASE("async, AutoCancel_IAsyncOperationWithProgress, 2")
{
    handle event { CreateEvent(nullptr, false, false, nullptr)};
    IAsyncOperationWithProgress<uint64_t, uint64_t> async = AutoCancel_IAsyncOperationWithProgress(event.get());
    REQUIRE(async.Status() == AsyncStatus::Started);

    bool completed = false;
    bool objectMatches = false;
    bool statusMatches = false;

    async.Completed([&](const IAsyncOperationWithProgress<uint64_t, uint64_t> & sender, AsyncStatus status)
    {
        completed = true;
        objectMatches = (async == sender);
        statusMatches = (status == AsyncStatus::Canceled);
    });

    async.Cancel();
    SetEvent(event.get()); // signal async to run
    REQUIRE(WaitForSingleObject(event.get(), INFINITE) == WAIT_OBJECT_0); // wait for async to be canceled
    REQUIRE(async.Status() == AsyncStatus::Canceled);
    REQUIRE_THROWS_AS(async.GetResults(), hresult_canceled);

    REQUIRE(completed);
    REQUIRE(objectMatches);
    REQUIRE(statusMatches);
}

//
// These tests cover the basic behavior of the .get methods for blocking wait. Here we test for both blocking
// and non-blocking coroutines to illustrate both OS sleep and non-suspension.
//

TEST_CASE("async, get, no suspend with success")
{
    NoSuspend_IAsyncAction().get();
    NoSuspend_IAsyncActionWithProgress().get();
    REQUIRE(123 == NoSuspend_IAsyncOperation().get());
    REQUIRE(456 == NoSuspend_IAsyncOperationWithProgress().get());
}

TEST_CASE("async, get, suspend with success")
{
    handle event{ CreateEvent(nullptr, true, false, nullptr) };

    auto a = Suspend_IAsyncAction(event.get());
    auto b = Suspend_IAsyncActionWithProgress(event.get());
    auto c = Suspend_IAsyncOperation(event.get());
    auto d = Suspend_IAsyncOperationWithProgress(event.get());

    SetEvent(event.get()); // signal all to run

    a.get();
    b.get();
    REQUIRE(123 == c.get());
    REQUIRE(456 == d.get());
}

TEST_CASE("async, get, failure")
{
    handle event{ CreateEvent(nullptr, true, false, nullptr) };
    SetEvent(event.get());

    auto a = Throw_IAsyncAction(event.get());
    auto b = Throw_IAsyncActionWithProgress(event.get());
    auto c = Throw_IAsyncOperation(event.get());
    auto d = Throw_IAsyncOperationWithProgress(event.get());

    try
    {
        a.get();
        REQUIRE(false);
    }
    catch (hresult_invalid_argument const & e)
    {
        REQUIRE(e.message() == L"Throw_IAsyncAction");
    }

    try
    {
        b.get();
        REQUIRE(false);
    }
    catch (hresult_invalid_argument const & e)
    {
        REQUIRE(e.message() == L"Throw_IAsyncActionWithProgress");
    }

    try
    {
        c.get();
        REQUIRE(false);
    }
    catch (hresult_invalid_argument const & e)
    {
        REQUIRE(e.message() == L"Throw_IAsyncOperation");
    }

    try
    {
        d.get();
        REQUIRE(false);
    }
    catch (hresult_invalid_argument const & e)
    {
        REQUIRE(e.message() == L"Throw_IAsyncOperationWithProgress");
    }
}

//
// The resume_background test just checks whether a thread switch occurred, indicating that the 
// coroutine resumed on the thread pool.
//

namespace
{
    IAsyncAction test_resume_background(uint32_t & before, uint32_t & after)
    {
        before = GetCurrentThreadId();
        co_await resume_background();
        after = GetCurrentThreadId();
    }
}

TEST_CASE("async, resume_background")
{
    uint32_t before = 0;
    uint32_t after = 0;

    test_resume_background(before, after).get();

    REQUIRE(before == GetCurrentThreadId());
    REQUIRE(after != GetCurrentThreadId());
}

//
// The resume_after test confirms that a zero duration does not suspend the coroutine,
// while a non-zero duration suspends the coroutine and resumes on the thread pool.
//

namespace
{
    IAsyncAction test_resume_after(uint32_t & before, uint32_t & after)
    {
        co_await 0s; // should not suspend
        before = GetCurrentThreadId();

        co_await 1us; // should suspend and resume on background thread
        after = GetCurrentThreadId();
    }
}

TEST_CASE("async, resume_after")
{
    uint32_t before = 0;
    uint32_t after = 0;

    test_resume_after(before, after).get();

    REQUIRE(before == GetCurrentThreadId());
    REQUIRE(after != GetCurrentThreadId());
}

//
// Other tests already excercise resume_on_signal so here we focus on testing the timeout.
//

namespace
{
    IAsyncAction test_resume_on_signal(HANDLE signal)
    {
        const uint32_t caller = GetCurrentThreadId();

        co_await resume_on_signal(signal); // should not suspend because already signaled
        REQUIRE(caller == GetCurrentThreadId()); // still on calling thread

        REQUIRE(false == co_await resume_on_signal(signal, 1us)); // should suspend but timeout
        REQUIRE(caller != GetCurrentThreadId()); // now on background thread

        REQUIRE(true == co_await resume_on_signal(signal, 1s)); // should eventually succeed
    }
}

TEST_CASE("async, resume_on_signal")
{
    handle event { CreateEvent(nullptr, false, true, nullptr)};
    IAsyncAction async = test_resume_on_signal(event.get());

    Sleep(50);
    SetEvent(event.get()); // allow final resume_on_signal to succeed
    async.get();
}
