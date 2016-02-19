// This file was generated based on '/Users/n07101/dev/fuseProjects/outsideTheBox/build/Android/Preview/cache/SunWithCloud.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.outsideTheBox_bundle.h>
#include <_root.outsideTheBox_FuseTranslation_float_X_Property.h>
#include <_root.Sun.h>
#include <_root.SunWithCloud.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Cycle-1.h>
#include <Fuse.Animations.CycleWaveform.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Effects.Effect.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Node.h>
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
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
static uType* TYPES[15];

namespace g{

// public partial sealed class SunWithCloud :1
// {
// static SunWithCloud() :5
static void SunWithCloud__cctor_4_fn(uType* __type)
{
}

::g::Fuse::Controls::Panel_type* SunWithCloud_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 102;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(SunWithCloud);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("SunWithCloud", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)SunWithCloud__New2_fn;
    type->fp_cctor_ = SunWithCloud__cctor_4_fn;
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
    ::TYPES[0] = ::g::Fuse::Animations::Cycle_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[1] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[3] = ::g::Fuse::Controls::Image_typeof();
    ::TYPES[4] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[5] = ::g::outsideTheBox_bundle_typeof();
    ::TYPES[6] = ::g::Fuse::Effects::Effect_typeof();
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[8] = ::g::Fuse::Transform_typeof();
    ::TYPES[9] = ::g::Fuse::Effects::DropShadow_typeof();
    ::TYPES[10] = ::g::Fuse::Triggers::WhileBool_typeof();
    ::TYPES[11] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[12] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[13] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[14] = ::g::Fuse::Behavior_typeof();
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
    type->SetFields(100,
        ::g::Fuse::Translation_typeof(), offsetof(::g::SunWithCloud, cloudImage), 0,
        ::g::outsideTheBox_FuseTranslation_float_X_Property_typeof(), offsetof(::g::SunWithCloud, cloudImage_X_inst), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SunWithCloud__New2_fn, 0, true, SunWithCloud_typeof(), 0));
    return type;
}

// public SunWithCloud() :8
void SunWithCloud__ctor_4_fn(SunWithCloud* __this)
{
    __this->ctor_4();
}

// private void InitializeUX() :12
void SunWithCloud__InitializeUX_fn(SunWithCloud* __this)
{
    __this->InitializeUX();
}

// public SunWithCloud New() :8
void SunWithCloud__New2_fn(SunWithCloud** __retval)
{
    *__retval = SunWithCloud::New2();
}

// public SunWithCloud() [instance] :8
void SunWithCloud::ctor_4()
{
    uStackFrame __("SunWithCloud", ".ctor()");
    ctor_3();
    InitializeUX();
}

// private void InitializeUX() [instance] :12
void SunWithCloud::InitializeUX()
{
    uStackFrame __("SunWithCloud", "InitializeUX()");
    cloudImage = ::g::Fuse::Translation::New1();
    cloudImage_X_inst = ::g::outsideTheBox_FuseTranslation_float_X_Property::New1(cloudImage);
    ::g::Fuse::Controls::Image* temp = ::g::Fuse::Controls::Image::New2();
    ::g::Fuse::Effects::DropShadow* temp1 = ::g::Fuse::Effects::DropShadow::New1();
    ::g::Sun* temp2 = ::g::Sun::New3();
    ::g::Fuse::Triggers::WhileTrue* temp3 = ::g::Fuse::Triggers::WhileTrue::New1();
    ::g::Fuse::Animations::Cycle* temp4 = (::g::Fuse::Animations::Cycle*)::g::Fuse::Animations::Cycle::New1(::TYPES[0/*Fuse.Animations.Cycle<float>*/], cloudImage_X_inst);
    temp->Alignment(10);
    temp->Margin(::g::Uno::Float4__New2(0.0f, 50.0f, 0.0f, 50.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp, 1);
    temp->File(::g::Uno::UX::BundleFileSource::New1(::g::outsideTheBox_bundle::cloudf6cd2dfe()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Effects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Effects.Effect*/])), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Transform*/])), cloudImage);
    temp1->Size(50.0f);
    temp3->Value1(true);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[12/*Fuse.Animations.Animator*/])), temp4);
    temp4->Low(-100.0f);
    temp4->High(100.0f);
    temp4->Frequency(0.2);
    temp4->Waveform(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Node*/])), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Node*/])), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp3);
}

// public SunWithCloud New() [static] :8
SunWithCloud* SunWithCloud::New2()
{
    SunWithCloud* obj1 = (SunWithCloud*)uNew(SunWithCloud_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

} // ::g
