
// Since modules don't result in global symbol pollution,
// we can always enable the classic COM support.
// Users will have to include headers declaring these interfaces
// to make use of it.
#include <Unknwn.h>
#undef GetCurrentTime // Get rid of this evil macro

export module winrt;
#define WINRT_EXPORT export
