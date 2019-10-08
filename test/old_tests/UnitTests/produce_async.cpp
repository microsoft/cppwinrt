#include "pch.h"
#include "catch.hpp"

//
// These tests cover the production of the various async interfaces.
// Tests ensure that the ABI surface lines up on the consumer and producer sides and this is mainly done simply by calling
// the various inteface methods.
//

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Web::Syndication;
using namespace Windows::Foundation::Diagnostics;
using namespace Windows::Management::Deployment;

//
// IAsyncInfo
//

struct AsyncInfo : implements<AsyncInfo, IAsyncInfo>
{
    uint32_t Id() { return 123; }
    AsyncStatus Status() { return AsyncStatus::Started; }
    HRESULT ErrorCode() { return S_FALSE; }
    void Cancel() {}
    void Close() {}
};

TEST_CASE("AsyncInfo")
{
    IAsyncInfo info = make<AsyncInfo>();

    REQUIRE(info.Id() == 123);
    REQUIRE(info.Status() == AsyncStatus::Started);
    REQUIRE(info.ErrorCode() == S_FALSE);
    info.Cancel();
    info.Close();
}

//
// IAsyncAction
//

struct AsyncAction : implements<AsyncAction, IAsyncAction>
{
    AsyncActionCompletedHandler m_completed;

    void Completed(const AsyncActionCompletedHandler & handler)
    {
        m_completed = handler;
    }

    AsyncActionCompletedHandler Completed()
    {
        return m_completed;
    }

    void GetResults() const
    {
        m_completed(*this, AsyncStatus::Completed);
    }
};

TEST_CASE("AsyncAction")
{
    IAsyncAction action = make<AsyncAction>();

    AsyncActionCompletedHandler completed = [&] (const IAsyncAction & asyncInfo, AsyncStatus asyncStatus)
    {
        REQUIRE(asyncInfo == action);
        REQUIRE(asyncStatus == AsyncStatus::Completed);
    };

    action.Completed(completed);
    REQUIRE(completed == action.Completed());

    action.GetResults();
}

//
// IAsyncActionWithProgress
//

template <typename T>
struct AsyncActionWithProgress : implements<AsyncActionWithProgress<T>, IAsyncActionWithProgress<T>>
{
    AsyncActionProgressHandler<T> m_progress;
    AsyncActionWithProgressCompletedHandler<T> m_completed;
    T m_value;

    AsyncActionWithProgress(T const & value) :
        m_value(value)
    {}

    void Progress(const AsyncActionProgressHandler<T> & handler)
    {
        m_progress = handler;
    }

    AsyncActionProgressHandler<T> Progress()
    {
        return m_progress;
    }

    void Completed(const AsyncActionWithProgressCompletedHandler<T> & handler)
    {
        m_completed = handler;
    }

    AsyncActionWithProgressCompletedHandler<T> Completed()
    {
        return m_completed;
    }

    void GetResults()
    {
        m_progress(*this, m_value);
        m_completed(*this, AsyncStatus::Completed);
    }
};

// This producer tests that IAsyncActionWithProgress may be specialized with a value type.

TEST_CASE("AsyncActionWithProgress_double")
{
    IAsyncActionWithProgress<double> action = make<AsyncActionWithProgress<double>>(123);

    AsyncActionProgressHandler<double> progress = [&] (const IAsyncActionWithProgress<double> & sender, double args)
    {
        REQUIRE(sender == action);
        REQUIRE(args == 123);
    };

    AsyncActionWithProgressCompletedHandler<double> completed = [&] (const IAsyncActionWithProgress<double> & sender, const AsyncStatus args)
    {
        REQUIRE(sender == action);
        REQUIRE(args == AsyncStatus::Completed);
    };

    action.Progress(progress);
    REQUIRE(progress == action.Progress());

    action.Completed(completed);
    REQUIRE(completed == action.Completed());

    action.GetResults();
}

// This producer tests that IAsyncActionWithProgress may be specialized with a structure.

