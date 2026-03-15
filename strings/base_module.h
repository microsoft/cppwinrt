
// Since modules don't result in global symbol pollution,
// we can always enable the classic COM support.
// Users will have to include headers declaring these interfaces
// to make use of it.
#include <Unknwn.h>

#define WINRT_EXPORT export

export module winrt:base;
