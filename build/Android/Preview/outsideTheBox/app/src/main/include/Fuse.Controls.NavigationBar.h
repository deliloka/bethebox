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
namespace g{namespace Fuse{namespace Controls{struct NavigationBar;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class NavigationBar :1412
// {
::g::Fuse::Controls::Panel_type* NavigationBar_typeof();
void NavigationBar__ctor_4_fn(NavigationBar* __this);
void NavigationBar__New2_fn(NavigationBar** __retval);

struct NavigationBar : ::g::Fuse::Controls::Panel
{
    void ctor_4();
    static NavigationBar* New2();
};
// }

}}} // ::g::Fuse::Controls
