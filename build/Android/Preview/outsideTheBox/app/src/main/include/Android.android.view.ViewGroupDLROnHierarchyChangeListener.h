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

// public abstract extern interface ViewGroupDLROnHierarchyChangeListener :27433
// {
uInterfaceType* ViewGroupDLROnHierarchyChangeListener_typeof();

struct ViewGroupDLROnHierarchyChangeListener
{
    void(*fp_onChildViewAdded)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::View*);
    void(*fp_onChildViewRemoved)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::View*);
    static void onChildViewAdded(const uInterface& __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::View* arg1) { __this.VTable<ViewGroupDLROnHierarchyChangeListener>()->fp_onChildViewAdded(__this, arg0, arg1); }
    static void onChildViewRemoved(const uInterface& __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::View* arg1) { __this.VTable<ViewGroupDLROnHierarchyChangeListener>()->fp_onChildViewRemoved(__this, arg0, arg1); }
};
// }

}}}} // ::g::Android::android::view