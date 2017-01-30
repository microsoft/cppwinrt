#pragma once

using namespace winrt::Windows::Foundation;
using namespace winrt::Windows::Storage;
using namespace winrt::Windows::Storage::Streams;

namespace DX
{
	inline void ThrowIfFailed(HRESULT hr)
	{
		if (FAILED(hr))
		{
			// Set a breakpoint on this line to catch Win32 API errors.
			throw winrt::hresult_error(hr);
		}
	}

	inline std::future<std::vector<byte>> ReadDataAsync(const std::wstring& filename)
	{
		auto folder = winrt::Windows::ApplicationModel::Package::Current().InstalledLocation();
		auto file = co_await folder.GetFileAsync(winrt::hstring_ref(filename.c_str()));
		IBuffer fileBuffer = co_await FileIO::ReadBufferAsync(file);
		std::vector<byte> returnBuffer;
		returnBuffer.resize(fileBuffer.Length());
		DataReader::FromBuffer(fileBuffer).ReadBytes(winrt::array_ref<byte>(returnBuffer));
		return returnBuffer;
	}

	// Converts a length in device-independent pixels (DIPs) to a length in physical pixels.
	inline float ConvertDipsToPixels(float dips, float dpi)
	{
		static const float dipsPerInch = 96.0f;
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
}
