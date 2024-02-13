// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.
//------------------------------------------------------------------------
//
//  Abstract:
//
//      XAML types.
//      NOTE: This file was generated by a tool.
//
//------------------------------------------------------------------------

#include "XamlShutdownCompletedOnThreadEventArgs.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::XamlShutdownCompletedOnThreadEventArgsGenerated::XamlShutdownCompletedOnThreadEventArgsGenerated()
{
}

DirectUI::XamlShutdownCompletedOnThreadEventArgsGenerated::~XamlShutdownCompletedOnThreadEventArgsGenerated()
{
}

HRESULT DirectUI::XamlShutdownCompletedOnThreadEventArgsGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::XamlShutdownCompletedOnThreadEventArgs)))
    {
        *ppObject = static_cast<DirectUI::XamlShutdownCompletedOnThreadEventArgs*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Hosting::IXamlShutdownCompletedOnThreadEventArgs)))
    {
        *ppObject = ctl::interface_cast<ABI::Microsoft::UI::Xaml::Hosting::IXamlShutdownCompletedOnThreadEventArgs>(this);
    }
    else
    {
        RRETURN(ctl::WeakReferenceSource::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::XamlShutdownCompletedOnThreadEventArgsGenerated::GetDispatcherQueueDeferral(_Outptr_ ABI::Windows::Foundation::IDeferral** ppResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "XamlShutdownCompletedOnThreadEventArgs_GetDispatcherQueueDeferral", 0);
    }
    ARG_VALIDRETURNPOINTER(ppResult);
    IFC(CheckThread());
    IFC(static_cast<XamlShutdownCompletedOnThreadEventArgs*>(this)->GetDispatcherQueueDeferralImpl(ppResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "XamlShutdownCompletedOnThreadEventArgs_GetDispatcherQueueDeferral", hr);
    }
    RRETURN(hr);
}


namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_XamlShutdownCompletedOnThreadEventArgs()
    {
        RRETURN(ctl::ActivationFactoryCreator<ctl::AbstractActivationFactory>::CreateActivationFactory());
    }
}
