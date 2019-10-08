#include "pch.h"


static_assert(sizeof(SLIST_ENTRY) == sizeof(winrt::impl::slist_entry));
static_assert(std::alignment_of_v<SLIST_ENTRY> == std::alignment_of_v<winrt::impl::slist_entry>);

static_assert(sizeof(SLIST_HEADER) == sizeof(winrt::impl::slist_header));
static_assert(std::alignment_of_v<SLIST_HEADER> == std::alignment_of_v<winrt::impl::slist_header>);

static_assert(MEMORY_ALLOCATION_ALIGNMENT == winrt::impl::memory_allocation_alignment);