TEST_CASE("produce_IAsyncActionWithProgress_TransferProgress")
{
    IAsyncActionWithProgress<TransferProgress> action = make<AsyncActionWithProgress<TransferProgress>>(TransferProgress{ 1, 2, 3, 4 });

    AsyncActionProgressHandler<TransferProgress> progress = [&](const IAsyncActionWithProgress<TransferProgress> & sender, const TransferProgress & args)
    {
        REQUIRE(sender == action);
        REQUIRE(args.BytesSent == 1);
        REQUIRE(args.TotalBytesToSend == 2);
        REQUIRE(args.BytesRetrieved == 3);
        REQUIRE(args.TotalBytesToRetrieve == 4);
    };

    AsyncActionWithProgressCompletedHandler<TransferProgress> completed = [&](const IAsyncActionWithProgress<TransferProgress> & sender, const AsyncStatus args)
    {
        REQUIRE(sender == action);
        REQUIRE(args == AsyncStatus::Completed);
    };

    action.Progress(progress);
    REQUIRE(progress == action.Progress());

    action.Completed(completed);
    REQUIRE(completed == action.Completed());

    action.GetResults();
}

//
// IAsyncOperation
//

template <typename T>
struct AsyncOperation : implements<AsyncOperation<T>, IAsyncOperation<T>>
{
    AsyncOperationCompletedHandler<T> m_completed;
    T m_value;

    AsyncOperation(T const & value) :
        m_value(value)
    {}

    void Completed(const AsyncOperationCompletedHandler<T> & handler)
    {
        m_completed = handler;
    }

    AsyncOperationCompletedHandler<T> Completed()
    {
        return m_completed;
    }

    T GetResults() const
    {
        m_completed(*this, AsyncStatus::Completed);
        return m_value;
    }
};

// This producer tests that IAsyncOperation may be specialized with a value type.

TEST_CASE("produce_IAsyncOperation_uint32_t")
{
    IAsyncOperation<uint32_t> operation = make<AsyncOperation<uint32_t>>(123);

    AsyncOperationCompletedHandler<uint32_t> completed = [&] (const IAsyncOperation<uint32_t> & sender, const AsyncStatus args)
    {
        REQUIRE(sender == operation);
        REQUIRE(args == AsyncStatus::Completed);
    };

    operation.Completed(completed);
    REQUIRE(completed == operation.Completed());

    REQUIRE(123 == operation.GetResults());
}

// This producer tests that IAsyncOperation may be specialized with a string.

TEST_CASE("produce_IAsyncOperation_hstring")
{
    IAsyncOperation<hstring> operation = make<AsyncOperation<hstring>>(L"value");

    AsyncOperationCompletedHandler<hstring> completed = [&](const IAsyncOperation<hstring> & sender, const AsyncStatus args)
    {
        REQUIRE(sender == operation);
        REQUIRE(args == AsyncStatus::Completed);
    };

    operation.Completed(completed);
    REQUIRE(completed == operation.Completed());

    REQUIRE(L"value" == operation.GetResults());
}

// This producer tests that IAsyncOperation may be specialized with a runtime class.

struct TestErrorDetails : implements<TestErrorDetails, IErrorDetails>
{
    hstring Description() { return L"description"; }
    hstring LongDescription() { return L"long description"; }
    Windows::Foundation::Uri HelpUri() { return nullptr; }
};

TEST_CASE("produce_IAsyncOperation_ErrorDetails")
{
    IAsyncOperation<ErrorDetails> operation = make<AsyncOperation<ErrorDetails>>(make<TestErrorDetails>().as<ErrorDetails>());

    AsyncOperationCompletedHandler<ErrorDetails> completed = [&](const IAsyncOperation<ErrorDetails> & sender, const AsyncStatus args)
    {
        REQUIRE(sender == operation);
        REQUIRE(args == AsyncStatus::Completed);
    };

    operation.Completed(completed);
    REQUIRE(completed == operation.Completed());

    REQUIRE(L"description" == operation.GetResults().Description());
}

//
// IAsyncOperationWithProgress
//

