#pragma once

#define WINRT_NO_MODULE_LOCK
#include "winrt/base.h"
#include <winrt/test_component_fluent.h>
#include <type_traits>
// get_module_lock will always return true if WINRT_NO_MODULE_LOCK is defined.
// This ensures that if the DLL unecessarily exports DllCanUnloadNow that it
// will in turn return S_FALSE.
static_assert(winrt::get_module_lock());

static_assert(std::is_same_v<double, decltype(std::declval<winrt::test_component_fluent::HierarchyB>().DoubleProperty())>);
static_assert(std::is_same_v<winrt::test_component_fluent::HierarchyB const&, decltype(std::declval<winrt::test_component_fluent::HierarchyB>().DoubleProperty(2.0))>);

static_assert(std::is_same_v<int32_t, decltype(std::declval<winrt::test_component_fluent::HierarchyB>().PropertyA())>);
static_assert(std::is_same_v<winrt::test_component_fluent::HierarchyB const&, decltype(std::declval<winrt::test_component_fluent::HierarchyB>().PropertyA(20))>, "Property setter must return a const reference to self");

//template <typename D> D const& SetPropertyB(winrt::consume_t<winrt::test_component_fluent::HierarchyB* _this, int32_t value)
//{
//    // check_hresult(WINRT_IMPL_SHIM(winrt::test_component_fluent::IHierarchyB)->put_PropertyB(value));
//	// (*(abi_t<__VA_ARGS__>**)&static_cast<__VA_ARGS__ const&>(static_cast<D const&>(*this)))
//
//	winrt::check_hresult(*(winrt::impl::abi_t<winrt::test_component_fluent::IHierarchyB>**) & static_cast<winrt::test_component_fluent::IHierarchyB const&>(static_cast<D const&>(*_this)));
//    return static_cast<D const&>(*_this);
//}

void f() {
	winrt::test_component_fluent::HierarchyB b;
	//winrt::test_component_fluent::HierarchyB const& c = b.PropertyB();
	const auto& x = static_cast<winrt::test_component_fluent::HierarchyB const&>(b.PropertyB(20));
}

static_assert(std::is_same_v<int32_t, decltype(std::declval<winrt::test_component_fluent::HierarchyB>().PropertyB())>);
//static_assert(std::is_same_v<winrt::test_component_fluent::HierarchyB const&, decltype(std::declval<winrt::test_component_fluent::HierarchyB>().PropertyB(99))>, "Property setter must return a const reference to self");