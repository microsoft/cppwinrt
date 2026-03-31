#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    // To avoid requiring a second principal, a modified token is used to test impersonation.
    access_token get_modified()
    {
        access_token token;
        check_bool(OpenProcessToken(GetCurrentProcess(), TOKEN_DUPLICATE, token.put()));
        access_token duplicate;
        check_bool(DuplicateTokenEx(token.get(), TOKEN_ADJUST_PRIVILEGES | TOKEN_IMPERSONATE, nullptr, SecurityImpersonation, TokenImpersonation, duplicate.put()));

        TOKEN_PRIVILEGES privileges{};
        privileges.PrivilegeCount = 1;
        privileges.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;
        check_bool(LookupPrivilegeValueW(nullptr, L"SeShutdownPrivilege", &privileges.Privileges[0].Luid));
        check_bool(AdjustTokenPrivileges(duplicate.get(), FALSE, &privileges, sizeof(TOKEN_PRIVILEGES), nullptr, nullptr));
        return duplicate;
    }

    bool has_thread_token()
    {
        return static_cast<bool>(access_token::thread());
    }

    bool check_privilege()
    {
        if (!has_thread_token())
        {
            return false;
        }

        PRIVILEGE_SET privileges{};
        privileges.PrivilegeCount = 1;
        privileges.Privilege[0].Attributes = SE_PRIVILEGE_ENABLED;
        check_bool(LookupPrivilegeValueW(nullptr, L"SeShutdownPrivilege", &privileges.Privilege[0].Luid));

        access_token token;
        check_bool(OpenThreadToken(GetCurrentThread(), TOKEN_QUERY, TRUE, token.put()));
        BOOL result{};
        check_bool(PrivilegeCheck(token.get(), &privileges, &result));
        return result;
    }

    IAsyncAction Async()
    {
        REQUIRE(check_privilege());
        REQUIRE(has_thread_token());
        access_token empty;
        empty.revert();
        REQUIRE(!check_privilege());
        REQUIRE(!has_thread_token());

        auto process = access_token::process();
        auto modified = get_modified();

        DWORD before = GetCurrentThreadId();
        co_await resume_background();
        DWORD after = GetCurrentThreadId();
        REQUIRE(before != after);
        REQUIRE(!check_privilege());
        REQUIRE(!has_thread_token());

        co_await resume_background(process);
        REQUIRE(!check_privilege());
        REQUIRE(has_thread_token());

        co_await resume_background(modified);
        REQUIRE(check_privilege());
        REQUIRE(has_thread_token());

        co_await resume_background();
        REQUIRE(!check_privilege());
        REQUIRE(!has_thread_token());

        co_await resume_background(process);
        REQUIRE(!check_privilege());
        REQUIRE(has_thread_token());
    }
}

TEST_CASE("Security")
{
    auto process = access_token::process();
    auto modified = get_modified();
    REQUIRE(!has_thread_token());

    auto prev = process.impersonate();
    REQUIRE(!check_privilege());
    REQUIRE(has_thread_token());
    prev.revert();
    REQUIRE(!has_thread_token());

    prev = modified.impersonate();
    REQUIRE(check_privilege());
    REQUIRE(has_thread_token());

    Async().get();

    // Async function reverted before initial suspension...
    REQUIRE(!check_privilege());
    REQUIRE(!has_thread_token());
}
