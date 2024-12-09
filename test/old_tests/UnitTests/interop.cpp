#include "pch.h"
#include "catch.hpp"
#include <windows.foundation.h>

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    struct IClassicComInterface : ::IUnknown
    {};

    struct ClassicCom : implements<ClassicCom, IClassicComInterface>
    {};

    struct Stringable : implements<Stringable, IStringable>
    {
        Stringable(std::wstring_view const& value = L"Stringable") :
            m_value(value)
        {}

        hstring ToString()
        {
            return m_value;
        }

        hstring m_value;
    };

    uint32_t get_ref_count(IStringable const& object)
    {
        get_unknown(object)->AddRef();
        return get_unknown(object)->Release();
    }

    template <typename T> uint32_t get_ref_count(T* object)
    {
        object->AddRef();
        return object->Release();
    }

    template <typename T> uint32_t get_ref_count(com_ptr<T> const& object)
    {
        return get_ref_count(object.get());
    }
} // namespace

template <>
inline constexpr winrt::guid winrt::impl::guid_v<IClassicComInterface>{
    0xc136bb75, 0xbc03, 0x41a6, { 0xa5, 0xdc, 0x5e, 0xfa, 0x67, 0x92, 0x4e, 0xbf }
};

TEST_CASE("interop")
{
    uint32_t const before = get_module_lock();

    IStringable s = make<Stringable>();
    REQUIRE(get_ref_count(s) == 1);
    REQUIRE(get_module_lock() == before + 1);

    ABI::Windows::Foundation::IStringable* abi = nullptr;
    copy_to_abi(s, *reinterpret_cast<void**>(&abi));

    REQUIRE(get_ref_count(s) == 2);
    s = nullptr;
    REQUIRE(get_ref_count(abi) == 1);

    hstring value;
    abi->ToString(reinterpret_cast<HSTRING*>(put_abi(value)));
    REQUIRE(value == L"Stringable");

    copy_from_abi(s, abi);
    REQUIRE(get_ref_count(s) == 2);

    copy_from_abi(s, abi);
    REQUIRE(get_ref_count(s) == 2);

    abi->Release();
    abi = nullptr;
    REQUIRE(get_ref_count(s) == 1);

    REQUIRE(s.ToString() == L"Stringable");

    s = nullptr;
    REQUIRE(get_module_lock() == before);

    copy_to_abi(s, *reinterpret_cast<void**>(&abi));
    REQUIRE(abi == nullptr);

    copy_from_abi(s, abi);
    REQUIRE(s == nullptr);
}

TEST_CASE("self")
{
    com_ptr<Stringable> strong = make_self<Stringable>();
    strong->m_value = L"one";

    REQUIRE(get_ref_count(strong.get()) == 1);

    IStringable object = *strong;
    REQUIRE(object.ToString() == L"one");

    REQUIRE(get_ref_count(strong.get()) == 2);

    Stringable* ptr = get_self<Stringable>(object);
    REQUIRE(ptr == strong.get());

    REQUIRE(get_ref_count(strong.get()) == 2);
    strong = nullptr;
    REQUIRE(get_ref_count(object) == 1);

    strong = get_self<Stringable>(object)->get_strong();
    REQUIRE(get_ref_count(object) == 2);
    strong = nullptr;
    REQUIRE(get_ref_count(object) == 1);

    weak_ref<Stringable> weak = get_self<Stringable>(object)->get_weak();
    REQUIRE(get_ref_count(object) == 1); // <-- still just one!

    strong = weak.get();
    REQUIRE(strong);
    REQUIRE(get_ref_count(object) == 2);

    strong = nullptr;
    REQUIRE(get_ref_count(object) == 1);
    object = nullptr;

    strong = weak.get();
    REQUIRE(!strong);
}

TEST_CASE("self_classic_com")
{
    com_ptr<ClassicCom> strong = make_self<ClassicCom>();

    REQUIRE(get_ref_count(strong.get()) == 1);

    com_ptr<IClassicComInterface> object = strong.as<IClassicComInterface>();

    REQUIRE(get_ref_count(strong.get()) == 2);

    ClassicCom* ptr = get_self<ClassicCom>(object);
    REQUIRE(ptr == strong.get());

    REQUIRE(get_ref_count(strong.get()) == 2);
    strong = nullptr;
    REQUIRE(get_ref_count(object) == 1);

    strong = get_self<ClassicCom>(object)->get_strong();
    REQUIRE(get_ref_count(object) == 2);
    strong = nullptr;
    REQUIRE(get_ref_count(object) == 1);

    weak_ref<ClassicCom> weak = get_self<ClassicCom>(object)->get_weak();
    REQUIRE(get_ref_count(object) == 1); // <-- still just one!

    strong = weak.get();
    REQUIRE(strong);
    REQUIRE(get_ref_count(object) == 2);

    strong = nullptr;
    REQUIRE(get_ref_count(object) == 1);
    object = nullptr;

    strong = weak.get();
    REQUIRE(!strong);
}