// This file was generated based on '/usr/local/share/uno/Packages/Android/0.23.1/Android/android/webkit/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>

namespace g{
namespace Android{
namespace android{
namespace webkit{

// public abstract extern interface WebChromeClientDLRCustomViewCallback :5333
// {
uInterfaceType* WebChromeClientDLRCustomViewCallback_typeof();

struct WebChromeClientDLRCustomViewCallback
{
    void(*fp_onCustomViewHidden)(uObject*);
    static void onCustomViewHidden(const uInterface& __this) { __this.VTable<WebChromeClientDLRCustomViewCallback>()->fp_onCustomViewHidden(__this); }
};
// }

}}}} // ::g::Android::android::webkit
