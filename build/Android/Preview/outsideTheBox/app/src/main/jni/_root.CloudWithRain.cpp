// This file was generated based on '/Users/n07101/dev/fuseProjects/outsideTheBox/build/Android/Preview/cache/CloudWithRain.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Cloud.h>
#include <_root.CloudWithRain.h>
#include <_root.outsideTheBox_FuseElementsElement_float_Opacity_Property.h>
#include <_root.RaindropRow.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Cycle-1.h>
#include <Fuse.Animations.CycleWaveform.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Node.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
static uString* STRINGS[5];
static uType* TYPES[10];

namespace g{

// public partial sealed class CloudWithRain :1
// {
// static CloudWithRain() :9
static void CloudWithRain__cctor_5_fn(uType* __type)
{
}

::g::Fuse::Controls::Panel_type* CloudWithRain_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 107;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(CloudWithRain);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("CloudWithRain", options);
    type->SetBase(::g::Fuse::Controls::Grid_typeof());
    type->fp_ctor_ = (void*)CloudWithRain__New3_fn;
    type->fp_cctor_ = CloudWithRain__cctor_5_fn;
    type->interface7.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__FuseNavigationINavigationPanelAddChild_fn;
    type->interface7.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__FuseNavigationINavigationPanelAddChildAt_fn;
    type->interface7.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__FuseNavigationINavigationPanelRemoveChild_fn;
    type->interface7.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__FuseNavigationINavigationPanelGetChild_fn;
    type->interface8.fp_Add = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Panel__FuseIObjectContainerAdd_fn;
    type->interface8.fp_Insert = (void(*)(uObject*, int*, uObject*))::g::Fuse::Controls::Panel__FuseIObjectContainerInsert_fn;
    type->interface8.fp_Remove = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Panel__FuseIObjectContainerRemove_fn;
    type->interface8.fp_BeginRemove = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Panel__FuseIObjectContainerBeginRemove_fn;
    type->interface7.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__FuseNavigationINavigationPanelget_ChildCount_fn;
    type->interface7.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface7.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface7.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface7.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface7.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface7.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface7.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface7.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface7.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface7.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface7.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface2.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface4.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface3.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface6.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface5.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface5.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface5.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface5.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::STRINGS[0] = uString::Const("4*,1*,1*,1*");
    ::STRINGS[1] = uString::Const("raindropRow1");
    ::STRINGS[2] = uString::Const("raindropRow2");
    ::STRINGS[3] = uString::Const("raindropRow3");
    ::STRINGS[4] = uString::Const("raindropRow4");
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[1] = ::g::Fuse::Animations::Cycle_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[2] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[3] = ::g::Fuse::Controls::Grid_typeof();
    ::TYPES[4] = ::g::Fuse::Node_typeof();
    ::TYPES[5] = ::g::Fuse::Triggers::WhileBool_typeof();
    ::TYPES[6] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[7] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[8] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[9] = ::g::Fuse::Behavior_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::IObjectContainer_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8));
    type->SetFields(101,
        ::g::RaindropRow_typeof(), offsetof(::g::CloudWithRain, raindropRow1), 0,
        ::g::RaindropRow_typeof(), offsetof(::g::CloudWithRain, raindropRow2), 0,
        ::g::RaindropRow_typeof(), offsetof(::g::CloudWithRain, raindropRow3), 0,
        ::g::outsideTheBox_FuseElementsElement_float_Opacity_Property_typeof(), offsetof(::g::CloudWithRain, raindropRow3_Opacity_inst), 0,
        ::g::RaindropRow_typeof(), offsetof(::g::CloudWithRain, raindropRow4), 0,
        ::g::outsideTheBox_FuseElementsElement_float_Opacity_Property_typeof(), offsetof(::g::CloudWithRain, raindropRow4_Opacity_inst), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CloudWithRain__New3_fn, 0, true, CloudWithRain_typeof(), 0));
    return type;
}

// public CloudWithRain() :12
void CloudWithRain__ctor_5_fn(CloudWithRain* __this)
{
    __this->ctor_5();
}

// private void InitializeUX() :16
void CloudWithRain__InitializeUX_fn(CloudWithRain* __this)
{
    __this->InitializeUX();
}

