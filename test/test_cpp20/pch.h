#pragma once

#pragma warning(4: 4458) // ensure we compile clean with this warning enabled

#define WINRT_LEAN_AND_MEAN
#include <unknwn.h>
#include "winrt/Windows.Data.Json.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/Windows.Foundation.Numerics.h"
#include "winrt/Windows.Storage.Streams.h"
#include <winstring.h>
#include "catch.hpp"

#include <string_view>

using namespace std::literals;
