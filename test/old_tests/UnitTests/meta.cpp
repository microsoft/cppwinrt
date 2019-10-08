#include "pch.h"
#include "catch.hpp"

#pragma warning(disable: 4505)

using namespace winrt;
using namespace Windows::Foundation;

template<typename T>
using get_abi_t = decltype(get_abi(std::declval<T&>()));

template<typename T>
using put_abi_t = decltype(put_abi(std::declval<T&>()));

static_assert(std::is_same_v<get_abi_t<int>, int>, "fail");
static_assert(std::is_same_v<put_abi_t<int>, int *>, "fail");

static_assert(std::is_same_v<get_abi_t<IUriRuntimeClass>, void*>, "fail");
static_assert(std::is_same_v<put_abi_t<IUriRuntimeClass>, void**>, "fail");

namespace
{
    using IFoo = IStringable; // ToString
    using IFoo2 = IClosable; // Close
    using IBar = IDeferral; // Complete
    using IBar2 = IMemoryBuffer; // IMemoryBufferReference CreateReference()

    struct Foo : implements<Foo, IFoo, IFoo2>
    {
        hstring ToString() { return L""; }
        void Close() {}
    };

    struct Bar : implements<Bar, IBar, IBar2>
    {
        void Complete() {}
        IMemoryBufferReference CreateReference() { return {}; }
    };

    template <typename T>
    struct list_size;

    template <typename ... T>
    struct list_size<impl::interface_list<T...>>
    {
        static constexpr std::size_t value = sizeof...(T);
    };

    static_assert(list_size<impl::filter<impl::is_uncloaked_interface, composable, composing>>::value == 0);
    static_assert(list_size<impl::filter<impl::is_interface, composable, composing>>::value == 0);
    static_assert(list_size<impl::filter<impl::is_uncloaked_interface, composable, IFoo, composing, IBar>>::value == 2);
    static_assert(list_size<impl::filter<impl::is_interface, composable, IFoo, composing, IBar>>::value == 2);
    static_assert(list_size<impl::filter<impl::is_uncloaked_interface, cloaked<IFoo>, IBar>>::value == 1);
    static_assert(list_size<impl::filter<impl::is_interface, cloaked<IFoo>, IBar>>::value == 2);
    static_assert(list_size<impl::filter<impl::is_uncloaked_interface, IFoo, Bar>>::value == 3);
    static_assert(list_size<impl::filter<impl::is_interface, IFoo, Bar>>::value == 3);

    static_assert(impl::is_implements<Foo>());
    
    static_assert(std::is_same<impl::nested_implements<IFoo, Bar, IFoo2>::type, Bar>::value);
    static_assert(std::is_same<impl::base_implements<Foo, IFoo>::type, impl::root_implements<Foo, IFoo>>::value);
    static_assert(std::is_same<impl::base_implements<Foo, IFoo, Bar, IFoo2>::type, Bar>::value);

    static_assert(std::is_same_v<typename impl::filter<impl::is_interface, IFoo, IFoo2>::first_interface, IFoo>);
    static_assert(std::is_same_v<typename impl::filter<impl::is_interface, IFoo, Bar, IFoo2>::first_interface, IFoo>);
    static_assert(std::is_same_v<typename impl::filter<impl::is_interface, Bar, IFoo, IFoo2>::first_interface, IBar>);
}
