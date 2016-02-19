// This file was generated based on '/Users/n07101/dev/fuseProjects/outsideTheBox/build/Android/Preview/cache/CloudWithRain.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{struct CloudWithRain;}
namespace g{struct outsideTheBox_FuseElementsElement_float_Opacity_Property;}
namespace g{struct RaindropRow;}

namespace g{

// public partial sealed class CloudWithRain :1
// {
::g::Fuse::Controls::Panel_type* CloudWithRain_typeof();
void CloudWithRain__ctor_5_fn(CloudWithRain* __this);
void CloudWithRain__InitializeUX_fn(CloudWithRain* __this);
void CloudWithRain__New3_fn(CloudWithRain** __retval);

struct CloudWithRain : ::g::Fuse::Controls::Grid
{
    uStrong< ::g::RaindropRow*> raindropRow1;
    uStrong< ::g::RaindropRow*> raindropRow2;
    uStrong< ::g::RaindropRow*> raindropRow3;
    uStrong< ::g::outsideTheBox_FuseElementsElement_float_Opacity_Property*> raindropRow3_Opacity_inst;
    uStrong< ::g::RaindropRow*> raindropRow4;
    uStrong< ::g::outsideTheBox_FuseElementsElement_float_Opacity_Property*> raindropRow4_Opacity_inst;

    void ctor_5();
    void InitializeUX();
    static CloudWithRain* New3();
};
// }

} // ::g
