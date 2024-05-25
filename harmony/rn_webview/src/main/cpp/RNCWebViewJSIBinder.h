#pragma once

// This file was generated.

#include "RNOHCorePackage/ComponentBinders/ViewComponentJSIBinder.h"

namespace rnoh {
class RNCWebViewJSIBinder : public ViewComponentJSIBinder {
  protected:
    facebook::jsi::Object createNativeProps(facebook::jsi::Runtime &rt) override {
        auto object = ViewComponentJSIBinder::createNativeProps(rt);
        object.setProperty(rt, "allowFileAccess", true);
        object.setProperty(rt, "allowsProtectedMedia", true);
        object.setProperty(rt, "allowsFullscreenVideo", true);
        object.setProperty(rt, "androidLayerType", true);
        object.setProperty(rt, "cacheMode", true);
        object.setProperty(rt, "domStorageEnabled", true);
        object.setProperty(rt, "downloadingMessage", true);
        object.setProperty(rt, "forceDarkOn", true);
        object.setProperty(rt, "geolocationEnabled", true);
        object.setProperty(rt, "lackPermissionToDownloadMessage", true);
        object.setProperty(rt, "messagingModuleName", true);
        object.setProperty(rt, "minimumFontSize", true);
        object.setProperty(rt, "mixedContentMode", true);
        object.setProperty(rt, "nestedScrollEnabled", true);
        object.setProperty(rt, "overScrollMode", true);
        object.setProperty(rt, "saveFormDataDisabled", true);
        object.setProperty(rt, "scalesPageToFit", true);
        object.setProperty(rt, "setBuiltInZoomControls", true);
        object.setProperty(rt, "setDisplayZoomControls", true);
        object.setProperty(rt, "setSupportMultipleWindows", true);
        object.setProperty(rt, "textZoom", true);
        object.setProperty(rt, "thirdPartyCookiesEnabled", true);
        object.setProperty(rt, "hasOnScroll", true);
        object.setProperty(rt, "injectedJavaScriptObject", true);
        object.setProperty(rt, "allowingReadAccessToURL", true);
        object.setProperty(rt, "allowsBackForwardNavigationGestures", true);
        object.setProperty(rt, "allowsInlineMediaPlayback", true);
        object.setProperty(rt, "allowsAirPlayForMediaPlayback", true);
        object.setProperty(rt, "allowsLinkPreview", true);
        object.setProperty(rt, "automaticallyAdjustContentInsets", true);
        object.setProperty(rt, "autoManageStatusBarEnabled", true);
        object.setProperty(rt, "bounces", true);
        object.setProperty(rt, "contentInset", "Object");
        object.setProperty(rt, "contentInsetAdjustmentBehavior", true);
        object.setProperty(rt, "contentMode", true);
        object.setProperty(rt, "dataDetectorTypes", true);
        object.setProperty(rt, "decelerationRate", true);
        object.setProperty(rt, "directionalLockEnabled", true);
        object.setProperty(rt, "enableApplePay", true);
        object.setProperty(rt, "hideKeyboardAccessoryView", true);
        object.setProperty(rt, "keyboardDisplayRequiresUserAction", true);
        object.setProperty(rt, "limitsNavigationsToAppBoundDomains", true);
        object.setProperty(rt, "mediaCapturePermissionGrantType", true);
        object.setProperty(rt, "pagingEnabled", true);
        object.setProperty(rt, "pullToRefreshEnabled", true);
        object.setProperty(rt, "scrollEnabled", true);
        object.setProperty(rt, "sharedCookiesEnabled", true);
        object.setProperty(rt, "textInteractionEnabled", true);
        object.setProperty(rt, "useSharedProcessPool", true);
        object.setProperty(rt, "menuItems", true);
        object.setProperty(rt, "suppressMenuItems", true);
        object.setProperty(rt, "hasOnFileDownload", true);
        object.setProperty(rt, "fraudulentWebsiteWarningEnabled", true);
        object.setProperty(rt, "allowFileAccessFromFileURLs", true);
        object.setProperty(rt, "allowUniversalAccessFromFileURLs", true);
        object.setProperty(rt, "applicationNameForUserAgent", true);
        object.setProperty(rt, "basicAuthCredential", "Object");
        object.setProperty(rt, "cacheEnabled", true);
        object.setProperty(rt, "incognito", true);
        object.setProperty(rt, "injectedJavaScript", true);
        object.setProperty(rt, "injectedJavaScriptBeforeContentLoaded", true);
        object.setProperty(rt, "injectedJavaScriptForMainFrameOnly", true);
        object.setProperty(rt, "injectedJavaScriptBeforeContentLoadedForMainFrameOnly", true);
        object.setProperty(rt, "javaScriptCanOpenWindowsAutomatically", true);
        object.setProperty(rt, "javaScriptEnabled", true);
        object.setProperty(rt, "webviewDebuggingEnabled", true);
        object.setProperty(rt, "mediaPlaybackRequiresUserAction", true);
        object.setProperty(rt, "messagingEnabled", true);
        object.setProperty(rt, "shouldStartLoadWithRequestEnabled", true);
        object.setProperty(rt, "hasOnOpenWindowEvent", true);
        object.setProperty(rt, "showsHorizontalScrollIndicator", true);
        object.setProperty(rt, "showsVerticalScrollIndicator", true);
        object.setProperty(rt, "newSource", "Object");
        object.setProperty(rt, "userAgent", true);
        return object;
    }

    facebook::jsi::Object createBubblingEventTypes(facebook::jsi::Runtime &rt) override {
        facebook::jsi::Object events(rt);
        return events;
    }

    facebook::jsi::Object createDirectEventTypes(facebook::jsi::Runtime &rt) override {
        facebook::jsi::Object events(rt);
        events.setProperty(rt, "topContentSizeChange", createDirectEvent(rt, "onContentSizeChange"));
        events.setProperty(rt, "topRenderProcessGone", createDirectEvent(rt, "onRenderProcessGone"));
        events.setProperty(rt, "topContentProcessDidTerminate", createDirectEvent(rt, "onContentProcessDidTerminate"));
        events.setProperty(rt, "topCustomMenuSelection", createDirectEvent(rt, "onCustomMenuSelection"));
        events.setProperty(rt, "topFileDownload", createDirectEvent(rt, "onFileDownload"));
        events.setProperty(rt, "topLoadingError", createDirectEvent(rt, "onLoadingError"));
        events.setProperty(rt, "topLoadingFinish", createDirectEvent(rt, "onLoadingFinish"));
        events.setProperty(rt, "topLoadingProgress", createDirectEvent(rt, "onLoadingProgress"));
        events.setProperty(rt, "topLoadingStart", createDirectEvent(rt, "onLoadingStart"));
        events.setProperty(rt, "topHttpError", createDirectEvent(rt, "onHttpError"));
        events.setProperty(rt, "topMessage", createDirectEvent(rt, "onMessage"));
        events.setProperty(rt, "topOpenWindow", createDirectEvent(rt, "onOpenWindow"));
        events.setProperty(rt, "topScroll", createDirectEvent(rt, "onScroll"));
        events.setProperty(rt, "topShouldStartLoadWithRequest", createDirectEvent(rt, "onShouldStartLoadWithRequest"));
        return events;
    }
};
} // namespace rnoh
