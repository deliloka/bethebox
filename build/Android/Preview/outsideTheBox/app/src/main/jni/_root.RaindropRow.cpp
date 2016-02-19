// This file was generated based on '/Users/n07101/dev/fuseProjects/outsideTheBox/build/Android/Preview/cache/RaindropRow.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.outsideTheBox_FuseTranslation_float_X_Property.h>
#include <_root.outsideTheBox_FuseTranslation_float_Y_Property.h>
#include <_root.Raindrop.h>
#include <_root.RaindropRow.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Cycle-1.h>
#include <Fuse.Animations.CycleWaveform.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Node.h>
#include <Fuse.Transform.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
static uString* STRINGS[5];
static uType* TYPES[10];

namespace g{

// public partial sealed class RaindropRow :1
// {
// static RaindropRow() :23
static void RaindropRow__cctor_5_fn(uType* __type)
{
}

::g::Fuse::Controls::Panel_type* RaindropRow_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 121;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(RaindropRow);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("RaindropRow", options);
    type->SetBase(::g::Fuse::Controls::Grid_typeof());
    type->fp_ctor_ = (void*)RaindropRow__New3_fn;
    type->fp_cctor_ = RaindropRow__cctor_5_fn;
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
    ::STRINGS[0] = uString::Const("drop1");
    ::STRINGS[1] = uString::Const("drop2");
    ::STRINGS[2] = uString::Const("drop3");
    ::STRINGS[3] = uString::Const("drop4");
    ::STRINGS[4] = uString::Const("drop5");
    ::TYPES[0] = ::g::Fuse::Animations::Cycle_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[1] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[2] = ::g::Fuse::Controls::Grid_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[4] = ::g::Fuse::Transform_typeof();
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
        ::g::Raindrop_typeof(), offsetof(::g::RaindropRow, drop1), 0,
        ::g::Fuse::Translation_typeof(), offsetof(::g::RaindropRow, drop1Translation), 0,
        ::g::outsideTheBox_FuseTranslation_float_X_Property_typeof(), offsetof(::g::RaindropRow, drop1Translation_X_inst), 0,
        ::g::outsideTheBox_FuseTranslation_float_Y_Property_typeof(), offsetof(::g::RaindropRow, drop1Translation_Y_inst), 0,
        ::g::Raindrop_typeof(), offsetof(::g::RaindropRow, drop2), 0,
        ::g::Fuse::Translation_typeof(), offsetof(::g::RaindropRow, drop2Translation), 0,
        ::g::outsideTheBox_FuseTranslation_float_X_Property_typeof(), offsetof(::g::RaindropRow, drop2Translation_X_inst), 0,
        ::g::outsideTheBox_FuseTranslation_float_Y_Property_typeof(), offsetof(::g::RaindropRow, drop2Translation_Y_inst), 0,
        ::g::Raindrop_typeof(), offsetof(::g::RaindropRow, drop3), 0,
        ::g::Fuse::Translation_typeof(), offsetof(::g::RaindropRow, drop3Translation), 0,
        ::g::outsideTheBox_FuseTranslation_float_X_Property_typeof(), offsetof(::g::RaindropRow, drop3Translation_X_inst), 0,
        ::g::outsideTheBox_FuseTranslation_float_Y_Property_typeof(), offsetof(::g::RaindropRow, drop3Translation_Y_inst), 0,
        ::g::Raindrop_typeof(), offsetof(::g::RaindropRow, drop4), 0,
        ::g::Fuse::Translation_typeof(), offsetof(::g::RaindropRow, drop4Translation), 0,
        ::g::outsideTheBox_FuseTranslation_float_X_Property_typeof(), offsetof(::g::RaindropRow, drop4Translation_X_inst), 0,
        ::g::outsideTheBox_FuseTranslation_float_Y_Property_typeof(), offsetof(::g::RaindropRow, drop4Translation_Y_inst), 0,
        ::g::Raindrop_typeof(), offsetof(::g::RaindropRow, drop5), 0,
        ::g::Fuse::Translation_typeof(), offsetof(::g::RaindropRow, drop5Translation), 0,
        ::g::outsideTheBox_FuseTranslation_float_X_Property_typeof(), offsetof(::g::RaindropRow, drop5Translation_X_inst), 0,
        ::g::outsideTheBox_FuseTranslation_float_Y_Property_typeof(), offsetof(::g::RaindropRow, drop5Translation_Y_inst), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)RaindropRow__New3_fn, 0, true, RaindropRow_typeof(), 0));
    return type;
}

