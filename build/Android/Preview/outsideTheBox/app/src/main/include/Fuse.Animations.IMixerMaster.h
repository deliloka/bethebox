// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.23.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Animations{

// internal abstract interface IMixerMaster :1538
// {
uInterfaceType* IMixerMaster_typeof();

struct IMixerMaster
{
    void(*fp_Complete)(uObject*);
    static void Complete(const uInterface& __this) { __this.VTable<IMixerMaster>()->fp_Complete(__this); }
};
// }

}}} // ::g::Fuse::Animations
