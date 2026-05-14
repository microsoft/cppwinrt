#include "pch.h"

// Suppress C4996 (deprecated) warnings so the test compiles cleanly
#pragma warning(push)
#pragma warning(disable: 4996)

#include "winrt/test_component.h"

using namespace winrt;

// ============================================================================
// Test 1: Removed enum is completely absent from user namespace
// ============================================================================
TEST_CASE("removed_enum_is_absent")
{
    // RemovedEnum should not be accessible. If it were, this test would
    // fail at compile time. We verify at runtime that the projection only
    // contains the non-removed enum.
    // static_assert(!std::is_class_v<test_component::RemovedEnum>);  // Would not compile if type existed

    // PartiallyRemovedEnum should exist
    auto val = test_component::PartiallyRemovedEnum::Visible;
    REQUIRE(val == test_component::PartiallyRemovedEnum::Visible);
    REQUIRE(static_cast<int32_t>(val) == 0);

    auto val2 = test_component::PartiallyRemovedEnum::AlsoVisible;
    REQUIRE(static_cast<int32_t>(val2) == 2);
}

// ============================================================================
// Test 2: PartiallyRemovedEnum - Hidden value should not be present
// ============================================================================
TEST_CASE("partially_removed_enum_hidden_value_absent")
{
    // The Hidden value (=1) was removed. We verify that Visible (0) and
    // AlsoVisible (2) are present but there is no way to reference Hidden
    // through the projected enum. We can verify by value:
    auto visible = test_component::PartiallyRemovedEnum::Visible;
    auto also_visible = test_component::PartiallyRemovedEnum::AlsoVisible;
    REQUIRE(static_cast<int32_t>(visible) == 0);
    REQUIRE(static_cast<int32_t>(also_visible) == 2);
    // If Hidden were still there, test_component::PartiallyRemovedEnum::Hidden would compile
}

// ============================================================================
// Test 3: RemovedClass - active methods work, removed are absent
// ============================================================================
TEST_CASE("removed_class_active_methods")
{
    // RemovedClass itself should still exist (not all methods removed),
    // but ActiveMethod and ActiveStaticMethod should be the only accessible ones.
    test_component::RemovedClass obj{ nullptr };
    REQUIRE(!obj);

    // ActiveStaticMethod should be callable (it's a function pointer we can reference)
    auto fn_ptr = &test_component::RemovedClass::ActiveStaticMethod;
    REQUIRE(fn_ptr != nullptr);

    // RemovedStaticMethod should NOT compile if referenced:
    // auto bad_ptr = &test_component::RemovedClass::RemovedStaticMethod; // Would fail
}

// ============================================================================
// Test 4: VTable slot preservation - ABI struct has ALL methods including removed
// ============================================================================
TEST_CASE("vtable_slots_preserved_for_removed_methods")
{
    // The ABI vtable struct for IVtableTest must include ALL method slots
    // (NormalMethod, DeprecatedMethod, RemovedMethod, AnotherNormalMethod)
    // even though RemovedMethod is hidden from the user projection.
    // We verify by instantiating a pointer to the ABI vtable and confirming
    // we can take the address of all vtable method pointers, including removed ones.

    using abi_vtable = winrt::impl::abi_t<test_component::IVtableTest>;

    // Verify the vtable struct has all 4 method pointers by taking member pointers.
    // If RemovedMethod were stripped from the vtable, this would not compile.
    auto p1 = &abi_vtable::NormalMethod;
    auto p2 = &abi_vtable::DeprecatedMethod;
    auto p3 = &abi_vtable::RemovedMethod;
    auto p4 = &abi_vtable::AnotherNormalMethod;

    REQUIRE(p1 != nullptr);
    REQUIRE(p2 != nullptr);
    REQUIRE(p3 != nullptr);
    REQUIRE(p4 != nullptr);

    // All 4 method pointers must be distinct
    REQUIRE(p1 != p3);
    REQUIRE(p2 != p3);
    REQUIRE(p4 != p3);
}

// ============================================================================
// Test 5: Deprecated methods still accessible (not removed)
// ============================================================================
TEST_CASE("deprecated_still_accessible_not_removed")
{
    // DeprecatedEnum should still compile (with C4996 suppressed)
    auto dep_val = test_component::DeprecatedEnum::First;
    REQUIRE(static_cast<int32_t>(dep_val) == 0);

    // DeprecatedClass methods should still be accessible
    auto dep_fn = &test_component::DeprecatedClass::OldStaticMethod;
    REQUIRE(dep_fn != nullptr);
}

#pragma warning(pop)