// public RaindropRow() :26
void RaindropRow__ctor_5_fn(RaindropRow* __this)
{
    __this->ctor_5();
}

// private void InitializeUX() :30
void RaindropRow__InitializeUX_fn(RaindropRow* __this)
{
    __this->InitializeUX();
}

// public RaindropRow New() :26
void RaindropRow__New3_fn(RaindropRow** __retval)
{
    *__retval = RaindropRow::New3();
}

// public RaindropRow() [instance] :26
void RaindropRow::ctor_5()
{
    uStackFrame __("RaindropRow", ".ctor()");
    ctor_4();
    InitializeUX();
}

// private void InitializeUX() [instance] :30
void RaindropRow::InitializeUX()
{
    uStackFrame __("RaindropRow", "InitializeUX()");
    drop1Translation = ::g::Fuse::Translation::New1();
    drop1Translation_Y_inst = ::g::outsideTheBox_FuseTranslation_float_Y_Property::New1(drop1Translation);
    drop1Translation_X_inst = ::g::outsideTheBox_FuseTranslation_float_X_Property::New1(drop1Translation);
    drop2Translation = ::g::Fuse::Translation::New1();
    drop2Translation_Y_inst = ::g::outsideTheBox_FuseTranslation_float_Y_Property::New1(drop2Translation);
    drop2Translation_X_inst = ::g::outsideTheBox_FuseTranslation_float_X_Property::New1(drop2Translation);
    drop3Translation = ::g::Fuse::Translation::New1();
    drop3Translation_Y_inst = ::g::outsideTheBox_FuseTranslation_float_Y_Property::New1(drop3Translation);
    drop3Translation_X_inst = ::g::outsideTheBox_FuseTranslation_float_X_Property::New1(drop3Translation);
    drop4Translation = ::g::Fuse::Translation::New1();
    drop4Translation_Y_inst = ::g::outsideTheBox_FuseTranslation_float_Y_Property::New1(drop4Translation);
    drop4Translation_X_inst = ::g::outsideTheBox_FuseTranslation_float_X_Property::New1(drop4Translation);
    drop5Translation = ::g::Fuse::Translation::New1();
    drop5Translation_Y_inst = ::g::outsideTheBox_FuseTranslation_float_Y_Property::New1(drop5Translation);
    drop5Translation_X_inst = ::g::outsideTheBox_FuseTranslation_float_X_Property::New1(drop5Translation);
    drop1 = ::g::Raindrop::New2();
    drop2 = ::g::Raindrop::New2();
    drop3 = ::g::Raindrop::New2();
    drop4 = ::g::Raindrop::New2();
    drop5 = ::g::Raindrop::New2();
    ::g::Fuse::Triggers::WhileTrue* temp = ::g::Fuse::Triggers::WhileTrue::New1();
    ::g::Fuse::Animations::Cycle* temp1 = (::g::Fuse::Animations::Cycle*)::g::Fuse::Animations::Cycle::New1(::TYPES[0/*Fuse.Animations.Cycle<float>*/], drop1Translation_Y_inst);
    ::g::Fuse::Animations::Cycle* temp2 = (::g::Fuse::Animations::Cycle*)::g::Fuse::Animations::Cycle::New1(::TYPES[0/*Fuse.Animations.Cycle<float>*/], drop1Translation_X_inst);
    ::g::Fuse::Animations::Cycle* temp3 = (::g::Fuse::Animations::Cycle*)::g::Fuse::Animations::Cycle::New1(::TYPES[0/*Fuse.Animations.Cycle<float>*/], drop2Translation_Y_inst);
    ::g::Fuse::Animations::Cycle* temp4 = (::g::Fuse::Animations::Cycle*)::g::Fuse::Animations::Cycle::New1(::TYPES[0/*Fuse.Animations.Cycle<float>*/], drop2Translation_X_inst);
    ::g::Fuse::Animations::Cycle* temp5 = (::g::Fuse::Animations::Cycle*)::g::Fuse::Animations::Cycle::New1(::TYPES[0/*Fuse.Animations.Cycle<float>*/], drop3Translation_Y_inst);
    ::g::Fuse::Animations::Cycle* temp6 = (::g::Fuse::Animations::Cycle*)::g::Fuse::Animations::Cycle::New1(::TYPES[0/*Fuse.Animations.Cycle<float>*/], drop3Translation_X_inst);
    ::g::Fuse::Animations::Cycle* temp7 = (::g::Fuse::Animations::Cycle*)::g::Fuse::Animations::Cycle::New1(::TYPES[0/*Fuse.Animations.Cycle<float>*/], drop4Translation_Y_inst);
    ::g::Fuse::Animations::Cycle* temp8 = (::g::Fuse::Animations::Cycle*)::g::Fuse::Animations::Cycle::New1(::TYPES[0/*Fuse.Animations.Cycle<float>*/], drop4Translation_X_inst);
    ::g::Fuse::Animations::Cycle* temp9 = (::g::Fuse::Animations::Cycle*)::g::Fuse::Animations::Cycle::New1(::TYPES[0/*Fuse.Animations.Cycle<float>*/], drop5Translation_Y_inst);
    ::g::Fuse::Animations::Cycle* temp10 = (::g::Fuse::Animations::Cycle*)::g::Fuse::Animations::Cycle::New1(::TYPES[0/*Fuse.Animations.Cycle<float>*/], drop5Translation_X_inst);
    ColumnCount(5);
    uPtr(drop1)->Name(::STRINGS[0/*"drop1"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(drop1)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[4/*Fuse.Transform*/])), drop1Translation);
    uPtr(drop2)->Name(::STRINGS[1/*"drop2"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(drop2)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[4/*Fuse.Transform*/])), drop2Translation);
    uPtr(drop3)->Name(::STRINGS[2/*"drop3"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(drop3)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[4/*Fuse.Transform*/])), drop3Translation);
    uPtr(drop4)->Name(::STRINGS[3/*"drop4"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(drop4)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[4/*Fuse.Transform*/])), drop4Translation);
    uPtr(drop5)->Name(::STRINGS[4/*"drop5"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(drop5)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[4/*Fuse.Transform*/])), drop5Translation);
    temp->Value1(true);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Animations.Animator*/])), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Animations.Animator*/])), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Animations.Animator*/])), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Animations.Animator*/])), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Animations.Animator*/])), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Animations.Animator*/])), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Animations.Animator*/])), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Animations.Animator*/])), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Animations.Animator*/])), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Animations.Animator*/])), temp10);
    temp1->Low(0.0f);
    temp1->High(23.6f);
    temp1->Frequency(1.0);
    temp1->Waveform(2);
    temp2->Low(0.0f);
    temp2->High(5.0f);
    temp2->Frequency(1.0);
    temp2->Waveform(2);
    temp3->Low(0.0f);
    temp3->High(23.6f);
    temp3->Frequency(1.0);
    temp3->Waveform(2);
    temp4->Low(0.0f);
    temp4->High(5.0f);
    temp4->Frequency(1.0);
    temp4->Waveform(2);
    temp5->Low(0.0f);
    temp5->High(23.6f);
    temp5->Frequency(1.0);
    temp5->Waveform(2);
    temp6->Low(0.0f);
    temp6->High(5.0f);
    temp6->Frequency(1.0);
    temp6->Waveform(2);
    temp7->Low(0.0f);
    temp7->High(23.6f);
    temp7->Frequency(1.0);
    temp7->Waveform(2);
    temp8->Low(0.0f);
    temp8->High(5.0f);
    temp8->Frequency(1.0);
    temp8->Waveform(2);
    temp9->Low(0.0f);
    temp9->High(23.6f);
    temp9->Frequency(1.0);
    temp9->Waveform(2);
    temp10->Low(0.0f);
    temp10->High(5.0f);
    temp10->Frequency(1.0);
    temp10->Waveform(2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[3/*Fuse.Node*/])), drop1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[3/*Fuse.Node*/])), drop2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[3/*Fuse.Node*/])), drop3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[3/*Fuse.Node*/])), drop4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[3/*Fuse.Node*/])), drop5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[9/*Fuse.Behavior*/])), temp);
}

// public RaindropRow New() [static] :26
RaindropRow* RaindropRow::New3()
{
    RaindropRow* obj1 = (RaindropRow*)uNew(RaindropRow_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

} // ::g
