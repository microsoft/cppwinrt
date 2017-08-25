#include "pch.h"

namespace fs = std::experimental::filesystem;
using namespace winrt;
using namespace Windows::Storage;
using namespace Windows::Storage::Streams;

struct __declspec(uuid("905a0fef-bc53-11df-8c49-001e4fc686da")) IBufferByteAccess : ::IUnknown
{
    virtual HRESULT __stdcall Buffer(uint8_t** value) = 0;
};

struct CustomBuffer : implements<CustomBuffer, IBuffer, IBufferByteAccess>
{
    CustomBuffer(uint8_t* buffer, size_t size) :
        m_buffer(buffer),
        m_capacity(static_cast<uint32_t>(size))
    {
    }

    uint32_t Capacity() const noexcept
    {
        return m_capacity;
    }

    uint32_t Length() const noexcept
    {
        return m_length;
    }

    void Length(uint32_t value)
    {
        if (value > m_capacity)
        {
            throw hresult_invalid_argument();
        }

        m_length = value;
    }

    HRESULT __stdcall Buffer(uint8_t** value) noexcept final
    {
        *value = m_buffer;
        return S_OK;
    }

private:

    uint8_t* const m_buffer{};
    uint32_t const m_capacity;
    uint32_t m_length{};
};

int main()
{
    init_apartment();

    fs::path path = fs::current_path().append(L"message.txt");
    StorageFile file = StorageFile::GetFileFromPathAsync(path.c_str()).get();
    IRandomAccessStream stream = file.OpenAsync(FileAccessMode::Read).get();

    std::vector<uint8_t> storage(100);
    IBuffer buffer = make<CustomBuffer>(storage.data(), storage.size());

    while (true)
    {
        stream.ReadAsync(buffer, buffer.Capacity(), InputStreamOptions::None).get();
        uint32_t length = buffer.Length();

        if (length == 0)
        {
            break;
        }

        printf("%.*s", length, storage.data());
    }
}
