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
namespace g{namespace Fuse{namespace Controls{struct Page;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class Page :1677
// {
::g::Fuse::Controls::Panel_type* Page_typeof();
void Page__ctor_4_fn(Page* __this);
void Page__New2_fn(Page** __retval);
void Page__OnRestoreState_fn(Page* __this, uObject* state);
void Page__OnSaveState_fn(Page* __this, uObject** __retval);
void Page__RestoreState_fn(Page* __this, uObject* state);
void Page__SaveState_fn(Page* __this, uObject** __retval);
void Page__get_Title_fn(Page* __this, uString** __retval);
void Page__set_Title_fn(Page* __this, uString* value);

struct Page : ::g::Fuse::Controls::Panel
{
    void ctor_4();
    void OnRestoreState(uObject* state);
    uObject* OnSaveState();
    void RestoreState(uObject* state);
    uObject* SaveState();
    uString* Title();
    void Title(uString* value);
    static Page* New2();
};
// }

}}} // ::g::Fuse::Controls
