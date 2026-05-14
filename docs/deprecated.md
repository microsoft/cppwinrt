# Deprecated Attribute Support

C++/WinRT projects the `Windows.Foundation.Metadata.DeprecatedAttribute` from WinRT metadata as the C++ standard `[[deprecated("message")]]` attribute on generated types and members.

## What Gets Annotated

When a WinRT type or member is marked with `DeprecatedAttribute` in its metadata (`.winmd`), the generated C++/WinRT projection header will include the corresponding `[[deprecated]]` annotation:

- **Enum types**: `[[deprecated("...")]] enum class MyEnum : int32_t { ... };`
- **Enum values**: Individual enumerators marked deprecated
- **Methods**: `[[deprecated("...")]] auto MyMethod() const;`
- **Static methods**: `[[deprecated("...")]] static auto MyStaticMethod();`
- **Constructors**: `[[deprecated("...")]] MyClass(args);`
- **Classes, interfaces, delegates, structs**: A redeclaration with `[[deprecated]]` is emitted after the full definition

## Compiler Behavior

When you use a deprecated API, the compiler emits warning **C4996** (MSVC) or equivalent:

```
warning C4996: 'winrt::Windows::Media::PlayTo::PlayToConnection': PlayToConnection may be altered or unavailable for releases after Windows 10. Instead, use CastingConnection.
```

The code still **compiles and works** — deprecated warnings are informational only.

## Suppressing Warnings

If you intentionally use a deprecated API and want to suppress the warning:

```cpp
#pragma warning(push)
#pragma warning(disable: 4996)

// Use deprecated APIs here
auto connection = winrt::Windows::Media::PlayTo::PlayToConnection{};

#pragma warning(pop)
```

Or for a single line:

```cpp
#pragma warning(suppress: 4996)
auto connection = winrt::Windows::Media::PlayTo::PlayToConnection{};
```

## Implementation Details

For types (classes, interfaces, delegates, structs), the deprecated annotation uses a **redeclaration pattern** to avoid cascading warnings within the projection's own internal code:

```cpp
// Full definition without [[deprecated]] — used internally without warnings
struct WINRT_IMPL_EMPTY_BASES PlayToConnection :
    winrt::Windows::Media::PlayTo::IPlayToConnection
{
    PlayToConnection(std::nullptr_t) noexcept {}
    // ...
};
// Redeclaration adds [[deprecated]] — triggers warnings in consumer code
struct [[deprecated("PlayToConnection may be altered or unavailable...")]] PlayToConnection;
```

For methods and enum values, `[[deprecated]]` is applied directly on the declaration.
