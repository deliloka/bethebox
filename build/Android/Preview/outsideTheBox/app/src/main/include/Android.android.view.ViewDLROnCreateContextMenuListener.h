// This file was generated based on '/usr/local/share/uno/Packages/Android/0.23.1/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public abstract extern interface ViewDLROnCreateContextMenuListener :26454
// {
uInterfaceType* ViewDLROnCreateContextMenuListener_typeof();

struct ViewDLROnCreateContextMenuListener
{
    void(*fp_onCreateContextMenu)(uObject*, uObject*, ::g::Android::android::view::View*, uObject*);
    static void onCreateContextMenu(const uInterface& __this, uObject* arg0, ::g::Android::android::view::View* arg1, uObject* arg2) { __this.VTable<ViewDLROnCreateContextMenuListener>()->fp_onCreateContextMenu(__this, arg0, arg1, arg2); }
};
// }

}}}} // ::g::Android::android::view
