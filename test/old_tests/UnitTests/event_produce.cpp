#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows;
using namespace Windows::Foundation;
using namespace Windows::Graphics::Display;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::System::Threading;

static const DWORD max_sleep = 10000;

struct check_invoke
{
    void set_invoked()
    {
        m_invoked = true;
    }

    bool get_invoked()
    {
        bool retval = m_invoked;
        m_invoked = false;
        return retval;
    }

private:
    bool m_invoked{ false };
};

check_invoke member_invoked;
check_invoke lambda_invoked;

struct MemberHandler
{
    void handler(const DisplayInformation & sender, const Windows::Foundation::IInspectable & args)
    {
        REQUIRE(sender == nullptr);
        REQUIRE(args == nullptr);
        member_invoked.set_invoked();
    }
};

MemberHandler handler_object;
TypedEventHandler<DisplayInformation, Windows::Foundation::IInspectable> member_delegate(&handler_object, &MemberHandler::handler);

TypedEventHandler<DisplayInformation, Windows::Foundation::IInspectable> lambda_delegate = [](const DisplayInformation & sender, const Windows::Foundation::IInspectable & args)
{
    REQUIRE(sender == nullptr);
    REQUIRE(args == nullptr);
    lambda_invoked.set_invoked();
};

template <typename T>
void BasicTest()
{
    T test_event;

    auto lambda_token = test_event.add(lambda_delegate);

    // Lambda should be invoked
    test_event(nullptr, nullptr);
    REQUIRE(lambda_invoked.get_invoked());

    auto member_token = test_event.add(member_delegate);

    // Both delegates should be invoked
    test_event(nullptr, nullptr);
    REQUIRE(lambda_invoked.get_invoked());
    REQUIRE(member_invoked.get_invoked());

    // Member should be invoked
    test_event.remove(lambda_token);
    test_event(nullptr, nullptr);
    REQUIRE(member_invoked.get_invoked());
    REQUIRE(!lambda_invoked.get_invoked());

    // No delegates should be invoked
    test_event.remove(member_token);
    test_event(nullptr, nullptr);
    REQUIRE(!member_invoked.get_invoked());
    REQUIRE(!lambda_invoked.get_invoked());
}

TEST_CASE("agile event, basic add/remove/invoke")
{
    BasicTest<event<TypedEventHandler<DisplayInformation, Windows::Foundation::IInspectable>>>();
}

struct BlockingHandler
{
    enum HandlerState
    {
        NotStarted,
        OK,
        Executing,
        Error
    };

    void handler(const DisplayInformation &, const Windows::Foundation::IInspectable &)
    {
        m_state = Executing;

        SetEvent(m_invoking.get());

        DWORD wait_result = WaitForSingleObject(m_continue.get(), max_sleep);

        if (wait_result != WAIT_OBJECT_0)
        {
            m_state = Error;
        }
        else 
        {
            m_state = OK;
        }

        SetEvent(m_invoke_result_set.get());
    }

    bool finish_invoking()
    {
        SetEvent(m_continue.get());
        DWORD wait_result = WaitForSingleObject(m_invoke_result_set.get(), max_sleep);

        if (wait_result == WAIT_OBJECT_0)
        {
            return true;
        }

        return false;
    }

    bool block_until_invoking()
    {
        DWORD wait_result = WaitForSingleObject(m_invoking.get(), max_sleep);
     
        if (wait_result == WAIT_OBJECT_0)
        {
            return true;
        }

        return false;
    }

    void reset()
    {
        m_state = NotStarted;
        ResetEvent(m_invoking.get());
        ResetEvent(m_continue.get());
        ResetEvent(m_invoke_result_set.get());
    }

    HandlerState get_state() const
    {
        return m_state;
    }

private:
    handle m_continue{ CreateEvent(nullptr, false, false, nullptr) };
    handle m_invoking{ CreateEvent(nullptr, false, false, nullptr) };
    handle m_invoke_result_set{ CreateEvent(nullptr, false, false, nullptr) };
    HandlerState m_state{ NotStarted };
};

BlockingHandler blocking_object1;
BlockingHandler blocking_object2;

event_token blocking_object1_token;
event_token blocking_object2_token;

