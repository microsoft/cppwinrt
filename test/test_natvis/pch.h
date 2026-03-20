#pragma once

#define WIN32_LEAN_AND_MEAN

#ifndef NOMINMAX
#define NOMINMAX
#endif

#include <windows.h>
#include <string>
#include <vector>
#include <array>
#include <map>
#include <set>
#include <memory>
#include <variant>
#include <optional>
#include <filesystem>
#include <functional>
#include <cassert>
#include <cstdio>

// CppWinRT base library headers (for winrt::guid, winrt::impl::* SHA-1 helpers)
#include "base_includes.h"
#include "base_macros.h"
#include "base_types.h"
#include "base_extern.h"
#include "base_meta.h"
#include "base_identity.h"
#include "base_handle.h"
#include "base_lock.h"
#include "base_abi.h"
#include "base_windows.h"
#include "base_com_ptr.h"
#include "base_string.h"
#include "base_string_input.h"
#include "base_string_operators.h"
#include "base_array.h"
#include "base_weak_ref.h"
#include "base_agile_ref.h"
#include "base_error.h"
#include "base_marshaler.h"
#include "base_delegate.h"
#include "base_events.h"
#include "base_activation.h"
#include "base_implements.h"

// WinMD metadata reader
#include <cmd_reader.h>
#include <winmd_reader.h>

// Catch2 test framework
#include "catch.hpp"

using namespace std::literals;
