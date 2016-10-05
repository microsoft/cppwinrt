// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.ApplicationModel.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Data.Xml.Dom.3.h"
#include "internal/Windows.System.3.h"
#include "internal/Windows.UI.Notifications.3.h"
#include "Windows.UI.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::UI::Notifications::IAdaptiveNotificationContent> : produce_base<D, Windows::UI::Notifications::IAdaptiveNotificationContent>
{
    HRESULT __stdcall get_Kind(Windows::UI::Notifications::AdaptiveNotificationContentKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Hints(abi_arg_out<Windows::Foundation::Collections::IMap<hstring, hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Hints());
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
struct produce<D, Windows::UI::Notifications::IAdaptiveNotificationText> : produce_base<D, Windows::UI::Notifications::IAdaptiveNotificationText>
{
    HRESULT __stdcall get_Text(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Text(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Text(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Language(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Language());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Language(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Language(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IBadgeNotification> : produce_base<D, Windows::UI::Notifications::IBadgeNotification>
{
    HRESULT __stdcall get_Content(abi_arg_out<Windows::Data::Xml::Dom::IXmlDocument> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Content());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExpirationTime(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            this->shim().ExpirationTime(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::DateTime> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExpirationTime(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExpirationTime());
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
struct produce<D, Windows::UI::Notifications::IBadgeNotificationFactory> : produce_base<D, Windows::UI::Notifications::IBadgeNotificationFactory>
{
    HRESULT __stdcall abi_CreateBadgeNotification(abi_arg_in<Windows::Data::Xml::Dom::IXmlDocument> content, abi_arg_out<Windows::UI::Notifications::IBadgeNotification> notification) noexcept override
    {
        try
        {
            *notification = detach(this->shim().CreateBadgeNotification(*reinterpret_cast<const Windows::Data::Xml::Dom::XmlDocument *>(&content)));
            return S_OK;
        }
        catch (...)
        {
            *notification = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IBadgeUpdateManagerForUser> : produce_base<D, Windows::UI::Notifications::IBadgeUpdateManagerForUser>
{
    HRESULT __stdcall abi_CreateBadgeUpdaterForApplication(abi_arg_out<Windows::UI::Notifications::IBadgeUpdater> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateBadgeUpdaterForApplication());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateBadgeUpdaterForApplicationWithId(abi_arg_in<hstring> applicationId, abi_arg_out<Windows::UI::Notifications::IBadgeUpdater> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateBadgeUpdaterForApplication(*reinterpret_cast<const hstring *>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateBadgeUpdaterForSecondaryTile(abi_arg_in<hstring> tileId, abi_arg_out<Windows::UI::Notifications::IBadgeUpdater> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateBadgeUpdaterForSecondaryTile(*reinterpret_cast<const hstring *>(&tileId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_User(abi_arg_out<Windows::System::IUser> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().User());
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
struct produce<D, Windows::UI::Notifications::IBadgeUpdateManagerStatics> : produce_base<D, Windows::UI::Notifications::IBadgeUpdateManagerStatics>
{
    HRESULT __stdcall abi_CreateBadgeUpdaterForApplication(abi_arg_out<Windows::UI::Notifications::IBadgeUpdater> updater) noexcept override
    {
        try
        {
            *updater = detach(this->shim().CreateBadgeUpdaterForApplication());
            return S_OK;
        }
        catch (...)
        {
            *updater = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateBadgeUpdaterForApplicationWithId(abi_arg_in<hstring> applicationId, abi_arg_out<Windows::UI::Notifications::IBadgeUpdater> updater) noexcept override
    {
        try
        {
            *updater = detach(this->shim().CreateBadgeUpdaterForApplication(*reinterpret_cast<const hstring *>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            *updater = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateBadgeUpdaterForSecondaryTile(abi_arg_in<hstring> tileId, abi_arg_out<Windows::UI::Notifications::IBadgeUpdater> updater) noexcept override
    {
        try
        {
            *updater = detach(this->shim().CreateBadgeUpdaterForSecondaryTile(*reinterpret_cast<const hstring *>(&tileId)));
            return S_OK;
        }
        catch (...)
        {
            *updater = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetTemplateContent(Windows::UI::Notifications::BadgeTemplateType type, abi_arg_out<Windows::Data::Xml::Dom::IXmlDocument> content) noexcept override
    {
        try
        {
            *content = detach(this->shim().GetTemplateContent(type));
            return S_OK;
        }
        catch (...)
        {
            *content = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IBadgeUpdateManagerStatics2> : produce_base<D, Windows::UI::Notifications::IBadgeUpdateManagerStatics2>
{
    HRESULT __stdcall abi_GetForUser(abi_arg_in<Windows::System::IUser> user, abi_arg_out<Windows::UI::Notifications::IBadgeUpdateManagerForUser> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetForUser(*reinterpret_cast<const Windows::System::User *>(&user)));
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
struct produce<D, Windows::UI::Notifications::IBadgeUpdater> : produce_base<D, Windows::UI::Notifications::IBadgeUpdater>
{
    HRESULT __stdcall abi_Update(abi_arg_in<Windows::UI::Notifications::IBadgeNotification> notification) noexcept override
    {
        try
        {
            this->shim().Update(*reinterpret_cast<const Windows::UI::Notifications::BadgeNotification *>(&notification));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Clear() noexcept override
    {
        try
        {
            this->shim().Clear();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartPeriodicUpdate(abi_arg_in<Windows::Foundation::IUriRuntimeClass> badgeContent, Windows::UI::Notifications::PeriodicUpdateRecurrence requestedInterval) noexcept override
    {
        try
        {
            this->shim().StartPeriodicUpdate(*reinterpret_cast<const Windows::Foundation::Uri *>(&badgeContent), requestedInterval);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartPeriodicUpdateAtTime(abi_arg_in<Windows::Foundation::IUriRuntimeClass> badgeContent, abi_arg_in<Windows::Foundation::DateTime> startTime, Windows::UI::Notifications::PeriodicUpdateRecurrence requestedInterval) noexcept override
    {
        try
        {
            this->shim().StartPeriodicUpdate(*reinterpret_cast<const Windows::Foundation::Uri *>(&badgeContent), *reinterpret_cast<const Windows::Foundation::DateTime *>(&startTime), requestedInterval);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopPeriodicUpdate() noexcept override
    {
        try
        {
            this->shim().StopPeriodicUpdate();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IKnownAdaptiveNotificationHintsStatics> : produce_base<D, Windows::UI::Notifications::IKnownAdaptiveNotificationHintsStatics>
{
    HRESULT __stdcall get_Style(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Style());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Wrap(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Wrap());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxLines(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxLines());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinLines(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MinLines());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TextStacking(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TextStacking());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Align(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Align());
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
struct produce<D, Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics> : produce_base<D, Windows::UI::Notifications::IKnownAdaptiveNotificationTextStylesStatics>
{
    HRESULT __stdcall get_Caption(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Caption());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Body(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Body());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Base(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Base());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Subtitle(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Subtitle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Subheader(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Subheader());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Header(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Header());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TitleNumeral(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TitleNumeral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SubheaderNumeral(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SubheaderNumeral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeaderNumeral(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HeaderNumeral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CaptionSubtle(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CaptionSubtle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BodySubtle(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BodySubtle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BaseSubtle(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BaseSubtle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SubtitleSubtle(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SubtitleSubtle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TitleSubtle(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TitleSubtle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SubheaderSubtle(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SubheaderSubtle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SubheaderNumeralSubtle(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SubheaderNumeralSubtle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeaderSubtle(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HeaderSubtle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeaderNumeralSubtle(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HeaderNumeralSubtle());
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
struct produce<D, Windows::UI::Notifications::IKnownNotificationBindingsStatics> : produce_base<D, Windows::UI::Notifications::IKnownNotificationBindingsStatics>
{
    HRESULT __stdcall get_ToastGeneric(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ToastGeneric());
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
struct produce<D, Windows::UI::Notifications::INotification> : produce_base<D, Windows::UI::Notifications::INotification>
{
    HRESULT __stdcall get_ExpirationTime(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExpirationTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExpirationTime(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            this->shim().ExpirationTime(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::DateTime> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Visual(abi_arg_out<Windows::UI::Notifications::INotificationVisual> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Visual());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Visual(abi_arg_in<Windows::UI::Notifications::INotificationVisual> value) noexcept override
    {
        try
        {
            this->shim().Visual(*reinterpret_cast<const Windows::UI::Notifications::NotificationVisual *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::INotificationBinding> : produce_base<D, Windows::UI::Notifications::INotificationBinding>
{
    HRESULT __stdcall get_Template(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Template());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Template(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Template(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Language(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Language());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Language(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Language(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Hints(abi_arg_out<Windows::Foundation::Collections::IMap<hstring, hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Hints());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetTextElements(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::AdaptiveNotificationText>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetTextElements());
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
struct produce<D, Windows::UI::Notifications::INotificationVisual> : produce_base<D, Windows::UI::Notifications::INotificationVisual>
{
    HRESULT __stdcall get_Language(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Language());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Language(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Language(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bindings(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Notifications::NotificationBinding>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Bindings());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetBinding(abi_arg_in<hstring> templateName, abi_arg_out<Windows::UI::Notifications::INotificationBinding> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetBinding(*reinterpret_cast<const hstring *>(&templateName)));
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
struct produce<D, Windows::UI::Notifications::IScheduledTileNotification> : produce_base<D, Windows::UI::Notifications::IScheduledTileNotification>
{
    HRESULT __stdcall get_Content(abi_arg_out<Windows::Data::Xml::Dom::IXmlDocument> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Content());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeliveryTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeliveryTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExpirationTime(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            this->shim().ExpirationTime(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::DateTime> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExpirationTime(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExpirationTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Tag(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Tag(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tag(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Tag());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Id(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Id(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
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
struct produce<D, Windows::UI::Notifications::IScheduledTileNotificationFactory> : produce_base<D, Windows::UI::Notifications::IScheduledTileNotificationFactory>
{
    HRESULT __stdcall abi_CreateScheduledTileNotification(abi_arg_in<Windows::Data::Xml::Dom::IXmlDocument> content, abi_arg_in<Windows::Foundation::DateTime> deliveryTime, abi_arg_out<Windows::UI::Notifications::IScheduledTileNotification> notification) noexcept override
    {
        try
        {
            *notification = detach(this->shim().CreateScheduledTileNotification(*reinterpret_cast<const Windows::Data::Xml::Dom::XmlDocument *>(&content), *reinterpret_cast<const Windows::Foundation::DateTime *>(&deliveryTime)));
            return S_OK;
        }
        catch (...)
        {
            *notification = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IScheduledToastNotification> : produce_base<D, Windows::UI::Notifications::IScheduledToastNotification>
{
    HRESULT __stdcall get_Content(abi_arg_out<Windows::Data::Xml::Dom::IXmlDocument> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Content());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeliveryTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeliveryTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SnoozeInterval(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SnoozeInterval());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaximumSnoozeCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaximumSnoozeCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Id(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Id(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
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
struct produce<D, Windows::UI::Notifications::IScheduledToastNotification2> : produce_base<D, Windows::UI::Notifications::IScheduledToastNotification2>
{
    HRESULT __stdcall put_Tag(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Tag(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tag(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Tag());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Group(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Group(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Group(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Group());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SuppressPopup(bool value) noexcept override
    {
        try
        {
            this->shim().SuppressPopup(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SuppressPopup(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SuppressPopup());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IScheduledToastNotification3> : produce_base<D, Windows::UI::Notifications::IScheduledToastNotification3>
{
    HRESULT __stdcall get_NotificationMirroring(Windows::UI::Notifications::NotificationMirroring * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NotificationMirroring());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NotificationMirroring(Windows::UI::Notifications::NotificationMirroring value) noexcept override
    {
        try
        {
            this->shim().NotificationMirroring(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemoteId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RemoteId(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().RemoteId(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IScheduledToastNotificationFactory> : produce_base<D, Windows::UI::Notifications::IScheduledToastNotificationFactory>
{
    HRESULT __stdcall abi_CreateScheduledToastNotification(abi_arg_in<Windows::Data::Xml::Dom::IXmlDocument> content, abi_arg_in<Windows::Foundation::DateTime> deliveryTime, abi_arg_out<Windows::UI::Notifications::IScheduledToastNotification> notification) noexcept override
    {
        try
        {
            *notification = detach(this->shim().CreateScheduledToastNotification(*reinterpret_cast<const Windows::Data::Xml::Dom::XmlDocument *>(&content), *reinterpret_cast<const Windows::Foundation::DateTime *>(&deliveryTime)));
            return S_OK;
        }
        catch (...)
        {
            *notification = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateScheduledToastNotificationRecurring(abi_arg_in<Windows::Data::Xml::Dom::IXmlDocument> content, abi_arg_in<Windows::Foundation::DateTime> deliveryTime, abi_arg_in<Windows::Foundation::TimeSpan> snoozeInterval, uint32_t maximumSnoozeCount, abi_arg_out<Windows::UI::Notifications::IScheduledToastNotification> notification) noexcept override
    {
        try
        {
            *notification = detach(this->shim().CreateScheduledToastNotificationRecurring(*reinterpret_cast<const Windows::Data::Xml::Dom::XmlDocument *>(&content), *reinterpret_cast<const Windows::Foundation::DateTime *>(&deliveryTime), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&snoozeInterval), maximumSnoozeCount));
            return S_OK;
        }
        catch (...)
        {
            *notification = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IShownTileNotification> : produce_base<D, Windows::UI::Notifications::IShownTileNotification>
{
    HRESULT __stdcall get_Arguments(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Arguments());
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
struct produce<D, Windows::UI::Notifications::ITileFlyoutNotification> : produce_base<D, Windows::UI::Notifications::ITileFlyoutNotification>
{
    HRESULT __stdcall get_Content(abi_arg_out<Windows::Data::Xml::Dom::IXmlDocument> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Content());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExpirationTime(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            this->shim().ExpirationTime(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::DateTime> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExpirationTime(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExpirationTime());
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
struct produce<D, Windows::UI::Notifications::ITileFlyoutNotificationFactory> : produce_base<D, Windows::UI::Notifications::ITileFlyoutNotificationFactory>
{
    HRESULT __stdcall abi_CreateTileFlyoutNotification(abi_arg_in<Windows::Data::Xml::Dom::IXmlDocument> content, abi_arg_out<Windows::UI::Notifications::ITileFlyoutNotification> notification) noexcept override
    {
        try
        {
            *notification = detach(this->shim().CreateTileFlyoutNotification(*reinterpret_cast<const Windows::Data::Xml::Dom::XmlDocument *>(&content)));
            return S_OK;
        }
        catch (...)
        {
            *notification = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::ITileFlyoutUpdateManagerStatics> : produce_base<D, Windows::UI::Notifications::ITileFlyoutUpdateManagerStatics>
{
    HRESULT __stdcall abi_CreateTileFlyoutUpdaterForApplication(abi_arg_out<Windows::UI::Notifications::ITileFlyoutUpdater> updater) noexcept override
    {
        try
        {
            *updater = detach(this->shim().CreateTileFlyoutUpdaterForApplication());
            return S_OK;
        }
        catch (...)
        {
            *updater = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateTileFlyoutUpdaterForApplicationWithId(abi_arg_in<hstring> applicationId, abi_arg_out<Windows::UI::Notifications::ITileFlyoutUpdater> updater) noexcept override
    {
        try
        {
            *updater = detach(this->shim().CreateTileFlyoutUpdaterForApplication(*reinterpret_cast<const hstring *>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            *updater = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateTileFlyoutUpdaterForSecondaryTile(abi_arg_in<hstring> tileId, abi_arg_out<Windows::UI::Notifications::ITileFlyoutUpdater> updater) noexcept override
    {
        try
        {
            *updater = detach(this->shim().CreateTileFlyoutUpdaterForSecondaryTile(*reinterpret_cast<const hstring *>(&tileId)));
            return S_OK;
        }
        catch (...)
        {
            *updater = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetTemplateContent(Windows::UI::Notifications::TileFlyoutTemplateType type, abi_arg_out<Windows::Data::Xml::Dom::IXmlDocument> content) noexcept override
    {
        try
        {
            *content = detach(this->shim().GetTemplateContent(type));
            return S_OK;
        }
        catch (...)
        {
            *content = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::ITileFlyoutUpdater> : produce_base<D, Windows::UI::Notifications::ITileFlyoutUpdater>
{
    HRESULT __stdcall abi_Update(abi_arg_in<Windows::UI::Notifications::ITileFlyoutNotification> notification) noexcept override
    {
        try
        {
            this->shim().Update(*reinterpret_cast<const Windows::UI::Notifications::TileFlyoutNotification *>(&notification));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Clear() noexcept override
    {
        try
        {
            this->shim().Clear();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartPeriodicUpdate(abi_arg_in<Windows::Foundation::IUriRuntimeClass> tileFlyoutContent, Windows::UI::Notifications::PeriodicUpdateRecurrence requestedInterval) noexcept override
    {
        try
        {
            this->shim().StartPeriodicUpdate(*reinterpret_cast<const Windows::Foundation::Uri *>(&tileFlyoutContent), requestedInterval);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartPeriodicUpdateAtTime(abi_arg_in<Windows::Foundation::IUriRuntimeClass> tileFlyoutContent, abi_arg_in<Windows::Foundation::DateTime> startTime, Windows::UI::Notifications::PeriodicUpdateRecurrence requestedInterval) noexcept override
    {
        try
        {
            this->shim().StartPeriodicUpdate(*reinterpret_cast<const Windows::Foundation::Uri *>(&tileFlyoutContent), *reinterpret_cast<const Windows::Foundation::DateTime *>(&startTime), requestedInterval);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopPeriodicUpdate() noexcept override
    {
        try
        {
            this->shim().StopPeriodicUpdate();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Setting(Windows::UI::Notifications::NotificationSetting * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Setting());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::ITileNotification> : produce_base<D, Windows::UI::Notifications::ITileNotification>
{
    HRESULT __stdcall get_Content(abi_arg_out<Windows::Data::Xml::Dom::IXmlDocument> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Content());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExpirationTime(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            this->shim().ExpirationTime(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::DateTime> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExpirationTime(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExpirationTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Tag(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Tag(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tag(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Tag());
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
struct produce<D, Windows::UI::Notifications::ITileNotificationFactory> : produce_base<D, Windows::UI::Notifications::ITileNotificationFactory>
{
    HRESULT __stdcall abi_CreateTileNotification(abi_arg_in<Windows::Data::Xml::Dom::IXmlDocument> content, abi_arg_out<Windows::UI::Notifications::ITileNotification> notification) noexcept override
    {
        try
        {
            *notification = detach(this->shim().CreateTileNotification(*reinterpret_cast<const Windows::Data::Xml::Dom::XmlDocument *>(&content)));
            return S_OK;
        }
        catch (...)
        {
            *notification = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::ITileUpdateManagerForUser> : produce_base<D, Windows::UI::Notifications::ITileUpdateManagerForUser>
{
    HRESULT __stdcall abi_CreateTileUpdaterForApplication(abi_arg_out<Windows::UI::Notifications::ITileUpdater> updater) noexcept override
    {
        try
        {
            *updater = detach(this->shim().CreateTileUpdaterForApplicationForUser());
            return S_OK;
        }
        catch (...)
        {
            *updater = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateTileUpdaterForApplicationWithId(abi_arg_in<hstring> applicationId, abi_arg_out<Windows::UI::Notifications::ITileUpdater> updater) noexcept override
    {
        try
        {
            *updater = detach(this->shim().CreateTileUpdaterForApplication(*reinterpret_cast<const hstring *>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            *updater = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateTileUpdaterForSecondaryTile(abi_arg_in<hstring> tileId, abi_arg_out<Windows::UI::Notifications::ITileUpdater> updater) noexcept override
    {
        try
        {
            *updater = detach(this->shim().CreateTileUpdaterForSecondaryTile(*reinterpret_cast<const hstring *>(&tileId)));
            return S_OK;
        }
        catch (...)
        {
            *updater = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_User(abi_arg_out<Windows::System::IUser> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().User());
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
struct produce<D, Windows::UI::Notifications::ITileUpdateManagerStatics> : produce_base<D, Windows::UI::Notifications::ITileUpdateManagerStatics>
{
    HRESULT __stdcall abi_CreateTileUpdaterForApplication(abi_arg_out<Windows::UI::Notifications::ITileUpdater> updater) noexcept override
    {
        try
        {
            *updater = detach(this->shim().CreateTileUpdaterForApplication());
            return S_OK;
        }
        catch (...)
        {
            *updater = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateTileUpdaterForApplicationWithId(abi_arg_in<hstring> applicationId, abi_arg_out<Windows::UI::Notifications::ITileUpdater> updater) noexcept override
    {
        try
        {
            *updater = detach(this->shim().CreateTileUpdaterForApplication(*reinterpret_cast<const hstring *>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            *updater = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateTileUpdaterForSecondaryTile(abi_arg_in<hstring> tileId, abi_arg_out<Windows::UI::Notifications::ITileUpdater> updater) noexcept override
    {
        try
        {
            *updater = detach(this->shim().CreateTileUpdaterForSecondaryTile(*reinterpret_cast<const hstring *>(&tileId)));
            return S_OK;
        }
        catch (...)
        {
            *updater = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetTemplateContent(Windows::UI::Notifications::TileTemplateType type, abi_arg_out<Windows::Data::Xml::Dom::IXmlDocument> content) noexcept override
    {
        try
        {
            *content = detach(this->shim().GetTemplateContent(type));
            return S_OK;
        }
        catch (...)
        {
            *content = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::ITileUpdateManagerStatics2> : produce_base<D, Windows::UI::Notifications::ITileUpdateManagerStatics2>
{
    HRESULT __stdcall abi_GetForUser(abi_arg_in<Windows::System::IUser> user, abi_arg_out<Windows::UI::Notifications::ITileUpdateManagerForUser> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetForUser(*reinterpret_cast<const Windows::System::User *>(&user)));
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
struct produce<D, Windows::UI::Notifications::ITileUpdater> : produce_base<D, Windows::UI::Notifications::ITileUpdater>
{
    HRESULT __stdcall abi_Update(abi_arg_in<Windows::UI::Notifications::ITileNotification> notification) noexcept override
    {
        try
        {
            this->shim().Update(*reinterpret_cast<const Windows::UI::Notifications::TileNotification *>(&notification));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Clear() noexcept override
    {
        try
        {
            this->shim().Clear();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EnableNotificationQueue(bool enable) noexcept override
    {
        try
        {
            this->shim().EnableNotificationQueue(enable);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Setting(Windows::UI::Notifications::NotificationSetting * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Setting());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddToSchedule(abi_arg_in<Windows::UI::Notifications::IScheduledTileNotification> scheduledTile) noexcept override
    {
        try
        {
            this->shim().AddToSchedule(*reinterpret_cast<const Windows::UI::Notifications::ScheduledTileNotification *>(&scheduledTile));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveFromSchedule(abi_arg_in<Windows::UI::Notifications::IScheduledTileNotification> scheduledTile) noexcept override
    {
        try
        {
            this->shim().RemoveFromSchedule(*reinterpret_cast<const Windows::UI::Notifications::ScheduledTileNotification *>(&scheduledTile));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetScheduledTileNotifications(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ScheduledTileNotification>> scheduledTiles) noexcept override
    {
        try
        {
            *scheduledTiles = detach(this->shim().GetScheduledTileNotifications());
            return S_OK;
        }
        catch (...)
        {
            *scheduledTiles = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartPeriodicUpdate(abi_arg_in<Windows::Foundation::IUriRuntimeClass> tileContent, Windows::UI::Notifications::PeriodicUpdateRecurrence requestedInterval) noexcept override
    {
        try
        {
            this->shim().StartPeriodicUpdate(*reinterpret_cast<const Windows::Foundation::Uri *>(&tileContent), requestedInterval);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartPeriodicUpdateAtTime(abi_arg_in<Windows::Foundation::IUriRuntimeClass> tileContent, abi_arg_in<Windows::Foundation::DateTime> startTime, Windows::UI::Notifications::PeriodicUpdateRecurrence requestedInterval) noexcept override
    {
        try
        {
            this->shim().StartPeriodicUpdate(*reinterpret_cast<const Windows::Foundation::Uri *>(&tileContent), *reinterpret_cast<const Windows::Foundation::DateTime *>(&startTime), requestedInterval);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopPeriodicUpdate() noexcept override
    {
        try
        {
            this->shim().StopPeriodicUpdate();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartPeriodicUpdateBatch(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri>> tileContents, Windows::UI::Notifications::PeriodicUpdateRecurrence requestedInterval) noexcept override
    {
        try
        {
            this->shim().StartPeriodicUpdateBatch(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> *>(&tileContents), requestedInterval);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartPeriodicUpdateBatchAtTime(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri>> tileContents, abi_arg_in<Windows::Foundation::DateTime> startTime, Windows::UI::Notifications::PeriodicUpdateRecurrence requestedInterval) noexcept override
    {
        try
        {
            this->shim().StartPeriodicUpdateBatch(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> *>(&tileContents), *reinterpret_cast<const Windows::Foundation::DateTime *>(&startTime), requestedInterval);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::ITileUpdater2> : produce_base<D, Windows::UI::Notifications::ITileUpdater2>
{
    HRESULT __stdcall abi_EnableNotificationQueueForSquare150x150(bool enable) noexcept override
    {
        try
        {
            this->shim().EnableNotificationQueueForSquare150x150(enable);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EnableNotificationQueueForWide310x150(bool enable) noexcept override
    {
        try
        {
            this->shim().EnableNotificationQueueForWide310x150(enable);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EnableNotificationQueueForSquare310x310(bool enable) noexcept override
    {
        try
        {
            this->shim().EnableNotificationQueueForSquare310x310(enable);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastActivatedEventArgs> : produce_base<D, Windows::UI::Notifications::IToastActivatedEventArgs>
{
    HRESULT __stdcall get_Arguments(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Arguments());
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
struct produce<D, Windows::UI::Notifications::IToastDismissedEventArgs> : produce_base<D, Windows::UI::Notifications::IToastDismissedEventArgs>
{
    HRESULT __stdcall get_Reason(Windows::UI::Notifications::ToastDismissalReason * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Reason());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastFailedEventArgs> : produce_base<D, Windows::UI::Notifications::IToastFailedEventArgs>
{
    HRESULT __stdcall get_ErrorCode(HRESULT * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastNotification> : produce_base<D, Windows::UI::Notifications::IToastNotification>
{
    HRESULT __stdcall get_Content(abi_arg_out<Windows::Data::Xml::Dom::IXmlDocument> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Content());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExpirationTime(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            this->shim().ExpirationTime(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::DateTime> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExpirationTime(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExpirationTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Dismissed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::UI::Notifications::ToastDismissedEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().Dismissed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::UI::Notifications::ToastDismissedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Dismissed(event_token cookie) noexcept override
    {
        try
        {
            this->shim().Dismissed(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Activated(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::IInspectable>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().Activated(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Activated(event_token cookie) noexcept override
    {
        try
        {
            this->shim().Activated(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Failed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::UI::Notifications::ToastFailedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Failed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::UI::Notifications::ToastFailedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Failed(event_token token) noexcept override
    {
        try
        {
            this->shim().Failed(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastNotification2> : produce_base<D, Windows::UI::Notifications::IToastNotification2>
{
    HRESULT __stdcall put_Tag(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Tag(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tag(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Tag());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Group(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Group(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Group(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Group());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SuppressPopup(bool value) noexcept override
    {
        try
        {
            this->shim().SuppressPopup(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SuppressPopup(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SuppressPopup());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastNotification3> : produce_base<D, Windows::UI::Notifications::IToastNotification3>
{
    HRESULT __stdcall get_NotificationMirroring(Windows::UI::Notifications::NotificationMirroring * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NotificationMirroring());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NotificationMirroring(Windows::UI::Notifications::NotificationMirroring value) noexcept override
    {
        try
        {
            this->shim().NotificationMirroring(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemoteId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RemoteId(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().RemoteId(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastNotificationActionTriggerDetail> : produce_base<D, Windows::UI::Notifications::IToastNotificationActionTriggerDetail>
{
    HRESULT __stdcall get_Argument(abi_arg_out<hstring> argument) noexcept override
    {
        try
        {
            *argument = detach(this->shim().Argument());
            return S_OK;
        }
        catch (...)
        {
            *argument = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserInput(abi_arg_out<Windows::Foundation::Collections::IPropertySet> inputs) noexcept override
    {
        try
        {
            *inputs = detach(this->shim().UserInput());
            return S_OK;
        }
        catch (...)
        {
            *inputs = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastNotificationFactory> : produce_base<D, Windows::UI::Notifications::IToastNotificationFactory>
{
    HRESULT __stdcall abi_CreateToastNotification(abi_arg_in<Windows::Data::Xml::Dom::IXmlDocument> content, abi_arg_out<Windows::UI::Notifications::IToastNotification> notification) noexcept override
    {
        try
        {
            *notification = detach(this->shim().CreateToastNotification(*reinterpret_cast<const Windows::Data::Xml::Dom::XmlDocument *>(&content)));
            return S_OK;
        }
        catch (...)
        {
            *notification = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastNotificationHistory> : produce_base<D, Windows::UI::Notifications::IToastNotificationHistory>
{
    HRESULT __stdcall abi_RemoveGroup(abi_arg_in<hstring> group) noexcept override
    {
        try
        {
            this->shim().RemoveGroup(*reinterpret_cast<const hstring *>(&group));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveGroupWithId(abi_arg_in<hstring> group, abi_arg_in<hstring> applicationId) noexcept override
    {
        try
        {
            this->shim().RemoveGroup(*reinterpret_cast<const hstring *>(&group), *reinterpret_cast<const hstring *>(&applicationId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveGroupedTagWithId(abi_arg_in<hstring> tag, abi_arg_in<hstring> group, abi_arg_in<hstring> applicationId) noexcept override
    {
        try
        {
            this->shim().Remove(*reinterpret_cast<const hstring *>(&tag), *reinterpret_cast<const hstring *>(&group), *reinterpret_cast<const hstring *>(&applicationId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveGroupedTag(abi_arg_in<hstring> tag, abi_arg_in<hstring> group) noexcept override
    {
        try
        {
            this->shim().Remove(*reinterpret_cast<const hstring *>(&tag), *reinterpret_cast<const hstring *>(&group));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Remove(abi_arg_in<hstring> tag) noexcept override
    {
        try
        {
            this->shim().Remove(*reinterpret_cast<const hstring *>(&tag));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Clear() noexcept override
    {
        try
        {
            this->shim().Clear();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ClearWithId(abi_arg_in<hstring> applicationId) noexcept override
    {
        try
        {
            this->shim().Clear(*reinterpret_cast<const hstring *>(&applicationId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastNotificationHistory2> : produce_base<D, Windows::UI::Notifications::IToastNotificationHistory2>
{
    HRESULT __stdcall abi_GetHistory(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ToastNotification>> toasts) noexcept override
    {
        try
        {
            *toasts = detach(this->shim().GetHistory());
            return S_OK;
        }
        catch (...)
        {
            *toasts = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetHistoryWithId(abi_arg_in<hstring> applicationId, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ToastNotification>> toasts) noexcept override
    {
        try
        {
            *toasts = detach(this->shim().GetHistory(*reinterpret_cast<const hstring *>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            *toasts = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastNotificationHistoryChangedTriggerDetail> : produce_base<D, Windows::UI::Notifications::IToastNotificationHistoryChangedTriggerDetail>
{
    HRESULT __stdcall get_ChangeType(Windows::UI::Notifications::ToastHistoryChangedType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChangeType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastNotificationManagerForUser> : produce_base<D, Windows::UI::Notifications::IToastNotificationManagerForUser>
{
    HRESULT __stdcall abi_CreateToastNotifier(abi_arg_out<Windows::UI::Notifications::IToastNotifier> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateToastNotifier());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateToastNotifierWithId(abi_arg_in<hstring> applicationId, abi_arg_out<Windows::UI::Notifications::IToastNotifier> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateToastNotifier(*reinterpret_cast<const hstring *>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_History(abi_arg_out<Windows::UI::Notifications::IToastNotificationHistory> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().History());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_User(abi_arg_out<Windows::System::IUser> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().User());
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
struct produce<D, Windows::UI::Notifications::IToastNotificationManagerStatics> : produce_base<D, Windows::UI::Notifications::IToastNotificationManagerStatics>
{
    HRESULT __stdcall abi_CreateToastNotifier(abi_arg_out<Windows::UI::Notifications::IToastNotifier> notifier) noexcept override
    {
        try
        {
            *notifier = detach(this->shim().CreateToastNotifier());
            return S_OK;
        }
        catch (...)
        {
            *notifier = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateToastNotifierWithId(abi_arg_in<hstring> applicationId, abi_arg_out<Windows::UI::Notifications::IToastNotifier> notifier) noexcept override
    {
        try
        {
            *notifier = detach(this->shim().CreateToastNotifier(*reinterpret_cast<const hstring *>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            *notifier = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetTemplateContent(Windows::UI::Notifications::ToastTemplateType type, abi_arg_out<Windows::Data::Xml::Dom::IXmlDocument> content) noexcept override
    {
        try
        {
            *content = detach(this->shim().GetTemplateContent(type));
            return S_OK;
        }
        catch (...)
        {
            *content = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastNotificationManagerStatics2> : produce_base<D, Windows::UI::Notifications::IToastNotificationManagerStatics2>
{
    HRESULT __stdcall get_History(abi_arg_out<Windows::UI::Notifications::IToastNotificationHistory> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().History());
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
struct produce<D, Windows::UI::Notifications::IToastNotificationManagerStatics4> : produce_base<D, Windows::UI::Notifications::IToastNotificationManagerStatics4>
{
    HRESULT __stdcall abi_GetForUser(abi_arg_in<Windows::System::IUser> user, abi_arg_out<Windows::UI::Notifications::IToastNotificationManagerForUser> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetForUser(*reinterpret_cast<const Windows::System::User *>(&user)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConfigureNotificationMirroring(Windows::UI::Notifications::NotificationMirroring value) noexcept override
    {
        try
        {
            this->shim().ConfigureNotificationMirroring(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IToastNotifier> : produce_base<D, Windows::UI::Notifications::IToastNotifier>
{
    HRESULT __stdcall abi_Show(abi_arg_in<Windows::UI::Notifications::IToastNotification> notification) noexcept override
    {
        try
        {
            this->shim().Show(*reinterpret_cast<const Windows::UI::Notifications::ToastNotification *>(&notification));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Hide(abi_arg_in<Windows::UI::Notifications::IToastNotification> notification) noexcept override
    {
        try
        {
            this->shim().Hide(*reinterpret_cast<const Windows::UI::Notifications::ToastNotification *>(&notification));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Setting(Windows::UI::Notifications::NotificationSetting * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Setting());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddToSchedule(abi_arg_in<Windows::UI::Notifications::IScheduledToastNotification> scheduledToast) noexcept override
    {
        try
        {
            this->shim().AddToSchedule(*reinterpret_cast<const Windows::UI::Notifications::ScheduledToastNotification *>(&scheduledToast));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveFromSchedule(abi_arg_in<Windows::UI::Notifications::IScheduledToastNotification> scheduledToast) noexcept override
    {
        try
        {
            this->shim().RemoveFromSchedule(*reinterpret_cast<const Windows::UI::Notifications::ScheduledToastNotification *>(&scheduledToast));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetScheduledToastNotifications(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ScheduledToastNotification>> scheduledToasts) noexcept override
    {
        try
        {
            *scheduledToasts = detach(this->shim().GetScheduledToastNotifications());
            return S_OK;
        }
        catch (...)
        {
            *scheduledToasts = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IUserNotification> : produce_base<D, Windows::UI::Notifications::IUserNotification>
{
    HRESULT __stdcall get_Notification(abi_arg_out<Windows::UI::Notifications::INotification> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Notification());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppInfo(abi_arg_out<Windows::ApplicationModel::IAppInfo> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CreationTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreationTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Notifications::IUserNotificationChangedEventArgs> : produce_base<D, Windows::UI::Notifications::IUserNotificationChangedEventArgs>
{
    HRESULT __stdcall get_ChangeKind(Windows::UI::Notifications::UserNotificationChangedKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChangeKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserNotificationId(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UserNotificationId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::UI::Notifications {

template <typename D> hstring impl_IShownTileNotification<D>::Arguments() const
{
    hstring value;
    check_hresult(static_cast<const IShownTileNotification &>(static_cast<const D &>(*this))->get_Arguments(put(value)));
    return value;
}

template <typename D> Windows::UI::Notifications::UserNotificationChangedKind impl_IUserNotificationChangedEventArgs<D>::ChangeKind() const
{
    Windows::UI::Notifications::UserNotificationChangedKind value {};
    check_hresult(static_cast<const IUserNotificationChangedEventArgs &>(static_cast<const D &>(*this))->get_ChangeKind(&value));
    return value;
}

template <typename D> uint32_t impl_IUserNotificationChangedEventArgs<D>::UserNotificationId() const
{
    uint32_t value {};
    check_hresult(static_cast<const IUserNotificationChangedEventArgs &>(static_cast<const D &>(*this))->get_UserNotificationId(&value));
    return value;
}

template <typename D> Windows::UI::Notifications::Notification impl_IUserNotification<D>::Notification() const
{
    Windows::UI::Notifications::Notification value { nullptr };
    check_hresult(static_cast<const IUserNotification &>(static_cast<const D &>(*this))->get_Notification(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::AppInfo impl_IUserNotification<D>::AppInfo() const
{
    Windows::ApplicationModel::AppInfo value { nullptr };
    check_hresult(static_cast<const IUserNotification &>(static_cast<const D &>(*this))->get_AppInfo(put(value)));
    return value;
}

template <typename D> uint32_t impl_IUserNotification<D>::Id() const
{
    uint32_t value {};
    check_hresult(static_cast<const IUserNotification &>(static_cast<const D &>(*this))->get_Id(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IUserNotification<D>::CreationTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IUserNotification &>(static_cast<const D &>(*this))->get_CreationTime(put(value)));
    return value;
}

template <typename D> hstring impl_INotificationVisual<D>::Language() const
{
    hstring value;
    check_hresult(static_cast<const INotificationVisual &>(static_cast<const D &>(*this))->get_Language(put(value)));
    return value;
}

template <typename D> void impl_INotificationVisual<D>::Language(hstring_ref value) const
{
    check_hresult(static_cast<const INotificationVisual &>(static_cast<const D &>(*this))->put_Language(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Notifications::NotificationBinding> impl_INotificationVisual<D>::Bindings() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Notifications::NotificationBinding> result;
    check_hresult(static_cast<const INotificationVisual &>(static_cast<const D &>(*this))->get_Bindings(put(result)));
    return result;
}

template <typename D> Windows::UI::Notifications::NotificationBinding impl_INotificationVisual<D>::GetBinding(hstring_ref templateName) const
{
    Windows::UI::Notifications::NotificationBinding result { nullptr };
    check_hresult(static_cast<const INotificationVisual &>(static_cast<const D &>(*this))->abi_GetBinding(get(templateName), put(result)));
    return result;
}

template <typename D> Windows::UI::Notifications::AdaptiveNotificationContentKind impl_IAdaptiveNotificationContent<D>::Kind() const
{
    Windows::UI::Notifications::AdaptiveNotificationContentKind value {};
    check_hresult(static_cast<const IAdaptiveNotificationContent &>(static_cast<const D &>(*this))->get_Kind(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> impl_IAdaptiveNotificationContent<D>::Hints() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value;
    check_hresult(static_cast<const IAdaptiveNotificationContent &>(static_cast<const D &>(*this))->get_Hints(put(value)));
    return value;
}

template <typename D> hstring impl_INotificationBinding<D>::Template() const
{
    hstring value;
    check_hresult(static_cast<const INotificationBinding &>(static_cast<const D &>(*this))->get_Template(put(value)));
    return value;
}

template <typename D> void impl_INotificationBinding<D>::Template(hstring_ref value) const
{
    check_hresult(static_cast<const INotificationBinding &>(static_cast<const D &>(*this))->put_Template(get(value)));
}

template <typename D> hstring impl_INotificationBinding<D>::Language() const
{
    hstring value;
    check_hresult(static_cast<const INotificationBinding &>(static_cast<const D &>(*this))->get_Language(put(value)));
    return value;
}

template <typename D> void impl_INotificationBinding<D>::Language(hstring_ref value) const
{
    check_hresult(static_cast<const INotificationBinding &>(static_cast<const D &>(*this))->put_Language(get(value)));
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> impl_INotificationBinding<D>::Hints() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value;
    check_hresult(static_cast<const INotificationBinding &>(static_cast<const D &>(*this))->get_Hints(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::AdaptiveNotificationText> impl_INotificationBinding<D>::GetTextElements() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::AdaptiveNotificationText> result;
    check_hresult(static_cast<const INotificationBinding &>(static_cast<const D &>(*this))->abi_GetTextElements(put(result)));
    return result;
}

template <typename D> hstring impl_IKnownNotificationBindingsStatics<D>::ToastGeneric() const
{
    hstring value;
    check_hresult(static_cast<const IKnownNotificationBindingsStatics &>(static_cast<const D &>(*this))->get_ToastGeneric(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownAdaptiveNotificationHintsStatics<D>::Style() const
{
    hstring value;
    check_hresult(static_cast<const IKnownAdaptiveNotificationHintsStatics &>(static_cast<const D &>(*this))->get_Style(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownAdaptiveNotificationHintsStatics<D>::Wrap() const
{
    hstring value;
    check_hresult(static_cast<const IKnownAdaptiveNotificationHintsStatics &>(static_cast<const D &>(*this))->get_Wrap(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownAdaptiveNotificationHintsStatics<D>::MaxLines() const
{
    hstring value;
    check_hresult(static_cast<const IKnownAdaptiveNotificationHintsStatics &>(static_cast<const D &>(*this))->get_MaxLines(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownAdaptiveNotificationHintsStatics<D>::MinLines() const
{
    hstring value;
    check_hresult(static_cast<const IKnownAdaptiveNotificationHintsStatics &>(static_cast<const D &>(*this))->get_MinLines(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownAdaptiveNotificationHintsStatics<D>::TextStacking() const
{
    hstring value;
    check_hresult(static_cast<const IKnownAdaptiveNotificationHintsStatics &>(static_cast<const D &>(*this))->get_TextStacking(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownAdaptiveNotificationHintsStatics<D>::Align() const
{
    hstring value;
    check_hresult(static_cast<const IKnownAdaptiveNotificationHintsStatics &>(static_cast<const D &>(*this))->get_Align(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownAdaptiveNotificationTextStylesStatics<D>::Caption() const
{
    hstring value;
    check_hresult(static_cast<const IKnownAdaptiveNotificationTextStylesStatics &>(static_cast<const D &>(*this))->get_Caption(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownAdaptiveNotificationTextStylesStatics<D>::Body() const
{
    hstring value;
    check_hresult(static_cast<const IKnownAdaptiveNotificationTextStylesStatics &>(static_cast<const D &>(*this))->get_Body(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownAdaptiveNotificationTextStylesStatics<D>::Base() const
{
    hstring value;
    check_hresult(static_cast<const IKnownAdaptiveNotificationTextStylesStatics &>(static_cast<const D &>(*this))->get_Base(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownAdaptiveNotificationTextStylesStatics<D>::Subtitle() const
{
    hstring value;
    check_hresult(static_cast<const IKnownAdaptiveNotificationTextStylesStatics &>(static_cast<const D &>(*this))->get_Subtitle(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownAdaptiveNotificationTextStylesStatics<D>::Title() const
{
    hstring value;
    check_hresult(static_cast<const IKnownAdaptiveNotificationTextStylesStatics &>(static_cast<const D &>(*this))->get_Title(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownAdaptiveNotificationTextStylesStatics<D>::Subheader() const
{
    hstring value;
    check_hresult(static_cast<const IKnownAdaptiveNotificationTextStylesStatics &>(static_cast<const D &>(*this))->get_Subheader(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownAdaptiveNotificationTextStylesStatics<D>::Header() const
{
    hstring value;
    check_hresult(static_cast<const IKnownAdaptiveNotificationTextStylesStatics &>(static_cast<const D &>(*this))->get_Header(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownAdaptiveNotificationTextStylesStatics<D>::TitleNumeral() const
{
    hstring value;
    check_hresult(static_cast<const IKnownAdaptiveNotificationTextStylesStatics &>(static_cast<const D &>(*this))->get_TitleNumeral(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownAdaptiveNotificationTextStylesStatics<D>::SubheaderNumeral() const
{
    hstring value;
    check_hresult(static_cast<const IKnownAdaptiveNotificationTextStylesStatics &>(static_cast<const D &>(*this))->get_SubheaderNumeral(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownAdaptiveNotificationTextStylesStatics<D>::HeaderNumeral() const
{
    hstring value;
    check_hresult(static_cast<const IKnownAdaptiveNotificationTextStylesStatics &>(static_cast<const D &>(*this))->get_HeaderNumeral(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownAdaptiveNotificationTextStylesStatics<D>::CaptionSubtle() const
{
    hstring value;
    check_hresult(static_cast<const IKnownAdaptiveNotificationTextStylesStatics &>(static_cast<const D &>(*this))->get_CaptionSubtle(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownAdaptiveNotificationTextStylesStatics<D>::BodySubtle() const
{
    hstring value;
    check_hresult(static_cast<const IKnownAdaptiveNotificationTextStylesStatics &>(static_cast<const D &>(*this))->get_BodySubtle(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownAdaptiveNotificationTextStylesStatics<D>::BaseSubtle() const
{
    hstring value;
    check_hresult(static_cast<const IKnownAdaptiveNotificationTextStylesStatics &>(static_cast<const D &>(*this))->get_BaseSubtle(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownAdaptiveNotificationTextStylesStatics<D>::SubtitleSubtle() const
{
    hstring value;
    check_hresult(static_cast<const IKnownAdaptiveNotificationTextStylesStatics &>(static_cast<const D &>(*this))->get_SubtitleSubtle(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownAdaptiveNotificationTextStylesStatics<D>::TitleSubtle() const
{
    hstring value;
    check_hresult(static_cast<const IKnownAdaptiveNotificationTextStylesStatics &>(static_cast<const D &>(*this))->get_TitleSubtle(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownAdaptiveNotificationTextStylesStatics<D>::SubheaderSubtle() const
{
    hstring value;
    check_hresult(static_cast<const IKnownAdaptiveNotificationTextStylesStatics &>(static_cast<const D &>(*this))->get_SubheaderSubtle(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownAdaptiveNotificationTextStylesStatics<D>::SubheaderNumeralSubtle() const
{
    hstring value;
    check_hresult(static_cast<const IKnownAdaptiveNotificationTextStylesStatics &>(static_cast<const D &>(*this))->get_SubheaderNumeralSubtle(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownAdaptiveNotificationTextStylesStatics<D>::HeaderSubtle() const
{
    hstring value;
    check_hresult(static_cast<const IKnownAdaptiveNotificationTextStylesStatics &>(static_cast<const D &>(*this))->get_HeaderSubtle(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownAdaptiveNotificationTextStylesStatics<D>::HeaderNumeralSubtle() const
{
    hstring value;
    check_hresult(static_cast<const IKnownAdaptiveNotificationTextStylesStatics &>(static_cast<const D &>(*this))->get_HeaderNumeralSubtle(put(value)));
    return value;
}

template <typename D> hstring impl_IAdaptiveNotificationText<D>::Text() const
{
    hstring value;
    check_hresult(static_cast<const IAdaptiveNotificationText &>(static_cast<const D &>(*this))->get_Text(put(value)));
    return value;
}

template <typename D> void impl_IAdaptiveNotificationText<D>::Text(hstring_ref value) const
{
    check_hresult(static_cast<const IAdaptiveNotificationText &>(static_cast<const D &>(*this))->put_Text(get(value)));
}

template <typename D> hstring impl_IAdaptiveNotificationText<D>::Language() const
{
    hstring value;
    check_hresult(static_cast<const IAdaptiveNotificationText &>(static_cast<const D &>(*this))->get_Language(put(value)));
    return value;
}

template <typename D> void impl_IAdaptiveNotificationText<D>::Language(hstring_ref value) const
{
    check_hresult(static_cast<const IAdaptiveNotificationText &>(static_cast<const D &>(*this))->put_Language(get(value)));
}

template <typename D> Windows::UI::Notifications::ToastDismissalReason impl_IToastDismissedEventArgs<D>::Reason() const
{
    Windows::UI::Notifications::ToastDismissalReason value {};
    check_hresult(static_cast<const IToastDismissedEventArgs &>(static_cast<const D &>(*this))->get_Reason(&value));
    return value;
}

template <typename D> HRESULT impl_IToastFailedEventArgs<D>::ErrorCode() const
{
    HRESULT value {};
    check_hresult(static_cast<const IToastFailedEventArgs &>(static_cast<const D &>(*this))->get_ErrorCode(&value));
    return value;
}

template <typename D> hstring impl_IToastActivatedEventArgs<D>::Arguments() const
{
    hstring value;
    check_hresult(static_cast<const IToastActivatedEventArgs &>(static_cast<const D &>(*this))->get_Arguments(put(value)));
    return value;
}

template <typename D> Windows::UI::Notifications::TileUpdater impl_ITileUpdateManagerStatics<D>::CreateTileUpdaterForApplication() const
{
    Windows::UI::Notifications::TileUpdater updater { nullptr };
    check_hresult(static_cast<const ITileUpdateManagerStatics &>(static_cast<const D &>(*this))->abi_CreateTileUpdaterForApplication(put(updater)));
    return updater;
}

template <typename D> Windows::UI::Notifications::TileUpdater impl_ITileUpdateManagerStatics<D>::CreateTileUpdaterForApplication(hstring_ref applicationId) const
{
    Windows::UI::Notifications::TileUpdater updater { nullptr };
    check_hresult(static_cast<const ITileUpdateManagerStatics &>(static_cast<const D &>(*this))->abi_CreateTileUpdaterForApplicationWithId(get(applicationId), put(updater)));
    return updater;
}

template <typename D> Windows::UI::Notifications::TileUpdater impl_ITileUpdateManagerStatics<D>::CreateTileUpdaterForSecondaryTile(hstring_ref tileId) const
{
    Windows::UI::Notifications::TileUpdater updater { nullptr };
    check_hresult(static_cast<const ITileUpdateManagerStatics &>(static_cast<const D &>(*this))->abi_CreateTileUpdaterForSecondaryTile(get(tileId), put(updater)));
    return updater;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument impl_ITileUpdateManagerStatics<D>::GetTemplateContent(Windows::UI::Notifications::TileTemplateType type) const
{
    Windows::Data::Xml::Dom::XmlDocument content { nullptr };
    check_hresult(static_cast<const ITileUpdateManagerStatics &>(static_cast<const D &>(*this))->abi_GetTemplateContent(type, put(content)));
    return content;
}

template <typename D> Windows::UI::Notifications::TileUpdateManagerForUser impl_ITileUpdateManagerStatics2<D>::GetForUser(const Windows::System::User & user) const
{
    Windows::UI::Notifications::TileUpdateManagerForUser result { nullptr };
    check_hresult(static_cast<const ITileUpdateManagerStatics2 &>(static_cast<const D &>(*this))->abi_GetForUser(get(user), put(result)));
    return result;
}

template <typename D> Windows::UI::Notifications::TileUpdater impl_ITileUpdateManagerForUser<D>::CreateTileUpdaterForApplicationForUser() const
{
    Windows::UI::Notifications::TileUpdater updater { nullptr };
    check_hresult(static_cast<const ITileUpdateManagerForUser &>(static_cast<const D &>(*this))->abi_CreateTileUpdaterForApplication(put(updater)));
    return updater;
}

template <typename D> Windows::UI::Notifications::TileUpdater impl_ITileUpdateManagerForUser<D>::CreateTileUpdaterForApplication(hstring_ref applicationId) const
{
    Windows::UI::Notifications::TileUpdater updater { nullptr };
    check_hresult(static_cast<const ITileUpdateManagerForUser &>(static_cast<const D &>(*this))->abi_CreateTileUpdaterForApplicationWithId(get(applicationId), put(updater)));
    return updater;
}

template <typename D> Windows::UI::Notifications::TileUpdater impl_ITileUpdateManagerForUser<D>::CreateTileUpdaterForSecondaryTile(hstring_ref tileId) const
{
    Windows::UI::Notifications::TileUpdater updater { nullptr };
    check_hresult(static_cast<const ITileUpdateManagerForUser &>(static_cast<const D &>(*this))->abi_CreateTileUpdaterForSecondaryTile(get(tileId), put(updater)));
    return updater;
}

template <typename D> Windows::System::User impl_ITileUpdateManagerForUser<D>::User() const
{
    Windows::System::User value { nullptr };
    check_hresult(static_cast<const ITileUpdateManagerForUser &>(static_cast<const D &>(*this))->get_User(put(value)));
    return value;
}

template <typename D> void impl_ITileUpdater<D>::Update(const Windows::UI::Notifications::TileNotification & notification) const
{
    check_hresult(static_cast<const ITileUpdater &>(static_cast<const D &>(*this))->abi_Update(get(notification)));
}

template <typename D> void impl_ITileUpdater<D>::Clear() const
{
    check_hresult(static_cast<const ITileUpdater &>(static_cast<const D &>(*this))->abi_Clear());
}

template <typename D> void impl_ITileUpdater<D>::EnableNotificationQueue(bool enable) const
{
    check_hresult(static_cast<const ITileUpdater &>(static_cast<const D &>(*this))->abi_EnableNotificationQueue(enable));
}

template <typename D> Windows::UI::Notifications::NotificationSetting impl_ITileUpdater<D>::Setting() const
{
    Windows::UI::Notifications::NotificationSetting value {};
    check_hresult(static_cast<const ITileUpdater &>(static_cast<const D &>(*this))->get_Setting(&value));
    return value;
}

template <typename D> void impl_ITileUpdater<D>::AddToSchedule(const Windows::UI::Notifications::ScheduledTileNotification & scheduledTile) const
{
    check_hresult(static_cast<const ITileUpdater &>(static_cast<const D &>(*this))->abi_AddToSchedule(get(scheduledTile)));
}

template <typename D> void impl_ITileUpdater<D>::RemoveFromSchedule(const Windows::UI::Notifications::ScheduledTileNotification & scheduledTile) const
{
    check_hresult(static_cast<const ITileUpdater &>(static_cast<const D &>(*this))->abi_RemoveFromSchedule(get(scheduledTile)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ScheduledTileNotification> impl_ITileUpdater<D>::GetScheduledTileNotifications() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ScheduledTileNotification> scheduledTiles;
    check_hresult(static_cast<const ITileUpdater &>(static_cast<const D &>(*this))->abi_GetScheduledTileNotifications(put(scheduledTiles)));
    return scheduledTiles;
}

template <typename D> void impl_ITileUpdater<D>::StartPeriodicUpdate(const Windows::Foundation::Uri & tileContent, Windows::UI::Notifications::PeriodicUpdateRecurrence requestedInterval) const
{
    check_hresult(static_cast<const ITileUpdater &>(static_cast<const D &>(*this))->abi_StartPeriodicUpdate(get(tileContent), requestedInterval));
}

template <typename D> void impl_ITileUpdater<D>::StartPeriodicUpdate(const Windows::Foundation::Uri & tileContent, const Windows::Foundation::DateTime & startTime, Windows::UI::Notifications::PeriodicUpdateRecurrence requestedInterval) const
{
    check_hresult(static_cast<const ITileUpdater &>(static_cast<const D &>(*this))->abi_StartPeriodicUpdateAtTime(get(tileContent), get(startTime), requestedInterval));
}

template <typename D> void impl_ITileUpdater<D>::StopPeriodicUpdate() const
{
    check_hresult(static_cast<const ITileUpdater &>(static_cast<const D &>(*this))->abi_StopPeriodicUpdate());
}

template <typename D> void impl_ITileUpdater<D>::StartPeriodicUpdateBatch(const Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> & tileContents, Windows::UI::Notifications::PeriodicUpdateRecurrence requestedInterval) const
{
    check_hresult(static_cast<const ITileUpdater &>(static_cast<const D &>(*this))->abi_StartPeriodicUpdateBatch(get(tileContents), requestedInterval));
}

template <typename D> void impl_ITileUpdater<D>::StartPeriodicUpdateBatch(const Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> & tileContents, const Windows::Foundation::DateTime & startTime, Windows::UI::Notifications::PeriodicUpdateRecurrence requestedInterval) const
{
    check_hresult(static_cast<const ITileUpdater &>(static_cast<const D &>(*this))->abi_StartPeriodicUpdateBatchAtTime(get(tileContents), get(startTime), requestedInterval));
}

template <typename D> void impl_ITileUpdater2<D>::EnableNotificationQueueForSquare150x150(bool enable) const
{
    check_hresult(static_cast<const ITileUpdater2 &>(static_cast<const D &>(*this))->abi_EnableNotificationQueueForSquare150x150(enable));
}

template <typename D> void impl_ITileUpdater2<D>::EnableNotificationQueueForWide310x150(bool enable) const
{
    check_hresult(static_cast<const ITileUpdater2 &>(static_cast<const D &>(*this))->abi_EnableNotificationQueueForWide310x150(enable));
}

template <typename D> void impl_ITileUpdater2<D>::EnableNotificationQueueForSquare310x310(bool enable) const
{
    check_hresult(static_cast<const ITileUpdater2 &>(static_cast<const D &>(*this))->abi_EnableNotificationQueueForSquare310x310(enable));
}

template <typename D> Windows::UI::Notifications::TileFlyoutUpdater impl_ITileFlyoutUpdateManagerStatics<D>::CreateTileFlyoutUpdaterForApplication() const
{
    Windows::UI::Notifications::TileFlyoutUpdater updater { nullptr };
    check_hresult(static_cast<const ITileFlyoutUpdateManagerStatics &>(static_cast<const D &>(*this))->abi_CreateTileFlyoutUpdaterForApplication(put(updater)));
    return updater;
}

template <typename D> Windows::UI::Notifications::TileFlyoutUpdater impl_ITileFlyoutUpdateManagerStatics<D>::CreateTileFlyoutUpdaterForApplication(hstring_ref applicationId) const
{
    Windows::UI::Notifications::TileFlyoutUpdater updater { nullptr };
    check_hresult(static_cast<const ITileFlyoutUpdateManagerStatics &>(static_cast<const D &>(*this))->abi_CreateTileFlyoutUpdaterForApplicationWithId(get(applicationId), put(updater)));
    return updater;
}

template <typename D> Windows::UI::Notifications::TileFlyoutUpdater impl_ITileFlyoutUpdateManagerStatics<D>::CreateTileFlyoutUpdaterForSecondaryTile(hstring_ref tileId) const
{
    Windows::UI::Notifications::TileFlyoutUpdater updater { nullptr };
    check_hresult(static_cast<const ITileFlyoutUpdateManagerStatics &>(static_cast<const D &>(*this))->abi_CreateTileFlyoutUpdaterForSecondaryTile(get(tileId), put(updater)));
    return updater;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument impl_ITileFlyoutUpdateManagerStatics<D>::GetTemplateContent(Windows::UI::Notifications::TileFlyoutTemplateType type) const
{
    Windows::Data::Xml::Dom::XmlDocument content { nullptr };
    check_hresult(static_cast<const ITileFlyoutUpdateManagerStatics &>(static_cast<const D &>(*this))->abi_GetTemplateContent(type, put(content)));
    return content;
}

template <typename D> void impl_ITileFlyoutUpdater<D>::Update(const Windows::UI::Notifications::TileFlyoutNotification & notification) const
{
    check_hresult(static_cast<const ITileFlyoutUpdater &>(static_cast<const D &>(*this))->abi_Update(get(notification)));
}

template <typename D> void impl_ITileFlyoutUpdater<D>::Clear() const
{
    check_hresult(static_cast<const ITileFlyoutUpdater &>(static_cast<const D &>(*this))->abi_Clear());
}

template <typename D> void impl_ITileFlyoutUpdater<D>::StartPeriodicUpdate(const Windows::Foundation::Uri & tileFlyoutContent, Windows::UI::Notifications::PeriodicUpdateRecurrence requestedInterval) const
{
    check_hresult(static_cast<const ITileFlyoutUpdater &>(static_cast<const D &>(*this))->abi_StartPeriodicUpdate(get(tileFlyoutContent), requestedInterval));
}

template <typename D> void impl_ITileFlyoutUpdater<D>::StartPeriodicUpdate(const Windows::Foundation::Uri & tileFlyoutContent, const Windows::Foundation::DateTime & startTime, Windows::UI::Notifications::PeriodicUpdateRecurrence requestedInterval) const
{
    check_hresult(static_cast<const ITileFlyoutUpdater &>(static_cast<const D &>(*this))->abi_StartPeriodicUpdateAtTime(get(tileFlyoutContent), get(startTime), requestedInterval));
}

template <typename D> void impl_ITileFlyoutUpdater<D>::StopPeriodicUpdate() const
{
    check_hresult(static_cast<const ITileFlyoutUpdater &>(static_cast<const D &>(*this))->abi_StopPeriodicUpdate());
}

template <typename D> Windows::UI::Notifications::NotificationSetting impl_ITileFlyoutUpdater<D>::Setting() const
{
    Windows::UI::Notifications::NotificationSetting value {};
    check_hresult(static_cast<const ITileFlyoutUpdater &>(static_cast<const D &>(*this))->get_Setting(&value));
    return value;
}

template <typename D> Windows::UI::Notifications::BadgeUpdater impl_IBadgeUpdateManagerStatics<D>::CreateBadgeUpdaterForApplication() const
{
    Windows::UI::Notifications::BadgeUpdater updater { nullptr };
    check_hresult(static_cast<const IBadgeUpdateManagerStatics &>(static_cast<const D &>(*this))->abi_CreateBadgeUpdaterForApplication(put(updater)));
    return updater;
}

template <typename D> Windows::UI::Notifications::BadgeUpdater impl_IBadgeUpdateManagerStatics<D>::CreateBadgeUpdaterForApplication(hstring_ref applicationId) const
{
    Windows::UI::Notifications::BadgeUpdater updater { nullptr };
    check_hresult(static_cast<const IBadgeUpdateManagerStatics &>(static_cast<const D &>(*this))->abi_CreateBadgeUpdaterForApplicationWithId(get(applicationId), put(updater)));
    return updater;
}

template <typename D> Windows::UI::Notifications::BadgeUpdater impl_IBadgeUpdateManagerStatics<D>::CreateBadgeUpdaterForSecondaryTile(hstring_ref tileId) const
{
    Windows::UI::Notifications::BadgeUpdater updater { nullptr };
    check_hresult(static_cast<const IBadgeUpdateManagerStatics &>(static_cast<const D &>(*this))->abi_CreateBadgeUpdaterForSecondaryTile(get(tileId), put(updater)));
    return updater;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument impl_IBadgeUpdateManagerStatics<D>::GetTemplateContent(Windows::UI::Notifications::BadgeTemplateType type) const
{
    Windows::Data::Xml::Dom::XmlDocument content { nullptr };
    check_hresult(static_cast<const IBadgeUpdateManagerStatics &>(static_cast<const D &>(*this))->abi_GetTemplateContent(type, put(content)));
    return content;
}

template <typename D> Windows::UI::Notifications::BadgeUpdateManagerForUser impl_IBadgeUpdateManagerStatics2<D>::GetForUser(const Windows::System::User & user) const
{
    Windows::UI::Notifications::BadgeUpdateManagerForUser result { nullptr };
    check_hresult(static_cast<const IBadgeUpdateManagerStatics2 &>(static_cast<const D &>(*this))->abi_GetForUser(get(user), put(result)));
    return result;
}

template <typename D> Windows::UI::Notifications::BadgeUpdater impl_IBadgeUpdateManagerForUser<D>::CreateBadgeUpdaterForApplication() const
{
    Windows::UI::Notifications::BadgeUpdater result { nullptr };
    check_hresult(static_cast<const IBadgeUpdateManagerForUser &>(static_cast<const D &>(*this))->abi_CreateBadgeUpdaterForApplication(put(result)));
    return result;
}

template <typename D> Windows::UI::Notifications::BadgeUpdater impl_IBadgeUpdateManagerForUser<D>::CreateBadgeUpdaterForApplication(hstring_ref applicationId) const
{
    Windows::UI::Notifications::BadgeUpdater result { nullptr };
    check_hresult(static_cast<const IBadgeUpdateManagerForUser &>(static_cast<const D &>(*this))->abi_CreateBadgeUpdaterForApplicationWithId(get(applicationId), put(result)));
    return result;
}

template <typename D> Windows::UI::Notifications::BadgeUpdater impl_IBadgeUpdateManagerForUser<D>::CreateBadgeUpdaterForSecondaryTile(hstring_ref tileId) const
{
    Windows::UI::Notifications::BadgeUpdater result { nullptr };
    check_hresult(static_cast<const IBadgeUpdateManagerForUser &>(static_cast<const D &>(*this))->abi_CreateBadgeUpdaterForSecondaryTile(get(tileId), put(result)));
    return result;
}

template <typename D> Windows::System::User impl_IBadgeUpdateManagerForUser<D>::User() const
{
    Windows::System::User value { nullptr };
    check_hresult(static_cast<const IBadgeUpdateManagerForUser &>(static_cast<const D &>(*this))->get_User(put(value)));
    return value;
}

template <typename D> void impl_IBadgeUpdater<D>::Update(const Windows::UI::Notifications::BadgeNotification & notification) const
{
    check_hresult(static_cast<const IBadgeUpdater &>(static_cast<const D &>(*this))->abi_Update(get(notification)));
}

template <typename D> void impl_IBadgeUpdater<D>::Clear() const
{
    check_hresult(static_cast<const IBadgeUpdater &>(static_cast<const D &>(*this))->abi_Clear());
}

template <typename D> void impl_IBadgeUpdater<D>::StartPeriodicUpdate(const Windows::Foundation::Uri & badgeContent, Windows::UI::Notifications::PeriodicUpdateRecurrence requestedInterval) const
{
    check_hresult(static_cast<const IBadgeUpdater &>(static_cast<const D &>(*this))->abi_StartPeriodicUpdate(get(badgeContent), requestedInterval));
}

template <typename D> void impl_IBadgeUpdater<D>::StartPeriodicUpdate(const Windows::Foundation::Uri & badgeContent, const Windows::Foundation::DateTime & startTime, Windows::UI::Notifications::PeriodicUpdateRecurrence requestedInterval) const
{
    check_hresult(static_cast<const IBadgeUpdater &>(static_cast<const D &>(*this))->abi_StartPeriodicUpdateAtTime(get(badgeContent), get(startTime), requestedInterval));
}

template <typename D> void impl_IBadgeUpdater<D>::StopPeriodicUpdate() const
{
    check_hresult(static_cast<const IBadgeUpdater &>(static_cast<const D &>(*this))->abi_StopPeriodicUpdate());
}

template <typename D> Windows::UI::Notifications::ToastNotifier impl_IToastNotificationManagerStatics<D>::CreateToastNotifier() const
{
    Windows::UI::Notifications::ToastNotifier notifier { nullptr };
    check_hresult(static_cast<const IToastNotificationManagerStatics &>(static_cast<const D &>(*this))->abi_CreateToastNotifier(put(notifier)));
    return notifier;
}

template <typename D> Windows::UI::Notifications::ToastNotifier impl_IToastNotificationManagerStatics<D>::CreateToastNotifier(hstring_ref applicationId) const
{
    Windows::UI::Notifications::ToastNotifier notifier { nullptr };
    check_hresult(static_cast<const IToastNotificationManagerStatics &>(static_cast<const D &>(*this))->abi_CreateToastNotifierWithId(get(applicationId), put(notifier)));
    return notifier;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument impl_IToastNotificationManagerStatics<D>::GetTemplateContent(Windows::UI::Notifications::ToastTemplateType type) const
{
    Windows::Data::Xml::Dom::XmlDocument content { nullptr };
    check_hresult(static_cast<const IToastNotificationManagerStatics &>(static_cast<const D &>(*this))->abi_GetTemplateContent(type, put(content)));
    return content;
}

template <typename D> void impl_IToastNotifier<D>::Show(const Windows::UI::Notifications::ToastNotification & notification) const
{
    check_hresult(static_cast<const IToastNotifier &>(static_cast<const D &>(*this))->abi_Show(get(notification)));
}

template <typename D> void impl_IToastNotifier<D>::Hide(const Windows::UI::Notifications::ToastNotification & notification) const
{
    check_hresult(static_cast<const IToastNotifier &>(static_cast<const D &>(*this))->abi_Hide(get(notification)));
}

template <typename D> Windows::UI::Notifications::NotificationSetting impl_IToastNotifier<D>::Setting() const
{
    Windows::UI::Notifications::NotificationSetting value {};
    check_hresult(static_cast<const IToastNotifier &>(static_cast<const D &>(*this))->get_Setting(&value));
    return value;
}

template <typename D> void impl_IToastNotifier<D>::AddToSchedule(const Windows::UI::Notifications::ScheduledToastNotification & scheduledToast) const
{
    check_hresult(static_cast<const IToastNotifier &>(static_cast<const D &>(*this))->abi_AddToSchedule(get(scheduledToast)));
}

template <typename D> void impl_IToastNotifier<D>::RemoveFromSchedule(const Windows::UI::Notifications::ScheduledToastNotification & scheduledToast) const
{
    check_hresult(static_cast<const IToastNotifier &>(static_cast<const D &>(*this))->abi_RemoveFromSchedule(get(scheduledToast)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ScheduledToastNotification> impl_IToastNotifier<D>::GetScheduledToastNotifications() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ScheduledToastNotification> scheduledToasts;
    check_hresult(static_cast<const IToastNotifier &>(static_cast<const D &>(*this))->abi_GetScheduledToastNotifications(put(scheduledToasts)));
    return scheduledToasts;
}

template <typename D> Windows::UI::Notifications::TileNotification impl_ITileNotificationFactory<D>::CreateTileNotification(const Windows::Data::Xml::Dom::XmlDocument & content) const
{
    Windows::UI::Notifications::TileNotification notification { nullptr };
    check_hresult(static_cast<const ITileNotificationFactory &>(static_cast<const D &>(*this))->abi_CreateTileNotification(get(content), put(notification)));
    return notification;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument impl_ITileNotification<D>::Content() const
{
    Windows::Data::Xml::Dom::XmlDocument value { nullptr };
    check_hresult(static_cast<const ITileNotification &>(static_cast<const D &>(*this))->get_Content(put(value)));
    return value;
}

template <typename D> void impl_ITileNotification<D>::ExpirationTime(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const
{
    check_hresult(static_cast<const ITileNotification &>(static_cast<const D &>(*this))->put_ExpirationTime(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_ITileNotification<D>::ExpirationTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const ITileNotification &>(static_cast<const D &>(*this))->get_ExpirationTime(put(value)));
    return value;
}

template <typename D> void impl_ITileNotification<D>::Tag(hstring_ref value) const
{
    check_hresult(static_cast<const ITileNotification &>(static_cast<const D &>(*this))->put_Tag(get(value)));
}

template <typename D> hstring impl_ITileNotification<D>::Tag() const
{
    hstring value;
    check_hresult(static_cast<const ITileNotification &>(static_cast<const D &>(*this))->get_Tag(put(value)));
    return value;
}

template <typename D> Windows::UI::Notifications::TileFlyoutNotification impl_ITileFlyoutNotificationFactory<D>::CreateTileFlyoutNotification(const Windows::Data::Xml::Dom::XmlDocument & content) const
{
    Windows::UI::Notifications::TileFlyoutNotification notification { nullptr };
    check_hresult(static_cast<const ITileFlyoutNotificationFactory &>(static_cast<const D &>(*this))->abi_CreateTileFlyoutNotification(get(content), put(notification)));
    return notification;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument impl_ITileFlyoutNotification<D>::Content() const
{
    Windows::Data::Xml::Dom::XmlDocument value { nullptr };
    check_hresult(static_cast<const ITileFlyoutNotification &>(static_cast<const D &>(*this))->get_Content(put(value)));
    return value;
}

template <typename D> void impl_ITileFlyoutNotification<D>::ExpirationTime(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const
{
    check_hresult(static_cast<const ITileFlyoutNotification &>(static_cast<const D &>(*this))->put_ExpirationTime(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_ITileFlyoutNotification<D>::ExpirationTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const ITileFlyoutNotification &>(static_cast<const D &>(*this))->get_ExpirationTime(put(value)));
    return value;
}

template <typename D> Windows::UI::Notifications::BadgeNotification impl_IBadgeNotificationFactory<D>::CreateBadgeNotification(const Windows::Data::Xml::Dom::XmlDocument & content) const
{
    Windows::UI::Notifications::BadgeNotification notification { nullptr };
    check_hresult(static_cast<const IBadgeNotificationFactory &>(static_cast<const D &>(*this))->abi_CreateBadgeNotification(get(content), put(notification)));
    return notification;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument impl_IBadgeNotification<D>::Content() const
{
    Windows::Data::Xml::Dom::XmlDocument value { nullptr };
    check_hresult(static_cast<const IBadgeNotification &>(static_cast<const D &>(*this))->get_Content(put(value)));
    return value;
}

template <typename D> void impl_IBadgeNotification<D>::ExpirationTime(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const
{
    check_hresult(static_cast<const IBadgeNotification &>(static_cast<const D &>(*this))->put_ExpirationTime(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IBadgeNotification<D>::ExpirationTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IBadgeNotification &>(static_cast<const D &>(*this))->get_ExpirationTime(put(value)));
    return value;
}

template <typename D> Windows::UI::Notifications::ToastNotification impl_IToastNotificationFactory<D>::CreateToastNotification(const Windows::Data::Xml::Dom::XmlDocument & content) const
{
    Windows::UI::Notifications::ToastNotification notification { nullptr };
    check_hresult(static_cast<const IToastNotificationFactory &>(static_cast<const D &>(*this))->abi_CreateToastNotification(get(content), put(notification)));
    return notification;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument impl_IToastNotification<D>::Content() const
{
    Windows::Data::Xml::Dom::XmlDocument value { nullptr };
    check_hresult(static_cast<const IToastNotification &>(static_cast<const D &>(*this))->get_Content(put(value)));
    return value;
}

template <typename D> void impl_IToastNotification<D>::ExpirationTime(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const
{
    check_hresult(static_cast<const IToastNotification &>(static_cast<const D &>(*this))->put_ExpirationTime(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IToastNotification<D>::ExpirationTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IToastNotification &>(static_cast<const D &>(*this))->get_ExpirationTime(put(value)));
    return value;
}

template <typename D> event_token impl_IToastNotification<D>::Dismissed(const Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::UI::Notifications::ToastDismissedEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IToastNotification &>(static_cast<const D &>(*this))->add_Dismissed(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IToastNotification> impl_IToastNotification<D>::Dismissed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::UI::Notifications::ToastDismissedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IToastNotification>(this, &ABI::Windows::UI::Notifications::IToastNotification::remove_Dismissed, Dismissed(handler));
}

template <typename D> void impl_IToastNotification<D>::Dismissed(event_token cookie) const
{
    check_hresult(static_cast<const IToastNotification &>(static_cast<const D &>(*this))->remove_Dismissed(cookie));
}

template <typename D> event_token impl_IToastNotification<D>::Activated(const Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::IInspectable> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IToastNotification &>(static_cast<const D &>(*this))->add_Activated(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IToastNotification> impl_IToastNotification<D>::Activated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IToastNotification>(this, &ABI::Windows::UI::Notifications::IToastNotification::remove_Activated, Activated(handler));
}

template <typename D> void impl_IToastNotification<D>::Activated(event_token cookie) const
{
    check_hresult(static_cast<const IToastNotification &>(static_cast<const D &>(*this))->remove_Activated(cookie));
}

template <typename D> event_token impl_IToastNotification<D>::Failed(const Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::UI::Notifications::ToastFailedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IToastNotification &>(static_cast<const D &>(*this))->add_Failed(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IToastNotification> impl_IToastNotification<D>::Failed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Notifications::ToastNotification, Windows::UI::Notifications::ToastFailedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IToastNotification>(this, &ABI::Windows::UI::Notifications::IToastNotification::remove_Failed, Failed(handler));
}

template <typename D> void impl_IToastNotification<D>::Failed(event_token token) const
{
    check_hresult(static_cast<const IToastNotification &>(static_cast<const D &>(*this))->remove_Failed(token));
}

template <typename D> void impl_IToastNotification2<D>::Tag(hstring_ref value) const
{
    check_hresult(static_cast<const IToastNotification2 &>(static_cast<const D &>(*this))->put_Tag(get(value)));
}

template <typename D> hstring impl_IToastNotification2<D>::Tag() const
{
    hstring value;
    check_hresult(static_cast<const IToastNotification2 &>(static_cast<const D &>(*this))->get_Tag(put(value)));
    return value;
}

template <typename D> void impl_IToastNotification2<D>::Group(hstring_ref value) const
{
    check_hresult(static_cast<const IToastNotification2 &>(static_cast<const D &>(*this))->put_Group(get(value)));
}

template <typename D> hstring impl_IToastNotification2<D>::Group() const
{
    hstring value;
    check_hresult(static_cast<const IToastNotification2 &>(static_cast<const D &>(*this))->get_Group(put(value)));
    return value;
}

template <typename D> void impl_IToastNotification2<D>::SuppressPopup(bool value) const
{
    check_hresult(static_cast<const IToastNotification2 &>(static_cast<const D &>(*this))->put_SuppressPopup(value));
}

template <typename D> bool impl_IToastNotification2<D>::SuppressPopup() const
{
    bool value {};
    check_hresult(static_cast<const IToastNotification2 &>(static_cast<const D &>(*this))->get_SuppressPopup(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_INotification<D>::ExpirationTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const INotification &>(static_cast<const D &>(*this))->get_ExpirationTime(put(value)));
    return value;
}

template <typename D> void impl_INotification<D>::ExpirationTime(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const
{
    check_hresult(static_cast<const INotification &>(static_cast<const D &>(*this))->put_ExpirationTime(get(value)));
}

template <typename D> Windows::UI::Notifications::NotificationVisual impl_INotification<D>::Visual() const
{
    Windows::UI::Notifications::NotificationVisual value { nullptr };
    check_hresult(static_cast<const INotification &>(static_cast<const D &>(*this))->get_Visual(put(value)));
    return value;
}

template <typename D> void impl_INotification<D>::Visual(const Windows::UI::Notifications::NotificationVisual & value) const
{
    check_hresult(static_cast<const INotification &>(static_cast<const D &>(*this))->put_Visual(get(value)));
}

template <typename D> Windows::UI::Notifications::NotificationMirroring impl_IToastNotification3<D>::NotificationMirroring() const
{
    Windows::UI::Notifications::NotificationMirroring value {};
    check_hresult(static_cast<const IToastNotification3 &>(static_cast<const D &>(*this))->get_NotificationMirroring(&value));
    return value;
}

template <typename D> void impl_IToastNotification3<D>::NotificationMirroring(Windows::UI::Notifications::NotificationMirroring value) const
{
    check_hresult(static_cast<const IToastNotification3 &>(static_cast<const D &>(*this))->put_NotificationMirroring(value));
}

template <typename D> hstring impl_IToastNotification3<D>::RemoteId() const
{
    hstring value;
    check_hresult(static_cast<const IToastNotification3 &>(static_cast<const D &>(*this))->get_RemoteId(put(value)));
    return value;
}

template <typename D> void impl_IToastNotification3<D>::RemoteId(hstring_ref value) const
{
    check_hresult(static_cast<const IToastNotification3 &>(static_cast<const D &>(*this))->put_RemoteId(get(value)));
}

template <typename D> Windows::UI::Notifications::ScheduledToastNotification impl_IScheduledToastNotificationFactory<D>::CreateScheduledToastNotification(const Windows::Data::Xml::Dom::XmlDocument & content, const Windows::Foundation::DateTime & deliveryTime) const
{
    Windows::UI::Notifications::ScheduledToastNotification notification { nullptr };
    check_hresult(static_cast<const IScheduledToastNotificationFactory &>(static_cast<const D &>(*this))->abi_CreateScheduledToastNotification(get(content), get(deliveryTime), put(notification)));
    return notification;
}

template <typename D> Windows::UI::Notifications::ScheduledToastNotification impl_IScheduledToastNotificationFactory<D>::CreateScheduledToastNotificationRecurring(const Windows::Data::Xml::Dom::XmlDocument & content, const Windows::Foundation::DateTime & deliveryTime, const Windows::Foundation::TimeSpan & snoozeInterval, uint32_t maximumSnoozeCount) const
{
    Windows::UI::Notifications::ScheduledToastNotification notification { nullptr };
    check_hresult(static_cast<const IScheduledToastNotificationFactory &>(static_cast<const D &>(*this))->abi_CreateScheduledToastNotificationRecurring(get(content), get(deliveryTime), get(snoozeInterval), maximumSnoozeCount, put(notification)));
    return notification;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument impl_IScheduledToastNotification<D>::Content() const
{
    Windows::Data::Xml::Dom::XmlDocument value { nullptr };
    check_hresult(static_cast<const IScheduledToastNotification &>(static_cast<const D &>(*this))->get_Content(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IScheduledToastNotification<D>::DeliveryTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IScheduledToastNotification &>(static_cast<const D &>(*this))->get_DeliveryTime(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> impl_IScheduledToastNotification<D>::SnoozeInterval() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value;
    check_hresult(static_cast<const IScheduledToastNotification &>(static_cast<const D &>(*this))->get_SnoozeInterval(put(value)));
    return value;
}

template <typename D> uint32_t impl_IScheduledToastNotification<D>::MaximumSnoozeCount() const
{
    uint32_t value {};
    check_hresult(static_cast<const IScheduledToastNotification &>(static_cast<const D &>(*this))->get_MaximumSnoozeCount(&value));
    return value;
}

template <typename D> void impl_IScheduledToastNotification<D>::Id(hstring_ref value) const
{
    check_hresult(static_cast<const IScheduledToastNotification &>(static_cast<const D &>(*this))->put_Id(get(value)));
}

template <typename D> hstring impl_IScheduledToastNotification<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IScheduledToastNotification &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> void impl_IScheduledToastNotification2<D>::Tag(hstring_ref value) const
{
    check_hresult(static_cast<const IScheduledToastNotification2 &>(static_cast<const D &>(*this))->put_Tag(get(value)));
}

template <typename D> hstring impl_IScheduledToastNotification2<D>::Tag() const
{
    hstring value;
    check_hresult(static_cast<const IScheduledToastNotification2 &>(static_cast<const D &>(*this))->get_Tag(put(value)));
    return value;
}

template <typename D> void impl_IScheduledToastNotification2<D>::Group(hstring_ref value) const
{
    check_hresult(static_cast<const IScheduledToastNotification2 &>(static_cast<const D &>(*this))->put_Group(get(value)));
}

template <typename D> hstring impl_IScheduledToastNotification2<D>::Group() const
{
    hstring value;
    check_hresult(static_cast<const IScheduledToastNotification2 &>(static_cast<const D &>(*this))->get_Group(put(value)));
    return value;
}

template <typename D> void impl_IScheduledToastNotification2<D>::SuppressPopup(bool value) const
{
    check_hresult(static_cast<const IScheduledToastNotification2 &>(static_cast<const D &>(*this))->put_SuppressPopup(value));
}

template <typename D> bool impl_IScheduledToastNotification2<D>::SuppressPopup() const
{
    bool value {};
    check_hresult(static_cast<const IScheduledToastNotification2 &>(static_cast<const D &>(*this))->get_SuppressPopup(&value));
    return value;
}

template <typename D> Windows::UI::Notifications::NotificationMirroring impl_IScheduledToastNotification3<D>::NotificationMirroring() const
{
    Windows::UI::Notifications::NotificationMirroring value {};
    check_hresult(static_cast<const IScheduledToastNotification3 &>(static_cast<const D &>(*this))->get_NotificationMirroring(&value));
    return value;
}

template <typename D> void impl_IScheduledToastNotification3<D>::NotificationMirroring(Windows::UI::Notifications::NotificationMirroring value) const
{
    check_hresult(static_cast<const IScheduledToastNotification3 &>(static_cast<const D &>(*this))->put_NotificationMirroring(value));
}

template <typename D> hstring impl_IScheduledToastNotification3<D>::RemoteId() const
{
    hstring value;
    check_hresult(static_cast<const IScheduledToastNotification3 &>(static_cast<const D &>(*this))->get_RemoteId(put(value)));
    return value;
}

template <typename D> void impl_IScheduledToastNotification3<D>::RemoteId(hstring_ref value) const
{
    check_hresult(static_cast<const IScheduledToastNotification3 &>(static_cast<const D &>(*this))->put_RemoteId(get(value)));
}

template <typename D> Windows::UI::Notifications::ScheduledTileNotification impl_IScheduledTileNotificationFactory<D>::CreateScheduledTileNotification(const Windows::Data::Xml::Dom::XmlDocument & content, const Windows::Foundation::DateTime & deliveryTime) const
{
    Windows::UI::Notifications::ScheduledTileNotification notification { nullptr };
    check_hresult(static_cast<const IScheduledTileNotificationFactory &>(static_cast<const D &>(*this))->abi_CreateScheduledTileNotification(get(content), get(deliveryTime), put(notification)));
    return notification;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument impl_IScheduledTileNotification<D>::Content() const
{
    Windows::Data::Xml::Dom::XmlDocument value { nullptr };
    check_hresult(static_cast<const IScheduledTileNotification &>(static_cast<const D &>(*this))->get_Content(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IScheduledTileNotification<D>::DeliveryTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IScheduledTileNotification &>(static_cast<const D &>(*this))->get_DeliveryTime(put(value)));
    return value;
}

template <typename D> void impl_IScheduledTileNotification<D>::ExpirationTime(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const
{
    check_hresult(static_cast<const IScheduledTileNotification &>(static_cast<const D &>(*this))->put_ExpirationTime(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IScheduledTileNotification<D>::ExpirationTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IScheduledTileNotification &>(static_cast<const D &>(*this))->get_ExpirationTime(put(value)));
    return value;
}

template <typename D> void impl_IScheduledTileNotification<D>::Tag(hstring_ref value) const
{
    check_hresult(static_cast<const IScheduledTileNotification &>(static_cast<const D &>(*this))->put_Tag(get(value)));
}

template <typename D> hstring impl_IScheduledTileNotification<D>::Tag() const
{
    hstring value;
    check_hresult(static_cast<const IScheduledTileNotification &>(static_cast<const D &>(*this))->get_Tag(put(value)));
    return value;
}

template <typename D> void impl_IScheduledTileNotification<D>::Id(hstring_ref value) const
{
    check_hresult(static_cast<const IScheduledTileNotification &>(static_cast<const D &>(*this))->put_Id(get(value)));
}

template <typename D> hstring impl_IScheduledTileNotification<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IScheduledTileNotification &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> Windows::UI::Notifications::ToastNotificationHistory impl_IToastNotificationManagerStatics2<D>::History() const
{
    Windows::UI::Notifications::ToastNotificationHistory value { nullptr };
    check_hresult(static_cast<const IToastNotificationManagerStatics2 &>(static_cast<const D &>(*this))->get_History(put(value)));
    return value;
}

template <typename D> Windows::UI::Notifications::ToastNotificationManagerForUser impl_IToastNotificationManagerStatics4<D>::GetForUser(const Windows::System::User & user) const
{
    Windows::UI::Notifications::ToastNotificationManagerForUser result { nullptr };
    check_hresult(static_cast<const IToastNotificationManagerStatics4 &>(static_cast<const D &>(*this))->abi_GetForUser(get(user), put(result)));
    return result;
}

template <typename D> void impl_IToastNotificationManagerStatics4<D>::ConfigureNotificationMirroring(Windows::UI::Notifications::NotificationMirroring value) const
{
    check_hresult(static_cast<const IToastNotificationManagerStatics4 &>(static_cast<const D &>(*this))->abi_ConfigureNotificationMirroring(value));
}

template <typename D> Windows::UI::Notifications::ToastNotifier impl_IToastNotificationManagerForUser<D>::CreateToastNotifier() const
{
    Windows::UI::Notifications::ToastNotifier result { nullptr };
    check_hresult(static_cast<const IToastNotificationManagerForUser &>(static_cast<const D &>(*this))->abi_CreateToastNotifier(put(result)));
    return result;
}

template <typename D> Windows::UI::Notifications::ToastNotifier impl_IToastNotificationManagerForUser<D>::CreateToastNotifier(hstring_ref applicationId) const
{
    Windows::UI::Notifications::ToastNotifier result { nullptr };
    check_hresult(static_cast<const IToastNotificationManagerForUser &>(static_cast<const D &>(*this))->abi_CreateToastNotifierWithId(get(applicationId), put(result)));
    return result;
}

template <typename D> Windows::UI::Notifications::ToastNotificationHistory impl_IToastNotificationManagerForUser<D>::History() const
{
    Windows::UI::Notifications::ToastNotificationHistory value { nullptr };
    check_hresult(static_cast<const IToastNotificationManagerForUser &>(static_cast<const D &>(*this))->get_History(put(value)));
    return value;
}

template <typename D> Windows::System::User impl_IToastNotificationManagerForUser<D>::User() const
{
    Windows::System::User value { nullptr };
    check_hresult(static_cast<const IToastNotificationManagerForUser &>(static_cast<const D &>(*this))->get_User(put(value)));
    return value;
}

template <typename D> void impl_IToastNotificationHistory<D>::RemoveGroup(hstring_ref group) const
{
    check_hresult(static_cast<const IToastNotificationHistory &>(static_cast<const D &>(*this))->abi_RemoveGroup(get(group)));
}

template <typename D> void impl_IToastNotificationHistory<D>::RemoveGroup(hstring_ref group, hstring_ref applicationId) const
{
    check_hresult(static_cast<const IToastNotificationHistory &>(static_cast<const D &>(*this))->abi_RemoveGroupWithId(get(group), get(applicationId)));
}

template <typename D> void impl_IToastNotificationHistory<D>::Remove(hstring_ref tag, hstring_ref group, hstring_ref applicationId) const
{
    check_hresult(static_cast<const IToastNotificationHistory &>(static_cast<const D &>(*this))->abi_RemoveGroupedTagWithId(get(tag), get(group), get(applicationId)));
}

template <typename D> void impl_IToastNotificationHistory<D>::Remove(hstring_ref tag, hstring_ref group) const
{
    check_hresult(static_cast<const IToastNotificationHistory &>(static_cast<const D &>(*this))->abi_RemoveGroupedTag(get(tag), get(group)));
}

template <typename D> void impl_IToastNotificationHistory<D>::Remove(hstring_ref tag) const
{
    check_hresult(static_cast<const IToastNotificationHistory &>(static_cast<const D &>(*this))->abi_Remove(get(tag)));
}

template <typename D> void impl_IToastNotificationHistory<D>::Clear() const
{
    check_hresult(static_cast<const IToastNotificationHistory &>(static_cast<const D &>(*this))->abi_Clear());
}

template <typename D> void impl_IToastNotificationHistory<D>::Clear(hstring_ref applicationId) const
{
    check_hresult(static_cast<const IToastNotificationHistory &>(static_cast<const D &>(*this))->abi_ClearWithId(get(applicationId)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ToastNotification> impl_IToastNotificationHistory2<D>::GetHistory() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ToastNotification> toasts;
    check_hresult(static_cast<const IToastNotificationHistory2 &>(static_cast<const D &>(*this))->abi_GetHistory(put(toasts)));
    return toasts;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ToastNotification> impl_IToastNotificationHistory2<D>::GetHistory(hstring_ref applicationId) const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ToastNotification> toasts;
    check_hresult(static_cast<const IToastNotificationHistory2 &>(static_cast<const D &>(*this))->abi_GetHistoryWithId(get(applicationId), put(toasts)));
    return toasts;
}

template <typename D> Windows::UI::Notifications::ToastHistoryChangedType impl_IToastNotificationHistoryChangedTriggerDetail<D>::ChangeType() const
{
    Windows::UI::Notifications::ToastHistoryChangedType value {};
    check_hresult(static_cast<const IToastNotificationHistoryChangedTriggerDetail &>(static_cast<const D &>(*this))->get_ChangeType(&value));
    return value;
}

template <typename D> hstring impl_IToastNotificationActionTriggerDetail<D>::Argument() const
{
    hstring argument;
    check_hresult(static_cast<const IToastNotificationActionTriggerDetail &>(static_cast<const D &>(*this))->get_Argument(put(argument)));
    return argument;
}

template <typename D> Windows::Foundation::Collections::ValueSet impl_IToastNotificationActionTriggerDetail<D>::UserInput() const
{
    Windows::Foundation::Collections::ValueSet inputs { nullptr };
    check_hresult(static_cast<const IToastNotificationActionTriggerDetail &>(static_cast<const D &>(*this))->get_UserInput(put(inputs)));
    return inputs;
}

inline AdaptiveNotificationText::AdaptiveNotificationText() :
    AdaptiveNotificationText(activate_instance<AdaptiveNotificationText>())
{}

inline BadgeNotification::BadgeNotification(const Windows::Data::Xml::Dom::XmlDocument & content) :
    BadgeNotification(get_activation_factory<BadgeNotification, IBadgeNotificationFactory>().CreateBadgeNotification(content))
{}

inline Windows::UI::Notifications::BadgeUpdater BadgeUpdateManager::CreateBadgeUpdaterForApplication()
{
    return get_activation_factory<BadgeUpdateManager, IBadgeUpdateManagerStatics>().CreateBadgeUpdaterForApplication();
}

inline Windows::UI::Notifications::BadgeUpdater BadgeUpdateManager::CreateBadgeUpdaterForApplication(hstring_ref applicationId)
{
    return get_activation_factory<BadgeUpdateManager, IBadgeUpdateManagerStatics>().CreateBadgeUpdaterForApplication(applicationId);
}

inline Windows::UI::Notifications::BadgeUpdater BadgeUpdateManager::CreateBadgeUpdaterForSecondaryTile(hstring_ref tileId)
{
    return get_activation_factory<BadgeUpdateManager, IBadgeUpdateManagerStatics>().CreateBadgeUpdaterForSecondaryTile(tileId);
}

inline Windows::Data::Xml::Dom::XmlDocument BadgeUpdateManager::GetTemplateContent(Windows::UI::Notifications::BadgeTemplateType type)
{
    return get_activation_factory<BadgeUpdateManager, IBadgeUpdateManagerStatics>().GetTemplateContent(type);
}

inline Windows::UI::Notifications::BadgeUpdateManagerForUser BadgeUpdateManager::GetForUser(const Windows::System::User & user)
{
    return get_activation_factory<BadgeUpdateManager, IBadgeUpdateManagerStatics2>().GetForUser(user);
}

inline hstring KnownAdaptiveNotificationHints::Style()
{
    return get_activation_factory<KnownAdaptiveNotificationHints, IKnownAdaptiveNotificationHintsStatics>().Style();
}

inline hstring KnownAdaptiveNotificationHints::Wrap()
{
    return get_activation_factory<KnownAdaptiveNotificationHints, IKnownAdaptiveNotificationHintsStatics>().Wrap();
}

inline hstring KnownAdaptiveNotificationHints::MaxLines()
{
    return get_activation_factory<KnownAdaptiveNotificationHints, IKnownAdaptiveNotificationHintsStatics>().MaxLines();
}

inline hstring KnownAdaptiveNotificationHints::MinLines()
{
    return get_activation_factory<KnownAdaptiveNotificationHints, IKnownAdaptiveNotificationHintsStatics>().MinLines();
}

inline hstring KnownAdaptiveNotificationHints::TextStacking()
{
    return get_activation_factory<KnownAdaptiveNotificationHints, IKnownAdaptiveNotificationHintsStatics>().TextStacking();
}

inline hstring KnownAdaptiveNotificationHints::Align()
{
    return get_activation_factory<KnownAdaptiveNotificationHints, IKnownAdaptiveNotificationHintsStatics>().Align();
}

inline hstring KnownAdaptiveNotificationTextStyles::Caption()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, IKnownAdaptiveNotificationTextStylesStatics>().Caption();
}

inline hstring KnownAdaptiveNotificationTextStyles::Body()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, IKnownAdaptiveNotificationTextStylesStatics>().Body();
}

inline hstring KnownAdaptiveNotificationTextStyles::Base()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, IKnownAdaptiveNotificationTextStylesStatics>().Base();
}

inline hstring KnownAdaptiveNotificationTextStyles::Subtitle()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, IKnownAdaptiveNotificationTextStylesStatics>().Subtitle();
}

inline hstring KnownAdaptiveNotificationTextStyles::Title()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, IKnownAdaptiveNotificationTextStylesStatics>().Title();
}

inline hstring KnownAdaptiveNotificationTextStyles::Subheader()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, IKnownAdaptiveNotificationTextStylesStatics>().Subheader();
}

inline hstring KnownAdaptiveNotificationTextStyles::Header()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, IKnownAdaptiveNotificationTextStylesStatics>().Header();
}

inline hstring KnownAdaptiveNotificationTextStyles::TitleNumeral()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, IKnownAdaptiveNotificationTextStylesStatics>().TitleNumeral();
}

inline hstring KnownAdaptiveNotificationTextStyles::SubheaderNumeral()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, IKnownAdaptiveNotificationTextStylesStatics>().SubheaderNumeral();
}

inline hstring KnownAdaptiveNotificationTextStyles::HeaderNumeral()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, IKnownAdaptiveNotificationTextStylesStatics>().HeaderNumeral();
}

inline hstring KnownAdaptiveNotificationTextStyles::CaptionSubtle()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, IKnownAdaptiveNotificationTextStylesStatics>().CaptionSubtle();
}

inline hstring KnownAdaptiveNotificationTextStyles::BodySubtle()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, IKnownAdaptiveNotificationTextStylesStatics>().BodySubtle();
}

inline hstring KnownAdaptiveNotificationTextStyles::BaseSubtle()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, IKnownAdaptiveNotificationTextStylesStatics>().BaseSubtle();
}

inline hstring KnownAdaptiveNotificationTextStyles::SubtitleSubtle()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, IKnownAdaptiveNotificationTextStylesStatics>().SubtitleSubtle();
}

inline hstring KnownAdaptiveNotificationTextStyles::TitleSubtle()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, IKnownAdaptiveNotificationTextStylesStatics>().TitleSubtle();
}

inline hstring KnownAdaptiveNotificationTextStyles::SubheaderSubtle()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, IKnownAdaptiveNotificationTextStylesStatics>().SubheaderSubtle();
}

inline hstring KnownAdaptiveNotificationTextStyles::SubheaderNumeralSubtle()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, IKnownAdaptiveNotificationTextStylesStatics>().SubheaderNumeralSubtle();
}

inline hstring KnownAdaptiveNotificationTextStyles::HeaderSubtle()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, IKnownAdaptiveNotificationTextStylesStatics>().HeaderSubtle();
}

inline hstring KnownAdaptiveNotificationTextStyles::HeaderNumeralSubtle()
{
    return get_activation_factory<KnownAdaptiveNotificationTextStyles, IKnownAdaptiveNotificationTextStylesStatics>().HeaderNumeralSubtle();
}

inline hstring KnownNotificationBindings::ToastGeneric()
{
    return get_activation_factory<KnownNotificationBindings, IKnownNotificationBindingsStatics>().ToastGeneric();
}

inline Notification::Notification() :
    Notification(activate_instance<Notification>())
{}

inline ScheduledTileNotification::ScheduledTileNotification(const Windows::Data::Xml::Dom::XmlDocument & content, const Windows::Foundation::DateTime & deliveryTime) :
    ScheduledTileNotification(get_activation_factory<ScheduledTileNotification, IScheduledTileNotificationFactory>().CreateScheduledTileNotification(content, deliveryTime))
{}

inline ScheduledToastNotification::ScheduledToastNotification(const Windows::Data::Xml::Dom::XmlDocument & content, const Windows::Foundation::DateTime & deliveryTime) :
    ScheduledToastNotification(get_activation_factory<ScheduledToastNotification, IScheduledToastNotificationFactory>().CreateScheduledToastNotification(content, deliveryTime))
{}

inline ScheduledToastNotification::ScheduledToastNotification(const Windows::Data::Xml::Dom::XmlDocument & content, const Windows::Foundation::DateTime & deliveryTime, const Windows::Foundation::TimeSpan & snoozeInterval, uint32_t maximumSnoozeCount) :
    ScheduledToastNotification(get_activation_factory<ScheduledToastNotification, IScheduledToastNotificationFactory>().CreateScheduledToastNotificationRecurring(content, deliveryTime, snoozeInterval, maximumSnoozeCount))
{}

inline TileFlyoutNotification::TileFlyoutNotification(const Windows::Data::Xml::Dom::XmlDocument & content) :
    TileFlyoutNotification(get_activation_factory<TileFlyoutNotification, ITileFlyoutNotificationFactory>().CreateTileFlyoutNotification(content))
{}

inline Windows::UI::Notifications::TileFlyoutUpdater TileFlyoutUpdateManager::CreateTileFlyoutUpdaterForApplication()
{
    return get_activation_factory<TileFlyoutUpdateManager, ITileFlyoutUpdateManagerStatics>().CreateTileFlyoutUpdaterForApplication();
}

inline Windows::UI::Notifications::TileFlyoutUpdater TileFlyoutUpdateManager::CreateTileFlyoutUpdaterForApplication(hstring_ref applicationId)
{
    return get_activation_factory<TileFlyoutUpdateManager, ITileFlyoutUpdateManagerStatics>().CreateTileFlyoutUpdaterForApplication(applicationId);
}

inline Windows::UI::Notifications::TileFlyoutUpdater TileFlyoutUpdateManager::CreateTileFlyoutUpdaterForSecondaryTile(hstring_ref tileId)
{
    return get_activation_factory<TileFlyoutUpdateManager, ITileFlyoutUpdateManagerStatics>().CreateTileFlyoutUpdaterForSecondaryTile(tileId);
}

inline Windows::Data::Xml::Dom::XmlDocument TileFlyoutUpdateManager::GetTemplateContent(Windows::UI::Notifications::TileFlyoutTemplateType type)
{
    return get_activation_factory<TileFlyoutUpdateManager, ITileFlyoutUpdateManagerStatics>().GetTemplateContent(type);
}

inline TileNotification::TileNotification(const Windows::Data::Xml::Dom::XmlDocument & content) :
    TileNotification(get_activation_factory<TileNotification, ITileNotificationFactory>().CreateTileNotification(content))
{}

inline Windows::UI::Notifications::TileUpdater TileUpdateManager::CreateTileUpdaterForApplication()
{
    return get_activation_factory<TileUpdateManager, ITileUpdateManagerStatics>().CreateTileUpdaterForApplication();
}

inline Windows::UI::Notifications::TileUpdater TileUpdateManager::CreateTileUpdaterForApplication(hstring_ref applicationId)
{
    return get_activation_factory<TileUpdateManager, ITileUpdateManagerStatics>().CreateTileUpdaterForApplication(applicationId);
}

inline Windows::UI::Notifications::TileUpdater TileUpdateManager::CreateTileUpdaterForSecondaryTile(hstring_ref tileId)
{
    return get_activation_factory<TileUpdateManager, ITileUpdateManagerStatics>().CreateTileUpdaterForSecondaryTile(tileId);
}

inline Windows::Data::Xml::Dom::XmlDocument TileUpdateManager::GetTemplateContent(Windows::UI::Notifications::TileTemplateType type)
{
    return get_activation_factory<TileUpdateManager, ITileUpdateManagerStatics>().GetTemplateContent(type);
}

inline Windows::UI::Notifications::TileUpdateManagerForUser TileUpdateManager::GetForUser(const Windows::System::User & user)
{
    return get_activation_factory<TileUpdateManager, ITileUpdateManagerStatics2>().GetForUser(user);
}

inline ToastNotification::ToastNotification(const Windows::Data::Xml::Dom::XmlDocument & content) :
    ToastNotification(get_activation_factory<ToastNotification, IToastNotificationFactory>().CreateToastNotification(content))
{}

inline Windows::UI::Notifications::ToastNotifier ToastNotificationManager::CreateToastNotifier()
{
    return get_activation_factory<ToastNotificationManager, IToastNotificationManagerStatics>().CreateToastNotifier();
}

inline Windows::UI::Notifications::ToastNotifier ToastNotificationManager::CreateToastNotifier(hstring_ref applicationId)
{
    return get_activation_factory<ToastNotificationManager, IToastNotificationManagerStatics>().CreateToastNotifier(applicationId);
}

inline Windows::Data::Xml::Dom::XmlDocument ToastNotificationManager::GetTemplateContent(Windows::UI::Notifications::ToastTemplateType type)
{
    return get_activation_factory<ToastNotificationManager, IToastNotificationManagerStatics>().GetTemplateContent(type);
}

inline Windows::UI::Notifications::ToastNotificationHistory ToastNotificationManager::History()
{
    return get_activation_factory<ToastNotificationManager, IToastNotificationManagerStatics2>().History();
}

inline Windows::UI::Notifications::ToastNotificationManagerForUser ToastNotificationManager::GetForUser(const Windows::System::User & user)
{
    return get_activation_factory<ToastNotificationManager, IToastNotificationManagerStatics4>().GetForUser(user);
}

inline void ToastNotificationManager::ConfigureNotificationMirroring(Windows::UI::Notifications::NotificationMirroring value)
{
    get_activation_factory<ToastNotificationManager, IToastNotificationManagerStatics4>().ConfigureNotificationMirroring(value);
}

}

}
