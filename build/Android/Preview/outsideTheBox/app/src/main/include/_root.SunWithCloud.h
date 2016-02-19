// This file was generated based on '/Users/n07101/dev/fuseProjects/outsideTheBox/build/Android/Preview/cache/SunWithCloud.g.uno'.
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
namespace g{namespace Fuse{struct Translation;}}
namespace g{struct outsideTheBox_FuseTranslation_float_X_Property;}
namespace g{struct SunWithCloud;}

namespace g{

// public partial sealed class SunWithCloud :1
// {
::g::Fuse::Controls::Panel_type* SunWithCloud_typeof();
void SunWithCloud__ctor_4_fn(SunWithCloud* __this);
void SunWithCloud__InitializeUX_fn(SunWithCloud* __this);
void SunWithCloud__New2_fn(SunWithCloud** __retval);

struct SunWithCloud : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Translation*> cloudImage;
    uStrong< ::g::outsideTheBox_FuseTranslation_float_X_Property*> cloudImage_X_inst;

    void ctor_4();
    void InitializeUX();
    static SunWithCloud* New2();
};
// }

} // ::g