// public CloudWithRain New() :12
void CloudWithRain__New3_fn(CloudWithRain** __retval)
{
    *__retval = CloudWithRain::New3();
}

// public CloudWithRain() [instance] :12
void CloudWithRain::ctor_5()
{
    uStackFrame __("CloudWithRain", ".ctor()");
    ctor_4();
    InitializeUX();
}

// private void InitializeUX() [instance] :16
void CloudWithRain::InitializeUX()
{
    uStackFrame __("CloudWithRain", "InitializeUX()");
    raindropRow3 = ::g::RaindropRow::New3();
    raindropRow3_Opacity_inst = ::g::outsideTheBox_FuseElementsElement_float_Opacity_Property::New1(raindropRow3);
    raindropRow4 = ::g::RaindropRow::New3();
    raindropRow4_Opacity_inst = ::g::outsideTheBox_FuseElementsElement_float_Opacity_Property::New1(raindropRow4);
    ::g::Cloud* temp = ::g::Cloud::New2();
    raindropRow1 = ::g::RaindropRow::New3();
    raindropRow2 = ::g::RaindropRow::New3();
    ::g::Fuse::Triggers::WhileTrue* temp1 = ::g::Fuse::Triggers::WhileTrue::New1();
    ::g::Fuse::Animations::Cycle* temp2 = (::g::Fuse::Animations::Cycle*)::g::Fuse::Animations::Cycle::New1(::TYPES[1/*Fuse.Animations.Cycle<float>*/], raindropRow3_Opacity_inst);
    ::g::Fuse::Animations::Cycle* temp3 = (::g::Fuse::Animations::Cycle*)::g::Fuse::Animations::Cycle::New1(::TYPES[1/*Fuse.Animations.Cycle<float>*/], raindropRow4_Opacity_inst);
    Rows(::STRINGS[0/*"4*,1*,1*,1*"*/]);
    ColumnCount(1);
    Width(500.0f);
    Alignment(8);
    Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Fuse::Controls::Grid::SetRow(this, 1);
    ::g::Fuse::Controls::Grid::SetRow(temp, 0);
    uPtr(raindropRow1)->Width(100.0f);
    uPtr(raindropRow1)->Alignment(12);
    uPtr(raindropRow1)->Name(::STRINGS[1/*"raindropRow1"*/]);
    ::g::Fuse::Controls::Grid::SetRow(raindropRow1, 0);
    uPtr(raindropRow2)->Width(100.0f);
    uPtr(raindropRow2)->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    uPtr(raindropRow2)->Name(::STRINGS[2/*"raindropRow2"*/]);
    ::g::Fuse::Controls::Grid::SetRow(raindropRow2, 1);
    uPtr(raindropRow3)->Width(100.0f);
    uPtr(raindropRow3)->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    uPtr(raindropRow3)->Name(::STRINGS[3/*"raindropRow3"*/]);
    ::g::Fuse::Controls::Grid::SetRow(raindropRow3, 2);
    uPtr(raindropRow4)->Width(100.0f);
    uPtr(raindropRow4)->Margin(::g::Uno::Float4__New2(30.0f, 0.0f, 0.0f, 0.0f));
    uPtr(raindropRow4)->Name(::STRINGS[4/*"raindropRow4"*/]);
    ::g::Fuse::Controls::Grid::SetRow(raindropRow4, 3);
    temp1->Value1(true);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Animations.Animator*/])), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Animations.Animator*/])), temp3);
    temp2->Low(1.0f);
    temp2->High(0.5f);
    temp2->Frequency(1.0);
    temp2->Waveform(2);
    temp3->Low(0.5f);
    temp3->High(0.0f);
    temp3->Frequency(1.0);
    temp3->Waveform(2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[4/*Fuse.Node*/])), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[4/*Fuse.Node*/])), raindropRow1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[4/*Fuse.Node*/])), raindropRow2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[4/*Fuse.Node*/])), raindropRow3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[4/*Fuse.Node*/])), raindropRow4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[9/*Fuse.Behavior*/])), temp1);
}

// public CloudWithRain New() [static] :12
CloudWithRain* CloudWithRain::New3()
{
    CloudWithRain* obj1 = (CloudWithRain*)uNew(CloudWithRain_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

} // ::g
