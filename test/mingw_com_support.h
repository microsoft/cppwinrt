#if defined(__clang__)
#define HAS_DECLSPEC_UUID __has_declspec_attribute(uuid)
#elif defined(_MSC_VER)
#define HAS_DECLSPEC_UUID 1
#else
#define HAS_DECLSPEC_UUID 0
#endif

#if HAS_DECLSPEC_UUID
#define DECLSPEC_UUID(x) __declspec(uuid(x))
#else
#define DECLSPEC_UUID(x)
#endif
