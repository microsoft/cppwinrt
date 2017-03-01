#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

struct file
{
    file(wchar_t const * const filename) :
        m_handle(create(filename)),
        m_io(get_abi(m_handle))
    {
    }

    auto read(uint64_t const offset, void * const buffer, size_t const size)
    {
        return m_io.start([=, handle = get_abi(m_handle)](OVERLAPPED & overlapped)
        {
            overlapped.Offset = static_cast<DWORD>(offset);
            overlapped.OffsetHigh = offset >> 32;

            if (!ReadFile(handle, buffer, static_cast<DWORD>(size), nullptr, &overlapped))
            {
                const DWORD error = GetLastError();

                if (error != ERROR_IO_PENDING)
                {
                    throw hresult_error(HRESULT_FROM_WIN32(error));
                }
            }
        });
    }

private:

    struct file_traits
    {
        using type = HANDLE;

        static type invalid() noexcept
        {
            return INVALID_HANDLE_VALUE;
        }

        static void close(type value) noexcept
        {
            WINRT_VERIFY(CloseHandle(value));
        }
    };

    using file_handle = impl::handle<file_traits>;

    static file_handle create(wchar_t const * const filename)
    {
        file_handle handle = CreateFile(filename,
                                        GENERIC_READ,
                                        0,
                                        nullptr,
                                        OPEN_EXISTING,
                                        FILE_FLAG_OVERLAPPED,
                                        nullptr);

        if (!handle)
        {
            throw_last_error();
        }

        return handle;
    }

    file_handle m_handle;
    resumable_io m_io;
};

IAsyncAction sample()
{
    file reader(L"message.txt");

    std::array<char, 10> buffer;
    uint64_t offset = 0;

    while (uint32_t const bytes = co_await reader.read(offset, buffer.data(), buffer.size()))
    {
        printf("%.*s", bytes, buffer.data());
        offset += bytes;
    }

    printf("\n");
}

int main()
{
    init_apartment();

    sample().get();
}
