// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.23.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Controls{struct NativeViewHost;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class NativeViewHost :1387
// {
::g::Fuse::Controls::Panel_type* NativeViewHost_typeof();
void NativeViewHost__ctor_4_fn(NativeViewHost* __this);
void NativeViewHost__New2_fn(NativeViewHost** __retval);
void NativeViewHost__OnApplyStyle_fn(NativeViewHost* __this, uObject* target);

struct NativeViewHost : ::g::Fuse::Controls::Panel
{
    void ctor_4();
    static NativeViewHost* New2();
};
// }

}}} // ::g::Fuse::Controls
