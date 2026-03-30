// Wrapper for the generated module.g.cpp that provides module imports
// instead of the PCH and base.h includes that the generated file expects.
import std;
import winrt;

// WINRT_IMPL_SKIP_INCLUDES is defined project-wide for component source files,
// so the generated module.g.cpp's #include "winrt/base.h" will be skipped.
// The import winrt; above provides all needed symbols.
#include "module.g.cpp"