template <typename TResult, typename TProgress>
struct AsyncOperationWithProgress : implements<AsyncOperationWithProgress<TResult, TProgress>, IAsyncOperationWithProgress<TResult, TProgress>>
{
    AsyncOperationProgressHandler<TResult, TProgress> m_progress;
    AsyncOperationWithProgressCompletedHandler<TResult, TProgress> m_completed;
    TResult m_resultValue;
    TProgress m_progressValue;

    AsyncOperationWithProgress(TResult const & result, TProgress const & progress) :
        m_resultValue(result),
        m_progressValue(progress)
    {}

    void Progress(const AsyncOperationProgressHandler<TResult, TProgress> & handler)
    {
        m_progress = handler;
    }

    AsyncOperationProgressHandler<TResult, TProgress> Progress()
    {
        return m_progress;
    }

    void Completed(const AsyncOperationWithProgressCompletedHandler<TResult, TProgress> & handler)
    {
        m_completed = handler;
    }

    AsyncOperationWithProgressCompletedHandler<TResult, TProgress> Completed()
    {
        return m_completed;
    }

    TResult GetResults()
    {
        m_progress(*this, m_progressValue);
        m_completed(*this, AsyncStatus::Completed);
        return m_resultValue;
    }
};

// This producer tests that IAsyncOperationWithProgress may be specialized with value types.

TEST_CASE("produce_IAsyncOperationWithProgress_uint64_t_uint64_t")
{
    IAsyncOperationWithProgress<uint64_t, uint64_t> operation = make<AsyncOperationWithProgress<uint64_t, uint64_t>>(234, 123);

    AsyncOperationProgressHandler<uint64_t, uint64_t> progress = [&](const IAsyncOperationWithProgress<uint64_t, uint64_t> & sender, uint64_t args)
    {
        REQUIRE(sender == operation);
        REQUIRE(args == 123);
    };

    AsyncOperationWithProgressCompletedHandler<uint64_t, uint64_t> completed = [&](const IAsyncOperationWithProgress<uint64_t, uint64_t> & sender, const AsyncStatus args)
    {
        REQUIRE(sender == operation);
        REQUIRE(args == AsyncStatus::Completed);
    };

    operation.Progress(progress);
    REQUIRE(progress == operation.Progress());

    operation.Completed(completed);
    REQUIRE(completed == operation.Completed());

    REQUIRE(234 == operation.GetResults());
}

// This producer tests that IAsyncOperationWithProgress may be specialized with class and struct.

struct TestDeploymentResult : implements<TestDeploymentResult, IDeploymentResult>
{
    hstring ErrorText() { return L"ErrorText"; }
    guid ActivityId() { return {}; }
    HRESULT ExtendedErrorCode() { return E_FAIL; }
};

TEST_CASE("produce_IAsyncOperationWithProgress_DeploymentResult_DeploymentProgress")
{
    IAsyncOperationWithProgress<DeploymentResult, DeploymentProgress> operation = make<AsyncOperationWithProgress<DeploymentResult, DeploymentProgress>>(make<TestDeploymentResult>().as<DeploymentResult>(), DeploymentProgress{ DeploymentProgressState::Queued, 50 });

    AsyncOperationProgressHandler<DeploymentResult, DeploymentProgress> progress = [&](const IAsyncOperationWithProgress<DeploymentResult, DeploymentProgress> & sender, const DeploymentProgress & args)
    {
        REQUIRE(sender == operation);
        REQUIRE(args.state == DeploymentProgressState::Queued);
        REQUIRE(args.percentage == 50);
    };

    AsyncOperationWithProgressCompletedHandler<DeploymentResult, DeploymentProgress> completed = [&](const IAsyncOperationWithProgress<DeploymentResult, DeploymentProgress> & sender, const AsyncStatus args)
    {
        REQUIRE(sender == operation);
        REQUIRE(args == AsyncStatus::Completed);
    };

    operation.Progress(progress);
    REQUIRE(progress == operation.Progress());

    operation.Completed(completed);
    REQUIRE(completed == operation.Completed());

    REQUIRE(operation.GetResults().ErrorText() == L"ErrorText");
}