TypedEventHandler<DisplayInformation, Windows::Foundation::IInspectable> blocking_delegate1(&blocking_object1, &BlockingHandler::handler);
TypedEventHandler<DisplayInformation, Windows::Foundation::IInspectable> blocking_delegate2(&blocking_object2, &BlockingHandler::handler);

template <typename T>
void ConcurrentAddTest()
{
    T test_event;

    // Do all catch framework tests on the main thread, but grab the results from the appropriate thread as soon as they're available
    bool thread1_check_handler1_not_started = false;
    bool thread2_check_handler1_ok = false;
    bool thread2_check_handler1_block = false;
    bool thread2_check_handler2_not_started = false;
    bool thread2_check_handler1_finished = false;
    DWORD thread3_block_result = 0;
    bool thread3_check_handler1_ok = false;
    bool thread3_check_handler2_ok = false;
    bool thread3_check_handler1_block = false;
    bool thread3_check_handler1_finished = false;
    bool thread3_check_handler2_block = false;
    bool thread3_check_handler2_finished = false;

    handle start_phase_two{ CreateEvent(nullptr, false, false, nullptr) };

    auto invoke_single_handler = ThreadPool::RunAsync([&](auto && ...)
    {
        // Add the first handler then invoke. It will block.
        blocking_object1_token = test_event.add(blocking_delegate1);
        thread1_check_handler1_not_started = (blocking_object1.get_state() == BlockingHandler::NotStarted);
        test_event(nullptr, nullptr);
    });

    auto invoke_two_handlers = ThreadPool::RunAsync([&](auto && ...)
    {
        // Add the second handler while the first handler is executing
        thread2_check_handler1_block = blocking_object1.block_until_invoking();

        blocking_object2_token = test_event.add(blocking_delegate2);
        thread2_check_handler2_not_started = (blocking_object2.get_state() == BlockingHandler::NotStarted);

        thread2_check_handler1_finished = blocking_object1.finish_invoking();

        // Make sure handler executed in thread 1 succeeded
        thread2_check_handler1_ok = (blocking_object1.get_state() == BlockingHandler::OK);

        blocking_object1.reset();

        SetEvent(start_phase_two.get());

        // Invoke both handlers
        test_event(nullptr, nullptr);
    });

    auto finish_invoking = ThreadPool::RunAsync([&](auto && ...)
    {
        thread3_block_result = WaitForSingleObject(start_phase_two.get(), max_sleep);

        thread3_check_handler1_block = blocking_object1.block_until_invoking();
        thread3_check_handler1_finished = blocking_object1.finish_invoking();

        thread3_check_handler2_block = blocking_object2.block_until_invoking();
        thread3_check_handler2_finished = blocking_object2.finish_invoking();

        // Make sure handlers executed in thread 2 succeeded
        thread3_check_handler1_ok = (blocking_object1.get_state() == BlockingHandler::OK);
        thread3_check_handler2_ok = (blocking_object2.get_state() == BlockingHandler::OK);
    });

    invoke_single_handler.get();
    invoke_two_handlers.get();
    finish_invoking.get();

    REQUIRE(thread1_check_handler1_not_started);
    REQUIRE(thread2_check_handler1_ok);
    REQUIRE(thread2_check_handler1_block);
    REQUIRE(thread2_check_handler2_not_started);
    REQUIRE(thread2_check_handler1_finished);
    REQUIRE(thread3_block_result == WAIT_OBJECT_0);
    REQUIRE(thread3_check_handler1_ok);
    REQUIRE(thread3_check_handler2_ok);
    REQUIRE(thread3_check_handler1_block);
    REQUIRE(thread3_check_handler1_finished);
    REQUIRE(thread3_check_handler2_block);
    REQUIRE(thread3_check_handler2_finished);

    test_event.remove(blocking_object1_token);
    test_event.remove(blocking_object2_token);

    blocking_object1.reset();
    blocking_object2.reset();
}

TEST_CASE("agile event, add an event when the event source is already being invoked")
{
    ConcurrentAddTest<event<TypedEventHandler<DisplayInformation, Windows::Foundation::IInspectable>>>();
}

