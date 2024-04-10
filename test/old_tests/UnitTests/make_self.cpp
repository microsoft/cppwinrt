#include "pch.h"
#include "catch.hpp"

#if defined(_MSC_VER)
#define WDECLSPECL_NOVTABLE __declspec(novtable)
#else
#define WDECLSPECL_NOVTABLE
#endif

//
// These tests ensure that the make_self function works as expected to provide direct access
// to an implementation.
//
// The IMakeSelf IUnknown interface is also tested as this covers an edge case in the implements
// class template around implementing unprojected interfaces.
//

using namespace winrt;

struct DECLSPEC_UUID("eebb3a22-13a6-43b9-9d53-b7deb5a20ae5") WDECLSPECL_NOVTABLE IMakeSelf : IUnknown
{
    virtual HRESULT __stdcall Call() = 0;
};

#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IMakeSelf, 0xeebb3a22, 0x13a6, 0x43b9, 0x9d, 0x53, 0xb7, 0xde, 0xb5, 0xa2, 0x0a, 0xe5);
#endif

struct MakeSelfStringable : implements<MakeSelfStringable, Windows::Foundation::IStringable>
{
    hstring ToString()
    {
        return m_string;
    }

    hstring m_string;
};

struct MakeSelf : implements<MakeSelf, IMakeSelf>
{
    HRESULT __stdcall Call() override
    {
        return m_result;
    }

    HRESULT m_result = S_OK;
};

struct MakeDerived : implements<MakeDerived, MakeSelfStringable, IMakeSelf>
{
    HRESULT __stdcall Call() override
    {
        return m_result;
    }

    HRESULT m_result = S_OK;
};

TEST_CASE("make_self")
{
    com_ptr<MakeSelfStringable> a = make_self<MakeSelfStringable>();
    a->m_string = L"Test value";
    REQUIRE(a->ToString() == L"Test value");

    com_ptr<MakeSelf> b = make_self<MakeSelf>();
    b->m_result = E_ACCESSDENIED;
    REQUIRE(b->Call() == E_ACCESSDENIED);

    com_ptr<MakeDerived> c = make_self<MakeDerived>();
    c->m_string = L"Test derived";
    REQUIRE(c->ToString() == L"Test derived");
    c->m_result = E_INVALIDARG;
    REQUIRE(c->Call() == E_INVALIDARG);


}
