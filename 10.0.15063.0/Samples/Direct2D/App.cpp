#include "pch.h"

using namespace winrt;

using namespace Windows;
using namespace Windows::ApplicationModel::Core;
using namespace Windows::UI;
using namespace Windows::UI::Core;
using namespace Windows::Graphics::Display;

namespace
{
    com_ptr<ID2D1Factory1> CreateFactory()
    {
        D2D1_FACTORY_OPTIONS options{};

#ifdef _DEBUG
        options.debugLevel = D2D1_DEBUG_LEVEL_INFORMATION;
#endif

        com_ptr<ID2D1Factory1> factory;

        check_hresult(D2D1CreateFactory(
            D2D1_FACTORY_TYPE_SINGLE_THREADED,
            options,
            factory.put()));

        return factory;
    }

    HRESULT CreateDevice(D3D_DRIVER_TYPE const type, com_ptr<ID3D11Device>& device)
    {
        WINRT_ASSERT(!device);

        UINT flags = D3D11_CREATE_DEVICE_BGRA_SUPPORT;

#ifdef _DEBUG
        flags |= D3D11_CREATE_DEVICE_DEBUG;
#endif

        return D3D11CreateDevice(
            nullptr,
            type,
            nullptr,
            flags,
            nullptr, 0,
            D3D11_SDK_VERSION,
            device.put(),
            nullptr,
            nullptr);
    }

    com_ptr<ID3D11Device> CreateDevice()
    {
        com_ptr<ID3D11Device> device;
        HRESULT hr = CreateDevice(D3D_DRIVER_TYPE_HARDWARE, device);

        if (DXGI_ERROR_UNSUPPORTED == hr)
        {
            hr = CreateDevice(D3D_DRIVER_TYPE_WARP, device);
        }

        check_hresult(hr);
        return device;
    }

    com_ptr<ID2D1DeviceContext> CreateRenderTarget(com_ptr<ID2D1Factory1> const& factory,
                                                   com_ptr<ID3D11Device> const& device)
    {
        WINRT_ASSERT(factory);
        WINRT_ASSERT(device);

        com_ptr<IDXGIDevice> const dxdevice = device.as<IDXGIDevice>();

        com_ptr<ID2D1Device> d2device;
        check_hresult(factory->CreateDevice(dxdevice.get(), d2device.put()));

        com_ptr<ID2D1DeviceContext> target;
        check_hresult(d2device->CreateDeviceContext(D2D1_DEVICE_CONTEXT_OPTIONS_NONE, target.put()));
        return target;
    }

    com_ptr<IDXGIFactory2> GetDxgiFactory(com_ptr<ID3D11Device> const& device)
    {
        WINRT_ASSERT(device);

        com_ptr<IDXGIDevice> const dxdevice = device.as<IDXGIDevice>();

        com_ptr<IDXGIAdapter> adapter;
        check_hresult(dxdevice->GetAdapter(adapter.put()));

        com_ptr<IDXGIFactory2> factory;
        check_hresult(adapter->GetParent(__uuidof(factory), factory.put_void()));
        return factory;
    }

    void CreateDeviceSwapChainBitmap(com_ptr<IDXGISwapChain1> const& swapchain,
                                     com_ptr<ID2D1DeviceContext> const& target)
    {
        WINRT_ASSERT(swapchain);
        WINRT_ASSERT(target);

        com_ptr<IDXGISurface> surface;
        check_hresult(swapchain->GetBuffer(0, __uuidof(surface), surface.put_void()));

        D2D1_BITMAP_PROPERTIES1 const props = D2D1::BitmapProperties1(
            D2D1_BITMAP_OPTIONS_TARGET | D2D1_BITMAP_OPTIONS_CANNOT_DRAW,
            D2D1::PixelFormat(DXGI_FORMAT_B8G8R8A8_UNORM, D2D1_ALPHA_MODE_IGNORE));

        com_ptr<ID2D1Bitmap1> bitmap;

        check_hresult(target->CreateBitmapFromDxgiSurface(surface.get(),
                                                          props,
                                                          bitmap.put()));

        target->SetTarget(bitmap.get());
    }

    com_ptr<IDXGISwapChain1> CreateSwapChainForCoreWindow(com_ptr<ID3D11Device> const& device)
    {
        WINRT_ASSERT(device);

        com_ptr<IDXGIFactory2> const factory = GetDxgiFactory(device);

        DXGI_SWAP_CHAIN_DESC1 props{};
        props.Format = DXGI_FORMAT_B8G8R8A8_UNORM;
        props.SampleDesc.Count = 1;
        props.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
        props.BufferCount = 2;
        props.SwapEffect = DXGI_SWAP_EFFECT_FLIP_SEQUENTIAL;

        com_ptr<IDXGISwapChain1> swapChain;

        check_hresult(factory->CreateSwapChainForCoreWindow(
            device.get(),
            get_abi(CoreWindow::GetForCurrentThread()),
            &props,
            nullptr, // all or nothing
            swapChain.put()));

        return swapChain;
    }

