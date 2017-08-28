#pragma once

#include "../pch.h"

#include <inspectable.h>
#include <dxgi.h>
#include <future>

STDAPI CreateDirect3D11DeviceFromDXGIDevice(
    _In_         IDXGIDevice* dxgiDevice,
    _COM_Outptr_ IInspectable** graphicsDevice);

namespace DX
{

    // Function that reads from a binary file asynchronously.
    inline std::future<std::vector<byte>> ReadDataAsync(const std::wstring& filename)
    {
        winrt::Windows::Storage::Streams::IBuffer fileBuffer = co_await winrt::Windows::Storage::PathIO::ReadBufferAsync(winrt::hstring_ref(filename.c_str()));

        std::vector<byte> returnBuffer;
        returnBuffer.resize(fileBuffer.Length());
        winrt::Windows::Storage::Streams::DataReader::FromBuffer(fileBuffer).ReadBytes(winrt::array_ref<byte>(returnBuffer));
        return returnBuffer;
    }


    // Converts a length in device-independent pixels (DIPs) to a length in physical pixels.
    inline float ConvertDipsToPixels(float dips, float dpi)
    {
        constexpr float dipsPerInch = 96.0f;
        return floorf(dips * dpi / dipsPerInch + 0.5f); // Round to nearest integer.
    }

#if defined(_DEBUG)
    // Check for SDK Layer support.
    inline bool SdkLayersAvailable()
    {
        HRESULT hr = D3D11CreateDevice(
            nullptr,
            D3D_DRIVER_TYPE_NULL,       // There is no need to create a real hardware device.
            0,
            D3D11_CREATE_DEVICE_DEBUG,  // Check for the SDK layers.
            nullptr,                    // Any feature level will do.
            0,
            D3D11_SDK_VERSION,          // Always set this to D3D11_SDK_VERSION for Windows Store apps.
            nullptr,                    // No need to keep the D3D device reference.
            nullptr,                    // No need to know the feature level.
            nullptr                     // No need to keep the D3D device context reference.
        );

        return SUCCEEDED(hr);
    }
#endif

#if defined(__cplusplus)
    interface __declspec(uuid("A9B3D012-3DF2-4EE3-B8D1-8695F457D3C1"))
    IDirect3DDxgiInterfaceAccess : public IUnknown
    {
        IFACEMETHOD(GetInterface)(REFIID iid, _COM_Outptr_ void** p) = 0;
    };
#endif /* __cplusplus */

    inline HRESULT GetDXGIInterfaceFromObject(
        _In_         winrt::Windows::IInspectable object,
        _In_         REFIID iid,
        _COM_Outptr_ void** p)
    {
        winrt::com_ptr<IDirect3DDxgiInterfaceAccess> dxgiInterfaceAccess = object.as<IDirect3DDxgiInterfaceAccess>();
        return dxgiInterfaceAccess->GetInterface(iid, p);
    }
}
