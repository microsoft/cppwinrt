#pragma once

#ifdef _MSC_VER
#pragma warning(disable:4100)
#endif

#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/Composable.h"

// This is used to validate WRL interop support.
#pragma warning(push)
#pragma warning(disable: 4324) // structure was padded due to alignment specifier
#include <wrl.h>
#pragma warning(pop)