    constexpr D2D1_COLOR_F color_white{ 1.0f,  1.0f,  1.0f,  1.0f };
    constexpr D2D1_COLOR_F color_orange{ 0.92f,  0.38f,  0.208f,  1.0f };
}

struct App : implements<App, IFrameworkViewSource, IFrameworkView>
{
    com_ptr<ID2D1Factory1> m_factory;
    com_ptr<ID2D1DeviceContext> m_target;
    com_ptr<IDXGISwapChain1> m_swapChain;
    com_ptr<ID2D1SolidColorBrush> m_brush;
    float m_dpi{};

    IFrameworkView CreateView()
    {
        return *this;
    }

    void Initialize(CoreApplicationView const&)
    {
    }

    void Load(hstring const&)
    {
        CoreWindow const window = CoreWindow::GetForCurrentThread();

        window.SizeChanged([&](auto&&...)
        {
            if (m_target)
            {
                ResizeSwapChainBitmap();
                Render();
            }
        });

        DisplayInformation const display = DisplayInformation::GetForCurrentView();
        m_dpi = display.LogicalDpi();

        display.DpiChanged([&](DisplayInformation const& display, IInspectable const&)
        {
            if (m_target)
            {
                m_dpi = display.LogicalDpi();
                m_target->SetDpi(m_dpi, m_dpi);
                CreateDeviceSizeResources();
                Render();
            }
        });

        m_factory = CreateFactory();
        CreateDeviceIndependentResources();
    }

    void Uninitialize()
    {
    }

    void Run()
    {
        CoreWindow const window = CoreWindow::GetForCurrentThread();
        window.Activate();

        Render();
        CoreDispatcher const dispatcher = window.Dispatcher();
        dispatcher.ProcessEvents(CoreProcessEventsOption::ProcessUntilQuit);
    }

    void SetWindow(CoreWindow const&)
    {

    }

    void Draw()
    {
        m_target->Clear(color_white);

        D2D1_SIZE_F const size = m_target->GetSize();
        D2D1_RECT_F const rect{ 100.0f, 100.0f, size.width - 100.0f, size.height - 100.0f };
        m_target->DrawRectangle(rect, m_brush.get(), 100.0f);

        WINRT_TRACE("Draw %.2f x %.2f @ %.2f\n", size.width, size.height, m_dpi);
    }

    void Render()
    {
        if (!m_target)
        {
            com_ptr<ID3D11Device> const device = CreateDevice();
            m_target = CreateRenderTarget(m_factory, device);
            m_swapChain = CreateSwapChainForCoreWindow(device);

            CreateDeviceSwapChainBitmap(m_swapChain, m_target);

            m_target->SetDpi(m_dpi, m_dpi);

            CreateDeviceResources();
            CreateDeviceSizeResources();
        }

        m_target->BeginDraw();
        Draw();
        m_target->EndDraw();

        HRESULT const hr = m_swapChain->Present(1, 0);

        if (S_OK != hr && DXGI_STATUS_OCCLUDED != hr)
        {
            ReleaseDevice();
        }
    }

    void ReleaseDevice()
    {
        m_target = nullptr;
        m_swapChain = nullptr;

        ReleaseDeviceResources();
    }

    void ResizeSwapChainBitmap()
    {
        WINRT_ASSERT(m_target);
        WINRT_ASSERT(m_swapChain);

        m_target->SetTarget(nullptr);

        if (S_OK == m_swapChain->ResizeBuffers(0, // all buffers
                                               0, 0, // client area
                                               DXGI_FORMAT_UNKNOWN, // preserve format
                                               0)) // flags
        {
            CreateDeviceSwapChainBitmap(m_swapChain, m_target);
            CreateDeviceSizeResources();
        }
        else
        {
            ReleaseDevice();
        }
    }

    void CreateDeviceIndependentResources()
    {
    }

    void CreateDeviceResources()
    {
        check_hresult(m_target->CreateSolidColorBrush(
            color_orange,
            D2D1::BrushProperties(0.8f),
            m_brush.put()));
    }

    void CreateDeviceSizeResources()
    {
    }

    void ReleaseDeviceResources()
    {
        m_brush = nullptr;
    }
};

int __stdcall wWinMain(HINSTANCE, HINSTANCE, PWSTR, int)
{
    CoreApplication::Run(App());
}
