// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Media.Protection.3.h"
#include "internal/Windows.Media.Core.3.h"
#include "internal/Windows.Storage.3.h"
#include "internal/Windows.Media.Protection.PlayReady.3.h"
#include "Windows.Media.Protection.h"
#include "Windows.Foundation.Collections.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDClient> : produce_base<D, Windows::Media::Protection::PlayReady::INDClient>
{
    HRESULT __stdcall add_RegistrationCompleted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().RegistrationCompleted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RegistrationCompleted(event_token token) noexcept override
    {
        try
        {
            this->shim().RegistrationCompleted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ProximityDetectionCompleted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ProximityDetectionCompleted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ProximityDetectionCompleted(event_token token) noexcept override
    {
        try
        {
            this->shim().ProximityDetectionCompleted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_LicenseFetchCompleted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().LicenseFetchCompleted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LicenseFetchCompleted(event_token token) noexcept override
    {
        try
        {
            this->shim().LicenseFetchCompleted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ReRegistrationNeeded(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ReRegistrationNeeded(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ReRegistrationNeeded(event_token token) noexcept override
    {
        try
        {
            this->shim().ReRegistrationNeeded(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ClosedCaptionDataReceived(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ClosedCaptionDataReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ClosedCaptionDataReceived(event_token token) noexcept override
    {
        try
        {
            this->shim().ClosedCaptionDataReceived(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> contentUrl, uint32_t startAsyncOptions, abi_arg_in<Windows::Media::Protection::PlayReady::INDCustomData> registrationCustomData, abi_arg_in<Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor> licenseFetchDescriptor, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDStartResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().StartAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&contentUrl), startAsyncOptions, *reinterpret_cast<const Windows::Media::Protection::PlayReady::INDCustomData *>(&registrationCustomData), *reinterpret_cast<const Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor *>(&licenseFetchDescriptor)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LicenseFetchAsync(abi_arg_in<Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor> licenseFetchDescriptor, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDLicenseFetchResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().LicenseFetchAsync(*reinterpret_cast<const Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor *>(&licenseFetchDescriptor)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReRegistrationAsync(abi_arg_in<Windows::Media::Protection::PlayReady::INDCustomData> registrationCustomData, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ReRegistrationAsync(*reinterpret_cast<const Windows::Media::Protection::PlayReady::INDCustomData *>(&registrationCustomData)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Close() noexcept override
    {
        try
        {
            this->shim().Close();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDClientFactory> : produce_base<D, Windows::Media::Protection::PlayReady::INDClientFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::Media::Protection::PlayReady::INDDownloadEngine> downloadEngine, abi_arg_in<Windows::Media::Protection::PlayReady::INDStreamParser> streamParser, abi_arg_in<Windows::Media::Protection::PlayReady::INDMessenger> pMessenger, abi_arg_out<Windows::Media::Protection::PlayReady::INDClient> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::Media::Protection::PlayReady::INDDownloadEngine *>(&downloadEngine), *reinterpret_cast<const Windows::Media::Protection::PlayReady::INDStreamParser *>(&streamParser), *reinterpret_cast<const Windows::Media::Protection::PlayReady::INDMessenger *>(&pMessenger)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs> : produce_base<D, Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs>
{
    HRESULT __stdcall get_ClosedCaptionDataFormat(Windows::Media::Protection::PlayReady::NDClosedCaptionFormat * ccForamt) noexcept override
    {
        try
        {
            *ccForamt = detach(this->shim().ClosedCaptionDataFormat());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PresentationTimestamp(int64_t * presentationTimestamp) noexcept override
    {
        try
        {
            *presentationTimestamp = detach(this->shim().PresentationTimestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClosedCaptionData(uint32_t * __ccDataBytesSize, abi_arg_out<uint8_t> * ccDataBytes) noexcept override
    {
        try
        {
            std::tie(*__ccDataBytesSize, *ccDataBytes) = detach(this->shim().ClosedCaptionData());
            return S_OK;
        }
        catch (...)
        {
            *__ccDataBytesSize = 0;
            *ccDataBytes = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDCustomData> : produce_base<D, Windows::Media::Protection::PlayReady::INDCustomData>
{
    HRESULT __stdcall get_CustomDataTypeID(uint32_t * __customDataTypeIDBytesSize, abi_arg_out<uint8_t> * customDataTypeIDBytes) noexcept override
    {
        try
        {
            std::tie(*__customDataTypeIDBytesSize, *customDataTypeIDBytes) = detach(this->shim().CustomDataTypeID());
            return S_OK;
        }
        catch (...)
        {
            *__customDataTypeIDBytesSize = 0;
            *customDataTypeIDBytes = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomData(uint32_t * __customDataBytesSize, abi_arg_out<uint8_t> * customDataBytes) noexcept override
    {
        try
        {
            std::tie(*__customDataBytesSize, *customDataBytes) = detach(this->shim().CustomData());
            return S_OK;
        }
        catch (...)
        {
            *__customDataBytesSize = 0;
            *customDataBytes = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDCustomDataFactory> : produce_base<D, Windows::Media::Protection::PlayReady::INDCustomDataFactory>
{
    HRESULT __stdcall abi_CreateInstance(uint32_t __customDataTypeIDBytesSize, abi_arg_in<uint8_t> * customDataTypeIDBytes, uint32_t __customDataBytesSize, abi_arg_in<uint8_t> * customDataBytes, abi_arg_out<Windows::Media::Protection::PlayReady::INDCustomData> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(array_ref<const uint8_t>(customDataTypeIDBytes, customDataTypeIDBytes + __customDataTypeIDBytesSize), array_ref<const uint8_t>(customDataBytes, customDataBytes + __customDataBytesSize)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDDownloadEngine> : produce_base<D, Windows::Media::Protection::PlayReady::INDDownloadEngine>
{
    HRESULT __stdcall abi_Open(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, uint32_t __sessionIDBytesSize, abi_arg_in<uint8_t> * sessionIDBytes) noexcept override
    {
        try
        {
            this->shim().Open(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri), array_ref<const uint8_t>(sessionIDBytes, sessionIDBytes + __sessionIDBytesSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Pause() noexcept override
    {
        try
        {
            this->shim().Pause();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Resume() noexcept override
    {
        try
        {
            this->shim().Resume();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Close() noexcept override
    {
        try
        {
            this->shim().Close();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Seek(abi_arg_in<Windows::Foundation::TimeSpan> startPosition) noexcept override
    {
        try
        {
            this->shim().Seek(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&startPosition));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanSeek(bool * canSeek) noexcept override
    {
        try
        {
            *canSeek = detach(this->shim().CanSeek());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BufferFullMinThresholdInSamples(uint32_t * bufferFullMinThreshold) noexcept override
    {
        try
        {
            *bufferFullMinThreshold = detach(this->shim().BufferFullMinThresholdInSamples());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BufferFullMaxThresholdInSamples(uint32_t * bufferFullMaxThreshold) noexcept override
    {
        try
        {
            *bufferFullMaxThreshold = detach(this->shim().BufferFullMaxThresholdInSamples());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Notifier(abi_arg_out<Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().Notifier());
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier> : produce_base<D, Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier>
{
    HRESULT __stdcall abi_OnStreamOpened() noexcept override
    {
        try
        {
            this->shim().OnStreamOpened();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OnPlayReadyObjectReceived(uint32_t __dataBytesSize, abi_arg_in<uint8_t> * dataBytes) noexcept override
    {
        try
        {
            this->shim().OnPlayReadyObjectReceived(array_ref<const uint8_t>(dataBytes, dataBytes + __dataBytesSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OnContentIDReceived(abi_arg_in<Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor> licenseFetchDescriptor) noexcept override
    {
        try
        {
            this->shim().OnContentIDReceived(*reinterpret_cast<const Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor *>(&licenseFetchDescriptor));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OnDataReceived(uint32_t __dataBytesSize, abi_arg_in<uint8_t> * dataBytes, uint32_t bytesReceived) noexcept override
    {
        try
        {
            this->shim().OnDataReceived(array_ref<const uint8_t>(dataBytes, dataBytes + __dataBytesSize), bytesReceived);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OnEndOfStream() noexcept override
    {
        try
        {
            this->shim().OnEndOfStream();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OnNetworkError() noexcept override
    {
        try
        {
            this->shim().OnNetworkError();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs> : produce_base<D, Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs>
{
    HRESULT __stdcall get_ResponseCustomData(abi_arg_out<Windows::Media::Protection::PlayReady::INDCustomData> customData) noexcept override
    {
        try
        {
            *customData = detach(this->shim().ResponseCustomData());
            return S_OK;
        }
        catch (...)
        {
            *customData = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor> : produce_base<D, Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor>
{
    HRESULT __stdcall get_ContentIDType(Windows::Media::Protection::PlayReady::NDContentIDType * contentIDType) noexcept override
    {
        try
        {
            *contentIDType = detach(this->shim().ContentIDType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentID(uint32_t * __contentIDBytesSize, abi_arg_out<uint8_t> * contentIDBytes) noexcept override
    {
        try
        {
            std::tie(*__contentIDBytesSize, *contentIDBytes) = detach(this->shim().ContentID());
            return S_OK;
        }
        catch (...)
        {
            *__contentIDBytesSize = 0;
            *contentIDBytes = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LicenseFetchChallengeCustomData(abi_arg_out<Windows::Media::Protection::PlayReady::INDCustomData> licenseFetchChallengeCustomData) noexcept override
    {
        try
        {
            *licenseFetchChallengeCustomData = detach(this->shim().LicenseFetchChallengeCustomData());
            return S_OK;
        }
        catch (...)
        {
            *licenseFetchChallengeCustomData = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LicenseFetchChallengeCustomData(abi_arg_in<Windows::Media::Protection::PlayReady::INDCustomData> licenseFetchChallengeCustomData) noexcept override
    {
        try
        {
            this->shim().LicenseFetchChallengeCustomData(*reinterpret_cast<const Windows::Media::Protection::PlayReady::INDCustomData *>(&licenseFetchChallengeCustomData));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptorFactory> : produce_base<D, Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptorFactory>
{
    HRESULT __stdcall abi_CreateInstance(Windows::Media::Protection::PlayReady::NDContentIDType contentIDType, uint32_t __contentIDBytesSize, abi_arg_in<uint8_t> * contentIDBytes, abi_arg_in<Windows::Media::Protection::PlayReady::INDCustomData> licenseFetchChallengeCustomData, abi_arg_out<Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(contentIDType, array_ref<const uint8_t>(contentIDBytes, contentIDBytes + __contentIDBytesSize), *reinterpret_cast<const Windows::Media::Protection::PlayReady::INDCustomData *>(&licenseFetchChallengeCustomData)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDLicenseFetchResult> : produce_base<D, Windows::Media::Protection::PlayReady::INDLicenseFetchResult>
{
    HRESULT __stdcall get_ResponseCustomData(abi_arg_out<Windows::Media::Protection::PlayReady::INDCustomData> customData) noexcept override
    {
        try
        {
            *customData = detach(this->shim().ResponseCustomData());
            return S_OK;
        }
        catch (...)
        {
            *customData = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDMessenger> : produce_base<D, Windows::Media::Protection::PlayReady::INDMessenger>
{
    HRESULT __stdcall abi_SendRegistrationRequestAsync(uint32_t __sessionIDBytesSize, abi_arg_in<uint8_t> * sessionIDBytes, uint32_t __challengeDataBytesSize, abi_arg_in<uint8_t> * challengeDataBytes, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().SendRegistrationRequestAsync(array_ref<const uint8_t>(sessionIDBytes, sessionIDBytes + __sessionIDBytesSize), array_ref<const uint8_t>(challengeDataBytes, challengeDataBytes + __challengeDataBytesSize)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendProximityDetectionStartAsync(Windows::Media::Protection::PlayReady::NDProximityDetectionType pdType, uint32_t __transmitterChannelBytesSize, abi_arg_in<uint8_t> * transmitterChannelBytes, uint32_t __sessionIDBytesSize, abi_arg_in<uint8_t> * sessionIDBytes, uint32_t __challengeDataBytesSize, abi_arg_in<uint8_t> * challengeDataBytes, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().SendProximityDetectionStartAsync(pdType, array_ref<const uint8_t>(transmitterChannelBytes, transmitterChannelBytes + __transmitterChannelBytesSize), array_ref<const uint8_t>(sessionIDBytes, sessionIDBytes + __sessionIDBytesSize), array_ref<const uint8_t>(challengeDataBytes, challengeDataBytes + __challengeDataBytesSize)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendProximityDetectionResponseAsync(Windows::Media::Protection::PlayReady::NDProximityDetectionType pdType, uint32_t __transmitterChannelBytesSize, abi_arg_in<uint8_t> * transmitterChannelBytes, uint32_t __sessionIDBytesSize, abi_arg_in<uint8_t> * sessionIDBytes, uint32_t __responseDataBytesSize, abi_arg_in<uint8_t> * responseDataBytes, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().SendProximityDetectionResponseAsync(pdType, array_ref<const uint8_t>(transmitterChannelBytes, transmitterChannelBytes + __transmitterChannelBytesSize), array_ref<const uint8_t>(sessionIDBytes, sessionIDBytes + __sessionIDBytesSize), array_ref<const uint8_t>(responseDataBytes, responseDataBytes + __responseDataBytesSize)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendLicenseFetchRequestAsync(uint32_t __sessionIDBytesSize, abi_arg_in<uint8_t> * sessionIDBytes, uint32_t __challengeDataBytesSize, abi_arg_in<uint8_t> * challengeDataBytes, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().SendLicenseFetchRequestAsync(array_ref<const uint8_t>(sessionIDBytes, sessionIDBytes + __sessionIDBytesSize), array_ref<const uint8_t>(challengeDataBytes, challengeDataBytes + __challengeDataBytesSize)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs> : produce_base<D, Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs>
{
    HRESULT __stdcall get_ProximityDetectionRetryCount(uint32_t * retryCount) noexcept override
    {
        try
        {
            *retryCount = detach(this->shim().ProximityDetectionRetryCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs> : produce_base<D, Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs>
{
    HRESULT __stdcall get_ResponseCustomData(abi_arg_out<Windows::Media::Protection::PlayReady::INDCustomData> customData) noexcept override
    {
        try
        {
            *customData = detach(this->shim().ResponseCustomData());
            return S_OK;
        }
        catch (...)
        {
            *customData = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransmitterProperties(abi_arg_out<Windows::Media::Protection::PlayReady::INDTransmitterProperties> transmitterProperties) noexcept override
    {
        try
        {
            *transmitterProperties = detach(this->shim().TransmitterProperties());
            return S_OK;
        }
        catch (...)
        {
            *transmitterProperties = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransmitterCertificateAccepted(bool * acceptpt) noexcept override
    {
        try
        {
            *acceptpt = detach(this->shim().TransmitterCertificateAccepted());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TransmitterCertificateAccepted(bool accept) noexcept override
    {
        try
        {
            this->shim().TransmitterCertificateAccepted(accept);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDSendResult> : produce_base<D, Windows::Media::Protection::PlayReady::INDSendResult>
{
    HRESULT __stdcall get_Response(uint32_t * __responseDataBytesSize, abi_arg_out<uint8_t> * responseDataBytes) noexcept override
    {
        try
        {
            std::tie(*__responseDataBytesSize, *responseDataBytes) = detach(this->shim().Response());
            return S_OK;
        }
        catch (...)
        {
            *__responseDataBytesSize = 0;
            *responseDataBytes = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDStartResult> : produce_base<D, Windows::Media::Protection::PlayReady::INDStartResult>
{
    HRESULT __stdcall get_MediaStreamSource(abi_arg_out<Windows::Media::Core::IMediaStreamSource> mediaStreamSource) noexcept override
    {
        try
        {
            *mediaStreamSource = detach(this->shim().MediaStreamSource());
            return S_OK;
        }
        catch (...)
        {
            *mediaStreamSource = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDStorageFileHelper> : produce_base<D, Windows::Media::Protection::PlayReady::INDStorageFileHelper>
{
    HRESULT __stdcall abi_GetFileURLs(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> fileURLs) noexcept override
    {
        try
        {
            *fileURLs = detach(this->shim().GetFileURLs(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *fileURLs = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDStreamParser> : produce_base<D, Windows::Media::Protection::PlayReady::INDStreamParser>
{
    HRESULT __stdcall abi_ParseData(uint32_t __dataBytesSize, abi_arg_in<uint8_t> * dataBytes) noexcept override
    {
        try
        {
            this->shim().ParseData(array_ref<const uint8_t>(dataBytes, dataBytes + __dataBytesSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetStreamInformation(abi_arg_in<Windows::Media::Core::IMediaStreamDescriptor> descriptor, Windows::Media::Protection::PlayReady::NDMediaStreamType * streamType, uint32_t * streamID) noexcept override
    {
        try
        {
            *streamID = detach(this->shim().GetStreamInformation(*reinterpret_cast<const Windows::Media::Core::IMediaStreamDescriptor *>(&descriptor), *streamType));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_BeginOfStream() noexcept override
    {
        try
        {
            this->shim().BeginOfStream();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EndOfStream() noexcept override
    {
        try
        {
            this->shim().EndOfStream();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Notifier(abi_arg_out<Windows::Media::Protection::PlayReady::INDStreamParserNotifier> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().Notifier());
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDStreamParserNotifier> : produce_base<D, Windows::Media::Protection::PlayReady::INDStreamParserNotifier>
{
    HRESULT __stdcall abi_OnContentIDReceived(abi_arg_in<Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor> licenseFetchDescriptor) noexcept override
    {
        try
        {
            this->shim().OnContentIDReceived(*reinterpret_cast<const Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor *>(&licenseFetchDescriptor));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OnMediaStreamDescriptorCreated(abi_arg_in<Windows::Foundation::Collections::IVector<Windows::Media::Core::AudioStreamDescriptor>> audioStreamDescriptors, abi_arg_in<Windows::Foundation::Collections::IVector<Windows::Media::Core::VideoStreamDescriptor>> videoStreamDescriptors) noexcept override
    {
        try
        {
            this->shim().OnMediaStreamDescriptorCreated(*reinterpret_cast<const Windows::Foundation::Collections::IVector<Windows::Media::Core::AudioStreamDescriptor> *>(&audioStreamDescriptors), *reinterpret_cast<const Windows::Foundation::Collections::IVector<Windows::Media::Core::VideoStreamDescriptor> *>(&videoStreamDescriptors));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OnSampleParsed(uint32_t streamID, Windows::Media::Protection::PlayReady::NDMediaStreamType streamType, abi_arg_in<Windows::Media::Core::IMediaStreamSample> streamSample, int64_t pts, Windows::Media::Protection::PlayReady::NDClosedCaptionFormat ccFormat, uint32_t __ccDataBytesSize, abi_arg_in<uint8_t> * ccDataBytes) noexcept override
    {
        try
        {
            this->shim().OnSampleParsed(streamID, streamType, *reinterpret_cast<const Windows::Media::Core::MediaStreamSample *>(&streamSample), pts, ccFormat, array_ref<const uint8_t>(ccDataBytes, ccDataBytes + __ccDataBytesSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OnBeginSetupDecryptor(abi_arg_in<Windows::Media::Core::IMediaStreamDescriptor> descriptor, GUID keyID, uint32_t __proBytesSize, abi_arg_in<uint8_t> * proBytes) noexcept override
    {
        try
        {
            this->shim().OnBeginSetupDecryptor(*reinterpret_cast<const Windows::Media::Core::IMediaStreamDescriptor *>(&descriptor), keyID, array_ref<const uint8_t>(proBytes, proBytes + __proBytesSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDTCPMessengerFactory> : produce_base<D, Windows::Media::Protection::PlayReady::INDTCPMessengerFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<hstring> remoteHostName, uint32_t remoteHostPort, abi_arg_out<Windows::Media::Protection::PlayReady::INDMessenger> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const hstring *>(&remoteHostName), remoteHostPort));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDTransmitterProperties> : produce_base<D, Windows::Media::Protection::PlayReady::INDTransmitterProperties>
{
    HRESULT __stdcall get_CertificateType(Windows::Media::Protection::PlayReady::NDCertificateType * type) noexcept override
    {
        try
        {
            *type = detach(this->shim().CertificateType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PlatformIdentifier(Windows::Media::Protection::PlayReady::NDCertificatePlatformID * identifier) noexcept override
    {
        try
        {
            *identifier = detach(this->shim().PlatformIdentifier());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedFeatures(uint32_t * __featureSetsSize, abi_arg_out<Windows::Media::Protection::PlayReady::NDCertificateFeature> * featureSets) noexcept override
    {
        try
        {
            std::tie(*__featureSetsSize, *featureSets) = detach(this->shim().SupportedFeatures());
            return S_OK;
        }
        catch (...)
        {
            *__featureSetsSize = 0;
            *featureSets = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SecurityLevel(uint32_t * level) noexcept override
    {
        try
        {
            *level = detach(this->shim().SecurityLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SecurityVersion(uint32_t * securityVersion) noexcept override
    {
        try
        {
            *securityVersion = detach(this->shim().SecurityVersion());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExpirationDate(abi_arg_out<Windows::Foundation::DateTime> expirationDate) noexcept override
    {
        try
        {
            *expirationDate = detach(this->shim().ExpirationDate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClientID(uint32_t * __clientIDBytesSize, abi_arg_out<uint8_t> * clientIDBytes) noexcept override
    {
        try
        {
            std::tie(*__clientIDBytesSize, *clientIDBytes) = detach(this->shim().ClientID());
            return S_OK;
        }
        catch (...)
        {
            *__clientIDBytesSize = 0;
            *clientIDBytes = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ModelDigest(uint32_t * __modelDigestBytesSize, abi_arg_out<uint8_t> * modelDigestBytes) noexcept override
    {
        try
        {
            std::tie(*__modelDigestBytesSize, *modelDigestBytes) = detach(this->shim().ModelDigest());
            return S_OK;
        }
        catch (...)
        {
            *__modelDigestBytesSize = 0;
            *modelDigestBytes = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ModelManufacturerName(abi_arg_out<hstring> modelManufacturerName) noexcept override
    {
        try
        {
            *modelManufacturerName = detach(this->shim().ModelManufacturerName());
            return S_OK;
        }
        catch (...)
        {
            *modelManufacturerName = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ModelName(abi_arg_out<hstring> modelName) noexcept override
    {
        try
        {
            *modelName = detach(this->shim().ModelName());
            return S_OK;
        }
        catch (...)
        {
            *modelName = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ModelNumber(abi_arg_out<hstring> modelNumber) noexcept override
    {
        try
        {
            *modelNumber = detach(this->shim().ModelNumber());
            return S_OK;
        }
        catch (...)
        {
            *modelNumber = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyContentHeader> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyContentHeader>
{
    HRESULT __stdcall get_KeyId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeyId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyIdString(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeyIdString());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LicenseAcquisitionUrl(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LicenseAcquisitionUrl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LicenseAcquisitionUserInterfaceUrl(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LicenseAcquisitionUserInterfaceUrl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DomainServiceId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DomainServiceId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EncryptionType(Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EncryptionType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomAttributes(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CustomAttributes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DecryptorSetup(Windows::Media::Protection::PlayReady::PlayReadyDecryptorSetup * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DecryptorSetup());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSerializedHeader(uint32_t * __headerBytesSize, abi_arg_out<uint8_t> * headerBytes) noexcept override
    {
        try
        {
            std::tie(*__headerBytesSize, *headerBytes) = detach(this->shim().GetSerializedHeader());
            return S_OK;
        }
        catch (...)
        {
            *__headerBytesSize = 0;
            *headerBytes = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeaderWithEmbeddedUpdates(abi_arg_out<Windows::Media::Protection::PlayReady::IPlayReadyContentHeader> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HeaderWithEmbeddedUpdates());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyContentHeader2> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyContentHeader2>
{
    HRESULT __stdcall get_KeyIds(uint32_t * __contentKeyIdsSize, abi_arg_out<GUID> * contentKeyIds) noexcept override
    {
        try
        {
            std::tie(*__contentKeyIdsSize, *contentKeyIds) = detach(this->shim().KeyIds());
            return S_OK;
        }
        catch (...)
        {
            *__contentKeyIdsSize = 0;
            *contentKeyIds = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyIdStrings(uint32_t * __contentKeyIdStringsSize, abi_arg_out<hstring> * contentKeyIdStrings) noexcept override
    {
        try
        {
            std::tie(*__contentKeyIdStringsSize, *contentKeyIdStrings) = detach(this->shim().KeyIdStrings());
            return S_OK;
        }
        catch (...)
        {
            *__contentKeyIdStringsSize = 0;
            *contentKeyIdStrings = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory>
{
    HRESULT __stdcall abi_CreateInstanceFromWindowsMediaDrmHeader(uint32_t __headerBytesSize, abi_arg_in<uint8_t> * headerBytes, abi_arg_in<Windows::Foundation::IUriRuntimeClass> licenseAcquisitionUrl, abi_arg_in<Windows::Foundation::IUriRuntimeClass> licenseAcquisitionUserInterfaceUrl, abi_arg_in<hstring> customAttributes, GUID domainServiceId, abi_arg_out<Windows::Media::Protection::PlayReady::IPlayReadyContentHeader> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstanceFromWindowsMediaDrmHeader(array_ref<const uint8_t>(headerBytes, headerBytes + __headerBytesSize), *reinterpret_cast<const Windows::Foundation::Uri *>(&licenseAcquisitionUrl), *reinterpret_cast<const Windows::Foundation::Uri *>(&licenseAcquisitionUserInterfaceUrl), *reinterpret_cast<const hstring *>(&customAttributes), domainServiceId));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateInstanceFromComponents(GUID contentKeyId, abi_arg_in<hstring> contentKeyIdString, Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm contentEncryptionAlgorithm, abi_arg_in<Windows::Foundation::IUriRuntimeClass> licenseAcquisitionUrl, abi_arg_in<Windows::Foundation::IUriRuntimeClass> licenseAcquisitionUserInterfaceUrl, abi_arg_in<hstring> customAttributes, GUID domainServiceId, abi_arg_out<Windows::Media::Protection::PlayReady::IPlayReadyContentHeader> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstanceFromComponents(contentKeyId, *reinterpret_cast<const hstring *>(&contentKeyIdString), contentEncryptionAlgorithm, *reinterpret_cast<const Windows::Foundation::Uri *>(&licenseAcquisitionUrl), *reinterpret_cast<const Windows::Foundation::Uri *>(&licenseAcquisitionUserInterfaceUrl), *reinterpret_cast<const hstring *>(&customAttributes), domainServiceId));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateInstanceFromPlayReadyHeader(uint32_t __headerBytesSize, abi_arg_in<uint8_t> * headerBytes, abi_arg_out<Windows::Media::Protection::PlayReady::IPlayReadyContentHeader> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstanceFromPlayReadyHeader(array_ref<const uint8_t>(headerBytes, headerBytes + __headerBytesSize)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory2> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory2>
{
    HRESULT __stdcall abi_CreateInstanceFromComponents2(uint32_t dwFlags, uint32_t __contentKeyIdsSize, abi_arg_in<GUID> * contentKeyIds, uint32_t __contentKeyIdStringsSize, abi_arg_in<hstring> * contentKeyIdStrings, Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm contentEncryptionAlgorithm, abi_arg_in<Windows::Foundation::IUriRuntimeClass> licenseAcquisitionUrl, abi_arg_in<Windows::Foundation::IUriRuntimeClass> licenseAcquisitionUserInterfaceUrl, abi_arg_in<hstring> customAttributes, GUID domainServiceId, abi_arg_out<Windows::Media::Protection::PlayReady::IPlayReadyContentHeader> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstanceFromComponents2(dwFlags, array_ref<const GUID>(contentKeyIds, contentKeyIds + __contentKeyIdsSize), *reinterpret_cast<const hstring *>(&contentKeyIdStrings), contentEncryptionAlgorithm, *reinterpret_cast<const Windows::Foundation::Uri *>(&licenseAcquisitionUrl), *reinterpret_cast<const Windows::Foundation::Uri *>(&licenseAcquisitionUserInterfaceUrl), *reinterpret_cast<const hstring *>(&customAttributes), domainServiceId));
            return S_OK;
        }
        catch (...)
        {
            *contentKeyIdStrings = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyContentResolver> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyContentResolver>
{
    HRESULT __stdcall abi_ServiceRequest(abi_arg_in<Windows::Media::Protection::PlayReady::IPlayReadyContentHeader> contentHeader, abi_arg_out<Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest> serviceRequest) noexcept override
    {
        try
        {
            *serviceRequest = detach(this->shim().ServiceRequest(*reinterpret_cast<const Windows::Media::Protection::PlayReady::PlayReadyContentHeader *>(&contentHeader)));
            return S_OK;
        }
        catch (...)
        {
            *serviceRequest = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyDomain> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyDomain>
{
    HRESULT __stdcall get_AccountId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AccountId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServiceId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Revision(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Revision());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FriendlyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FriendlyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DomainJoinUrl(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DomainJoinUrl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyDomainIterableFactory> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyDomainIterableFactory>
{
    HRESULT __stdcall abi_CreateInstance(GUID domainAccountId, abi_arg_out<Windows::Foundation::Collections::IIterable<Windows::Media::Protection::PlayReady::IPlayReadyDomain>> domainIterable) noexcept override
    {
        try
        {
            *domainIterable = detach(this->shim().CreateInstance(domainAccountId));
            return S_OK;
        }
        catch (...)
        {
            *domainIterable = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyDomainJoinServiceRequest> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyDomainJoinServiceRequest>
{
    HRESULT __stdcall get_DomainAccountId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DomainAccountId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DomainAccountId(GUID value) noexcept override
    {
        try
        {
            this->shim().DomainAccountId(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DomainFriendlyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DomainFriendlyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DomainFriendlyName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().DomainFriendlyName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DomainServiceId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DomainServiceId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DomainServiceId(GUID value) noexcept override
    {
        try
        {
            this->shim().DomainServiceId(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyDomainLeaveServiceRequest> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyDomainLeaveServiceRequest>
{
    HRESULT __stdcall get_DomainAccountId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DomainAccountId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DomainAccountId(GUID value) noexcept override
    {
        try
        {
            this->shim().DomainAccountId(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DomainServiceId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DomainServiceId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DomainServiceId(GUID value) noexcept override
    {
        try
        {
            this->shim().DomainServiceId(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyITADataGenerator> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyITADataGenerator>
{
    HRESULT __stdcall abi_GenerateData(GUID guidCPSystemId, uint32_t countOfStreams, abi_arg_in<Windows::Foundation::Collections::IPropertySet> configuration, Windows::Media::Protection::PlayReady::PlayReadyITADataFormat format, uint32_t * __dataBytesSize, abi_arg_out<uint8_t> * dataBytes) noexcept override
    {
        try
        {
            std::tie(*__dataBytesSize, *dataBytes) = detach(this->shim().GenerateData(guidCPSystemId, countOfStreams, *reinterpret_cast<const Windows::Foundation::Collections::IPropertySet *>(&configuration), format));
            return S_OK;
        }
        catch (...)
        {
            *__dataBytesSize = 0;
            *dataBytes = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyIndividualizationServiceRequest> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyIndividualizationServiceRequest>
{};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyLicense> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyLicense>
{
    HRESULT __stdcall get_FullyEvaluated(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FullyEvaluated());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UsableForPlay(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UsableForPlay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExpirationDate(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExpirationDate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExpireAfterFirstPlay(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExpireAfterFirstPlay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DomainAccountID(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DomainAccountID());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ChainDepth(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChainDepth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetKIDAtChainDepth(uint32_t chainDepth, GUID * kid) noexcept override
    {
        try
        {
            *kid = detach(this->shim().GetKIDAtChainDepth(chainDepth));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest>
{
    HRESULT __stdcall get_ContentHeader(abi_arg_out<Windows::Media::Protection::PlayReady::IPlayReadyContentHeader> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentHeader());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentHeader(abi_arg_in<Windows::Media::Protection::PlayReady::IPlayReadyContentHeader> value) noexcept override
    {
        try
        {
            this->shim().ContentHeader(*reinterpret_cast<const Windows::Media::Protection::PlayReady::PlayReadyContentHeader *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DomainServiceId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DomainServiceId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DomainServiceId(GUID value) noexcept override
    {
        try
        {
            this->shim().DomainServiceId(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest2> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest2>
{
    HRESULT __stdcall get_SessionId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SessionId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyLicenseIterableFactory> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyLicenseIterableFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::Media::Protection::PlayReady::IPlayReadyContentHeader> contentHeader, bool fullyEvaluated, abi_arg_out<Windows::Foundation::Collections::IIterable<Windows::Media::Protection::PlayReady::IPlayReadyLicense>> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::Media::Protection::PlayReady::PlayReadyContentHeader *>(&contentHeader), fullyEvaluated));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyLicenseManagement> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyLicenseManagement>
{
    HRESULT __stdcall abi_DeleteLicenses(abi_arg_in<Windows::Media::Protection::PlayReady::IPlayReadyContentHeader> contentHeader, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().DeleteLicenses(*reinterpret_cast<const Windows::Media::Protection::PlayReady::PlayReadyContentHeader *>(&contentHeader)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession>
{
    HRESULT __stdcall abi_CreateLAServiceRequest(abi_arg_out<Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest> serviceRequest) noexcept override
    {
        try
        {
            *serviceRequest = detach(this->shim().CreateLAServiceRequest());
            return S_OK;
        }
        catch (...)
        {
            *serviceRequest = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConfigureMediaProtectionManager(abi_arg_in<Windows::Media::Protection::IMediaProtectionManager> mpm) noexcept override
    {
        try
        {
            this->shim().ConfigureMediaProtectionManager(*reinterpret_cast<const Windows::Media::Protection::MediaProtectionManager *>(&mpm));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyLicenseSessionFactory> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyLicenseSessionFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::Foundation::Collections::IPropertySet> configuration, abi_arg_out<Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::Foundation::Collections::IPropertySet *>(&configuration)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyMeteringReportServiceRequest> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyMeteringReportServiceRequest>
{
    HRESULT __stdcall get_MeteringCertificate(uint32_t * __meteringCertBytesSize, abi_arg_out<uint8_t> * meteringCertBytes) noexcept override
    {
        try
        {
            std::tie(*__meteringCertBytesSize, *meteringCertBytes) = detach(this->shim().MeteringCertificate());
            return S_OK;
        }
        catch (...)
        {
            *__meteringCertBytesSize = 0;
            *meteringCertBytes = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MeteringCertificate(uint32_t __meteringCertBytesSize, abi_arg_in<uint8_t> * meteringCertBytes) noexcept override
    {
        try
        {
            this->shim().MeteringCertificate(array_ref<const uint8_t>(meteringCertBytes, meteringCertBytes + __meteringCertBytesSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyRevocationServiceRequest> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyRevocationServiceRequest>
{};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadySecureStopIterableFactory> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadySecureStopIterableFactory>
{
    HRESULT __stdcall abi_CreateInstance(uint32_t __publisherCertBytesSize, abi_arg_in<uint8_t> * publisherCertBytes, abi_arg_out<Windows::Foundation::Collections::IIterable<Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest>> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(array_ref<const uint8_t>(publisherCertBytes, publisherCertBytes + __publisherCertBytesSize)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest>
{
    HRESULT __stdcall get_SessionID(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SessionID());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StartTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StartTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UpdateTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UpdateTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Stopped(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Stopped());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PublisherCertificate(uint32_t * __publisherCertBytesSize, abi_arg_out<uint8_t> * publisherCertBytes) noexcept override
    {
        try
        {
            std::tie(*__publisherCertBytesSize, *publisherCertBytes) = detach(this->shim().PublisherCertificate());
            return S_OK;
        }
        catch (...)
        {
            *__publisherCertBytesSize = 0;
            *publisherCertBytes = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequestFactory> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequestFactory>
{
    HRESULT __stdcall abi_CreateInstance(uint32_t __publisherCertBytesSize, abi_arg_in<uint8_t> * publisherCertBytes, abi_arg_out<Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(array_ref<const uint8_t>(publisherCertBytes, publisherCertBytes + __publisherCertBytesSize)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateInstanceFromSessionID(GUID sessionID, uint32_t __publisherCertBytesSize, abi_arg_in<uint8_t> * publisherCertBytes, abi_arg_out<Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstanceFromSessionID(sessionID, array_ref<const uint8_t>(publisherCertBytes, publisherCertBytes + __publisherCertBytesSize)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest>
{
    HRESULT __stdcall get_Uri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Uri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().Uri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResponseCustomData(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResponseCustomData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ChallengeCustomData(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChallengeCustomData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ChallengeCustomData(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ChallengeCustomData(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_BeginServiceRequest(abi_arg_out<Windows::Foundation::IAsyncAction> action) noexcept override
    {
        try
        {
            *action = detach(this->shim().BeginServiceRequest());
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_NextServiceRequest(abi_arg_out<Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest> serviceRequest) noexcept override
    {
        try
        {
            *serviceRequest = detach(this->shim().NextServiceRequest());
            return S_OK;
        }
        catch (...)
        {
            *serviceRequest = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GenerateManualEnablingChallenge(abi_arg_out<Windows::Media::Protection::PlayReady::IPlayReadySoapMessage> challengeMessage) noexcept override
    {
        try
        {
            *challengeMessage = detach(this->shim().GenerateManualEnablingChallenge());
            return S_OK;
        }
        catch (...)
        {
            *challengeMessage = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ProcessManualEnablingResponse(uint32_t __responseBytesSize, abi_arg_in<uint8_t> * responseBytes, HRESULT * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ProcessManualEnablingResponse(array_ref<const uint8_t>(responseBytes, responseBytes + __responseBytesSize)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadySoapMessage> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadySoapMessage>
{
    HRESULT __stdcall abi_GetMessageBody(uint32_t * __messageBodyBytesSize, abi_arg_out<uint8_t> * messageBodyBytes) noexcept override
    {
        try
        {
            std::tie(*__messageBodyBytesSize, *messageBodyBytes) = detach(this->shim().GetMessageBody());
            return S_OK;
        }
        catch (...)
        {
            *__messageBodyBytesSize = 0;
            *messageBodyBytes = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MessageHeaders(abi_arg_out<Windows::Foundation::Collections::IPropertySet> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MessageHeaders());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Uri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> messageUri) noexcept override
    {
        try
        {
            *messageUri = detach(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            *messageUri = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyStatics> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyStatics>
{
    HRESULT __stdcall get_DomainJoinServiceRequestType(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DomainJoinServiceRequestType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DomainLeaveServiceRequestType(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DomainLeaveServiceRequestType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IndividualizationServiceRequestType(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IndividualizationServiceRequestType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LicenseAcquirerServiceRequestType(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LicenseAcquirerServiceRequestType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MeteringReportServiceRequestType(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MeteringReportServiceRequestType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RevocationServiceRequestType(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RevocationServiceRequestType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaProtectionSystemId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediaProtectionSystemId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PlayReadySecurityVersion(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PlayReadySecurityVersion());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyStatics2> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyStatics2>
{
    HRESULT __stdcall get_PlayReadyCertificateSecurityLevel(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PlayReadyCertificateSecurityLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyStatics3> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyStatics3>
{
    HRESULT __stdcall get_SecureStopServiceRequestType(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SecureStopServiceRequestType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CheckSupportedHardware(Windows::Media::Protection::PlayReady::PlayReadyHardwareDRMFeatures hwdrmFeature, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CheckSupportedHardware(hwdrmFeature));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyStatics4> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyStatics4>
{
    HRESULT __stdcall get_InputTrustAuthorityToCreate(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InputTrustAuthorityToCreate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProtectionSystemId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProtectionSystemId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Media::Protection::PlayReady {

template <typename D> GUID impl_IPlayReadyContentHeader<D>::KeyId() const
{
    GUID value {};
    check_hresult(static_cast<const IPlayReadyContentHeader &>(static_cast<const D &>(*this))->get_KeyId(&value));
    return value;
}

template <typename D> hstring impl_IPlayReadyContentHeader<D>::KeyIdString() const
{
    hstring value;
    check_hresult(static_cast<const IPlayReadyContentHeader &>(static_cast<const D &>(*this))->get_KeyIdString(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IPlayReadyContentHeader<D>::LicenseAcquisitionUrl() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IPlayReadyContentHeader &>(static_cast<const D &>(*this))->get_LicenseAcquisitionUrl(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IPlayReadyContentHeader<D>::LicenseAcquisitionUserInterfaceUrl() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IPlayReadyContentHeader &>(static_cast<const D &>(*this))->get_LicenseAcquisitionUserInterfaceUrl(put(value)));
    return value;
}

template <typename D> GUID impl_IPlayReadyContentHeader<D>::DomainServiceId() const
{
    GUID value {};
    check_hresult(static_cast<const IPlayReadyContentHeader &>(static_cast<const D &>(*this))->get_DomainServiceId(&value));
    return value;
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm impl_IPlayReadyContentHeader<D>::EncryptionType() const
{
    Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm value {};
    check_hresult(static_cast<const IPlayReadyContentHeader &>(static_cast<const D &>(*this))->get_EncryptionType(&value));
    return value;
}

template <typename D> hstring impl_IPlayReadyContentHeader<D>::CustomAttributes() const
{
    hstring value;
    check_hresult(static_cast<const IPlayReadyContentHeader &>(static_cast<const D &>(*this))->get_CustomAttributes(put(value)));
    return value;
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadyDecryptorSetup impl_IPlayReadyContentHeader<D>::DecryptorSetup() const
{
    Windows::Media::Protection::PlayReady::PlayReadyDecryptorSetup value {};
    check_hresult(static_cast<const IPlayReadyContentHeader &>(static_cast<const D &>(*this))->get_DecryptorSetup(&value));
    return value;
}

template <typename D> com_array<uint8_t> impl_IPlayReadyContentHeader<D>::GetSerializedHeader() const
{
    com_array<uint8_t> headerBytes {};
    check_hresult(static_cast<const IPlayReadyContentHeader &>(static_cast<const D &>(*this))->abi_GetSerializedHeader(put_size(headerBytes), put(headerBytes)));
    return headerBytes;
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadyContentHeader impl_IPlayReadyContentHeader<D>::HeaderWithEmbeddedUpdates() const
{
    Windows::Media::Protection::PlayReady::PlayReadyContentHeader value { nullptr };
    check_hresult(static_cast<const IPlayReadyContentHeader &>(static_cast<const D &>(*this))->get_HeaderWithEmbeddedUpdates(put(value)));
    return value;
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadyContentHeader impl_IPlayReadyContentHeaderFactory<D>::CreateInstanceFromWindowsMediaDrmHeader(array_ref<const uint8_t> headerBytes, const Windows::Foundation::Uri & licenseAcquisitionUrl, const Windows::Foundation::Uri & licenseAcquisitionUserInterfaceUrl, hstring_ref customAttributes, GUID domainServiceId) const
{
    Windows::Media::Protection::PlayReady::PlayReadyContentHeader instance { nullptr };
    check_hresult(static_cast<const IPlayReadyContentHeaderFactory &>(static_cast<const D &>(*this))->abi_CreateInstanceFromWindowsMediaDrmHeader(headerBytes.size(), get(headerBytes), get(licenseAcquisitionUrl), get(licenseAcquisitionUserInterfaceUrl), get(customAttributes), domainServiceId, put(instance)));
    return instance;
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadyContentHeader impl_IPlayReadyContentHeaderFactory<D>::CreateInstanceFromComponents(GUID contentKeyId, hstring_ref contentKeyIdString, Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm contentEncryptionAlgorithm, const Windows::Foundation::Uri & licenseAcquisitionUrl, const Windows::Foundation::Uri & licenseAcquisitionUserInterfaceUrl, hstring_ref customAttributes, GUID domainServiceId) const
{
    Windows::Media::Protection::PlayReady::PlayReadyContentHeader instance { nullptr };
    check_hresult(static_cast<const IPlayReadyContentHeaderFactory &>(static_cast<const D &>(*this))->abi_CreateInstanceFromComponents(contentKeyId, get(contentKeyIdString), contentEncryptionAlgorithm, get(licenseAcquisitionUrl), get(licenseAcquisitionUserInterfaceUrl), get(customAttributes), domainServiceId, put(instance)));
    return instance;
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadyContentHeader impl_IPlayReadyContentHeaderFactory<D>::CreateInstanceFromPlayReadyHeader(array_ref<const uint8_t> headerBytes) const
{
    Windows::Media::Protection::PlayReady::PlayReadyContentHeader instance { nullptr };
    check_hresult(static_cast<const IPlayReadyContentHeaderFactory &>(static_cast<const D &>(*this))->abi_CreateInstanceFromPlayReadyHeader(headerBytes.size(), get(headerBytes), put(instance)));
    return instance;
}

template <typename D> com_array<GUID> impl_IPlayReadyContentHeader2<D>::KeyIds() const
{
    com_array<GUID> contentKeyIds {};
    check_hresult(static_cast<const IPlayReadyContentHeader2 &>(static_cast<const D &>(*this))->get_KeyIds(put_size(contentKeyIds), put(contentKeyIds)));
    return contentKeyIds;
}

template <typename D> com_array<hstring> impl_IPlayReadyContentHeader2<D>::KeyIdStrings() const
{
    com_array<hstring> contentKeyIdStrings;
    check_hresult(static_cast<const IPlayReadyContentHeader2 &>(static_cast<const D &>(*this))->get_KeyIdStrings(put_size(contentKeyIdStrings), put(contentKeyIdStrings)));
    return contentKeyIdStrings;
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadyContentHeader impl_IPlayReadyContentHeaderFactory2<D>::CreateInstanceFromComponents2(uint32_t dwFlags, array_ref<const GUID> contentKeyIds, array_ref<const hstring> contentKeyIdStrings, Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm contentEncryptionAlgorithm, const Windows::Foundation::Uri & licenseAcquisitionUrl, const Windows::Foundation::Uri & licenseAcquisitionUserInterfaceUrl, hstring_ref customAttributes, GUID domainServiceId) const
{
    Windows::Media::Protection::PlayReady::PlayReadyContentHeader instance { nullptr };
    check_hresult(static_cast<const IPlayReadyContentHeaderFactory2 &>(static_cast<const D &>(*this))->abi_CreateInstanceFromComponents2(dwFlags, contentKeyIds.size(), get(contentKeyIds), contentKeyIdStrings.size(), get(contentKeyIdStrings), contentEncryptionAlgorithm, get(licenseAcquisitionUrl), get(licenseAcquisitionUserInterfaceUrl), get(customAttributes), domainServiceId, put(instance)));
    return instance;
}

template <typename D> Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest impl_IPlayReadyContentResolver<D>::ServiceRequest(const Windows::Media::Protection::PlayReady::PlayReadyContentHeader & contentHeader) const
{
    Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest serviceRequest;
    check_hresult(static_cast<const IPlayReadyContentResolver &>(static_cast<const D &>(*this))->abi_ServiceRequest(get(contentHeader), put(serviceRequest)));
    return serviceRequest;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IPlayReadyLicenseManagement<D>::DeleteLicenses(const Windows::Media::Protection::PlayReady::PlayReadyContentHeader & contentHeader) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IPlayReadyLicenseManagement &>(static_cast<const D &>(*this))->abi_DeleteLicenses(get(contentHeader), put(operation)));
    return operation;
}

template <typename D> bool impl_IPlayReadyLicense<D>::FullyEvaluated() const
{
    bool value {};
    check_hresult(static_cast<const IPlayReadyLicense &>(static_cast<const D &>(*this))->get_FullyEvaluated(&value));
    return value;
}

template <typename D> bool impl_IPlayReadyLicense<D>::UsableForPlay() const
{
    bool value {};
    check_hresult(static_cast<const IPlayReadyLicense &>(static_cast<const D &>(*this))->get_UsableForPlay(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IPlayReadyLicense<D>::ExpirationDate() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IPlayReadyLicense &>(static_cast<const D &>(*this))->get_ExpirationDate(put(value)));
    return value;
}

template <typename D> uint32_t impl_IPlayReadyLicense<D>::ExpireAfterFirstPlay() const
{
    uint32_t value {};
    check_hresult(static_cast<const IPlayReadyLicense &>(static_cast<const D &>(*this))->get_ExpireAfterFirstPlay(&value));
    return value;
}

template <typename D> GUID impl_IPlayReadyLicense<D>::DomainAccountID() const
{
    GUID value {};
    check_hresult(static_cast<const IPlayReadyLicense &>(static_cast<const D &>(*this))->get_DomainAccountID(&value));
    return value;
}

template <typename D> uint32_t impl_IPlayReadyLicense<D>::ChainDepth() const
{
    uint32_t value {};
    check_hresult(static_cast<const IPlayReadyLicense &>(static_cast<const D &>(*this))->get_ChainDepth(&value));
    return value;
}

template <typename D> GUID impl_IPlayReadyLicense<D>::GetKIDAtChainDepth(uint32_t chainDepth) const
{
    GUID kid {};
    check_hresult(static_cast<const IPlayReadyLicense &>(static_cast<const D &>(*this))->abi_GetKIDAtChainDepth(chainDepth, &kid));
    return kid;
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadyLicenseIterable impl_IPlayReadyLicenseIterableFactory<D>::CreateInstance(const Windows::Media::Protection::PlayReady::PlayReadyContentHeader & contentHeader, bool fullyEvaluated) const
{
    Windows::Media::Protection::PlayReady::PlayReadyLicenseIterable instance { nullptr };
    check_hresult(static_cast<const IPlayReadyLicenseIterableFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(contentHeader), fullyEvaluated, put(instance)));
    return instance;
}

template <typename D> GUID impl_IPlayReadyDomain<D>::AccountId() const
{
    GUID value {};
    check_hresult(static_cast<const IPlayReadyDomain &>(static_cast<const D &>(*this))->get_AccountId(&value));
    return value;
}

template <typename D> GUID impl_IPlayReadyDomain<D>::ServiceId() const
{
    GUID value {};
    check_hresult(static_cast<const IPlayReadyDomain &>(static_cast<const D &>(*this))->get_ServiceId(&value));
    return value;
}

template <typename D> uint32_t impl_IPlayReadyDomain<D>::Revision() const
{
    uint32_t value {};
    check_hresult(static_cast<const IPlayReadyDomain &>(static_cast<const D &>(*this))->get_Revision(&value));
    return value;
}

template <typename D> hstring impl_IPlayReadyDomain<D>::FriendlyName() const
{
    hstring value;
    check_hresult(static_cast<const IPlayReadyDomain &>(static_cast<const D &>(*this))->get_FriendlyName(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IPlayReadyDomain<D>::DomainJoinUrl() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IPlayReadyDomain &>(static_cast<const D &>(*this))->get_DomainJoinUrl(put(value)));
    return value;
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadyDomainIterable impl_IPlayReadyDomainIterableFactory<D>::CreateInstance(GUID domainAccountId) const
{
    Windows::Media::Protection::PlayReady::PlayReadyDomainIterable domainIterable { nullptr };
    check_hresult(static_cast<const IPlayReadyDomainIterableFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(domainAccountId, put(domainIterable)));
    return domainIterable;
}

template <typename D> GUID impl_IPlayReadyStatics<D>::DomainJoinServiceRequestType() const
{
    GUID value {};
    check_hresult(static_cast<const IPlayReadyStatics &>(static_cast<const D &>(*this))->get_DomainJoinServiceRequestType(&value));
    return value;
}

template <typename D> GUID impl_IPlayReadyStatics<D>::DomainLeaveServiceRequestType() const
{
    GUID value {};
    check_hresult(static_cast<const IPlayReadyStatics &>(static_cast<const D &>(*this))->get_DomainLeaveServiceRequestType(&value));
    return value;
}

template <typename D> GUID impl_IPlayReadyStatics<D>::IndividualizationServiceRequestType() const
{
    GUID value {};
    check_hresult(static_cast<const IPlayReadyStatics &>(static_cast<const D &>(*this))->get_IndividualizationServiceRequestType(&value));
    return value;
}

template <typename D> GUID impl_IPlayReadyStatics<D>::LicenseAcquirerServiceRequestType() const
{
    GUID value {};
    check_hresult(static_cast<const IPlayReadyStatics &>(static_cast<const D &>(*this))->get_LicenseAcquirerServiceRequestType(&value));
    return value;
}

template <typename D> GUID impl_IPlayReadyStatics<D>::MeteringReportServiceRequestType() const
{
    GUID value {};
    check_hresult(static_cast<const IPlayReadyStatics &>(static_cast<const D &>(*this))->get_MeteringReportServiceRequestType(&value));
    return value;
}

template <typename D> GUID impl_IPlayReadyStatics<D>::RevocationServiceRequestType() const
{
    GUID value {};
    check_hresult(static_cast<const IPlayReadyStatics &>(static_cast<const D &>(*this))->get_RevocationServiceRequestType(&value));
    return value;
}

template <typename D> GUID impl_IPlayReadyStatics<D>::MediaProtectionSystemId() const
{
    GUID value {};
    check_hresult(static_cast<const IPlayReadyStatics &>(static_cast<const D &>(*this))->get_MediaProtectionSystemId(&value));
    return value;
}

template <typename D> uint32_t impl_IPlayReadyStatics<D>::PlayReadySecurityVersion() const
{
    uint32_t value {};
    check_hresult(static_cast<const IPlayReadyStatics &>(static_cast<const D &>(*this))->get_PlayReadySecurityVersion(&value));
    return value;
}

template <typename D> uint32_t impl_IPlayReadyStatics2<D>::PlayReadyCertificateSecurityLevel() const
{
    uint32_t value {};
    check_hresult(static_cast<const IPlayReadyStatics2 &>(static_cast<const D &>(*this))->get_PlayReadyCertificateSecurityLevel(&value));
    return value;
}

template <typename D> GUID impl_IPlayReadyStatics3<D>::SecureStopServiceRequestType() const
{
    GUID value {};
    check_hresult(static_cast<const IPlayReadyStatics3 &>(static_cast<const D &>(*this))->get_SecureStopServiceRequestType(&value));
    return value;
}

template <typename D> bool impl_IPlayReadyStatics3<D>::CheckSupportedHardware(Windows::Media::Protection::PlayReady::PlayReadyHardwareDRMFeatures hwdrmFeature) const
{
    bool value {};
    check_hresult(static_cast<const IPlayReadyStatics3 &>(static_cast<const D &>(*this))->abi_CheckSupportedHardware(hwdrmFeature, &value));
    return value;
}

template <typename D> hstring impl_IPlayReadyStatics4<D>::InputTrustAuthorityToCreate() const
{
    hstring value;
    check_hresult(static_cast<const IPlayReadyStatics4 &>(static_cast<const D &>(*this))->get_InputTrustAuthorityToCreate(put(value)));
    return value;
}

template <typename D> GUID impl_IPlayReadyStatics4<D>::ProtectionSystemId() const
{
    GUID value {};
    check_hresult(static_cast<const IPlayReadyStatics4 &>(static_cast<const D &>(*this))->get_ProtectionSystemId(&value));
    return value;
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadySecureStopServiceRequest impl_IPlayReadySecureStopServiceRequestFactory<D>::CreateInstance(array_ref<const uint8_t> publisherCertBytes) const
{
    Windows::Media::Protection::PlayReady::PlayReadySecureStopServiceRequest instance { nullptr };
    check_hresult(static_cast<const IPlayReadySecureStopServiceRequestFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(publisherCertBytes.size(), get(publisherCertBytes), put(instance)));
    return instance;
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadySecureStopServiceRequest impl_IPlayReadySecureStopServiceRequestFactory<D>::CreateInstanceFromSessionID(GUID sessionID, array_ref<const uint8_t> publisherCertBytes) const
{
    Windows::Media::Protection::PlayReady::PlayReadySecureStopServiceRequest instance { nullptr };
    check_hresult(static_cast<const IPlayReadySecureStopServiceRequestFactory &>(static_cast<const D &>(*this))->abi_CreateInstanceFromSessionID(sessionID, publisherCertBytes.size(), get(publisherCertBytes), put(instance)));
    return instance;
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadySecureStopIterable impl_IPlayReadySecureStopIterableFactory<D>::CreateInstance(array_ref<const uint8_t> publisherCertBytes) const
{
    Windows::Media::Protection::PlayReady::PlayReadySecureStopIterable instance { nullptr };
    check_hresult(static_cast<const IPlayReadySecureStopIterableFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(publisherCertBytes.size(), get(publisherCertBytes), put(instance)));
    return instance;
}

template <typename D> com_array<uint8_t> impl_IPlayReadySoapMessage<D>::GetMessageBody() const
{
    com_array<uint8_t> messageBodyBytes {};
    check_hresult(static_cast<const IPlayReadySoapMessage &>(static_cast<const D &>(*this))->abi_GetMessageBody(put_size(messageBodyBytes), put(messageBodyBytes)));
    return messageBodyBytes;
}

template <typename D> Windows::Foundation::Collections::IPropertySet impl_IPlayReadySoapMessage<D>::MessageHeaders() const
{
    Windows::Foundation::Collections::IPropertySet value;
    check_hresult(static_cast<const IPlayReadySoapMessage &>(static_cast<const D &>(*this))->get_MessageHeaders(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IPlayReadySoapMessage<D>::Uri() const
{
    Windows::Foundation::Uri messageUri { nullptr };
    check_hresult(static_cast<const IPlayReadySoapMessage &>(static_cast<const D &>(*this))->get_Uri(put(messageUri)));
    return messageUri;
}

template <typename D> com_array<uint8_t> impl_IPlayReadyITADataGenerator<D>::GenerateData(GUID guidCPSystemId, uint32_t countOfStreams, const Windows::Foundation::Collections::IPropertySet & configuration, Windows::Media::Protection::PlayReady::PlayReadyITADataFormat format) const
{
    com_array<uint8_t> dataBytes {};
    check_hresult(static_cast<const IPlayReadyITADataGenerator &>(static_cast<const D &>(*this))->abi_GenerateData(guidCPSystemId, countOfStreams, get(configuration), format, put_size(dataBytes), put(dataBytes)));
    return dataBytes;
}

template <typename D> Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest impl_IPlayReadyLicenseSession<D>::CreateLAServiceRequest() const
{
    Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest serviceRequest;
    check_hresult(static_cast<const IPlayReadyLicenseSession &>(static_cast<const D &>(*this))->abi_CreateLAServiceRequest(put(serviceRequest)));
    return serviceRequest;
}

template <typename D> void impl_IPlayReadyLicenseSession<D>::ConfigureMediaProtectionManager(const Windows::Media::Protection::MediaProtectionManager & mpm) const
{
    check_hresult(static_cast<const IPlayReadyLicenseSession &>(static_cast<const D &>(*this))->abi_ConfigureMediaProtectionManager(get(mpm)));
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadyLicenseSession impl_IPlayReadyLicenseSessionFactory<D>::CreateInstance(const Windows::Foundation::Collections::IPropertySet & configuration) const
{
    Windows::Media::Protection::PlayReady::PlayReadyLicenseSession instance { nullptr };
    check_hresult(static_cast<const IPlayReadyLicenseSessionFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(configuration), put(instance)));
    return instance;
}

template <typename D> void impl_INDDownloadEngine<D>::Open(const Windows::Foundation::Uri & uri, array_ref<const uint8_t> sessionIDBytes) const
{
    check_hresult(static_cast<const INDDownloadEngine &>(static_cast<const D &>(*this))->abi_Open(get(uri), sessionIDBytes.size(), get(sessionIDBytes)));
}

template <typename D> void impl_INDDownloadEngine<D>::Pause() const
{
    check_hresult(static_cast<const INDDownloadEngine &>(static_cast<const D &>(*this))->abi_Pause());
}

template <typename D> void impl_INDDownloadEngine<D>::Resume() const
{
    check_hresult(static_cast<const INDDownloadEngine &>(static_cast<const D &>(*this))->abi_Resume());
}

template <typename D> void impl_INDDownloadEngine<D>::Close() const
{
    check_hresult(static_cast<const INDDownloadEngine &>(static_cast<const D &>(*this))->abi_Close());
}

template <typename D> void impl_INDDownloadEngine<D>::Seek(const Windows::Foundation::TimeSpan & startPosition) const
{
    check_hresult(static_cast<const INDDownloadEngine &>(static_cast<const D &>(*this))->abi_Seek(get(startPosition)));
}

template <typename D> bool impl_INDDownloadEngine<D>::CanSeek() const
{
    bool canSeek {};
    check_hresult(static_cast<const INDDownloadEngine &>(static_cast<const D &>(*this))->get_CanSeek(&canSeek));
    return canSeek;
}

template <typename D> uint32_t impl_INDDownloadEngine<D>::BufferFullMinThresholdInSamples() const
{
    uint32_t bufferFullMinThreshold {};
    check_hresult(static_cast<const INDDownloadEngine &>(static_cast<const D &>(*this))->get_BufferFullMinThresholdInSamples(&bufferFullMinThreshold));
    return bufferFullMinThreshold;
}

template <typename D> uint32_t impl_INDDownloadEngine<D>::BufferFullMaxThresholdInSamples() const
{
    uint32_t bufferFullMaxThreshold {};
    check_hresult(static_cast<const INDDownloadEngine &>(static_cast<const D &>(*this))->get_BufferFullMaxThresholdInSamples(&bufferFullMaxThreshold));
    return bufferFullMaxThreshold;
}

template <typename D> Windows::Media::Protection::PlayReady::NDDownloadEngineNotifier impl_INDDownloadEngine<D>::Notifier() const
{
    Windows::Media::Protection::PlayReady::NDDownloadEngineNotifier instance { nullptr };
    check_hresult(static_cast<const INDDownloadEngine &>(static_cast<const D &>(*this))->get_Notifier(put(instance)));
    return instance;
}

template <typename D> void impl_INDDownloadEngineNotifier<D>::OnStreamOpened() const
{
    check_hresult(static_cast<const INDDownloadEngineNotifier &>(static_cast<const D &>(*this))->abi_OnStreamOpened());
}

template <typename D> void impl_INDDownloadEngineNotifier<D>::OnPlayReadyObjectReceived(array_ref<const uint8_t> dataBytes) const
{
    check_hresult(static_cast<const INDDownloadEngineNotifier &>(static_cast<const D &>(*this))->abi_OnPlayReadyObjectReceived(dataBytes.size(), get(dataBytes)));
}

template <typename D> void impl_INDDownloadEngineNotifier<D>::OnContentIDReceived(const Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor & licenseFetchDescriptor) const
{
    check_hresult(static_cast<const INDDownloadEngineNotifier &>(static_cast<const D &>(*this))->abi_OnContentIDReceived(get(licenseFetchDescriptor)));
}

template <typename D> void impl_INDDownloadEngineNotifier<D>::OnDataReceived(array_ref<const uint8_t> dataBytes, uint32_t bytesReceived) const
{
    check_hresult(static_cast<const INDDownloadEngineNotifier &>(static_cast<const D &>(*this))->abi_OnDataReceived(dataBytes.size(), get(dataBytes), bytesReceived));
}

template <typename D> void impl_INDDownloadEngineNotifier<D>::OnEndOfStream() const
{
    check_hresult(static_cast<const INDDownloadEngineNotifier &>(static_cast<const D &>(*this))->abi_OnEndOfStream());
}

template <typename D> void impl_INDDownloadEngineNotifier<D>::OnNetworkError() const
{
    check_hresult(static_cast<const INDDownloadEngineNotifier &>(static_cast<const D &>(*this))->abi_OnNetworkError());
}

template <typename D> Windows::Media::Protection::PlayReady::NDContentIDType impl_INDLicenseFetchDescriptor<D>::ContentIDType() const
{
    Windows::Media::Protection::PlayReady::NDContentIDType contentIDType {};
    check_hresult(static_cast<const INDLicenseFetchDescriptor &>(static_cast<const D &>(*this))->get_ContentIDType(&contentIDType));
    return contentIDType;
}

template <typename D> com_array<uint8_t> impl_INDLicenseFetchDescriptor<D>::ContentID() const
{
    com_array<uint8_t> contentIDBytes {};
    check_hresult(static_cast<const INDLicenseFetchDescriptor &>(static_cast<const D &>(*this))->get_ContentID(put_size(contentIDBytes), put(contentIDBytes)));
    return contentIDBytes;
}

template <typename D> Windows::Media::Protection::PlayReady::INDCustomData impl_INDLicenseFetchDescriptor<D>::LicenseFetchChallengeCustomData() const
{
    Windows::Media::Protection::PlayReady::INDCustomData licenseFetchChallengeCustomData;
    check_hresult(static_cast<const INDLicenseFetchDescriptor &>(static_cast<const D &>(*this))->get_LicenseFetchChallengeCustomData(put(licenseFetchChallengeCustomData)));
    return licenseFetchChallengeCustomData;
}

template <typename D> void impl_INDLicenseFetchDescriptor<D>::LicenseFetchChallengeCustomData(const Windows::Media::Protection::PlayReady::INDCustomData & licenseFetchChallengeCustomData) const
{
    check_hresult(static_cast<const INDLicenseFetchDescriptor &>(static_cast<const D &>(*this))->put_LicenseFetchChallengeCustomData(get(licenseFetchChallengeCustomData)));
}

template <typename D> com_array<uint8_t> impl_INDCustomData<D>::CustomDataTypeID() const
{
    com_array<uint8_t> customDataTypeIDBytes {};
    check_hresult(static_cast<const INDCustomData &>(static_cast<const D &>(*this))->get_CustomDataTypeID(put_size(customDataTypeIDBytes), put(customDataTypeIDBytes)));
    return customDataTypeIDBytes;
}

template <typename D> com_array<uint8_t> impl_INDCustomData<D>::CustomData() const
{
    com_array<uint8_t> customDataBytes {};
    check_hresult(static_cast<const INDCustomData &>(static_cast<const D &>(*this))->get_CustomData(put_size(customDataBytes), put(customDataBytes)));
    return customDataBytes;
}

template <typename D> void impl_INDStreamParser<D>::ParseData(array_ref<const uint8_t> dataBytes) const
{
    check_hresult(static_cast<const INDStreamParser &>(static_cast<const D &>(*this))->abi_ParseData(dataBytes.size(), get(dataBytes)));
}

template <typename D> uint32_t impl_INDStreamParser<D>::GetStreamInformation(const Windows::Media::Core::IMediaStreamDescriptor & descriptor, Windows::Media::Protection::PlayReady::NDMediaStreamType & streamType) const
{
    uint32_t streamID {};
    check_hresult(static_cast<const INDStreamParser &>(static_cast<const D &>(*this))->abi_GetStreamInformation(get(descriptor), &streamType, &streamID));
    return streamID;
}

template <typename D> void impl_INDStreamParser<D>::BeginOfStream() const
{
    check_hresult(static_cast<const INDStreamParser &>(static_cast<const D &>(*this))->abi_BeginOfStream());
}

template <typename D> void impl_INDStreamParser<D>::EndOfStream() const
{
    check_hresult(static_cast<const INDStreamParser &>(static_cast<const D &>(*this))->abi_EndOfStream());
}

template <typename D> Windows::Media::Protection::PlayReady::NDStreamParserNotifier impl_INDStreamParser<D>::Notifier() const
{
    Windows::Media::Protection::PlayReady::NDStreamParserNotifier instance { nullptr };
    check_hresult(static_cast<const INDStreamParser &>(static_cast<const D &>(*this))->get_Notifier(put(instance)));
    return instance;
}

template <typename D> void impl_INDStreamParserNotifier<D>::OnContentIDReceived(const Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor & licenseFetchDescriptor) const
{
    check_hresult(static_cast<const INDStreamParserNotifier &>(static_cast<const D &>(*this))->abi_OnContentIDReceived(get(licenseFetchDescriptor)));
}

template <typename D> void impl_INDStreamParserNotifier<D>::OnMediaStreamDescriptorCreated(const Windows::Foundation::Collections::IVector<Windows::Media::Core::AudioStreamDescriptor> & audioStreamDescriptors, const Windows::Foundation::Collections::IVector<Windows::Media::Core::VideoStreamDescriptor> & videoStreamDescriptors) const
{
    check_hresult(static_cast<const INDStreamParserNotifier &>(static_cast<const D &>(*this))->abi_OnMediaStreamDescriptorCreated(get(audioStreamDescriptors), get(videoStreamDescriptors)));
}

template <typename D> void impl_INDStreamParserNotifier<D>::OnSampleParsed(uint32_t streamID, Windows::Media::Protection::PlayReady::NDMediaStreamType streamType, const Windows::Media::Core::MediaStreamSample & streamSample, int64_t pts, Windows::Media::Protection::PlayReady::NDClosedCaptionFormat ccFormat, array_ref<const uint8_t> ccDataBytes) const
{
    check_hresult(static_cast<const INDStreamParserNotifier &>(static_cast<const D &>(*this))->abi_OnSampleParsed(streamID, streamType, get(streamSample), pts, ccFormat, ccDataBytes.size(), get(ccDataBytes)));
}

template <typename D> void impl_INDStreamParserNotifier<D>::OnBeginSetupDecryptor(const Windows::Media::Core::IMediaStreamDescriptor & descriptor, GUID keyID, array_ref<const uint8_t> proBytes) const
{
    check_hresult(static_cast<const INDStreamParserNotifier &>(static_cast<const D &>(*this))->abi_OnBeginSetupDecryptor(get(descriptor), keyID, proBytes.size(), get(proBytes)));
}

template <typename D> com_array<uint8_t> impl_INDSendResult<D>::Response() const
{
    com_array<uint8_t> responseDataBytes {};
    check_hresult(static_cast<const INDSendResult &>(static_cast<const D &>(*this))->get_Response(put_size(responseDataBytes), put(responseDataBytes)));
    return responseDataBytes;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult> impl_INDMessenger<D>::SendRegistrationRequestAsync(array_ref<const uint8_t> sessionIDBytes, array_ref<const uint8_t> challengeDataBytes) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult> result;
    check_hresult(static_cast<const INDMessenger &>(static_cast<const D &>(*this))->abi_SendRegistrationRequestAsync(sessionIDBytes.size(), get(sessionIDBytes), challengeDataBytes.size(), get(challengeDataBytes), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult> impl_INDMessenger<D>::SendProximityDetectionStartAsync(Windows::Media::Protection::PlayReady::NDProximityDetectionType pdType, array_ref<const uint8_t> transmitterChannelBytes, array_ref<const uint8_t> sessionIDBytes, array_ref<const uint8_t> challengeDataBytes) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult> result;
    check_hresult(static_cast<const INDMessenger &>(static_cast<const D &>(*this))->abi_SendProximityDetectionStartAsync(pdType, transmitterChannelBytes.size(), get(transmitterChannelBytes), sessionIDBytes.size(), get(sessionIDBytes), challengeDataBytes.size(), get(challengeDataBytes), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult> impl_INDMessenger<D>::SendProximityDetectionResponseAsync(Windows::Media::Protection::PlayReady::NDProximityDetectionType pdType, array_ref<const uint8_t> transmitterChannelBytes, array_ref<const uint8_t> sessionIDBytes, array_ref<const uint8_t> responseDataBytes) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult> result;
    check_hresult(static_cast<const INDMessenger &>(static_cast<const D &>(*this))->abi_SendProximityDetectionResponseAsync(pdType, transmitterChannelBytes.size(), get(transmitterChannelBytes), sessionIDBytes.size(), get(sessionIDBytes), responseDataBytes.size(), get(responseDataBytes), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult> impl_INDMessenger<D>::SendLicenseFetchRequestAsync(array_ref<const uint8_t> sessionIDBytes, array_ref<const uint8_t> challengeDataBytes) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult> result;
    check_hresult(static_cast<const INDMessenger &>(static_cast<const D &>(*this))->abi_SendLicenseFetchRequestAsync(sessionIDBytes.size(), get(sessionIDBytes), challengeDataBytes.size(), get(challengeDataBytes), put(result)));
    return result;
}

template <typename D> Windows::Media::Protection::PlayReady::NDTCPMessenger impl_INDTCPMessengerFactory<D>::CreateInstance(hstring_ref remoteHostName, uint32_t remoteHostPort) const
{
    Windows::Media::Protection::PlayReady::NDTCPMessenger instance { nullptr };
    check_hresult(static_cast<const INDTCPMessengerFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(remoteHostName), remoteHostPort, put(instance)));
    return instance;
}

template <typename D> Windows::Media::Protection::PlayReady::NDCertificateType impl_INDTransmitterProperties<D>::CertificateType() const
{
    Windows::Media::Protection::PlayReady::NDCertificateType type {};
    check_hresult(static_cast<const INDTransmitterProperties &>(static_cast<const D &>(*this))->get_CertificateType(&type));
    return type;
}

template <typename D> Windows::Media::Protection::PlayReady::NDCertificatePlatformID impl_INDTransmitterProperties<D>::PlatformIdentifier() const
{
    Windows::Media::Protection::PlayReady::NDCertificatePlatformID identifier {};
    check_hresult(static_cast<const INDTransmitterProperties &>(static_cast<const D &>(*this))->get_PlatformIdentifier(&identifier));
    return identifier;
}

template <typename D> com_array<Windows::Media::Protection::PlayReady::NDCertificateFeature> impl_INDTransmitterProperties<D>::SupportedFeatures() const
{
    com_array<Windows::Media::Protection::PlayReady::NDCertificateFeature> featureSets {};
    check_hresult(static_cast<const INDTransmitterProperties &>(static_cast<const D &>(*this))->get_SupportedFeatures(put_size(featureSets), put(featureSets)));
    return featureSets;
}

template <typename D> uint32_t impl_INDTransmitterProperties<D>::SecurityLevel() const
{
    uint32_t level {};
    check_hresult(static_cast<const INDTransmitterProperties &>(static_cast<const D &>(*this))->get_SecurityLevel(&level));
    return level;
}

template <typename D> uint32_t impl_INDTransmitterProperties<D>::SecurityVersion() const
{
    uint32_t securityVersion {};
    check_hresult(static_cast<const INDTransmitterProperties &>(static_cast<const D &>(*this))->get_SecurityVersion(&securityVersion));
    return securityVersion;
}

template <typename D> Windows::Foundation::DateTime impl_INDTransmitterProperties<D>::ExpirationDate() const
{
    Windows::Foundation::DateTime expirationDate {};
    check_hresult(static_cast<const INDTransmitterProperties &>(static_cast<const D &>(*this))->get_ExpirationDate(put(expirationDate)));
    return expirationDate;
}

template <typename D> com_array<uint8_t> impl_INDTransmitterProperties<D>::ClientID() const
{
    com_array<uint8_t> clientIDBytes {};
    check_hresult(static_cast<const INDTransmitterProperties &>(static_cast<const D &>(*this))->get_ClientID(put_size(clientIDBytes), put(clientIDBytes)));
    return clientIDBytes;
}

template <typename D> com_array<uint8_t> impl_INDTransmitterProperties<D>::ModelDigest() const
{
    com_array<uint8_t> modelDigestBytes {};
    check_hresult(static_cast<const INDTransmitterProperties &>(static_cast<const D &>(*this))->get_ModelDigest(put_size(modelDigestBytes), put(modelDigestBytes)));
    return modelDigestBytes;
}

template <typename D> hstring impl_INDTransmitterProperties<D>::ModelManufacturerName() const
{
    hstring modelManufacturerName;
    check_hresult(static_cast<const INDTransmitterProperties &>(static_cast<const D &>(*this))->get_ModelManufacturerName(put(modelManufacturerName)));
    return modelManufacturerName;
}

template <typename D> hstring impl_INDTransmitterProperties<D>::ModelName() const
{
    hstring modelName;
    check_hresult(static_cast<const INDTransmitterProperties &>(static_cast<const D &>(*this))->get_ModelName(put(modelName)));
    return modelName;
}

template <typename D> hstring impl_INDTransmitterProperties<D>::ModelNumber() const
{
    hstring modelNumber;
    check_hresult(static_cast<const INDTransmitterProperties &>(static_cast<const D &>(*this))->get_ModelNumber(put(modelNumber)));
    return modelNumber;
}

template <typename D> Windows::Media::Core::MediaStreamSource impl_INDStartResult<D>::MediaStreamSource() const
{
    Windows::Media::Core::MediaStreamSource mediaStreamSource { nullptr };
    check_hresult(static_cast<const INDStartResult &>(static_cast<const D &>(*this))->get_MediaStreamSource(put(mediaStreamSource)));
    return mediaStreamSource;
}

template <typename D> Windows::Media::Protection::PlayReady::INDCustomData impl_INDLicenseFetchResult<D>::ResponseCustomData() const
{
    Windows::Media::Protection::PlayReady::INDCustomData customData;
    check_hresult(static_cast<const INDLicenseFetchResult &>(static_cast<const D &>(*this))->get_ResponseCustomData(put(customData)));
    return customData;
}

template <typename D> Windows::Media::Protection::PlayReady::NDLicenseFetchDescriptor impl_INDLicenseFetchDescriptorFactory<D>::CreateInstance(Windows::Media::Protection::PlayReady::NDContentIDType contentIDType, array_ref<const uint8_t> contentIDBytes, const Windows::Media::Protection::PlayReady::INDCustomData & licenseFetchChallengeCustomData) const
{
    Windows::Media::Protection::PlayReady::NDLicenseFetchDescriptor instance { nullptr };
    check_hresult(static_cast<const INDLicenseFetchDescriptorFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(contentIDType, contentIDBytes.size(), get(contentIDBytes), get(licenseFetchChallengeCustomData), put(instance)));
    return instance;
}

template <typename D> Windows::Media::Protection::PlayReady::INDCustomData impl_INDRegistrationCompletedEventArgs<D>::ResponseCustomData() const
{
    Windows::Media::Protection::PlayReady::INDCustomData customData;
    check_hresult(static_cast<const INDRegistrationCompletedEventArgs &>(static_cast<const D &>(*this))->get_ResponseCustomData(put(customData)));
    return customData;
}

template <typename D> Windows::Media::Protection::PlayReady::INDTransmitterProperties impl_INDRegistrationCompletedEventArgs<D>::TransmitterProperties() const
{
    Windows::Media::Protection::PlayReady::INDTransmitterProperties transmitterProperties;
    check_hresult(static_cast<const INDRegistrationCompletedEventArgs &>(static_cast<const D &>(*this))->get_TransmitterProperties(put(transmitterProperties)));
    return transmitterProperties;
}

template <typename D> bool impl_INDRegistrationCompletedEventArgs<D>::TransmitterCertificateAccepted() const
{
    bool acceptpt {};
    check_hresult(static_cast<const INDRegistrationCompletedEventArgs &>(static_cast<const D &>(*this))->get_TransmitterCertificateAccepted(&acceptpt));
    return acceptpt;
}

template <typename D> void impl_INDRegistrationCompletedEventArgs<D>::TransmitterCertificateAccepted(bool accept) const
{
    check_hresult(static_cast<const INDRegistrationCompletedEventArgs &>(static_cast<const D &>(*this))->put_TransmitterCertificateAccepted(accept));
}

template <typename D> Windows::Media::Protection::PlayReady::NDCustomData impl_INDCustomDataFactory<D>::CreateInstance(array_ref<const uint8_t> customDataTypeIDBytes, array_ref<const uint8_t> customDataBytes) const
{
    Windows::Media::Protection::PlayReady::NDCustomData instance { nullptr };
    check_hresult(static_cast<const INDCustomDataFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(customDataTypeIDBytes.size(), get(customDataTypeIDBytes), customDataBytes.size(), get(customDataBytes), put(instance)));
    return instance;
}

template <typename D> uint32_t impl_INDProximityDetectionCompletedEventArgs<D>::ProximityDetectionRetryCount() const
{
    uint32_t retryCount {};
    check_hresult(static_cast<const INDProximityDetectionCompletedEventArgs &>(static_cast<const D &>(*this))->get_ProximityDetectionRetryCount(&retryCount));
    return retryCount;
}

template <typename D> Windows::Media::Protection::PlayReady::INDCustomData impl_INDLicenseFetchCompletedEventArgs<D>::ResponseCustomData() const
{
    Windows::Media::Protection::PlayReady::INDCustomData customData;
    check_hresult(static_cast<const INDLicenseFetchCompletedEventArgs &>(static_cast<const D &>(*this))->get_ResponseCustomData(put(customData)));
    return customData;
}

template <typename D> event_token impl_INDClient<D>::RegistrationCompleted(const Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const INDClient &>(static_cast<const D &>(*this))->add_RegistrationCompleted(get(handler), &token));
    return token;
}

template <typename D> event_revoker<INDClient> impl_INDClient<D>::RegistrationCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, INDClient>(this, &ABI::Windows::Media::Protection::PlayReady::INDClient::remove_RegistrationCompleted, RegistrationCompleted(handler));
}

template <typename D> void impl_INDClient<D>::RegistrationCompleted(event_token token) const
{
    check_hresult(static_cast<const INDClient &>(static_cast<const D &>(*this))->remove_RegistrationCompleted(token));
}

template <typename D> event_token impl_INDClient<D>::ProximityDetectionCompleted(const Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const INDClient &>(static_cast<const D &>(*this))->add_ProximityDetectionCompleted(get(handler), &token));
    return token;
}

template <typename D> event_revoker<INDClient> impl_INDClient<D>::ProximityDetectionCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, INDClient>(this, &ABI::Windows::Media::Protection::PlayReady::INDClient::remove_ProximityDetectionCompleted, ProximityDetectionCompleted(handler));
}

template <typename D> void impl_INDClient<D>::ProximityDetectionCompleted(event_token token) const
{
    check_hresult(static_cast<const INDClient &>(static_cast<const D &>(*this))->remove_ProximityDetectionCompleted(token));
}

template <typename D> event_token impl_INDClient<D>::LicenseFetchCompleted(const Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const INDClient &>(static_cast<const D &>(*this))->add_LicenseFetchCompleted(get(handler), &token));
    return token;
}

template <typename D> event_revoker<INDClient> impl_INDClient<D>::LicenseFetchCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, INDClient>(this, &ABI::Windows::Media::Protection::PlayReady::INDClient::remove_LicenseFetchCompleted, LicenseFetchCompleted(handler));
}

template <typename D> void impl_INDClient<D>::LicenseFetchCompleted(event_token token) const
{
    check_hresult(static_cast<const INDClient &>(static_cast<const D &>(*this))->remove_LicenseFetchCompleted(token));
}

template <typename D> event_token impl_INDClient<D>::ReRegistrationNeeded(const Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const INDClient &>(static_cast<const D &>(*this))->add_ReRegistrationNeeded(get(handler), &token));
    return token;
}

template <typename D> event_revoker<INDClient> impl_INDClient<D>::ReRegistrationNeeded(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, INDClient>(this, &ABI::Windows::Media::Protection::PlayReady::INDClient::remove_ReRegistrationNeeded, ReRegistrationNeeded(handler));
}

template <typename D> void impl_INDClient<D>::ReRegistrationNeeded(event_token token) const
{
    check_hresult(static_cast<const INDClient &>(static_cast<const D &>(*this))->remove_ReRegistrationNeeded(token));
}

template <typename D> event_token impl_INDClient<D>::ClosedCaptionDataReceived(const Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const INDClient &>(static_cast<const D &>(*this))->add_ClosedCaptionDataReceived(get(handler), &token));
    return token;
}

template <typename D> event_revoker<INDClient> impl_INDClient<D>::ClosedCaptionDataReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, INDClient>(this, &ABI::Windows::Media::Protection::PlayReady::INDClient::remove_ClosedCaptionDataReceived, ClosedCaptionDataReceived(handler));
}

template <typename D> void impl_INDClient<D>::ClosedCaptionDataReceived(event_token token) const
{
    check_hresult(static_cast<const INDClient &>(static_cast<const D &>(*this))->remove_ClosedCaptionDataReceived(token));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDStartResult> impl_INDClient<D>::StartAsync(const Windows::Foundation::Uri & contentUrl, uint32_t startAsyncOptions, const Windows::Media::Protection::PlayReady::INDCustomData & registrationCustomData, const Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor & licenseFetchDescriptor) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDStartResult> result;
    check_hresult(static_cast<const INDClient &>(static_cast<const D &>(*this))->abi_StartAsync(get(contentUrl), startAsyncOptions, get(registrationCustomData), get(licenseFetchDescriptor), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDLicenseFetchResult> impl_INDClient<D>::LicenseFetchAsync(const Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor & licenseFetchDescriptor) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDLicenseFetchResult> result;
    check_hresult(static_cast<const INDClient &>(static_cast<const D &>(*this))->abi_LicenseFetchAsync(get(licenseFetchDescriptor), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_INDClient<D>::ReRegistrationAsync(const Windows::Media::Protection::PlayReady::INDCustomData & registrationCustomData) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const INDClient &>(static_cast<const D &>(*this))->abi_ReRegistrationAsync(get(registrationCustomData), put(result)));
    return result;
}

template <typename D> void impl_INDClient<D>::Close() const
{
    check_hresult(static_cast<const INDClient &>(static_cast<const D &>(*this))->abi_Close());
}

template <typename D> Windows::Media::Protection::PlayReady::NDClosedCaptionFormat impl_INDClosedCaptionDataReceivedEventArgs<D>::ClosedCaptionDataFormat() const
{
    Windows::Media::Protection::PlayReady::NDClosedCaptionFormat ccForamt {};
    check_hresult(static_cast<const INDClosedCaptionDataReceivedEventArgs &>(static_cast<const D &>(*this))->get_ClosedCaptionDataFormat(&ccForamt));
    return ccForamt;
}

template <typename D> int64_t impl_INDClosedCaptionDataReceivedEventArgs<D>::PresentationTimestamp() const
{
    int64_t presentationTimestamp {};
    check_hresult(static_cast<const INDClosedCaptionDataReceivedEventArgs &>(static_cast<const D &>(*this))->get_PresentationTimestamp(&presentationTimestamp));
    return presentationTimestamp;
}

template <typename D> com_array<uint8_t> impl_INDClosedCaptionDataReceivedEventArgs<D>::ClosedCaptionData() const
{
    com_array<uint8_t> ccDataBytes {};
    check_hresult(static_cast<const INDClosedCaptionDataReceivedEventArgs &>(static_cast<const D &>(*this))->get_ClosedCaptionData(put_size(ccDataBytes), put(ccDataBytes)));
    return ccDataBytes;
}

template <typename D> Windows::Media::Protection::PlayReady::NDClient impl_INDClientFactory<D>::CreateInstance(const Windows::Media::Protection::PlayReady::INDDownloadEngine & downloadEngine, const Windows::Media::Protection::PlayReady::INDStreamParser & streamParser, const Windows::Media::Protection::PlayReady::INDMessenger & pMessenger) const
{
    Windows::Media::Protection::PlayReady::NDClient instance { nullptr };
    check_hresult(static_cast<const INDClientFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(downloadEngine), get(streamParser), get(pMessenger), put(instance)));
    return instance;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_INDStorageFileHelper<D>::GetFileURLs(const Windows::Storage::IStorageFile & file) const
{
    Windows::Foundation::Collections::IVector<hstring> fileURLs;
    check_hresult(static_cast<const INDStorageFileHelper &>(static_cast<const D &>(*this))->abi_GetFileURLs(get(file), put(fileURLs)));
    return fileURLs;
}

template <typename D> Windows::Foundation::Uri impl_IPlayReadyServiceRequest<D>::Uri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IPlayReadyServiceRequest &>(static_cast<const D &>(*this))->get_Uri(put(value)));
    return value;
}

template <typename D> void impl_IPlayReadyServiceRequest<D>::Uri(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const IPlayReadyServiceRequest &>(static_cast<const D &>(*this))->put_Uri(get(value)));
}

template <typename D> hstring impl_IPlayReadyServiceRequest<D>::ResponseCustomData() const
{
    hstring value;
    check_hresult(static_cast<const IPlayReadyServiceRequest &>(static_cast<const D &>(*this))->get_ResponseCustomData(put(value)));
    return value;
}

template <typename D> hstring impl_IPlayReadyServiceRequest<D>::ChallengeCustomData() const
{
    hstring value;
    check_hresult(static_cast<const IPlayReadyServiceRequest &>(static_cast<const D &>(*this))->get_ChallengeCustomData(put(value)));
    return value;
}

template <typename D> void impl_IPlayReadyServiceRequest<D>::ChallengeCustomData(hstring_ref value) const
{
    check_hresult(static_cast<const IPlayReadyServiceRequest &>(static_cast<const D &>(*this))->put_ChallengeCustomData(get(value)));
}

template <typename D> Windows::Foundation::IAsyncAction impl_IPlayReadyServiceRequest<D>::BeginServiceRequest() const
{
    Windows::Foundation::IAsyncAction action;
    check_hresult(static_cast<const IPlayReadyServiceRequest &>(static_cast<const D &>(*this))->abi_BeginServiceRequest(put(action)));
    return action;
}

template <typename D> Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest impl_IPlayReadyServiceRequest<D>::NextServiceRequest() const
{
    Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest serviceRequest;
    check_hresult(static_cast<const IPlayReadyServiceRequest &>(static_cast<const D &>(*this))->abi_NextServiceRequest(put(serviceRequest)));
    return serviceRequest;
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadySoapMessage impl_IPlayReadyServiceRequest<D>::GenerateManualEnablingChallenge() const
{
    Windows::Media::Protection::PlayReady::PlayReadySoapMessage challengeMessage { nullptr };
    check_hresult(static_cast<const IPlayReadyServiceRequest &>(static_cast<const D &>(*this))->abi_GenerateManualEnablingChallenge(put(challengeMessage)));
    return challengeMessage;
}

template <typename D> HRESULT impl_IPlayReadyServiceRequest<D>::ProcessManualEnablingResponse(array_ref<const uint8_t> responseBytes) const
{
    HRESULT result {};
    check_hresult(static_cast<const IPlayReadyServiceRequest &>(static_cast<const D &>(*this))->abi_ProcessManualEnablingResponse(responseBytes.size(), get(responseBytes), &result));
    return result;
}

template <typename D> GUID impl_IPlayReadyDomainJoinServiceRequest<D>::DomainAccountId() const
{
    GUID value {};
    check_hresult(static_cast<const IPlayReadyDomainJoinServiceRequest &>(static_cast<const D &>(*this))->get_DomainAccountId(&value));
    return value;
}

template <typename D> void impl_IPlayReadyDomainJoinServiceRequest<D>::DomainAccountId(GUID value) const
{
    check_hresult(static_cast<const IPlayReadyDomainJoinServiceRequest &>(static_cast<const D &>(*this))->put_DomainAccountId(value));
}

template <typename D> hstring impl_IPlayReadyDomainJoinServiceRequest<D>::DomainFriendlyName() const
{
    hstring value;
    check_hresult(static_cast<const IPlayReadyDomainJoinServiceRequest &>(static_cast<const D &>(*this))->get_DomainFriendlyName(put(value)));
    return value;
}

template <typename D> void impl_IPlayReadyDomainJoinServiceRequest<D>::DomainFriendlyName(hstring_ref value) const
{
    check_hresult(static_cast<const IPlayReadyDomainJoinServiceRequest &>(static_cast<const D &>(*this))->put_DomainFriendlyName(get(value)));
}

template <typename D> GUID impl_IPlayReadyDomainJoinServiceRequest<D>::DomainServiceId() const
{
    GUID value {};
    check_hresult(static_cast<const IPlayReadyDomainJoinServiceRequest &>(static_cast<const D &>(*this))->get_DomainServiceId(&value));
    return value;
}

template <typename D> void impl_IPlayReadyDomainJoinServiceRequest<D>::DomainServiceId(GUID value) const
{
    check_hresult(static_cast<const IPlayReadyDomainJoinServiceRequest &>(static_cast<const D &>(*this))->put_DomainServiceId(value));
}

template <typename D> GUID impl_IPlayReadyDomainLeaveServiceRequest<D>::DomainAccountId() const
{
    GUID value {};
    check_hresult(static_cast<const IPlayReadyDomainLeaveServiceRequest &>(static_cast<const D &>(*this))->get_DomainAccountId(&value));
    return value;
}

template <typename D> void impl_IPlayReadyDomainLeaveServiceRequest<D>::DomainAccountId(GUID value) const
{
    check_hresult(static_cast<const IPlayReadyDomainLeaveServiceRequest &>(static_cast<const D &>(*this))->put_DomainAccountId(value));
}

template <typename D> GUID impl_IPlayReadyDomainLeaveServiceRequest<D>::DomainServiceId() const
{
    GUID value {};
    check_hresult(static_cast<const IPlayReadyDomainLeaveServiceRequest &>(static_cast<const D &>(*this))->get_DomainServiceId(&value));
    return value;
}

template <typename D> void impl_IPlayReadyDomainLeaveServiceRequest<D>::DomainServiceId(GUID value) const
{
    check_hresult(static_cast<const IPlayReadyDomainLeaveServiceRequest &>(static_cast<const D &>(*this))->put_DomainServiceId(value));
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadyContentHeader impl_IPlayReadyLicenseAcquisitionServiceRequest<D>::ContentHeader() const
{
    Windows::Media::Protection::PlayReady::PlayReadyContentHeader value { nullptr };
    check_hresult(static_cast<const IPlayReadyLicenseAcquisitionServiceRequest &>(static_cast<const D &>(*this))->get_ContentHeader(put(value)));
    return value;
}

template <typename D> void impl_IPlayReadyLicenseAcquisitionServiceRequest<D>::ContentHeader(const Windows::Media::Protection::PlayReady::PlayReadyContentHeader & value) const
{
    check_hresult(static_cast<const IPlayReadyLicenseAcquisitionServiceRequest &>(static_cast<const D &>(*this))->put_ContentHeader(get(value)));
}

template <typename D> GUID impl_IPlayReadyLicenseAcquisitionServiceRequest<D>::DomainServiceId() const
{
    GUID value {};
    check_hresult(static_cast<const IPlayReadyLicenseAcquisitionServiceRequest &>(static_cast<const D &>(*this))->get_DomainServiceId(&value));
    return value;
}

template <typename D> void impl_IPlayReadyLicenseAcquisitionServiceRequest<D>::DomainServiceId(GUID value) const
{
    check_hresult(static_cast<const IPlayReadyLicenseAcquisitionServiceRequest &>(static_cast<const D &>(*this))->put_DomainServiceId(value));
}

template <typename D> GUID impl_IPlayReadyLicenseAcquisitionServiceRequest2<D>::SessionId() const
{
    GUID value {};
    check_hresult(static_cast<const IPlayReadyLicenseAcquisitionServiceRequest2 &>(static_cast<const D &>(*this))->get_SessionId(&value));
    return value;
}

template <typename D> com_array<uint8_t> impl_IPlayReadyMeteringReportServiceRequest<D>::MeteringCertificate() const
{
    com_array<uint8_t> meteringCertBytes {};
    check_hresult(static_cast<const IPlayReadyMeteringReportServiceRequest &>(static_cast<const D &>(*this))->get_MeteringCertificate(put_size(meteringCertBytes), put(meteringCertBytes)));
    return meteringCertBytes;
}

template <typename D> void impl_IPlayReadyMeteringReportServiceRequest<D>::MeteringCertificate(array_ref<const uint8_t> meteringCertBytes) const
{
    check_hresult(static_cast<const IPlayReadyMeteringReportServiceRequest &>(static_cast<const D &>(*this))->put_MeteringCertificate(meteringCertBytes.size(), get(meteringCertBytes)));
}

template <typename D> GUID impl_IPlayReadySecureStopServiceRequest<D>::SessionID() const
{
    GUID value {};
    check_hresult(static_cast<const IPlayReadySecureStopServiceRequest &>(static_cast<const D &>(*this))->get_SessionID(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IPlayReadySecureStopServiceRequest<D>::StartTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IPlayReadySecureStopServiceRequest &>(static_cast<const D &>(*this))->get_StartTime(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IPlayReadySecureStopServiceRequest<D>::UpdateTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IPlayReadySecureStopServiceRequest &>(static_cast<const D &>(*this))->get_UpdateTime(put(value)));
    return value;
}

template <typename D> bool impl_IPlayReadySecureStopServiceRequest<D>::Stopped() const
{
    bool value {};
    check_hresult(static_cast<const IPlayReadySecureStopServiceRequest &>(static_cast<const D &>(*this))->get_Stopped(&value));
    return value;
}

template <typename D> com_array<uint8_t> impl_IPlayReadySecureStopServiceRequest<D>::PublisherCertificate() const
{
    com_array<uint8_t> publisherCertBytes {};
    check_hresult(static_cast<const IPlayReadySecureStopServiceRequest &>(static_cast<const D &>(*this))->get_PublisherCertificate(put_size(publisherCertBytes), put(publisherCertBytes)));
    return publisherCertBytes;
}

inline NDClient::NDClient(const Windows::Media::Protection::PlayReady::INDDownloadEngine & downloadEngine, const Windows::Media::Protection::PlayReady::INDStreamParser & streamParser, const Windows::Media::Protection::PlayReady::INDMessenger & pMessenger) :
    NDClient(get_activation_factory<NDClient, INDClientFactory>().CreateInstance(downloadEngine, streamParser, pMessenger))
{}

inline NDCustomData::NDCustomData(array_ref<const uint8_t> customDataTypeIDBytes, array_ref<const uint8_t> customDataBytes) :
    NDCustomData(get_activation_factory<NDCustomData, INDCustomDataFactory>().CreateInstance(customDataTypeIDBytes, customDataBytes))
{}

inline NDDownloadEngineNotifier::NDDownloadEngineNotifier() :
    NDDownloadEngineNotifier(activate_instance<NDDownloadEngineNotifier>())
{}

inline NDLicenseFetchDescriptor::NDLicenseFetchDescriptor(Windows::Media::Protection::PlayReady::NDContentIDType contentIDType, array_ref<const uint8_t> contentIDBytes, const Windows::Media::Protection::PlayReady::INDCustomData & licenseFetchChallengeCustomData) :
    NDLicenseFetchDescriptor(get_activation_factory<NDLicenseFetchDescriptor, INDLicenseFetchDescriptorFactory>().CreateInstance(contentIDType, contentIDBytes, licenseFetchChallengeCustomData))
{}

inline NDStorageFileHelper::NDStorageFileHelper() :
    NDStorageFileHelper(activate_instance<NDStorageFileHelper>())
{}

inline NDStreamParserNotifier::NDStreamParserNotifier() :
    NDStreamParserNotifier(activate_instance<NDStreamParserNotifier>())
{}

inline NDTCPMessenger::NDTCPMessenger(hstring_ref remoteHostName, uint32_t remoteHostPort) :
    NDTCPMessenger(get_activation_factory<NDTCPMessenger, INDTCPMessengerFactory>().CreateInstance(remoteHostName, remoteHostPort))
{}

inline PlayReadyContentHeader::PlayReadyContentHeader(array_ref<const uint8_t> headerBytes, const Windows::Foundation::Uri & licenseAcquisitionUrl, const Windows::Foundation::Uri & licenseAcquisitionUserInterfaceUrl, hstring_ref customAttributes, GUID domainServiceId) :
    PlayReadyContentHeader(get_activation_factory<PlayReadyContentHeader, IPlayReadyContentHeaderFactory>().CreateInstanceFromWindowsMediaDrmHeader(headerBytes, licenseAcquisitionUrl, licenseAcquisitionUserInterfaceUrl, customAttributes, domainServiceId))
{}

inline PlayReadyContentHeader::PlayReadyContentHeader(GUID contentKeyId, hstring_ref contentKeyIdString, Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm contentEncryptionAlgorithm, const Windows::Foundation::Uri & licenseAcquisitionUrl, const Windows::Foundation::Uri & licenseAcquisitionUserInterfaceUrl, hstring_ref customAttributes, GUID domainServiceId) :
    PlayReadyContentHeader(get_activation_factory<PlayReadyContentHeader, IPlayReadyContentHeaderFactory>().CreateInstanceFromComponents(contentKeyId, contentKeyIdString, contentEncryptionAlgorithm, licenseAcquisitionUrl, licenseAcquisitionUserInterfaceUrl, customAttributes, domainServiceId))
{}

inline PlayReadyContentHeader::PlayReadyContentHeader(array_ref<const uint8_t> headerBytes) :
    PlayReadyContentHeader(get_activation_factory<PlayReadyContentHeader, IPlayReadyContentHeaderFactory>().CreateInstanceFromPlayReadyHeader(headerBytes))
{}

inline PlayReadyContentHeader::PlayReadyContentHeader(uint32_t dwFlags, array_ref<const GUID> contentKeyIds, array_ref<const hstring> contentKeyIdStrings, Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm contentEncryptionAlgorithm, const Windows::Foundation::Uri & licenseAcquisitionUrl, const Windows::Foundation::Uri & licenseAcquisitionUserInterfaceUrl, hstring_ref customAttributes, GUID domainServiceId) :
    PlayReadyContentHeader(get_activation_factory<PlayReadyContentHeader, IPlayReadyContentHeaderFactory2>().CreateInstanceFromComponents2(dwFlags, contentKeyIds, contentKeyIdStrings, contentEncryptionAlgorithm, licenseAcquisitionUrl, licenseAcquisitionUserInterfaceUrl, customAttributes, domainServiceId))
{}

inline Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest PlayReadyContentResolver::ServiceRequest(const Windows::Media::Protection::PlayReady::PlayReadyContentHeader & contentHeader)
{
    return get_activation_factory<PlayReadyContentResolver, IPlayReadyContentResolver>().ServiceRequest(contentHeader);
}

inline PlayReadyDomainIterable::PlayReadyDomainIterable(GUID domainAccountId) :
    PlayReadyDomainIterable(get_activation_factory<PlayReadyDomainIterable, IPlayReadyDomainIterableFactory>().CreateInstance(domainAccountId))
{}

inline PlayReadyDomainJoinServiceRequest::PlayReadyDomainJoinServiceRequest() :
    PlayReadyDomainJoinServiceRequest(activate_instance<PlayReadyDomainJoinServiceRequest>())
{}

inline PlayReadyDomainLeaveServiceRequest::PlayReadyDomainLeaveServiceRequest() :
    PlayReadyDomainLeaveServiceRequest(activate_instance<PlayReadyDomainLeaveServiceRequest>())
{}

inline PlayReadyITADataGenerator::PlayReadyITADataGenerator() :
    PlayReadyITADataGenerator(activate_instance<PlayReadyITADataGenerator>())
{}

inline PlayReadyIndividualizationServiceRequest::PlayReadyIndividualizationServiceRequest() :
    PlayReadyIndividualizationServiceRequest(activate_instance<PlayReadyIndividualizationServiceRequest>())
{}

inline PlayReadyLicenseAcquisitionServiceRequest::PlayReadyLicenseAcquisitionServiceRequest() :
    PlayReadyLicenseAcquisitionServiceRequest(activate_instance<PlayReadyLicenseAcquisitionServiceRequest>())
{}

inline PlayReadyLicenseIterable::PlayReadyLicenseIterable() :
    PlayReadyLicenseIterable(activate_instance<PlayReadyLicenseIterable>())
{}

inline PlayReadyLicenseIterable::PlayReadyLicenseIterable(const Windows::Media::Protection::PlayReady::PlayReadyContentHeader & contentHeader, bool fullyEvaluated) :
    PlayReadyLicenseIterable(get_activation_factory<PlayReadyLicenseIterable, IPlayReadyLicenseIterableFactory>().CreateInstance(contentHeader, fullyEvaluated))
{}

inline Windows::Foundation::IAsyncAction PlayReadyLicenseManagement::DeleteLicenses(const Windows::Media::Protection::PlayReady::PlayReadyContentHeader & contentHeader)
{
    return get_activation_factory<PlayReadyLicenseManagement, IPlayReadyLicenseManagement>().DeleteLicenses(contentHeader);
}

inline PlayReadyLicenseSession::PlayReadyLicenseSession(const Windows::Foundation::Collections::IPropertySet & configuration) :
    PlayReadyLicenseSession(get_activation_factory<PlayReadyLicenseSession, IPlayReadyLicenseSessionFactory>().CreateInstance(configuration))
{}

inline PlayReadyMeteringReportServiceRequest::PlayReadyMeteringReportServiceRequest() :
    PlayReadyMeteringReportServiceRequest(activate_instance<PlayReadyMeteringReportServiceRequest>())
{}

inline PlayReadyRevocationServiceRequest::PlayReadyRevocationServiceRequest() :
    PlayReadyRevocationServiceRequest(activate_instance<PlayReadyRevocationServiceRequest>())
{}

inline PlayReadySecureStopIterable::PlayReadySecureStopIterable(array_ref<const uint8_t> publisherCertBytes) :
    PlayReadySecureStopIterable(get_activation_factory<PlayReadySecureStopIterable, IPlayReadySecureStopIterableFactory>().CreateInstance(publisherCertBytes))
{}

inline PlayReadySecureStopServiceRequest::PlayReadySecureStopServiceRequest(array_ref<const uint8_t> publisherCertBytes) :
    PlayReadySecureStopServiceRequest(get_activation_factory<PlayReadySecureStopServiceRequest, IPlayReadySecureStopServiceRequestFactory>().CreateInstance(publisherCertBytes))
{}

inline PlayReadySecureStopServiceRequest::PlayReadySecureStopServiceRequest(GUID sessionID, array_ref<const uint8_t> publisherCertBytes) :
    PlayReadySecureStopServiceRequest(get_activation_factory<PlayReadySecureStopServiceRequest, IPlayReadySecureStopServiceRequestFactory>().CreateInstanceFromSessionID(sessionID, publisherCertBytes))
{}

inline GUID PlayReadyStatics::DomainJoinServiceRequestType()
{
    return get_activation_factory<PlayReadyStatics, IPlayReadyStatics>().DomainJoinServiceRequestType();
}

inline GUID PlayReadyStatics::DomainLeaveServiceRequestType()
{
    return get_activation_factory<PlayReadyStatics, IPlayReadyStatics>().DomainLeaveServiceRequestType();
}

inline GUID PlayReadyStatics::IndividualizationServiceRequestType()
{
    return get_activation_factory<PlayReadyStatics, IPlayReadyStatics>().IndividualizationServiceRequestType();
}

inline GUID PlayReadyStatics::LicenseAcquirerServiceRequestType()
{
    return get_activation_factory<PlayReadyStatics, IPlayReadyStatics>().LicenseAcquirerServiceRequestType();
}

inline GUID PlayReadyStatics::MeteringReportServiceRequestType()
{
    return get_activation_factory<PlayReadyStatics, IPlayReadyStatics>().MeteringReportServiceRequestType();
}

inline GUID PlayReadyStatics::RevocationServiceRequestType()
{
    return get_activation_factory<PlayReadyStatics, IPlayReadyStatics>().RevocationServiceRequestType();
}

inline GUID PlayReadyStatics::MediaProtectionSystemId()
{
    return get_activation_factory<PlayReadyStatics, IPlayReadyStatics>().MediaProtectionSystemId();
}

inline uint32_t PlayReadyStatics::PlayReadySecurityVersion()
{
    return get_activation_factory<PlayReadyStatics, IPlayReadyStatics>().PlayReadySecurityVersion();
}

inline uint32_t PlayReadyStatics::PlayReadyCertificateSecurityLevel()
{
    return get_activation_factory<PlayReadyStatics, IPlayReadyStatics2>().PlayReadyCertificateSecurityLevel();
}

inline GUID PlayReadyStatics::SecureStopServiceRequestType()
{
    return get_activation_factory<PlayReadyStatics, IPlayReadyStatics3>().SecureStopServiceRequestType();
}

inline bool PlayReadyStatics::CheckSupportedHardware(Windows::Media::Protection::PlayReady::PlayReadyHardwareDRMFeatures hwdrmFeature)
{
    return get_activation_factory<PlayReadyStatics, IPlayReadyStatics3>().CheckSupportedHardware(hwdrmFeature);
}

inline hstring PlayReadyStatics::InputTrustAuthorityToCreate()
{
    return get_activation_factory<PlayReadyStatics, IPlayReadyStatics4>().InputTrustAuthorityToCreate();
}

inline GUID PlayReadyStatics::ProtectionSystemId()
{
    return get_activation_factory<PlayReadyStatics, IPlayReadyStatics4>().ProtectionSystemId();
}

}

}
