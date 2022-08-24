
// Since modules don't result in global symbol pollution,
// we can always enable the classic COM support.
// Users will have to include headers declaring these interfaces
// to make use of it.
#include <Unknwn.h>

export module winrt:base;
#define WINRT_EXPORT export
