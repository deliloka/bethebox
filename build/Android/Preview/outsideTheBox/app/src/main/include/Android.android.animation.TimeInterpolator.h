// This file was generated based on '/usr/local/share/uno/Packages/Android/0.23.1/Android/android/animation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>

namespace g{
namespace Android{
namespace android{
namespace animation{

// public abstract extern interface TimeInterpolator :2403
// {
uInterfaceType* TimeInterpolator_typeof();

struct TimeInterpolator
{
    void(*fp_getInterpolation)(uObject*, float*, float*);
    static float getInterpolation(const uInterface& __this, float arg0) { float __retval; return __this.VTable<TimeInterpolator>()->fp_getInterpolation(__this, &arg0, &__retval), __retval; }
};
// }

}}}} // ::g::Android::android::animation
