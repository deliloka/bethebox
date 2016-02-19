// This file was generated based on '/Users/n07101/dev/fuseProjects/outsideTheBox/build/Android/Preview/cache/Sun.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.outsideTheBox_bundle.h>
#include <_root.outsideTheBox_FuseScaling_float_Factor_Property.h>
#include <_root.Sun.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Cycle-1.h>
#include <Fuse.Animations.Spin.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Node.h>
#include <Fuse.Scaling.h>
#include <Fuse.Transform.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Uno.Bool.h>
#include <Uno.BundleFile.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
static uString* STRINGS[1];
static uType* TYPES[14];

namespace g{

// public partial sealed class Sun :1
// {
// static Sun() :6
static void Sun__cctor_5_fn(uType* __type)
{
}

::g::Fuse::Controls::Panel_type* Sun_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 110;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Sun);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Sun", options);
    type->SetBase(::g::Fuse::Controls::Image_typeof());
    type->fp_ctor_ = (void*)Sun__New3_fn;
    type->fp_cctor_ = Sun__cctor_5_fn;
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
    ::STRINGS[0] = uString::Const("sunImage");
    ::TYPES[0] = ::g::Fuse::Animations::Cycle_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[1] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[2] = ::g::Fuse::Controls::Image_typeof();
    ::TYPES[3] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[4] = ::g::Fuse::Node_typeof();
    ::TYPES[5] = ::g::Fuse::Scaling_typeof();
    ::TYPES[6] = ::g::Fuse::Triggers::WhileBool_typeof();
    ::TYPES[7] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[8] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[9] = ::g::Fuse::Animations::Spin_typeof();
    ::TYPES[10] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[11] = ::g::outsideTheBox_bundle_typeof();
    ::TYPES[12] = ::g::Fuse::Behavior_typeof();
    ::TYPES[13] = ::g::Fuse::Transform_typeof();
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
    type->SetFields(107,
        ::g::Fuse::Translation_typeof(), offsetof(::g::Sun, sunImage), 0,
        ::g::Fuse::Scaling_typeof(), offsetof(::g::Sun, sunScaling), 0,
        ::g::outsideTheBox_FuseScaling_float_Factor_Property_typeof(), offsetof(::g::Sun, sunScaling_Factor_inst), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Sun__New3_fn, 0, true, Sun_typeof(), 0));
    return type;
}

// public Sun() :9
void Sun__ctor_5_fn(Sun* __this)
{
    __this->ctor_5();
}

// private void InitializeUX() :13
void Sun__InitializeUX_fn(Sun* __this)
{
    __this->InitializeUX();
}

// public Sun New() :9
void Sun__New3_fn(Sun** __retval)
{
    *__retval = Sun::New3();
}

// public Sun() [instance] :9
void Sun::ctor_5()
{
    uStackFrame __("Sun", ".ctor()");
    ctor_4();
    InitializeUX();
}

// private void InitializeUX() [instance] :13
void Sun::InitializeUX()
{
    uStackFrame __("Sun", "InitializeUX()");
    sunScaling = ::g::Fuse::Scaling::New1();
    sunScaling_Factor_inst = ::g::outsideTheBox_FuseScaling_float_Factor_Property::New1(sunScaling);
    sunImage = ::g::Fuse::Translation::New1();
    ::g::Fuse::Triggers::WhileTrue* temp = ::g::Fuse::Triggers::WhileTrue::New1();
    ::g::Fuse::Animations::Spin* temp1 = ::g::Fuse::Animations::Spin::New1();
    ::g::Fuse::Animations::Cycle* temp2 = (::g::Fuse::Animations::Cycle*)::g::Fuse::Animations::Cycle::New1(::TYPES[0/*Fuse.Animations.Cycle<float>*/], sunScaling_Factor_inst);
    Color(::g::Uno::Float4__New2(1.0f, 0.8352941f, 0.04705882f, 1.0f));
    Alignment(10);
    Margin(::g::Uno::Float4__New2(0.0f, 25.0f, 0.0f, 25.0f));
    Name(::STRINGS[0/*"sunImage"*/]);
    ::g::Fuse::Controls::Grid::SetRow(this, 1);
    uPtr(sunScaling)->Factor(1.0f);
    temp->Value1(true);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Animations.Animator*/])), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Animations.Animator*/])), temp2);
    temp1->Frequency(0.05);
    temp1->Target(this);
    temp2->Low(1.0f);
    temp2->High(1.05f);
    temp2->Frequency(1.5);
    File(::g::Uno::UX::BundleFileSource::New1(::g::outsideTheBox_bundle::sun5ab94b15()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[12/*Fuse.Behavior*/])), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Fuse.Transform*/])), sunImage);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Fuse.Transform*/])), sunScaling);
}

// public Sun New() [static] :9
Sun* Sun::New3()
{
    Sun* obj1 = (Sun*)uNew(Sun_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

} // ::g