template <typename T>
void ConcurrentRemoveTest()
{
    T test_event;

    // Do all catch framework tests on the main thread, but grab the results from the appropriate thread as soon as they're available
    bool thread1_check_handler1_not_started = false;
    bool thread1_check_handler2_not_started = false;
    bool thread2_check_handler1_ok = false;
    bool thread2_check_handler2_ok = false;
    bool thread2_check_handler1_block = false;
    bool thread2_check_handler2_block = false;
    bool thread2_check_handler1_finished = false;
    bool thread2_check_handler2_finished = false;
    DWORD thread3_block_result = 0;
    bool thread3_check_handler1_not_started = false;
    bool thread3_check_handler2_block = false;
    bool thread3_check_handler2_finished = false;
    bool thread3_check_handler2_ok = false;

    handle start_phase_two{ CreateEvent(nullptr, false, false, nullptr) };

    auto invoke_two_handlers = ThreadPool::RunAsync([&](auto && ...)
    {
        // Add the first handler then invoke. It will block.
        blocking_object1_token = test_event.add(blocking_delegate1);
        blocking_object2_token = test_event.add(blocking_delegate2);

        thread1_check_handler1_not_started = (blocking_object1.get_state() == BlockingHandler::NotStarted);
        thread1_check_handler2_not_started = (blocking_object2.get_state() == BlockingHandler::NotStarted);

        test_event(nullptr, nullptr);
    });

    auto invoke_single_handler = ThreadPool::RunAsync([&](auto && ...)
    {
        thread2_check_handler1_block = blocking_object1.block_until_invoking();
        test_event.remove(blocking_object1_token);
        thread2_check_handler1_finished = blocking_object1.finish_invoking();

        thread2_check_handler2_block = blocking_object2.block_until_invoking();
        thread2_check_handler2_finished = blocking_object2.finish_invoking();

        // Make sure handlers executed in thread 1 succeeded
        thread2_check_handler1_ok = (blocking_object1.get_state() == BlockingHandler::OK);
        thread2_check_handler2_ok = (blocking_object2.get_state() == BlockingHandler::OK);

        blocking_object1.reset();
        blocking_object2.reset();

        SetEvent(start_phase_two.get());

        // Invoke both handlers
        test_event(nullptr, nullptr);
    });

    auto finish_invoking = ThreadPool::RunAsync([&](auto && ...)
    {
        thread3_block_result = WaitForSingleObject(start_phase_two.get(), max_sleep);

        thread3_check_handler2_block = blocking_object2.block_until_invoking();
        thread3_check_handler2_finished = blocking_object2.finish_invoking();

        // Make sure handler executed in thread 1 succeeded
        thread3_check_handler1_not_started = (blocking_object1.get_state() == BlockingHandler::NotStarted);
        thread3_check_handler2_ok = (blocking_object2.get_state() == BlockingHandler::OK);
    });

    invoke_single_handler.get();
    invoke_two_handlers.get();
    finish_invoking.get();

    REQUIRE(thread1_check_handler1_not_started);
    REQUIRE(thread1_check_handler2_not_started);
    REQUIRE(thread2_check_handler1_ok);
    REQUIRE(thread2_check_handler2_ok);
    REQUIRE(thread2_check_handler1_block);
    REQUIRE(thread2_check_handler2_block);
    REQUIRE(thread2_check_handler1_finished);
    REQUIRE(thread2_check_handler2_finished);
    REQUIRE(thread3_block_result == WAIT_OBJECT_0);
    REQUIRE(thread3_check_handler1_not_started);
    REQUIRE(thread3_check_handler2_block);
    REQUIRE(thread3_check_handler2_finished);
    REQUIRE(thread3_check_handler2_ok);

    test_event.remove(blocking_object2_token);

    blocking_object1.reset();
    blocking_object2.reset();

    // Invoke again, now that all handlers have been removed. There should be no handlers executed.
    test_event(nullptr, nullptr);

    REQUIRE(blocking_object1.get_state() == BlockingHandler::NotStarted);
    REQUIRE(blocking_object2.get_state() == BlockingHandler::NotStarted);
}

TEST_CASE("agile event, remove an event when the event source is already being invoked")
{
    ConcurrentRemoveTest<event<TypedEventHandler<DisplayInformation, Windows::Foundation::IInspectable>>>();
}
