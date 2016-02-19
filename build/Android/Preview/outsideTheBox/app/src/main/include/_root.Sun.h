// This file was generated based on '/Users/n07101/dev/fuseProjects/outsideTheBox/build/Android/Preview/cache/Sun.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{struct Scaling;}}
namespace g{namespace Fuse{struct Translation;}}
namespace g{struct outsideTheBox_FuseScaling_float_Factor_Property;}
namespace g{struct Sun;}

namespace g{

// public partial sealed class Sun :1
// {
::g::Fuse::Controls::Panel_type* Sun_typeof();
void Sun__ctor_5_fn(Sun* __this);
void Sun__InitializeUX_fn(Sun* __this);
void Sun__New3_fn(Sun** __retval);

struct Sun : ::g::Fuse::Controls::Image
{
    uStrong< ::g::Fuse::Translation*> sunImage;
    uStrong< ::g::Fuse::Scaling*> sunScaling;
    uStrong< ::g::outsideTheBox_FuseScaling_float_Factor_Property*> sunScaling_Factor_inst;

    void ctor_5();
    void InitializeUX();
    static Sun* New3();
};
// }

} // ::g
