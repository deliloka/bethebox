// This file was generated based on '/Users/n07101/dev/fuseProjects/outsideTheBox/build/Android/Preview/cache/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Factory.h>
namespace g{struct MainView;}
namespace g{struct MainView__Factory;}
namespace g{struct outsideTheBox_FuseDrawingSolidColor_float4_Color_Property;}

namespace g{

// public partial sealed class MainView.Factory :63
// {
::g::Uno::UX::Factory_type* MainView__Factory_typeof();
void MainView__Factory__ctor_1_fn(MainView__Factory* __this, ::g::MainView* parent);
void MainView__Factory__New1_fn(MainView__Factory* __this, uObject** __retval);
void MainView__Factory__New2_fn(::g::MainView* parent, MainView__Factory** __retval);

struct MainView__Factory : ::g::Uno::UX::Factory
{
    uStrong< ::g::MainView*> __parent1;
    uStrong< ::g::outsideTheBox_FuseDrawingSolidColor_float4_Color_Property*> color_Color_inst;

    void ctor_1(::g::MainView* parent);
    static MainView__Factory* New2(::g::MainView* parent);
};
// }

} // ::g
